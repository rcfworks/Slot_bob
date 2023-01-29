using scripts.bob.configuration;
using System.Collections.Generic;
using scripts.bob.mvc.view.components;

namespace scripts.bob.utils
{
    public sealed class SlotUtils
    {
        private static readonly SlotUtils instance = new SlotUtils();

        static SlotUtils() { }

        private SlotUtils() { }

        public static SlotUtils Instance
        {
            get { return instance; }
        }

        public float GetFinalPosition(float localY)
        {
            if (localY >= 400)
            {
                return 400;
            }
            else if (localY < 400 && localY >= 300)
            {
                return 300;
            }
            else if (localY < 300 && localY >= 200)
            {
                return 200;
            }
            else if (localY < 200 && localY >= 100)
            {
                return 200;
            }
            if (localY < 100)
            {
                return 100;
            }
            return 0;
        }

        public PosArea GetPOSArea(float localY)
        {
            if (localY >= 400)
            {
                return PosArea.P1;
            }
            else if (localY < 400 && localY >= 300)
            {
                return PosArea.P1;
            }
            else if (localY < 300 && localY >= 200)
            {
                return PosArea.P2;
            }
            else if (localY < 200 && localY >= 100)
            {
                return PosArea.P3;
            }
            if (localY < 100)
            {
                return PosArea.P4;
            }
            return 0;
        }

        public List<Slot> GetResultPreSlots(SlotReel reel, PosArea pos)
        {
            List<Slot> slots = new List<Slot>();

            switch (pos)
            {
                case PosArea.P1:
                    slots.Add(reel.SGroup[1].Slots[0] as Slot);
                    slots.Add(reel.SGroup[1].Slots[1] as Slot);
                    slots.Add(reel.SGroup[1].Slots[2] as Slot);
                    break;
                case PosArea.P2:
                    slots.Add(reel.SGroup[0].Slots[2] as Slot);
                    slots.Add(reel.SGroup[1].Slots[0] as Slot);
                    slots.Add(reel.SGroup[1].Slots[1] as Slot);
                    break;
                case PosArea.P3:
                    slots.Add(reel.SGroup[0].Slots[1] as Slot);
                    slots.Add(reel.SGroup[0].Slots[2] as Slot);
                    slots.Add(reel.SGroup[1].Slots[0] as Slot);
                    break;
                case PosArea.P4:
                    slots.Add(reel.SGroup[0].Slots[0] as Slot);
                    slots.Add(reel.SGroup[0].Slots[1] as Slot);
                    slots.Add(reel.SGroup[0].Slots[2] as Slot);
                    break;
            }
            return slots;
        }
    }
}
