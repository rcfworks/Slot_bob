using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace scripts.bob.interfaces
{
    interface ISlotData
    {
        int Id { get; set; }
        string Symbol { get; set; }
        Sprite TextureSprite { get; set; }
    }
}
