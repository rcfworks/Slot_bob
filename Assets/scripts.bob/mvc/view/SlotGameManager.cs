using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;
using scripts.bob.interfaces;
using scripts.bob.mvc.model.vO;
using scripts.bob.signals;
using scripts.bob.configuration;

namespace scripts.bob.mvc.view
{
    public class SlotGameManager : MonoBehaviour
    {
        [Inject]
        IModel model;

        void Awake()
        {
            Application.targetFrameRate = 60;
        }

        // Start is called before the first frame update
        void Start()
        {
            AppConfig.PAYLINES.Add(0, new List<int>() { 0, 0, 0, 0, 0 });
            AppConfig.PAYLINES.Add(1, new List<int>() { 1, 1, 1, 1, 1 });
            AppConfig.PAYLINES.Add(2, new List<int>() { 2, 2, 2, 2, 2 });
            AppConfig.PAYLINES.Add(3, new List<int>() { 0, 0, 1, 2, 2 });
            AppConfig.PAYLINES.Add(4, new List<int>() { 2, 2, 1, 0, 0 });
            AppConfig.PAYLINES.Add(5, new List<int>() { 0, 0, 0, 1, 2 });
            AppConfig.PAYLINES.Add(6, new List<int>() { 2, 2, 2, 1, 0 });
            AppConfig.PAYLINES.Add(7, new List<int>() { 0, 1, 2, 2, 2 });
            AppConfig.PAYLINES.Add(8, new List<int>() { 2, 1, 0, 0, 0 });
            AppConfig.PAYLINES.Add(9, new List<int>() { 0, 1, 2, 1, 0 });
            AppConfig.PAYLINES.Add(10, new List<int>() { 2, 1, 0, 1, 2 });
            AppConfig.PAYLINES.Add(11, new List<int>() { 0, 0, 1, 0, 0 });
            AppConfig.PAYLINES.Add(12, new List<int>() { 2, 2, 1, 2, 2 });
            AppConfig.PAYLINES.Add(13, new List<int>() { 1, 1, 0, 1, 1 });
            AppConfig.PAYLINES.Add(14, new List<int>() { 1, 1, 2, 1, 1 });
            AppConfig.PAYLINES.Add(15, new List<int>() { 0, 1, 1, 1, 1 });
            AppConfig.PAYLINES.Add(16, new List<int>() { 0, 1, 1, 1, 1 });
            AppConfig.PAYLINES.Add(17, new List<int>() { 0, 0, 0, 0, 1 });
            AppConfig.PAYLINES.Add(18, new List<int>() { 2, 2, 2, 2, 1 });
            AppConfig.PAYLINES.Add(19, new List<int>() { 2, 2, 1, 2, 2 });

            CreateUser();
        }

        void CreateUser()
        {
            vOPlayer player = new vOPlayer();
            player.Balance = 2000;

            this.model.Player = player;

            LocalSignal signal = new LocalSignal();
            signal.EventType = slotevents.LocalEvents.PlayerCoinUpdate;
            this.model.BroadCastLocalSignal(signal);
        }
    }
}
