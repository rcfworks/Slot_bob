using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace scripts.bob.mvc.view.components
{
    public class PaylineView : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start() { }

        // Update is called once per frame
        void Update() { }

        public void OnExit()
        {
            this.gameObject.SetActive(false);
        }
    }
}
