using Zenject;
using scripts.bob.interfaces;
using scripts.bob.mvc.model;
using UnityEngine;

public class ProjectInstaller : MonoInstaller, IInitializable
{
    public override void InstallBindings()
    {
        SignalBusInstaller.Install(Container);

        #region Model
        Container.Bind<IModel>().To<SlotModel>().AsSingle();
        #endregion
    }

    public void Initialize()
    {
        Debug.Log("I am in ProjectInstaller2!");
    }
}
