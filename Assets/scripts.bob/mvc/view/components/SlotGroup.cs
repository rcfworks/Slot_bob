using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using scripts.bob.interfaces;

namespace scripts.bob.mvc.view.components
{
    public class SlotGroup : MonoBehaviour, ISlot
    {
        [SerializeField]
        Slot SlotPanel = null;

        [SerializeField]
        public int MaxSlots = 3;

        public List<Slot> Slots { get; set; } = new List<Slot>();

        void Awake() { }

        public void Initialize()
        {
            for (int i = 0; i < MaxSlots; i++)
            {
                Slot slot = Instantiate(SlotPanel, Vector3.zero, Quaternion.identity);
                Vector3 pos = new Vector3(0, 0, 0);
                slot.transform.SetParent(this.gameObject.transform);
                slot.transform.localScale = new Vector3(1, 1, 1);
                slot.transform.position = pos;

                Slots.Add(slot);
            }
        }

        // Start is called before the first frame update
        void Start() { }

        // Update is called once per frame
        void Update() { }
    }
}
