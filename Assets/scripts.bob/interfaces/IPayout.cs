using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using scripts.bob.signals;

namespace scripts.bob.interfaces
{
    public interface IPayout
    {
        int Id { get; set; }
        string Name { get; set; }
        List<int> payout { get; set; }
    }
}
