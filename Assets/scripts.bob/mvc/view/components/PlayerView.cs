using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Zenject;
using scripts.bob.signals;
using scripts.bob.interfaces;
using scripts.bob.mvc.model.vO;

namespace scripts.bob.mvc.view.components
{
    public class PlayerView : MonoBehaviour
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

        // Start is called before the first frame update
        void Start() { }

        // Update is called once per frame
        void Update() { }

        private void OnSignalReceived(LocalSignal signal)
        {
            if (signal.EventType == slotevents.LocalEvents.PlayerCoinUpdate)
            {
                IPlayer player = this.model.Player;
                TextLabel.text = player.Balance.ToString();
            }
        }
    }
}
