using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;
using scripts.bob.interfaces;
using scripts.bob.signals;
using UnityEngine.UI;

namespace scripts.bob.mvc.controller
{
    public class SpinController : MonoBehaviour
    {
        [Inject]
        IModel model;

        private SignalBus signalBus;

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

        public void OnClickSpin()
        {
            LocalSignal signal = new LocalSignal("", slotevents.LocalEvents.StartSpin);
            model.BroadCastLocalSignal(signal);
        }

        private void OnSignalReceived(LocalSignal signal)
        {
            if (signal.EventType == slotevents.LocalEvents.PlayerCoinUpdate)
            {
                IPlayer player = this.model.Player;
                if (player.TotalBet <= 0)
                {
                    Button button = this.gameObject.GetComponent<Button>();
                    button.enabled = false;
                }
                else
                {
                    Button button = this.gameObject.GetComponent<Button>();
                    button.enabled = true;
                }
            }
        }
    }
}
