using Zenject;
using scripts.bob.interfaces;
using scripts.bob.mvc.model;
using scripts.bob.signals;

public class AppMonoInstaller : MonoInstaller
{
    public override void InstallBindings()
    {
        SignalBusInstaller.Install(Container);
        Container.DeclareSignal<LocalSignal>();

        #region Model
        Container.Bind<IModel>().To<SlotModel>().AsSingle();
        #endregion
    }
}
