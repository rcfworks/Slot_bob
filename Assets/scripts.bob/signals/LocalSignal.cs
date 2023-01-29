using scripts.bob.slotevents;
using scripts.bob.interfaces;

namespace scripts.bob.signals
{
    public struct LocalSignal : ISignal<LocalEvents>
    {
        public LocalSignal(string message, LocalEvents eventType)
        {
            Message = message;
            EventType = eventType;
        }

        public string Message { get; set; }
        public LocalEvents EventType { get; set; }
    }
}
