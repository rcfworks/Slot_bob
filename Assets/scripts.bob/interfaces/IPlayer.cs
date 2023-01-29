namespace scripts.bob.interfaces
{
    public interface IPlayer
    {
        int AddBet { get; set; }
        int MinusBet { get; set; }
        int TotalBet { get; set; }
        int Balance { get; set; }
        int DeductBalance { get; set; }
        int Winnings { get; set; }
    }
}
