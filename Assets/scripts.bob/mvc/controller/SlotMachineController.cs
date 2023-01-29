using UnityEngine;
using System.Collections;
using scripts.bob.configuration;
using System.Collections.Generic;
using scripts.bob.mvc.view.components;
using Zenject;
using scripts.bob.signals;
using scripts.bob.interfaces;
using scripts.bob.utils;

namespace scripts.bob.mvc.controller
{
    public class SlotMachineController : MonoBehaviour
    {
        [Inject]
        IModel model;

        public List<SlotReel> Reels { get; set; } = new List<SlotReel>();
        private SignalBus signalBus;
        private int SpinIndex = 0;

        public bool InSequence { get; set; } = false;

        public void Initialize()
        {
            for (int i = 0; i < Reels.Count; i++)
            {
                //Debug.Log("Reels " + Reels[i]);
                SlotReel reel = Reels[i] as SlotReel;
                reel.OnSpinDone += OnReelSpinFinished;
            }
        }

        void Start() { }

        // Update is called once per frame
        void Update()
        {
            // Debug.Log(
            //     "LocalY: "
            //         + Reels[SpinIndex].transform.localPosition.y
            //         + " globaly: "
            //         + Reels[SpinIndex].transform.position.y
            // );
        }

        IEnumerator SpeedSpan()
        {
            yield return new WaitForSeconds(AppConfig.ITERATION_TIME);
            if (SpinIndex >= Reels.Count)
            {
                StopCoroutine("SpeedSpan");
            }
            else
            {
                SpinReel();
            }

            //Debug.Log("SpeedSpan");
        }

        void SpinReel()
        {
            Reels[SpinIndex].Spin();
            SpinIndex++;
            StartCoroutine("SpeedSpan");
        }

        void OnReelSpinFinished(SlotReel reel)
        {
            //Debug.Log("Reels Finished! 1");
            bool IsComplete = true;
            for (int i = 0; i < Reels.Count; i++)
            {
                SlotReel currentReel = Reels[i] as SlotReel;
                if (!currentReel.TurnDone)
                {
                    IsComplete = false;
                    break;
                }
            }
            if (!IsComplete)
                return;

            //Debug.Log("Reels Finished! 2");
            InSequence = false;

            ComputeResults();
        }

        public void OnSpinReel()
        {
            if (!InSequence)
            {
                SpinIndex = 0;
                InSequence = true;
                SpinReel();
            }
        }

        public void ForceStop()
        {
            //Debug.Log("ForceStop!");
            for (int i = 0; i < Reels.Count; i++)
            {
                Debug.Log("Reels " + Reels[i]);
                SlotReel reel = Reels[i] as SlotReel;
                reel.ForceStop();
            }
        }

        void ComputeResults()
        {
            Dictionary<int, List<Slot>> ColumnReels = new Dictionary<int, List<Slot>>();
            for (int i = 0; i < Reels.Count; i++)
            {
                List<Slot> col = SlotUtils.Instance.GetResultPreSlots(Reels[i], Reels[i].FinalArea);
                ColumnReels.Add(i, col);
            }

            int payout = 0;

            foreach (var payline in AppConfig.PAYLINES)
            {
                List<int> pLine = payline.Value;
                string strRes = string.Join(",", pLine);
                //Debug.Log("PaylineKey: " + payline.Key + " value: " + strRes);

                int score = 0;

                for (int i = 0; i < pLine.Count; i++)
                {
                    int target = pLine[i];
                    string symbol = ColumnReels[0][target].Symbol;
                    string vsRes = ColumnReels[i][target].Symbol;
                    if (symbol == vsRes)
                    {
                        score++;
                    }

                    //Debug.Log($"Symbol[{symbol}] = vRes[{vsRes}]");

                    // Sample payouts:
                    // symbol "A" has payout 1 (3 symbols), 5 (4 symbols), 10 (5 symbols)
                    // symbol "B" has payout 2 (3 symbols), 8 (4 symbols), 25 (5 symbols)
                }
                //Debug.Log("DidScore " + score);

                if (score == 3)
                {
                    payout += 1;
                }
                if (score == 4)
                {
                    payout += 5;
                }
                if (score == 3)
                {
                    payout += 10;
                }
            }

            
           // Debug.Log($"Payout[{payout}]");
            if(payout>0)
            {
                IPlayer player = model.Player;
                player.Winnings += payout;
            }

            LocalSignal signal = new LocalSignal();
            signal.EventType = slotevents.LocalEvents.SpinDone;
            this.model.BroadCastLocalSignal(signal);
        }
    }
}
