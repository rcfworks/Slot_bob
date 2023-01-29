using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using scripts.bob.interfaces;

namespace scripts.bob.mvc.view.components
{
    public class Slot : MonoBehaviour, ISlotData
    {
        [SerializeField]
        Image ImageDisplay;

        [SerializeField]
        public int Id { get; set; } = -1;
        public string Symbol { get; set; }
        public Sprite TextureSprite { get; set; }

        // Start is called before the first frame update
        void Start() { }

        // Update is called once per frame
        void Update() { }

        public void ChangeTexture(Sprite sprite)
        {
            ImageDisplay.sprite = sprite;
        }
    }
}
