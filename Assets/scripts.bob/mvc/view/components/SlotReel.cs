using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using scripts.bob.interfaces;
using scripts.bob.configuration;
using scripts.bob.utils;
using System;

namespace scripts.bob.mvc.view.components
{
    public class SlotReel : MonoBehaviour, ISlot
    {
        [SerializeField]
        SlotGroup slotGroup = null;

        [SerializeField]
        int MaxSlotReel;
        public List<SlotGroup> SGroup { get; set; } = new List<SlotGroup>();

        public bool TurnDone { get; set; } = true;
        private bool IsSpinning = false;
        //private int SpinIndex = 0;
        private float SpeedY = 0;
        private float MaxSpeedY = 100.0f;
        private bool IsMaxSpeed = false;

        private bool StopSpin = false;
        public event Action<SlotReel> OnSpinDone;

        public PosArea FinalArea { get; set; }

        void Start() { }

        public void Initialize()
        {
            for (int i = 0; i < MaxSlotReel; i++)
            {
                SlotGroup group = Instantiate(slotGroup, Vector3.zero, Quaternion.identity);
                //group.MaxSlots = 3;
                Vector3 pos = new Vector3(0, 0, 0);
                group.transform.SetParent(this.gameObject.transform);
                (group as ISlot).Initialize();
                group.transform.localScale = new Vector3(1, 1, 1);
                group.transform.position = pos;

                SGroup.Add(group);
            }
        }

        // Update is called once per frame
        void Update()
        {
            //Debug.Log("LocalY: " + this.transform.localPosition.y);

            if (IsSpinning)
            {
                if (!IsMaxSpeed)
                {
                    SpeedY += 2.5f;

                    if (SpeedY >= MaxSpeedY)
                    {
                        IsMaxSpeed = true;
                        SpeedY = MaxSpeedY;
                    }
                }

                if (StopSpin)
                {
                    SpeedY *= 0.72f;
                    //Debug.Log("SpeedY: " + SpeedY);
                    if (SpeedY <= 1)
                    {
                        SpeedY = 0;
                        IsSpinning = false;

                        Vector3 posFinal = this.transform.localPosition;
                        float pos1 = SlotUtils.Instance.GetFinalPosition(posFinal.y);
                        posFinal.y = pos1;
                        LeanTween.cancel(this.gameObject);
                        LeanTween
                            .moveLocalY(this.gameObject, posFinal.y, 0.50f)
                            .setEase(LeanTweenType.easeOutSine)
                            .setOnComplete(() =>
                            {
                                //Debug.Log("Reel completed! " + (OnSpinDone == null));
                                DispatchDone();
                            });
                    }
                }

                Vector3 pos = this.transform.localPosition;
                pos.y -= (float)SpeedY;
                this.transform.localPosition = pos;

                var currY = this.transform.localPosition.y;
                if (currY <= AppConfig.CEILING)
                {
                    this.transform.localPosition = new Vector3(
                        this.transform.localPosition.x,
                        AppConfig.START_LOC,
                        this.transform.localPosition.z
                    );
                }
            }
        }

        public void Spin()
        {
            if (!IsSpinning)
            {
                TurnDone = false;
                StopSpin = false;
                SpeedY = 0.0f;
                IsMaxSpeed = false;
                IsSpinning = true;

                //Debug.Log("Start Speed Span");
                StartCoroutine("SpeedSpan");
            }
        }

        IEnumerator SpeedSpan()
        {
            yield return new WaitForSeconds(AppConfig.SPIN_TIME);
            Debug.Log("SpeedSpan");
            StopSpin = true;
        }

        void DispatchDone()
        {
            // Debug.Log("Reel completed!2 " + (OnSpinDone == null));
            TurnDone = true;

            FinalArea = SlotUtils.Instance.GetPOSArea(this.transform.localPosition.y);

            OnSpinDone?.Invoke(this);
        }

        public void ForceStop()
        {
            StopCoroutine("SpeedSpan");
            IsSpinning = false;
            SpeedY = 0;
            LeanTween.cancel(this.gameObject);
            Vector3 posFinal = this.transform.localPosition;
            float pos1 = SlotUtils.Instance.GetFinalPosition(posFinal.y);
            posFinal.y = pos1;
            LeanTween.cancel(this.gameObject);
            LeanTween
                .moveLocalY(this.gameObject, posFinal.y, 0)
                .setEase(LeanTweenType.easeOutSine)
                .setOnComplete(() =>
                {
                    //Debug.Log("Reel completed! " + (OnSpinDone == null));
                    DispatchDone();
                });
        }
    }
}
