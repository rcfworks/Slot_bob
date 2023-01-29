using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using scripts.bob.interfaces;

namespace scripts.bob.mvc.model.vO
{
    public class vOPayoutData : IPayout
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public List<int> payout { get; set; }
    }
}
