using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace scripts.bob.configuration
{
    public enum PosArea
    {
        P1,
        P2,
        P3,
        P4
    };

    public class AppConfig
    {
        public const float CEILING = 100f;
        public const float START_LOC = 400;

        public static List<List<float>> FINAL_POS = new List<List<float>>();
        public static List<string> symbols = new List<string>
        {
            "a",
            "b",
            "c",
            "d",
            "e",
            "f",
            "g",
            "h",
            "i",
            "j",
            "k",
            "l",
            "m",
            "n",
            "o",
            "p"
        };

        public static Dictionary<int, List<int>> PAYLINES = new Dictionary<int, List<int>>();

        public static float SPIN_TIME = 1.5f;
        public static float ITERATION_TIME = 0.15f;
    }
}
