using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using scripts.bob.interfaces;

namespace scripts.bob.mvc.model.vO
{
    public class vOPlayer : IPlayer
    {
        public int MinusBet { get; set; }
        public int TotalBet { get; set; }
        public int AddBet { get; set; }
        public int Balance { get; set; }
        public int DeductBalance { get; set; }
        public int Winnings { get; set; }
    }
}
