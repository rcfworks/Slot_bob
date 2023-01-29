using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace scripts.bob.mvc.controller
{
    public class PaylineBtnController : MonoBehaviour
    {
        [SerializeField]
        GameObject PaylinePopup;

        // Start is called before the first frame update
        void Start()
        {
            if (PaylinePopup.activeSelf)
            {
                PaylinePopup.SetActive(false);
            }
        }

        // Update is called once per frame
        void Update() { }

        public void OnShowPayline()
        {
            PaylinePopup.SetActive(true);
        }
    }
}
