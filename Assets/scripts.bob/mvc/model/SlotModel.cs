using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using scripts.bob.interfaces;
using scripts.bob.signals;
using Zenject;

namespace scripts.bob.mvc.model
{
    public class SlotModel : IModel
    {
        private SignalBus signalBus;

        public SlotModel(SignalBus signalBus)
        {
            this.signalBus = signalBus;
        }

        public void BroadCastLocalSignal(LocalSignal signal)
        {
            signalBus.Fire(signal);
        }

        public IPlayer Player { get; set; }
    }
}
