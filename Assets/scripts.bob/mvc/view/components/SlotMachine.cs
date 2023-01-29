using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using scripts.bob.interfaces;
using Zenject;
using scripts.bob.configuration;
using scripts.bob.mvc.controller;
using scripts.bob.signals;

namespace scripts.bob.mvc.view.components
{
    public class SlotMachine : MonoBehaviour, ISlot
    {
        [Inject]
        IModel model;

        [SerializeField]
        List<SlotReel> reels = new List<SlotReel>();

        [SerializeField]
        List<Sprite> sprites = new List<Sprite>();

        // [SerializeField]
        // int MaxReels = 0;
        private SignalBus signalBus;
        SlotMachineController controller = null;

        [Inject]
        void Construct(SignalBus signalBus)
        {
            this.signalBus = signalBus;
            this.signalBus.Subscribe<LocalSignal>(x => OnSignalReceived(x));
        }

        void Start()
        {
            Initialize();
        }

        public void Initialize()
        {
            SetSlotValues();
            controller = this.gameObject.GetComponent<SlotMachineController>();
            controller.Reels = reels;
            controller.Initialize();
        }

        public void SetSlotValues()
        {
            int slotId = 0;

            for (int i = 0; i < reels.Count; i++)
            {
                //reel
                SlotReel reel = reels[i] as SlotReel;
                (reel as ISlot).Initialize();

                //slotgroup
                List<SlotGroup> slotGroup = reel.SGroup;
                //Debug.Log("slot group count: " + slotGroup.Count);
                for (int k = 0; k < slotGroup.Count; k++)
                {
                    List<Slot> slots = slotGroup[k].Slots;

                    for (int j = 0; j < slots.Count; j++)
                    {
                        Slot slot = slots[j] as Slot;
                        slot.Id = slotId;
                        //Debug.Log("SlotId: " + slot.Id);
                        slotId++;

                        if (k == 0)
                        {
                            //original
                            int symbolId = Random.Range(0, 16);
                            (slot as ISlotData).Symbol = AppConfig.symbols[symbolId];
                            (slot as ISlotData).TextureSprite = sprites[symbolId];
                        }
                        else
                        {
                            //duplicate
                            string symbolId = (reel.SGroup[0].Slots[j] as ISlotData).Symbol;
                            (slot as ISlotData).TextureSprite = reel.SGroup[0].Slots[
                                j
                            ].TextureSprite;
                            (slot as ISlotData).Symbol = symbolId;
                        }
                        //Debug.Log("SlotSymbol: " + slot.Symbol);
                        slot.ChangeTexture(slot.TextureSprite);
                    }
                }

                reel.transform.SetParent(this.gameObject.transform);
                RectTransform reelTransform = (RectTransform)reel.transform;
                reel.transform.localPosition = new Vector3(
                    reel.transform.localPosition.x,
                    AppConfig.START_LOC,
                    reel.transform.localPosition.z
                );
            }
        }

        private void OnSignalReceived(LocalSignal signal)
        {
            if (signal.EventType == slotevents.LocalEvents.StartSpin)
            {
                IPlayer player = this.model.Player;

                if (controller.InSequence)
                {
                    StopCoroutine("ReplaceValues");
                    SetSlotValues();
                    controller.ForceStop();
                    return;
                }
                if (player.TotalBet <= 0)
                    return;
                if (player.Balance <= 0)
                    return;

                controller.OnSpinReel();
                StartCoroutine("ReplaceValues");
            }
            if (signal.EventType == slotevents.LocalEvents.SpinDone)
            {
                IPlayer player = this.model.Player;
                player.TotalBet = 0;

                Debug.Log("Spin Done!");
            }
        }

        IEnumerator ReplaceValues()
        {
            yield return new WaitForSeconds(0.75f);
            SetSlotValues();
            StopCoroutine("ReplaceValues");
        }
    }
}
