namespace scripts.bob.interfaces
{
    interface ISignal<T>
    {
        string Message { get; set; }
        T EventType { get; set; }
    }
}
