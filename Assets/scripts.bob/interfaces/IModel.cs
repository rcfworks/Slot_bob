using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using scripts.bob.signals;

namespace scripts.bob.interfaces
{
    public interface IModel
    {
        void BroadCastLocalSignal(LocalSignal signal);

        IPlayer Player { get; set; }
    }
}
