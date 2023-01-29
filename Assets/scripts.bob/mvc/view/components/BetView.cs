using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Zenject;
using scripts.bob.signals;
using scripts.bob.interfaces;
using scripts.bob.mvc.model.vO;
using UnityEngine.UI;

namespace scripts.bob.mvc.view.components
{
    public class BetView : MonoBehaviour
    {
        [Inject]
        IModel model;

        [SerializeField]
        protected TextMeshProUGUI TextLabel;

        [SerializeField]
        Image DisplayImage;

        [SerializeField]
        Sprite RedSprite;

        [SerializeField]
        Sprite GreenSprite;

        private SignalBus signalBus;
        private int BetValue = 1;

        [Inject]
        void Construct(SignalBus signalBus)
        {
            this.signalBus = signalBus;
            this.signalBus.Subscribe<LocalSignal>(x => OnSignalReceived(x));
        }

        // Start is called before the first frame update
        void Start() { }

        // Update is called once per frame
        void Update() { }

        public void OnAddBet()
        {
            IPlayer player = this.model.Player;

            int totalBet = player.TotalBet;

            if (totalBet + BetValue > player.Balance)
                return;

            player.AddBet = BetValue;
            player.TotalBet += BetValue;
            player.Balance -= BetValue;

            TextLabel.text = player.TotalBet.ToString();

            LocalSignal signal = new LocalSignal();
            signal.EventType = slotevents.LocalEvents.PlayerCoinUpdate;
            this.model.BroadCastLocalSignal(signal);
        }

        public void OnMinusBet()
        {
            IPlayer player = this.model.Player;
            if (player.TotalBet > 0)
            {
                player.Balance += BetValue;
                player.TotalBet -= BetValue;
            }
            else if (player.TotalBet <= 0)
            {
                player.TotalBet = 0;
            }

            TextLabel.text = player.TotalBet.ToString();

            LocalSignal signal = new LocalSignal();
            signal.EventType = slotevents.LocalEvents.PlayerCoinUpdate;
            this.model.BroadCastLocalSignal(signal);
        }

        private void OnSignalReceived(LocalSignal signal)
        {
            if (signal.EventType == slotevents.LocalEvents.StartSpin)
            {
                IPlayer player = this.model.Player;
                player.TotalBet = 0;
                TextLabel.text = (player.TotalBet <= 0) ? "PLEASE BET" : player.TotalBet.ToString();

                if (player.TotalBet <= 0)
                {
                    DisplayImage.sprite = RedSprite;
                }
                else
                {
                    DisplayImage.sprite = GreenSprite;
                }
            }
            else if (signal.EventType == slotevents.LocalEvents.PlayerCoinUpdate)
            {
                IPlayer player = this.model.Player;
                TextLabel.text = (player.TotalBet <= 0) ? "PLEASE BET" : player.TotalBet.ToString();
                if (player.TotalBet <= 0)
                {
                    DisplayImage.sprite = RedSprite;
                }
                else
                {
                    DisplayImage.sprite = GreenSprite;
                }
            }
        }
    }
}
