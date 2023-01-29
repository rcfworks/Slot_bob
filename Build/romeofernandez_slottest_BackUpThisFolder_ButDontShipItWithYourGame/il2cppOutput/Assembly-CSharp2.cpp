#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<scripts.bob.signals.LocalSignal>
struct Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<scripts.bob.mvc.view.components.SlotReel>
struct Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<Zenject.BindingId,Zenject.SignalDeclaration>
struct Dictionary_2_t7184EF8104B12EF8E7427CF0A8EF387A1AD30306;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot>>
struct Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<Zenject.SignalSubscriptionId,Zenject.SignalSubscription>
struct Dictionary_2_tD4FD80E9DA9A6988F30C3D81D1A04CF86911AE17;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct KeyCollection_t017A3C390BDA13690840EBBC865515DB80085258;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot>>
struct KeyCollection_tEC117E8644F18B8071F80CDAFBFD2D2F4E05BEB4;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Single>>
struct List_1_tFF2BC422A193D7F048E03ABCCC32292E892A12F7;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<scripts.bob.interfaces.IPayout>
struct List_1_t3D63A1EFA0B89AA131F173D1FF9FD7BF5D889A17;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot>
struct List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000;
// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotGroup>
struct List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74;
// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotReel>
struct List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot>>
struct ValueCollection_t20C3A87DDD72C9AAD943FD5D7509F661732C6172;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<System.Int32>>[]
struct EntryU5BU5D_t57B820DF2CED255D3C95F7A90EFFBBFB3A07CD9E;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot>>[]
struct EntryU5BU5D_t217F2F397136F608919C07384994E844786DA341;
// System.Collections.Generic.List`1<System.Single>[]
struct List_1U5BU5D_tB3324071AD89A3E4C72B73C6C5D42DCAC9EC993F;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// scripts.bob.interfaces.IPayout[]
struct IPayoutU5BU5D_t240B89D05141A34F7B843193A1E5C1C387C70799;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// scripts.bob.mvc.view.components.Slot[]
struct SlotU5BU5D_tB847EB6346A47FBC737937A1D022CAE9A4ABCA39;
// scripts.bob.mvc.view.components.SlotGroup[]
struct SlotGroupU5BU5D_tB6C1BB878107C421ADE718EAC5CC96272A775381;
// scripts.bob.mvc.view.components.SlotReel[]
struct SlotReelU5BU5D_t2EEDEF300EB53A9667DCB4AEC6E33AC99DB0A210;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// scripts.bob.configuration.AppConfig
struct AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Zenject.DiContainer
struct DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// scripts.bob.interfaces.IModel
struct IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A;
// scripts.bob.interfaces.IPayout
struct IPayout_t4F0008117D1D473C9050472020B88F5BA3916618;
// scripts.bob.interfaces.IPlayer
struct IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// LTDescr
struct LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696;
// LTDescrOptional
struct LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// DentedPixel.LeanDummy
struct LeanDummy_tC93FBA95B1799B72C5A4B8FF57357E65EBD9BCC3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// scripts.bob.mvc.controller.PaylineBtnController
struct PaylineBtnController_tC5101EE6B2BAFA17D00CFAC05632779F0AEFAAC1;
// scripts.bob.mvc.view.components.PaylineView
struct PaylineView_tB2F1C272B1238098E1045E5DF673D7613E507A19;
// scripts.bob.mvc.controller.PlayerController
struct PlayerController_t0EC092E7DD9324F4214A56D034424704EAF8E36A;
// scripts.bob.mvc.view.components.PlayerView
struct PlayerView_tF9F24F8799309C84F2D6FF304775D3481091CD0F;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Zenject.SignalBus
struct SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58;
// scripts.bob.mvc.view.components.Slot
struct Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E;
// scripts.bob.mvc.view.components.SlotGroup
struct SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C;
// scripts.bob.mvc.view.components.SlotMachine
struct SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403;
// scripts.bob.mvc.controller.SlotMachineController
struct SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A;
// scripts.bob.mvc.model.SlotModel
struct SlotModel_t9EAAD895759C87C59B8B6FBD19C9F13AA7F14C93;
// scripts.bob.mvc.view.components.SlotReel
struct SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE;
// scripts.bob.utils.SlotUtils
struct SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08;
// scripts.bob.mvc.controller.SpinController
struct SpinController_t0C7CF26D5F7D7A409CDF79C75C5356A9797DD1F3;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// scripts.bob.mvc.view.components.WinningsView
struct WinningsView_t3F5A8786671827CE9BA44DC33F28325562B112AE;
// scripts.bob.mvc.model.vO.vOPayoutData
struct vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5;
// scripts.bob.mvc.model.vO.vOPlayer
struct vOPlayer_t70A9146571294281EEF74A3BF36DB8B48CEE9838;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// LTDescr/ActionMethodDelegate
struct ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048;
// LTDescr/EaseTypeDelegate
struct EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// Zenject.SignalDeclaration/Factory
struct Factory_t7BBC9051905D47940BC3A6D98FCB88CECB418A4E;
// Zenject.SignalSubscription/Pool
struct Pool_t31A8794B4EB795EC513A3FA531B95A5EC282E623;
// scripts.bob.mvc.view.components.SlotMachine/<ReplaceValues>d__10
struct U3CReplaceValuesU3Ed__10_t5443F5B2907E223A25A30A745A51ACC517C14361;
// scripts.bob.mvc.controller.SlotMachineController/<SpeedSpan>d__14
struct U3CSpeedSpanU3Ed__14_tBE373A048F89B2AA54142A1AD8F1B36AEA98C48A;
// scripts.bob.mvc.view.components.SlotReel/<SpeedSpan>d__26
struct U3CSpeedSpanU3Ed__26_tD9045842244B26AD0C74EF122FD2DD73BA8701F1;
// Zenject.ZenjectSettings/SignalSettings
struct SignalSettings_tC839B6FE68455413D433EB3405AB3C189DB0F89F;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISlotData_t8796012CA8634B36A65D445133C0AECDB70C9347_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISlot_t4D995D5E4A12578198A941FAF0F17B7AFC3F81A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3D63A1EFA0B89AA131F173D1FF9FD7BF5D889A17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFF2BC422A193D7F048E03ABCCC32292E892A12F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReplaceValuesU3Ed__10_t5443F5B2907E223A25A30A745A51ACC517C14361_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpeedSpanU3Ed__14_tBE373A048F89B2AA54142A1AD8F1B36AEA98C48A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpeedSpanU3Ed__26_tD9045842244B26AD0C74EF122FD2DD73BA8701F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral0CD979583B209CE71603EFC4A398E6A9EFA8D872;
IL2CPP_EXTERN_C String_t* _stringLiteral10682F3387EA548C626C08591967BD5D821B3ACA;
IL2CPP_EXTERN_C String_t* _stringLiteral168998393629E1A714FD7E007A48217266662B04;
IL2CPP_EXTERN_C String_t* _stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B;
IL2CPP_EXTERN_C String_t* _stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E;
IL2CPP_EXTERN_C String_t* _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1;
IL2CPP_EXTERN_C String_t* _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral37A50091974FE11FAC57C870272F76245820AA18;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6;
IL2CPP_EXTERN_C String_t* _stringLiteral4D5745313695BB32A7BE264930411F75CE40EF69;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral99F4655F3B5C1EA758306CBFCA4CA3A1B83F2EE0;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E;
IL2CPP_EXTERN_C String_t* _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C1D1E6B823E58EF32445980DC1978FF15CEE34;
IL2CPP_EXTERN_C String_t* _stringLiteralF58A84B32382F45C5D75FD257EE7D6F959DF4AF6;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m742C4CDC916BD797D51AB9955E7C264CCB1F7C19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m0AE2AC8144FB5C156986FEF2D48A890C4D5DA5B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7E92008FF288F67809988B190FB0FBE858EF8288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m94824805BB9A079EEBD9EE0CFE2119AFD9346868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m4B7D3EBF849A31A1BF982AFA7AC3B6C1CF830948_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE805C7E404C3862CCBCEE177DB0A9FCA15081A82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3161A2252C6514F83526C486444FABD60342B213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD6B83071B1B104DF69D4D6F4DC0CFC07CDC895AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A_mF71761F0CF2F0A907F96C179A8B2D38BAE2151EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m3E5D0F91A49DB76075C4538543382C3D8E609A6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0902FCD5AF2D3D26A57DFA0DD07F7EFDE98DECF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m68A64A5551ED14A08ADFF77A239B5AA976BF9032_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAFF42994752190A7D6E163816F75929C1426E150_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m41DA8C00E94EE27A345838EBFF26DBFD2B4F3D1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7354D622656B2C9E626724CFBE9E9396A79CB477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8466E3BF8A9CDE2D323A3473E0DD4BD13DBDBE72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCD2F7A097C7F535E5D087443181C06BCF8126DB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFD9586787C4BFDED3E44489687A01594899AEB3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB640972A9C9E5886BC01188C760BD473CE898F18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCD7A7B32D972CE263739C7471E0F56587924F67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m91C72FBC2A133021D93D734A2D18A02CD3C128AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisSlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C_m926B205A88A7733D6B5D1EE8CB506D11A11F37FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisSlot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E_mF12F465AB0A48AF735F061785597F5795C7950FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerView_U3CConstructU3Eb__3_0_mD2D20182258F83E0978BC2F394620C56EB331BCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SignalBus_Fire_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m63A7CDD20544D3179B3F9B10567F74318CD6CAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SignalBus_Subscribe_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m4A93064D0B9982074DFA0BD9139F9CFDC51E29D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SlotMachineController_OnReelSpinFinished_m1012E37EB3B4E1A16808A7B6B69610E85FC8937E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SlotMachine_U3CConstructU3Eb__5_0_mF9391BADF6987E229D50D40A2651A39E61E7413D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SlotReel_U3CForceStopU3Eb__28_0_mFE3FEC9CECF5BF5E98CD85CD8A2119272EF318F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SlotReel_U3CUpdateU3Eb__24_0_m1FF597B926D77EA103D757B1E227A830D160ED5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpinController_U3CConstructU3Eb__2_0_m4E256A66C0930F3B44945043CDAF816A94BAAB52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReplaceValuesU3Ed__10_System_Collections_IEnumerator_Reset_mF9B5CC2E642826C04378EF310CC9D0C1FC91EA05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpeedSpanU3Ed__14_System_Collections_IEnumerator_Reset_mA3746ECF7381377D58BFCEB0485EFECB95C9941A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpeedSpanU3Ed__26_System_Collections_IEnumerator_Reset_m6A762D99501C1581AA678B38BF1CE0D2D2D54DAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinningsView_U3CConstructU3Eb__3_0_m99AFA7C6102C3EC99F15E3653085503AD4D720DA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t57B820DF2CED255D3C95F7A90EFFBBFB3A07CD9E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t017A3C390BDA13690840EBBC865515DB80085258* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot>>
struct Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t217F2F397136F608919C07384994E844786DA341* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tEC117E8644F18B8071F80CDAFBFD2D2F4E05BEB4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t20C3A87DDD72C9AAD943FD5D7509F661732C6172* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Single>>
struct List_1_tFF2BC422A193D7F048E03ABCCC32292E892A12F7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_tB3324071AD89A3E4C72B73C6C5D42DCAC9EC993F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFF2BC422A193D7F048E03ABCCC32292E892A12F7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	List_1U5BU5D_tB3324071AD89A3E4C72B73C6C5D42DCAC9EC993F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<scripts.bob.interfaces.IPayout>
struct List_1_t3D63A1EFA0B89AA131F173D1FF9FD7BF5D889A17  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IPayoutU5BU5D_t240B89D05141A34F7B843193A1E5C1C387C70799* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3D63A1EFA0B89AA131F173D1FF9FD7BF5D889A17_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IPayoutU5BU5D_t240B89D05141A34F7B843193A1E5C1C387C70799* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot>
struct List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SlotU5BU5D_tB847EB6346A47FBC737937A1D022CAE9A4ABCA39* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SlotU5BU5D_tB847EB6346A47FBC737937A1D022CAE9A4ABCA39* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotGroup>
struct List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SlotGroupU5BU5D_tB6C1BB878107C421ADE718EAC5CC96272A775381* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SlotGroupU5BU5D_tB6C1BB878107C421ADE718EAC5CC96272A775381* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotReel>
struct List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SlotReelU5BU5D_t2EEDEF300EB53A9667DCB4AEC6E33AC99DB0A210* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SlotReelU5BU5D_t2EEDEF300EB53A9667DCB4AEC6E33AC99DB0A210* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// scripts.bob.configuration.AppConfig
struct AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512  : public RuntimeObject
{
};

struct AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_StaticFields
{
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Single>> scripts.bob.configuration.AppConfig::FINAL_POS
	List_1_tFF2BC422A193D7F048E03ABCCC32292E892A12F7* ___FINAL_POS_2;
	// System.Collections.Generic.List`1<System.String> scripts.bob.configuration.AppConfig::symbols
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___symbols_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> scripts.bob.configuration.AppConfig::PAYLINES
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___PAYLINES_4;
	// System.Single scripts.bob.configuration.AppConfig::SPIN_TIME
	float ___SPIN_TIME_5;
	// System.Single scripts.bob.configuration.AppConfig::ITERATION_TIME
	float ___ITERATION_TIME_6;
};
struct Il2CppArrayBounds;

// DentedPixel.LeanDummy
struct LeanDummy_tC93FBA95B1799B72C5A4B8FF57357E65EBD9BCC3  : public RuntimeObject
{
};

// Zenject.SignalBus
struct SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58  : public RuntimeObject
{
	// Zenject.SignalSubscription/Pool Zenject.SignalBus::_subscriptionPool
	Pool_t31A8794B4EB795EC513A3FA531B95A5EC282E623* ____subscriptionPool_0;
	// System.Collections.Generic.Dictionary`2<Zenject.BindingId,Zenject.SignalDeclaration> Zenject.SignalBus::_localDeclarationMap
	Dictionary_2_t7184EF8104B12EF8E7427CF0A8EF387A1AD30306* ____localDeclarationMap_1;
	// Zenject.SignalBus Zenject.SignalBus::_parentBus
	SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* ____parentBus_2;
	// System.Collections.Generic.Dictionary`2<Zenject.SignalSubscriptionId,Zenject.SignalSubscription> Zenject.SignalBus::_subscriptionMap
	Dictionary_2_tD4FD80E9DA9A6988F30C3D81D1A04CF86911AE17* ____subscriptionMap_3;
	// Zenject.ZenjectSettings/SignalSettings Zenject.SignalBus::_settings
	SignalSettings_tC839B6FE68455413D433EB3405AB3C189DB0F89F* ____settings_4;
	// Zenject.SignalDeclaration/Factory Zenject.SignalBus::_signalDeclarationFactory
	Factory_t7BBC9051905D47940BC3A6D98FCB88CECB418A4E* ____signalDeclarationFactory_5;
	// Zenject.DiContainer Zenject.SignalBus::_container
	DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* ____container_6;
};

// scripts.bob.mvc.model.SlotModel
struct SlotModel_t9EAAD895759C87C59B8B6FBD19C9F13AA7F14C93  : public RuntimeObject
{
	// Zenject.SignalBus scripts.bob.mvc.model.SlotModel::signalBus
	SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* ___signalBus_0;
	// scripts.bob.interfaces.IPlayer scripts.bob.mvc.model.SlotModel::<Player>k__BackingField
	RuntimeObject* ___U3CPlayerU3Ek__BackingField_1;
};

// scripts.bob.utils.SlotUtils
struct SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08  : public RuntimeObject
{
};

struct SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08_StaticFields
{
	// scripts.bob.utils.SlotUtils scripts.bob.utils.SlotUtils::instance
	SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08* ___instance_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// scripts.bob.mvc.model.vO.vOPayoutData
struct vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5  : public RuntimeObject
{
	// System.Int32 scripts.bob.mvc.model.vO.vOPayoutData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.String scripts.bob.mvc.model.vO.vOPayoutData::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<System.Int32> scripts.bob.mvc.model.vO.vOPayoutData::<payout>k__BackingField
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpayoutU3Ek__BackingField_2;
};

// scripts.bob.mvc.model.vO.vOPlayer
struct vOPlayer_t70A9146571294281EEF74A3BF36DB8B48CEE9838  : public RuntimeObject
{
	// System.Int32 scripts.bob.mvc.model.vO.vOPlayer::<MinusBet>k__BackingField
	int32_t ___U3CMinusBetU3Ek__BackingField_0;
	// System.Int32 scripts.bob.mvc.model.vO.vOPlayer::<TotalBet>k__BackingField
	int32_t ___U3CTotalBetU3Ek__BackingField_1;
	// System.Int32 scripts.bob.mvc.model.vO.vOPlayer::<AddBet>k__BackingField
	int32_t ___U3CAddBetU3Ek__BackingField_2;
	// System.Int32 scripts.bob.mvc.model.vO.vOPlayer::<Balance>k__BackingField
	int32_t ___U3CBalanceU3Ek__BackingField_3;
	// System.Int32 scripts.bob.mvc.model.vO.vOPlayer::<DeductBalance>k__BackingField
	int32_t ___U3CDeductBalanceU3Ek__BackingField_4;
	// System.Int32 scripts.bob.mvc.model.vO.vOPlayer::<Winnings>k__BackingField
	int32_t ___U3CWinningsU3Ek__BackingField_5;
};

// scripts.bob.mvc.view.components.SlotMachine/<ReplaceValues>d__10
struct U3CReplaceValuesU3Ed__10_t5443F5B2907E223A25A30A745A51ACC517C14361  : public RuntimeObject
{
	// System.Int32 scripts.bob.mvc.view.components.SlotMachine/<ReplaceValues>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object scripts.bob.mvc.view.components.SlotMachine/<ReplaceValues>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// scripts.bob.mvc.view.components.SlotMachine scripts.bob.mvc.view.components.SlotMachine/<ReplaceValues>d__10::<>4__this
	SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403* ___U3CU3E4__this_2;
};

// scripts.bob.mvc.controller.SlotMachineController/<SpeedSpan>d__14
struct U3CSpeedSpanU3Ed__14_tBE373A048F89B2AA54142A1AD8F1B36AEA98C48A  : public RuntimeObject
{
	// System.Int32 scripts.bob.mvc.controller.SlotMachineController/<SpeedSpan>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object scripts.bob.mvc.controller.SlotMachineController/<SpeedSpan>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// scripts.bob.mvc.controller.SlotMachineController scripts.bob.mvc.controller.SlotMachineController/<SpeedSpan>d__14::<>4__this
	SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* ___U3CU3E4__this_2;
};

// scripts.bob.mvc.view.components.SlotReel/<SpeedSpan>d__26
struct U3CSpeedSpanU3Ed__26_tD9045842244B26AD0C74EF122FD2DD73BA8701F1  : public RuntimeObject
{
	// System.Int32 scripts.bob.mvc.view.components.SlotReel/<SpeedSpan>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object scripts.bob.mvc.view.components.SlotReel/<SpeedSpan>d__26::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// scripts.bob.mvc.view.components.SlotReel scripts.bob.mvc.view.components.SlotReel/<SpeedSpan>d__26::<>4__this
	SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* ___U3CU3E4__this_2;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct KeyValuePair_2_t6016CE3E67A33A7A320F98CE92AD2701F3FD87CB 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// scripts.bob.signals.LocalSignal
struct LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 
{
	// System.String scripts.bob.signals.LocalSignal::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_0;
	// scripts.bob.slotevents.LocalEvents scripts.bob.signals.LocalSignal::<EventType>k__BackingField
	int32_t ___U3CEventTypeU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of scripts.bob.signals.LocalSignal
struct LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_marshaled_pinvoke
{
	char* ___U3CMessageU3Ek__BackingField_0;
	int32_t ___U3CEventTypeU3Ek__BackingField_1;
};
// Native definition for COM marshalling of scripts.bob.signals.LocalSignal
struct LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_marshaled_com
{
	Il2CppChar* ___U3CMessageU3Ek__BackingField_0;
	int32_t ___U3CEventTypeU3Ek__BackingField_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Enumerator_t6686E406103FD9D1F22DDB390521659D07931FF7 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t6016CE3E67A33A7A320F98CE92AD2701F3FD87CB ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// LTDescr
struct LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696  : public RuntimeObject
{
	// System.Boolean LTDescr::toggle
	bool ___toggle_0;
	// System.Boolean LTDescr::useEstimatedTime
	bool ___useEstimatedTime_1;
	// System.Boolean LTDescr::useFrames
	bool ___useFrames_2;
	// System.Boolean LTDescr::useManualTime
	bool ___useManualTime_3;
	// System.Boolean LTDescr::usesNormalDt
	bool ___usesNormalDt_4;
	// System.Boolean LTDescr::hasInitiliazed
	bool ___hasInitiliazed_5;
	// System.Boolean LTDescr::hasExtraOnCompletes
	bool ___hasExtraOnCompletes_6;
	// System.Boolean LTDescr::hasPhysics
	bool ___hasPhysics_7;
	// System.Boolean LTDescr::onCompleteOnRepeat
	bool ___onCompleteOnRepeat_8;
	// System.Boolean LTDescr::onCompleteOnStart
	bool ___onCompleteOnStart_9;
	// System.Boolean LTDescr::useRecursion
	bool ___useRecursion_10;
	// System.Single LTDescr::ratioPassed
	float ___ratioPassed_11;
	// System.Single LTDescr::passed
	float ___passed_12;
	// System.Single LTDescr::delay
	float ___delay_13;
	// System.Single LTDescr::time
	float ___time_14;
	// System.Single LTDescr::speed
	float ___speed_15;
	// System.Single LTDescr::lastVal
	float ___lastVal_16;
	// System.UInt32 LTDescr::_id
	uint32_t ____id_17;
	// System.Int32 LTDescr::loopCount
	int32_t ___loopCount_18;
	// System.UInt32 LTDescr::counter
	uint32_t ___counter_19;
	// System.Single LTDescr::direction
	float ___direction_20;
	// System.Single LTDescr::directionLast
	float ___directionLast_21;
	// System.Single LTDescr::overshoot
	float ___overshoot_22;
	// System.Single LTDescr::period
	float ___period_23;
	// System.Single LTDescr::scale
	float ___scale_24;
	// System.Boolean LTDescr::destroyOnComplete
	bool ___destroyOnComplete_25;
	// UnityEngine.Transform LTDescr::trans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trans_26;
	// UnityEngine.Vector3 LTDescr::fromInternal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromInternal_27;
	// UnityEngine.Vector3 LTDescr::toInternal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toInternal_28;
	// UnityEngine.Vector3 LTDescr::diff
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___diff_29;
	// UnityEngine.Vector3 LTDescr::diffDiv2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___diffDiv2_30;
	// TweenAction LTDescr::type
	int32_t ___type_31;
	// LeanTweenType LTDescr::easeType
	int32_t ___easeType_32;
	// LeanTweenType LTDescr::loopType
	int32_t ___loopType_33;
	// System.Boolean LTDescr::hasUpdateCallback
	bool ___hasUpdateCallback_34;
	// LTDescr/EaseTypeDelegate LTDescr::easeMethod
	EaseTypeDelegate_t731A985425250B1DB3EC8DD69CA4644BD2DCF7CC* ___easeMethod_35;
	// LTDescr/ActionMethodDelegate LTDescr::<easeInternal>k__BackingField
	ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* ___U3CeaseInternalU3Ek__BackingField_36;
	// LTDescr/ActionMethodDelegate LTDescr::<initInternal>k__BackingField
	ActionMethodDelegate_tE88025EB184988CC54961CA0853A56DDA2826048* ___U3CinitInternalU3Ek__BackingField_37;
	// UnityEngine.SpriteRenderer LTDescr::spriteRen
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRen_38;
	// UnityEngine.RectTransform LTDescr::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_39;
	// UnityEngine.UI.Text LTDescr::uiText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___uiText_40;
	// UnityEngine.UI.Image LTDescr::uiImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___uiImage_41;
	// UnityEngine.UI.RawImage LTDescr::rawImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___rawImage_42;
	// UnityEngine.Sprite[] LTDescr::sprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___sprites_43;
	// LTDescrOptional LTDescr::_optional
	LTDescrOptional_t2716C2DBA1D01796CD7686A39C923800FE612BCF* ____optional_44;
};

struct LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696_StaticFields
{
	// System.Single LTDescr::val
	float ___val_45;
	// System.Single LTDescr::dt
	float ___dt_46;
	// UnityEngine.Vector3 LTDescr::newVect
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newVect_47;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<scripts.bob.signals.LocalSignal>
struct Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<scripts.bob.mvc.view.components.SlotReel>
struct Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// scripts.bob.mvc.controller.PaylineBtnController
struct PaylineBtnController_tC5101EE6B2BAFA17D00CFAC05632779F0AEFAAC1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject scripts.bob.mvc.controller.PaylineBtnController::PaylinePopup
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PaylinePopup_4;
};

// scripts.bob.mvc.view.components.PaylineView
struct PaylineView_tB2F1C272B1238098E1045E5DF673D7613E507A19  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// scripts.bob.mvc.controller.PlayerController
struct PlayerController_t0EC092E7DD9324F4214A56D034424704EAF8E36A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// scripts.bob.mvc.view.components.PlayerView
struct PlayerView_tF9F24F8799309C84F2D6FF304775D3481091CD0F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// scripts.bob.interfaces.IModel scripts.bob.mvc.view.components.PlayerView::model
	RuntimeObject* ___model_4;
	// TMPro.TextMeshProUGUI scripts.bob.mvc.view.components.PlayerView::TextLabel
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___TextLabel_5;
	// Zenject.SignalBus scripts.bob.mvc.view.components.PlayerView::signalBus
	SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* ___signalBus_6;
};

// scripts.bob.mvc.view.components.Slot
struct Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image scripts.bob.mvc.view.components.Slot::ImageDisplay
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___ImageDisplay_4;
	// System.Int32 scripts.bob.mvc.view.components.Slot::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_5;
	// System.String scripts.bob.mvc.view.components.Slot::<Symbol>k__BackingField
	String_t* ___U3CSymbolU3Ek__BackingField_6;
	// UnityEngine.Sprite scripts.bob.mvc.view.components.Slot::<TextureSprite>k__BackingField
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___U3CTextureSpriteU3Ek__BackingField_7;
};

// scripts.bob.mvc.view.components.SlotGroup
struct SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// scripts.bob.mvc.view.components.Slot scripts.bob.mvc.view.components.SlotGroup::SlotPanel
	Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* ___SlotPanel_4;
	// System.Int32 scripts.bob.mvc.view.components.SlotGroup::MaxSlots
	int32_t ___MaxSlots_5;
	// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot> scripts.bob.mvc.view.components.SlotGroup::<Slots>k__BackingField
	List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* ___U3CSlotsU3Ek__BackingField_6;
};

// scripts.bob.mvc.view.components.SlotMachine
struct SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// scripts.bob.interfaces.IModel scripts.bob.mvc.view.components.SlotMachine::model
	RuntimeObject* ___model_4;
	// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotReel> scripts.bob.mvc.view.components.SlotMachine::reels
	List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* ___reels_5;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> scripts.bob.mvc.view.components.SlotMachine::sprites
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___sprites_6;
	// Zenject.SignalBus scripts.bob.mvc.view.components.SlotMachine::signalBus
	SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* ___signalBus_7;
	// scripts.bob.mvc.controller.SlotMachineController scripts.bob.mvc.view.components.SlotMachine::controller
	SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* ___controller_8;
};

// scripts.bob.mvc.controller.SlotMachineController
struct SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// scripts.bob.interfaces.IModel scripts.bob.mvc.controller.SlotMachineController::model
	RuntimeObject* ___model_4;
	// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotReel> scripts.bob.mvc.controller.SlotMachineController::<Reels>k__BackingField
	List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* ___U3CReelsU3Ek__BackingField_5;
	// Zenject.SignalBus scripts.bob.mvc.controller.SlotMachineController::signalBus
	SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* ___signalBus_6;
	// System.Int32 scripts.bob.mvc.controller.SlotMachineController::SpinIndex
	int32_t ___SpinIndex_7;
	// System.Boolean scripts.bob.mvc.controller.SlotMachineController::<InSequence>k__BackingField
	bool ___U3CInSequenceU3Ek__BackingField_8;
};

// scripts.bob.mvc.view.components.SlotReel
struct SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// scripts.bob.mvc.view.components.SlotGroup scripts.bob.mvc.view.components.SlotReel::slotGroup
	SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* ___slotGroup_4;
	// System.Int32 scripts.bob.mvc.view.components.SlotReel::MaxSlotReel
	int32_t ___MaxSlotReel_5;
	// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotGroup> scripts.bob.mvc.view.components.SlotReel::<SGroup>k__BackingField
	List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* ___U3CSGroupU3Ek__BackingField_6;
	// System.Boolean scripts.bob.mvc.view.components.SlotReel::<TurnDone>k__BackingField
	bool ___U3CTurnDoneU3Ek__BackingField_7;
	// System.Boolean scripts.bob.mvc.view.components.SlotReel::IsSpinning
	bool ___IsSpinning_8;
	// System.Single scripts.bob.mvc.view.components.SlotReel::SpeedY
	float ___SpeedY_9;
	// System.Single scripts.bob.mvc.view.components.SlotReel::MaxSpeedY
	float ___MaxSpeedY_10;
	// System.Boolean scripts.bob.mvc.view.components.SlotReel::IsMaxSpeed
	bool ___IsMaxSpeed_11;
	// System.Boolean scripts.bob.mvc.view.components.SlotReel::StopSpin
	bool ___StopSpin_12;
	// System.Action`1<scripts.bob.mvc.view.components.SlotReel> scripts.bob.mvc.view.components.SlotReel::OnSpinDone
	Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* ___OnSpinDone_13;
	// scripts.bob.configuration.PosArea scripts.bob.mvc.view.components.SlotReel::<FinalArea>k__BackingField
	int32_t ___U3CFinalAreaU3Ek__BackingField_14;
};

// scripts.bob.mvc.controller.SpinController
struct SpinController_t0C7CF26D5F7D7A409CDF79C75C5356A9797DD1F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// scripts.bob.interfaces.IModel scripts.bob.mvc.controller.SpinController::model
	RuntimeObject* ___model_4;
	// Zenject.SignalBus scripts.bob.mvc.controller.SpinController::signalBus
	SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* ___signalBus_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// scripts.bob.mvc.view.components.WinningsView
struct WinningsView_t3F5A8786671827CE9BA44DC33F28325562B112AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// scripts.bob.interfaces.IModel scripts.bob.mvc.view.components.WinningsView::model
	RuntimeObject* ___model_4;
	// TMPro.TextMeshProUGUI scripts.bob.mvc.view.components.WinningsView::TextLabel
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___TextLabel_5;
	// Zenject.SignalBus scripts.bob.mvc.view.components.WinningsView::signalBus
	SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* ___signalBus_6;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<scripts.bob.signals.LocalSignal>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mFF98EC4D00360B49568348B418A50E0A997DCF49_gshared (Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Zenject.SignalBus::Subscribe<scripts.bob.signals.LocalSignal>(System.Action`1<TSignal>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalBus_Subscribe_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m4A93064D0B9982074DFA0BD9139F9CFDC51E29D4_gshared (SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* __this, Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E* ___callback0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void Zenject.SignalBus::Fire<scripts.bob.signals.LocalSignal>(TSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalBus_Fire_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m63A7CDD20544D3179B3F9B10567F74318CD6CAD3_gshared (SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* __this, LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 ___signal0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// System.String System.String::Join<System.Int32>(System.String,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C_gshared (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<scripts.bob.signals.LocalSignal>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFF98EC4D00360B49568348B418A50E0A997DCF49 (Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mFF98EC4D00360B49568348B418A50E0A997DCF49_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Zenject.SignalBus::Subscribe<scripts.bob.signals.LocalSignal>(System.Action`1<TSignal>)
inline void SignalBus_Subscribe_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m4A93064D0B9982074DFA0BD9139F9CFDC51E29D4 (SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* __this, Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E* ___callback0, const RuntimeMethod* method)
{
	((  void (*) (SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58*, Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E*, const RuntimeMethod*))SignalBus_Subscribe_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m4A93064D0B9982074DFA0BD9139F9CFDC51E29D4_gshared)(__this, ___callback0, method);
}
// scripts.bob.slotevents.LocalEvents scripts.bob.signals.LocalSignal::get_EventType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LocalSignal_get_EventType_mA2FCD1204C5B527CF1CDE1D85D40B3CC09F5F587_inline (LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.view.components.PlayerView::OnSignalReceived(scripts.bob.signals.LocalSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerView_OnSignalReceived_m8E339B844A730731B8E71E14655E88E04234D52E (PlayerView_tF9F24F8799309C84F2D6FF304775D3481091CD0F* __this, LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 ___signal0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<scripts.bob.mvc.view.components.Slot>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* Object_Instantiate_TisSlot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E_mF12F465AB0A48AF735F061785597F5795C7950FE (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* (*) (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot> scripts.bob.mvc.view.components.SlotGroup::get_Slots()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* SlotGroup_get_Slots_m355254855D355E3A36A09461DE03300F685B310B_inline (SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot>::Add(T)
inline void List_1_Add_mAFF42994752190A7D6E163816F75929C1426E150_inline (List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* __this, Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000*, Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot>::.ctor()
inline void List_1__ctor_mCD2F7A097C7F535E5D087443181C06BCF8126DB4 (List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void scripts.bob.mvc.view.components.SlotMachine::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachine_Initialize_mE7541777F4ACCABF469DFC1586C5F168D398F91A (SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403* __this, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.view.components.SlotMachine::SetSlotValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachine_SetSlotValues_m5B687B28465CA64DC4FA6FA00263730E9AB01914 (SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<scripts.bob.mvc.controller.SlotMachineController>()
inline SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* GameObject_GetComponent_TisSlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A_mF71761F0CF2F0A907F96C179A8B2D38BAE2151EB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void scripts.bob.mvc.controller.SlotMachineController::set_Reels(System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotReel>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SlotMachineController_set_Reels_mAF1AEB373D7E68599159B5CAD1CFA16A2529E414_inline (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* ___value0, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.controller.SlotMachineController::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachineController_Initialize_mB48C87CD9680531695C7B376C170279B7368E47F (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotReel>::get_Item(System.Int32)
inline SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858 (List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* (*) (List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotGroup> scripts.bob.mvc.view.components.SlotReel::get_SGroup()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* SlotReel_get_SGroup_m46234709AC147A968CF909086BE211E8DC2AC2DC_inline (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotGroup>::get_Item(System.Int32)
inline SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* List_1_get_Item_m91C72FBC2A133021D93D734A2D18A02CD3C128AC (List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* (*) (List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot>::get_Item(System.Int32)
inline Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743 (List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* (*) (List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void scripts.bob.mvc.view.components.Slot::set_Id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Slot_set_Id_mE4058AD5E4818C601C08DCBE72364EB4EAC9269C_inline (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Item(System.Int32)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Sprite scripts.bob.mvc.view.components.Slot::get_TextureSprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Slot_get_TextureSprite_m7BD78B81CDC616AC9D0CA6CFF70A73439326CAAF_inline (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.view.components.Slot::ChangeTexture(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slot_ChangeTexture_m2B6C30CAA39C019F65C1870308C87C44AC4BCEB7 (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot>::get_Count()
inline int32_t List_1_get_Count_mB640972A9C9E5886BC01188C760BD473CE898F18_inline (List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotGroup>::get_Count()
inline int32_t List_1_get_Count_mCD7A7B32D972CE263739C7471E0F56587924F67A_inline (List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotReel>::get_Count()
inline int32_t List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_inline (List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean scripts.bob.mvc.controller.SlotMachineController::get_InSequence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SlotMachineController_get_InSequence_m17E82F21FD7CE2AE639E9EB94B5C97EB23456F8F_inline (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.controller.SlotMachineController::ForceStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachineController_ForceStop_mEA6E94221DF07CAAF693D492525E546807F607EC (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.controller.SlotMachineController::OnSpinReel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachineController_OnSpinReel_mE94516D9AB144F50F078EB2D061F786EB5CE53D3 (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.view.components.SlotMachine/<ReplaceValues>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReplaceValuesU3Ed__10__ctor_mAD803EFF026C70A8400542C0D334C6656D19A982 (U3CReplaceValuesU3Ed__10_t5443F5B2907E223A25A30A745A51ACC517C14361* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotReel>::.ctor()
inline void List_1__ctor_m8466E3BF8A9CDE2D323A3473E0DD4BD13DBDBE72 (List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::.ctor()
inline void List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void scripts.bob.mvc.view.components.SlotMachine::OnSignalReceived(scripts.bob.signals.LocalSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachine_OnSignalReceived_m37B8295DFAFADF606C42E644128508CACE7EB740 (SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403* __this, LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 ___signal0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<scripts.bob.mvc.view.components.SlotGroup>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* Object_Instantiate_TisSlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C_m926B205A88A7733D6B5D1EE8CB506D11A11F37FA (SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* (*) (SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotGroup>::Add(T)
inline void List_1_Add_m68A64A5551ED14A08ADFF77A239B5AA976BF9032_inline (List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* __this, SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74*, SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// scripts.bob.utils.SlotUtils scripts.bob.utils.SlotUtils::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08* SlotUtils_get_Instance_m5B3A7D238718096F432D45FD97581FBC75F9DAB6_inline (const RuntimeMethod* method) ;
// System.Single scripts.bob.utils.SlotUtils::GetFinalPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SlotUtils_GetFinalPosition_m20B3676AF15E7DCC52264639422FF52032B7DA0F (SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08* __this, float ___localY0, const RuntimeMethod* method) ;
// System.Void LeanTween::cancel(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTween_cancel_mD16E6D2B29E547FEF03D37E4289F29605AB377A8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// LTDescr LeanTween::moveLocalY(UnityEngine.GameObject,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LeanTween_moveLocalY_mB6E7AA81B9ACA6E7847108F0CF96CFF5D3506A61 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, float ___to1, float ___time2, const RuntimeMethod* method) ;
// LTDescr LTDescr::setEase(LeanTweenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LTDescr_setEase_m095FF057D085E9426DDA13E665D6EF3F0704F60C (LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* __this, int32_t ___easeType0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// LTDescr LTDescr::setOnComplete(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* LTDescr_setOnComplete_m71532B82E69D79F08953DFCECE0E2F024F4A06E4 (LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete0, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.view.components.SlotReel::set_TurnDone(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SlotReel_set_TurnDone_m54841B246F0744B18B3C53DD1ECB07C8E1675851_inline (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.view.components.SlotReel/<SpeedSpan>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedSpanU3Ed__26__ctor_m89F7CE1508626C10A223196950653BE4E83F57CF (U3CSpeedSpanU3Ed__26_tD9045842244B26AD0C74EF122FD2DD73BA8701F1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// scripts.bob.configuration.PosArea scripts.bob.utils.SlotUtils::GetPOSArea(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SlotUtils_GetPOSArea_m48FAF19180308A0954D6EE70EA2D202367B663FC (SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08* __this, float ___localY0, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.view.components.SlotReel::set_FinalArea(scripts.bob.configuration.PosArea)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SlotReel_set_FinalArea_m39C52920F51961D5841416A59079FA6468C04B4F_inline (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<scripts.bob.mvc.view.components.SlotReel>::Invoke(T)
inline void Action_1_Invoke_mCC09CA5C15E14DD458FB75048549EF979B0A2A75_inline (Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* __this, SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773*, SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotGroup>::.ctor()
inline void List_1__ctor_mFD9586787C4BFDED3E44489687A01594899AEB3D (List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void scripts.bob.mvc.view.components.SlotReel::DispatchDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_DispatchDone_mE2AB7F04C0308F4A0F8A84AE6D3B41481642B011 (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.view.components.WinningsView::OnSignalReceived(scripts.bob.signals.LocalSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinningsView_OnSignalReceived_m96F53DF041CC3B2A6B38DFCF9E649E7F8349F1EB (WinningsView_t3F5A8786671827CE9BA44DC33F28325562B112AE* __this, LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 ___signal0, const RuntimeMethod* method) ;
// System.Void Zenject.SignalBus::Fire<scripts.bob.signals.LocalSignal>(TSignal)
inline void SignalBus_Fire_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m63A7CDD20544D3179B3F9B10567F74318CD6CAD3 (SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* __this, LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 ___signal0, const RuntimeMethod* method)
{
	((  void (*) (SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58*, LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45, const RuntimeMethod*))SignalBus_Fire_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m63A7CDD20544D3179B3F9B10567F74318CD6CAD3_gshared)(__this, ___signal0, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotReel> scripts.bob.mvc.controller.SlotMachineController::get_Reels()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* SlotMachineController_get_Reels_m72EA0E492618B9DC703927D6B1735A83A1D22395_inline (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<scripts.bob.mvc.view.components.SlotReel>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5F390F49D0D25825BF7BA11839E429832FFC6339 (Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void scripts.bob.mvc.view.components.SlotReel::add_OnSpinDone(System.Action`1<scripts.bob.mvc.view.components.SlotReel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_add_OnSpinDone_mC7245D8080F979F38F55958A81B17FA784018758 (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* ___value0, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.controller.SlotMachineController/<SpeedSpan>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedSpanU3Ed__14__ctor_m2B85506D3118D10206823CADF66A161D8BFE4AF2 (U3CSpeedSpanU3Ed__14_tBE373A048F89B2AA54142A1AD8F1B36AEA98C48A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.view.components.SlotReel::Spin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_Spin_m3DB9A297BFF1F9CA0098D3098522208D072A23D4 (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) ;
// System.Boolean scripts.bob.mvc.view.components.SlotReel::get_TurnDone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SlotReel_get_TurnDone_m914690427AE789100C86AB765B0490B4ED0DB783_inline (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.controller.SlotMachineController::set_InSequence(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SlotMachineController_set_InSequence_m4EF5E64FE720EC0D1EF0DA4659DDC114E104FC96_inline (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.controller.SlotMachineController::ComputeResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachineController_ComputeResults_mC782CD5BDBC11722D369A46034144532702F16EF (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.controller.SlotMachineController::SpinReel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachineController_SpinReel_m1A8259A08A6D41EA265A244237C6333EA7DE3626 (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.view.components.SlotReel::ForceStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_ForceStop_m32B644235202ADA89D2D3F2C50DE100016DEAD09 (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot>>::.ctor()
inline void Dictionary_2__ctor_m7E92008FF288F67809988B190FB0FBE858EF8288 (Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// scripts.bob.configuration.PosArea scripts.bob.mvc.view.components.SlotReel::get_FinalArea()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SlotReel_get_FinalArea_m82CCAC20278D9D25A95B78D11BF41615FF8B8029_inline (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot> scripts.bob.utils.SlotUtils::GetResultPreSlots(scripts.bob.mvc.view.components.SlotReel,scripts.bob.configuration.PosArea)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* SlotUtils_GetResultPreSlots_mA3FA2999E936779AA36F4B9CE293E6DCFCDDB3E1 (SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08* __this, SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* ___reel0, int32_t ___pos1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m742C4CDC916BD797D51AB9955E7C264CCB1F7C19 (Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832* __this, int32_t ___key0, List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832*, int32_t, List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<scripts.bob.interfaces.IPayout>::.ctor()
inline void List_1__ctor_m7354D622656B2C9E626724CFBE9E9396A79CB477 (List_1_t3D63A1EFA0B89AA131F173D1FF9FD7BF5D889A17* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3D63A1EFA0B89AA131F173D1FF9FD7BF5D889A17*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>::GetEnumerator()
inline Enumerator_t6686E406103FD9D1F22DDB390521659D07931FF7 Dictionary_2_GetEnumerator_m0AE2AC8144FB5C156986FEF2D48A890C4D5DA5B2 (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6686E406103FD9D1F22DDB390521659D07931FF7 (*) (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>::Dispose()
inline void Enumerator_Dispose_mE805C7E404C3862CCBCEE177DB0A9FCA15081A82 (Enumerator_t6686E406103FD9D1F22DDB390521659D07931FF7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6686E406103FD9D1F22DDB390521659D07931FF7*, const RuntimeMethod*))Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>::get_Current()
inline KeyValuePair_2_t6016CE3E67A33A7A320F98CE92AD2701F3FD87CB Enumerator_get_Current_mD6B83071B1B104DF69D4D6F4DC0CFC07CDC895AB_inline (Enumerator_t6686E406103FD9D1F22DDB390521659D07931FF7* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t6016CE3E67A33A7A320F98CE92AD2701F3FD87CB (*) (Enumerator_t6686E406103FD9D1F22DDB390521659D07931FF7*, const RuntimeMethod*))Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>::get_Value()
inline List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* KeyValuePair_2_get_Value_m3E5D0F91A49DB76075C4538543382C3D8E609A6B_inline (KeyValuePair_2_t6016CE3E67A33A7A320F98CE92AD2701F3FD87CB* __this, const RuntimeMethod* method)
{
	return ((  List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* (*) (KeyValuePair_2_t6016CE3E67A33A7A320F98CE92AD2701F3FD87CB*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
// System.String System.String::Join<System.Int32>(System.String,System.Collections.Generic.IEnumerable`1<T>)
inline String_t* String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, RuntimeObject*, const RuntimeMethod*))String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C_gshared)(___separator0, ___values1, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot>>::get_Item(TKey)
inline List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* Dictionary_2_get_Item_m4B7D3EBF849A31A1BF982AFA7AC3B6C1CF830948 (Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* (*) (Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.String scripts.bob.mvc.view.components.Slot::get_Symbol()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Slot_get_Symbol_m480B9BAB94598BCE7453396B763A6252E97AF63B_inline (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.model.vO.vOPayoutData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vOPayoutData__ctor_m47EE6F78B68CD5DE78F97B19DE59E5A2E50829F5 (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* __this, const RuntimeMethod* method) ;
// System.Int32 scripts.bob.mvc.view.components.Slot::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Slot_get_Id_m84E86074A1BB9DBDB52190262E836877CD4DDD6D_inline (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.model.vO.vOPayoutData::set_Id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void vOPayoutData_set_Id_mBE8D874D3A16061B43109671828EE0F12188FBE3_inline (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.model.vO.vOPayoutData::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void vOPayoutData_set_Name_m92F6CE6F22C653020D412EEB4981E13C30ECA1AE_inline (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void scripts.bob.mvc.model.vO.vOPayoutData::set_payout(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void vOPayoutData_set_payout_m48685425BBDFD01D5E898C7986626B3E0E440A4F_inline (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Int32> scripts.bob.mvc.model.vO.vOPayoutData::get_payout()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* vOPayoutData_get_payout_mC75C63AAD13F0CA0CBFC7A1EB45F1DD3B1754924_inline (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<scripts.bob.interfaces.IPayout>::Add(T)
inline void List_1_Add_m0902FCD5AF2D3D26A57DFA0DD07F7EFDE98DECF8_inline (List_1_t3D63A1EFA0B89AA131F173D1FF9FD7BF5D889A17* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3D63A1EFA0B89AA131F173D1FF9FD7BF5D889A17*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>::MoveNext()
inline bool Enumerator_MoveNext_m3161A2252C6514F83526C486444FABD60342B213 (Enumerator_t6686E406103FD9D1F22DDB390521659D07931FF7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6686E406103FD9D1F22DDB390521659D07931FF7*, const RuntimeMethod*))Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared)(__this, method);
}
// System.Void scripts.bob.signals.LocalSignal::set_EventType(scripts.bob.slotevents.LocalEvents)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalSignal_set_EventType_m0CE7B4AC9CAFAE14B9AC023D8FBE17CE9738664C_inline (LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void scripts.bob.signals.LocalSignal::.ctor(System.String,scripts.bob.slotevents.LocalEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalSignal__ctor_m4365C95E79DFD38BD92CDFDC8CC9D8F4B7A10AE5 (LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45* __this, String_t* ___message0, int32_t ___eventType1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void scripts.bob.mvc.controller.SpinController::OnSignalReceived(scripts.bob.signals.LocalSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinController_OnSignalReceived_mDE68A50BAEAD839E6FB0F7F5032F5595C702BC48 (SpinController_t0C7CF26D5F7D7A409CDF79C75C5356A9797DD1F3* __this, LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 ___signal0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Single>>::.ctor()
inline void List_1__ctor_m41DA8C00E94EE27A345838EBFF26DBFD2B4F3D1F (List_1_tFF2BC422A193D7F048E03ABCCC32292E892A12F7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFF2BC422A193D7F048E03ABCCC32292E892A12F7*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>::.ctor()
inline void Dictionary_2__ctor_m94824805BB9A079EEBD9EE0CFE2119AFD9346868 (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scripts.bob.mvc.view.components.PaylineView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaylineView_Start_m4428DE8C4E3B414236A0BEDA048AFD2C4F1A64BD (PaylineView_tB2F1C272B1238098E1045E5DF673D7613E507A19* __this, const RuntimeMethod* method) 
{
	{
		// void Start() { }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.PaylineView::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaylineView_Update_m57D37AE5281C54E681E4B3115AFD7961263D71F8 (PaylineView_tB2F1C272B1238098E1045E5DF673D7613E507A19* __this, const RuntimeMethod* method) 
{
	{
		// void Update() { }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.PaylineView::OnExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaylineView_OnExit_m84123B3BCDD2F1E057A9D462EFF67CA8998A0CDE (PaylineView_tB2F1C272B1238098E1045E5DF673D7613E507A19* __this, const RuntimeMethod* method) 
{
	{
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.PaylineView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaylineView__ctor_m9F5076B5AAE11A463149703B7AAC18D10A933CBD (PaylineView_tB2F1C272B1238098E1045E5DF673D7613E507A19* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scripts.bob.mvc.view.components.PlayerView::Construct(Zenject.SignalBus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerView_Construct_m42A321A7831754B1D0B7E52215277C2BD8F9B8A1 (PlayerView_tF9F24F8799309C84F2D6FF304775D3481091CD0F* __this, SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* ___signalBus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerView_U3CConstructU3Eb__3_0_mD2D20182258F83E0978BC2F394620C56EB331BCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignalBus_Subscribe_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m4A93064D0B9982074DFA0BD9139F9CFDC51E29D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.signalBus = signalBus;
		SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* L_0 = ___signalBus0;
		__this->___signalBus_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signalBus_6), (void*)L_0);
		// this.signalBus.Subscribe<LocalSignal>(x => OnSignalReceived(x));
		SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* L_1 = __this->___signalBus_6;
		Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E* L_2 = (Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E*)il2cpp_codegen_object_new(Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mFF98EC4D00360B49568348B418A50E0A997DCF49(L_2, __this, (intptr_t)((void*)PlayerView_U3CConstructU3Eb__3_0_mD2D20182258F83E0978BC2F394620C56EB331BCD_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		SignalBus_Subscribe_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m4A93064D0B9982074DFA0BD9139F9CFDC51E29D4(L_1, L_2, SignalBus_Subscribe_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m4A93064D0B9982074DFA0BD9139F9CFDC51E29D4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.PlayerView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerView_Start_m4C69EC1D35F4463FB0426485F2D8E85A855C117D (PlayerView_tF9F24F8799309C84F2D6FF304775D3481091CD0F* __this, const RuntimeMethod* method) 
{
	{
		// void Start() { }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.PlayerView::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerView_Update_mEFF8CA2CC13F8A8A37214DFD086684371ADC52A7 (PlayerView_tF9F24F8799309C84F2D6FF304775D3481091CD0F* __this, const RuntimeMethod* method) 
{
	{
		// void Update() { }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.PlayerView::OnSignalReceived(scripts.bob.signals.LocalSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerView_OnSignalReceived_m8E339B844A730731B8E71E14655E88E04234D52E (PlayerView_tF9F24F8799309C84F2D6FF304775D3481091CD0F* __this, LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 ___signal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (signal.EventType == slotevents.LocalEvents.PlayerCoinUpdate)
		int32_t L_0;
		L_0 = LocalSignal_get_EventType_mA2FCD1204C5B527CF1CDE1D85D40B3CC09F5F587_inline((&___signal0), NULL);
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		// IPlayer player = this.model.Player;
		RuntimeObject* L_1 = __this->___model_4;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* scripts.bob.interfaces.IPlayer scripts.bob.interfaces.IModel::get_Player() */, IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		// TextLabel.text = player.Balance.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___TextLabel_5;
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 scripts.bob.interfaces.IPlayer::get_Balance() */, IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.PlayerView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerView__ctor_m2508C0E70901EB02B692C178A26C9D87A5D5CFAB (PlayerView_tF9F24F8799309C84F2D6FF304775D3481091CD0F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.PlayerView::<Construct>b__3_0(scripts.bob.signals.LocalSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerView_U3CConstructU3Eb__3_0_mD2D20182258F83E0978BC2F394620C56EB331BCD (PlayerView_tF9F24F8799309C84F2D6FF304775D3481091CD0F* __this, LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 ___x0, const RuntimeMethod* method) 
{
	{
		// this.signalBus.Subscribe<LocalSignal>(x => OnSignalReceived(x));
		LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 L_0 = ___x0;
		PlayerView_OnSignalReceived_m8E339B844A730731B8E71E14655E88E04234D52E(__this, L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 scripts.bob.mvc.view.components.Slot::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Slot_get_Id_m84E86074A1BB9DBDB52190262E836877CD4DDD6D (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; } = -1;
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.view.components.Slot::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slot_set_Id_mE4058AD5E4818C601C08DCBE72364EB4EAC9269C (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; } = -1;
		int32_t L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String scripts.bob.mvc.view.components.Slot::get_Symbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Slot_get_Symbol_m480B9BAB94598BCE7453396B763A6252E97AF63B (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, const RuntimeMethod* method) 
{
	{
		// public string Symbol { get; set; }
		String_t* L_0 = __this->___U3CSymbolU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.view.components.Slot::set_Symbol(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slot_set_Symbol_mD509C85A97B975597DE2EBD811ADB78FCA4797CC (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Symbol { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CSymbolU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSymbolU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// UnityEngine.Sprite scripts.bob.mvc.view.components.Slot::get_TextureSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Slot_get_TextureSprite_m7BD78B81CDC616AC9D0CA6CFF70A73439326CAAF (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, const RuntimeMethod* method) 
{
	{
		// public Sprite TextureSprite { get; set; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___U3CTextureSpriteU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.view.components.Slot::set_TextureSprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slot_set_TextureSprite_m121EF3598DA393684E4C99560C9994E7CB8E7F1C (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	{
		// public Sprite TextureSprite { get; set; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___value0;
		__this->___U3CTextureSpriteU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextureSpriteU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.Slot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slot_Start_m44159FED0120AA7A88B6C65B4B0D519E72A0C44D (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, const RuntimeMethod* method) 
{
	{
		// void Start() { }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.Slot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slot_Update_m9D3E7241B2213C64C1A68EC94D8E721ADCC5FD2A (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, const RuntimeMethod* method) 
{
	{
		// void Update() { }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.Slot::ChangeTexture(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slot_ChangeTexture_m2B6C30CAA39C019F65C1870308C87C44AC4BCEB7 (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite0, const RuntimeMethod* method) 
{
	{
		// ImageDisplay.sprite = sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___ImageDisplay_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___sprite0;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.Slot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slot__ctor_m1EE826445EB14E78D047D346C877E63B8BD9A13C (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; } = -1;
		__this->___U3CIdU3Ek__BackingField_5 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot> scripts.bob.mvc.view.components.SlotGroup::get_Slots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* SlotGroup_get_Slots_m355254855D355E3A36A09461DE03300F685B310B (SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* __this, const RuntimeMethod* method) 
{
	{
		// public List<Slot> Slots { get; set; } = new List<Slot>();
		List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* L_0 = __this->___U3CSlotsU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotGroup::set_Slots(System.Collections.Generic.List`1<scripts.bob.mvc.view.components.Slot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotGroup_set_Slots_mDFF0E152F058CAD17218A4990F016B7EF319BC4E (SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* __this, List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<Slot> Slots { get; set; } = new List<Slot>();
		List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* L_0 = ___value0;
		__this->___U3CSlotsU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSlotsU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotGroup::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotGroup_Awake_mD5F40F6788C0D0F12700BD6D0271F914E06A4890 (SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* __this, const RuntimeMethod* method) 
{
	{
		// void Awake() { }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotGroup::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotGroup_Initialize_m6BCAF96E9AFC88F4E37964672B5BE0ECED80A828 (SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAFF42994752190A7D6E163816F75929C1426E150_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisSlot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E_mF12F465AB0A48AF735F061785597F5795C7950FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for (int i = 0; i < MaxSlots; i++)
		V_0 = 0;
		goto IL_0081;
	}

IL_0004:
	{
		// Slot slot = Instantiate(SlotPanel, Vector3.zero, Quaternion.identity);
		Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_0 = __this->___SlotPanel_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_3;
		L_3 = Object_Instantiate_TisSlot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E_mF12F465AB0A48AF735F061785597F5795C7950FE(L_0, L_1, L_2, Object_Instantiate_TisSlot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E_mF12F465AB0A48AF735F061785597F5795C7950FE_RuntimeMethod_var);
		V_1 = L_3;
		// Vector3 pos = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// slot.transform.SetParent(this.gameObject.transform);
		Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_4 = V_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_5);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_5, L_7, NULL);
		// slot.transform.localScale = new Vector3(1, 1, 1);
		Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_8 = V_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
		// slot.transform.position = pos;
		Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_11 = V_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_2;
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_13, NULL);
		// Slots.Add(slot);
		List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* L_14;
		L_14 = SlotGroup_get_Slots_m355254855D355E3A36A09461DE03300F685B310B_inline(__this, NULL);
		Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_15 = V_1;
		NullCheck(L_14);
		List_1_Add_mAFF42994752190A7D6E163816F75929C1426E150_inline(L_14, L_15, List_1_Add_mAFF42994752190A7D6E163816F75929C1426E150_RuntimeMethod_var);
		// for (int i = 0; i < MaxSlots; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0081:
	{
		// for (int i = 0; i < MaxSlots; i++)
		int32_t L_17 = V_0;
		int32_t L_18 = __this->___MaxSlots_5;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotGroup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotGroup_Start_m71B6ED7EFD2CE013BEF553D3C3261DD195CED9C3 (SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* __this, const RuntimeMethod* method) 
{
	{
		// void Start() { }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotGroup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotGroup_Update_mE4585FB6A094C2BA4C4DB1A1A949636A62D62616 (SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* __this, const RuntimeMethod* method) 
{
	{
		// void Update() { }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotGroup__ctor_m4B200E145031E0F8A51F7BAA0D09C7E557850FF1 (SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCD2F7A097C7F535E5D087443181C06BCF8126DB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int MaxSlots = 3;
		__this->___MaxSlots_5 = 3;
		// public List<Slot> Slots { get; set; } = new List<Slot>();
		List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* L_0 = (List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000*)il2cpp_codegen_object_new(List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCD2F7A097C7F535E5D087443181C06BCF8126DB4(L_0, List_1__ctor_mCD2F7A097C7F535E5D087443181C06BCF8126DB4_RuntimeMethod_var);
		__this->___U3CSlotsU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSlotsU3Ek__BackingField_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scripts.bob.mvc.view.components.SlotMachine::Construct(Zenject.SignalBus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachine_Construct_mAC1FFC4DB1BC8A146E75C3D2FD352B9FE6FFABF3 (SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403* __this, SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* ___signalBus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignalBus_Subscribe_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m4A93064D0B9982074DFA0BD9139F9CFDC51E29D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SlotMachine_U3CConstructU3Eb__5_0_mF9391BADF6987E229D50D40A2651A39E61E7413D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.signalBus = signalBus;
		SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* L_0 = ___signalBus0;
		__this->___signalBus_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signalBus_7), (void*)L_0);
		// this.signalBus.Subscribe<LocalSignal>(x => OnSignalReceived(x));
		SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* L_1 = __this->___signalBus_7;
		Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E* L_2 = (Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E*)il2cpp_codegen_object_new(Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mFF98EC4D00360B49568348B418A50E0A997DCF49(L_2, __this, (intptr_t)((void*)SlotMachine_U3CConstructU3Eb__5_0_mF9391BADF6987E229D50D40A2651A39E61E7413D_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		SignalBus_Subscribe_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m4A93064D0B9982074DFA0BD9139F9CFDC51E29D4(L_1, L_2, SignalBus_Subscribe_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m4A93064D0B9982074DFA0BD9139F9CFDC51E29D4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotMachine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachine_Start_m1AFB7A73AE0428D14B0E24B8A83AEC7FCC0F2E48 (SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403* __this, const RuntimeMethod* method) 
{
	{
		// Initialize();
		SlotMachine_Initialize_mE7541777F4ACCABF469DFC1586C5F168D398F91A(__this, NULL);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotMachine::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachine_Initialize_mE7541777F4ACCABF469DFC1586C5F168D398F91A (SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A_mF71761F0CF2F0A907F96C179A8B2D38BAE2151EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetSlotValues();
		SlotMachine_SetSlotValues_m5B687B28465CA64DC4FA6FA00263730E9AB01914(__this, NULL);
		// controller = this.gameObject.GetComponent<SlotMachineController>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* L_1;
		L_1 = GameObject_GetComponent_TisSlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A_mF71761F0CF2F0A907F96C179A8B2D38BAE2151EB(L_0, GameObject_GetComponent_TisSlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A_mF71761F0CF2F0A907F96C179A8B2D38BAE2151EB_RuntimeMethod_var);
		__this->___controller_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller_8), (void*)L_1);
		// controller.Reels = reels;
		SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* L_2 = __this->___controller_8;
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_3 = __this->___reels_5;
		NullCheck(L_2);
		SlotMachineController_set_Reels_mAF1AEB373D7E68599159B5CAD1CFA16A2529E414_inline(L_2, L_3, NULL);
		// controller.Initialize();
		SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* L_4 = __this->___controller_8;
		NullCheck(L_4);
		SlotMachineController_Initialize_mB48C87CD9680531695C7B376C170279B7368E47F(L_4, NULL);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotMachine::SetSlotValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachine_SetSlotValues_m5B687B28465CA64DC4FA6FA00263730E9AB01914 (SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISlotData_t8796012CA8634B36A65D445133C0AECDB70C9347_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISlot_t4D995D5E4A12578198A941FAF0F17B7AFC3F81A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB640972A9C9E5886BC01188C760BD473CE898F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCD7A7B32D972CE263739C7471E0F56587924F67A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m91C72FBC2A133021D93D734A2D18A02CD3C128AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* V_2 = NULL;
	List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* V_3 = NULL;
	int32_t V_4 = 0;
	List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* V_5 = NULL;
	int32_t V_6 = 0;
	Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* V_7 = NULL;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	{
		// int slotId = 0;
		V_0 = 0;
		// for (int i = 0; i < reels.Count; i++)
		V_1 = 0;
		goto IL_016c;
	}

IL_0009:
	{
		// SlotReel reel = reels[i] as SlotReel;
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_0 = __this->___reels_5;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_2;
		L_2 = List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858(L_0, L_1, List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858_RuntimeMethod_var);
		V_2 = L_2;
		// (reel as ISlot).Initialize();
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_3 = V_2;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(0 /* System.Void scripts.bob.interfaces.ISlot::Initialize() */, ISlot_t4D995D5E4A12578198A941FAF0F17B7AFC3F81A5_il2cpp_TypeInfo_var, L_3);
		// List<SlotGroup> slotGroup = reel.SGroup;
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_4 = V_2;
		NullCheck(L_4);
		List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* L_5;
		L_5 = SlotReel_get_SGroup_m46234709AC147A968CF909086BE211E8DC2AC2DC_inline(L_4, NULL);
		V_3 = L_5;
		// for (int k = 0; k < slotGroup.Count; k++)
		V_4 = 0;
		goto IL_0104;
	}

IL_002b:
	{
		// List<Slot> slots = slotGroup[k].Slots;
		List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* L_6 = V_3;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* L_8;
		L_8 = List_1_get_Item_m91C72FBC2A133021D93D734A2D18A02CD3C128AC(L_6, L_7, List_1_get_Item_m91C72FBC2A133021D93D734A2D18A02CD3C128AC_RuntimeMethod_var);
		NullCheck(L_8);
		List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* L_9;
		L_9 = SlotGroup_get_Slots_m355254855D355E3A36A09461DE03300F685B310B_inline(L_8, NULL);
		V_5 = L_9;
		// for (int j = 0; j < slots.Count; j++)
		V_6 = 0;
		goto IL_00f0;
	}

IL_0042:
	{
		// Slot slot = slots[j] as Slot;
		List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* L_10 = V_5;
		int32_t L_11 = V_6;
		NullCheck(L_10);
		Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_12;
		L_12 = List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743(L_10, L_11, List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743_RuntimeMethod_var);
		V_7 = L_12;
		// slot.Id = slotId;
		Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_13 = V_7;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		Slot_set_Id_mE4058AD5E4818C601C08DCBE72364EB4EAC9269C_inline(L_13, L_14, NULL);
		// slotId++;
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		// if (k == 0)
		int32_t L_16 = V_4;
		if (L_16)
		{
			goto IL_0090;
		}
	}
	{
		// int symbolId = Random.Range(0, 16);
		int32_t L_17;
		L_17 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)16), NULL);
		V_8 = L_17;
		// (slot as ISlotData).Symbol = AppConfig.symbols[symbolId];
		Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_18 = V_7;
		il2cpp_codegen_runtime_class_init_inline(AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = ((AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_StaticFields*)il2cpp_codegen_static_fields_for(AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var))->___symbols_3;
		int32_t L_20 = V_8;
		NullCheck(L_19);
		String_t* L_21;
		L_21 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_19, L_20, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_18);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void scripts.bob.interfaces.ISlotData::set_Symbol(System.String) */, ISlotData_t8796012CA8634B36A65D445133C0AECDB70C9347_il2cpp_TypeInfo_var, L_18, L_21);
		// (slot as ISlotData).TextureSprite = sprites[symbolId];
		Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_22 = V_7;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_23 = __this->___sprites_6;
		int32_t L_24 = V_8;
		NullCheck(L_23);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_25;
		L_25 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_23, L_24, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_22);
		InterfaceActionInvoker1< Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* >::Invoke(5 /* System.Void scripts.bob.interfaces.ISlotData::set_TextureSprite(UnityEngine.Sprite) */, ISlotData_t8796012CA8634B36A65D445133C0AECDB70C9347_il2cpp_TypeInfo_var, L_22, L_25);
		goto IL_00dc;
	}

IL_0090:
	{
		// string symbolId = (reel.SGroup[0].Slots[j] as ISlotData).Symbol;
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_26 = V_2;
		NullCheck(L_26);
		List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* L_27;
		L_27 = SlotReel_get_SGroup_m46234709AC147A968CF909086BE211E8DC2AC2DC_inline(L_26, NULL);
		NullCheck(L_27);
		SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* L_28;
		L_28 = List_1_get_Item_m91C72FBC2A133021D93D734A2D18A02CD3C128AC(L_27, 0, List_1_get_Item_m91C72FBC2A133021D93D734A2D18A02CD3C128AC_RuntimeMethod_var);
		NullCheck(L_28);
		List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* L_29;
		L_29 = SlotGroup_get_Slots_m355254855D355E3A36A09461DE03300F685B310B_inline(L_28, NULL);
		int32_t L_30 = V_6;
		NullCheck(L_29);
		Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_31;
		L_31 = List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743(L_29, L_30, List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743_RuntimeMethod_var);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String scripts.bob.interfaces.ISlotData::get_Symbol() */, ISlotData_t8796012CA8634B36A65D445133C0AECDB70C9347_il2cpp_TypeInfo_var, L_31);
		V_9 = L_32;
		// (slot as ISlotData).TextureSprite = reel.SGroup[0].Slots[
		//     j
		// ].TextureSprite;
		Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_33 = V_7;
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_34 = V_2;
		NullCheck(L_34);
		List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* L_35;
		L_35 = SlotReel_get_SGroup_m46234709AC147A968CF909086BE211E8DC2AC2DC_inline(L_34, NULL);
		NullCheck(L_35);
		SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* L_36;
		L_36 = List_1_get_Item_m91C72FBC2A133021D93D734A2D18A02CD3C128AC(L_35, 0, List_1_get_Item_m91C72FBC2A133021D93D734A2D18A02CD3C128AC_RuntimeMethod_var);
		NullCheck(L_36);
		List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* L_37;
		L_37 = SlotGroup_get_Slots_m355254855D355E3A36A09461DE03300F685B310B_inline(L_36, NULL);
		int32_t L_38 = V_6;
		NullCheck(L_37);
		Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_39;
		L_39 = List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743(L_37, L_38, List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743_RuntimeMethod_var);
		NullCheck(L_39);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_40;
		L_40 = Slot_get_TextureSprite_m7BD78B81CDC616AC9D0CA6CFF70A73439326CAAF_inline(L_39, NULL);
		NullCheck(L_33);
		InterfaceActionInvoker1< Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* >::Invoke(5 /* System.Void scripts.bob.interfaces.ISlotData::set_TextureSprite(UnityEngine.Sprite) */, ISlotData_t8796012CA8634B36A65D445133C0AECDB70C9347_il2cpp_TypeInfo_var, L_33, L_40);
		// (slot as ISlotData).Symbol = symbolId;
		Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_41 = V_7;
		String_t* L_42 = V_9;
		NullCheck(L_41);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void scripts.bob.interfaces.ISlotData::set_Symbol(System.String) */, ISlotData_t8796012CA8634B36A65D445133C0AECDB70C9347_il2cpp_TypeInfo_var, L_41, L_42);
	}

IL_00dc:
	{
		// slot.ChangeTexture(slot.TextureSprite);
		Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_43 = V_7;
		Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_44 = V_7;
		NullCheck(L_44);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_45;
		L_45 = Slot_get_TextureSprite_m7BD78B81CDC616AC9D0CA6CFF70A73439326CAAF_inline(L_44, NULL);
		NullCheck(L_43);
		Slot_ChangeTexture_m2B6C30CAA39C019F65C1870308C87C44AC4BCEB7(L_43, L_45, NULL);
		// for (int j = 0; j < slots.Count; j++)
		int32_t L_46 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00f0:
	{
		// for (int j = 0; j < slots.Count; j++)
		int32_t L_47 = V_6;
		List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* L_48 = V_5;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = List_1_get_Count_mB640972A9C9E5886BC01188C760BD473CE898F18_inline(L_48, List_1_get_Count_mB640972A9C9E5886BC01188C760BD473CE898F18_RuntimeMethod_var);
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_0042;
		}
	}
	{
		// for (int k = 0; k < slotGroup.Count; k++)
		int32_t L_50 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0104:
	{
		// for (int k = 0; k < slotGroup.Count; k++)
		int32_t L_51 = V_4;
		List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* L_52 = V_3;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_mCD7A7B32D972CE263739C7471E0F56587924F67A_inline(L_52, List_1_get_Count_mCD7A7B32D972CE263739C7471E0F56587924F67A_RuntimeMethod_var);
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_002b;
		}
	}
	{
		// reel.transform.SetParent(this.gameObject.transform);
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_54 = V_2;
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_54, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_56);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_56, NULL);
		NullCheck(L_55);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_55, L_57, NULL);
		// RectTransform reelTransform = (RectTransform)reel.transform;
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_58 = V_2;
		NullCheck(L_58);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_58, NULL);
		// reel.transform.localPosition = new Vector3(
		//     reel.transform.localPosition.x,
		//     AppConfig.START_LOC,
		//     reel.transform.localPosition.z
		// );
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_60 = V_2;
		NullCheck(L_60);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_60, NULL);
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_62 = V_2;
		NullCheck(L_62);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_62, NULL);
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_63, NULL);
		float L_65 = L_64.___x_2;
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_66 = V_2;
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_66, NULL);
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_67, NULL);
		float L_69 = L_68.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_70), L_65, (400.0f), L_69, /*hidden argument*/NULL);
		NullCheck(L_61);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_61, L_70, NULL);
		// for (int i = 0; i < reels.Count; i++)
		int32_t L_71 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_016c:
	{
		// for (int i = 0; i < reels.Count; i++)
		int32_t L_72 = V_1;
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_73 = __this->___reels_5;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_inline(L_73, List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_RuntimeMethod_var);
		if ((((int32_t)L_72) < ((int32_t)L_74)))
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotMachine::OnSignalReceived(scripts.bob.signals.LocalSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachine_OnSignalReceived_m37B8295DFAFADF606C42E644128508CACE7EB740 (SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403* __this, LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 ___signal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral168998393629E1A714FD7E007A48217266662B04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C1D1E6B823E58EF32445980DC1978FF15CEE34);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (signal.EventType == slotevents.LocalEvents.StartSpin)
		int32_t L_0;
		L_0 = LocalSignal_get_EventType_mA2FCD1204C5B527CF1CDE1D85D40B3CC09F5F587_inline((&___signal0), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		// IPlayer player = this.model.Player;
		RuntimeObject* L_1 = __this->___model_4;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* scripts.bob.interfaces.IPlayer scripts.bob.interfaces.IModel::get_Player() */, IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		// if (controller.InSequence)
		SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* L_3 = __this->___controller_8;
		NullCheck(L_3);
		bool L_4;
		L_4 = SlotMachineController_get_InSequence_m17E82F21FD7CE2AE639E9EB94B5C97EB23456F8F_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		// StopCoroutine("ReplaceValues");
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteral168998393629E1A714FD7E007A48217266662B04, NULL);
		// SetSlotValues();
		SlotMachine_SetSlotValues_m5B687B28465CA64DC4FA6FA00263730E9AB01914(__this, NULL);
		// controller.ForceStop();
		SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* L_5 = __this->___controller_8;
		NullCheck(L_5);
		SlotMachineController_ForceStop_mEA6E94221DF07CAAF693D492525E546807F607EC(L_5, NULL);
		// return;
		return;
	}

IL_0040:
	{
		// if (player.TotalBet <= 0)
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 scripts.bob.interfaces.IPlayer::get_TotalBet() */, IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		// return;
		return;
	}

IL_004a:
	{
		// if (player.Balance <= 0)
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 scripts.bob.interfaces.IPlayer::get_Balance() */, IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A_il2cpp_TypeInfo_var, L_8);
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		// return;
		return;
	}

IL_0054:
	{
		// controller.OnSpinReel();
		SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* L_10 = __this->___controller_8;
		NullCheck(L_10);
		SlotMachineController_OnSpinReel_mE94516D9AB144F50F078EB2D061F786EB5CE53D3(L_10, NULL);
		// StartCoroutine("ReplaceValues");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral168998393629E1A714FD7E007A48217266662B04, NULL);
	}

IL_006b:
	{
		// if (signal.EventType == slotevents.LocalEvents.SpinDone)
		int32_t L_12;
		L_12 = LocalSignal_get_EventType_mA2FCD1204C5B527CF1CDE1D85D40B3CC09F5F587_inline((&___signal0), NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_0090;
		}
	}
	{
		// IPlayer player = this.model.Player;
		RuntimeObject* L_13 = __this->___model_4;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* scripts.bob.interfaces.IPlayer scripts.bob.interfaces.IModel::get_Player() */, IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A_il2cpp_TypeInfo_var, L_13);
		// player.TotalBet = 0;
		NullCheck(L_14);
		InterfaceActionInvoker1< int32_t >::Invoke(5 /* System.Void scripts.bob.interfaces.IPlayer::set_TotalBet(System.Int32) */, IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A_il2cpp_TypeInfo_var, L_14, 0);
		// Debug.Log("Spin Done!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF4C1D1E6B823E58EF32445980DC1978FF15CEE34, NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator scripts.bob.mvc.view.components.SlotMachine::ReplaceValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SlotMachine_ReplaceValues_m57C219DBC73DE05C17E62062D948BD8E58CF3A94 (SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReplaceValuesU3Ed__10_t5443F5B2907E223A25A30A745A51ACC517C14361_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReplaceValuesU3Ed__10_t5443F5B2907E223A25A30A745A51ACC517C14361* L_0 = (U3CReplaceValuesU3Ed__10_t5443F5B2907E223A25A30A745A51ACC517C14361*)il2cpp_codegen_object_new(U3CReplaceValuesU3Ed__10_t5443F5B2907E223A25A30A745A51ACC517C14361_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CReplaceValuesU3Ed__10__ctor_mAD803EFF026C70A8400542C0D334C6656D19A982(L_0, 0, NULL);
		U3CReplaceValuesU3Ed__10_t5443F5B2907E223A25A30A745A51ACC517C14361* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotMachine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachine__ctor_mD17B4C1736B14EB6027063A9FA4F525722247F24 (SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8466E3BF8A9CDE2D323A3473E0DD4BD13DBDBE72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<SlotReel> reels = new List<SlotReel>();
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_0 = (List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0*)il2cpp_codegen_object_new(List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8466E3BF8A9CDE2D323A3473E0DD4BD13DBDBE72(L_0, List_1__ctor_m8466E3BF8A9CDE2D323A3473E0DD4BD13DBDBE72_RuntimeMethod_var);
		__this->___reels_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reels_5), (void*)L_0);
		// List<Sprite> sprites = new List<Sprite>();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_1 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_1, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->___sprites_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sprites_6), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotMachine::<Construct>b__5_0(scripts.bob.signals.LocalSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachine_U3CConstructU3Eb__5_0_mF9391BADF6987E229D50D40A2651A39E61E7413D (SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403* __this, LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 ___x0, const RuntimeMethod* method) 
{
	{
		// this.signalBus.Subscribe<LocalSignal>(x => OnSignalReceived(x));
		LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 L_0 = ___x0;
		SlotMachine_OnSignalReceived_m37B8295DFAFADF606C42E644128508CACE7EB740(__this, L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scripts.bob.mvc.view.components.SlotMachine/<ReplaceValues>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReplaceValuesU3Ed__10__ctor_mAD803EFF026C70A8400542C0D334C6656D19A982 (U3CReplaceValuesU3Ed__10_t5443F5B2907E223A25A30A745A51ACC517C14361* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotMachine/<ReplaceValues>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReplaceValuesU3Ed__10_System_IDisposable_Dispose_m4358994009415FFD4B9D8A080BB44F20E27B7E01 (U3CReplaceValuesU3Ed__10_t5443F5B2907E223A25A30A745A51ACC517C14361* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean scripts.bob.mvc.view.components.SlotMachine/<ReplaceValues>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReplaceValuesU3Ed__10_MoveNext_m6DF86442C5E9D44A206BB4C00E2ABBA6A0BDD989 (U3CReplaceValuesU3Ed__10_t5443F5B2907E223A25A30A745A51ACC517C14361* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral168998393629E1A714FD7E007A48217266662B04);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.75f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.75f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetSlotValues();
		SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403* L_5 = V_1;
		NullCheck(L_5);
		SlotMachine_SetSlotValues_m5B687B28465CA64DC4FA6FA00263730E9AB01914(L_5, NULL);
		// StopCoroutine("ReplaceValues");
		SlotMachine_t698FF0D58DB9E01E76C70E4139708BA3E7B07403* L_6 = V_1;
		NullCheck(L_6);
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(L_6, _stringLiteral168998393629E1A714FD7E007A48217266662B04, NULL);
		// }
		return (bool)0;
	}
}
// System.Object scripts.bob.mvc.view.components.SlotMachine/<ReplaceValues>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReplaceValuesU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8D2D6C58B8C57B48F8347AA87F2A43C339E42885 (U3CReplaceValuesU3Ed__10_t5443F5B2907E223A25A30A745A51ACC517C14361* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotMachine/<ReplaceValues>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReplaceValuesU3Ed__10_System_Collections_IEnumerator_Reset_mF9B5CC2E642826C04378EF310CC9D0C1FC91EA05 (U3CReplaceValuesU3Ed__10_t5443F5B2907E223A25A30A745A51ACC517C14361* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReplaceValuesU3Ed__10_System_Collections_IEnumerator_Reset_mF9B5CC2E642826C04378EF310CC9D0C1FC91EA05_RuntimeMethod_var)));
	}
}
// System.Object scripts.bob.mvc.view.components.SlotMachine/<ReplaceValues>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReplaceValuesU3Ed__10_System_Collections_IEnumerator_get_Current_m9FDA3298D6FC381A3E00137FA9CACF21F79BBB3A (U3CReplaceValuesU3Ed__10_t5443F5B2907E223A25A30A745A51ACC517C14361* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotGroup> scripts.bob.mvc.view.components.SlotReel::get_SGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* SlotReel_get_SGroup_m46234709AC147A968CF909086BE211E8DC2AC2DC (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) 
{
	{
		// public List<SlotGroup> SGroup { get; set; } = new List<SlotGroup>();
		List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* L_0 = __this->___U3CSGroupU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotReel::set_SGroup(System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotGroup>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_set_SGroup_mCD55E7D6640E335AD677993759697F99FD9DB5EE (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<SlotGroup> SGroup { get; set; } = new List<SlotGroup>();
		List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* L_0 = ___value0;
		__this->___U3CSGroupU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSGroupU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Boolean scripts.bob.mvc.view.components.SlotReel::get_TurnDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SlotReel_get_TurnDone_m914690427AE789100C86AB765B0490B4ED0DB783 (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) 
{
	{
		// public bool TurnDone { get; set; } = true;
		bool L_0 = __this->___U3CTurnDoneU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotReel::set_TurnDone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_set_TurnDone_m54841B246F0744B18B3C53DD1ECB07C8E1675851 (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool TurnDone { get; set; } = true;
		bool L_0 = ___value0;
		__this->___U3CTurnDoneU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotReel::add_OnSpinDone(System.Action`1<scripts.bob.mvc.view.components.SlotReel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_add_OnSpinDone_mC7245D8080F979F38F55958A81B17FA784018758 (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* V_0 = NULL;
	Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* V_1 = NULL;
	Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* V_2 = NULL;
	{
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_0 = __this->___OnSpinDone_13;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_1 = V_0;
		V_1 = L_1;
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_2 = V_1;
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773*)Castclass((RuntimeObject*)L_4, Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773_il2cpp_TypeInfo_var));
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773** L_5 = (&__this->___OnSpinDone_13);
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_6 = V_2;
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_7 = V_1;
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_9 = V_0;
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773*)L_9) == ((RuntimeObject*)(Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotReel::remove_OnSpinDone(System.Action`1<scripts.bob.mvc.view.components.SlotReel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_remove_OnSpinDone_m5D1249DDF057746697B334A09DC61A256BB1635B (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* V_0 = NULL;
	Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* V_1 = NULL;
	Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* V_2 = NULL;
	{
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_0 = __this->___OnSpinDone_13;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_1 = V_0;
		V_1 = L_1;
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_2 = V_1;
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773*)Castclass((RuntimeObject*)L_4, Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773_il2cpp_TypeInfo_var));
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773** L_5 = (&__this->___OnSpinDone_13);
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_6 = V_2;
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_7 = V_1;
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_9 = V_0;
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773*)L_9) == ((RuntimeObject*)(Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// scripts.bob.configuration.PosArea scripts.bob.mvc.view.components.SlotReel::get_FinalArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SlotReel_get_FinalArea_m82CCAC20278D9D25A95B78D11BF41615FF8B8029 (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) 
{
	{
		// public PosArea FinalArea { get; set; }
		int32_t L_0 = __this->___U3CFinalAreaU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotReel::set_FinalArea(scripts.bob.configuration.PosArea)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_set_FinalArea_m39C52920F51961D5841416A59079FA6468C04B4F (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public PosArea FinalArea { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CFinalAreaU3Ek__BackingField_14 = L_0;
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotReel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_Start_m078E5A9C56E9C78382DD8B1AFC3B152B7FDF07C1 (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) 
{
	{
		// void Start() { }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotReel::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_Initialize_mDCC8F6258C1F1D5E40C428D0FF514869C842C2CB (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISlot_t4D995D5E4A12578198A941FAF0F17B7AFC3F81A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m68A64A5551ED14A08ADFF77A239B5AA976BF9032_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisSlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C_m926B205A88A7733D6B5D1EE8CB506D11A11F37FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for (int i = 0; i < MaxSlotReel; i++)
		V_0 = 0;
		goto IL_008a;
	}

IL_0007:
	{
		// SlotGroup group = Instantiate(slotGroup, Vector3.zero, Quaternion.identity);
		SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* L_0 = __this->___slotGroup_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* L_3;
		L_3 = Object_Instantiate_TisSlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C_m926B205A88A7733D6B5D1EE8CB506D11A11F37FA(L_0, L_1, L_2, Object_Instantiate_TisSlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C_m926B205A88A7733D6B5D1EE8CB506D11A11F37FA_RuntimeMethod_var);
		V_1 = L_3;
		// Vector3 pos = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// group.transform.SetParent(this.gameObject.transform);
		SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* L_4 = V_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_5);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_5, L_7, NULL);
		// (group as ISlot).Initialize();
		SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* L_8 = V_1;
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(0 /* System.Void scripts.bob.interfaces.ISlot::Initialize() */, ISlot_t4D995D5E4A12578198A941FAF0F17B7AFC3F81A5_il2cpp_TypeInfo_var, L_8);
		// group.transform.localScale = new Vector3(1, 1, 1);
		SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* L_9 = V_1;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_11, NULL);
		// group.transform.position = pos;
		SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* L_12 = V_1;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_2;
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_14, NULL);
		// SGroup.Add(group);
		List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* L_15;
		L_15 = SlotReel_get_SGroup_m46234709AC147A968CF909086BE211E8DC2AC2DC_inline(__this, NULL);
		SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* L_16 = V_1;
		NullCheck(L_15);
		List_1_Add_m68A64A5551ED14A08ADFF77A239B5AA976BF9032_inline(L_15, L_16, List_1_Add_m68A64A5551ED14A08ADFF77A239B5AA976BF9032_RuntimeMethod_var);
		// for (int i = 0; i < MaxSlotReel; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_008a:
	{
		// for (int i = 0; i < MaxSlotReel; i++)
		int32_t L_18 = V_0;
		int32_t L_19 = __this->___MaxSlotReel_5;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotReel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_Update_mB4B2A414E843213A58637E90C550609895B95687 (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SlotReel_U3CUpdateU3Eb__24_0_m1FF597B926D77EA103D757B1E227A830D160ED5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// if (IsSpinning)
		bool L_0 = __this->___IsSpinning_8;
		if (!L_0)
		{
			goto IL_0157;
		}
	}
	{
		// if (!IsMaxSpeed)
		bool L_1 = __this->___IsMaxSpeed_11;
		if (L_1)
		{
			goto IL_0046;
		}
	}
	{
		// SpeedY += 2.5f;
		float L_2 = __this->___SpeedY_9;
		__this->___SpeedY_9 = ((float)il2cpp_codegen_add(L_2, (2.5f)));
		// if (SpeedY >= MaxSpeedY)
		float L_3 = __this->___SpeedY_9;
		float L_4 = __this->___MaxSpeedY_10;
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0046;
		}
	}
	{
		// IsMaxSpeed = true;
		__this->___IsMaxSpeed_11 = (bool)1;
		// SpeedY = MaxSpeedY;
		float L_5 = __this->___MaxSpeedY_10;
		__this->___SpeedY_9 = L_5;
	}

IL_0046:
	{
		// if (StopSpin)
		bool L_6 = __this->___StopSpin_12;
		if (!L_6)
		{
			goto IL_00e1;
		}
	}
	{
		// SpeedY *= 0.72f;
		float L_7 = __this->___SpeedY_9;
		__this->___SpeedY_9 = ((float)il2cpp_codegen_multiply(L_7, (0.720000029f)));
		// if (SpeedY <= 1)
		float L_8 = __this->___SpeedY_9;
		if ((!(((float)L_8) <= ((float)(1.0f)))))
		{
			goto IL_00e1;
		}
	}
	{
		// SpeedY = 0;
		__this->___SpeedY_9 = (0.0f);
		// IsSpinning = false;
		__this->___IsSpinning_8 = (bool)0;
		// Vector3 posFinal = this.transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_9, NULL);
		V_1 = L_10;
		// float pos1 = SlotUtils.Instance.GetFinalPosition(posFinal.y);
		il2cpp_codegen_runtime_class_init_inline(SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08_il2cpp_TypeInfo_var);
		SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08* L_11;
		L_11 = SlotUtils_get_Instance_m5B3A7D238718096F432D45FD97581FBC75F9DAB6_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		float L_13 = L_12.___y_3;
		NullCheck(L_11);
		float L_14;
		L_14 = SlotUtils_GetFinalPosition_m20B3676AF15E7DCC52264639422FF52032B7DA0F(L_11, L_13, NULL);
		V_2 = L_14;
		// posFinal.y = pos1;
		float L_15 = V_2;
		(&V_1)->___y_3 = L_15;
		// LeanTween.cancel(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		LeanTween_cancel_mD16E6D2B29E547FEF03D37E4289F29605AB377A8(L_16, NULL);
		// LeanTween
		//     .moveLocalY(this.gameObject, posFinal.y, 0.50f)
		//     .setEase(LeanTweenType.easeOutSine)
		//     .setOnComplete(() =>
		//     {
		//         //Debug.Log("Reel completed! " + (OnSpinDone == null));
		//         DispatchDone();
		//     });
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		float L_19 = L_18.___y_3;
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_20;
		L_20 = LeanTween_moveLocalY_mB6E7AA81B9ACA6E7847108F0CF96CFF5D3506A61(L_17, L_19, (0.5f), NULL);
		NullCheck(L_20);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_21;
		L_21 = LTDescr_setEase_m095FF057D085E9426DDA13E665D6EF3F0704F60C(L_20, ((int32_t)15), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_22 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_22, __this, (intptr_t)((void*)SlotReel_U3CUpdateU3Eb__24_0_m1FF597B926D77EA103D757B1E227A830D160ED5D_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_23;
		L_23 = LTDescr_setOnComplete_m71532B82E69D79F08953DFCECE0E2F024F4A06E4(L_21, L_22, NULL);
	}

IL_00e1:
	{
		// Vector3 pos = this.transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_24, NULL);
		V_0 = L_25;
		// pos.y -= (float)SpeedY;
		float* L_26 = (&(&V_0)->___y_3);
		float* L_27 = L_26;
		float L_28 = *((float*)L_27);
		float L_29 = __this->___SpeedY_9;
		*((float*)L_27) = (float)((float)il2cpp_codegen_subtract(L_28, ((float)L_29)));
		// this.transform.localPosition = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		NullCheck(L_30);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_30, L_31, NULL);
		// var currY = this.transform.localPosition.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_32, NULL);
		float L_34 = L_33.___y_3;
		// if (currY <= AppConfig.CEILING)
		if ((!(((float)L_34) <= ((float)(100.0f)))))
		{
			goto IL_0157;
		}
	}
	{
		// this.transform.localPosition = new Vector3(
		//     this.transform.localPosition.x,
		//     AppConfig.START_LOC,
		//     this.transform.localPosition.z
		// );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_36, NULL);
		float L_38 = L_37.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_39, NULL);
		float L_41 = L_40.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), L_38, (400.0f), L_41, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_35, L_42, NULL);
	}

IL_0157:
	{
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotReel::Spin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_Spin_m3DB9A297BFF1F9CA0098D3098522208D072A23D4 (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99F4655F3B5C1EA758306CBFCA4CA3A1B83F2EE0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsSpinning)
		bool L_0 = __this->___IsSpinning_8;
		if (L_0)
		{
			goto IL_003b;
		}
	}
	{
		// TurnDone = false;
		SlotReel_set_TurnDone_m54841B246F0744B18B3C53DD1ECB07C8E1675851_inline(__this, (bool)0, NULL);
		// StopSpin = false;
		__this->___StopSpin_12 = (bool)0;
		// SpeedY = 0.0f;
		__this->___SpeedY_9 = (0.0f);
		// IsMaxSpeed = false;
		__this->___IsMaxSpeed_11 = (bool)0;
		// IsSpinning = true;
		__this->___IsSpinning_8 = (bool)1;
		// StartCoroutine("SpeedSpan");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral99F4655F3B5C1EA758306CBFCA4CA3A1B83F2EE0, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator scripts.bob.mvc.view.components.SlotReel::SpeedSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SlotReel_SpeedSpan_m4D0F01EE82658CEE638874B09068ADD31526F6B8 (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpeedSpanU3Ed__26_tD9045842244B26AD0C74EF122FD2DD73BA8701F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpeedSpanU3Ed__26_tD9045842244B26AD0C74EF122FD2DD73BA8701F1* L_0 = (U3CSpeedSpanU3Ed__26_tD9045842244B26AD0C74EF122FD2DD73BA8701F1*)il2cpp_codegen_object_new(U3CSpeedSpanU3Ed__26_tD9045842244B26AD0C74EF122FD2DD73BA8701F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpeedSpanU3Ed__26__ctor_m89F7CE1508626C10A223196950653BE4E83F57CF(L_0, 0, NULL);
		U3CSpeedSpanU3Ed__26_tD9045842244B26AD0C74EF122FD2DD73BA8701F1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotReel::DispatchDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_DispatchDone_mE2AB7F04C0308F4A0F8A84AE6D3B41481642B011 (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* G_B2_0 = NULL;
	Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* G_B1_0 = NULL;
	{
		// TurnDone = true;
		SlotReel_set_TurnDone_m54841B246F0744B18B3C53DD1ECB07C8E1675851_inline(__this, (bool)1, NULL);
		// FinalArea = SlotUtils.Instance.GetPOSArea(this.transform.localPosition.y);
		il2cpp_codegen_runtime_class_init_inline(SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08_il2cpp_TypeInfo_var);
		SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08* L_0;
		L_0 = SlotUtils_get_Instance_m5B3A7D238718096F432D45FD97581FBC75F9DAB6_inline(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		float L_3 = L_2.___y_3;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = SlotUtils_GetPOSArea_m48FAF19180308A0954D6EE70EA2D202367B663FC(L_0, L_3, NULL);
		SlotReel_set_FinalArea_m39C52920F51961D5841416A59079FA6468C04B4F_inline(__this, L_4, NULL);
		// OnSpinDone?.Invoke(this);
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_5 = __this->___OnSpinDone_13;
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0032;
		}
	}
	{
		return;
	}

IL_0032:
	{
		NullCheck(G_B2_0);
		Action_1_Invoke_mCC09CA5C15E14DD458FB75048549EF979B0A2A75_inline(G_B2_0, __this, NULL);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotReel::ForceStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_ForceStop_m32B644235202ADA89D2D3F2C50DE100016DEAD09 (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SlotReel_U3CForceStopU3Eb__28_0_mFE3FEC9CECF5BF5E98CD85CD8A2119272EF318F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99F4655F3B5C1EA758306CBFCA4CA3A1B83F2EE0);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// StopCoroutine("SpeedSpan");
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteral99F4655F3B5C1EA758306CBFCA4CA3A1B83F2EE0, NULL);
		// IsSpinning = false;
		__this->___IsSpinning_8 = (bool)0;
		// SpeedY = 0;
		__this->___SpeedY_9 = (0.0f);
		// LeanTween.cancel(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(LeanTween_tE7667F9B3DFA672F9F1D630808C05DF9A1BA99A3_il2cpp_TypeInfo_var);
		LeanTween_cancel_mD16E6D2B29E547FEF03D37E4289F29605AB377A8(L_0, NULL);
		// Vector3 posFinal = this.transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		V_0 = L_2;
		// float pos1 = SlotUtils.Instance.GetFinalPosition(posFinal.y);
		il2cpp_codegen_runtime_class_init_inline(SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08_il2cpp_TypeInfo_var);
		SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08* L_3;
		L_3 = SlotUtils_get_Instance_m5B3A7D238718096F432D45FD97581FBC75F9DAB6_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___y_3;
		NullCheck(L_3);
		float L_6;
		L_6 = SlotUtils_GetFinalPosition_m20B3676AF15E7DCC52264639422FF52032B7DA0F(L_3, L_5, NULL);
		V_1 = L_6;
		// posFinal.y = pos1;
		float L_7 = V_1;
		(&V_0)->___y_3 = L_7;
		// LeanTween.cancel(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		LeanTween_cancel_mD16E6D2B29E547FEF03D37E4289F29605AB377A8(L_8, NULL);
		// LeanTween
		//     .moveLocalY(this.gameObject, posFinal.y, 0)
		//     .setEase(LeanTweenType.easeOutSine)
		//     .setOnComplete(() =>
		//     {
		//         //Debug.Log("Reel completed! " + (OnSpinDone == null));
		//         DispatchDone();
		//     });
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___y_3;
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_12;
		L_12 = LeanTween_moveLocalY_mB6E7AA81B9ACA6E7847108F0CF96CFF5D3506A61(L_9, L_11, (0.0f), NULL);
		NullCheck(L_12);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_13;
		L_13 = LTDescr_setEase_m095FF057D085E9426DDA13E665D6EF3F0704F60C(L_12, ((int32_t)15), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_14, __this, (intptr_t)((void*)SlotReel_U3CForceStopU3Eb__28_0_mFE3FEC9CECF5BF5E98CD85CD8A2119272EF318F5_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		LTDescr_t7D2535016B50E5B777CEA4DA359DF39A6C396696* L_15;
		L_15 = LTDescr_setOnComplete_m71532B82E69D79F08953DFCECE0E2F024F4A06E4(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotReel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel__ctor_m82E73B8823CA63207E382DE44EDDF6119D7F6FE9 (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFD9586787C4BFDED3E44489687A01594899AEB3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<SlotGroup> SGroup { get; set; } = new List<SlotGroup>();
		List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* L_0 = (List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74*)il2cpp_codegen_object_new(List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mFD9586787C4BFDED3E44489687A01594899AEB3D(L_0, List_1__ctor_mFD9586787C4BFDED3E44489687A01594899AEB3D_RuntimeMethod_var);
		__this->___U3CSGroupU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSGroupU3Ek__BackingField_6), (void*)L_0);
		// public bool TurnDone { get; set; } = true;
		__this->___U3CTurnDoneU3Ek__BackingField_7 = (bool)1;
		// private float MaxSpeedY = 100.0f;
		__this->___MaxSpeedY_10 = (100.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotReel::<Update>b__24_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_U3CUpdateU3Eb__24_0_m1FF597B926D77EA103D757B1E227A830D160ED5D (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) 
{
	{
		// DispatchDone();
		SlotReel_DispatchDone_mE2AB7F04C0308F4A0F8A84AE6D3B41481642B011(__this, NULL);
		// });
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotReel::<ForceStop>b__28_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotReel_U3CForceStopU3Eb__28_0_mFE3FEC9CECF5BF5E98CD85CD8A2119272EF318F5 (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) 
{
	{
		// DispatchDone();
		SlotReel_DispatchDone_mE2AB7F04C0308F4A0F8A84AE6D3B41481642B011(__this, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scripts.bob.mvc.view.components.SlotReel/<SpeedSpan>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedSpanU3Ed__26__ctor_m89F7CE1508626C10A223196950653BE4E83F57CF (U3CSpeedSpanU3Ed__26_tD9045842244B26AD0C74EF122FD2DD73BA8701F1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotReel/<SpeedSpan>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedSpanU3Ed__26_System_IDisposable_Dispose_m7B41C90C8CD3BE5ACB1A8AAB0A2DBD7FD83513A6 (U3CSpeedSpanU3Ed__26_tD9045842244B26AD0C74EF122FD2DD73BA8701F1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean scripts.bob.mvc.view.components.SlotReel/<SpeedSpan>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpeedSpanU3Ed__26_MoveNext_m4A90B64F6F64B188D50A80BACEB3FF07FD4DD346 (U3CSpeedSpanU3Ed__26_tD9045842244B26AD0C74EF122FD2DD73BA8701F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99F4655F3B5C1EA758306CBFCA4CA3A1B83F2EE0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(AppConfig.SPIN_TIME);
		il2cpp_codegen_runtime_class_init_inline(AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var);
		float L_4 = ((AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_StaticFields*)il2cpp_codegen_static_fields_for(AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var))->___SPIN_TIME_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("SpeedSpan");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral99F4655F3B5C1EA758306CBFCA4CA3A1B83F2EE0, NULL);
		// StopSpin = true;
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_6 = V_1;
		NullCheck(L_6);
		L_6->___StopSpin_12 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object scripts.bob.mvc.view.components.SlotReel/<SpeedSpan>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpeedSpanU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD94CE4C063F9BC2BC02FF03A6AB7A297F53884F5 (U3CSpeedSpanU3Ed__26_tD9045842244B26AD0C74EF122FD2DD73BA8701F1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.view.components.SlotReel/<SpeedSpan>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedSpanU3Ed__26_System_Collections_IEnumerator_Reset_m6A762D99501C1581AA678B38BF1CE0D2D2D54DAF (U3CSpeedSpanU3Ed__26_tD9045842244B26AD0C74EF122FD2DD73BA8701F1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpeedSpanU3Ed__26_System_Collections_IEnumerator_Reset_m6A762D99501C1581AA678B38BF1CE0D2D2D54DAF_RuntimeMethod_var)));
	}
}
// System.Object scripts.bob.mvc.view.components.SlotReel/<SpeedSpan>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpeedSpanU3Ed__26_System_Collections_IEnumerator_get_Current_mED977DB6F90D105A4979353DC13D6B9318612E78 (U3CSpeedSpanU3Ed__26_tD9045842244B26AD0C74EF122FD2DD73BA8701F1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scripts.bob.mvc.view.components.WinningsView::Construct(Zenject.SignalBus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinningsView_Construct_mAAA02A34B50044BE2CF7C21F60BCDB50C5EC628C (WinningsView_t3F5A8786671827CE9BA44DC33F28325562B112AE* __this, SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* ___signalBus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignalBus_Subscribe_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m4A93064D0B9982074DFA0BD9139F9CFDC51E29D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinningsView_U3CConstructU3Eb__3_0_m99AFA7C6102C3EC99F15E3653085503AD4D720DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.signalBus = signalBus;
		SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* L_0 = ___signalBus0;
		__this->___signalBus_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signalBus_6), (void*)L_0);
		// this.signalBus.Subscribe<LocalSignal>(x => OnSignalReceived(x));
		SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* L_1 = __this->___signalBus_6;
		Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E* L_2 = (Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E*)il2cpp_codegen_object_new(Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mFF98EC4D00360B49568348B418A50E0A997DCF49(L_2, __this, (intptr_t)((void*)WinningsView_U3CConstructU3Eb__3_0_m99AFA7C6102C3EC99F15E3653085503AD4D720DA_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		SignalBus_Subscribe_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m4A93064D0B9982074DFA0BD9139F9CFDC51E29D4(L_1, L_2, SignalBus_Subscribe_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m4A93064D0B9982074DFA0BD9139F9CFDC51E29D4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.WinningsView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinningsView_Start_m66D8A66C8C3332CEDCEA67FA22ED847FD5657468 (WinningsView_t3F5A8786671827CE9BA44DC33F28325562B112AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextLabel.text = "0";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___TextLabel_5;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.WinningsView::OnSignalReceived(scripts.bob.signals.LocalSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinningsView_OnSignalReceived_m96F53DF041CC3B2A6B38DFCF9E649E7F8349F1EB (WinningsView_t3F5A8786671827CE9BA44DC33F28325562B112AE* __this, LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 ___signal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (signal.EventType == slotevents.LocalEvents.SpinDone)
		int32_t L_0;
		L_0 = LocalSignal_get_EventType_mA2FCD1204C5B527CF1CDE1D85D40B3CC09F5F587_inline((&___signal0), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_004a;
		}
	}
	{
		// IPlayer player = this.model.Player;
		RuntimeObject* L_1 = __this->___model_4;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* scripts.bob.interfaces.IPlayer scripts.bob.interfaces.IModel::get_Player() */, IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		// if (player.Winnings > 0)
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 scripts.bob.interfaces.IPlayer::get_Winnings() */, IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A_il2cpp_TypeInfo_var, L_3);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		// TextLabel.text = player.Winnings.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___TextLabel_5;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 scripts.bob.interfaces.IPlayer::get_Winnings() */, IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_8);
		goto IL_004a;
	}

IL_003a:
	{
		// TextLabel.text = "";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = __this->___TextLabel_5;
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_004a:
	{
		// if (signal.EventType == slotevents.LocalEvents.StartSpin)
		int32_t L_10;
		L_10 = LocalSignal_get_EventType_mA2FCD1204C5B527CF1CDE1D85D40B3CC09F5F587_inline((&___signal0), NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0075;
		}
	}
	{
		// IPlayer player = this.model.Player;
		RuntimeObject* L_11 = __this->___model_4;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* scripts.bob.interfaces.IPlayer scripts.bob.interfaces.IModel::get_Player() */, IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A_il2cpp_TypeInfo_var, L_11);
		// player.Winnings = 0;
		NullCheck(L_12);
		InterfaceActionInvoker1< int32_t >::Invoke(11 /* System.Void scripts.bob.interfaces.IPlayer::set_Winnings(System.Int32) */, IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A_il2cpp_TypeInfo_var, L_12, 0);
		// TextLabel.text = "0";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13 = __this->___TextLabel_5;
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.WinningsView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinningsView__ctor_mE57CF5B54C8EF5F9ACA899949FAEB49EC69B4E73 (WinningsView_t3F5A8786671827CE9BA44DC33F28325562B112AE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void scripts.bob.mvc.view.components.WinningsView::<Construct>b__3_0(scripts.bob.signals.LocalSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinningsView_U3CConstructU3Eb__3_0_m99AFA7C6102C3EC99F15E3653085503AD4D720DA (WinningsView_t3F5A8786671827CE9BA44DC33F28325562B112AE* __this, LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 ___x0, const RuntimeMethod* method) 
{
	{
		// this.signalBus.Subscribe<LocalSignal>(x => OnSignalReceived(x));
		LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 L_0 = ___x0;
		WinningsView_OnSignalReceived_m96F53DF041CC3B2A6B38DFCF9E649E7F8349F1EB(__this, L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scripts.bob.mvc.model.SlotModel::.ctor(Zenject.SignalBus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotModel__ctor_m1BE1EE1D5981EBDC1DCAAE7B835408252B39163B (SlotModel_t9EAAD895759C87C59B8B6FBD19C9F13AA7F14C93* __this, SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* ___signalBus0, const RuntimeMethod* method) 
{
	{
		// public SlotModel(SignalBus signalBus)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.signalBus = signalBus;
		SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* L_0 = ___signalBus0;
		__this->___signalBus_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signalBus_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.model.SlotModel::BroadCastLocalSignal(scripts.bob.signals.LocalSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotModel_BroadCastLocalSignal_m1F8587CDC16AC0E2749749F7E58677AE24F606A5 (SlotModel_t9EAAD895759C87C59B8B6FBD19C9F13AA7F14C93* __this, LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 ___signal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignalBus_Fire_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m63A7CDD20544D3179B3F9B10567F74318CD6CAD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// signalBus.Fire(signal);
		SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* L_0 = __this->___signalBus_0;
		LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 L_1 = ___signal0;
		NullCheck(L_0);
		SignalBus_Fire_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m63A7CDD20544D3179B3F9B10567F74318CD6CAD3(L_0, L_1, SignalBus_Fire_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m63A7CDD20544D3179B3F9B10567F74318CD6CAD3_RuntimeMethod_var);
		// }
		return;
	}
}
// scripts.bob.interfaces.IPlayer scripts.bob.mvc.model.SlotModel::get_Player()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SlotModel_get_Player_m620B741CF50DFD17BC8B19B99EBEF5C566BB5582 (SlotModel_t9EAAD895759C87C59B8B6FBD19C9F13AA7F14C93* __this, const RuntimeMethod* method) 
{
	{
		// public IPlayer Player { get; set; }
		RuntimeObject* L_0 = __this->___U3CPlayerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.model.SlotModel::set_Player(scripts.bob.interfaces.IPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotModel_set_Player_m0E1623DF72F4F865ABFC6D3086D982E7ED5866E2 (SlotModel_t9EAAD895759C87C59B8B6FBD19C9F13AA7F14C93* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IPlayer Player { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPlayerU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlayerU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 scripts.bob.mvc.model.vO.vOPayoutData::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t vOPayoutData_get_Id_m94EE867C31C03D52CA926E7363C258FECD85A4DB (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.model.vO.vOPayoutData::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vOPayoutData_set_Id_mBE8D874D3A16061B43109671828EE0F12188FBE3 (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String scripts.bob.mvc.model.vO.vOPayoutData::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* vOPayoutData_get_Name_m1AA1EFE6AD27D9BE9B4E25793FDCD0F1061EF178 (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.model.vO.vOPayoutData::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vOPayoutData_set_Name_m92F6CE6F22C653020D412EEB4981E13C30ECA1AE (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Int32> scripts.bob.mvc.model.vO.vOPayoutData::get_payout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* vOPayoutData_get_payout_mC75C63AAD13F0CA0CBFC7A1EB45F1DD3B1754924 (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* __this, const RuntimeMethod* method) 
{
	{
		// public List<int> payout { get; set; }
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___U3CpayoutU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.model.vO.vOPayoutData::set_payout(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vOPayoutData_set_payout_m48685425BBDFD01D5E898C7986626B3E0E440A4F (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<int> payout { get; set; }
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___value0;
		__this->___U3CpayoutU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpayoutU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void scripts.bob.mvc.model.vO.vOPayoutData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vOPayoutData__ctor_m47EE6F78B68CD5DE78F97B19DE59E5A2E50829F5 (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 scripts.bob.mvc.model.vO.vOPlayer::get_MinusBet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t vOPlayer_get_MinusBet_mB10970C9305789D71EA4366B0FAE3BA8C02646AE (vOPlayer_t70A9146571294281EEF74A3BF36DB8B48CEE9838* __this, const RuntimeMethod* method) 
{
	{
		// public int MinusBet { get; set; }
		int32_t L_0 = __this->___U3CMinusBetU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.model.vO.vOPlayer::set_MinusBet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vOPlayer_set_MinusBet_m4351ECA3C669F921518CAE313ED7A54F7CC17063 (vOPlayer_t70A9146571294281EEF74A3BF36DB8B48CEE9838* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int MinusBet { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CMinusBetU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 scripts.bob.mvc.model.vO.vOPlayer::get_TotalBet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t vOPlayer_get_TotalBet_m1114C240FF2DFE08053EC1A11F078E2D880CC0E0 (vOPlayer_t70A9146571294281EEF74A3BF36DB8B48CEE9838* __this, const RuntimeMethod* method) 
{
	{
		// public int TotalBet { get; set; }
		int32_t L_0 = __this->___U3CTotalBetU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.model.vO.vOPlayer::set_TotalBet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vOPlayer_set_TotalBet_m5D9BE579488B6319F9E7898E7F00B56C7A735AA7 (vOPlayer_t70A9146571294281EEF74A3BF36DB8B48CEE9838* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int TotalBet { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTotalBetU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 scripts.bob.mvc.model.vO.vOPlayer::get_AddBet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t vOPlayer_get_AddBet_mD73FEF49DF0BBAC2D9E9DFFDFE68C2D46D77DA0C (vOPlayer_t70A9146571294281EEF74A3BF36DB8B48CEE9838* __this, const RuntimeMethod* method) 
{
	{
		// public int AddBet { get; set; }
		int32_t L_0 = __this->___U3CAddBetU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.model.vO.vOPlayer::set_AddBet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vOPlayer_set_AddBet_m27E0A4F766DB4F81BB110F8EEFA012B13D3B966A (vOPlayer_t70A9146571294281EEF74A3BF36DB8B48CEE9838* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int AddBet { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CAddBetU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 scripts.bob.mvc.model.vO.vOPlayer::get_Balance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t vOPlayer_get_Balance_mE87DF2156D80E2CF3EE819D0CC44FA5E94866473 (vOPlayer_t70A9146571294281EEF74A3BF36DB8B48CEE9838* __this, const RuntimeMethod* method) 
{
	{
		// public int Balance { get; set; }
		int32_t L_0 = __this->___U3CBalanceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.model.vO.vOPlayer::set_Balance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vOPlayer_set_Balance_m85BE93A31A73A40575EA766F53FFA2309F299BDA (vOPlayer_t70A9146571294281EEF74A3BF36DB8B48CEE9838* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Balance { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CBalanceU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 scripts.bob.mvc.model.vO.vOPlayer::get_DeductBalance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t vOPlayer_get_DeductBalance_mF5191B154D2F682A8D26C1EB05C583C1CEA4960D (vOPlayer_t70A9146571294281EEF74A3BF36DB8B48CEE9838* __this, const RuntimeMethod* method) 
{
	{
		// public int DeductBalance { get; set; }
		int32_t L_0 = __this->___U3CDeductBalanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.model.vO.vOPlayer::set_DeductBalance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vOPlayer_set_DeductBalance_m4B85690E3B3D16F2995F5A52FAB0D90B98644811 (vOPlayer_t70A9146571294281EEF74A3BF36DB8B48CEE9838* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int DeductBalance { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CDeductBalanceU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 scripts.bob.mvc.model.vO.vOPlayer::get_Winnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t vOPlayer_get_Winnings_mEDFDEB2BC7D3B9FE1AAA3F98A95F0B13D288E6F7 (vOPlayer_t70A9146571294281EEF74A3BF36DB8B48CEE9838* __this, const RuntimeMethod* method) 
{
	{
		// public int Winnings { get; set; }
		int32_t L_0 = __this->___U3CWinningsU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.model.vO.vOPlayer::set_Winnings(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vOPlayer_set_Winnings_m36A7E9F3E479D2230620C596F8D726E2F29DC4D9 (vOPlayer_t70A9146571294281EEF74A3BF36DB8B48CEE9838* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Winnings { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CWinningsU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void scripts.bob.mvc.model.vO.vOPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vOPlayer__ctor_mD4C29F1AA11474163C3524A80823A082504C6F29 (vOPlayer_t70A9146571294281EEF74A3BF36DB8B48CEE9838* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scripts.bob.mvc.controller.PaylineBtnController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaylineBtnController_Start_m6A88353D8351AEE02757D9020C932D941FF4C87D (PaylineBtnController_tC5101EE6B2BAFA17D00CFAC05632779F0AEFAAC1* __this, const RuntimeMethod* method) 
{
	{
		// if (PaylinePopup.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PaylinePopup_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// PaylinePopup.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___PaylinePopup_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.PaylineBtnController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaylineBtnController_Update_mF79DBF3D9CBBE5D81F7F853F9E3A7672324042C8 (PaylineBtnController_tC5101EE6B2BAFA17D00CFAC05632779F0AEFAAC1* __this, const RuntimeMethod* method) 
{
	{
		// void Update() { }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.PaylineBtnController::OnShowPayline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaylineBtnController_OnShowPayline_m0736212BA586392A4A0B9D8D50D1C3D714D2C491 (PaylineBtnController_tC5101EE6B2BAFA17D00CFAC05632779F0AEFAAC1* __this, const RuntimeMethod* method) 
{
	{
		// PaylinePopup.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PaylinePopup_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.PaylineBtnController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PaylineBtnController__ctor_m32C41784A1A25769EF5799A9092E2AA4964ADE00 (PaylineBtnController_tC5101EE6B2BAFA17D00CFAC05632779F0AEFAAC1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scripts.bob.mvc.controller.PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m70AD6997EAA5EE7D8213162B880C0756261F6A31 (PlayerController_t0EC092E7DD9324F4214A56D034424704EAF8E36A* __this, const RuntimeMethod* method) 
{
	{
		// void Start() { }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_mBF2107A0D04C2A094F2572ECA0912858B0664B62 (PlayerController_t0EC092E7DD9324F4214A56D034424704EAF8E36A* __this, const RuntimeMethod* method) 
{
	{
		// void Update() { }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mE5A4906745A871A7C13A2D4B05E710B40EF69B8D (PlayerController_t0EC092E7DD9324F4214A56D034424704EAF8E36A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotReel> scripts.bob.mvc.controller.SlotMachineController::get_Reels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* SlotMachineController_get_Reels_m72EA0E492618B9DC703927D6B1735A83A1D22395 (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) 
{
	{
		// public List<SlotReel> Reels { get; set; } = new List<SlotReel>();
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_0 = __this->___U3CReelsU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.controller.SlotMachineController::set_Reels(System.Collections.Generic.List`1<scripts.bob.mvc.view.components.SlotReel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachineController_set_Reels_mAF1AEB373D7E68599159B5CAD1CFA16A2529E414 (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<SlotReel> Reels { get; set; } = new List<SlotReel>();
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_0 = ___value0;
		__this->___U3CReelsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReelsU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Boolean scripts.bob.mvc.controller.SlotMachineController::get_InSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SlotMachineController_get_InSequence_m17E82F21FD7CE2AE639E9EB94B5C97EB23456F8F (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) 
{
	{
		// public bool InSequence { get; set; } = false;
		bool L_0 = __this->___U3CInSequenceU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.controller.SlotMachineController::set_InSequence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachineController_set_InSequence_m4EF5E64FE720EC0D1EF0DA4659DDC114E104FC96 (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool InSequence { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CInSequenceU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void scripts.bob.mvc.controller.SlotMachineController::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachineController_Initialize_mB48C87CD9680531695C7B376C170279B7368E47F (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SlotMachineController_OnReelSpinFinished_m1012E37EB3B4E1A16808A7B6B69610E85FC8937E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < Reels.Count; i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0004:
	{
		// SlotReel reel = Reels[i] as SlotReel;
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_0;
		L_0 = SlotMachineController_get_Reels_m72EA0E492618B9DC703927D6B1735A83A1D22395_inline(__this, NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_2;
		L_2 = List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858(L_0, L_1, List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858_RuntimeMethod_var);
		// reel.OnSpinDone += OnReelSpinFinished;
		Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773* L_3 = (Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773*)il2cpp_codegen_object_new(Action_1_t8FE1B773C0BEB16AEA85E757F876A19A1A803773_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m5F390F49D0D25825BF7BA11839E429832FFC6339(L_3, __this, (intptr_t)((void*)SlotMachineController_OnReelSpinFinished_m1012E37EB3B4E1A16808A7B6B69610E85FC8937E_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		SlotReel_add_OnSpinDone_mC7245D8080F979F38F55958A81B17FA784018758(L_2, L_3, NULL);
		// for (int i = 0; i < Reels.Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0025:
	{
		// for (int i = 0; i < Reels.Count; i++)
		int32_t L_5 = V_0;
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_6;
		L_6 = SlotMachineController_get_Reels_m72EA0E492618B9DC703927D6B1735A83A1D22395_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_inline(L_6, List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.SlotMachineController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachineController_Start_mE743149D9D90AC166A3C0931B68880BDBE5BD1C5 (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) 
{
	{
		// void Start() { }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.SlotMachineController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachineController_Update_mF03F39B3D182F0058CB1DE52ECE5B459982A0669 (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator scripts.bob.mvc.controller.SlotMachineController::SpeedSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SlotMachineController_SpeedSpan_mD9C5D6FCC57DF7A3D0078F57F6C325A4AB4D747D (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpeedSpanU3Ed__14_tBE373A048F89B2AA54142A1AD8F1B36AEA98C48A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpeedSpanU3Ed__14_tBE373A048F89B2AA54142A1AD8F1B36AEA98C48A* L_0 = (U3CSpeedSpanU3Ed__14_tBE373A048F89B2AA54142A1AD8F1B36AEA98C48A*)il2cpp_codegen_object_new(U3CSpeedSpanU3Ed__14_tBE373A048F89B2AA54142A1AD8F1B36AEA98C48A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpeedSpanU3Ed__14__ctor_m2B85506D3118D10206823CADF66A161D8BFE4AF2(L_0, 0, NULL);
		U3CSpeedSpanU3Ed__14_tBE373A048F89B2AA54142A1AD8F1B36AEA98C48A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void scripts.bob.mvc.controller.SlotMachineController::SpinReel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachineController_SpinReel_m1A8259A08A6D41EA265A244237C6333EA7DE3626 (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99F4655F3B5C1EA758306CBFCA4CA3A1B83F2EE0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Reels[SpinIndex].Spin();
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_0;
		L_0 = SlotMachineController_get_Reels_m72EA0E492618B9DC703927D6B1735A83A1D22395_inline(__this, NULL);
		int32_t L_1 = __this->___SpinIndex_7;
		NullCheck(L_0);
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_2;
		L_2 = List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858(L_0, L_1, List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858_RuntimeMethod_var);
		NullCheck(L_2);
		SlotReel_Spin_m3DB9A297BFF1F9CA0098D3098522208D072A23D4(L_2, NULL);
		// SpinIndex++;
		int32_t L_3 = __this->___SpinIndex_7;
		__this->___SpinIndex_7 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// StartCoroutine("SpeedSpan");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral99F4655F3B5C1EA758306CBFCA4CA3A1B83F2EE0, NULL);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.SlotMachineController::OnReelSpinFinished(scripts.bob.mvc.view.components.SlotReel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachineController_OnReelSpinFinished_m1012E37EB3B4E1A16808A7B6B69610E85FC8937E (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* ___reel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool IsComplete = true;
		V_0 = (bool)1;
		// for (int i = 0; i < Reels.Count; i++)
		V_1 = 0;
		goto IL_0021;
	}

IL_0006:
	{
		// SlotReel currentReel = Reels[i] as SlotReel;
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_0;
		L_0 = SlotMachineController_get_Reels_m72EA0E492618B9DC703927D6B1735A83A1D22395_inline(__this, NULL);
		int32_t L_1 = V_1;
		NullCheck(L_0);
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_2;
		L_2 = List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858(L_0, L_1, List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858_RuntimeMethod_var);
		// if (!currentReel.TurnDone)
		NullCheck(L_2);
		bool L_3;
		L_3 = SlotReel_get_TurnDone_m914690427AE789100C86AB765B0490B4ED0DB783_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		// IsComplete = false;
		V_0 = (bool)0;
		// break;
		goto IL_002f;
	}

IL_001d:
	{
		// for (int i = 0; i < Reels.Count; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0021:
	{
		// for (int i = 0; i < Reels.Count; i++)
		int32_t L_5 = V_1;
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_6;
		L_6 = SlotMachineController_get_Reels_m72EA0E492618B9DC703927D6B1735A83A1D22395_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_inline(L_6, List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0006;
		}
	}

IL_002f:
	{
		// if (!IsComplete)
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_0033;
		}
	}
	{
		// return;
		return;
	}

IL_0033:
	{
		// InSequence = false;
		SlotMachineController_set_InSequence_m4EF5E64FE720EC0D1EF0DA4659DDC114E104FC96_inline(__this, (bool)0, NULL);
		// ComputeResults();
		SlotMachineController_ComputeResults_mC782CD5BDBC11722D369A46034144532702F16EF(__this, NULL);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.SlotMachineController::OnSpinReel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachineController_OnSpinReel_mE94516D9AB144F50F078EB2D061F786EB5CE53D3 (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) 
{
	{
		// if (!InSequence)
		bool L_0;
		L_0 = SlotMachineController_get_InSequence_m17E82F21FD7CE2AE639E9EB94B5C97EB23456F8F_inline(__this, NULL);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// SpinIndex = 0;
		__this->___SpinIndex_7 = 0;
		// InSequence = true;
		SlotMachineController_set_InSequence_m4EF5E64FE720EC0D1EF0DA4659DDC114E104FC96_inline(__this, (bool)1, NULL);
		// SpinReel();
		SlotMachineController_SpinReel_m1A8259A08A6D41EA265A244237C6333EA7DE3626(__this, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.SlotMachineController::ForceStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachineController_ForceStop_mEA6E94221DF07CAAF693D492525E546807F607EC (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF58A84B32382F45C5D75FD257EE7D6F959DF4AF6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	{
		// for (int i = 0; i < Reels.Count; i++)
		V_0 = 0;
		goto IL_0040;
	}

IL_0004:
	{
		// Debug.Log("Reels " + Reels[i]);
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_0;
		L_0 = SlotMachineController_get_Reels_m72EA0E492618B9DC703927D6B1735A83A1D22395_inline(__this, NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_2;
		L_2 = List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858(L_0, L_1, List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858_RuntimeMethod_var);
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_3 = L_2;
		G_B2_0 = L_3;
		G_B2_1 = _stringLiteralF58A84B32382F45C5D75FD257EE7D6F959DF4AF6;
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = _stringLiteralF58A84B32382F45C5D75FD257EE7D6F959DF4AF6;
			goto IL_001c;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_0021;
	}

IL_001c:
	{
		NullCheck(G_B3_0);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B3_0);
		G_B4_0 = L_4;
		G_B4_1 = G_B3_1;
	}

IL_0021:
	{
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B4_1, G_B4_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// SlotReel reel = Reels[i] as SlotReel;
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_6;
		L_6 = SlotMachineController_get_Reels_m72EA0E492618B9DC703927D6B1735A83A1D22395_inline(__this, NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_8;
		L_8 = List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858(L_6, L_7, List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858_RuntimeMethod_var);
		// reel.ForceStop();
		NullCheck(L_8);
		SlotReel_ForceStop_m32B644235202ADA89D2D3F2C50DE100016DEAD09(L_8, NULL);
		// for (int i = 0; i < Reels.Count; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0040:
	{
		// for (int i = 0; i < Reels.Count; i++)
		int32_t L_10 = V_0;
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_11;
		L_11 = SlotMachineController_get_Reels_m72EA0E492618B9DC703927D6B1735A83A1D22395_inline(__this, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_inline(L_11, List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.SlotMachineController::ComputeResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachineController_ComputeResults_mC782CD5BDBC11722D369A46034144532702F16EF (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m742C4CDC916BD797D51AB9955E7C264CCB1F7C19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m0AE2AC8144FB5C156986FEF2D48A890C4D5DA5B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7E92008FF288F67809988B190FB0FBE858EF8288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4B7D3EBF849A31A1BF982AFA7AC3B6C1CF830948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE805C7E404C3862CCBCEE177DB0A9FCA15081A82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3161A2252C6514F83526C486444FABD60342B213_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD6B83071B1B104DF69D4D6F4DC0CFC07CDC895AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m3E5D0F91A49DB76075C4538543382C3D8E609A6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0902FCD5AF2D3D26A57DFA0DD07F7EFDE98DECF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7354D622656B2C9E626724CFBE9E9396A79CB477_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3D63A1EFA0B89AA131F173D1FF9FD7BF5D889A17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832* V_0 = NULL;
	List_1_t3D63A1EFA0B89AA131F173D1FF9FD7BF5D889A17* V_1 = NULL;
	int32_t V_2 = 0;
	LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* V_5 = NULL;
	Enumerator_t6686E406103FD9D1F22DDB390521659D07931FF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	KeyValuePair_2_t6016CE3E67A33A7A320F98CE92AD2701F3FD87CB V_7;
	memset((&V_7), 0, sizeof(V_7));
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_8 = NULL;
	int32_t V_9 = 0;
	vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	String_t* V_13 = NULL;
	{
		// Dictionary<int, List<Slot>> ColumnReels = new Dictionary<int, List<Slot>>();
		Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832* L_0 = (Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832*)il2cpp_codegen_object_new(Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m7E92008FF288F67809988B190FB0FBE858EF8288(L_0, Dictionary_2__ctor_m7E92008FF288F67809988B190FB0FBE858EF8288_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < Reels.Count; i++)
		V_4 = 0;
		goto IL_0046;
	}

IL_000b:
	{
		// List<Slot> col = SlotUtils.Instance.GetResultPreSlots(Reels[i], Reels[i].FinalArea);
		il2cpp_codegen_runtime_class_init_inline(SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08_il2cpp_TypeInfo_var);
		SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08* L_1;
		L_1 = SlotUtils_get_Instance_m5B3A7D238718096F432D45FD97581FBC75F9DAB6_inline(NULL);
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_2;
		L_2 = SlotMachineController_get_Reels_m72EA0E492618B9DC703927D6B1735A83A1D22395_inline(__this, NULL);
		int32_t L_3 = V_4;
		NullCheck(L_2);
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_4;
		L_4 = List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858(L_2, L_3, List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858_RuntimeMethod_var);
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_5;
		L_5 = SlotMachineController_get_Reels_m72EA0E492618B9DC703927D6B1735A83A1D22395_inline(__this, NULL);
		int32_t L_6 = V_4;
		NullCheck(L_5);
		SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* L_7;
		L_7 = List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858(L_5, L_6, List_1_get_Item_m32FA903752C9ADC392BB50F6017ED0C05E46B858_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SlotReel_get_FinalArea_m82CCAC20278D9D25A95B78D11BF41615FF8B8029_inline(L_7, NULL);
		NullCheck(L_1);
		List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* L_9;
		L_9 = SlotUtils_GetResultPreSlots_mA3FA2999E936779AA36F4B9CE293E6DCFCDDB3E1(L_1, L_4, L_8, NULL);
		V_5 = L_9;
		// ColumnReels.Add(i, col);
		Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832* L_10 = V_0;
		int32_t L_11 = V_4;
		List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* L_12 = V_5;
		NullCheck(L_10);
		Dictionary_2_Add_m742C4CDC916BD797D51AB9955E7C264CCB1F7C19(L_10, L_11, L_12, Dictionary_2_Add_m742C4CDC916BD797D51AB9955E7C264CCB1F7C19_RuntimeMethod_var);
		// for (int i = 0; i < Reels.Count; i++)
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0046:
	{
		// for (int i = 0; i < Reels.Count; i++)
		int32_t L_14 = V_4;
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_15;
		L_15 = SlotMachineController_get_Reels_m72EA0E492618B9DC703927D6B1735A83A1D22395_inline(__this, NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_inline(L_15, List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_000b;
		}
	}
	{
		// List<IPayout> payouts = new List<IPayout>();
		List_1_t3D63A1EFA0B89AA131F173D1FF9FD7BF5D889A17* L_17 = (List_1_t3D63A1EFA0B89AA131F173D1FF9FD7BF5D889A17*)il2cpp_codegen_object_new(List_1_t3D63A1EFA0B89AA131F173D1FF9FD7BF5D889A17_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		List_1__ctor_m7354D622656B2C9E626724CFBE9E9396A79CB477(L_17, List_1__ctor_m7354D622656B2C9E626724CFBE9E9396A79CB477_RuntimeMethod_var);
		V_1 = L_17;
		// int payout = 0;
		V_2 = 0;
		// foreach (var payline in AppConfig.PAYLINES)
		il2cpp_codegen_runtime_class_init_inline(AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var);
		Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* L_18 = ((AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_StaticFields*)il2cpp_codegen_static_fields_for(AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var))->___PAYLINES_4;
		NullCheck(L_18);
		Enumerator_t6686E406103FD9D1F22DDB390521659D07931FF7 L_19;
		L_19 = Dictionary_2_GetEnumerator_m0AE2AC8144FB5C156986FEF2D48A890C4D5DA5B2(L_18, Dictionary_2_GetEnumerator_m0AE2AC8144FB5C156986FEF2D48A890C4D5DA5B2_RuntimeMethod_var);
		V_6 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0188:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE805C7E404C3862CCBCEE177DB0A9FCA15081A82((&V_6), Enumerator_Dispose_mE805C7E404C3862CCBCEE177DB0A9FCA15081A82_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_017a_1;
			}

IL_006e_1:
			{
				// foreach (var payline in AppConfig.PAYLINES)
				KeyValuePair_2_t6016CE3E67A33A7A320F98CE92AD2701F3FD87CB L_20;
				L_20 = Enumerator_get_Current_mD6B83071B1B104DF69D4D6F4DC0CFC07CDC895AB_inline((&V_6), Enumerator_get_Current_mD6B83071B1B104DF69D4D6F4DC0CFC07CDC895AB_RuntimeMethod_var);
				V_7 = L_20;
				// List<int> pLine = payline.Value;
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_21;
				L_21 = KeyValuePair_2_get_Value_m3E5D0F91A49DB76075C4538543382C3D8E609A6B_inline((&V_7), KeyValuePair_2_get_Value_m3E5D0F91A49DB76075C4538543382C3D8E609A6B_RuntimeMethod_var);
				V_8 = L_21;
				// string strRes = string.Join(",", pLine);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_22 = V_8;
				String_t* L_23;
				L_23 = String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_22, String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C_RuntimeMethod_var);
				// int score = 0;
				V_9 = 0;
				// vOPayoutData pOut = null;
				V_10 = (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5*)NULL;
				// for (int i = 0; i < pLine.Count; i++)
				V_11 = 0;
				goto IL_0150_1;
			}

IL_009b_1:
			{
				// int target = pLine[i];
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_24 = V_8;
				int32_t L_25 = V_11;
				NullCheck(L_24);
				int32_t L_26;
				L_26 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_24, L_25, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
				V_12 = L_26;
				// string symbol = ColumnReels[0][target].Symbol;
				Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832* L_27 = V_0;
				NullCheck(L_27);
				List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* L_28;
				L_28 = Dictionary_2_get_Item_m4B7D3EBF849A31A1BF982AFA7AC3B6C1CF830948(L_27, 0, Dictionary_2_get_Item_m4B7D3EBF849A31A1BF982AFA7AC3B6C1CF830948_RuntimeMethod_var);
				int32_t L_29 = V_12;
				NullCheck(L_28);
				Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_30;
				L_30 = List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743(L_28, L_29, List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743_RuntimeMethod_var);
				NullCheck(L_30);
				String_t* L_31;
				L_31 = Slot_get_Symbol_m480B9BAB94598BCE7453396B763A6252E97AF63B_inline(L_30, NULL);
				// string vsRes = ColumnReels[i][target].Symbol;
				Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832* L_32 = V_0;
				int32_t L_33 = V_11;
				NullCheck(L_32);
				List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* L_34;
				L_34 = Dictionary_2_get_Item_m4B7D3EBF849A31A1BF982AFA7AC3B6C1CF830948(L_32, L_33, Dictionary_2_get_Item_m4B7D3EBF849A31A1BF982AFA7AC3B6C1CF830948_RuntimeMethod_var);
				int32_t L_35 = V_12;
				NullCheck(L_34);
				Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_36;
				L_36 = List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743(L_34, L_35, List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743_RuntimeMethod_var);
				NullCheck(L_36);
				String_t* L_37;
				L_37 = Slot_get_Symbol_m480B9BAB94598BCE7453396B763A6252E97AF63B_inline(L_36, NULL);
				V_13 = L_37;
				// if (symbol == vsRes)
				String_t* L_38 = V_13;
				bool L_39;
				L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, L_38, NULL);
				if (!L_39)
				{
					goto IL_00de_1;
				}
			}
			{
				// score++;
				int32_t L_40 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
			}

IL_00de_1:
			{
				// if (i == 0)
				int32_t L_41 = V_11;
				if (L_41)
				{
					goto IL_0127_1;
				}
			}
			{
				// pOut = new vOPayoutData();
				vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* L_42 = (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5*)il2cpp_codegen_object_new(vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5_il2cpp_TypeInfo_var);
				NullCheck(L_42);
				vOPayoutData__ctor_m47EE6F78B68CD5DE78F97B19DE59E5A2E50829F5(L_42, NULL);
				V_10 = L_42;
				// pOut.Id = ColumnReels[0][0].Id;
				vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* L_43 = V_10;
				Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832* L_44 = V_0;
				NullCheck(L_44);
				List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* L_45;
				L_45 = Dictionary_2_get_Item_m4B7D3EBF849A31A1BF982AFA7AC3B6C1CF830948(L_44, 0, Dictionary_2_get_Item_m4B7D3EBF849A31A1BF982AFA7AC3B6C1CF830948_RuntimeMethod_var);
				NullCheck(L_45);
				Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_46;
				L_46 = List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743(L_45, 0, List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743_RuntimeMethod_var);
				NullCheck(L_46);
				int32_t L_47;
				L_47 = Slot_get_Id_m84E86074A1BB9DBDB52190262E836877CD4DDD6D_inline(L_46, NULL);
				NullCheck(L_43);
				vOPayoutData_set_Id_mBE8D874D3A16061B43109671828EE0F12188FBE3_inline(L_43, L_47, NULL);
				// pOut.Name = ColumnReels[0][0].Symbol;
				vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* L_48 = V_10;
				Dictionary_2_t5EAE34E5AD009548BD6C12494CE9CEE7234A2832* L_49 = V_0;
				NullCheck(L_49);
				List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* L_50;
				L_50 = Dictionary_2_get_Item_m4B7D3EBF849A31A1BF982AFA7AC3B6C1CF830948(L_49, 0, Dictionary_2_get_Item_m4B7D3EBF849A31A1BF982AFA7AC3B6C1CF830948_RuntimeMethod_var);
				NullCheck(L_50);
				Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* L_51;
				L_51 = List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743(L_50, 0, List_1_get_Item_mCF828E6A7EE7A53C9662ADEF992754332B9AE743_RuntimeMethod_var);
				NullCheck(L_51);
				String_t* L_52;
				L_52 = Slot_get_Symbol_m480B9BAB94598BCE7453396B763A6252E97AF63B_inline(L_51, NULL);
				NullCheck(L_48);
				vOPayoutData_set_Name_m92F6CE6F22C653020D412EEB4981E13C30ECA1AE_inline(L_48, L_52, NULL);
				// pOut.payout = new List<int>();
				vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* L_53 = V_10;
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_54 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
				NullCheck(L_54);
				List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_54, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
				NullCheck(L_53);
				vOPayoutData_set_payout_m48685425BBDFD01D5E898C7986626B3E0E440A4F_inline(L_53, L_54, NULL);
			}

IL_0127_1:
			{
				// pOut.payout.Add(score);
				vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* L_55 = V_10;
				NullCheck(L_55);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_56;
				L_56 = vOPayoutData_get_payout_mC75C63AAD13F0CA0CBFC7A1EB45F1DD3B1754924_inline(L_55, NULL);
				int32_t L_57 = V_9;
				NullCheck(L_56);
				List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_56, L_57, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
				// if (i > pLine.Count - 1)
				int32_t L_58 = V_11;
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_59 = V_8;
				NullCheck(L_59);
				int32_t L_60;
				L_60 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_59, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
				if ((((int32_t)L_58) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_60, 1)))))
				{
					goto IL_014a_1;
				}
			}
			{
				// payouts.Add(pOut as IPayout);
				List_1_t3D63A1EFA0B89AA131F173D1FF9FD7BF5D889A17* L_61 = V_1;
				vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* L_62 = V_10;
				NullCheck(L_61);
				List_1_Add_m0902FCD5AF2D3D26A57DFA0DD07F7EFDE98DECF8_inline(L_61, L_62, List_1_Add_m0902FCD5AF2D3D26A57DFA0DD07F7EFDE98DECF8_RuntimeMethod_var);
			}

IL_014a_1:
			{
				// for (int i = 0; i < pLine.Count; i++)
				int32_t L_63 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_63, 1));
			}

IL_0150_1:
			{
				// for (int i = 0; i < pLine.Count; i++)
				int32_t L_64 = V_11;
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_65 = V_8;
				NullCheck(L_65);
				int32_t L_66;
				L_66 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_65, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
				if ((((int32_t)L_64) < ((int32_t)L_66)))
				{
					goto IL_009b_1;
				}
			}
			{
				// if (score == 3)
				int32_t L_67 = V_9;
				if ((!(((uint32_t)L_67) == ((uint32_t)3))))
				{
					goto IL_0167_1;
				}
			}
			{
				// payout += 1;
				int32_t L_68 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_0167_1:
			{
				// if (score == 4)
				int32_t L_69 = V_9;
				if ((!(((uint32_t)L_69) == ((uint32_t)4))))
				{
					goto IL_0170_1;
				}
			}
			{
				// payout += 5;
				int32_t L_70 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_70, 5));
			}

IL_0170_1:
			{
				// if (score == 3)
				int32_t L_71 = V_9;
				if ((!(((uint32_t)L_71) == ((uint32_t)3))))
				{
					goto IL_017a_1;
				}
			}
			{
				// payout += 10;
				int32_t L_72 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_72, ((int32_t)10)));
			}

IL_017a_1:
			{
				// foreach (var payline in AppConfig.PAYLINES)
				bool L_73;
				L_73 = Enumerator_MoveNext_m3161A2252C6514F83526C486444FABD60342B213((&V_6), Enumerator_MoveNext_m3161A2252C6514F83526C486444FABD60342B213_RuntimeMethod_var);
				if (L_73)
				{
					goto IL_006e_1;
				}
			}
			{
				goto IL_0196;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0196:
	{
		// if (payout > 0)
		int32_t L_74 = V_2;
		if ((((int32_t)L_74) <= ((int32_t)0)))
		{
			goto IL_01b2;
		}
	}
	{
		// IPlayer player = model.Player;
		RuntimeObject* L_75 = __this->___model_4;
		NullCheck(L_75);
		RuntimeObject* L_76;
		L_76 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* scripts.bob.interfaces.IPlayer scripts.bob.interfaces.IModel::get_Player() */, IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A_il2cpp_TypeInfo_var, L_75);
		// player.Winnings += payout;
		RuntimeObject* L_77 = L_76;
		NullCheck(L_77);
		int32_t L_78;
		L_78 = InterfaceFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 scripts.bob.interfaces.IPlayer::get_Winnings() */, IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A_il2cpp_TypeInfo_var, L_77);
		int32_t L_79 = V_2;
		NullCheck(L_77);
		InterfaceActionInvoker1< int32_t >::Invoke(11 /* System.Void scripts.bob.interfaces.IPlayer::set_Winnings(System.Int32) */, IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A_il2cpp_TypeInfo_var, L_77, ((int32_t)il2cpp_codegen_add(L_78, L_79)));
	}

IL_01b2:
	{
		// LocalSignal signal = new LocalSignal();
		il2cpp_codegen_initobj((&V_3), sizeof(LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45));
		// signal.EventType = slotevents.LocalEvents.SpinDone;
		LocalSignal_set_EventType_m0CE7B4AC9CAFAE14B9AC023D8FBE17CE9738664C_inline((&V_3), 2, NULL);
		// this.model.BroadCastLocalSignal(signal);
		RuntimeObject* L_80 = __this->___model_4;
		LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 L_81 = V_3;
		NullCheck(L_80);
		InterfaceActionInvoker1< LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 >::Invoke(0 /* System.Void scripts.bob.interfaces.IModel::BroadCastLocalSignal(scripts.bob.signals.LocalSignal) */, IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A_il2cpp_TypeInfo_var, L_80, L_81);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.SlotMachineController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotMachineController__ctor_m0FA1D3D53253021F189E9B44C887308EB4F106BF (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8466E3BF8A9CDE2D323A3473E0DD4BD13DBDBE72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<SlotReel> Reels { get; set; } = new List<SlotReel>();
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_0 = (List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0*)il2cpp_codegen_object_new(List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8466E3BF8A9CDE2D323A3473E0DD4BD13DBDBE72(L_0, List_1__ctor_m8466E3BF8A9CDE2D323A3473E0DD4BD13DBDBE72_RuntimeMethod_var);
		__this->___U3CReelsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReelsU3Ek__BackingField_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scripts.bob.mvc.controller.SlotMachineController/<SpeedSpan>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedSpanU3Ed__14__ctor_m2B85506D3118D10206823CADF66A161D8BFE4AF2 (U3CSpeedSpanU3Ed__14_tBE373A048F89B2AA54142A1AD8F1B36AEA98C48A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void scripts.bob.mvc.controller.SlotMachineController/<SpeedSpan>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedSpanU3Ed__14_System_IDisposable_Dispose_m9F40795E36B8C619AA39FA5AA43C1E06EB582ADE (U3CSpeedSpanU3Ed__14_tBE373A048F89B2AA54142A1AD8F1B36AEA98C48A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean scripts.bob.mvc.controller.SlotMachineController/<SpeedSpan>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpeedSpanU3Ed__14_MoveNext_m73917CF1A1E646F2915F7BBF6F647C347EF8D864 (U3CSpeedSpanU3Ed__14_tBE373A048F89B2AA54142A1AD8F1B36AEA98C48A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99F4655F3B5C1EA758306CBFCA4CA3A1B83F2EE0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(AppConfig.ITERATION_TIME);
		il2cpp_codegen_runtime_class_init_inline(AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var);
		float L_4 = ((AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_StaticFields*)il2cpp_codegen_static_fields_for(AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var))->___ITERATION_TIME_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (SpinIndex >= Reels.Count)
		SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___SpinIndex_7;
		SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* L_8 = V_1;
		NullCheck(L_8);
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_9;
		L_9 = SlotMachineController_get_Reels_m72EA0E492618B9DC703927D6B1735A83A1D22395_inline(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_inline(L_9, List_1_get_Count_mFF7A91F1B1D56FE90245E6113ACC3C590616F8A5_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_10)))
		{
			goto IL_005e;
		}
	}
	{
		// StopCoroutine("SpeedSpan");
		SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* L_11 = V_1;
		NullCheck(L_11);
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(L_11, _stringLiteral99F4655F3B5C1EA758306CBFCA4CA3A1B83F2EE0, NULL);
		goto IL_0064;
	}

IL_005e:
	{
		// SpinReel();
		SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* L_12 = V_1;
		NullCheck(L_12);
		SlotMachineController_SpinReel_m1A8259A08A6D41EA265A244237C6333EA7DE3626(L_12, NULL);
	}

IL_0064:
	{
		// }
		return (bool)0;
	}
}
// System.Object scripts.bob.mvc.controller.SlotMachineController/<SpeedSpan>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpeedSpanU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBE3E12C421E654732CB335CDE8683DB0D86CC4D7 (U3CSpeedSpanU3Ed__14_tBE373A048F89B2AA54142A1AD8F1B36AEA98C48A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void scripts.bob.mvc.controller.SlotMachineController/<SpeedSpan>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedSpanU3Ed__14_System_Collections_IEnumerator_Reset_mA3746ECF7381377D58BFCEB0485EFECB95C9941A (U3CSpeedSpanU3Ed__14_tBE373A048F89B2AA54142A1AD8F1B36AEA98C48A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpeedSpanU3Ed__14_System_Collections_IEnumerator_Reset_mA3746ECF7381377D58BFCEB0485EFECB95C9941A_RuntimeMethod_var)));
	}
}
// System.Object scripts.bob.mvc.controller.SlotMachineController/<SpeedSpan>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpeedSpanU3Ed__14_System_Collections_IEnumerator_get_Current_m175E1D2DADBC660F7351BFA793D9D8B6BA21023E (U3CSpeedSpanU3Ed__14_tBE373A048F89B2AA54142A1AD8F1B36AEA98C48A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scripts.bob.mvc.controller.SpinController::Construct(Zenject.SignalBus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinController_Construct_mFAEEDADB04789BB0AE8B6711CB32F31823C1D6E0 (SpinController_t0C7CF26D5F7D7A409CDF79C75C5356A9797DD1F3* __this, SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* ___signalBus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignalBus_Subscribe_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m4A93064D0B9982074DFA0BD9139F9CFDC51E29D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpinController_U3CConstructU3Eb__2_0_m4E256A66C0930F3B44945043CDAF816A94BAAB52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.signalBus = signalBus;
		SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* L_0 = ___signalBus0;
		__this->___signalBus_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signalBus_5), (void*)L_0);
		// this.signalBus.Subscribe<LocalSignal>(x => OnSignalReceived(x));
		SignalBus_tEEBC8E4D5AA02F17A394B1439D4ECA939B9B0C58* L_1 = __this->___signalBus_5;
		Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E* L_2 = (Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E*)il2cpp_codegen_object_new(Action_1_t2156918DD8EE67103EDF399B953BD4E9FF81EF5E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mFF98EC4D00360B49568348B418A50E0A997DCF49(L_2, __this, (intptr_t)((void*)SpinController_U3CConstructU3Eb__2_0_m4E256A66C0930F3B44945043CDAF816A94BAAB52_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		SignalBus_Subscribe_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m4A93064D0B9982074DFA0BD9139F9CFDC51E29D4(L_1, L_2, SignalBus_Subscribe_TisLocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45_m4A93064D0B9982074DFA0BD9139F9CFDC51E29D4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.SpinController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinController_Start_mF3F55DD3540EF3A6A08FF60C030D7A2DAEAF4AF1 (SpinController_t0C7CF26D5F7D7A409CDF79C75C5356A9797DD1F3* __this, const RuntimeMethod* method) 
{
	{
		// void Start() { }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.SpinController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinController_Update_m46E8E17AEB60D4422C4A5A156FF955E6E6F2B126 (SpinController_t0C7CF26D5F7D7A409CDF79C75C5356A9797DD1F3* __this, const RuntimeMethod* method) 
{
	{
		// void Update() { }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.SpinController::OnClickSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinController_OnClickSpin_m50F112CE1CC07EF129212ADEFE5089640531C2A2 (SpinController_t0C7CF26D5F7D7A409CDF79C75C5356A9797DD1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// LocalSignal signal = new LocalSignal("", slotevents.LocalEvents.StartSpin);
		LocalSignal__ctor_m4365C95E79DFD38BD92CDFDC8CC9D8F4B7A10AE5((&V_0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 1, NULL);
		// model.BroadCastLocalSignal(signal);
		RuntimeObject* L_0 = __this->___model_4;
		LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 L_1 = V_0;
		NullCheck(L_0);
		InterfaceActionInvoker1< LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 >::Invoke(0 /* System.Void scripts.bob.interfaces.IModel::BroadCastLocalSignal(scripts.bob.signals.LocalSignal) */, IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.SpinController::OnSignalReceived(scripts.bob.signals.LocalSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinController_OnSignalReceived_mDE68A50BAEAD839E6FB0F7F5032F5595C702BC48 (SpinController_t0C7CF26D5F7D7A409CDF79C75C5356A9797DD1F3* __this, LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 ___signal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (signal.EventType == slotevents.LocalEvents.PlayerCoinUpdate)
		int32_t L_0;
		L_0 = LocalSignal_get_EventType_mA2FCD1204C5B527CF1CDE1D85D40B3CC09F5F587_inline((&___signal0), NULL);
		if (L_0)
		{
			goto IL_003f;
		}
	}
	{
		// IPlayer player = this.model.Player;
		RuntimeObject* L_1 = __this->___model_4;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* scripts.bob.interfaces.IPlayer scripts.bob.interfaces.IModel::get_Player() */, IModel_tA57E26EF307F31D98B75586D98A401E4E6B33C0A_il2cpp_TypeInfo_var, L_1);
		// if (player.TotalBet <= 0)
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 scripts.bob.interfaces.IPlayer::get_TotalBet() */, IPlayer_t2B6CF0611FD50D0437C6F7C4AB94E608E9BE4A6A_il2cpp_TypeInfo_var, L_2);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		// Button button = this.gameObject.GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5;
		L_5 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_4, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		// button.enabled = false;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		return;
	}

IL_002e:
	{
		// Button button = this.gameObject.GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7;
		L_7 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_6, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		// button.enabled = true;
		NullCheck(L_7);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)1, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void scripts.bob.mvc.controller.SpinController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinController__ctor_m3F49662C4C57C56A54E755E2F2CF831CA0D9B652 (SpinController_t0C7CF26D5F7D7A409CDF79C75C5356A9797DD1F3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void scripts.bob.mvc.controller.SpinController::<Construct>b__2_0(scripts.bob.signals.LocalSignal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinController_U3CConstructU3Eb__2_0_m4E256A66C0930F3B44945043CDAF816A94BAAB52 (SpinController_t0C7CF26D5F7D7A409CDF79C75C5356A9797DD1F3* __this, LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 ___x0, const RuntimeMethod* method) 
{
	{
		// this.signalBus.Subscribe<LocalSignal>(x => OnSignalReceived(x));
		LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45 L_0 = ___x0;
		SpinController_OnSignalReceived_mDE68A50BAEAD839E6FB0F7F5032F5595C702BC48(__this, L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scripts.bob.configuration.AppConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfig__ctor_m3A5035545EE305CF600E34F2559BE82152714DD5 (AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void scripts.bob.configuration.AppConfig::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfig__cctor_mC5444816FBCE39EE4FC54C8466FF39D362D56BF4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m94824805BB9A079EEBD9EE0CFE2119AFD9346868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m41DA8C00E94EE27A345838EBFF26DBFD2B4F3D1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFF2BC422A193D7F048E03ABCCC32292E892A12F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CD979583B209CE71603EFC4A398E6A9EFA8D872);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10682F3387EA548C626C08591967BD5D821B3ACA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37A50091974FE11FAC57C870272F76245820AA18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D5745313695BB32A7BE264930411F75CE40EF69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<List<float>> FINAL_POS = new List<List<float>>();
		List_1_tFF2BC422A193D7F048E03ABCCC32292E892A12F7* L_0 = (List_1_tFF2BC422A193D7F048E03ABCCC32292E892A12F7*)il2cpp_codegen_object_new(List_1_tFF2BC422A193D7F048E03ABCCC32292E892A12F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m41DA8C00E94EE27A345838EBFF26DBFD2B4F3D1F(L_0, List_1__ctor_m41DA8C00E94EE27A345838EBFF26DBFD2B4F3D1F_RuntimeMethod_var);
		((AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_StaticFields*)il2cpp_codegen_static_fields_for(AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var))->___FINAL_POS_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_StaticFields*)il2cpp_codegen_static_fields_for(AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var))->___FINAL_POS_2), (void*)L_0);
		// public static List<string> symbols = new List<string>
		// {
		//     "a",
		//     "b",
		//     "c",
		//     "d",
		//     "e",
		//     "f",
		//     "g",
		//     "h",
		//     "i",
		//     "j",
		//     "k",
		//     "l",
		//     "m",
		//     "n",
		//     "o",
		//     "p"
		// };
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = L_5;
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = L_6;
		NullCheck(L_7);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_7, _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = L_7;
		NullCheck(L_8);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_8, _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = L_8;
		NullCheck(L_9);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_9, _stringLiteral0CD979583B209CE71603EFC4A398E6A9EFA8D872, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = L_9;
		NullCheck(L_10);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_10, _stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = L_10;
		NullCheck(L_11);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_11, _stringLiteral4D5745313695BB32A7BE264930411F75CE40EF69, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = L_11;
		NullCheck(L_12);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, _stringLiteral37A50091974FE11FAC57C870272F76245820AA18, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = L_12;
		NullCheck(L_13);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, _stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = L_13;
		NullCheck(L_14);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = L_14;
		NullCheck(L_15);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_15, _stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = L_15;
		NullCheck(L_16);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_16, _stringLiteral10682F3387EA548C626C08591967BD5D821B3ACA, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = L_16;
		NullCheck(L_17);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_17, _stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		((AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_StaticFields*)il2cpp_codegen_static_fields_for(AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var))->___symbols_3 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_StaticFields*)il2cpp_codegen_static_fields_for(AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var))->___symbols_3), (void*)L_17);
		// public static Dictionary<int, List<int>> PAYLINES = new Dictionary<int, List<int>>();
		Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* L_18 = (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3*)il2cpp_codegen_object_new(Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Dictionary_2__ctor_m94824805BB9A079EEBD9EE0CFE2119AFD9346868(L_18, Dictionary_2__ctor_m94824805BB9A079EEBD9EE0CFE2119AFD9346868_RuntimeMethod_var);
		((AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_StaticFields*)il2cpp_codegen_static_fields_for(AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var))->___PAYLINES_4 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_StaticFields*)il2cpp_codegen_static_fields_for(AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var))->___PAYLINES_4), (void*)L_18);
		// public static float SPIN_TIME = 1.5f;
		((AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_StaticFields*)il2cpp_codegen_static_fields_for(AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var))->___SPIN_TIME_5 = (1.5f);
		// public static float ITERATION_TIME = 0.15f;
		((AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_StaticFields*)il2cpp_codegen_static_fields_for(AppConfig_t3AC7EBC1313E9E887E34BC35E2E814ADB3BF3512_il2cpp_TypeInfo_var))->___ITERATION_TIME_6 = (0.150000006f);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DentedPixel.LeanDummy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanDummy__ctor_mAD97A9FAAAF771BEC38CA22F2CBA2DBA31E609CC (LeanDummy_tC93FBA95B1799B72C5A4B8FF57357E65EBD9BCC3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LocalSignal_get_EventType_mA2FCD1204C5B527CF1CDE1D85D40B3CC09F5F587_inline (LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45* __this, const RuntimeMethod* method) 
{
	{
		// public LocalEvents EventType { get; set; }
		int32_t L_0 = __this->___U3CEventTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* SlotGroup_get_Slots_m355254855D355E3A36A09461DE03300F685B310B_inline (SlotGroup_t77E4023E2CA87C84C996191F4430F173DF0C514C* __this, const RuntimeMethod* method) 
{
	{
		// public List<Slot> Slots { get; set; } = new List<Slot>();
		List_1_t7A6C893F5CDD2636C3939A33324E26B7E4885000* L_0 = __this->___U3CSlotsU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SlotMachineController_set_Reels_mAF1AEB373D7E68599159B5CAD1CFA16A2529E414_inline (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<SlotReel> Reels { get; set; } = new List<SlotReel>();
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_0 = ___value0;
		__this->___U3CReelsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReelsU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* SlotReel_get_SGroup_m46234709AC147A968CF909086BE211E8DC2AC2DC_inline (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) 
{
	{
		// public List<SlotGroup> SGroup { get; set; } = new List<SlotGroup>();
		List_1_t3FC7F3DF0AAF5C2D3AE6A8E996D1DF7C682AFF74* L_0 = __this->___U3CSGroupU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Slot_set_Id_mE4058AD5E4818C601C08DCBE72364EB4EAC9269C_inline (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; } = -1;
		int32_t L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Slot_get_TextureSprite_m7BD78B81CDC616AC9D0CA6CFF70A73439326CAAF_inline (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, const RuntimeMethod* method) 
{
	{
		// public Sprite TextureSprite { get; set; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___U3CTextureSpriteU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SlotMachineController_get_InSequence_m17E82F21FD7CE2AE639E9EB94B5C97EB23456F8F_inline (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) 
{
	{
		// public bool InSequence { get; set; } = false;
		bool L_0 = __this->___U3CInSequenceU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08* SlotUtils_get_Instance_m5B3A7D238718096F432D45FD97581FBC75F9DAB6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		il2cpp_codegen_runtime_class_init_inline(SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08_il2cpp_TypeInfo_var);
		SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08* L_0 = ((SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08_StaticFields*)il2cpp_codegen_static_fields_for(SlotUtils_tB0CAF56219C19807E081DB4FD458550383F9DC08_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SlotReel_set_TurnDone_m54841B246F0744B18B3C53DD1ECB07C8E1675851_inline (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool TurnDone { get; set; } = true;
		bool L_0 = ___value0;
		__this->___U3CTurnDoneU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SlotReel_set_FinalArea_m39C52920F51961D5841416A59079FA6468C04B4F_inline (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public PosArea FinalArea { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CFinalAreaU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* SlotMachineController_get_Reels_m72EA0E492618B9DC703927D6B1735A83A1D22395_inline (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, const RuntimeMethod* method) 
{
	{
		// public List<SlotReel> Reels { get; set; } = new List<SlotReel>();
		List_1_tADE9C15B54D4207D614FC08AAFD144ABD136B4C0* L_0 = __this->___U3CReelsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SlotReel_get_TurnDone_m914690427AE789100C86AB765B0490B4ED0DB783_inline (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) 
{
	{
		// public bool TurnDone { get; set; } = true;
		bool L_0 = __this->___U3CTurnDoneU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SlotMachineController_set_InSequence_m4EF5E64FE720EC0D1EF0DA4659DDC114E104FC96_inline (SlotMachineController_t46874CACD541732CFE2B749E1DD18BBDE7E95F2A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool InSequence { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CInSequenceU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SlotReel_get_FinalArea_m82CCAC20278D9D25A95B78D11BF41615FF8B8029_inline (SlotReel_t0F1141CD5BF355A945ED2331FC6B812CF185CAEE* __this, const RuntimeMethod* method) 
{
	{
		// public PosArea FinalArea { get; set; }
		int32_t L_0 = __this->___U3CFinalAreaU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Slot_get_Symbol_m480B9BAB94598BCE7453396B763A6252E97AF63B_inline (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, const RuntimeMethod* method) 
{
	{
		// public string Symbol { get; set; }
		String_t* L_0 = __this->___U3CSymbolU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Slot_get_Id_m84E86074A1BB9DBDB52190262E836877CD4DDD6D_inline (Slot_t7CBAAF99BBE5FB04344CAD3444299FBBF0C86B4E* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; } = -1;
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void vOPayoutData_set_Id_mBE8D874D3A16061B43109671828EE0F12188FBE3_inline (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void vOPayoutData_set_Name_m92F6CE6F22C653020D412EEB4981E13C30ECA1AE_inline (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void vOPayoutData_set_payout_m48685425BBDFD01D5E898C7986626B3E0E440A4F_inline (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<int> payout { get; set; }
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___value0;
		__this->___U3CpayoutU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpayoutU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* vOPayoutData_get_payout_mC75C63AAD13F0CA0CBFC7A1EB45F1DD3B1754924_inline (vOPayoutData_tAFD860CD89A866820CDBE477FD40E96E37CFA6D5* __this, const RuntimeMethod* method) 
{
	{
		// public List<int> payout { get; set; }
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___U3CpayoutU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalSignal_set_EventType_m0CE7B4AC9CAFAE14B9AC023D8FBE17CE9738664C_inline (LocalSignal_tDD37354464E867C1142F6BC1DDDC9DBCE16B4F45* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public LocalEvents EventType { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CEventTypeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_0 = (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
