using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Zenject;
using scripts.bob.interfaces;
using scripts.bob.signals;

namespace scripts.bob.mvc.view.components
{
    public class WinningsView : MonoBehaviour
    {
        [Inject]
        IModel model;

        [SerializeField]
        protected TextMeshProUGUI TextLabel;
        private SignalBus signalBus;

        [Inject]
        void Construct(SignalBus signalBus)
        {
            this.signalBus = signalBus;
            this.signalBus.Subscribe<LocalSignal>(x => OnSignalReceived(x));
        }

        void Start()
        {
            TextLabel.text = "0";
        }

        private void OnSignalReceived(LocalSignal signal)
        {
            if (signal.EventType == slotevents.LocalEvents.SpinDone)
            {
                IPlayer player = this.model.Player;

                if (player.Winnings > 0)
                {
                    TextLabel.text = player.Winnings.ToString();
                }
                else
                {
                    TextLabel.text = "";
                }
            }
            if (signal.EventType == slotevents.LocalEvents.StartSpin)
            {
                IPlayer player = this.model.Player;
                player.Winnings = 0;
                TextLabel.text = "0";
            }
        }
    }
}
