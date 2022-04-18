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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Vuforia.ObserverBehaviour>
struct Action_1_t49AD19663F9D6070EBF5FD37F8BEA43810805799;
// System.Action`1<Vuforia.TargetStatus>
struct Action_1_t41098C7BA5B46394B4FBB2689504BA314711B0A5;
// System.Action`1<Vuforia.VirtualButtonBehaviour>
struct Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8;
// System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus>
struct Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.VirtualButtonBehaviour>>
struct ICollection_1_t507C56FA80FFA719D3E0C2627A2C97CFDB0FACA1;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// AudioTest
struct AudioTest_t8D3A1CBF0FDE4EF928812555AC03873FC867BB94;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChairTargetGUI
struct ChairTargetGUI_tA53DD3CCAEFD9BD86249C9307F7F1D8BA66C2D5E;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// CollisionDetection
struct CollisionDetection_tC285F684743B092C09228441D8EC876B28E771ED;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CreateBoxPile
struct CreateBoxPile_tCD45849A19AE032BF59440781716DD9E7AB36F63;
// DefaultObserverEventHandler
struct DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0;
// DefaultTrackableEventHandler
struct DefaultTrackableEventHandler_t1C9237A6B9B06FF6B36BFBA0988DC08E38EED27F;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// Furniture
struct Furniture_t727532CD16C9E40FA0D21684588BF46D5AF6874A;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// GroundPlaneGUI
struct GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Vuforia.Internal.Observers.IObserver
struct IObserver_tF96DF70DC62190F4AAF66B7DA6053BB7C714503C;
// Instantiate
struct Instantiate_t38BBE1064FE0E08D6FB54DE049959EE53FD00A1C;
// JumpingBall
struct JumpingBall_t0778EB51DED2885AA61585ACACB34965EC6C2E54;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveBetweenTargets
struct MoveBetweenTargets_t6B670DDCF5A7604D55F79F737AEDD134AC015531;
// MyScript
struct MyScript_t2C76C8E4184421382FD10BF3CC08F9A4DF7EF4D3;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Vuforia.ObserverBehaviour
struct ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB;
// PopUpGUI
struct PopUpGUI_t91D5198C2AF5E5821FF09CE90D1B41EFBA7AA7AA;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TouchTest
struct TouchTest_t03B7F2E0289AD97B59BEEA76F65566F242FF113A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// VBAction2
struct VBAction2_t7C2AAD57425511B77F2CA33536DED4944154E254;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// Vuforia.VirtualButtonBehaviour
struct VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491;
// Vuforia.Internal.Observers.VirtualButtonObserver
struct VirtualButtonObserver_t5A5249AEB7733163BBBB542FF94ACE00260AD651;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// text
struct text_t7D1C6CED8812CE29FF0C78FEE56E007988DB87DE;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// DefaultObserverEventHandler/PoseSmoother
struct PoseSmoother_t0FFFF1978A09252AD89E6E444613B95F9E1D59E8;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;
// GroundPlaneGUI/<ShareScreenshotInAnroid>d__31
struct U3CShareScreenshotInAnroidU3Ed__31_tEE11F5E0FFDAC9332BE170F28180B8CCB45DC09D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Globals_t1E4C6CBF7F013E229D442E11DF7820F43FE9FF35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShareScreenshotInAnroidU3Ed__31_tEE11F5E0FFDAC9332BE170F28180B8CCB45DC09D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral003E3044C61EB8881642C3CB8F6138BD3B0EBC0A;
IL2CPP_EXTERN_C String_t* _stringLiteral0419D4349A803B5261E04038FD5A4AC8A057FE3B;
IL2CPP_EXTERN_C String_t* _stringLiteral061314C8C5363A5FBE1A66725277381400BCB89A;
IL2CPP_EXTERN_C String_t* _stringLiteral070183AE5CC433BB72EC6F2D7D93AEDAA6090150;
IL2CPP_EXTERN_C String_t* _stringLiteral0A086AB62600F7EC2C137D65572515C1B5708FC7;
IL2CPP_EXTERN_C String_t* _stringLiteral0CDD70B049B85F84B2268505081616A4CA759786;
IL2CPP_EXTERN_C String_t* _stringLiteral0CF7ED7942173F898A9BB6E99AE8EA58DA633865;
IL2CPP_EXTERN_C String_t* _stringLiteral116273CD5D8FA85B2B09F79802D1EDD0C11FFC66;
IL2CPP_EXTERN_C String_t* _stringLiteral142E7F04AD15522E43403C64A524E017226383F5;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral19706DE5746C9E4122ADB26F828296F019638538;
IL2CPP_EXTERN_C String_t* _stringLiteral1AF0B5CD0228BBDB81DE6637141D7EBDB51A5476;
IL2CPP_EXTERN_C String_t* _stringLiteral1E00A028765E36CFE9A1D3E1D31576348C84197D;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral2202C87B4F3B01930E57A6E24B5AD6290C547330;
IL2CPP_EXTERN_C String_t* _stringLiteral220BD90875CDDE24899F79FFCECCB09D411A7418;
IL2CPP_EXTERN_C String_t* _stringLiteral247DF2D11BFB139F81FC65E56DC16B9553EDADA3;
IL2CPP_EXTERN_C String_t* _stringLiteral25F43B7D8B43F33E8FA161C934872E7D02F0B131;
IL2CPP_EXTERN_C String_t* _stringLiteral2659CBBFCB2710CD85725B69BCDAB40CA4AC204C;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral275429A7F59947CA7E4BF8B96F7811A613B1BB17;
IL2CPP_EXTERN_C String_t* _stringLiteral2D9536D7D03009385058F88A91D758E6D866F8F7;
IL2CPP_EXTERN_C String_t* _stringLiteral2DF2775A0769B7E0C878FADDDCD18BF77386E7C5;
IL2CPP_EXTERN_C String_t* _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018;
IL2CPP_EXTERN_C String_t* _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306;
IL2CPP_EXTERN_C String_t* _stringLiteral3DB21035C578712101A563A5E4C4C7196D8345E6;
IL2CPP_EXTERN_C String_t* _stringLiteral3DFC2D8E2B0854967C8EA0AC932952BDB07081DD;
IL2CPP_EXTERN_C String_t* _stringLiteral3E818327CA4CC1751A2DD14A35EF509FF9B84FA7;
IL2CPP_EXTERN_C String_t* _stringLiteral44B42C21763CB335DB3CB809C976804B6727A4FF;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4D63650286A1E1FD31796F6AE418A16D3A0C143B;
IL2CPP_EXTERN_C String_t* _stringLiteral507C835F113D757CA371BB535EC5E38771FCFB3C;
IL2CPP_EXTERN_C String_t* _stringLiteral54E9884C2A8A9804F2757FB402718D03522F4946;
IL2CPP_EXTERN_C String_t* _stringLiteral567219E12C4BEB9824777A19CAAB76E203948A9A;
IL2CPP_EXTERN_C String_t* _stringLiteral5D5A69CC0E79075478B35ABB279C43E7DAD0C6E1;
IL2CPP_EXTERN_C String_t* _stringLiteral648771EAF7A23AFDF42A8329B2FDF5430A2EC961;
IL2CPP_EXTERN_C String_t* _stringLiteral6A078B1D42385A4DA43C1E2561FC36AF17F18454;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB60CD0F517BE0AB5DBF3CCB647F6428F1FA6D1;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral72247B04D3DF251EC24061DE2DE8157E6BD3D9C7;
IL2CPP_EXTERN_C String_t* _stringLiteral73A134A5A368FB4FB6B547321D969F1CC0F55B0B;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287;
IL2CPP_EXTERN_C String_t* _stringLiteral76C41506C48C50491E7B491CC16239D496B8C6CA;
IL2CPP_EXTERN_C String_t* _stringLiteral771C19C3265C1E57B0DDE0B8802D7455E7B4ED82;
IL2CPP_EXTERN_C String_t* _stringLiteral777AE62A4AAF93B33F90DF3E12489F43ABA14E39;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral82C82E628953D51B5E82E96C307B140BA6DA4228;
IL2CPP_EXTERN_C String_t* _stringLiteral83ACDBEB9D45FAFB27768A86AEC284835A5F3915;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral9264A04A31D84024600F8E9C198E657445BFEA77;
IL2CPP_EXTERN_C String_t* _stringLiteral9441BCA36B6A479AFB8B8A0DC9922005FFE3F8F8;
IL2CPP_EXTERN_C String_t* _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9;
IL2CPP_EXTERN_C String_t* _stringLiteral986B48564BFCB973B5A92E99EDBC3B782B8BAC1E;
IL2CPP_EXTERN_C String_t* _stringLiteral99687916B1E6EF7CC358E7CD63DCB485D6ACFEEA;
IL2CPP_EXTERN_C String_t* _stringLiteral9FE1252E0C99589986A3FD06B642DC25085790D2;
IL2CPP_EXTERN_C String_t* _stringLiteralAEB7B526FA9FD6ADA2987545E557799A45799359;
IL2CPP_EXTERN_C String_t* _stringLiteralAF03EC92A24531B697C90747D790381C34B845EC;
IL2CPP_EXTERN_C String_t* _stringLiteralB094BFC20326EA8706B700E846DAACC35FE59C68;
IL2CPP_EXTERN_C String_t* _stringLiteralBDBB8D317096A0BA6BA9463FC2533707873DF8FD;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728;
IL2CPP_EXTERN_C String_t* _stringLiteralC9ADF473A30BA80282FCBE6EF8685B62B5E4AF76;
IL2CPP_EXTERN_C String_t* _stringLiteralCF118E82995607A5D6F209C6A17DF74CA6ED567E;
IL2CPP_EXTERN_C String_t* _stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928;
IL2CPP_EXTERN_C String_t* _stringLiteralD8422EA88C684C52E1E452A92F23B811B93E0321;
IL2CPP_EXTERN_C String_t* _stringLiteralD8D54007127A3A328F1E272B7307564210334858;
IL2CPP_EXTERN_C String_t* _stringLiteralDA726B235F7C9FBFFD5C23A4F105C8BA415C97DF;
IL2CPP_EXTERN_C String_t* _stringLiteralE003A6D76FFC20576DE06DA8BA850CC6615CB471;
IL2CPP_EXTERN_C String_t* _stringLiteralE06EFB7B41BA78162682629BE2E077906FB0D5F8;
IL2CPP_EXTERN_C String_t* _stringLiteralE67D89BB61E8A81A2B0B7802F9E515D915AA51E7;
IL2CPP_EXTERN_C String_t* _stringLiteralEB4052C69FE374110B3896A4A7031020EF9A11D0;
IL2CPP_EXTERN_C String_t* _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4;
IL2CPP_EXTERN_C String_t* _stringLiteralF2465BB6789DD1B3A37EEA353A2ADE8B9F4E9E37;
IL2CPP_EXTERN_C String_t* _stringLiteralF4A90385D3D0AAEF0F96413997302A694BC01722;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C String_t* _stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChairTargetGUI_OnChooseAction_m7B1AE01B2B0ACB87CC5F3FC8CD8B190CA26B4B37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChairTargetGUI_OnNextAction_mC731A34A8046396599264932EF0E0D665CF29791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChairTargetGUI_OnPreviousAction_m7E7CCB9C13FA36F8BA8EF3D8EB20FF216A8FA322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChairTargetGUI_OnRotateLeftAction_m19CF9D5C76EDA6FF6B5A86A5151EE48CB2093B47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChairTargetGUI_OnRotateRightAction_mB3C0E8CACA8CBB9AE73D053CE6DA99E98B548C63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m2008A6E9E847586AA963625B92085BFF7729C702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GroundPlaneGUI_U3CShareScreenshotInAnroidU3Eb__31_0_m4C35C16F2E4D6F9AC1E68F7A5820D483E8198A88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShareScreenshotInAnroidU3Ed__31_System_Collections_IEnumerator_Reset_m6EF0449FF891616585E191E3C904BB74EFDC6DF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VBAction2_OnButtonPressed_mF3439DB801E79C041E7A64EC92645ECF381037B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VBAction2_OnButtonReleased_m489F3F3A7CBE22E3BADE39B1F1B3AF1A498B8DBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_0_0_0_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
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

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// GroundPlaneGUI/<ShareScreenshotInAnroid>d__31
struct U3CShareScreenshotInAnroidU3Ed__31_tEE11F5E0FFDAC9332BE170F28180B8CCB45DC09D  : public RuntimeObject
{
	// System.Int32 GroundPlaneGUI/<ShareScreenshotInAnroid>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GroundPlaneGUI/<ShareScreenshotInAnroid>d__31::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GroundPlaneGUI GroundPlaneGUI/<ShareScreenshotInAnroid>d__31::<>4__this
	GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* ___U3CU3E4__this_2;
	// System.String GroundPlaneGUI/<ShareScreenshotInAnroid>d__31::<screenShotPath>5__2
	String_t* ___U3CscreenShotPathU3E5__2_3;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
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

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// Vuforia.TargetStatus
struct TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 
{
	// Vuforia.Status Vuforia.TargetStatus::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_0;
	// Vuforia.StatusInfo Vuforia.TargetStatus::<StatusInfo>k__BackingField
	int32_t ___U3CStatusInfoU3Ek__BackingField_1;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
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

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
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

// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___m_SourceStyle_1;
};

// Assets.scripts.Globals
struct Globals_t1E4C6CBF7F013E229D442E11DF7820F43FE9FF35  : public RuntimeObject
{
};

struct Globals_t1E4C6CBF7F013E229D442E11DF7820F43FE9FF35_StaticFields
{
	// System.Decimal Assets.scripts.Globals::chair_1_price
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___chair_1_price_0;
	// System.Decimal Assets.scripts.Globals::total
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___total_1;
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

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// Vuforia.RectangleData
struct RectangleData_tEE40BB23EC4A806A1FB3443F128BF8B5B77C20CA 
{
	// UnityEngine.Vector2 Vuforia.RectangleData::TopLeft
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___TopLeft_0;
	// UnityEngine.Vector2 Vuforia.RectangleData::BottomRight
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___BottomRight_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};

struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<Vuforia.VirtualButtonBehaviour>
struct Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// AudioTest
struct AudioTest_t8D3A1CBF0FDE4EF928812555AC03873FC867BB94  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip AudioTest::myAudio
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___myAudio_4;
	// UnityEngine.AudioSource AudioTest::audioS
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioS_5;
};

// ChairTargetGUI
struct ChairTargetGUI_tA53DD3CCAEFD9BD86249C9307F7F1D8BA66C2D5E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ChairTargetGUI::GroundPlane
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___GroundPlane_4;
	// UnityEngine.GameObject ChairTargetGUI::Chair1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Chair1_5;
	// UnityEngine.GameObject ChairTargetGUI::Chair2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Chair2_6;
	// UnityEngine.GameObject ChairTargetGUI::Chair3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Chair3_7;
	// UnityEngine.GameObject ChairTargetGUI::Chair4
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Chair4_8;
	// UnityEngine.GameObject ChairTargetGUI::currentModel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentModel_9;
	// System.Int32 ChairTargetGUI::ChairIndex
	int32_t ___ChairIndex_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ChairTargetGUI::chairList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___chairList_11;
	// System.Single ChairTargetGUI::rotationSpeed
	float ___rotationSpeed_12;
};

// CollisionDetection
struct CollisionDetection_tC285F684743B092C09228441D8EC876B28E771ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CreateBoxPile
struct CreateBoxPile_tCD45849A19AE032BF59440781716DD9E7AB36F63  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CreateBoxPile::InstantiatePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___InstantiatePrefab_4;
};

// DefaultObserverEventHandler
struct DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DefaultObserverEventHandler/TrackingStatusFilter DefaultObserverEventHandler::StatusFilter
	int32_t ___StatusFilter_4;
	// System.Boolean DefaultObserverEventHandler::UsePoseSmoothing
	bool ___UsePoseSmoothing_5;
	// UnityEngine.AnimationCurve DefaultObserverEventHandler::AnimationCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___AnimationCurve_6;
	// UnityEngine.Events.UnityEvent DefaultObserverEventHandler::OnTargetFound
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnTargetFound_7;
	// UnityEngine.Events.UnityEvent DefaultObserverEventHandler::OnTargetLost
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnTargetLost_8;
	// Vuforia.ObserverBehaviour DefaultObserverEventHandler::mObserverBehaviour
	ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB* ___mObserverBehaviour_9;
	// Vuforia.TargetStatus DefaultObserverEventHandler::mPreviousTargetStatus
	TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 ___mPreviousTargetStatus_10;
	// System.Boolean DefaultObserverEventHandler::mCallbackReceivedOnce
	bool ___mCallbackReceivedOnce_11;
	// DefaultObserverEventHandler/PoseSmoother DefaultObserverEventHandler::mPoseSmoother
	PoseSmoother_t0FFFF1978A09252AD89E6E444613B95F9E1D59E8* ___mPoseSmoother_13;
};

// DefaultTrackableEventHandler
struct DefaultTrackableEventHandler_t1C9237A6B9B06FF6B36BFBA0988DC08E38EED27F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DefaultTrackableEventHandler/TrackingStatusFilter DefaultTrackableEventHandler::StatusFilter
	int32_t ___StatusFilter_4;
	// UnityEngine.Events.UnityEvent DefaultTrackableEventHandler::OnTargetFound
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnTargetFound_5;
	// UnityEngine.Events.UnityEvent DefaultTrackableEventHandler::OnTargetLost
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnTargetLost_6;
	// Vuforia.ObserverBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB* ___mTrackableBehaviour_7;
	// Vuforia.TargetStatus DefaultTrackableEventHandler::mPreviousTargetStatus
	TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 ___mPreviousTargetStatus_8;
	// System.Boolean DefaultTrackableEventHandler::mCallbackReceivedOnce
	bool ___mCallbackReceivedOnce_9;
};

// Furniture
struct Furniture_t727532CD16C9E40FA0D21684588BF46D5AF6874A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Furniture::Model
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Model_4;
	// System.Single Furniture::Price
	float ___Price_5;
};

// Instantiate
struct Instantiate_t38BBE1064FE0E08D6FB54DE049959EE53FD00A1C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Instantiate::InstantiatePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___InstantiatePrefab_4;
	// System.Single Instantiate::distanceMultiplier
	float ___distanceMultiplier_5;
};

// JumpingBall
struct JumpingBall_t0778EB51DED2885AA61585ACACB34965EC6C2E54  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 JumpingBall::Vec
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Vec_4;
	// UnityEngine.Vector3 JumpingBall::OriginPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___OriginPos_5;
	// System.Single JumpingBall::maxHeight
	float ___maxHeight_6;
	// System.Single JumpingBall::stepHeight
	float ___stepHeight_7;
	// System.Boolean JumpingBall::up
	bool ___up_8;
	// System.Single JumpingBall::speed
	float ___speed_9;
	// System.Single JumpingBall::power
	float ___power_10;
};

// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MoveBetweenTargets
struct MoveBetweenTargets_t6B670DDCF5A7604D55F79F737AEDD134AC015531  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 MoveBetweenTargets::OriginPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___OriginPos_4;
	// UnityEngine.Vector3 MoveBetweenTargets::TargetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TargetPos_5;
	// System.Single MoveBetweenTargets::speed
	float ___speed_6;
	// System.Boolean MoveBetweenTargets::turnAround
	bool ___turnAround_7;
	// System.String MoveBetweenTargets::direction
	String_t* ___direction_8;
};

// MyScript
struct MyScript_t2C76C8E4184421382FD10BF3CC08F9A4DF7EF4D3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 MyScript::Vec
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Vec_4;
	// UnityEngine.Vector3 MyScript::OriginPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___OriginPos_5;
	// UnityEngine.Vector3 MyScript::VecScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___VecScale_6;
	// UnityEngine.Vector3 MyScript::OriginScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___OriginScale_7;
	// System.Single MyScript::scaleFactor
	float ___scaleFactor_8;
	// System.Single MyScript::myTimer
	float ___myTimer_9;
	// UnityEngine.GameObject MyScript::script
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___script_10;
};

// TouchTest
struct TouchTest_t03B7F2E0289AD97B59BEEA76F65566F242FF113A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VBAction2
struct VBAction2_t7C2AAD57425511B77F2CA33536DED4944154E254  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Vuforia.VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_tA15D7FADFFC01834965106EC085F8D90177AB89D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// text
struct text_t7D1C6CED8812CE29FF0C78FEE56E007988DB87DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text text::displayedText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___displayedText_4;
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

// GroundPlaneGUI
struct GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337  : public DefaultTrackableEventHandler_t1C9237A6B9B06FF6B36BFBA0988DC08E38EED27F
{
	// System.Single GroundPlaneGUI::native_width
	float ___native_width_10;
	// System.Single GroundPlaneGUI::native_height
	float ___native_height_11;
	// UnityEngine.Texture GroundPlaneGUI::LogoTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___LogoTexture_12;
	// UnityEngine.Texture GroundPlaneGUI::RightButtonTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___RightButtonTexture_13;
	// System.Decimal GroundPlaneGUI::totalAmount
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___totalAmount_14;
	// System.String GroundPlaneGUI::topLeftButtonText
	String_t* ___topLeftButtonText_15;
	// System.Single GroundPlaneGUI::btnHeight
	float ___btnHeight_16;
	// System.Single GroundPlaneGUI::btnWidth
	float ___btnWidth_17;
	// System.Single GroundPlaneGUI::btnTextHeight
	float ___btnTextHeight_18;
	// System.Single GroundPlaneGUI::btnPadding
	float ___btnPadding_19;
	// System.Boolean GroundPlaneGUI::showTotalAmount
	bool ___showTotalAmount_23;
	// UnityEngine.GameObject GroundPlaneGUI::ModelToPlace
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ModelToPlace_24;
	// UnityEngine.Vector3 GroundPlaneGUI::ModelToPlaceRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ModelToPlaceRotation_25;
	// System.Boolean GroundPlaneGUI::isFocus
	bool ___isFocus_26;
	// System.Boolean GroundPlaneGUI::isProcessing
	bool ___isProcessing_27;
	// System.String GroundPlaneGUI::screenshotName
	String_t* ___screenshotName_28;
	// System.String GroundPlaneGUI::shareSubject
	String_t* ___shareSubject_29;
	// System.String GroundPlaneGUI::shareMessage
	String_t* ___shareMessage_30;
};

struct GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_StaticFields
{
	// System.Single GroundPlaneGUI::btnLogoHeight
	float ___btnLogoHeight_20;
	// System.Single GroundPlaneGUI::btnLogoWidth
	float ___btnLogoWidth_21;
	// UnityEngine.Color GroundPlaneGUI::textColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___textColor_22;
};

// Vuforia.ObserverBehaviour
struct ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB  : public VuforiaMonoBehaviour_tA15D7FADFFC01834965106EC085F8D90177AB89D
{
	// System.String Vuforia.ObserverBehaviour::mTrackableName
	String_t* ___mTrackableName_4;
	// System.Boolean Vuforia.ObserverBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_5;
	// System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus> Vuforia.ObserverBehaviour::OnTargetStatusChanged
	Action_2_tAC0AA9B652075EE1CE661500AC3373C7008D598F* ___OnTargetStatusChanged_6;
	// System.Action`1<Vuforia.ObserverBehaviour> Vuforia.ObserverBehaviour::OnBehaviourDestroyed
	Action_1_t49AD19663F9D6070EBF5FD37F8BEA43810805799* ___OnBehaviourDestroyed_7;
	// Vuforia.Internal.Observers.IObserver Vuforia.ObserverBehaviour::mObserver
	RuntimeObject* ___mObserver_8;
	// Vuforia.TargetStatus Vuforia.ObserverBehaviour::<TargetStatus>k__BackingField
	TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 ___U3CTargetStatusU3Ek__BackingField_9;
};

// PopUpGUI
struct PopUpGUI_t91D5198C2AF5E5821FF09CE90D1B41EFBA7AA7AA  : public DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0
{
	// System.Single PopUpGUI::native_width
	float ___native_width_14;
	// System.Single PopUpGUI::native_height
	float ___native_height_15;
	// UnityEngine.Texture PopUpGUI::btntexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___btntexture_16;
	// UnityEngine.Texture PopUpGUI::LogoTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___LogoTexture_17;
	// UnityEngine.Texture PopUpGUI::MobiliyaTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___MobiliyaTexture_18;
	// System.Boolean PopUpGUI::mShowGUIButton
	bool ___mShowGUIButton_19;
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

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t5FA5F4048B8E2921A4130EE555262B39F2A7EE40  : public ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB
{
	// System.Action`1<Vuforia.TargetStatus> Vuforia.TrackableBehaviour::OnTrackableStatusChanged
	Action_1_t41098C7BA5B46394B4FBB2689504BA314711B0A5* ___OnTrackableStatusChanged_10;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// Vuforia.VirtualButtonBehaviour
struct VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491  : public TrackableBehaviour_t5FA5F4048B8E2921A4130EE555262B39F2A7EE40
{
	// System.String Vuforia.VirtualButtonBehaviour::mName
	String_t* ___mName_11;
	// Vuforia.Sensitivity Vuforia.VirtualButtonBehaviour::mSensitivity
	int32_t ___mSensitivity_12;
	// System.Boolean Vuforia.VirtualButtonBehaviour::mHasUpdatedPose
	bool ___mHasUpdatedPose_13;
	// UnityEngine.Matrix4x4 Vuforia.VirtualButtonBehaviour::mPrevTransform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___mPrevTransform_14;
	// UnityEngine.GameObject Vuforia.VirtualButtonBehaviour::mPrevParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mPrevParent_15;
	// System.Boolean Vuforia.VirtualButtonBehaviour::mPressed
	bool ___mPressed_16;
	// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.VirtualButtonBehaviour>> Vuforia.VirtualButtonBehaviour::mButtonPressedEventHandlers
	RuntimeObject* ___mButtonPressedEventHandlers_17;
	// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.VirtualButtonBehaviour>> Vuforia.VirtualButtonBehaviour::mButtonReleasedEventHandlers
	RuntimeObject* ___mButtonReleasedEventHandlers_18;
	// Vuforia.RectangleData Vuforia.VirtualButtonBehaviour::mArea
	RectangleData_tEE40BB23EC4A806A1FB3443F128BF8B5B77C20CA ___mArea_19;
	// System.Single Vuforia.VirtualButtonBehaviour::mPreviousVirtualSceneScaleFactor
	float ___mPreviousVirtualSceneScaleFactor_20;
	// Vuforia.Internal.Observers.VirtualButtonObserver Vuforia.VirtualButtonBehaviour::mVirtualButtonObserver
	VirtualButtonObserver_t5A5249AEB7733163BBBB542FF94ACE00260AD651* ___mVirtualButtonObserver_21;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* m_Items[1];

	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
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
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volumeScale1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_mDCC8EBD3196F1CE1B86E74416AD90CF86320C401 (String_t* ___path0, Type_t* ___systemTypeInstance1, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.MeshRenderer>()
inline MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* GameObject_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m2008A6E9E847586AA963625B92085BFF7729C702 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_materials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_materials_mAB0270CEB5AF2F6A8D21A012E77440DBFCBF9001 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Vuforia.VirtualButtonBehaviour>()
inline VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Action`1<Vuforia.VirtualButtonBehaviour>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mAF9A3D09130D6A85803B78A11135CBCFDE279E45 (Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Vuforia.VirtualButtonBehaviour::RegisterOnButtonPressed(System.Action`1<Vuforia.VirtualButtonBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButtonBehaviour_RegisterOnButtonPressed_m5BC515A4CD5C2F53BC2D59CAD99E8D311520F7D9 (VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* __this, Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8* ___onButtonPressedAction0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void CreateBoxPile::CreatorFunc(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateBoxPile_CreatorFunc_m4849359201FFA8F972F254B00259A3F8664A8571 (CreateBoxPile_tCD45849A19AE032BF59440781716DD9E7AB36F63* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, int32_t ___i1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void DefaultTrackableEventHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_Start_mC52B76B7C3086B8D19B6691FD5FF8D0C104D734D (DefaultTrackableEventHandler_t1C9237A6B9B06FF6B36BFBA0988DC08E38EED27F* __this, const RuntimeMethod* method) ;
// System.Void DefaultTrackableEventHandler::OnTrackingFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackingFound_mD550B178B0DF4DAD849E8C7C1F652115D35FBBBC (DefaultTrackableEventHandler_t1C9237A6B9B06FF6B36BFBA0988DC08E38EED27F* __this, const RuntimeMethod* method) ;
// System.Void DefaultTrackableEventHandler::OnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackingLost_m73508DD2355F186ED2D7CCE4A2016F2381B35271 (DefaultTrackableEventHandler_t1C9237A6B9B06FF6B36BFBA0988DC08E38EED27F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_matrix_m531F68D81C0D8EC62E40AEAE7C48453BF995C2FC (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1 (const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_textField_mC554496BAB959445F0CFA30BDC5736DC1F057D48 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___other0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_richText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_m4DC8E4DE66E5B806D6C71E9BFC8B122DB2A51F09 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_mCCEDEA48802193944F4CBF524592A0AF1CD80380 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style2, const RuntimeMethod* method) ;
// System.Void GroundPlaneGUI::CaptureScreenshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPlaneGUI_CaptureScreenshot_mD4B03B52CCEEE116C45594B899B994A886DAC468 (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, const RuntimeMethod* method) ;
// System.Void GroundPlaneGUI::ResetFurnitureList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPlaneGUI_ResetFurnitureList_m660551E75AE159211878A62FB56E78D480AFD62D (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, const RuntimeMethod* method) ;
// System.Boolean System.Decimal::op_GreaterThan(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_op_GreaterThan_m2C5A01FFBCF3858E8EF62C569D993EDC1CBC60FA (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m7A2F92799F7D0D0C56D18D0F8BAE77BC9BDCAC31 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void GroundPlaneGUI::OnShareButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPlaneGUI_OnShareButtonClick_m43914AC7F7784FE5A5A99ADA612B4C168B0DA2B3 (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, const RuntimeMethod* method) ;
// System.Void GroundPlaneGUI::ShareScreenshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPlaneGUI_ShareScreenshot_m54F0614313422467D543DA3F93B515A48163CBF1 (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GroundPlaneGUI::ShareScreenshotInAnroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GroundPlaneGUI_ShareScreenshotInAnroid_m82A795065A6C25291E8F63E7D27122E4AFBEF345 (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void GroundPlaneGUI/<ShareScreenshotInAnroid>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShareScreenshotInAnroidU3Ed__31__ctor_m2C89493CB7E322B4993DB64FAD01277B762A6C51 (U3CShareScreenshotInAnroidU3Ed__31_tEE11F5E0FFDAC9332BE170F28180B8CCB45DC09D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void DefaultTrackableEventHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler__ctor_mEC836A090DA326BEF2920A883DCB7AFC71C0BE59 (DefaultTrackableEventHandler_t1C9237A6B9B06FF6B36BFBA0988DC08E38EED27F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17 (const RuntimeMethod* method) ;
// System.Void UnityEngine.ScreenCapture::CaptureScreenshot(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCapture_CaptureScreenshot_m6E774804276C74577E82CD2200A4FC9972CA0505 (String_t* ___filename0, int32_t ___superSize1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.String>(System.String)
inline String_t* AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___predicate0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Instantiate::CreatorFunc(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instantiate_CreatorFunc_m70D4F3B852787D9960639868D366DE3DB9BBB85B (Instantiate_t38BBE1064FE0E08D6FB54DE049959EE53FD00A1C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, int32_t ___i1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::AddForce(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mFD97FC9DA828C1952D46D28C50B1D994B19895F6 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PingPong(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_PingPong_m157C55BCFEA2BB96680B7B29D714C3F9390551C9_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void PopUpGUI::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopUpGUI_OnGUI_m2A27DF25DC19C7A7E72C91A6CEA42EBC354AD43F (PopUpGUI_t91D5198C2AF5E5821FF09CE90D1B41EFBA7AA7AA* __this, const RuntimeMethod* method) ;
// System.Void DefaultObserverEventHandler::OnTrackingFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler_OnTrackingFound_mB6D67A89BFABE789AED4BBB9298D9DA6BBD14DFA (DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0* __this, const RuntimeMethod* method) ;
// System.Void DefaultObserverEventHandler::OnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler_OnTrackingLost_mC3798191D134AA29054393974F5A07A43B1BF5E8 (DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_mD0E3B3A6A199F29F307AC2956A587120C7A0E0C3 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image1, const RuntimeMethod* method) ;
// System.Void PopUpGUI::OpenVideoActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopUpGUI_OpenVideoActivity_m02A990BA3EBA8BA7D9A5358B62F91EED7B38FCD9 (PopUpGUI_t91D5198C2AF5E5821FF09CE90D1B41EFBA7AA7AA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void DefaultObserverEventHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler__ctor_mE40FCAD19043225054C315C22018F5780217E9DC (DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0* __this, const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B (const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.Text::get_fontSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Vuforia.VirtualButtonBehaviour::RegisterOnButtonReleased(System.Action`1<Vuforia.VirtualButtonBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButtonBehaviour_RegisterOnButtonReleased_m397FF28E3F2FD4647A1B0BE19D06F1C7715F5CAD (VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* __this, Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8* ___onButtonPressedAction0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Decimal::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AudioTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioTest_Start_m9A708D63C8D4C69634E096CA25EDCDD381999CFB (AudioTest_t8D3A1CBF0FDE4EF928812555AC03873FC867BB94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioS = GetComponent<AudioSource>(); // AudioSource needs to be on the gameobject!
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioS_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioS_5), (void*)L_0);
		// audioS.PlayOneShot(myAudio, 0.5F);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___audioS_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___myAudio_4;
		NullCheck(L_1);
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(L_1, L_2, (0.5f), NULL);
		// }
		return;
	}
}
// System.Void AudioTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioTest_Update_mFAA4D571916322270AA025595E200066C1E37621 (AudioTest_t8D3A1CBF0FDE4EF928812555AC03873FC867BB94* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudioTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioTest__ctor_mB4B73A665299542326E4C0A8B5684B35BAE482F1 (AudioTest_t8D3A1CBF0FDE4EF928812555AC03873FC867BB94* __this, const RuntimeMethod* method) 
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
// System.Void ChairTargetGUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChairTargetGUI_Start_m4E4110AE5CB61D7369E5DEEFF5D9D1AC30988486 (ChairTargetGUI_tA53DD3CCAEFD9BD86249C9307F7F1D8BA66C2D5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChairTargetGUI_OnChooseAction_m7B1AE01B2B0ACB87CC5F3FC8CD8B190CA26B4B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChairTargetGUI_OnNextAction_mC731A34A8046396599264932EF0E0D665CF29791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChairTargetGUI_OnPreviousAction_m7E7CCB9C13FA36F8BA8EF3D8EB20FF216A8FA322_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChairTargetGUI_OnRotateLeftAction_m19CF9D5C76EDA6FF6B5A86A5151EE48CB2093B47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChairTargetGUI_OnRotateRightAction_mB3C0E8CACA8CBB9AE73D053CE6DA99E98B548C63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m2008A6E9E847586AA963625B92085BFF7729C702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral003E3044C61EB8881642C3CB8F6138BD3B0EBC0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral142E7F04AD15522E43403C64A524E017226383F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D9536D7D03009385058F88A91D758E6D866F8F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DB21035C578712101A563A5E4C4C7196D8345E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral567219E12C4BEB9824777A19CAAB76E203948A9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE06EFB7B41BA78162682629BE2E077906FB0D5F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB4052C69FE374110B3896A4A7031020EF9A11D0);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_1 = NULL;
	MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// chairList.Add(Chair1);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___chairList_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Chair1_5;
		NullCheck(L_0);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_0, L_1, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// chairList.Add(Chair2);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___chairList_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___Chair2_6;
		NullCheck(L_2);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_2, L_3, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// chairList.Add(Chair3);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___chairList_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Chair3_7;
		NullCheck(L_4);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_4, L_5, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// chairList.Add(Chair4);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___chairList_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Chair4_8;
		NullCheck(L_6);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_6, L_7, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// currentModel = GameObject.Find("chair");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral142E7F04AD15522E43403C64A524E017226383F5, NULL);
		__this->___currentModel_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentModel_9), (void*)L_8);
		// Material mat = (Material)Resources.Load("wood_3", typeof(Material));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_11;
		L_11 = Resources_Load_mDCC8EBD3196F1CE1B86E74416AD90CF86320C401(_stringLiteralE06EFB7B41BA78162682629BE2E077906FB0D5F8, L_10, NULL);
		V_0 = ((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)CastclassClass((RuntimeObject*)L_11, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var));
		// Material[] mats = new Material[1];
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_12 = (MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)SZArrayNew(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_12;
		// mats[0] = mat;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_13 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = V_0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_14);
		// var meshRenderers = currentModel.GetComponentsInChildren<MeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___currentModel_9;
		NullCheck(L_15);
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_16;
		L_16 = GameObject_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m2008A6E9E847586AA963625B92085BFF7729C702(L_15, GameObject_GetComponentsInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m2008A6E9E847586AA963625B92085BFF7729C702_RuntimeMethod_var);
		// foreach (var renderer in meshRenderers)
		V_2 = L_16;
		V_3 = 0;
		goto IL_0096;
	}

IL_0089:
	{
		// foreach (var renderer in meshRenderers)
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_17 = V_2;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		// renderer.materials = mats;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_21 = V_1;
		NullCheck(L_20);
		Renderer_set_materials_mAB0270CEB5AF2F6A8D21A012E77440DBFCBF9001(L_20, L_21, NULL);
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0096:
	{
		// foreach (var renderer in meshRenderers)
		int32_t L_23 = V_3;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_24 = V_2;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0089;
		}
	}
	{
		// GameObject chairRotateLeftAction = GameObject.Find("chairRotateLeftAction");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralEB4052C69FE374110B3896A4A7031020EF9A11D0, NULL);
		// chairRotateLeftAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnRotateLeftAction);
		NullCheck(L_25);
		VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* L_26;
		L_26 = GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE(L_25, GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE_RuntimeMethod_var);
		Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8* L_27 = (Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8*)il2cpp_codegen_object_new(Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_mAF9A3D09130D6A85803B78A11135CBCFDE279E45(L_27, __this, (intptr_t)((void*)ChairTargetGUI_OnRotateLeftAction_m19CF9D5C76EDA6FF6B5A86A5151EE48CB2093B47_RuntimeMethod_var), NULL);
		NullCheck(L_26);
		VirtualButtonBehaviour_RegisterOnButtonPressed_m5BC515A4CD5C2F53BC2D59CAD99E8D311520F7D9(L_26, L_27, NULL);
		// GameObject chairRotateRightAction = GameObject.Find("chairRotateRightAction");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral3DB21035C578712101A563A5E4C4C7196D8345E6, NULL);
		// chairRotateRightAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnRotateRightAction);
		NullCheck(L_28);
		VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* L_29;
		L_29 = GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE(L_28, GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE_RuntimeMethod_var);
		Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8* L_30 = (Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8*)il2cpp_codegen_object_new(Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Action_1__ctor_mAF9A3D09130D6A85803B78A11135CBCFDE279E45(L_30, __this, (intptr_t)((void*)ChairTargetGUI_OnRotateRightAction_mB3C0E8CACA8CBB9AE73D053CE6DA99E98B548C63_RuntimeMethod_var), NULL);
		NullCheck(L_29);
		VirtualButtonBehaviour_RegisterOnButtonPressed_m5BC515A4CD5C2F53BC2D59CAD99E8D311520F7D9(L_29, L_30, NULL);
		// GameObject chairNextAction = GameObject.Find("chairNextAction");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral2D9536D7D03009385058F88A91D758E6D866F8F7, NULL);
		// chairNextAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnNextAction);
		NullCheck(L_31);
		VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* L_32;
		L_32 = GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE(L_31, GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE_RuntimeMethod_var);
		Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8* L_33 = (Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8*)il2cpp_codegen_object_new(Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Action_1__ctor_mAF9A3D09130D6A85803B78A11135CBCFDE279E45(L_33, __this, (intptr_t)((void*)ChairTargetGUI_OnNextAction_mC731A34A8046396599264932EF0E0D665CF29791_RuntimeMethod_var), NULL);
		NullCheck(L_32);
		VirtualButtonBehaviour_RegisterOnButtonPressed_m5BC515A4CD5C2F53BC2D59CAD99E8D311520F7D9(L_32, L_33, NULL);
		// GameObject chairPreviousAction = GameObject.Find("chairPreviousAction");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral003E3044C61EB8881642C3CB8F6138BD3B0EBC0A, NULL);
		// chairPreviousAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnPreviousAction);
		NullCheck(L_34);
		VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* L_35;
		L_35 = GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE(L_34, GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE_RuntimeMethod_var);
		Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8* L_36 = (Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8*)il2cpp_codegen_object_new(Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Action_1__ctor_mAF9A3D09130D6A85803B78A11135CBCFDE279E45(L_36, __this, (intptr_t)((void*)ChairTargetGUI_OnPreviousAction_m7E7CCB9C13FA36F8BA8EF3D8EB20FF216A8FA322_RuntimeMethod_var), NULL);
		NullCheck(L_35);
		VirtualButtonBehaviour_RegisterOnButtonPressed_m5BC515A4CD5C2F53BC2D59CAD99E8D311520F7D9(L_35, L_36, NULL);
		// GameObject chairChooseAction = GameObject.Find("chairChooseAction");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral567219E12C4BEB9824777A19CAAB76E203948A9A, NULL);
		// chairChooseAction.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnChooseAction);
		NullCheck(L_37);
		VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* L_38;
		L_38 = GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE(L_37, GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE_RuntimeMethod_var);
		Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8* L_39 = (Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8*)il2cpp_codegen_object_new(Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		Action_1__ctor_mAF9A3D09130D6A85803B78A11135CBCFDE279E45(L_39, __this, (intptr_t)((void*)ChairTargetGUI_OnChooseAction_m7B1AE01B2B0ACB87CC5F3FC8CD8B190CA26B4B37_RuntimeMethod_var), NULL);
		NullCheck(L_38);
		VirtualButtonBehaviour_RegisterOnButtonPressed_m5BC515A4CD5C2F53BC2D59CAD99E8D311520F7D9(L_38, L_39, NULL);
		// }
		return;
	}
}
// System.Void ChairTargetGUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChairTargetGUI_Update_m9B8F13E7FDC76500FD45DCA57209412C7449C487 (ChairTargetGUI_tA53DD3CCAEFD9BD86249C9307F7F1D8BA66C2D5E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ChairTargetGUI::OnRotateLeftAction(Vuforia.VirtualButtonBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChairTargetGUI_OnRotateLeftAction_m19CF9D5C76EDA6FF6B5A86A5151EE48CB2093B47 (ChairTargetGUI_tA53DD3CCAEFD9BD86249C9307F7F1D8BA66C2D5E* __this, VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* ___vb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral070183AE5CC433BB72EC6F2D7D93AEDAA6090150);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRotateLeftAction");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral070183AE5CC433BB72EC6F2D7D93AEDAA6090150, NULL);
		// currentModel.transform.Rotate(Vector3.back * rotationSpeed * Time.deltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___currentModel_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline(NULL);
		float L_3 = __this->___rotationSpeed_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_3, NULL);
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, L_5, NULL);
		NullCheck(L_1);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_1, L_6, NULL);
		// }
		return;
	}
}
// System.Void ChairTargetGUI::OnRotateRightAction(Vuforia.VirtualButtonBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChairTargetGUI_OnRotateRightAction_mB3C0E8CACA8CBB9AE73D053CE6DA99E98B548C63 (ChairTargetGUI_tA53DD3CCAEFD9BD86249C9307F7F1D8BA66C2D5E* __this, VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* ___vb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CDD70B049B85F84B2268505081616A4CA759786);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRotateRightAction");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0CDD70B049B85F84B2268505081616A4CA759786, NULL);
		// currentModel.transform.Rotate(Vector3.forward * rotationSpeed * Time.deltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___currentModel_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		float L_3 = __this->___rotationSpeed_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_3, NULL);
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, L_5, NULL);
		NullCheck(L_1);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_1, L_6, NULL);
		// }
		return;
	}
}
// System.Void ChairTargetGUI::OnNextAction(Vuforia.VirtualButtonBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChairTargetGUI_OnNextAction_mC731A34A8046396599264932EF0E0D665CF29791 (ChairTargetGUI_tA53DD3CCAEFD9BD86249C9307F7F1D8BA66C2D5E* __this, VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* ___vb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral247DF2D11BFB139F81FC65E56DC16B9553EDADA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72247B04D3DF251EC24061DE2DE8157E6BD3D9C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEB7B526FA9FD6ADA2987545E557799A45799359);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF03EC92A24531B697C90747D790381C34B845EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF118E82995607A5D6F209C6A17DF74CA6ED567E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		// Debug.Log("OnNextAction");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralAEB7B526FA9FD6ADA2987545E557799A45799359, NULL);
		// Vector3 spawnPosition = currentModel.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___currentModel_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// Vector3 localScale = currentModel.transform.localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___currentModel_9;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		V_1 = L_5;
		// Destroy(currentModel);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___currentModel_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_6, NULL);
		// var groundPlane = GameObject.Find("Ground Plane Stage");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCF118E82995607A5D6F209C6A17DF74CA6ED567E, NULL);
		// var chairCount = chairList.Count;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___chairList_11;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_8, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_2 = L_9;
		// var nextChair = ChairIndex + 1;
		int32_t L_10 = __this->___ChairIndex_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// if (nextChair > chairCount)
		int32_t L_11 = V_3;
		int32_t L_12 = V_2;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_005f;
		}
	}
	{
		// nextChair = nextChair % chairCount;
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		V_3 = ((int32_t)(L_13%L_14));
	}

IL_005f:
	{
		// ChairIndex = nextChair;
		int32_t L_15 = V_3;
		__this->___ChairIndex_10 = L_15;
		// Debug.Log($"next chair index = {nextChair}");
		int32_t L_16 = V_3;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19;
		L_19 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral72247B04D3DF251EC24061DE2DE8157E6BD3D9C7, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_19, NULL);
		// GameObject chair = GameObject.Find("chair_" + nextChair);
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_21;
		L_21 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral247DF2D11BFB139F81FC65E56DC16B9553EDADA3, L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_21, NULL);
		V_4 = L_22;
		// var chairTarget = GameObject.Find("ChairTarget");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralAF03EC92A24531B697C90747D790381C34B845EC, NULL);
		V_5 = L_23;
		// currentModel = Instantiate(chair, chairTarget.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_5;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_24, L_26, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		__this->___currentModel_9 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentModel_9), (void*)L_27);
		// currentModel.transform.position = spawnPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___currentModel_9;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		NullCheck(L_29);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_29, L_30, NULL);
		// currentModel.transform.localScale = localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___currentModel_9;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_1;
		NullCheck(L_32);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_32, L_33, NULL);
		// }
		return;
	}
}
// System.Void ChairTargetGUI::OnPreviousAction(Vuforia.VirtualButtonBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChairTargetGUI_OnPreviousAction_m7E7CCB9C13FA36F8BA8EF3D8EB20FF216A8FA322 (ChairTargetGUI_tA53DD3CCAEFD9BD86249C9307F7F1D8BA66C2D5E* __this, VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* ___vb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral247DF2D11BFB139F81FC65E56DC16B9553EDADA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DF2775A0769B7E0C878FADDDCD18BF77386E7C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72247B04D3DF251EC24061DE2DE8157E6BD3D9C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF03EC92A24531B697C90747D790381C34B845EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF118E82995607A5D6F209C6A17DF74CA6ED567E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		// Debug.Log("OnPreviousAction");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral2DF2775A0769B7E0C878FADDDCD18BF77386E7C5, NULL);
		// Vector3 spawnPosition = currentModel.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___currentModel_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// Vector3 localScale = currentModel.transform.localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___currentModel_9;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		V_1 = L_5;
		// Destroy(currentModel);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___currentModel_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_6, NULL);
		// var groundPlane = GameObject.Find("Ground Plane Stage");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCF118E82995607A5D6F209C6A17DF74CA6ED567E, NULL);
		// var chairCount = chairList.Count;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___chairList_11;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_8, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_2 = L_9;
		// var nextChair = ChairIndex - 1;
		int32_t L_10 = __this->___ChairIndex_10;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		// if (nextChair == 0)
		int32_t L_11 = V_3;
		if (L_11)
		{
			goto IL_005c;
		}
	}
	{
		// nextChair = chairCount;
		int32_t L_12 = V_2;
		V_3 = L_12;
	}

IL_005c:
	{
		// ChairIndex = nextChair;
		int32_t L_13 = V_3;
		__this->___ChairIndex_10 = L_13;
		// Debug.Log($"next chair index = {nextChair}");
		int32_t L_14 = V_3;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral72247B04D3DF251EC24061DE2DE8157E6BD3D9C7, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_17, NULL);
		// GameObject chair = GameObject.Find("chair_" + nextChair);
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_19;
		L_19 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral247DF2D11BFB139F81FC65E56DC16B9553EDADA3, L_18, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(L_19, NULL);
		V_4 = L_20;
		// var chairTarget = GameObject.Find("ChairTarget");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralAF03EC92A24531B697C90747D790381C34B845EC, NULL);
		V_5 = L_21;
		// currentModel = Instantiate(chair, chairTarget.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_5;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_22, L_24, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		__this->___currentModel_9 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentModel_9), (void*)L_25);
		// currentModel.transform.position = spawnPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___currentModel_9;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_0;
		NullCheck(L_27);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_27, L_28, NULL);
		// currentModel.transform.localScale = localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___currentModel_9;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_1;
		NullCheck(L_30);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_30, L_31, NULL);
		// }
		return;
	}
}
// System.Void ChairTargetGUI::OnChooseAction(Vuforia.VirtualButtonBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChairTargetGUI_OnChooseAction_m7B1AE01B2B0ACB87CC5F3FC8CD8B190CA26B4B37 (ChairTargetGUI_tA53DD3CCAEFD9BD86249C9307F7F1D8BA66C2D5E* __this, VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* ___vb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral275429A7F59947CA7E4BF8B96F7811A613B1BB17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83ACDBEB9D45FAFB27768A86AEC284835A5F3915);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF118E82995607A5D6F209C6A17DF74CA6ED567E);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Debug.Log("OnChooseAction");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral83ACDBEB9D45FAFB27768A86AEC284835A5F3915, NULL);
		// var groundPlane = GameObject.Find("Ground Plane Stage");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCF118E82995607A5D6F209C6A17DF74CA6ED567E, NULL);
		V_0 = L_0;
		// var currentGroundPlaneModel = GameObject.Find("groundPlaneModel");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral275429A7F59947CA7E4BF8B96F7811A613B1BB17, NULL);
		// Vector3 spawnPosition = currentGroundPlaneModel.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_1 = L_4;
		// Vector3 localScale = currentGroundPlaneModel.transform.localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_2;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		V_2 = L_7;
		// Destroy(currentGroundPlaneModel);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
		// var newGroundPlaneModel = Instantiate(currentModel, groundPlane.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___currentModel_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_8, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		// newGroundPlaneModel.name = "groundPlaneModel";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11;
		NullCheck(L_12);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_12, _stringLiteral275429A7F59947CA7E4BF8B96F7811A613B1BB17, NULL);
		// newGroundPlaneModel.transform.position = spawnPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_15, NULL);
		// newGroundPlaneModel.transform.localScale = localScale;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		NullCheck(L_16);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void ChairTargetGUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChairTargetGUI__ctor_m53734AF23B10330A1DB4E0C5BC99A1454836497F (ChairTargetGUI_tA53DD3CCAEFD9BD86249C9307F7F1D8BA66C2D5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int ChairIndex = 1; // first element is default
		__this->___ChairIndex_10 = 1;
		// private readonly List<GameObject> chairList = new(); // { Chair1, Chair2, Chair3, Chair4};
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___chairList_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chairList_11), (void*)L_0);
		// readonly float rotationSpeed = 5000f; //45
		__this->___rotationSpeed_12 = (5000.0f);
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
// System.Void CollisionDetection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionDetection_Start_m262C6E1774F6E06458083856DC8610842333997E (CollisionDetection_tC285F684743B092C09228441D8EC876B28E771ED* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CollisionDetection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionDetection_Update_mA5B41027B86E52D2C3A630FB914F5FC164F204E8 (CollisionDetection_tC285F684743B092C09228441D8EC876B28E771ED* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CollisionDetection::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionDetection_OnCollisionEnter_m15C24279D8FC0657B748F0DAEBAE3AB541BDCBA2 (CollisionDetection_tC285F684743B092C09228441D8EC876B28E771ED* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0419D4349A803B5261E04038FD5A4AC8A057FE3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19706DE5746C9E4122ADB26F828296F019638538);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4A90385D3D0AAEF0F96413997302A694BC01722);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name == "Floor")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Debug.Log("Hit the floor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0419D4349A803B5261E04038FD5A4AC8A057FE3B, NULL);
		return;
	}

IL_0022:
	{
		// else if (collision.gameObject.name == "Wall")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, NULL);
		if (!L_7)
		{
			goto IL_00a8;
		}
	}
	{
		// Debug.Log("Hit the wall");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral19706DE5746C9E4122ADB26F828296F019638538, NULL);
		// if (!collision.gameObject.GetComponent<Rigidbody>()) {
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_8 = ___collision0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_8, NULL);
		NullCheck(L_9);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10;
		L_10 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_9, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_10, NULL);
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		// collision.gameObject.AddComponent<Rigidbody>();
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_12 = ___collision0;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_12, NULL);
		NullCheck(L_13);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_14;
		L_14 = GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093(L_13, GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var);
	}

IL_0061:
	{
		// GameObject.Find("Point Light").GetComponent<Light>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralF4A90385D3D0AAEF0F96413997302A694BC01722, NULL);
		NullCheck(L_15);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16;
		L_16 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_15, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		NullCheck(L_16);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_16, (bool)1, NULL);
		// GameObject.Find("Point Light").GetComponent<Light>().color = Color.blue;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralF4A90385D3D0AAEF0F96413997302A694BC01722, NULL);
		NullCheck(L_17);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_18;
		L_18 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_17, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline(NULL);
		NullCheck(L_18);
		Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C(L_18, L_19, NULL);
		// GameObject.Find("Point Light").GetComponent<Light>().intensity = 20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralF4A90385D3D0AAEF0F96413997302A694BC01722, NULL);
		NullCheck(L_20);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21;
		L_21 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_20, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		NullCheck(L_21);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_21, (20.0f), NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void CollisionDetection::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionDetection_OnTriggerEnter_m135EE6900412C4BAF4A0BAC5E93684FA2DBCCEE7 (CollisionDetection_tC285F684743B092C09228441D8EC876B28E771ED* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73A134A5A368FB4FB6B547321D969F1CC0F55B0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.name == "Wall") {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// Debug.Log("Went throught the wall");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral73A134A5A368FB4FB6B547321D969F1CC0F55B0B, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void CollisionDetection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionDetection__ctor_m4DF62A245D00114DD95C513FFB32B31CBE7492BB (CollisionDetection_tC285F684743B092C09228441D8EC876B28E771ED* __this, const RuntimeMethod* method) 
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
// System.Void CreateBoxPile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateBoxPile_Start_mDEBB72D830ED21503312DBE4358E92B3FD68AB61 (CreateBoxPile_tCD45849A19AE032BF59440781716DD9E7AB36F63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D5A69CC0E79075478B35ABB279C43E7DAD0C6E1);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 pos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// for (int i = 0; i < 25; i++)
		V_1 = 0;
		goto IL_0031;
	}

IL_0010:
	{
		// CreatorFunc(pos, i);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		int32_t L_3 = V_1;
		CreateBoxPile_CreatorFunc_m4849359201FFA8F972F254B00259A3F8664A8571(__this, L_2, L_3, NULL);
		// Debug.Log($"made ball {i}");
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral5D5A69CC0E79075478B35ABB279C43E7DAD0C6E1, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_7, NULL);
		// for (int i = 0; i < 25; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0031:
	{
		// for (int i = 0; i < 25; i++)
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)25))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CreateBoxPile::CreatorFunc(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateBoxPile_CreatorFunc_m4849359201FFA8F972F254B00259A3F8664A8571 (CreateBoxPile_tCD45849A19AE032BF59440781716DD9E7AB36F63* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// creationPos = new Vector3(pos.x, pos.y + i + 0.5f, pos.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___pos0;
		float L_3 = L_2.___y_3;
		int32_t L_4 = ___i1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___pos0;
		float L_6 = L_5.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_1, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_3, ((float)L_4))), (0.5f))), L_6, NULL);
		// var instance = Instantiate(InstantiatePrefab, creationPos, transform.rotation); //, transformNew);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___InstantiatePrefab_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_7, L_8, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CreateBoxPile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateBoxPile__ctor_mDD2FAE27E266DAF9F23A50BA5D91B7A9948AB4DD (CreateBoxPile_tCD45849A19AE032BF59440781716DD9E7AB36F63* __this, const RuntimeMethod* method) 
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
// System.Void Furniture::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Furniture_Start_m6F31087272154B3ECE65CE049FEBAC31B10AFC2D (Furniture_t727532CD16C9E40FA0D21684588BF46D5AF6874A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Furniture::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Furniture_Update_mFA9352A1517792D52329A0093E385E6F1E74F140 (Furniture_t727532CD16C9E40FA0D21684588BF46D5AF6874A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Furniture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Furniture__ctor_m38583ABBD7E8CB8B0EB39F8DB1A58291AD9935FA (Furniture_t727532CD16C9E40FA0D21684588BF46D5AF6874A* __this, const RuntimeMethod* method) 
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
// System.Void GroundPlaneGUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPlaneGUI_Start_m52AE3329920C0305B30A4960D9BB6019A3870756 (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		DefaultTrackableEventHandler_Start_mC52B76B7C3086B8D19B6691FD5FF8D0C104D734D(__this, NULL);
		// }
		return;
	}
}
// System.Void GroundPlaneGUI::OnTrackingFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPlaneGUI_OnTrackingFound_m9598D70A5245B53CA015A9778297D92AAF9F9BCB (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E818327CA4CC1751A2DD14A35EF509FF9B84FA7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Target Found - mShowGUIButton true");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral3E818327CA4CC1751A2DD14A35EF509FF9B84FA7, NULL);
		// showTotalAmount = true;
		__this->___showTotalAmount_23 = (bool)1;
		// base.OnTrackingFound();
		DefaultTrackableEventHandler_OnTrackingFound_mD550B178B0DF4DAD849E8C7C1F652115D35FBBBC(__this, NULL);
		// }
		return;
	}
}
// System.Void GroundPlaneGUI::OnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPlaneGUI_OnTrackingLost_m875ECB4FF18DD1F8237A0E24B82BDFE98FD3267F (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AF0B5CD0228BBDB81DE6637141D7EBDB51A5476);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Target Lost - mShowGUIButton false");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral1AF0B5CD0228BBDB81DE6637141D7EBDB51A5476, NULL);
		// showTotalAmount = false;
		__this->___showTotalAmount_23 = (bool)0;
		// base.OnTrackingLost();
		DefaultTrackableEventHandler_OnTrackingLost_m73508DD2355F186ED2D7CCE4A2016F2381B35271(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Texture2D GroundPlaneGUI::MakeTex(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* GroundPlaneGUI_MakeTex_mD02839C3270E3ACEB81274C70D2E30BDCC23FC63 (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, int32_t ___width0, int32_t ___height1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___col2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Color[] pix = new Color[width * height];
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_0 = L_2;
		// for (int i = 0; i < pix.Length; ++i)
		V_1 = 0;
		goto IL_0019;
	}

IL_000d:
	{
		// pix[i] = col;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = V_0;
		int32_t L_4 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___col2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_5);
		// for (int i = 0; i < pix.Length; ++i)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0019:
	{
		// for (int i = 0; i < pix.Length; ++i)
		int32_t L_7 = V_1;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// Texture2D result = new Texture2D(width, height);
		int32_t L_9 = ___width0;
		int32_t L_10 = ___height1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_11, L_9, L_10, NULL);
		// result.SetPixels(pix);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = L_11;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_13 = V_0;
		NullCheck(L_12);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_12, L_13, NULL);
		// result.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = L_12;
		NullCheck(L_14);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_14, NULL);
		// return result;
		return L_14;
	}
}
// System.Void GroundPlaneGUI::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPlaneGUI_OnGUI_mA19BA82FFE9ED47C6F6B49BC71204FAE88411B51 (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral116273CD5D8FA85B2B09F79802D1EDD0C11FFC66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2659CBBFCB2710CD85725B69BCDAB40CA4AC204C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral507C835F113D757CA371BB535EC5E38771FCFB3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral777AE62A4AAF93B33F90DF3E12489F43ABA14E39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB094BFC20326EA8706B700E846DAACC35FE59C68);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_2 = NULL;
	{
		// float rx = Screen.width / native_width;
		int32_t L_0;
		L_0 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		float L_1 = __this->___native_width_10;
		V_0 = ((float)(((float)L_0)/L_1));
		// float ry = Screen.height / native_height;
		int32_t L_2;
		L_2 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		float L_3 = __this->___native_height_11;
		V_1 = ((float)(((float)L_2)/L_3));
		// GUI.matrix = Matrix4x4.TRS(new Vector3(0, 0, 0), Quaternion.identity, new Vector3(rx, ry, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		float L_6 = V_0;
		float L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_6, L_7, (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_4, L_5, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_matrix_m531F68D81C0D8EC62E40AEAE7C48453BF995C2FC(L_9, NULL);
		// GUIStyle myTextStyle = new GUIStyle(GUI.skin.textField);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_10;
		L_10 = GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1(NULL);
		NullCheck(L_10);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_11;
		L_11 = GUISkin_get_textField_mC554496BAB959445F0CFA30BDC5736DC1F057D48(L_10, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E(L_12, L_11, NULL);
		V_2 = L_12;
		// myTextStyle.fontSize = 50;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_13 = V_2;
		NullCheck(L_13);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_13, ((int32_t)50), NULL);
		// myTextStyle.richText = true;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_14 = V_2;
		NullCheck(L_14);
		GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD(L_14, (bool)1, NULL);
		// myTextStyle.alignment = TextAnchor.MiddleCenter;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_15 = V_2;
		NullCheck(L_15);
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_15, 4, NULL);
		// myTextStyle.normal.textColor = textColor;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_16 = V_2;
		NullCheck(L_16);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_17;
		L_17 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ((GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_StaticFields*)il2cpp_codegen_static_fields_for(GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var))->___textColor_22;
		NullCheck(L_17);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(L_17, L_18, NULL);
		// if (!LogoTexture)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_19 = __this->___LogoTexture_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_19, NULL);
		if (L_20)
		{
			goto IL_0099;
		}
	}
	{
		// Debug.LogError("Please assign a texture on the inspector");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralB094BFC20326EA8706B700E846DAACC35FE59C68, NULL);
		// return;
		return;
	}

IL_0099:
	{
		// GUI.DrawTexture(
		//     new Rect(
		//         btnPadding, native_height - btnLogoHeight - btnPadding,
		//         btnLogoWidth,
		//         btnLogoHeight),
		//     LogoTexture);
		float L_21 = __this->___btnPadding_19;
		float L_22 = __this->___native_height_11;
		il2cpp_codegen_runtime_class_init_inline(GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var);
		float L_23 = ((GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_StaticFields*)il2cpp_codegen_static_fields_for(GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var))->___btnLogoHeight_20;
		float L_24 = __this->___btnPadding_19;
		float L_25 = ((GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_StaticFields*)il2cpp_codegen_static_fields_for(GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var))->___btnLogoWidth_21;
		float L_26 = ((GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_StaticFields*)il2cpp_codegen_static_fields_for(GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var))->___btnLogoHeight_20;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_27;
		memset((&L_27), 0, sizeof(L_27));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_27), L_21, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_22, L_23)), L_24)), L_25, L_26, /*hidden argument*/NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_28 = __this->___LogoTexture_12;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m4DC8E4DE66E5B806D6C71E9BFC8B122DB2A51F09(L_27, L_28, NULL);
		// Rect captureScreenshotBtnRect = new Rect(
		//     native_width - btnWidth - btnPadding,
		//     btnPadding, btnWidth,
		//     btnTextHeight);
		float L_29 = __this->___native_width_10;
		float L_30 = __this->___btnWidth_17;
		float L_31 = __this->___btnPadding_19;
		float L_32 = __this->___btnPadding_19;
		float L_33 = __this->___btnWidth_17;
		float L_34 = __this->___btnTextHeight_18;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_35;
		memset((&L_35), 0, sizeof(L_35));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_35), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_29, L_30)), L_31)), L_32, L_33, L_34, /*hidden argument*/NULL);
		// var captureScreenshot = GUI.Button(captureScreenshotBtnRect, $"<b>Screenshot</b>", myTextStyle);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_36 = V_2;
		bool L_37;
		L_37 = GUI_Button_mCCEDEA48802193944F4CBF524592A0AF1CD80380(L_35, _stringLiteral507C835F113D757CA371BB535EC5E38771FCFB3C, L_36, NULL);
		// if (captureScreenshot)
		if (!L_37)
		{
			goto IL_010a;
		}
	}
	{
		// CaptureScreenshot();
		GroundPlaneGUI_CaptureScreenshot_mD4B03B52CCEEE116C45594B899B994A886DAC468(__this, NULL);
	}

IL_010a:
	{
		// Rect resetFurnitureListBtnRect = new Rect(
		//     native_width / 2 - btnWidth / 2,
		//     native_height - btnTextHeight - btnPadding,
		//     btnWidth,
		//     btnTextHeight);
		float L_38 = __this->___native_width_10;
		float L_39 = __this->___btnWidth_17;
		float L_40 = __this->___native_height_11;
		float L_41 = __this->___btnTextHeight_18;
		float L_42 = __this->___btnPadding_19;
		float L_43 = __this->___btnWidth_17;
		float L_44 = __this->___btnTextHeight_18;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_45;
		memset((&L_45), 0, sizeof(L_45));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_45), ((float)il2cpp_codegen_subtract(((float)(L_38/(2.0f))), ((float)(L_39/(2.0f))))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_40, L_41)), L_42)), L_43, L_44, /*hidden argument*/NULL);
		// var resetFurnitureList = GUI.Button(resetFurnitureListBtnRect, "reset", myTextStyle);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_46 = V_2;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = GUI_Button_mCCEDEA48802193944F4CBF524592A0AF1CD80380(L_45, _stringLiteral777AE62A4AAF93B33F90DF3E12489F43ABA14E39, L_46, NULL);
		// if (resetFurnitureList)
		if (!L_47)
		{
			goto IL_015b;
		}
	}
	{
		// ResetFurnitureList();
		GroundPlaneGUI_ResetFurnitureList_m660551E75AE159211878A62FB56E78D480AFD62D(__this, NULL);
	}

IL_015b:
	{
		// if (!RightButtonTexture)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_48 = __this->___RightButtonTexture_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_48, NULL);
		if (L_49)
		{
			goto IL_0173;
		}
	}
	{
		// Debug.LogError("Please assign a texture on the inspector");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralB094BFC20326EA8706B700E846DAACC35FE59C68, NULL);
		// return;
		return;
	}

IL_0173:
	{
		// GUI.DrawTexture(
		//     new Rect(
		//         native_width - btnLogoWidth - btnPadding,
		//         native_height - btnLogoHeight - btnPadding,
		//         btnLogoWidth, btnLogoHeight),
		//     RightButtonTexture);
		float L_50 = __this->___native_width_10;
		il2cpp_codegen_runtime_class_init_inline(GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var);
		float L_51 = ((GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_StaticFields*)il2cpp_codegen_static_fields_for(GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var))->___btnLogoWidth_21;
		float L_52 = __this->___btnPadding_19;
		float L_53 = __this->___native_height_11;
		float L_54 = ((GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_StaticFields*)il2cpp_codegen_static_fields_for(GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var))->___btnLogoHeight_20;
		float L_55 = __this->___btnPadding_19;
		float L_56 = ((GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_StaticFields*)il2cpp_codegen_static_fields_for(GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var))->___btnLogoWidth_21;
		float L_57 = ((GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_StaticFields*)il2cpp_codegen_static_fields_for(GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var))->___btnLogoHeight_20;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_58;
		memset((&L_58), 0, sizeof(L_58));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_58), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_50, L_51)), L_52)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_53, L_54)), L_55)), L_56, L_57, /*hidden argument*/NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_59 = __this->___RightButtonTexture_13;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m4DC8E4DE66E5B806D6C71E9BFC8B122DB2A51F09(L_58, L_59, NULL);
		// showTotalAmount = true; // TODO: when should this be shown?
		__this->___showTotalAmount_23 = (bool)1;
		// if (showTotalAmount)
		bool L_60 = __this->___showTotalAmount_23;
		if (!L_60)
		{
			goto IL_0227;
		}
	}
	{
		// if (totalAmount > 0m)
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_61 = __this->___totalAmount_14;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_62 = ((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields*)il2cpp_codegen_static_fields_for(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))->___Zero_3;
		bool L_63;
		L_63 = Decimal_op_GreaterThan_m2C5A01FFBCF3858E8EF62C569D993EDC1CBC60FA(L_61, L_62, NULL);
		if (!L_63)
		{
			goto IL_01ef;
		}
	}
	{
		// topLeftButtonText = $"{totalAmount} ?";
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_64 = __this->___totalAmount_14;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_65 = L_64;
		RuntimeObject* L_66 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_65);
		String_t* L_67;
		L_67 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral2659CBBFCB2710CD85725B69BCDAB40CA4AC204C, L_66, NULL);
		__this->___topLeftButtonText_15 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topLeftButtonText_15), (void*)L_67);
	}

IL_01ef:
	{
		// GUI.Label(
		//     new Rect(
		//         btnPadding,
		//         btnPadding,
		//         btnWidth,
		//         btnTextHeight),
		//     $"<b>{topLeftButtonText}</b>",
		//     myTextStyle);
		float L_68 = __this->___btnPadding_19;
		float L_69 = __this->___btnPadding_19;
		float L_70 = __this->___btnWidth_17;
		float L_71 = __this->___btnTextHeight_18;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_72;
		memset((&L_72), 0, sizeof(L_72));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_72), L_68, L_69, L_70, L_71, /*hidden argument*/NULL);
		String_t* L_73 = __this->___topLeftButtonText_15;
		String_t* L_74;
		L_74 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral116273CD5D8FA85B2B09F79802D1EDD0C11FFC66, L_73, _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_75 = V_2;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_m7A2F92799F7D0D0C56D18D0F8BAE77BC9BDCAC31(L_72, L_74, L_75, NULL);
	}

IL_0227:
	{
		// }
		return;
	}
}
// System.Void GroundPlaneGUI::ResetFurnitureList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPlaneGUI_ResetFurnitureList_m660551E75AE159211878A62FB56E78D480AFD62D (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral275429A7F59947CA7E4BF8B96F7811A613B1BB17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44B42C21763CB335DB3CB809C976804B6727A4FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF118E82995607A5D6F209C6A17DF74CA6ED567E);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// Debug.Log("ResetFurnitureList fired");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral44B42C21763CB335DB3CB809C976804B6727A4FF, NULL);
		// var groundPlane = GameObject.Find("Ground Plane Stage");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCF118E82995607A5D6F209C6A17DF74CA6ED567E, NULL);
		// foreach (Transform child in groundPlane.transform)
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_4 = V_2;
					if (!L_4)
					{
						goto IL_0069;
					}
				}
				{
					RuntimeObject* L_5 = V_2;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0069:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004f_1;
			}

IL_0021_1:
			{
				// foreach (Transform child in groundPlane.transform)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// if (child.gameObject.name != "groundPlaneModel")
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_1;
				NullCheck(L_8);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
				L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
				NullCheck(L_9);
				String_t* L_10;
				L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
				bool L_11;
				L_11 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_10, _stringLiteral275429A7F59947CA7E4BF8B96F7811A613B1BB17, NULL);
				if (!L_11)
				{
					goto IL_004f_1;
				}
			}
			{
				// GameObject.Destroy(child.gameObject);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_1;
				NullCheck(L_12);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
				L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_13, NULL);
			}

IL_004f_1:
			{
				// foreach (Transform child in groundPlane.transform)
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0021_1;
				}
			}
			{
				goto IL_006a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void GroundPlaneGUI::CaptureScreenshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPlaneGUI_CaptureScreenshot_mD4B03B52CCEEE116C45594B899B994A886DAC468 (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9441BCA36B6A479AFB8B8A0DC9922005FFE3F8F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("CaptureScreenshot fired");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9441BCA36B6A479AFB8B8A0DC9922005FFE3F8F8, NULL);
		// OnShareButtonClick();
		GroundPlaneGUI_OnShareButtonClick_m43914AC7F7784FE5A5A99ADA612B4C168B0DA2B3(__this, NULL);
		// }
		return;
	}
}
// System.Void GroundPlaneGUI::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPlaneGUI_OnApplicationFocus_mAFB4C0EB4C6A600AB7C127F470C5F0E38373926E (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, bool ___focus0, const RuntimeMethod* method) 
{
	{
		// isFocus = focus;
		bool L_0 = ___focus0;
		__this->___isFocus_26 = L_0;
		// }
		return;
	}
}
// System.Void GroundPlaneGUI::OnShareButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPlaneGUI_OnShareButtonClick_m43914AC7F7784FE5A5A99ADA612B4C168B0DA2B3 (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A086AB62600F7EC2C137D65572515C1B5708FC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral220BD90875CDDE24899F79FFCECCB09D411A7418);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE003A6D76FFC20576DE06DA8BA850CC6615CB471);
		s_Il2CppMethodInitialized = true;
	}
	{
		// screenshotName = "FurnitAR.png";
		__this->___screenshotName_28 = _stringLiteral220BD90875CDDE24899F79FFCECCB09D411A7418;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___screenshotName_28), (void*)_stringLiteral220BD90875CDDE24899F79FFCECCB09D411A7418);
		// shareSubject = "i planned something....";
		__this->___shareSubject_29 = _stringLiteral0A086AB62600F7EC2C137D65572515C1B5708FC7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shareSubject_29), (void*)_stringLiteral0A086AB62600F7EC2C137D65572515C1B5708FC7);
		// shareMessage = "Check it out. \nCheers\n" +
		// "\nlab404 - FurnitAR";
		__this->___shareMessage_30 = _stringLiteralE003A6D76FFC20576DE06DA8BA850CC6615CB471;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shareMessage_30), (void*)_stringLiteralE003A6D76FFC20576DE06DA8BA850CC6615CB471);
		// ShareScreenshot();
		GroundPlaneGUI_ShareScreenshot_m54F0614313422467D543DA3F93B515A48163CBF1(__this, NULL);
		// }
		return;
	}
}
// System.Void GroundPlaneGUI::ShareScreenshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPlaneGUI_ShareScreenshot_m54F0614313422467D543DA3F93B515A48163CBF1 (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, const RuntimeMethod* method) 
{
	{
		// if (!isProcessing) {
		bool L_0 = __this->___isProcessing_27;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// StartCoroutine (ShareScreenshotInAnroid ());
		RuntimeObject* L_1;
		L_1 = GroundPlaneGUI_ShareScreenshotInAnroid_m82A795065A6C25291E8F63E7D27122E4AFBEF345(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GroundPlaneGUI::ShareScreenshotInAnroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GroundPlaneGUI_ShareScreenshotInAnroid_m82A795065A6C25291E8F63E7D27122E4AFBEF345 (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShareScreenshotInAnroidU3Ed__31_tEE11F5E0FFDAC9332BE170F28180B8CCB45DC09D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShareScreenshotInAnroidU3Ed__31_tEE11F5E0FFDAC9332BE170F28180B8CCB45DC09D* L_0 = (U3CShareScreenshotInAnroidU3Ed__31_tEE11F5E0FFDAC9332BE170F28180B8CCB45DC09D*)il2cpp_codegen_object_new(U3CShareScreenshotInAnroidU3Ed__31_tEE11F5E0FFDAC9332BE170F28180B8CCB45DC09D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShareScreenshotInAnroidU3Ed__31__ctor_m2C89493CB7E322B4993DB64FAD01277B762A6C51(L_0, 0, NULL);
		U3CShareScreenshotInAnroidU3Ed__31_tEE11F5E0FFDAC9332BE170F28180B8CCB45DC09D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GroundPlaneGUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPlaneGUI__ctor_m8331C5C445794538AAFC0BA9F037BC33D9F84ED0 (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8422EA88C684C52E1E452A92F23B811B93E0321);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly float native_width = 1920f;
		__this->___native_width_10 = (1920.0f);
		// private readonly float native_height = 1080f;
		__this->___native_height_11 = (1080.0f);
		// public string topLeftButtonText = "Init Done, 0 ?";
		__this->___topLeftButtonText_15 = _stringLiteralD8422EA88C684C52E1E452A92F23B811B93E0321;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topLeftButtonText_15), (void*)_stringLiteralD8422EA88C684C52E1E452A92F23B811B93E0321);
		// private readonly float btnHeight = 110;
		__this->___btnHeight_16 = (110.0f);
		// private readonly float btnWidth = 350;
		__this->___btnWidth_17 = (350.0f);
		// private readonly float btnTextHeight = 70;
		__this->___btnTextHeight_18 = (70.0f);
		// private readonly float btnPadding = 5;
		__this->___btnPadding_19 = (5.0f);
		DefaultTrackableEventHandler__ctor_mEC836A090DA326BEF2920A883DCB7AFC71C0BE59(__this, NULL);
		return;
	}
}
// System.Void GroundPlaneGUI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundPlaneGUI__cctor_m2940E2BDA6401022127BB39920D92C9077E862AC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly float btnLogoHeight = 100;
		((GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_StaticFields*)il2cpp_codegen_static_fields_for(GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var))->___btnLogoHeight_20 = (100.0f);
		// private static readonly float btnLogoWidth = btnLogoHeight;
		float L_0 = ((GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_StaticFields*)il2cpp_codegen_static_fields_for(GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var))->___btnLogoHeight_20;
		((GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_StaticFields*)il2cpp_codegen_static_fields_for(GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var))->___btnLogoWidth_21 = L_0;
		// private static readonly Color textColor = new Color(26, 26, 26); // #1a1a1a = LALALA
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_1), (26.0f), (26.0f), (26.0f), /*hidden argument*/NULL);
		((GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_StaticFields*)il2cpp_codegen_static_fields_for(GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337_il2cpp_TypeInfo_var))->___textColor_22 = L_1;
		return;
	}
}
// System.Boolean GroundPlaneGUI::<ShareScreenshotInAnroid>b__31_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GroundPlaneGUI_U3CShareScreenshotInAnroidU3Eb__31_0_m4C35C16F2E4D6F9AC1E68F7A5820D483E8198A88 (GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil (() => isFocus);
		bool L_0 = __this->___isFocus_26;
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
// System.Void GroundPlaneGUI/<ShareScreenshotInAnroid>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShareScreenshotInAnroidU3Ed__31__ctor_m2C89493CB7E322B4993DB64FAD01277B762A6C51 (U3CShareScreenshotInAnroidU3Ed__31_tEE11F5E0FFDAC9332BE170F28180B8CCB45DC09D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GroundPlaneGUI/<ShareScreenshotInAnroid>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShareScreenshotInAnroidU3Ed__31_System_IDisposable_Dispose_mBCFEE78F030F39673B77B4981C566F1F42531D25 (U3CShareScreenshotInAnroidU3Ed__31_tEE11F5E0FFDAC9332BE170F28180B8CCB45DC09D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GroundPlaneGUI/<ShareScreenshotInAnroid>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShareScreenshotInAnroidU3Ed__31_MoveNext_m93A1FEE92FFC52CC77BB395768D6610088F2BDAA (U3CShareScreenshotInAnroidU3Ed__31_tEE11F5E0FFDAC9332BE170F28180B8CCB45DC09D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GroundPlaneGUI_U3CShareScreenshotInAnroidU3Eb__31_0_m4C35C16F2E4D6F9AC1E68F7A5820D483E8198A88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E00A028765E36CFE9A1D3E1D31576348C84197D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DFC2D8E2B0854967C8EA0AC932952BDB07081DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E9884C2A8A9804F2757FB402718D03522F4946);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral648771EAF7A23AFDF42A8329B2FDF5430A2EC961);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB60CD0F517BE0AB5DBF3CCB647F6428F1FA6D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C41506C48C50491E7B491CC16239D496B8C6CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99687916B1E6EF7CC358E7CD63DCB485D6ACFEEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE1252E0C99589986A3FD06B642DC25085790D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9ADF473A30BA80282FCBE6EF8685B62B5E4AF76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE67D89BB61E8A81A2B0B7802F9E515D915AA51E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2465BB6789DD1B3A37EEA353A2ADE8B9F4E9E37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* V_1 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_2 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_3 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_4 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_5 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_6 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_008f;
			}
			case 3:
			{
				goto IL_0207;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isProcessing = true;
		GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* L_3 = V_1;
		NullCheck(L_3);
		L_3->___isProcessing_27 = (bool)1;
		// yield return new WaitForEndOfFrame ();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// string screenShotPath = Application.persistentDataPath + "/" + screenshotName;
		String_t* L_5;
		L_5 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = L_6->___screenshotName_28;
		String_t* L_8;
		L_8 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_5, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_7, NULL);
		__this->___U3CscreenShotPathU3E5__2_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CscreenShotPathU3E5__2_3), (void*)L_8);
		// ScreenCapture.CaptureScreenshot (screenshotName, 1);
		GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10 = L_9->___screenshotName_28;
		ScreenCapture_CaptureScreenshot_m6E774804276C74577E82CD2200A4FC9972CA0505(L_10, 1, NULL);
		// yield return new WaitForSeconds (0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_008f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!Application.isEditor) {
		bool L_12;
		L_12 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (L_12)
		{
			goto IL_01e7;
		}
	}
	{
		// AndroidJavaClass intentClass = new AndroidJavaClass ("android.content.Intent");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_13 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_13, _stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728, NULL);
		V_2 = L_13;
		// AndroidJavaObject intentObject = new AndroidJavaObject ("android.content.Intent");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14;
		L_14 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_15, _stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728, L_14, NULL);
		V_3 = L_15;
		// intentObject.Call<AndroidJavaObject> ("setAction", intentClass.GetStatic<string> ("ACTION_SEND"));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_19 = V_2;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_19, _stringLiteral1E00A028765E36CFE9A1D3E1D31576348C84197D, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_20);
		NullCheck(L_16);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21;
		L_21 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_16, _stringLiteralF2465BB6789DD1B3A37EEA353A2ADE8B9F4E9E37, L_18, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// AndroidJavaClass uriClass = new AndroidJavaClass ("android.net.Uri");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_22 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_22, _stringLiteralE67D89BB61E8A81A2B0B7802F9E515D915AA51E7, NULL);
		// AndroidJavaObject uriObject = uriClass.CallStatic<AndroidJavaObject> ("parse", "file://" + screenShotPath);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_23;
		String_t* L_25 = __this->___U3CscreenShotPathU3E5__2_3;
		String_t* L_26;
		L_26 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_25, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_26);
		NullCheck(L_22);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_27;
		L_27 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_22, _stringLiteral99687916B1E6EF7CC358E7CD63DCB485D6ACFEEA, L_24, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_4 = L_27;
		// intentObject.Call<AndroidJavaObject> ("putExtra", intentClass.GetStatic<string> ("EXTRA_STREAM"), uriObject);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_29;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_31 = V_2;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_31, _stringLiteralC9ADF473A30BA80282FCBE6EF8685B62B5E4AF76, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_32);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_32);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_30;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_34 = V_4;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_34);
		NullCheck(L_28);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_35;
		L_35 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_28, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_33, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// intentObject.Call<AndroidJavaObject> ("setType", "image/png");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_36 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_37;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		NullCheck(L_36);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_39;
		L_39 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_36, _stringLiteral76C41506C48C50491E7B491CC16239D496B8C6CA, L_38, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// intentObject.Call<AndroidJavaObject> ("putExtra", intentClass.GetStatic<string> ("EXTRA_SUBJECT"), shareSubject);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_40 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = L_41;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_43 = V_2;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_43, _stringLiteral9FE1252E0C99589986A3FD06B642DC25085790D2, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_44);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = L_42;
		GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* L_46 = V_1;
		NullCheck(L_46);
		String_t* L_47 = L_46->___shareSubject_29;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_47);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_47);
		NullCheck(L_40);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_48;
		L_48 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_40, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_45, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// intentObject.Call<AndroidJavaObject> ("putExtra", intentClass.GetStatic<string> ("EXTRA_TEXT"), shareMessage);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_49 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = L_50;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_52 = V_2;
		NullCheck(L_52);
		String_t* L_53;
		L_53 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_52, _stringLiteral3DFC2D8E2B0854967C8EA0AC932952BDB07081DD, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_53);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_53);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = L_51;
		GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* L_55 = V_1;
		NullCheck(L_55);
		String_t* L_56 = L_55->___shareMessage_30;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_56);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_56);
		NullCheck(L_49);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_57;
		L_57 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_49, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_54, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// AndroidJavaClass unity = new AndroidJavaClass ("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_58 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_58, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// AndroidJavaObject currentActivity = unity.GetStatic<AndroidJavaObject> ("currentActivity");
		NullCheck(L_58);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_59;
		L_59 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_58, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_5 = L_59;
		// AndroidJavaObject chooser = intentClass.CallStatic<AndroidJavaObject> ("createChooser", intentObject, "Share your high score");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_60 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = L_61;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_63 = V_3;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_63);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_63);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = L_62;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral648771EAF7A23AFDF42A8329B2FDF5430A2EC961);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral648771EAF7A23AFDF42A8329B2FDF5430A2EC961);
		NullCheck(L_60);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_65;
		L_65 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_60, _stringLiteral54E9884C2A8A9804F2757FB402718D03522F4946, L_64, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_6 = L_65;
		// currentActivity.Call ("startActivity", chooser);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_66 = V_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_67 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_68 = L_67;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_69 = V_6;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_69);
		NullCheck(L_66);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_66, _stringLiteral6CB60CD0F517BE0AB5DBF3CCB647F6428F1FA6D1, L_68, NULL);
	}

IL_01e7:
	{
		// yield return new WaitUntil (() => isFocus);
		GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* L_70 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_71 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_71, L_70, (intptr_t)((void*)GroundPlaneGUI_U3CShareScreenshotInAnroidU3Eb__31_0_m4C35C16F2E4D6F9AC1E68F7A5820D483E8198A88_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_72 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_72);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_72, L_71, NULL);
		__this->___U3CU3E2__current_1 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_72);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0207:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isProcessing = false;
		GroundPlaneGUI_tD5DB76CCE24B5EC340EE54FB5C372B5ADD4C5337* L_73 = V_1;
		NullCheck(L_73);
		L_73->___isProcessing_27 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object GroundPlaneGUI/<ShareScreenshotInAnroid>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShareScreenshotInAnroidU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6B0B0F702793E8F7538456C9A8D50F0BC42E024A (U3CShareScreenshotInAnroidU3Ed__31_tEE11F5E0FFDAC9332BE170F28180B8CCB45DC09D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GroundPlaneGUI/<ShareScreenshotInAnroid>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShareScreenshotInAnroidU3Ed__31_System_Collections_IEnumerator_Reset_m6EF0449FF891616585E191E3C904BB74EFDC6DF2 (U3CShareScreenshotInAnroidU3Ed__31_tEE11F5E0FFDAC9332BE170F28180B8CCB45DC09D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShareScreenshotInAnroidU3Ed__31_System_Collections_IEnumerator_Reset_m6EF0449FF891616585E191E3C904BB74EFDC6DF2_RuntimeMethod_var)));
	}
}
// System.Object GroundPlaneGUI/<ShareScreenshotInAnroid>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShareScreenshotInAnroidU3Ed__31_System_Collections_IEnumerator_get_Current_mF3876CF99EBCDDF8BCC2978F5BCDA460DF5701B0 (U3CShareScreenshotInAnroidU3Ed__31_tEE11F5E0FFDAC9332BE170F28180B8CCB45DC09D* __this, const RuntimeMethod* method) 
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
// System.Void Instantiate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instantiate_Start_mF77FFBF95C90733906B2D6DC9F8F771F61B21F15 (Instantiate_t38BBE1064FE0E08D6FB54DE049959EE53FD00A1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D5A69CC0E79075478B35ABB279C43E7DAD0C6E1);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Instantiate(InstantiatePrefab, transform.position, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___InstantiatePrefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Vector3 pos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		V_0 = L_7;
		// for (int i = 0; i < 4; i++)
		V_1 = 0;
		goto IL_0053;
	}

IL_0032:
	{
		// CreatorFunc(pos, i);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		int32_t L_9 = V_1;
		Instantiate_CreatorFunc_m70D4F3B852787D9960639868D366DE3DB9BBB85B(__this, L_8, L_9, NULL);
		// Debug.Log($"made ball {i}");
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral5D5A69CC0E79075478B35ABB279C43E7DAD0C6E1, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_13, NULL);
		// for (int i = 0; i < 4; i++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0053:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Instantiate::CreatorFunc(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instantiate_CreatorFunc_m70D4F3B852787D9960639868D366DE3DB9BBB85B (Instantiate_t38BBE1064FE0E08D6FB54DE049959EE53FD00A1C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	{
		// creationPos = new Vector3(pos.x + i+1 * distanceMultiplier, pos.y, pos.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___x_2;
		int32_t L_2 = ___i1;
		float L_3 = __this->___distanceMultiplier_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___pos0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___pos0;
		float L_7 = L_6.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_1, ((float)L_2))), ((float)il2cpp_codegen_multiply((1.0f), L_3)))), L_5, L_7, NULL);
		// var transformNew = Quaternion.Euler(new Vector3(Random.Range(0f, 360f), Random.Range(0f, 360f), Random.Range(0f, 360f)));
		float L_8;
		L_8 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (360.0f), NULL);
		float L_9;
		L_9 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (360.0f), NULL);
		float L_10;
		L_10 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (360.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_8, L_9, L_10, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_11, NULL);
		V_1 = L_12;
		// var instance = Instantiate(InstantiatePrefab, creationPos, transformNew);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___InstantiatePrefab_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_13, L_14, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// var VecScale = instance.transform.localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_18, NULL);
		V_2 = L_19;
		// if (Input.GetKeyUp(KeyCode.KeypadPlus))
		bool L_20;
		L_20 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)270), NULL);
		G_B1_0 = L_17;
		if (!L_20)
		{
			G_B2_0 = L_17;
			goto IL_00d4;
		}
	}
	{
		// VecScale.y += Random.Range(0.1f, 5.0f);
		float* L_21 = (&(&V_2)->___y_3);
		float* L_22 = L_21;
		float L_23 = *((float*)L_22);
		float L_24;
		L_24 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.100000001f), (5.0f), NULL);
		*((float*)L_22) = (float)((float)il2cpp_codegen_add(L_23, L_24));
		// VecScale.x += Random.Range(0.1f, 5.0f);
		float* L_25 = (&(&V_2)->___x_2);
		float* L_26 = L_25;
		float L_27 = *((float*)L_26);
		float L_28;
		L_28 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.100000001f), (5.0f), NULL);
		*((float*)L_26) = (float)((float)il2cpp_codegen_add(L_27, L_28));
		// VecScale.z += Random.Range(0.1f, 5.0f);
		float* L_29 = (&(&V_2)->___z_4);
		float* L_30 = L_29;
		float L_31 = *((float*)L_30);
		float L_32;
		L_32 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.100000001f), (5.0f), NULL);
		*((float*)L_30) = (float)((float)il2cpp_codegen_add(L_31, L_32));
		G_B2_0 = G_B1_0;
	}

IL_00d4:
	{
		// instance.transform.localScale = VecScale;
		NullCheck(G_B2_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(G_B2_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
		NullCheck(L_33);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_33, L_34, NULL);
		// }
		return;
	}
}
// System.Void Instantiate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instantiate_Update_m29691F1DF108C9E1F6F1163887B05BAA1DD3EE89 (Instantiate_t38BBE1064FE0E08D6FB54DE049959EE53FD00A1C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Instantiate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instantiate__ctor_m123F39FBC29E6FB5FC839AEA2C5160F32CE754E8 (Instantiate_t38BBE1064FE0E08D6FB54DE049959EE53FD00A1C* __this, const RuntimeMethod* method) 
{
	{
		// public float distanceMultiplier = 2.0f;
		__this->___distanceMultiplier_5 = (2.0f);
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
// System.Void JumpingBall::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpingBall_Start_m75E602D010CA0A4D48A8B741B743FC54435AF465 (JumpingBall_t0778EB51DED2885AA61585ACACB34965EC6C2E54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OriginPos = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->___OriginPos_5 = L_1;
		// this.GetComponent<Rigidbody>().AddForce(0, power, 0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		float L_3 = __this->___power_10;
		NullCheck(L_2);
		Rigidbody_AddForce_mFD97FC9DA828C1952D46D28C50B1D994B19895F6(L_2, (0.0f), L_3, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void JumpingBall::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpingBall_Update_m902C0B4BD6EB2A791B90994BA91D001D19E26DCB (JumpingBall_t0778EB51DED2885AA61585ACACB34965EC6C2E54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vec = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->___Vec_4 = L_1;
		// Vec.y = Mathf.PingPong(Time.time * speed, maxHeight) + OriginPos.y; // GetY(Vec.y) * Time.deltaTime * speed; // Input.GetAxis("Jump") * Time.deltaTime * speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___Vec_4);
		float L_3;
		L_3 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_4 = __this->___speed_9;
		float L_5 = __this->___maxHeight_6;
		float L_6;
		L_6 = Mathf_PingPong_m157C55BCFEA2BB96680B7B29D714C3F9390551C9_inline(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___OriginPos_5);
		float L_8 = L_7->___y_3;
		L_2->___y_3 = ((float)il2cpp_codegen_add(L_6, L_8));
		// Vec.x += Input.GetAxis("Horizontal") * Time.deltaTime * speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___Vec_4);
		float* L_10 = (&L_9->___x_2);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		float L_13;
		L_13 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_15 = __this->___speed_9;
		*((float*)L_11) = (float)((float)il2cpp_codegen_add(L_12, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_13, L_14)), L_15))));
		// Vec.z += Input.GetAxis("Vertical") * Time.deltaTime * speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___Vec_4);
		float* L_17 = (&L_16->___z_4);
		float* L_18 = L_17;
		float L_19 = *((float*)L_18);
		float L_20;
		L_20 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		float L_21;
		L_21 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_22 = __this->___speed_9;
		*((float*)L_18) = (float)((float)il2cpp_codegen_add(L_19, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_20, L_21)), L_22))));
		// transform.localPosition = Vec;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___Vec_4;
		NullCheck(L_23);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_23, L_24, NULL);
		// if (Input.GetKey(KeyCode.KeypadEnter))
		bool L_25;
		L_25 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)271), NULL);
		if (!L_25)
		{
			goto IL_00b9;
		}
	}
	{
		// transform.localPosition = OriginPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___OriginPos_5;
		NullCheck(L_26);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_26, L_27, NULL);
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Single JumpingBall::GetY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JumpingBall_GetY_m996D63F01AFA93CDD950CA84D3EC6A0A3CBEFE33 (JumpingBall_t0778EB51DED2885AA61585ACACB34965EC6C2E54* __this, float ___y0, const RuntimeMethod* method) 
{
	{
		// if (up && y >= maxHeight)
		bool L_0 = __this->___up_8;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		float L_1 = ___y0;
		float L_2 = __this->___maxHeight_6;
		if ((!(((float)L_1) >= ((float)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		// up = false;
		__this->___up_8 = (bool)0;
		// y -= stepHeight;
		float L_3 = ___y0;
		float L_4 = __this->___stepHeight_7;
		___y0 = ((float)il2cpp_codegen_subtract(L_3, L_4));
	}

IL_0022:
	{
		// if (up && y <= maxHeight)
		bool L_5 = __this->___up_8;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		float L_6 = ___y0;
		float L_7 = __this->___maxHeight_6;
		if ((!(((float)L_6) <= ((float)L_7))))
		{
			goto IL_0044;
		}
	}
	{
		// up = true;
		__this->___up_8 = (bool)1;
		// y += stepHeight;
		float L_8 = ___y0;
		float L_9 = __this->___stepHeight_7;
		___y0 = ((float)il2cpp_codegen_add(L_8, L_9));
	}

IL_0044:
	{
		// if (!up && y > OriginPos.y)
		bool L_10 = __this->___up_8;
		if (L_10)
		{
			goto IL_006b;
		}
	}
	{
		float L_11 = ___y0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___OriginPos_5);
		float L_13 = L_12->___y_3;
		if ((!(((float)L_11) > ((float)L_13))))
		{
			goto IL_006b;
		}
	}
	{
		// up = false;
		__this->___up_8 = (bool)0;
		// y -= stepHeight;
		float L_14 = ___y0;
		float L_15 = __this->___stepHeight_7;
		___y0 = ((float)il2cpp_codegen_subtract(L_14, L_15));
	}

IL_006b:
	{
		// if (!up && y <= OriginPos.y)
		bool L_16 = __this->___up_8;
		if (L_16)
		{
			goto IL_0092;
		}
	}
	{
		float L_17 = ___y0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = (&__this->___OriginPos_5);
		float L_19 = L_18->___y_3;
		if ((!(((float)L_17) <= ((float)L_19))))
		{
			goto IL_0092;
		}
	}
	{
		// up = true;
		__this->___up_8 = (bool)1;
		// y += stepHeight;
		float L_20 = ___y0;
		float L_21 = __this->___stepHeight_7;
		___y0 = ((float)il2cpp_codegen_add(L_20, L_21));
	}

IL_0092:
	{
		// return y;
		float L_22 = ___y0;
		return L_22;
	}
}
// System.Void JumpingBall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpingBall__ctor_m1375E8E6D71F110E77D37C10E9F5D9CA541E19A7 (JumpingBall_t0778EB51DED2885AA61585ACACB34965EC6C2E54* __this, const RuntimeMethod* method) 
{
	{
		// float maxHeight = 2.0f;
		__this->___maxHeight_6 = (2.0f);
		// float stepHeight = 0.1f;
		__this->___stepHeight_7 = (0.100000001f);
		// bool up = true;
		__this->___up_8 = (bool)1;
		// public float speed = 5.0f;
		__this->___speed_9 = (5.0f);
		// public float power = 500.0f;
		__this->___power_10 = (500.0f);
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
// System.Void Menu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Start_mC49986718939F87924A1391044721CAC6E28919D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Menu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Update_m664984862D794DB3E17B79AFC35D12A9ED961B5D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_mBEF2B96BC9E3D64E020EBE40FEF9CF25E6C3ED00 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
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
// System.Void MoveBetweenTargets::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveBetweenTargets_Start_m4B8E4736CCBF401A76A5AA9C3298DB4B72123C39 (MoveBetweenTargets_t6B670DDCF5A7604D55F79F737AEDD134AC015531* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF7ED7942173F898A9BB6E99AE8EA58DA633865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9264A04A31D84024600F8E9C198E657445BFEA77);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OriginPos = GameObject.Find("ImageTarget").transform.position; // ball not visible if using localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral9264A04A31D84024600F8E9C198E657445BFEA77, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___OriginPos_4 = L_2;
		// TargetPos = GameObject.Find("ImageTarget2").transform.position; // ball not visible if using localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral0CF7ED7942173F898A9BB6E99AE8EA58DA633865, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___TargetPos_5 = L_5;
		// transform.localPosition = OriginPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___OriginPos_4;
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void MoveBetweenTargets::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveBetweenTargets_Update_m82D5EF3CF3759A0B54DCD062E22234733BBD653C (MoveBetweenTargets_t6B670DDCF5A7604D55F79F737AEDD134AC015531* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF7ED7942173F898A9BB6E99AE8EA58DA633865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9264A04A31D84024600F8E9C198E657445BFEA77);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// OriginPos = GameObject.Find("ImageTarget").transform.position; // ball not visible if using localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral9264A04A31D84024600F8E9C198E657445BFEA77, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___OriginPos_4 = L_2;
		// TargetPos = GameObject.Find("ImageTarget2").transform.position; // ball not visible if using localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral0CF7ED7942173F898A9BB6E99AE8EA58DA633865, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___TargetPos_5 = L_5;
		// if (Input.GetKey(KeyCode.KeypadEnter))
		bool L_6;
		L_6 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)271), NULL);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		// transform.localPosition = OriginPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___OriginPos_4;
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_8, NULL);
	}

IL_0051:
	{
		// if (Input.GetKey(KeyCode.KeypadPlus))
		bool L_9;
		L_9 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)270), NULL);
		if (!L_9)
		{
			goto IL_006e;
		}
	}
	{
		// transform.localPosition = TargetPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___TargetPos_5;
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_11, NULL);
	}

IL_006e:
	{
		// var step = speed * Time.deltaTime;
		float L_12 = __this->___speed_6;
		float L_13;
		L_13 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_12, L_13));
		// turnAround = transform.localPosition == TargetPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___TargetPos_5;
		bool L_17;
		L_17 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_15, L_16, NULL);
		__this->___turnAround_7 = L_17;
		// if (!turnAround)
		bool L_18 = __this->___turnAround_7;
		if (L_18)
		{
			goto IL_00c2;
		}
	}
	{
		// transform.localPosition = Vector3.MoveTowards(transform.localPosition, TargetPos, step);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___TargetPos_5;
		float L_23 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_21, L_22, L_23, NULL);
		NullCheck(L_19);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_19, L_24, NULL);
		return;
	}

IL_00c2:
	{
		// transform.localPosition = Vector3.MoveTowards(transform.localPosition, OriginPos, step);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = __this->___OriginPos_4;
		float L_29 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_27, L_28, L_29, NULL);
		NullCheck(L_25);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_25, L_30, NULL);
		// }
		return;
	}
}
// System.Void MoveBetweenTargets::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveBetweenTargets__ctor_m70E334C38E7CE1E4639342724A32ECEF81188CB6 (MoveBetweenTargets_t6B670DDCF5A7604D55F79F737AEDD134AC015531* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float speed = 1f;
		__this->___speed_6 = (1.0f);
		// string direction = "target";
		__this->___direction_8 = _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___direction_8), (void*)_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018);
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
// System.Void MyScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyScript_Start_m5084CF645349E5B6CA892563A8BEAD1B594218DD (MyScript_t2C76C8E4184421382FD10BF3CC08F9A4DF7EF4D3* __this, const RuntimeMethod* method) 
{
	{
		// OriginPos = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->___OriginPos_5 = L_1;
		// OriginScale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		__this->___OriginScale_7 = L_3;
		// }
		return;
	}
}
// System.Void MyScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyScript_Update_m6F09F5CB4E3CBA4D359F7EC6253BFEB6D385A68B (MyScript_t2C76C8E4184421382FD10BF3CC08F9A4DF7EF4D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDBB8D317096A0BA6BA9463FC2533707873DF8FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vec = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->___Vec_4 = L_1;
		// Vec.y += Input.GetAxis("Jump") * Time.deltaTime * 20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___Vec_4);
		float* L_3 = (&L_2->___y_3);
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		float L_6;
		L_6 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		*((float*)L_4) = (float)((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_6, L_7)), (20.0f)))));
		// Vec.x += Input.GetAxis("Horizontal") * Time.deltaTime * 20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___Vec_4);
		float* L_9 = (&L_8->___x_2);
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		float L_12;
		L_12 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_13;
		L_13 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		*((float*)L_10) = (float)((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_12, L_13)), (20.0f)))));
		// Vec.z += Input.GetAxis("Vertical") * Time.deltaTime * 20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___Vec_4);
		float* L_15 = (&L_14->___z_4);
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		float L_18;
		L_18 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		float L_19;
		L_19 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		*((float*)L_16) = (float)((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_18, L_19)), (20.0f)))));
		// if (Input.touchCount > 0)
		int32_t L_20;
		L_20 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		// Vec.x = Input.GetAxis("Mouse X") * Time.deltaTime * 20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___Vec_4);
		float L_22;
		L_22 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_23;
		L_23 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		L_21->___x_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_22, L_23)), (20.0f)));
		// Vec.y = Input.GetAxis("Mouse Y") * Time.deltaTime * 20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&__this->___Vec_4);
		float L_25;
		L_25 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_26;
		L_26 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		L_24->___y_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_25, L_26)), (20.0f)));
	}

IL_00ca:
	{
		// transform.localPosition = Vec;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = __this->___Vec_4;
		NullCheck(L_27);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_27, L_28, NULL);
		// VecScale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_29, NULL);
		__this->___VecScale_6 = L_30;
		// if (Input.GetKeyUp(KeyCode.KeypadPlus)) {
		bool L_31;
		L_31 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)270), NULL);
		if (!L_31)
		{
			goto IL_0137;
		}
	}
	{
		// VecScale.y *= scaleFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&__this->___VecScale_6);
		float* L_33 = (&L_32->___y_3);
		float* L_34 = L_33;
		float L_35 = *((float*)L_34);
		float L_36 = __this->___scaleFactor_8;
		*((float*)L_34) = (float)((float)il2cpp_codegen_multiply(L_35, L_36));
		// VecScale.x *= scaleFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_37 = (&__this->___VecScale_6);
		float* L_38 = (&L_37->___x_2);
		float* L_39 = L_38;
		float L_40 = *((float*)L_39);
		float L_41 = __this->___scaleFactor_8;
		*((float*)L_39) = (float)((float)il2cpp_codegen_multiply(L_40, L_41));
		// VecScale.z *= scaleFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_42 = (&__this->___VecScale_6);
		float* L_43 = (&L_42->___z_4);
		float* L_44 = L_43;
		float L_45 = *((float*)L_44);
		float L_46 = __this->___scaleFactor_8;
		*((float*)L_44) = (float)((float)il2cpp_codegen_multiply(L_45, L_46));
	}

IL_0137:
	{
		// if (Input.GetKeyUp(KeyCode.KeypadMinus)) {
		bool L_47;
		L_47 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)269), NULL);
		if (!L_47)
		{
			goto IL_0182;
		}
	}
	{
		// VecScale.y /= scaleFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_48 = (&__this->___VecScale_6);
		float* L_49 = (&L_48->___y_3);
		float* L_50 = L_49;
		float L_51 = *((float*)L_50);
		float L_52 = __this->___scaleFactor_8;
		*((float*)L_50) = (float)((float)(L_51/L_52));
		// VecScale.x /= scaleFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_53 = (&__this->___VecScale_6);
		float* L_54 = (&L_53->___x_2);
		float* L_55 = L_54;
		float L_56 = *((float*)L_55);
		float L_57 = __this->___scaleFactor_8;
		*((float*)L_55) = (float)((float)(L_56/L_57));
		// VecScale.z /= scaleFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_58 = (&__this->___VecScale_6);
		float* L_59 = (&L_58->___z_4);
		float* L_60 = L_59;
		float L_61 = *((float*)L_60);
		float L_62 = __this->___scaleFactor_8;
		*((float*)L_60) = (float)((float)(L_61/L_62));
	}

IL_0182:
	{
		// if (Input.GetKeyUp(KeyCode.X))
		bool L_63;
		L_63 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)120), NULL);
		if (!L_63)
		{
			goto IL_01a0;
		}
	}
	{
		// VecScale.x *= scaleFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_64 = (&__this->___VecScale_6);
		float* L_65 = (&L_64->___x_2);
		float* L_66 = L_65;
		float L_67 = *((float*)L_66);
		float L_68 = __this->___scaleFactor_8;
		*((float*)L_66) = (float)((float)il2cpp_codegen_multiply(L_67, L_68));
	}

IL_01a0:
	{
		// if (Input.GetKeyUp(KeyCode.Y))
		bool L_69;
		L_69 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)121), NULL);
		if (!L_69)
		{
			goto IL_01be;
		}
	}
	{
		// VecScale.y *= scaleFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_70 = (&__this->___VecScale_6);
		float* L_71 = (&L_70->___y_3);
		float* L_72 = L_71;
		float L_73 = *((float*)L_72);
		float L_74 = __this->___scaleFactor_8;
		*((float*)L_72) = (float)((float)il2cpp_codegen_multiply(L_73, L_74));
	}

IL_01be:
	{
		// if (Input.GetKeyUp(KeyCode.Z))
		bool L_75;
		L_75 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)122), NULL);
		if (!L_75)
		{
			goto IL_01dc;
		}
	}
	{
		// VecScale.z *= scaleFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_76 = (&__this->___VecScale_6);
		float* L_77 = (&L_76->___z_4);
		float* L_78 = L_77;
		float L_79 = *((float*)L_78);
		float L_80 = __this->___scaleFactor_8;
		*((float*)L_78) = (float)((float)il2cpp_codegen_multiply(L_79, L_80));
	}

IL_01dc:
	{
		// transform.localScale = VecScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = __this->___VecScale_6;
		NullCheck(L_81);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_81, L_82, NULL);
		// if (Input.GetKey(KeyCode.KeypadEnter))
		bool L_83;
		L_83 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)271), NULL);
		if (!L_83)
		{
			goto IL_021b;
		}
	}
	{
		// transform.localPosition = OriginPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = __this->___OriginPos_5;
		NullCheck(L_84);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_84, L_85, NULL);
		// transform.localScale = OriginScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86;
		L_86 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = __this->___OriginScale_7;
		NullCheck(L_86);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_86, L_87, NULL);
	}

IL_021b:
	{
		// if (Input.GetKeyUp(KeyCode.KeypadPeriod)) {
		bool L_88;
		L_88 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)266), NULL);
		if (!L_88)
		{
			goto IL_023b;
		}
	}
	{
		// Destroy(GameObject.Find("Sphere"), 1); // bad performance
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89;
		L_89 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralBDBB8D317096A0BA6BA9463FC2533707873DF8FD, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_89, (1.0f), NULL);
	}

IL_023b:
	{
		// if (Input.GetKeyUp(KeyCode.Delete) || Input.GetKeyUp(KeyCode.Backspace))
		bool L_90;
		L_90 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)127), NULL);
		if (L_90)
		{
			goto IL_024c;
		}
	}
	{
		bool L_91;
		L_91 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(8, NULL);
		if (!L_91)
		{
			goto IL_0257;
		}
	}

IL_024c:
	{
		// Destroy(this.gameObject); // bad performance
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92;
		L_92 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_92, NULL);
	}

IL_0257:
	{
		// if (myTimer > 0) {
		float L_93 = __this->___myTimer_9;
		if ((!(((float)L_93) > ((float)(0.0f)))))
		{
			goto IL_0276;
		}
	}
	{
		// myTimer -= Time.deltaTime; // time passesd since last frame update (in ms)
		float L_94 = __this->___myTimer_9;
		float L_95;
		L_95 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___myTimer_9 = ((float)il2cpp_codegen_subtract(L_94, L_95));
	}

IL_0276:
	{
		// if (myTimer <= 0)
		float L_96 = __this->___myTimer_9;
		if ((!(((float)L_96) <= ((float)(0.0f)))))
		{
			goto IL_028d;
		}
	}
	{
		// Debug.Log("Game Over");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF984C9674EDCA2C39EFAD66081B054F073C3815B, NULL);
	}

IL_028d:
	{
		// }
		return;
	}
}
// System.Void MyScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyScript__ctor_m4C585D44CBECF416DF49C346B5249DD656E56A2E (MyScript_t2C76C8E4184421382FD10BF3CC08F9A4DF7EF4D3* __this, const RuntimeMethod* method) 
{
	{
		// float scaleFactor = 1.1f;
		__this->___scaleFactor_8 = (1.10000002f);
		// public float myTimer = 5.0f;
		__this->___myTimer_9 = (5.0f);
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
// System.Void PopUpGUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopUpGUI_Start_m5420EFBD90C28BE8B7033A0739C1BFD5A69963B6 (PopUpGUI_t91D5198C2AF5E5821FF09CE90D1B41EFBA7AA7AA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PopUpGUI::OnTrackingFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopUpGUI_OnTrackingFound_m03A2B78A243B094F15DA4F64E8C57F7083ED789A (PopUpGUI_t91D5198C2AF5E5821FF09CE90D1B41EFBA7AA7AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E818327CA4CC1751A2DD14A35EF509FF9B84FA7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Target Found - mShowGUIButton true");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral3E818327CA4CC1751A2DD14A35EF509FF9B84FA7, NULL);
		// mShowGUIButton = true;
		__this->___mShowGUIButton_19 = (bool)1;
		// OnGUI();
		PopUpGUI_OnGUI_m2A27DF25DC19C7A7E72C91A6CEA42EBC354AD43F(__this, NULL);
		// base.OnTrackingFound();
		DefaultObserverEventHandler_OnTrackingFound_mB6D67A89BFABE789AED4BBB9298D9DA6BBD14DFA(__this, NULL);
		// }
		return;
	}
}
// System.Void PopUpGUI::OnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopUpGUI_OnTrackingLost_m6487AE12CE12B127A62736CBDAB981551590DF48 (PopUpGUI_t91D5198C2AF5E5821FF09CE90D1B41EFBA7AA7AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AF0B5CD0228BBDB81DE6637141D7EBDB51A5476);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Target Lost - mShowGUIButton false");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral1AF0B5CD0228BBDB81DE6637141D7EBDB51A5476, NULL);
		// mShowGUIButton = false;
		__this->___mShowGUIButton_19 = (bool)0;
		// OnGUI();
		PopUpGUI_OnGUI_m2A27DF25DC19C7A7E72C91A6CEA42EBC354AD43F(__this, NULL);
		// base.OnTrackingLost();
		DefaultObserverEventHandler_OnTrackingLost_mC3798191D134AA29054393974F5A07A43B1BF5E8(__this, NULL);
		// }
		return;
	}
}
// System.Void PopUpGUI::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopUpGUI_OnGUI_m2A27DF25DC19C7A7E72C91A6CEA42EBC354AD43F (PopUpGUI_t91D5198C2AF5E5821FF09CE90D1B41EFBA7AA7AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB094BFC20326EA8706B700E846DAACC35FE59C68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8D54007127A3A328F1E272B7307564210334858);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_3 = NULL;
	{
		// float rx = Screen.width / native_width;
		int32_t L_0;
		L_0 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		float L_1 = __this->___native_width_14;
		V_0 = ((float)(((float)L_0)/L_1));
		// float ry = Screen.height / native_height;
		int32_t L_2;
		L_2 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		float L_3 = __this->___native_height_15;
		V_1 = ((float)(((float)L_2)/L_3));
		// GUI.matrix = Matrix4x4.TRS(new Vector3(0, 0, 0), Quaternion.identity, new Vector3(rx, ry, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		float L_6 = V_0;
		float L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_6, L_7, (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_4, L_5, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_matrix_m531F68D81C0D8EC62E40AEAE7C48453BF995C2FC(L_9, NULL);
		// Rect mButtonRect = new Rect(1920 - 215, 5, 210, 110);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_2), (1705.0f), (5.0f), (210.0f), (110.0f), NULL);
		// GUIStyle myTextStyle = new GUIStyle(GUI.skin.textField);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_10;
		L_10 = GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1(NULL);
		NullCheck(L_10);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_11;
		L_11 = GUISkin_get_textField_mC554496BAB959445F0CFA30BDC5736DC1F057D48(L_10, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E(L_12, L_11, NULL);
		V_3 = L_12;
		// myTextStyle.fontSize = 50;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_13 = V_3;
		NullCheck(L_13);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_13, ((int32_t)50), NULL);
		// myTextStyle.richText = true;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_14 = V_3;
		NullCheck(L_14);
		GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD(L_14, (bool)1, NULL);
		// GUI.DrawTexture(new Rect(5, 1080 - 115, 350, 110), LogoTexture);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_15;
		memset((&L_15), 0, sizeof(L_15));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_15), (5.0f), (965.0f), (350.0f), (110.0f), /*hidden argument*/NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_16 = __this->___LogoTexture_17;
		GUI_DrawTexture_m4DC8E4DE66E5B806D6C71E9BFC8B122DB2A51F09(L_15, L_16, NULL);
		// GUI.DrawTexture(new Rect(1530, 970, 350, 110), MobiliyaTexture);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17;
		memset((&L_17), 0, sizeof(L_17));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_17), (1530.0f), (970.0f), (350.0f), (110.0f), /*hidden argument*/NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_18 = __this->___MobiliyaTexture_18;
		GUI_DrawTexture_m4DC8E4DE66E5B806D6C71E9BFC8B122DB2A51F09(L_17, L_18, NULL);
		// if (!btntexture) // This is the button that triggers AR and UI camera On/Off
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_19 = __this->___btntexture_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_19, NULL);
		if (L_20)
		{
			goto IL_00e5;
		}
	}
	{
		// Debug.LogError("Please assign a texture on the inspector");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralB094BFC20326EA8706B700E846DAACC35FE59C68, NULL);
		// return;
		return;
	}

IL_00e5:
	{
		// if (mShowGUIButton)
		bool L_21 = __this->___mShowGUIButton_19;
		if (!L_21)
		{
			goto IL_0125;
		}
	}
	{
		// GUI.Label(new Rect(40, 25, 350, 70), "<b> G E 9 1 0 0 C </b>", myTextStyle);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
		memset((&L_22), 0, sizeof(L_22));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_22), (40.0f), (25.0f), (350.0f), (70.0f), /*hidden argument*/NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_23 = V_3;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_m7A2F92799F7D0D0C56D18D0F8BAE77BC9BDCAC31(L_22, _stringLiteralD8D54007127A3A328F1E272B7307564210334858, L_23, NULL);
		// if (GUI.Button(mButtonRect, btntexture))
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_24 = V_2;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_25 = __this->___btntexture_16;
		bool L_26;
		L_26 = GUI_Button_mD0E3B3A6A199F29F307AC2956A587120C7A0E0C3(L_24, L_25, NULL);
		if (!L_26)
		{
			goto IL_0125;
		}
	}
	{
		// OpenVideoActivity();
		PopUpGUI_OpenVideoActivity_m02A990BA3EBA8BA7D9A5358B62F91EED7B38FCD9(__this, NULL);
	}

IL_0125:
	{
		// }
		return;
	}
}
// System.Void PopUpGUI::OpenVideoActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopUpGUI_OpenVideoActivity_m02A990BA3EBA8BA7D9A5358B62F91EED7B38FCD9 (PopUpGUI_t91D5198C2AF5E5821FF09CE90D1B41EFBA7AA7AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25F43B7D8B43F33E8FA161C934872E7D02F0B131);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D63650286A1E1FD31796F6AE418A16D3A0C143B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// var androidJC = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// var jo = androidJC.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_0 = L_1;
		// var jc = new AndroidJavaClass("com.mobiliya.gepoc.StartVideoActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral25F43B7D8B43F33E8FA161C934872E7D02F0B131, NULL);
		// jc.CallStatic("Call", jo);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_2);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_2, _stringLiteral4D63650286A1E1FD31796F6AE418A16D3A0C143B, L_4, NULL);
		// }
		return;
	}
}
// System.Void PopUpGUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopUpGUI__ctor_mF8630107BCC4A071F867C3385E18D8E9BD8A1EC4 (PopUpGUI_t91D5198C2AF5E5821FF09CE90D1B41EFBA7AA7AA* __this, const RuntimeMethod* method) 
{
	{
		// float native_width = 1920f;
		__this->___native_width_14 = (1920.0f);
		// float native_height = 1080f;
		__this->___native_height_15 = (1080.0f);
		DefaultObserverEventHandler__ctor_mE40FCAD19043225054C315C22018F5780217E9DC(__this, NULL);
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
// System.Void text::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void text_Start_mF08026D5C3E87BE9DA2C0E01F28B93644C159C9C (text_t7D1C6CED8812CE29FF0C78FEE56E007988DB87DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral771C19C3265C1E57B0DDE0B8802D7455E7B4ED82);
		s_Il2CppMethodInitialized = true;
	}
	{
		// displayedText.text = "Hello World from c#";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___displayedText_4;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral771C19C3265C1E57B0DDE0B8802D7455E7B4ED82);
		// }
		return;
	}
}
// System.Void text::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void text_Update_mC0C3C3CA5BBCC449ADDD0076E23BC91884265964 (text_t7D1C6CED8812CE29FF0C78FEE56E007988DB87DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A078B1D42385A4DA43C1E2561FC36AF17F18454);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* V_1 = NULL;
	int32_t V_2 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// int fingerCount = 0;
		V_0 = 0;
		// foreach (var touch in Input.touches)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_0;
		L_0 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		V_1 = L_0;
		V_2 = 0;
		goto IL_0060;
	}

IL_000c:
	{
		// foreach (var touch in Input.touches)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// if (touch.phase != TouchPhase.Ended && touch.phase != TouchPhase.Canceled) {
		int32_t L_5;
		L_5 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_3), NULL);
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6;
		L_6 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_3), NULL);
		if ((((int32_t)L_6) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		// fingerCount++;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002c:
	{
		// displayedText.text = $"{fingerCount} finger(s)";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___displayedText_4;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral6A078B1D42385A4DA43C1E2561FC36AF17F18454, L_11, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_12);
		// displayedText.fontSize += fingerCount*2;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___displayedText_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = L_13;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993(L_14, NULL);
		int32_t L_16 = V_0;
		NullCheck(L_14);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_14, ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)il2cpp_codegen_multiply(L_16, 2)))), NULL);
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0060:
	{
		// foreach (var touch in Input.touches)
		int32_t L_18 = V_2;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_19 = V_1;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void text::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void text__ctor_m55D89EDCCBC889C7ABE541CFFBFF0DF2841671A3 (text_t7D1C6CED8812CE29FF0C78FEE56E007988DB87DE* __this, const RuntimeMethod* method) 
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
// System.Void TouchTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchTest_Start_m8891C9E4B88F931628205616DA8899C02D3D027F (TouchTest_t03B7F2E0289AD97B59BEEA76F65566F242FF113A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TouchTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchTest_Update_m6ED807E6EBAB7D1849732CFD875147481567E1A3 (TouchTest_t03B7F2E0289AD97B59BEEA76F65566F242FF113A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TouchTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchTest__ctor_m09398C341BBCF3B9216A3CC4333F04CD2BB76A4E (TouchTest_t03B7F2E0289AD97B59BEEA76F65566F242FF113A* __this, const RuntimeMethod* method) 
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
// System.Void VBAction2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBAction2_Start_m18E48F5D47253021810C71A43A085763D1A6E8B3 (VBAction2_t7C2AAD57425511B77F2CA33536DED4944154E254* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VBAction2_OnButtonPressed_mF3439DB801E79C041E7A64EC92645ECF381037B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VBAction2_OnButtonReleased_m489F3F3A7CBE22E3BADE39B1F1B3AF1A498B8DBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral061314C8C5363A5FBE1A66725277381400BCB89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral986B48564BFCB973B5A92E99EDBC3B782B8BAC1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject gameObject = GameObject.Find("action");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267, NULL);
		// gameObject.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnButtonPressed);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0;
		NullCheck(L_1);
		VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* L_2;
		L_2 = GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE(L_1, GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE_RuntimeMethod_var);
		Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8* L_3 = (Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8*)il2cpp_codegen_object_new(Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mAF9A3D09130D6A85803B78A11135CBCFDE279E45(L_3, __this, (intptr_t)((void*)VBAction2_OnButtonPressed_mF3439DB801E79C041E7A64EC92645ECF381037B1_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VirtualButtonBehaviour_RegisterOnButtonPressed_m5BC515A4CD5C2F53BC2D59CAD99E8D311520F7D9(L_2, L_3, NULL);
		// gameObject.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonReleased(OnButtonReleased);
		NullCheck(L_1);
		VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* L_4;
		L_4 = GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE(L_1, GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE_RuntimeMethod_var);
		Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8* L_5 = (Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8*)il2cpp_codegen_object_new(Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mAF9A3D09130D6A85803B78A11135CBCFDE279E45(L_5, __this, (intptr_t)((void*)VBAction2_OnButtonReleased_m489F3F3A7CBE22E3BADE39B1F1B3AF1A498B8DBA_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		VirtualButtonBehaviour_RegisterOnButtonReleased_m397FF28E3F2FD4647A1B0BE19D06F1C7715F5CAD(L_4, L_5, NULL);
		// GameObject gameObject2 = GameObject.Find("action2");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral061314C8C5363A5FBE1A66725277381400BCB89A, NULL);
		// gameObject2.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonPressed(OnButtonPressed);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6;
		NullCheck(L_7);
		VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* L_8;
		L_8 = GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE(L_7, GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE_RuntimeMethod_var);
		Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8* L_9 = (Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8*)il2cpp_codegen_object_new(Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_1__ctor_mAF9A3D09130D6A85803B78A11135CBCFDE279E45(L_9, __this, (intptr_t)((void*)VBAction2_OnButtonPressed_mF3439DB801E79C041E7A64EC92645ECF381037B1_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		VirtualButtonBehaviour_RegisterOnButtonPressed_m5BC515A4CD5C2F53BC2D59CAD99E8D311520F7D9(L_8, L_9, NULL);
		// gameObject2.GetComponent<VirtualButtonBehaviour>().RegisterOnButtonReleased(OnButtonReleased);
		NullCheck(L_7);
		VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* L_10;
		L_10 = GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE(L_7, GameObject_GetComponent_TisVirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491_m1BC18F0E7E15819D093375BDA7D6E000F2985EBE_RuntimeMethod_var);
		Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8* L_11 = (Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8*)il2cpp_codegen_object_new(Action_1_tB84C5B48D09D4A543DE86FAA0B4EBAC191DD8EC8_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mAF9A3D09130D6A85803B78A11135CBCFDE279E45(L_11, __this, (intptr_t)((void*)VBAction2_OnButtonReleased_m489F3F3A7CBE22E3BADE39B1F1B3AF1A498B8DBA_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		VirtualButtonBehaviour_RegisterOnButtonReleased_m397FF28E3F2FD4647A1B0BE19D06F1C7715F5CAD(L_10, L_11, NULL);
		// GameObject.Find("Cylinder").GetComponent<MeshRenderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral986B48564BFCB973B5A92E99EDBC3B782B8BAC1E, NULL);
		NullCheck(L_12);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_13;
		L_13 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_12, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_13);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_13, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void VBAction2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBAction2_Update_mB0B8BC8EF4A64ABB9CCA196798C4CD384C8677AC (VBAction2_t7C2AAD57425511B77F2CA33536DED4944154E254* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void VBAction2::OnButtonPressed(Vuforia.VirtualButtonBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBAction2_OnButtonPressed_mF3439DB801E79C041E7A64EC92645ECF381037B1 (VBAction2_t7C2AAD57425511B77F2CA33536DED4944154E254* __this, VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* ___vb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82C82E628953D51B5E82E96C307B140BA6DA4228);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral986B48564BFCB973B5A92E99EDBC3B782B8BAC1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA726B235F7C9FBFFD5C23A4F105C8BA415C97DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Button pressed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralDA726B235F7C9FBFFD5C23A4F105C8BA415C97DF, NULL);
		// GameObject.Find("Cube").GetComponent<Renderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928, NULL);
		NullCheck(L_0);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_0, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)0, NULL);
		// GameObject.Find("Cube2").GetComponent<Renderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral82C82E628953D51B5E82E96C307B140BA6DA4228, NULL);
		NullCheck(L_2);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_2, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_3);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
		// GameObject.Find("Cylinder").GetComponent<MeshRenderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral986B48564BFCB973B5A92E99EDBC3B782B8BAC1E, NULL);
		NullCheck(L_4);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5;
		L_5 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_4, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_5);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void VBAction2::OnButtonReleased(Vuforia.VirtualButtonBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBAction2_OnButtonReleased_m489F3F3A7CBE22E3BADE39B1F1B3AF1A498B8DBA (VBAction2_t7C2AAD57425511B77F2CA33536DED4944154E254* __this, VirtualButtonBehaviour_tCE0715599AD5D666FCA4A62B0F6FC27267C99491* ___vb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2202C87B4F3B01930E57A6E24B5AD6290C547330);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82C82E628953D51B5E82E96C307B140BA6DA4228);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral986B48564BFCB973B5A92E99EDBC3B782B8BAC1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Button released");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral2202C87B4F3B01930E57A6E24B5AD6290C547330, NULL);
		// GameObject.Find("Cube").GetComponent<Renderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928, NULL);
		NullCheck(L_0);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_0, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// GameObject.Find("Cube2").GetComponent<Renderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral82C82E628953D51B5E82E96C307B140BA6DA4228, NULL);
		NullCheck(L_2);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_2, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_3);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)1, NULL);
		// GameObject.Find("Cylinder").GetComponent<MeshRenderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral986B48564BFCB973B5A92E99EDBC3B782B8BAC1E, NULL);
		NullCheck(L_4);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5;
		L_5 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_4, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_5);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void VBAction2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBAction2__ctor_m9556968D7CA5D917073C88CD01FFF45167296429 (VBAction2_t7C2AAD57425511B77F2CA33536DED4944154E254* __this, const RuntimeMethod* method) 
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
// System.Void Assets.scripts.Globals::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Globals__cctor_m89B77D84DF002606BD010CE5B4A6168E6C0AA784 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Globals_t1E4C6CBF7F013E229D442E11DF7820F43FE9FF35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static decimal chair_1_price = 100m;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Decimal__ctor_m6DDFD6E3A7A8CDEB1BADF8E09A8D8E1BDA9497A9((&L_0), ((int32_t)100), /*hidden argument*/NULL);
		((Globals_t1E4C6CBF7F013E229D442E11DF7820F43FE9FF35_StaticFields*)il2cpp_codegen_static_fields_for(Globals_t1E4C6CBF7F013E229D442E11DF7820F43FE9FF35_il2cpp_TypeInfo_var))->___chair_1_price_0 = L_0;
		// public static decimal total = 0m;
		il2cpp_codegen_initobj((&((Globals_t1E4C6CBF7F013E229D442E11DF7820F43FE9FF35_StaticFields*)il2cpp_codegen_static_fields_for(Globals_t1E4C6CBF7F013E229D442E11DF7820F43FE9FF35_il2cpp_TypeInfo_var))->___total_1), sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_PingPong_m157C55BCFEA2BB96680B7B29D714C3F9390551C9_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___length1;
		float L_2;
		L_2 = Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline(L_0, ((float)il2cpp_codegen_multiply(L_1, (2.0f))), NULL);
		___t0 = L_2;
		float L_3 = ___length1;
		float L_4 = ___t0;
		float L_5 = ___length1;
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_subtract(L_4, L_5)));
		V_0 = ((float)il2cpp_codegen_subtract(L_3, L_6));
		goto IL_001d;
	}

IL_001d:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
