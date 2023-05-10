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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<System.UInt64>
struct Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver>
struct Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603;
// System.Action`2<Unity.Netcode.NetworkManager/ConnectionApprovalRequest,Unity.Netcode.NetworkManager/ConnectionApprovalResponse>
struct Action_2_t5E7B4E17493B71D65B87865FA28E6CCE1C2ED68B;
// System.Collections.Generic.Dictionary`2<System.Guid,Unity.Netcode.SceneEventProgress>
struct Dictionary_2_t0270812B055A7D1C86659691D8A5E1AE5B65B721;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Unity.Netcode.NetworkObject>>
struct Dictionary_2_tE0CCE43CB23321225C159A6FBF31D85E8F1A5E9B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.SceneManagement.Scene>
struct Dictionary_2_tCC2015396C24B57BF74F74538DB3DE9AD918F8D6;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>
struct Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.DataObject>
struct Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.PlayerDataObject>
struct Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo[]>
struct Dictionary_2_t04BB274E1321E9A9FFE2C45EF5DC62AA12E85365;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Collections.Generic.Dictionary`2<System.Int32,Unity.Netcode.NetworkObject>>
struct Dictionary_2_t1674990A173871C1D9FAEE8AB011002392DA1E5D;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>
struct Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>
struct Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A;
// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.SceneEventData>
struct Dictionary_2_tCA8950DBD026CD4264E7CE9E57FB298AECECB699;
// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.List`1<Unity.Netcode.NetworkObject>>
struct Dictionary_2_tEFAF073C90BF36DA59A8A6A357782DF7453A1D5C;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>
struct Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient>
struct Dictionary_2_t04CE97C57D2E25D600E03BF7F53BDCDDAC05C9DF;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient>
struct Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64>
struct Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovalResponse>
struct Dictionary_2_t647F7F7CA786348F8808D433385C1B2D157E852A;
// System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<UnityEngine.SceneManagement.Scene,System.Boolean>
struct Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1;
// System.Func`2<System.String,UnityEngine.SceneManagement.Scene>
struct Func_2_t2CEDF1D050AAC5620D1B957995312D5E2E5F5570;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.HashSet`1<Unity.Netcode.NetworkObject>
struct HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337;
// System.Collections.Generic.HashSet`1<System.UInt64>
struct HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding>
struct IEnumerable_1_tB0371F6D0932F0C778CAEED128603B65772AC357;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction>
struct IEnumerator_1_t5197EB77176C670D4AAF5E0D1B4F1AB9940EFE41;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.UInt32>
struct IEqualityComparer_1_t0BB8211419723EB61BF19007AC9D62365E50500E;
// System.Collections.Generic.IReadOnlyList`1<System.UInt64>
struct IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.Services.Lobbies.Models.DataObject>
struct KeyCollection_t24319105B60039A6A24E317A725B7C9961C2BC71;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.Services.Lobbies.Models.PlayerDataObject>
struct KeyCollection_t922A75677241CFC2F7268601169E72CD35CCFDE6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct KeyCollection_t828BE28B5AD4F3C0D8AE018C5D91252F5D272E6B;
// System.Collections.Generic.List`1<System.Collections.Generic.HashSet`1<System.Int32>>
struct List_1_t498347DEA55185643F213F995B74FEE039FAD70F;
// System.Collections.Generic.List`1<Unity.Networking.Transport.INetworkInterface>
struct List_1_tC673C156FBD962AEDC0C4957C82DD522010A9BC6;
// System.Collections.Generic.List`1<Unity.Networking.Transport.INetworkProtocol>
struct List_1_t55E70A01F2B19225279AEE9C81F69F51DE1781C0;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<Unity.Services.Lobbies.Models.Lobby>
struct List_1_t2042FCDC35CA07B523474220DF460A1A043B4C9D;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkBehaviour>
struct List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient>
struct List_1_t57C6C818F7D91A7154A4799FE6DEFD3ACD6F39A5;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkDelivery>
struct List_1_t3ED220D424138331023A4D1C1B67E3C63A19761B;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkVariableBase>
struct List_1_tB6CC3AFBA7164AC34B1EF29A0A73721899567AE3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Unity.Services.Lobbies.Models.Player>
struct List_1_tA417A94B122547E4DD22BF1528BDCDF1DB2FAFE0;
// System.Collections.Generic.List`1<Unity.Services.Lobbies.Models.QueryFilter>
struct List_1_t6A7ED0FC48EFCA947C17ED522078C7357C46B212;
// System.Collections.Generic.List`1<Unity.Services.Lobbies.Models.QueryOrder>
struct List_1_t264A2143C0705ECBF085276C402DB8142637E59B;
// System.Collections.Generic.List`1<Unity.Services.Relay.Models.RelayServerEndpoint>
struct List_1_t2312067CBBF8C43EDBB74AEE23EC8CE452741A8D;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkSceneManager/DeferredObjectsMovedEvent>
struct List_1_t0119CA48E653D4C86AB7AC383F40A66452435828;
// System.Collections.Generic.List`1<PlayerInputActions/IPlayerActions>
struct List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Relay.Models.Allocation>
struct TaskFactory_1_t71911D19BDC8CCC1B4259616223540952640D028;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Relay.Models.JoinAllocation>
struct TaskFactory_1_tB8E1155F824A4E3EDE35919801D9EC3CBAD71ADE;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Lobbies.Models.Lobby>
struct TaskFactory_1_t67ACBA2CAEA8175DF85D1A91EBCE42EFF928CED8;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Lobbies.Models.QueryResponse>
struct TaskFactory_1_tC48165FF694C6DF78BAFFFBBC24134931614D7B3;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.Allocation>
struct Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615;
// System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.JoinAllocation>
struct Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC;
// System.Threading.Tasks.Task`1<Unity.Services.Lobbies.Models.Lobby>
struct Task_1_t14D07ED713222B97E440F98F73CDA5AD1534DDD1;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Unity.Services.Lobbies.Models.QueryResponse>
struct Task_1_tE9AEBB5E01E6AE360BD0305D0AE3A6756F3C81F2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Byte>
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Int32>
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Networking.Transport.NetworkEvent>
struct UnsafeList_1_tFD7DB6B00333C2C114D553F48DA91C512E033F99;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Networking.Transport.NetworkDriver/Connection>
struct UnsafeList_1_tF90CD1BACB3990B533D04C98C2C90161BD7F9C20;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/PipelineImpl>
struct UnsafeList_1_t557C9C31121D73D732851DA0465D2D22CFFBF099;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline>
struct UnsafeList_1_t5D77D9399869F973DD7861206FE7B0BB5254BEDA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.Services.Lobbies.Models.DataObject>
struct ValueCollection_t6311BE2478C0D4EEB35CBC79674501A34BA866D9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.Services.Lobbies.Models.PlayerDataObject>
struct ValueCollection_tA2C6C8F04ECFEB9F1722C1E181B37C89E8D0ACE8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct ValueCollection_tF46BA59A103BBCF077A2A7517084776F6CDD8283;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.Services.Lobbies.Models.DataObject>[]
struct EntryU5BU5D_tB468EA3F98DA1289288FE6E32F40161DD3A98FC8;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.Services.Lobbies.Models.PlayerDataObject>[]
struct EntryU5BU5D_t4A70FF623EFE1419D64F49825062DE03ADBE00AB;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>[]
struct EntryU5BU5D_t13B5F17F7C1B328C6B687BAECF4A5B17473E98ED;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
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
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Unity.Services.Lobbies.Models.Lobby[]
struct LobbyU5BU5D_t6BD2356E4DC8A014F321DFF9BC6BB753D273E3EE;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Unity.Services.Lobbies.Models.Player[]
struct PlayerU5BU5D_tE0AD27E093E2FB3FC07FE5A0595FCE33B9A9314A;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[]
struct ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE;
// PlayerInputActions/IPlayerActions[]
struct IPlayerActionsU5BU5D_t0E35140ACDD64744855EC437CA39DE26100D940E;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Unity.Services.Relay.Models.Allocation
struct Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CoinController
struct CoinController_t235C3DF0755DD8275C06CCA8F5F5C0A41AE2781D;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Unity.Services.Lobbies.CreateLobbyOptions
struct CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46;
// Unity.Netcode.CustomMessagingManager
struct CustomMessagingManager_t713DDF9DC30FAF5178913295556DD07C946A9746;
// Unity.Services.Lobbies.Models.DataObject
struct DataObject_tCE3C7F1A26400A13D21A110FE0508CC2BA73AADD;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// HealthSystem
struct HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Unity.Services.Authentication.IAuthenticationService
struct IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737;
// Unity.Netcode.IDeferredMessageManager
struct IDeferredMessageManager_t4090EBA76E1C9A5B841E21584A74976F383AD793;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Unity.Services.Lobbies.ILobbyService
struct ILobbyService_t4F07247F1A81F56EA2F668B1F9A7E89FD2239CD4;
// Unity.Services.Lobbies.ILobbyServiceSDK
struct ILobbyServiceSDK_t076C58BB5CC9171349C12FF152BE0964748AA822;
// Unity.Netcode.INetworkMetrics
struct INetworkMetrics_tE2C13758A950A5C77D2682C15F47914B13AC1C41;
// Unity.Netcode.Transports.UTP.INetworkStreamDriverConstructor
struct INetworkStreamDriverConstructor_t18108EFD3B50331C2FC8D5A90A48A345B33991EA;
// Unity.Netcode.IRealTimeProvider
struct IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D;
// Unity.Services.Relay.IRelayService
struct IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2;
// Unity.Netcode.ISceneManagerHandler
struct ISceneManagerHandler_t1FC9BBF14395FBCDEC72A6494B2CD3C4BB25A35B;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// Unity.Services.Relay.Models.JoinAllocation
struct JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A;
// Unity.Services.Lobbies.JoinLobbyByCodeOptions
struct JoinLobbyByCodeOptions_tF4262E7977AFCD63208DE6BF0D299E8B95727D85;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LoaderCallback
struct LoaderCallback_t452625797B4FD87E770D14759A591E263B2EE91B;
// Unity.Services.Lobbies.Models.Lobby
struct Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C;
// LobbyManager
struct LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// Unity.Netcode.MessagingSystem
struct MessagingSystem_tE5E070D8EDEED13D4D0C9D518961289FB3EE1C5D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Unity.Collections.NativeQueueBlockPoolData
struct NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87;
// Unity.Collections.NativeQueueData
struct NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52;
// Unity.Netcode.NetworkBehaviour
struct NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE;
// Unity.Netcode.NetworkBehaviourUpdater
struct NetworkBehaviourUpdater_t215DD428092983D5AECE1BF5BA0576E5070F987C;
// Unity.Netcode.NetworkClient
struct NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64;
// Unity.Netcode.NetworkConfig
struct NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113;
// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468;
// Unity.Netcode.NetworkObject
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366;
// Unity.Netcode.NetworkPrefabHandler
struct NetworkPrefabHandler_tDAE80C95FD27B1749A8657944402C831679B0AAE;
// Unity.Netcode.NetworkSceneManager
struct NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC;
// Unity.Netcode.NetworkSpawnManager
struct NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D;
// Unity.Netcode.NetworkTickSystem
struct NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A;
// Unity.Netcode.NetworkTimeSystem
struct NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// Unity.Services.Lobbies.Models.Player
struct Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// Unity.Services.Lobbies.Models.PlayerDataObject
struct PlayerDataObject_t0D8F6C76C20CE409B0E408EB0394488F5236027B;
// PlayerInputActions
struct PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694;
// PlayerSpawner
struct PlayerSpawner_t3A74834B7A1A9F58FECE5AF56F46844CD026E4AC;
// ProjectileController
struct ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46;
// Unity.Services.Lobbies.Models.QueryResponse
struct QueryResponse_tB3161BB8C249085FF9A3289A155FDDE1B30373A6;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Unity.Services.Relay.Models.RelayServer
struct RelayServer_t3EB847F796BBD0BE8103D521AD1DBB4FA60D4505;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScoreManager
struct ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
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
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// Unity.Netcode.Transports.UTP.UnityTransport
struct UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4;
// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData
struct UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4;
// Unity.Services.Lobbies.UpdateLobbyOptions
struct UpdateLobbyOptions_t515C0450F4C550EDE74AF44D1707FFE282A64AF9;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Unity.Netcode.FastBufferReader/ReaderHandle
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8;
// Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;
// Loader/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t16ED08FBDF3B3496E4228001D49787220311E61F;
// LobbyManager/<>c
struct U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Unity.Netcode.NetworkManager/RpcReceiveHandler
struct RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597;
// Unity.Netcode.NetworkObject/SpawnDelegate
struct SpawnDelegate_t54493DE8F3E71A9E28528811BBD80E50C09BFF57;
// Unity.Netcode.NetworkObject/VisibilityDelegate
struct VisibilityDelegate_t43869941CF7C26CBA2B0FEBB3E7A33BA67D3216A;
// Unity.Netcode.NetworkSceneManager/OnEventCompletedDelegateHandler
struct OnEventCompletedDelegateHandler_t95567703998423114BF49A290F181D1B8E6A2788;
// Unity.Netcode.NetworkSceneManager/OnLoadCompleteDelegateHandler
struct OnLoadCompleteDelegateHandler_tC045B41AD80060C4AE4527C98594D182D3ED42AA;
// Unity.Netcode.NetworkSceneManager/OnLoadDelegateHandler
struct OnLoadDelegateHandler_tA25126944392E242417AFECEB80F5E9C6A263202;
// Unity.Netcode.NetworkSceneManager/OnSynchronizeCompleteDelegateHandler
struct OnSynchronizeCompleteDelegateHandler_t17480B12CFFDA7CE8C4F94D1B146B665BB5B9DCF;
// Unity.Netcode.NetworkSceneManager/OnSynchronizeDelegateHandler
struct OnSynchronizeDelegateHandler_tDEACDFF8D665DB5C950FBF6B8585C8823D572059;
// Unity.Netcode.NetworkSceneManager/OnUnloadCompleteDelegateHandler
struct OnUnloadCompleteDelegateHandler_t1C2E9C9FDF4C111C76B308F23430139392F8FFB0;
// Unity.Netcode.NetworkSceneManager/OnUnloadDelegateHandler
struct OnUnloadDelegateHandler_tEC6E7C1D4559115F6519A7DF6CA2E7816A8C0AE5;
// Unity.Netcode.NetworkSceneManager/SceneEventDelegate
struct SceneEventDelegate_t82B37D5917AD9AA99F3226EE945D2EB2C0CD8DD1;
// Unity.Netcode.NetworkSceneManager/VerifySceneBeforeLoadingDelegateHandler
struct VerifySceneBeforeLoadingDelegateHandler_tEE61624D507F0E432B6F4EDD56EC0D213BFE2A4E;
// Unity.Netcode.NetworkSceneManager/VerifySceneBeforeUnloadingDelegateHandler
struct VerifySceneBeforeUnloadingDelegateHandler_t03E054BD51737F01541AB2368461EE061D68E4EC;
// Unity.Netcode.NetworkTransport/TransportEventDelegate
struct TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135;
// PlayerInputActions/IPlayerActions
struct IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1;
// ProjectileController/<ProjectileLifeTime>d__8
struct U3CProjectileLifeTimeU3Ed__8_t10F32EC3053882FD0D6923EF1650B43F69D2FD9D;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoinController_t235C3DF0755DD8275C06CCA8F5F5C0A41AE2781D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataObject_tCE3C7F1A26400A13D21A110FE0508CC2BA73AADD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0AC4B0264C90B43D2F1B3B68095F5A35E8750525_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE07B98951C528DCEC133D87CFB6966101285E71E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILobbyService_t4F07247F1A81F56EA2F668B1F9A7E89FD2239CD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JoinLobbyByCodeOptions_tF4262E7977AFCD63208DE6BF0D299E8B95727D85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LobbyServiceException_tF62E8385211176AE2293E3FD2C169ABDA3C85010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LobbyService_t64DAF17F1DA9F21F3CA655FB2D3A7E2484C15508_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnEventCompletedDelegateHandler_t95567703998423114BF49A290F181D1B8E6A2788_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerDataObject_t0D8F6C76C20CE409B0E408EB0394488F5236027B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene_t504D7CE0CD3B494AEBE040FA74242AC41DE1075B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CProjectileLifeTimeU3Ed__8_t10F32EC3053882FD0D6923EF1650B43F69D2FD9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t16ED08FBDF3B3496E4228001D49787220311E61F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdateLobbyOptions_t515C0450F4C550EDE74AF44D1707FFE282A64AF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06A3A357F4413F0528771B6F30BBACE1569A644A;
IL2CPP_EXTERN_C String_t* _stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4;
IL2CPP_EXTERN_C String_t* _stringLiteral07F29B0542766071331D57CAF586B479B0C6F6E7;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral2A72AEE32C5954FBA4C3036DB65C9BB95247A939;
IL2CPP_EXTERN_C String_t* _stringLiteral365A622C1D0761A5DFD0E0E9F6BAA2D68167EAE2;
IL2CPP_EXTERN_C String_t* _stringLiteral3E538D25AD88E153C305B95581F14918239F2431;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8;
IL2CPP_EXTERN_C String_t* _stringLiteral8C5DADC81836D86796D2CC7F7FAD03A93AEEE06F;
IL2CPP_EXTERN_C String_t* _stringLiteral8D593402CCA6ACC55AF9D86F83E9BF79C5A9C557;
IL2CPP_EXTERN_C String_t* _stringLiteral96CEA6866E95B3D0620B6EF1F0B0D7EC115733CD;
IL2CPP_EXTERN_C String_t* _stringLiteralA19C19949E879F4AF385F350A154ED75538FDBC7;
IL2CPP_EXTERN_C String_t* _stringLiteralAE339799EDC0226109A35BD2FF389B7E82437CD7;
IL2CPP_EXTERN_C String_t* _stringLiteralBEFD2F18E987512C30D83427DEF3E8980C4294D3;
IL2CPP_EXTERN_C String_t* _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6;
IL2CPP_EXTERN_C String_t* _stringLiteralE96AAD04643C8591B35162EA304C009F36B8BB46;
IL2CPP_EXTERN_C String_t* _stringLiteralEB876A663CDF50B1C84EE2F38A925B15FB3EC3B7;
IL2CPP_EXTERN_C String_t* _stringLiteralF08D7716E8F57D93888BA34EF203EB3C0D98C6BA;
IL2CPP_EXTERN_C String_t* _stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF;
IL2CPP_EXTERN_C String_t* _stringLiteralFF8C29CC08C940DE26E62C1566202CB777E95EFD;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54_mF6DADA7B53850BF4486E0C6768A6C26084DC006A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D_TisU3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8_m48B28DAA129ED629137F6F34582E81F154BEDC31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064_TisU3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88_m093DFD133BE4ED98165462BD5114A950CD2E0675_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m801E398CBD085A7776D3D65FC41964E98E05D281_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mD74F6D890D1EFF4CE1FCF1C872EA6602271D4598_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mDE77C042A6806DC351ADFFBD6E0EE04ECFF4763A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF239616FE7D98BF9C7A0A8B6E122346EA8D57D27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m096450B47F6859FC11E5F91433776513CADD67B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m4D5D65D3007290853274F8CD5164420B2F2A29E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m25C7244280E880F59DDB0490E1E12970D0E60680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mB4425F81BFE6999EF99DE881C195AE6992AE82DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88_m615F2F50A19DB1EE42E94CFD6B53D59B821154CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54_mA6BA30AF626F03009FB9FE08256C740321231FD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8_m47FD2E958A075B4D3922CD48900F063FE89246D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m0D74C088429D33A295E602DBD6F8F7A7B36EF300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mF0C064E600E18FBE8FA81DD1AC7BEE8378085860_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m75F7D31730CB28148C85E13421C8D44D67CACE56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_m53E5BAC13FE496C3537F605FF0E537B241AAB4E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_mE31ED9298D551C909C47806C1032918FDE6DAE2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_mD246729D9B70467A23435C77046DCEDABCC502D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_m8124AF5EA7DA5D1615D441A109977E96B7E72918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m00CB53425681B565CB81245094496AE2F5EA88CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92_mB3ABA98BFB7B92974000FE2DF6D3BA5324341386_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m2046D2DA08BDA9A7CF4B902A61F5F6317EABE9B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_mA2250A57A99A512CA0A508CE6633B39D3D861DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92_mB1D33F01D44F082F4D1BD036A5B9CDC76FBD6147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoinController___rpc_handler_690585775_m427CE6059C77130B594FAF8DF9E349D5434A6E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisHealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_m1EE2A09437E488BC853062A2307174FF6D00D0FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA243B5B805DDE48026D86330A634261C50989D6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA69276749EF73DFA40B6924A067B3F441359A9A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m85E18A57786A8B017E426523F856642EA45E0122_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9872C9FA5758C9E37E5177754842EB2DF6F96F5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m046F39774A960F8342F509030C7CC97BDD51B2A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8761EC13363DD95A743C1039E3A0ABDB58F384C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5345C129C7452F71CE15F31EAE87AA4D60730623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m64515856D986CB3D409426069FB04CFA32088962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAE34B9EED0C32D22BDEF9AAB85A24F44C2ED0C55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0AE002887C57BF00E27BDDC6B1D3A4CCDED75F2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7453D1E9C67DD9BE7E26D566498FF731DAA69C44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF80AD77E11742CEE46C977B72EABDC8669CA384A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m338AD6E2690E5B550328E99F97A5D3C00C3256C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA01CAE0908667A0B65004B670E671EB9007D60E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCE17733F5755DBD993FDF622E51430326E622BAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m75B00CC543B79B01824FFDFB32684BDEDDAC729D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDFA9B9ED9720515B9FCBBC0F6D35A1F9572CDCEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisHealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_m8EE3D342E3C341D21DDA142B3EA7515A604CEED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_m3DA67640691AB02BC82AC4FC9FB5F6E0A2E3EDB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HealthSystem___rpc_handler_3731048665_m213E0798D9EDA8A71E4E893E748F7F0D41251F5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9540FEA61598062A723F0D41A98EC628BE00BBD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m918B6424E64FD0AC28914AC99A6F25ECD1B28CA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m454705CBDA77D048B31C3DA323CF1050C68B9A24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9F32FF770A4A1F3DB0FE0F26D3DB4DDD4543A513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC9096B575C2C015F75F49B6C88ACC405946955B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mDC89155D172B221FCAD4C1AC5DB032A0D264D7FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mF0DC1699190D9A7F16C59F7015A582906F32B920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAA58FC3B6F845F58D6FC7B00824D538D5C716A03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerController_Shoot_performed_mA33F6EAD15428AEAE6DE64C790EF630C1F95F2A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerController___rpc_handler_1077261437_m04C1C86AF00F56DC939D3EC49BB3F852A57ADB72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerController___rpc_handler_3060464424_mBE3DB7129097DE9AA12299E32C342D81935B67FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerSpawner_ClientConnected_mFC044C2B7DF1C10263FCEDA1B9B69C72B6C3C215_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerSpawner_SceneLoaded_m41EA0CC8DE6C2CE367640754FC6F4A3A84B826D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProjectileController___rpc_handler_2595083450_mFC03DB0358F78850D3696D94737C116642A84DB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScoreManager___rpc_handler_2242154372_mDC904EB1505B2AD42059C0281A6A2D8D8B92C99E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m14C87DCCDD83A0D46087BADE40E9DB29D574BF0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m51425551EA802FC593AA4584F04C3458AEC6EC9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m51A92311D3774AA6816FBCE3A76D255D13A0CB9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m9711D191C6A3EB3886BBA11822AC0384188C1751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m21C14D8866EDB1A215DB500426037F27C2E4D833_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m27B2F6175FF5AFC0486212632A79556399CA6B7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m33FB81ED48D176A4BB167BA9C9ED52D6CB8C53F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m674F4EA58E107D380064CD33B2019F20096B4B71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m2C8628CE07135D4675ED0A27F632652572D0D92B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m3063B5DDFA87B3DD52F9BF2867E39F1C8C6D5964_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m3FB42C716CEC5AA7A9ED19066184B5A1CF3D65A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mF4799A95907ED44730FB988294CED3E92C5F0659_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CProjectileLifeTimeU3Ed__8_System_Collections_IEnumerator_Reset_mDA73E6192913F2520E9EF044276E40D9FBCEDFE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__6_0_mB8AC00E7D7AD18F8C3E32BA175C6C69D79C73E52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CLoadNetworkU3Eb__0_m807E625664DFE827767F85C68CC023A566CF3FD1_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

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

// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.DataObject>
struct Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB468EA3F98DA1289288FE6E32F40161DD3A98FC8* ____entries_1;
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
	KeyCollection_t24319105B60039A6A24E317A725B7C9961C2BC71* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6311BE2478C0D4EEB35CBC79674501A34BA866D9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.PlayerDataObject>
struct Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4A70FF623EFE1419D64F49825062DE03ADBE00AB* ____entries_1;
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
	KeyCollection_t922A75677241CFC2F7268601169E72CD35CCFDE6* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA2C6C8F04ECFEB9F1722C1E181B37C89E8D0ACE8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t13B5F17F7C1B328C6B687BAECF4A5B17473E98ED* ____entries_1;
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
	KeyCollection_t828BE28B5AD4F3C0D8AE018C5D91252F5D272E6B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF46BA59A103BBCF077A2A7517084776F6CDD8283* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Unity.Services.Lobbies.Models.Lobby>
struct List_1_t2042FCDC35CA07B523474220DF460A1A043B4C9D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LobbyU5BU5D_t6BD2356E4DC8A014F321DFF9BC6BB753D273E3EE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2042FCDC35CA07B523474220DF460A1A043B4C9D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LobbyU5BU5D_t6BD2356E4DC8A014F321DFF9BC6BB753D273E3EE* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<Unity.Services.Lobbies.Models.Player>
struct List_1_tA417A94B122547E4DD22BF1528BDCDF1DB2FAFE0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PlayerU5BU5D_tE0AD27E093E2FB3FC07FE5A0595FCE33B9A9314A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA417A94B122547E4DD22BF1528BDCDF1DB2FAFE0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PlayerU5BU5D_tE0AD27E093E2FB3FC07FE5A0595FCE33B9A9314A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<PlayerInputActions/IPlayerActions>
struct List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IPlayerActionsU5BU5D_t0E35140ACDD64744855EC437CA39DE26100D940E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IPlayerActionsU5BU5D_t0E35140ACDD64744855EC437CA39DE26100D940E* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Unity.Services.Lobbies.Models.DataObject
struct DataObject_tCE3C7F1A26400A13D21A110FE0508CC2BA73AADD  : public RuntimeObject
{
	// System.String Unity.Services.Lobbies.Models.DataObject::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_0;
	// Unity.Services.Lobbies.Models.DataObject/VisibilityOptions Unity.Services.Lobbies.Models.DataObject::<Visibility>k__BackingField
	int32_t ___U3CVisibilityU3Ek__BackingField_1;
	// Unity.Services.Lobbies.Models.DataObject/IndexOptions Unity.Services.Lobbies.Models.DataObject::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_2;
};

// Unity.Services.Lobbies.JoinLobbyByCodeOptions
struct JoinLobbyByCodeOptions_tF4262E7977AFCD63208DE6BF0D299E8B95727D85  : public RuntimeObject
{
	// Unity.Services.Lobbies.Models.Player Unity.Services.Lobbies.JoinLobbyByCodeOptions::<Player>k__BackingField
	Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* ___U3CPlayerU3Ek__BackingField_0;
};

// Unity.Services.Lobbies.JoinLobbyByIdOptions
struct JoinLobbyByIdOptions_t1A6DEED90A8972855551A6F27C798C86CA121BD2  : public RuntimeObject
{
	// Unity.Services.Lobbies.Models.Player Unity.Services.Lobbies.JoinLobbyByIdOptions::<Player>k__BackingField
	Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* ___U3CPlayerU3Ek__BackingField_0;
};

// Loader
struct Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8  : public RuntimeObject
{
};

struct Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8_StaticFields
{
	// Loader/Scene Loader::targetScene
	int32_t ___targetScene_0;
	// System.Action Loader::onLoaderCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onLoaderCallback_1;
};

// Unity.Services.Lobbies.Models.PlayerDataObject
struct PlayerDataObject_t0D8F6C76C20CE409B0E408EB0394488F5236027B  : public RuntimeObject
{
	// System.String Unity.Services.Lobbies.Models.PlayerDataObject::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_0;
	// Unity.Services.Lobbies.Models.PlayerDataObject/VisibilityOptions Unity.Services.Lobbies.Models.PlayerDataObject::<Visibility>k__BackingField
	int32_t ___U3CVisibilityU3Ek__BackingField_1;
};

// PlayerInputActions
struct PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694  : public RuntimeObject
{
	// UnityEngine.InputSystem.InputActionAsset PlayerInputActions::<asset>k__BackingField
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap PlayerInputActions::m_Player
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_Player_1;
	// System.Collections.Generic.List`1<PlayerInputActions/IPlayerActions> PlayerInputActions::m_PlayerActionsCallbackInterfaces
	List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E* ___m_PlayerActionsCallbackInterfaces_2;
	// UnityEngine.InputSystem.InputAction PlayerInputActions::m_Player_Movement
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Player_Movement_3;
	// UnityEngine.InputSystem.InputAction PlayerInputActions::m_Player_Rotation
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Player_Rotation_4;
	// UnityEngine.InputSystem.InputAction PlayerInputActions::m_Player_Shoot
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Player_Shoot_5;
};

// Unity.Services.Lobbies.QueryLobbiesOptions
struct QueryLobbiesOptions_t7D1B98D68E413D43AA89E1F409EBEDAB5F174F23  : public RuntimeObject
{
	// System.Int32 Unity.Services.Lobbies.QueryLobbiesOptions::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_0;
	// System.Int32 Unity.Services.Lobbies.QueryLobbiesOptions::<Skip>k__BackingField
	int32_t ___U3CSkipU3Ek__BackingField_1;
	// System.Boolean Unity.Services.Lobbies.QueryLobbiesOptions::<SampleResults>k__BackingField
	bool ___U3CSampleResultsU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Unity.Services.Lobbies.Models.QueryFilter> Unity.Services.Lobbies.QueryLobbiesOptions::<Filters>k__BackingField
	List_1_t6A7ED0FC48EFCA947C17ED522078C7357C46B212* ___U3CFiltersU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<Unity.Services.Lobbies.Models.QueryOrder> Unity.Services.Lobbies.QueryLobbiesOptions::<Order>k__BackingField
	List_1_t264A2143C0705ECBF085276C402DB8142637E59B* ___U3COrderU3Ek__BackingField_4;
	// System.String Unity.Services.Lobbies.QueryLobbiesOptions::<ContinuationToken>k__BackingField
	String_t* ___U3CContinuationTokenU3Ek__BackingField_5;
};

// Unity.Services.Lobbies.Models.QueryResponse
struct QueryResponse_tB3161BB8C249085FF9A3289A155FDDE1B30373A6  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Unity.Services.Lobbies.Models.Lobby> Unity.Services.Lobbies.Models.QueryResponse::<Results>k__BackingField
	List_1_t2042FCDC35CA07B523474220DF460A1A043B4C9D* ___U3CResultsU3Ek__BackingField_0;
	// System.String Unity.Services.Lobbies.Models.QueryResponse::<ContinuationToken>k__BackingField
	String_t* ___U3CContinuationTokenU3Ek__BackingField_1;
};

// Unity.Services.Authentication.SignInOptions
struct SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291  : public RuntimeObject
{
	// System.Boolean Unity.Services.Authentication.SignInOptions::<CreateAccount>k__BackingField
	bool ___U3CCreateAccountU3Ek__BackingField_0;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
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

// Loader/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t16ED08FBDF3B3496E4228001D49787220311E61F  : public RuntimeObject
{
	// Loader/Scene Loader/<>c__DisplayClass3_0::targetScene
	int32_t ___targetScene_0;
};

// LobbyManager/<>c
struct U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7  : public RuntimeObject
{
};

struct U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_StaticFields
{
	// LobbyManager/<>c LobbyManager/<>c::<>9
	U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7* ___U3CU3E9_0;
	// System.Action LobbyManager/<>c::<>9__6_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__6_0_1;
};

// ProjectileController/<ProjectileLifeTime>d__8
struct U3CProjectileLifeTimeU3Ed__8_t10F32EC3053882FD0D6923EF1650B43F69D2FD9D  : public RuntimeObject
{
	// System.Int32 ProjectileController/<ProjectileLifeTime>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ProjectileController/<ProjectileLifeTime>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single ProjectileController/<ProjectileLifeTime>d__8::time
	float ___time_2;
	// ProjectileController ProjectileController/<ProjectileLifeTime>d__8::<>4__this
	ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* ___U3CU3E4__this_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Lobbies.Models.Lobby>
struct Enumerator_t62A7CDD4452EE9AC00A96983754D89E36D8D2C30 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t2042FCDC35CA07B523474220DF460A1A043B4C9D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Lobbies.Models.Player>
struct Enumerator_t0FEC0E0A721A10CF74B8FB9621F24754A0D55B15 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA417A94B122547E4DD22BF1528BDCDF1DB2FAFE0* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<PlayerInputActions/IPlayerActions>
struct Enumerator_tA8F639E63A7CB78C8A3AB38721F85DECCD73272B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Int64>
struct NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Networking.Transport.NetworkPipelineStage>
struct NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.UInt32>
struct Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint32_t ___value_1;
};

// System.Nullable`1<System.UInt64>
struct Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint64_t ___value_1;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>
struct ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
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

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.Allocation>
struct TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.JoinAllocation>
struct TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Lobbies.Models.Lobby>
struct TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t14D07ED713222B97E440F98F73CDA5AD1534DDD1* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Lobbies.Models.QueryResponse>
struct TaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tE9AEBB5E01E6AE360BD0305D0AE3A6756F3C81F2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_0;
};

// System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.Allocation>
struct Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* ___m_result_22;
};

struct Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t71911D19BDC8CCC1B4259616223540952640D028* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.JoinAllocation>
struct Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* ___m_result_22;
};

struct Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tB8E1155F824A4E3EDE35919801D9EC3CBAD71ADE* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Unity.Services.Lobbies.Models.Lobby>
struct Task_1_t14D07ED713222B97E440F98F73CDA5AD1534DDD1  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* ___m_result_22;
};

struct Task_1_t14D07ED713222B97E440F98F73CDA5AD1534DDD1_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t67ACBA2CAEA8175DF85D1A91EBCE42EFF928CED8* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Unity.Services.Lobbies.Models.QueryResponse>
struct Task_1_tE9AEBB5E01E6AE360BD0305D0AE3A6756F3C81F2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	QueryResponse_tB3161BB8C249085FF9A3289A155FDDE1B30373A6* ___m_result_22;
};

struct Task_1_tE9AEBB5E01E6AE360BD0305D0AE3A6756F3C81F2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tC48165FF694C6DF78BAFFFBBC24134931614D7B3* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;
};

struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_23;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Unity.Netcode.ClientRpcReceiveParams
struct ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A 
{
	union
	{
		struct
		{
		};
		uint8_t ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A__padding[1];
	};
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// Unity.Netcode.FastBufferReader
struct FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 
{
	// Unity.Netcode.FastBufferReader/ReaderHandle* Unity.Netcode.FastBufferReader::Handle
	ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* ___Handle_0;
};

// Unity.Netcode.FastBufferWriter
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC 
{
	// Unity.Netcode.FastBufferWriter/WriterHandle* Unity.Netcode.FastBufferWriter::Handle
	WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* ___Handle_0;
};

struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticFields
{
	// System.Byte[] Unity.Netcode.FastBufferWriter::s_ByteArrayCache
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_ByteArrayCache_1;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// Unity.Networking.Transport.NetworkConfigParameter
struct NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D 
{
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::connectTimeoutMS
	int32_t ___connectTimeoutMS_0;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::maxConnectAttempts
	int32_t ___maxConnectAttempts_1;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::disconnectTimeoutMS
	int32_t ___disconnectTimeoutMS_2;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::heartbeatTimeoutMS
	int32_t ___heartbeatTimeoutMS_3;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::maxFrameTimeMS
	int32_t ___maxFrameTimeMS_4;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::fixedFrameTimeMS
	int32_t ___fixedFrameTimeMS_5;
};

// Unity.Networking.Transport.NetworkDataStreamParameter
struct NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA 
{
	// System.Int32 Unity.Networking.Transport.NetworkDataStreamParameter::size
	int32_t ___size_1;
};

// Unity.Networking.Transport.NetworkPipeline
struct NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 
{
	// System.Int32 Unity.Networking.Transport.NetworkPipeline::Id
	int32_t ___Id_0;
};

// PlayerData
struct PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A 
{
	// System.UInt64 PlayerData::clientId
	uint64_t ___clientId_0;
	// System.String PlayerData::<playerName>k__BackingField
	String_t* ___U3CplayerNameU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of PlayerData
struct PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_marshaled_pinvoke
{
	uint64_t ___clientId_0;
	char* ___U3CplayerNameU3Ek__BackingField_1;
};
// Native definition for COM marshalling of PlayerData
struct PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_marshaled_com
{
	uint64_t ___clientId_0;
	Il2CppChar* ___U3CplayerNameU3Ek__BackingField_1;
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

// Unity.Mathematics.Random
struct Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37 
{
	// System.UInt32 Unity.Mathematics.Random::state
	uint32_t ___state_0;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// Unity.Netcode.ServerRpcReceiveParams
struct ServerRpcReceiveParams_t13F450FA39CB2BE6C1DB10FFDC686A89EFC4EF95 
{
	// System.UInt64 Unity.Netcode.ServerRpcReceiveParams::SenderClientId
	uint64_t ___SenderClientId_0;
};

// Unity.Netcode.ServerRpcSendParams
struct ServerRpcSendParams_tD31A53960AABCA57F6D16BADB576E7DA50D50A4A 
{
	union
	{
		struct
		{
		};
		uint8_t ServerRpcSendParams_tD31A53960AABCA57F6D16BADB576E7DA50D50A4A__padding[1];
	};
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// Unity.Collections.AllocatorManager/AllocatorHandle
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Index
	uint16_t ___Index_0;
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Version
	uint16_t ___Version_1;
};

// Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress
struct Baselib_NetworkAddress_t2F4AF92B4EEFE31182BADF512CA004AFF48128E0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data0
			uint8_t ___data0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___data0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data1_1_OffsetPadding[1];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data1
			uint8_t ___data1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___data1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data2_2_OffsetPadding[2];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data2
			uint8_t ___data2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___data2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data3_3_OffsetPadding[3];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data3
			uint8_t ___data3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___data3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data4_4_OffsetPadding[4];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data4
			uint8_t ___data4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___data4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data5_5_OffsetPadding[5];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data5
			uint8_t ___data5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___data5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data6_6_OffsetPadding[6];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data6
			uint8_t ___data6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___data6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data7_7_OffsetPadding[7];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data7
			uint8_t ___data7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___data7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data8_8_OffsetPadding[8];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data8
			uint8_t ___data8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___data8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data9_9_OffsetPadding[9];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data9
			uint8_t ___data9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___data9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data10_10_OffsetPadding[10];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data10
			uint8_t ___data10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___data10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data11_11_OffsetPadding[11];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data11
			uint8_t ___data11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___data11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data12_12_OffsetPadding[12];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data12
			uint8_t ___data12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___data12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data13_13_OffsetPadding[13];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data13
			uint8_t ___data13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___data13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data14_14_OffsetPadding[14];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data14
			uint8_t ___data14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___data14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data15_15_OffsetPadding[15];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data15
			uint8_t ___data15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___data15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_0
			uint8_t ___ipv6_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___ipv6_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_1_17_OffsetPadding[1];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_1
			uint8_t ___ipv6_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_1_17_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___ipv6_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_2_18_OffsetPadding[2];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_2
			uint8_t ___ipv6_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_2_18_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___ipv6_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_3_19_OffsetPadding[3];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_3
			uint8_t ___ipv6_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_3_19_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___ipv6_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_4_20_OffsetPadding[4];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_4
			uint8_t ___ipv6_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_4_20_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___ipv6_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_5_21_OffsetPadding[5];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_5
			uint8_t ___ipv6_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_5_21_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___ipv6_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_6_22_OffsetPadding[6];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_6
			uint8_t ___ipv6_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_6_22_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___ipv6_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_7_23_OffsetPadding[7];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_7
			uint8_t ___ipv6_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_7_23_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___ipv6_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_8_24_OffsetPadding[8];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_8
			uint8_t ___ipv6_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_8_24_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___ipv6_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_9_25_OffsetPadding[9];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_9
			uint8_t ___ipv6_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_9_25_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___ipv6_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_10_26_OffsetPadding[10];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_10
			uint8_t ___ipv6_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_10_26_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___ipv6_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_11_27_OffsetPadding[11];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_11
			uint8_t ___ipv6_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_11_27_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___ipv6_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_12_28_OffsetPadding[12];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_12
			uint8_t ___ipv6_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_12_28_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___ipv6_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_13_29_OffsetPadding[13];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_13
			uint8_t ___ipv6_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_13_29_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___ipv6_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_14_30_OffsetPadding[14];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_14
			uint8_t ___ipv6_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_14_30_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___ipv6_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_15_31_OffsetPadding[15];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_15
			uint8_t ___ipv6_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_15_31_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___ipv6_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_0
			uint8_t ___ipv4_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___ipv4_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_1_33_OffsetPadding[1];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_1
			uint8_t ___ipv4_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_1_33_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___ipv4_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_2_34_OffsetPadding[2];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_2
			uint8_t ___ipv4_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_2_34_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___ipv4_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_3_35_OffsetPadding[3];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_3
			uint8_t ___ipv4_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_3_35_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___ipv4_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___port0_36_OffsetPadding[16];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::port0
			uint8_t ___port0_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___port0_36_OffsetPadding_forAlignmentOnly[16];
			uint8_t ___port0_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___port1_37_OffsetPadding[17];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::port1
			uint8_t ___port1_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___port1_37_OffsetPadding_forAlignmentOnly[17];
			uint8_t ___port1_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___family_38_OffsetPadding[18];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::family
			uint8_t ___family_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___family_38_OffsetPadding_forAlignmentOnly[18];
			uint8_t ___family_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____padding_39_OffsetPadding[19];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::_padding
			uint8_t ____padding_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____padding_39_OffsetPadding_forAlignmentOnly[19];
			uint8_t ____padding_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_scope_id_40_OffsetPadding[20];
			// System.UInt32 Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_scope_id
			uint32_t ___ipv6_scope_id_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_scope_id_40_OffsetPadding_forAlignmentOnly[20];
			uint32_t ___ipv6_scope_id_40_forAlignmentOnly;
		};
	};
};

// Unity.Netcode.FastBufferReader/ReaderHandle
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8 
{
	// System.Byte* Unity.Netcode.FastBufferReader/ReaderHandle::BufferPointer
	uint8_t* ___BufferPointer_0;
	// System.Int32 Unity.Netcode.FastBufferReader/ReaderHandle::Position
	int32_t ___Position_1;
	// System.Int32 Unity.Netcode.FastBufferReader/ReaderHandle::Length
	int32_t ___Length_2;
	// Unity.Collections.Allocator Unity.Netcode.FastBufferReader/ReaderHandle::Allocator
	int32_t ___Allocator_3;
};

// Unity.Netcode.FastBufferWriter/ForPrimitives
struct ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 
{
	union
	{
		struct
		{
		};
		uint8_t ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292__padding[1];
	};
};

// Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6 
{
	// System.Byte* Unity.Netcode.FastBufferWriter/WriterHandle::BufferPointer
	uint8_t* ___BufferPointer_0;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Position
	int32_t ___Position_1;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Length
	int32_t ___Length_2;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Capacity
	int32_t ___Capacity_3;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::MaxCapacity
	int32_t ___MaxCapacity_4;
	// Unity.Collections.Allocator Unity.Netcode.FastBufferWriter/WriterHandle::Allocator
	int32_t ___Allocator_5;
	// System.Boolean Unity.Netcode.FastBufferWriter/WriterHandle::BufferGrew
	bool ___BufferGrew_6;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_pinvoke
{
	uint8_t* ___BufferPointer_0;
	int32_t ___Position_1;
	int32_t ___Length_2;
	int32_t ___Capacity_3;
	int32_t ___MaxCapacity_4;
	int32_t ___Allocator_5;
	int32_t ___BufferGrew_6;
};
// Native definition for COM marshalling of Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_com
{
	uint8_t* ___BufferPointer_0;
	int32_t ___Position_1;
	int32_t ___Length_2;
	int32_t ___Capacity_3;
	int32_t ___MaxCapacity_4;
	int32_t ___Allocator_5;
	int32_t ___BufferGrew_6;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E 
{
	// System.Boolean UnityEngine.InputSystem.InputActionMap/DeviceArray::m_HaveValue
	bool ___m_HaveValue_0;
	// System.Int32 UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceCount
	int32_t ___m_DeviceCount_1;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceArray
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_pinvoke
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_com
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};

// PlayerInputActions/PlayerActions
struct PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C 
{
	// PlayerInputActions PlayerInputActions/PlayerActions::m_Wrapper
	PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* ___m_Wrapper_0;
};
// Native definition for P/Invoke marshalling of PlayerInputActions/PlayerActions
struct PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C_marshaled_pinvoke
{
	PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* ___m_Wrapper_0;
};
// Native definition for COM marshalling of PlayerInputActions/PlayerActions
struct PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C_marshaled_com
{
	PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* ___m_Wrapper_0;
};

// Unity.Networking.Transport.Relay.RelayAllocationId/<Value>e__FixedBuffer
struct U3CValueU3Ee__FixedBuffer_t0E279F5AD765D68C7D3ADB57B98FD471710955C8 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Relay.RelayAllocationId/<Value>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t0E279F5AD765D68C7D3ADB57B98FD471710955C8__padding[16];
	};
};

// Unity.Networking.Transport.Relay.RelayConnectionData/<Value>e__FixedBuffer
struct U3CValueU3Ee__FixedBuffer_t2EBBD6566B9DD8EF0CBC9EF9A9340955B5792054 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Relay.RelayConnectionData/<Value>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t2EBBD6566B9DD8EF0CBC9EF9A9340955B5792054__padding[255];
	};
};

// Unity.Networking.Transport.Relay.RelayHMACKey/<Value>e__FixedBuffer
struct U3CValueU3Ee__FixedBuffer_t3C8B36A587C8DE2573C0B7FD1CBD94E571B38A67 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Relay.RelayHMACKey/<Value>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t3C8B36A587C8DE2573C0B7FD1CBD94E571B38A67__padding[64];
	};
};

// Unity.Networking.Transport.Relay.RelayServerData/<HMAC>e__FixedBuffer
struct U3CHMACU3Ee__FixedBuffer_tEBE6EB5356C21D7CDAA77E2AB69381855EAD9816 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Relay.RelayServerData/<HMAC>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CHMACU3Ee__FixedBuffer_tEBE6EB5356C21D7CDAA77E2AB69381855EAD9816__padding[32];
	};
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

// Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
struct ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 
{
	// System.String Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::Address
	String_t* ___Address_0;
	// System.UInt16 Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::Port
	uint16_t ___Port_1;
	// System.String Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::ServerListenAddress
	String_t* ___ServerListenAddress_2;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
struct ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_pinvoke
{
	char* ___Address_0;
	uint16_t ___Port_1;
	char* ___ServerListenAddress_2;
};
// Native definition for COM marshalling of Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
struct ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_com
{
	Il2CppChar* ___Address_0;
	uint16_t ___Port_1;
	Il2CppChar* ___ServerListenAddress_2;
};

// Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache
struct PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7 
{
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache::PacketsReceived
	int32_t ___PacketsReceived_0;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache::PacketsDropped
	int32_t ___PacketsDropped_1;
	// System.Single Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache::PacketLoss
	float ___PacketLoss_2;
};

// Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters
struct SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67 
{
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters::PacketDelayMS
	int32_t ___PacketDelayMS_0;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters::PacketJitterMS
	int32_t ___PacketJitterMS_1;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters::PacketDropRate
	int32_t ___PacketDropRate_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.Allocation>
struct AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.JoinAllocation>
struct AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>
struct AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___s_defaultResultTask_0;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>
struct FunctionPointer_1_tF29FF6D2564E315434ED47AB1554C8096BDB3B3A 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>
struct FunctionPointer_1_t8C37DE1737CA4B219489A8BE872435F8391F4F08 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>
struct FunctionPointer_1_t2B11019D68001BBA761F297DF394B647E9B2D0AF 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>
struct FunctionPointer_1_tE199B9295009A8E22A29B6DDD22ED499A663A39B 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>
struct FunctionPointer_1_t04915FE164A4EB6B97CE508C2D62CCB1830EDD86 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>
struct FunctionPointer_1_t10B538976246CA89EE16B10A9A3F981194F98C59 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>
struct FunctionPointer_1_t87DC6AA7478438FC2A893CEFC30932DB880EECFE 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>
struct FunctionPointer_1_t92B1E9993FD30276E18F8D355C528D0024CE9CEF 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>
struct FunctionPointer_1_t646F6606413775C943F0F4782FBB82DED8FB3123 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>
struct FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>
struct FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>
struct FunctionPointer_1_tD15B3870776AA5A42DBB36B9CCA6AA930B9628DE 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Collections.NativeList`1<System.Byte>
struct NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<System.Int32>
struct NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkEvent>
struct NativeList_1_t163E4B6B8B23750406A8688DA1D7FD433EF9EDC1 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_tFD7DB6B00333C2C114D553F48DA91C512E033F99* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkDriver/Connection>
struct NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_tF90CD1BACB3990B533D04C98C2C90161BD7F9C20* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/PipelineImpl>
struct NativeList_1_t7D0C4FADF421E663CFE4731E9B320F919701A66C 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t557C9C31121D73D732851DA0465D2D22CFFBF099* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline>
struct NativeList_1_t1869FE735F5176A07019C960A26F7477BA6142B3 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t5D77D9399869F973DD7861206FE7B0BB5254BEDA* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeQueue`1<System.Int32>
struct NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A 
{
	// Unity.Collections.NativeQueueData* Unity.Collections.NativeQueue`1::m_Buffer
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___m_Buffer_0;
	// Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueue`1::m_QueuePool
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___m_QueuePool_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeQueue`1::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.QueuedSendMessage>
struct NativeQueue_1_t6F98B587B9BF83745B5D350CBDB27E86744FB2A1 
{
	// Unity.Collections.NativeQueueData* Unity.Collections.NativeQueue`1::m_Buffer
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___m_Buffer_0;
	// Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueue`1::m_QueuePool
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___m_QueuePool_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeQueue`1::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.NetworkEventQueue/SubQueueItem>
struct NativeQueue_1_t1998FE7B3590BD3E5658462E15CDFDC7E946B3F8 
{
	// Unity.Collections.NativeQueueData* Unity.Collections.NativeQueue`1::m_Buffer
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___m_Buffer_0;
	// Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueue`1::m_QueuePool
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___m_QueuePool_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeQueue`1::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline>
struct NativeQueue_1_t3C5DFC28122633C8F672980038A79B3B7D26790A 
{
	// Unity.Collections.NativeQueueData* Unity.Collections.NativeQueue`1::m_Buffer
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___m_Buffer_0;
	// Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueue`1::m_QueuePool
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___m_QueuePool_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeQueue`1::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeReference`1<System.Int32>
struct NativeReference_1_t142B519FC6820DE38579CF6960317C3BF6EA7EAE 
{
	// System.Void* Unity.Collections.NativeReference`1::m_Data
	void* ___m_Data_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeReference`1::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_1;
};

// System.Nullable`1<Unity.Collections.NativeArray`1<System.UInt64>>
struct Nullable_1_tABEB3B55130E30F5C126E7166574311CECAF7CF1 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>
struct Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
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

// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<System.Int64,Unity.Networking.Transport.NetworkSettings/ParameterSlice>
struct UnsafeHashMap_2_tF7A9469DA8C5BBA8B491A7436DE7FD6D75DE130B 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData* Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::m_Buffer
	UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___m_Buffer_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_1;
};

// Unity.Services.Relay.Models.Allocation
struct Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430  : public RuntimeObject
{
	// System.Guid Unity.Services.Relay.Models.Allocation::<AllocationId>k__BackingField
	Guid_t ___U3CAllocationIdU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Unity.Services.Relay.Models.RelayServerEndpoint> Unity.Services.Relay.Models.Allocation::<ServerEndpoints>k__BackingField
	List_1_t2312067CBBF8C43EDBB74AEE23EC8CE452741A8D* ___U3CServerEndpointsU3Ek__BackingField_1;
	// Unity.Services.Relay.Models.RelayServer Unity.Services.Relay.Models.Allocation::<RelayServer>k__BackingField
	RelayServer_t3EB847F796BBD0BE8103D521AD1DBB4FA60D4505* ___U3CRelayServerU3Ek__BackingField_2;
	// System.Byte[] Unity.Services.Relay.Models.Allocation::<Key>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CKeyU3Ek__BackingField_3;
	// System.Byte[] Unity.Services.Relay.Models.Allocation::<ConnectionData>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CConnectionDataU3Ek__BackingField_4;
	// System.Byte[] Unity.Services.Relay.Models.Allocation::<AllocationIdBytes>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CAllocationIdBytesU3Ek__BackingField_5;
	// System.String Unity.Services.Relay.Models.Allocation::<Region>k__BackingField
	String_t* ___U3CRegionU3Ek__BackingField_6;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// Unity.Services.Lobbies.CreateLobbyOptions
struct CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46  : public RuntimeObject
{
	// System.Nullable`1<System.Boolean> Unity.Services.Lobbies.CreateLobbyOptions::<IsPrivate>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CIsPrivateU3Ek__BackingField_0;
	// Unity.Services.Lobbies.Models.Player Unity.Services.Lobbies.CreateLobbyOptions::<Player>k__BackingField
	Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* ___U3CPlayerU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.DataObject> Unity.Services.Lobbies.CreateLobbyOptions::<Data>k__BackingField
	Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E* ___U3CDataU3Ek__BackingField_2;
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

// Unity.Services.Relay.Models.JoinAllocation
struct JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A  : public RuntimeObject
{
	// System.Guid Unity.Services.Relay.Models.JoinAllocation::<AllocationId>k__BackingField
	Guid_t ___U3CAllocationIdU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Unity.Services.Relay.Models.RelayServerEndpoint> Unity.Services.Relay.Models.JoinAllocation::<ServerEndpoints>k__BackingField
	List_1_t2312067CBBF8C43EDBB74AEE23EC8CE452741A8D* ___U3CServerEndpointsU3Ek__BackingField_1;
	// Unity.Services.Relay.Models.RelayServer Unity.Services.Relay.Models.JoinAllocation::<RelayServer>k__BackingField
	RelayServer_t3EB847F796BBD0BE8103D521AD1DBB4FA60D4505* ___U3CRelayServerU3Ek__BackingField_2;
	// System.Byte[] Unity.Services.Relay.Models.JoinAllocation::<Key>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CKeyU3Ek__BackingField_3;
	// System.Byte[] Unity.Services.Relay.Models.JoinAllocation::<ConnectionData>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CConnectionDataU3Ek__BackingField_4;
	// System.Byte[] Unity.Services.Relay.Models.JoinAllocation::<AllocationIdBytes>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CAllocationIdBytesU3Ek__BackingField_5;
	// System.String Unity.Services.Relay.Models.JoinAllocation::<Region>k__BackingField
	String_t* ___U3CRegionU3Ek__BackingField_6;
	// System.Byte[] Unity.Services.Relay.Models.JoinAllocation::<HostConnectionData>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CHostConnectionDataU3Ek__BackingField_7;
};

// Unity.Services.Lobbies.Models.Lobby
struct Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C  : public RuntimeObject
{
	// System.String Unity.Services.Lobbies.Models.Lobby::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Services.Lobbies.Models.Lobby::<LobbyCode>k__BackingField
	String_t* ___U3CLobbyCodeU3Ek__BackingField_1;
	// System.String Unity.Services.Lobbies.Models.Lobby::<Upid>k__BackingField
	String_t* ___U3CUpidU3Ek__BackingField_2;
	// System.String Unity.Services.Lobbies.Models.Lobby::<EnvironmentId>k__BackingField
	String_t* ___U3CEnvironmentIdU3Ek__BackingField_3;
	// System.String Unity.Services.Lobbies.Models.Lobby::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_4;
	// System.Int32 Unity.Services.Lobbies.Models.Lobby::<MaxPlayers>k__BackingField
	int32_t ___U3CMaxPlayersU3Ek__BackingField_5;
	// System.Int32 Unity.Services.Lobbies.Models.Lobby::<AvailableSlots>k__BackingField
	int32_t ___U3CAvailableSlotsU3Ek__BackingField_6;
	// System.Boolean Unity.Services.Lobbies.Models.Lobby::<IsPrivate>k__BackingField
	bool ___U3CIsPrivateU3Ek__BackingField_7;
	// System.Boolean Unity.Services.Lobbies.Models.Lobby::<IsLocked>k__BackingField
	bool ___U3CIsLockedU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<Unity.Services.Lobbies.Models.Player> Unity.Services.Lobbies.Models.Lobby::<Players>k__BackingField
	List_1_tA417A94B122547E4DD22BF1528BDCDF1DB2FAFE0* ___U3CPlayersU3Ek__BackingField_9;
	// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.DataObject> Unity.Services.Lobbies.Models.Lobby::<Data>k__BackingField
	Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E* ___U3CDataU3Ek__BackingField_10;
	// System.String Unity.Services.Lobbies.Models.Lobby::<HostId>k__BackingField
	String_t* ___U3CHostIdU3Ek__BackingField_11;
	// System.DateTime Unity.Services.Lobbies.Models.Lobby::<Created>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CCreatedU3Ek__BackingField_12;
	// System.DateTime Unity.Services.Lobbies.Models.Lobby::<LastUpdated>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CLastUpdatedU3Ek__BackingField_13;
};

// Unity.Networking.Transport.NetworkEndPoint
struct NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 
{
	// Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress Unity.Networking.Transport.NetworkEndPoint::rawNetworkAddress
	Baselib_NetworkAddress_t2F4AF92B4EEFE31182BADF512CA004AFF48128E0 ___rawNetworkAddress_5;
};

struct NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_StaticFields
{
	// System.Boolean Unity.Networking.Transport.NetworkEndPoint::IsLittleEndian
	bool ___IsLittleEndian_4;
};

// Unity.Netcode.NetworkSceneManager
struct NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC  : public RuntimeObject
{
	// System.Boolean Unity.Netcode.NetworkSceneManager::m_IsSceneEventActive
	bool ___m_IsSceneEventActive_3;
	// Unity.Netcode.NetworkSceneManager/SceneEventDelegate Unity.Netcode.NetworkSceneManager::OnSceneEvent
	SceneEventDelegate_t82B37D5917AD9AA99F3226EE945D2EB2C0CD8DD1* ___OnSceneEvent_4;
	// Unity.Netcode.NetworkSceneManager/OnLoadDelegateHandler Unity.Netcode.NetworkSceneManager::OnLoad
	OnLoadDelegateHandler_tA25126944392E242417AFECEB80F5E9C6A263202* ___OnLoad_5;
	// Unity.Netcode.NetworkSceneManager/OnUnloadDelegateHandler Unity.Netcode.NetworkSceneManager::OnUnload
	OnUnloadDelegateHandler_tEC6E7C1D4559115F6519A7DF6CA2E7816A8C0AE5* ___OnUnload_6;
	// Unity.Netcode.NetworkSceneManager/OnSynchronizeDelegateHandler Unity.Netcode.NetworkSceneManager::OnSynchronize
	OnSynchronizeDelegateHandler_tDEACDFF8D665DB5C950FBF6B8585C8823D572059* ___OnSynchronize_7;
	// Unity.Netcode.NetworkSceneManager/OnEventCompletedDelegateHandler Unity.Netcode.NetworkSceneManager::OnLoadEventCompleted
	OnEventCompletedDelegateHandler_t95567703998423114BF49A290F181D1B8E6A2788* ___OnLoadEventCompleted_8;
	// Unity.Netcode.NetworkSceneManager/OnEventCompletedDelegateHandler Unity.Netcode.NetworkSceneManager::OnUnloadEventCompleted
	OnEventCompletedDelegateHandler_t95567703998423114BF49A290F181D1B8E6A2788* ___OnUnloadEventCompleted_9;
	// Unity.Netcode.NetworkSceneManager/OnLoadCompleteDelegateHandler Unity.Netcode.NetworkSceneManager::OnLoadComplete
	OnLoadCompleteDelegateHandler_tC045B41AD80060C4AE4527C98594D182D3ED42AA* ___OnLoadComplete_10;
	// Unity.Netcode.NetworkSceneManager/OnUnloadCompleteDelegateHandler Unity.Netcode.NetworkSceneManager::OnUnloadComplete
	OnUnloadCompleteDelegateHandler_t1C2E9C9FDF4C111C76B308F23430139392F8FFB0* ___OnUnloadComplete_11;
	// Unity.Netcode.NetworkSceneManager/OnSynchronizeCompleteDelegateHandler Unity.Netcode.NetworkSceneManager::OnSynchronizeComplete
	OnSynchronizeCompleteDelegateHandler_t17480B12CFFDA7CE8C4F94D1B146B665BB5B9DCF* ___OnSynchronizeComplete_12;
	// Unity.Netcode.NetworkSceneManager/VerifySceneBeforeLoadingDelegateHandler Unity.Netcode.NetworkSceneManager::VerifySceneBeforeLoading
	VerifySceneBeforeLoadingDelegateHandler_tEE61624D507F0E432B6F4EDD56EC0D213BFE2A4E* ___VerifySceneBeforeLoading_13;
	// Unity.Netcode.NetworkSceneManager/VerifySceneBeforeUnloadingDelegateHandler Unity.Netcode.NetworkSceneManager::VerifySceneBeforeUnloading
	VerifySceneBeforeUnloadingDelegateHandler_t03E054BD51737F01541AB2368461EE061D68E4EC* ___VerifySceneBeforeUnloading_14;
	// System.Boolean Unity.Netcode.NetworkSceneManager::PostSynchronizationSceneUnloading
	bool ___PostSynchronizationSceneUnloading_15;
	// System.Boolean Unity.Netcode.NetworkSceneManager::m_ActiveSceneSynchronizationEnabled
	bool ___m_ActiveSceneSynchronizationEnabled_16;
	// Unity.Netcode.ISceneManagerHandler Unity.Netcode.NetworkSceneManager::SceneManagerHandler
	RuntimeObject* ___SceneManagerHandler_17;
	// System.Collections.Generic.Dictionary`2<System.Guid,Unity.Netcode.SceneEventProgress> Unity.Netcode.NetworkSceneManager::SceneEventProgressTracking
	Dictionary_2_t0270812B055A7D1C86659691D8A5E1AE5B65B721* ___SceneEventProgressTracking_18;
	// System.Collections.Generic.Dictionary`2<System.UInt32,System.Collections.Generic.Dictionary`2<System.Int32,Unity.Netcode.NetworkObject>> Unity.Netcode.NetworkSceneManager::ScenePlacedObjects
	Dictionary_2_t1674990A173871C1D9FAEE8AB011002392DA1E5D* ___ScenePlacedObjects_19;
	// UnityEngine.SceneManagement.Scene Unity.Netcode.NetworkSceneManager::SceneBeingSynchronized
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___SceneBeingSynchronized_20;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.SceneManagement.Scene> Unity.Netcode.NetworkSceneManager::ScenesLoaded
	Dictionary_2_tCC2015396C24B57BF74F74538DB3DE9AD918F8D6* ___ScenesLoaded_21;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Unity.Netcode.NetworkSceneManager::ServerSceneHandleToClientSceneHandle
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___ServerSceneHandleToClientSceneHandle_22;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Unity.Netcode.NetworkSceneManager::ClientSceneHandleToServerSceneHandle
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___ClientSceneHandleToServerSceneHandle_23;
	// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32> Unity.Netcode.NetworkSceneManager::HashToBuildIndex
	Dictionary_2_t1A4804CA9724B6CE01D6ECABE81CE0848CBA80B4* ___HashToBuildIndex_24;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32> Unity.Netcode.NetworkSceneManager::BuildIndexToHash
	Dictionary_2_t6A075724755C7A5DCAD6974ABDEC33484D2EA941* ___BuildIndexToHash_25;
	// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.SceneEventData> Unity.Netcode.NetworkSceneManager::SceneEventDataStore
	Dictionary_2_tCA8950DBD026CD4264E7CE9E57FB298AECECB699* ___SceneEventDataStore_27;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkSceneManager::<m_NetworkManager>k__BackingField
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___U3Cm_NetworkManagerU3Ek__BackingField_28;
	// UnityEngine.SceneManagement.Scene Unity.Netcode.NetworkSceneManager::DontDestroyOnLoadScene
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___DontDestroyOnLoadScene_29;
	// UnityEngine.SceneManagement.LoadSceneMode Unity.Netcode.NetworkSceneManager::<ClientSynchronizationMode>k__BackingField
	int32_t ___U3CClientSynchronizationModeU3Ek__BackingField_30;
	// System.Boolean Unity.Netcode.NetworkSceneManager::m_DisableValidationWarningMessages
	bool ___m_DisableValidationWarningMessages_31;
	// System.Func`2<System.String,UnityEngine.SceneManagement.Scene> Unity.Netcode.NetworkSceneManager::OverrideGetAndAddNewlyLoadedSceneByName
	Func_2_t2CEDF1D050AAC5620D1B957995312D5E2E5F5570* ___OverrideGetAndAddNewlyLoadedSceneByName_32;
	// System.Func`2<UnityEngine.SceneManagement.Scene,System.Boolean> Unity.Netcode.NetworkSceneManager::ExcludeSceneFromSychronization
	Func_2_t4F73610D0CA47FF1BD0C63B7FB85AC3BD87DC7B1* ___ExcludeSceneFromSychronization_33;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Unity.Netcode.NetworkObject>> Unity.Netcode.NetworkSceneManager::ObjectsMigratedIntoNewScene
	Dictionary_2_tE0CCE43CB23321225C159A6FBF31D85E8F1A5E9B* ___ObjectsMigratedIntoNewScene_34;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkSceneManager/DeferredObjectsMovedEvent> Unity.Netcode.NetworkSceneManager::DeferredObjectsMovedEvents
	List_1_t0119CA48E653D4C86AB7AC383F40A66452435828* ___DeferredObjectsMovedEvents_35;
};

struct NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC_StaticFields
{
	// System.Boolean Unity.Netcode.NetworkSceneManager::DisableReSynchronization
	bool ___DisableReSynchronization_2;
	// System.Boolean Unity.Netcode.NetworkSceneManager::IsSpawnedObjectsPendingInDontDestroyOnLoad
	bool ___IsSpawnedObjectsPendingInDontDestroyOnLoad_26;
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

// Unity.Services.Lobbies.Models.Player
struct Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90  : public RuntimeObject
{
	// System.String Unity.Services.Lobbies.Models.Player::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Services.Lobbies.Models.Player::<ConnectionInfo>k__BackingField
	String_t* ___U3CConnectionInfoU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.PlayerDataObject> Unity.Services.Lobbies.Models.Player::<Data>k__BackingField
	Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4* ___U3CDataU3Ek__BackingField_2;
	// System.String Unity.Services.Lobbies.Models.Player::<AllocationId>k__BackingField
	String_t* ___U3CAllocationIdU3Ek__BackingField_3;
	// System.DateTime Unity.Services.Lobbies.Models.Player::<Joined>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CJoinedU3Ek__BackingField_4;
	// System.DateTime Unity.Services.Lobbies.Models.Player::<LastUpdated>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CLastUpdatedU3Ek__BackingField_5;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Unity.Networking.Transport.Relay.RelayAllocationId
struct RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 
{
	// Unity.Networking.Transport.Relay.RelayAllocationId/<Value>e__FixedBuffer Unity.Networking.Transport.Relay.RelayAllocationId::Value
	U3CValueU3Ee__FixedBuffer_t0E279F5AD765D68C7D3ADB57B98FD471710955C8 ___Value_1;
};

// Unity.Networking.Transport.Relay.RelayConnectionData
struct RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D 
{
	// Unity.Networking.Transport.Relay.RelayConnectionData/<Value>e__FixedBuffer Unity.Networking.Transport.Relay.RelayConnectionData::Value
	U3CValueU3Ee__FixedBuffer_t2EBBD6566B9DD8EF0CBC9EF9A9340955B5792054 ___Value_1;
};

// Unity.Networking.Transport.Relay.RelayHMACKey
struct RelayHMACKey_t8A1480D4E69892635FBA3B1408C094733613B844 
{
	// Unity.Networking.Transport.Relay.RelayHMACKey/<Value>e__FixedBuffer Unity.Networking.Transport.Relay.RelayHMACKey::Value
	U3CValueU3Ee__FixedBuffer_t3C8B36A587C8DE2573C0B7FD1CBD94E571B38A67 ___Value_1;
};

// Unity.Netcode.ServerRpcParams
struct ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 
{
	// Unity.Netcode.ServerRpcSendParams Unity.Netcode.ServerRpcParams::Send
	ServerRpcSendParams_tD31A53960AABCA57F6D16BADB576E7DA50D50A4A ___Send_0;
	// Unity.Netcode.ServerRpcReceiveParams Unity.Netcode.ServerRpcParams::Receive
	ServerRpcReceiveParams_t13F450FA39CB2BE6C1DB10FFDC686A89EFC4EF95 ___Receive_1;
};

// Unity.Services.Lobbies.UpdateLobbyOptions
struct UpdateLobbyOptions_t515C0450F4C550EDE74AF44D1707FFE282A64AF9  : public RuntimeObject
{
	// System.String Unity.Services.Lobbies.UpdateLobbyOptions::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Nullable`1<System.Int32> Unity.Services.Lobbies.UpdateLobbyOptions::<MaxPlayers>k__BackingField
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CMaxPlayersU3Ek__BackingField_1;
	// System.Nullable`1<System.Boolean> Unity.Services.Lobbies.UpdateLobbyOptions::<IsPrivate>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CIsPrivateU3Ek__BackingField_2;
	// System.Nullable`1<System.Boolean> Unity.Services.Lobbies.UpdateLobbyOptions::<IsLocked>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CIsLockedU3Ek__BackingField_3;
	// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.DataObject> Unity.Services.Lobbies.UpdateLobbyOptions::<Data>k__BackingField
	Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E* ___U3CDataU3Ek__BackingField_4;
	// System.String Unity.Services.Lobbies.UpdateLobbyOptions::<HostId>k__BackingField
	String_t* ___U3CHostIdU3Ek__BackingField_5;
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

// Unity.Networking.Transport.NetworkDriver/Parameters
struct Parameters_t9967AF7588FE3273938F70B8335411748E0D2742 
{
	// Unity.Networking.Transport.NetworkDataStreamParameter Unity.Networking.Transport.NetworkDriver/Parameters::dataStream
	NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA ___dataStream_0;
	// Unity.Networking.Transport.NetworkConfigParameter Unity.Networking.Transport.NetworkDriver/Parameters::config
	NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D ___config_1;
};

// Unity.Collections.NativeHashMap`2<System.Int64,Unity.Networking.Transport.NetworkSettings/ParameterSlice>
struct NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<TKey,TValue> Unity.Collections.NativeHashMap`2::m_HashMapData
	UnsafeHashMap_2_tF7A9469DA8C5BBA8B491A7436DE7FD6D75DE130B ___m_HashMapData_0;
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

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>
struct TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tF29FF6D2564E315434ED47AB1554C8096BDB3B3A ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>
struct TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t8C37DE1737CA4B219489A8BE872435F8391F4F08 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>
struct TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t2B11019D68001BBA761F297DF394B647E9B2D0AF ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>
struct TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tE199B9295009A8E22A29B6DDD22ED499A663A39B ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>
struct TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t04915FE164A4EB6B97CE508C2D62CCB1830EDD86 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>
struct TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t10B538976246CA89EE16B10A9A3F981194F98C59 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>
struct TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t87DC6AA7478438FC2A893CEFC30932DB880EECFE ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>
struct TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t92B1E9993FD30276E18F8D355C528D0024CE9CEF ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>
struct TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t646F6606413775C943F0F4782FBB82DED8FB3123 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>
struct TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>
struct TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>
struct TransportFunctionPointer_1_t1933A8E5B03799A74CE910DB0A4F8FF67DD0405D 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tD15B3870776AA5A42DBB36B9CCA6AA930B9628DE ___Ptr_0;
};

// Unity.Netcode.ClientRpcSendParams
struct ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB 
{
	// System.Collections.Generic.IReadOnlyList`1<System.UInt64> Unity.Netcode.ClientRpcSendParams::TargetClientIds
	RuntimeObject* ___TargetClientIds_0;
	// System.Nullable`1<Unity.Collections.NativeArray`1<System.UInt64>> Unity.Netcode.ClientRpcSendParams::TargetClientIdsNativeArray
	Nullable_1_tABEB3B55130E30F5C126E7166574311CECAF7CF1 ___TargetClientIdsNativeArray_1;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.ClientRpcSendParams
struct ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB_marshaled_pinvoke
{
	RuntimeObject* ___TargetClientIds_0;
	Nullable_1_tABEB3B55130E30F5C126E7166574311CECAF7CF1 ___TargetClientIdsNativeArray_1;
};
// Native definition for COM marshalling of Unity.Netcode.ClientRpcSendParams
struct ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB_marshaled_com
{
	RuntimeObject* ___TargetClientIds_0;
	Nullable_1_tABEB3B55130E30F5C126E7166574311CECAF7CF1 ___TargetClientIdsNativeArray_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ControlsForEachAction_6;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_7;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_SingletonAction_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_9;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_10;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_11;
	// UnityEngine.InputSystem.InputActionMap/Flags UnityEngine.InputSystem.InputActionMap::m_Flags
	int32_t ___m_Flags_12;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_ParameterOverridesCount
	int32_t ___m_ParameterOverridesCount_13;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[] UnityEngine.InputSystem.InputActionMap::m_ParameterOverrides
	ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE* ___m_ParameterOverrides_14;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionMap::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionCallbacks_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.InputSystem.InputActionMap::m_ActionIndexByNameOrId
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_ActionIndexByNameOrId_17;
};

struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_18;
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

// Unity.Networking.Transport.NetworkEventQueue
struct NetworkEventQueue_tDE8EC1A139521E69F9BBEC2D54C58B58E44CA723 
{
	// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.NetworkEventQueue/SubQueueItem> Unity.Networking.Transport.NetworkEventQueue::m_MasterEventQ
	NativeQueue_1_t1998FE7B3590BD3E5658462E15CDFDC7E946B3F8 ___m_MasterEventQ_0;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkEvent> Unity.Networking.Transport.NetworkEventQueue::m_ConnectionEventQ
	NativeList_1_t163E4B6B8B23750406A8688DA1D7FD433EF9EDC1 ___m_ConnectionEventQ_1;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Networking.Transport.NetworkEventQueue::m_ConnectionEventHeadTail
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___m_ConnectionEventHeadTail_2;
};

// Unity.Networking.Transport.NetworkPipelineProcessor
struct NetworkPipelineProcessor_tB90104D304F7FE6A0E8BB5AD39C95B2441F6E59C 
{
	// Unity.Collections.NativeArray`1<Unity.Networking.Transport.NetworkPipelineStage> Unity.Networking.Transport.NetworkPipelineProcessor::m_StageCollection
	NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 ___m_StageCollection_2;
	// Unity.Collections.NativeArray`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor::m_StaticInstanceBuffer
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_StaticInstanceBuffer_3;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Networking.Transport.NetworkPipelineProcessor::m_StageList
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___m_StageList_4;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Networking.Transport.NetworkPipelineProcessor::m_AccumulatedHeaderCapacity
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___m_AccumulatedHeaderCapacity_5;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/PipelineImpl> Unity.Networking.Transport.NetworkPipelineProcessor::m_Pipelines
	NativeList_1_t7D0C4FADF421E663CFE4731E9B320F919701A66C ___m_Pipelines_6;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor::m_ReceiveBuffer
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_ReceiveBuffer_7;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor::m_SendBuffer
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_SendBuffer_8;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor::m_SharedBuffer
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_SharedBuffer_9;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline> Unity.Networking.Transport.NetworkPipelineProcessor::m_ReceiveStageNeedsUpdate
	NativeList_1_t1869FE735F5176A07019C960A26F7477BA6142B3 ___m_ReceiveStageNeedsUpdate_10;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline> Unity.Networking.Transport.NetworkPipelineProcessor::m_SendStageNeedsUpdate
	NativeList_1_t1869FE735F5176A07019C960A26F7477BA6142B3 ___m_SendStageNeedsUpdate_11;
	// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline> Unity.Networking.Transport.NetworkPipelineProcessor::m_SendStageNeedsUpdateRead
	NativeQueue_1_t3C5DFC28122633C8F672980038A79B3B7D26790A ___m_SendStageNeedsUpdateRead_12;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Networking.Transport.NetworkPipelineProcessor::sizePerConnection
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___sizePerConnection_13;
	// Unity.Collections.NativeArray`1<System.Int64> Unity.Networking.Transport.NetworkPipelineProcessor::m_timestamp
	NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 ___m_timestamp_14;
};

// Unity.Networking.Transport.Relay.RelayServerData
struct RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 
{
	// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.Relay.RelayServerData::Endpoint
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___Endpoint_0;
	// System.UInt16 Unity.Networking.Transport.Relay.RelayServerData::Nonce
	uint16_t ___Nonce_1;
	// Unity.Networking.Transport.Relay.RelayConnectionData Unity.Networking.Transport.Relay.RelayServerData::ConnectionData
	RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D ___ConnectionData_2;
	// Unity.Networking.Transport.Relay.RelayConnectionData Unity.Networking.Transport.Relay.RelayServerData::HostConnectionData
	RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D ___HostConnectionData_3;
	// Unity.Networking.Transport.Relay.RelayAllocationId Unity.Networking.Transport.Relay.RelayServerData::AllocationId
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___AllocationId_4;
	// Unity.Networking.Transport.Relay.RelayHMACKey Unity.Networking.Transport.Relay.RelayServerData::HMACKey
	RelayHMACKey_t8A1480D4E69892635FBA3B1408C094733613B844 ___HMACKey_5;
	// Unity.Networking.Transport.Relay.RelayServerData/<HMAC>e__FixedBuffer Unity.Networking.Transport.Relay.RelayServerData::HMAC
	U3CHMACU3Ee__FixedBuffer_tEBE6EB5356C21D7CDAA77E2AB69381855EAD9816 ___HMAC_6;
	// System.Byte Unity.Networking.Transport.Relay.RelayServerData::IsSecure
	uint8_t ___IsSecure_7;
};

// Unity.Services.Core.RequestFailedException
struct RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00  : public Exception_t
{
	// System.Int32 Unity.Services.Core.RequestFailedException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_18;
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

// LobbyManager/<AllocateRelay>d__7
struct U3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88 
{
	// System.Int32 LobbyManager/<AllocateRelay>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.Allocation> LobbyManager/<AllocateRelay>d__7::<>t__builder
	AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12 ___U3CU3Et__builder_1;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.Allocation> LobbyManager/<AllocateRelay>d__7::<>u__1
	TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 ___U3CU3Eu__1_2;
};

// LobbyManager/<CreateLobby>d__10
struct U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11 
{
	// System.Int32 LobbyManager/<CreateLobby>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder LobbyManager/<CreateLobby>d__10::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// LobbyManager LobbyManager/<CreateLobby>d__10::<>4__this
	LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* ___U3CU3E4__this_2;
	// Unity.Services.Lobbies.Models.Lobby LobbyManager/<CreateLobby>d__10::<lobby>5__2
	Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* ___U3ClobbyU3E5__2_3;
	// Unity.Services.Relay.Models.Allocation LobbyManager/<CreateLobby>d__10::<allocation>5__3
	Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* ___U3CallocationU3E5__3_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Lobbies.Models.Lobby> LobbyManager/<CreateLobby>d__10::<>u__1
	TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.Allocation> LobbyManager/<CreateLobby>d__10::<>u__2
	TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 ___U3CU3Eu__2_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> LobbyManager/<CreateLobby>d__10::<>u__3
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__3_7;
};

// LobbyManager/<GetRelayJoinCode>d__8
struct U3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54 
{
	// System.Int32 LobbyManager/<GetRelayJoinCode>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> LobbyManager/<GetRelayJoinCode>d__8::<>t__builder
	AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E ___U3CU3Et__builder_1;
	// Unity.Services.Relay.Models.Allocation LobbyManager/<GetRelayJoinCode>d__8::allocation
	Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* ___allocation_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> LobbyManager/<GetRelayJoinCode>d__8::<>u__1
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__1_3;
};

// LobbyManager/<JoinLobby>d__11
struct U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9 
{
	// System.Int32 LobbyManager/<JoinLobby>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder LobbyManager/<JoinLobby>d__11::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// LobbyManager LobbyManager/<JoinLobby>d__11::<>4__this
	LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* ___U3CU3E4__this_2;
	// System.String LobbyManager/<JoinLobby>d__11::<lobbyId>5__2
	String_t* ___U3ClobbyIdU3E5__2_3;
	// System.String LobbyManager/<JoinLobby>d__11::<lobbyName>5__3
	String_t* ___U3ClobbyNameU3E5__3_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Lobbies.Models.QueryResponse> LobbyManager/<JoinLobby>d__11::<>u__1
	TaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62 ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Lobbies.Models.Lobby> LobbyManager/<JoinLobby>d__11::<>u__2
	TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D ___U3CU3Eu__2_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.JoinAllocation> LobbyManager/<JoinLobby>d__11::<>u__3
	TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D ___U3CU3Eu__3_7;
};

// LobbyManager/<JoinRelay>d__9
struct U3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8 
{
	// System.Int32 LobbyManager/<JoinRelay>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.JoinAllocation> LobbyManager/<JoinRelay>d__9::<>t__builder
	AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771 ___U3CU3Et__builder_1;
	// System.String LobbyManager/<JoinRelay>d__9::joinCode
	String_t* ___joinCode_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.JoinAllocation> LobbyManager/<JoinRelay>d__9::<>u__1
	TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D ___U3CU3Eu__1_3;
};

// LobbyManager/<Start>d__6
struct U3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92 
{
	// System.Int32 LobbyManager/<Start>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder LobbyManager/<Start>d__6::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// System.Runtime.CompilerServices.TaskAwaiter LobbyManager/<Start>d__6::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_2;
};

// System.Action`1<System.UInt64>
struct Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Netcode.ClientRpcParams
struct ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 
{
	// Unity.Netcode.ClientRpcSendParams Unity.Netcode.ClientRpcParams::Send
	ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB ___Send_0;
	// Unity.Netcode.ClientRpcReceiveParams Unity.Netcode.ClientRpcParams::Receive
	ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A ___Receive_1;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.ClientRpcParams
struct ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_pinvoke
{
	ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB_marshaled_pinvoke ___Send_0;
	ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A ___Receive_1;
};
// Native definition for COM marshalling of Unity.Netcode.ClientRpcParams
struct ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_com
{
	ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB_marshaled_com ___Send_0;
	ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A ___Receive_1;
};

// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset::m_ParameterOverridesCount
	int32_t ___m_ParameterOverridesCount_9;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[] UnityEngine.InputSystem.InputActionAsset::m_ParameterOverrides
	ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE* ___m_ParameterOverrides_10;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionAsset::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_11;
};

// Unity.Services.Lobbies.LobbyServiceException
struct LobbyServiceException_tF62E8385211176AE2293E3FD2C169ABDA3C85010  : public RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00
{
	// Unity.Services.Lobbies.LobbyExceptionReason Unity.Services.Lobbies.LobbyServiceException::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_19;
};

// Unity.Networking.Transport.NetworkProtocol
struct NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 
{
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate> Unity.Networking.Transport.NetworkProtocol::ComputePacketOverhead
	TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF ___ComputePacketOverhead_0;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessReceive
	TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC ___ProcessReceive_1;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSend
	TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 ___ProcessSend_2;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSendConnectionAccept
	TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D ___ProcessSendConnectionAccept_3;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate> Unity.Networking.Transport.NetworkProtocol::Connect
	TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF ___Connect_4;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate> Unity.Networking.Transport.NetworkProtocol::Disconnect
	TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 ___Disconnect_5;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSendPing
	TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 ___ProcessSendPing_6;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSendPong
	TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 ___ProcessSendPong_7;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate> Unity.Networking.Transport.NetworkProtocol::Update
	TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 ___Update_8;
	// System.IntPtr Unity.Networking.Transport.NetworkProtocol::UserData
	intptr_t ___UserData_9;
	// System.Int32 Unity.Networking.Transport.NetworkProtocol::MaxHeaderSize
	int32_t ___MaxHeaderSize_10;
	// System.Int32 Unity.Networking.Transport.NetworkProtocol::MaxFooterSize
	int32_t ___MaxFooterSize_11;
	// System.Boolean Unity.Networking.Transport.NetworkProtocol::NeedsUpdate
	bool ___NeedsUpdate_12;
};
// Native definition for P/Invoke marshalling of Unity.Networking.Transport.NetworkProtocol
struct NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_pinvoke
{
	TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF ___ComputePacketOverhead_0;
	TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC ___ProcessReceive_1;
	TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 ___ProcessSend_2;
	TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D ___ProcessSendConnectionAccept_3;
	TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF ___Connect_4;
	TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 ___Disconnect_5;
	TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 ___ProcessSendPing_6;
	TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 ___ProcessSendPong_7;
	TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 ___Update_8;
	intptr_t ___UserData_9;
	int32_t ___MaxHeaderSize_10;
	int32_t ___MaxFooterSize_11;
	int32_t ___NeedsUpdate_12;
};
// Native definition for COM marshalling of Unity.Networking.Transport.NetworkProtocol
struct NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_com
{
	TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF ___ComputePacketOverhead_0;
	TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC ___ProcessReceive_1;
	TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 ___ProcessSend_2;
	TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D ___ProcessSendConnectionAccept_3;
	TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF ___Connect_4;
	TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 ___Disconnect_5;
	TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 ___ProcessSendPing_6;
	TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 ___ProcessSendPong_7;
	TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 ___Update_8;
	intptr_t ___UserData_9;
	int32_t ___MaxHeaderSize_10;
	int32_t ___MaxFooterSize_11;
	int32_t ___NeedsUpdate_12;
};

// Unity.Networking.Transport.NetworkSendInterface
struct NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 
{
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::BeginSendMessage
	TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736 ___BeginSendMessage_0;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::EndSendMessage
	TransportFunctionPointer_1_t1933A8E5B03799A74CE910DB0A4F8FF67DD0405D ___EndSendMessage_1;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::AbortSendMessage
	TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807 ___AbortSendMessage_2;
	// System.IntPtr Unity.Networking.Transport.NetworkSendInterface::UserData
	intptr_t ___UserData_3;
};

// Unity.Networking.Transport.NetworkSettings
struct NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 
{
	// Unity.Collections.NativeHashMap`2<System.Int64,Unity.Networking.Transport.NetworkSettings/ParameterSlice> Unity.Networking.Transport.NetworkSettings::m_ParameterOffsets
	NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC ___m_ParameterOffsets_1;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkSettings::m_Parameters
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_Parameters_2;
	// System.Byte Unity.Networking.Transport.NetworkSettings::m_Initialized
	uint8_t ___m_Initialized_3;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Unity.Services.Relay.RelayServiceException
struct RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199  : public RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00
{
	// Unity.Services.Relay.RelayExceptionReason Unity.Services.Relay.RelayServiceException::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_19;
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

// Unity.Netcode.NetworkSceneManager/OnEventCompletedDelegateHandler
struct OnEventCompletedDelegateHandler_t95567703998423114BF49A290F181D1B8E6A2788  : public MulticastDelegate_t
{
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

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Unity.Networking.Transport.NetworkDriver
struct NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 
{
	// System.Int32 Unity.Networking.Transport.NetworkDriver::m_NetworkInterfaceIndex
	int32_t ___m_NetworkInterfaceIndex_2;
	// Unity.Networking.Transport.NetworkSendInterface Unity.Networking.Transport.NetworkDriver::m_NetworkSendInterface
	NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 ___m_NetworkSendInterface_3;
	// System.Int32 Unity.Networking.Transport.NetworkDriver::m_NetworkProtocolIndex
	int32_t ___m_NetworkProtocolIndex_4;
	// Unity.Networking.Transport.NetworkProtocol Unity.Networking.Transport.NetworkDriver::m_NetworkProtocolInterface
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 ___m_NetworkProtocolInterface_5;
	// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.QueuedSendMessage> Unity.Networking.Transport.NetworkDriver::m_ParallelSendQueue
	NativeQueue_1_t6F98B587B9BF83745B5D350CBDB27E86744FB2A1 ___m_ParallelSendQueue_6;
	// Unity.Networking.Transport.NetworkEventQueue Unity.Networking.Transport.NetworkDriver::m_EventQueue
	NetworkEventQueue_tDE8EC1A139521E69F9BBEC2D54C58B58E44CA723 ___m_EventQueue_7;
	// Unity.Collections.NativeArray`1<System.Byte> Unity.Networking.Transport.NetworkDriver::m_DisconnectReasons
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_DisconnectReasons_8;
	// Unity.Collections.NativeQueue`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_FreeList
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_FreeList_9;
	// Unity.Collections.NativeQueue`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_NetworkAcceptQueue
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_NetworkAcceptQueue_10;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkDriver/Connection> Unity.Networking.Transport.NetworkDriver::m_ConnectionList
	NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 ___m_ConnectionList_11;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_InternalState
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_InternalState_12;
	// Unity.Collections.NativeReference`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_ProtocolStatus
	NativeReference_1_t142B519FC6820DE38579CF6960317C3BF6EA7EAE ___m_ProtocolStatus_13;
	// Unity.Collections.NativeQueue`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_PendingFree
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_PendingFree_14;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_ErrorCodes
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_ErrorCodes_15;
	// Unity.Networking.Transport.NetworkDriver/Parameters Unity.Networking.Transport.NetworkDriver::m_NetworkParams
	Parameters_t9967AF7588FE3273938F70B8335411748E0D2742 ___m_NetworkParams_16;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkDriver::m_DataStream
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_DataStream_17;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_DataStreamHead
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_DataStreamHead_18;
	// Unity.Networking.Transport.NetworkPipelineProcessor Unity.Networking.Transport.NetworkDriver::m_PipelineProcessor
	NetworkPipelineProcessor_tB90104D304F7FE6A0E8BB5AD39C95B2441F6E59C ___m_PipelineProcessor_19;
	// Unity.Networking.Transport.Protocols.UdpCHeader/HeaderFlags Unity.Networking.Transport.NetworkDriver::m_DefaultHeaderFlags
	uint8_t ___m_DefaultHeaderFlags_20;
	// System.Int64 Unity.Networking.Transport.NetworkDriver::m_UpdateTime
	int64_t ___m_UpdateTime_21;
	// System.Int64 Unity.Networking.Transport.NetworkDriver::m_UpdateTimeAdjustment
	int64_t ___m_UpdateTimeAdjustment_22;
	// Unity.Mathematics.Random Unity.Networking.Transport.NetworkDriver::m_Rand
	Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37 ___m_Rand_23;
};

struct NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036_StaticFields
{
	// System.Collections.Generic.List`1<Unity.Networking.Transport.INetworkInterface> Unity.Networking.Transport.NetworkDriver::s_NetworkInterfaces
	List_1_tC673C156FBD962AEDC0C4957C82DD522010A9BC6* ___s_NetworkInterfaces_0;
	// System.Collections.Generic.List`1<Unity.Networking.Transport.INetworkProtocol> Unity.Networking.Transport.NetworkDriver::s_NetworkProtocols
	List_1_t55E70A01F2B19225279AEE9C81F69F51DE1781C0* ___s_NetworkProtocols_1;
};
// Native definition for P/Invoke marshalling of Unity.Networking.Transport.NetworkDriver
struct NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036_marshaled_pinvoke
{
	int32_t ___m_NetworkInterfaceIndex_2;
	NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 ___m_NetworkSendInterface_3;
	int32_t ___m_NetworkProtocolIndex_4;
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_pinvoke ___m_NetworkProtocolInterface_5;
	NativeQueue_1_t6F98B587B9BF83745B5D350CBDB27E86744FB2A1 ___m_ParallelSendQueue_6;
	NetworkEventQueue_tDE8EC1A139521E69F9BBEC2D54C58B58E44CA723 ___m_EventQueue_7;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_DisconnectReasons_8;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_FreeList_9;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_NetworkAcceptQueue_10;
	NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 ___m_ConnectionList_11;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_InternalState_12;
	NativeReference_1_t142B519FC6820DE38579CF6960317C3BF6EA7EAE ___m_ProtocolStatus_13;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_PendingFree_14;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_ErrorCodes_15;
	Parameters_t9967AF7588FE3273938F70B8335411748E0D2742 ___m_NetworkParams_16;
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_DataStream_17;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_DataStreamHead_18;
	NetworkPipelineProcessor_tB90104D304F7FE6A0E8BB5AD39C95B2441F6E59C ___m_PipelineProcessor_19;
	uint8_t ___m_DefaultHeaderFlags_20;
	int64_t ___m_UpdateTime_21;
	int64_t ___m_UpdateTimeAdjustment_22;
	Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37 ___m_Rand_23;
};
// Native definition for COM marshalling of Unity.Networking.Transport.NetworkDriver
struct NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036_marshaled_com
{
	int32_t ___m_NetworkInterfaceIndex_2;
	NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 ___m_NetworkSendInterface_3;
	int32_t ___m_NetworkProtocolIndex_4;
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_com ___m_NetworkProtocolInterface_5;
	NativeQueue_1_t6F98B587B9BF83745B5D350CBDB27E86744FB2A1 ___m_ParallelSendQueue_6;
	NetworkEventQueue_tDE8EC1A139521E69F9BBEC2D54C58B58E44CA723 ___m_EventQueue_7;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_DisconnectReasons_8;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_FreeList_9;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_NetworkAcceptQueue_10;
	NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 ___m_ConnectionList_11;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_InternalState_12;
	NativeReference_1_t142B519FC6820DE38579CF6960317C3BF6EA7EAE ___m_ProtocolStatus_13;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_PendingFree_14;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_ErrorCodes_15;
	Parameters_t9967AF7588FE3273938F70B8335411748E0D2742 ___m_NetworkParams_16;
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_DataStream_17;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_DataStreamHead_18;
	NetworkPipelineProcessor_tB90104D304F7FE6A0E8BB5AD39C95B2441F6E59C ___m_PipelineProcessor_19;
	uint8_t ___m_DefaultHeaderFlags_20;
	int64_t ___m_UpdateTime_21;
	int64_t ___m_UpdateTimeAdjustment_22;
	Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37 ___m_Rand_23;
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// Unity.Netcode.__RpcParams
struct __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E 
{
	// Unity.Netcode.ServerRpcParams Unity.Netcode.__RpcParams::Server
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___Server_0;
	// Unity.Netcode.ClientRpcParams Unity.Netcode.__RpcParams::Client
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___Client_1;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.__RpcParams
struct __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E_marshaled_pinvoke
{
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___Server_0;
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_pinvoke ___Client_1;
};
// Native definition for COM marshalling of Unity.Netcode.__RpcParams
struct __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E_marshaled_com
{
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___Server_0;
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_com ___Client_1;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::<Instance>k__BackingField
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CInstanceU3Ek__BackingField_4;
};

// LoaderCallback
struct LoaderCallback_t452625797B4FD87E770D14759A591E263B2EE91B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean LoaderCallback::isFirstUpdate
	bool ___isFirstUpdate_4;
};

// LobbyManager
struct LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI LobbyManager::createLobbyNameText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___createLobbyNameText_4;
	// TMPro.TextMeshProUGUI LobbyManager::joinLobbyNameText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___joinLobbyNameText_5;
	// TMPro.TextMeshProUGUI LobbyManager::playerNameText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerNameText_6;
	// PlayerSpawner LobbyManager::playerSpawner
	PlayerSpawner_t3A74834B7A1A9F58FECE5AF56F46844CD026E4AC* ___playerSpawner_7;
};

// Unity.Netcode.NetworkBehaviour
struct NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Netcode.NetworkBehaviour/__RpcExecStage Unity.Netcode.NetworkBehaviour::__rpc_exec_stage
	int32_t _____rpc_exec_stage_4;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsLocalPlayer>k__BackingField
	bool ___U3CIsLocalPlayerU3Ek__BackingField_7;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsOwner>k__BackingField
	bool ___U3CIsOwnerU3Ek__BackingField_8;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsServer>k__BackingField
	bool ___U3CIsServerU3Ek__BackingField_9;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsClient>k__BackingField
	bool ___U3CIsClientU3Ek__BackingField_10;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsHost>k__BackingField
	bool ___U3CIsHostU3Ek__BackingField_11;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsOwnedByServer>k__BackingField
	bool ___U3CIsOwnedByServerU3Ek__BackingField_12;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsSpawned>k__BackingField
	bool ___U3CIsSpawnedU3Ek__BackingField_13;
	// Unity.Netcode.NetworkObject Unity.Netcode.NetworkBehaviour::m_NetworkObject
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___m_NetworkObject_14;
	// System.UInt64 Unity.Netcode.NetworkBehaviour::<NetworkObjectId>k__BackingField
	uint64_t ___U3CNetworkObjectIdU3Ek__BackingField_15;
	// System.UInt16 Unity.Netcode.NetworkBehaviour::<NetworkBehaviourId>k__BackingField
	uint16_t ___U3CNetworkBehaviourIdU3Ek__BackingField_16;
	// System.UInt16 Unity.Netcode.NetworkBehaviour::NetworkBehaviourIdCache
	uint16_t ___NetworkBehaviourIdCache_17;
	// System.UInt64 Unity.Netcode.NetworkBehaviour::<OwnerClientId>k__BackingField
	uint64_t ___U3COwnerClientIdU3Ek__BackingField_18;
	// System.Boolean Unity.Netcode.NetworkBehaviour::m_VarInit
	bool ___m_VarInit_19;
	// System.Collections.Generic.List`1<System.Collections.Generic.HashSet`1<System.Int32>> Unity.Netcode.NetworkBehaviour::m_DeliveryMappedNetworkVariableIndices
	List_1_t498347DEA55185643F213F995B74FEE039FAD70F* ___m_DeliveryMappedNetworkVariableIndices_20;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkDelivery> Unity.Netcode.NetworkBehaviour::m_DeliveryTypesForNetworkVariableGroups
	List_1_t3ED220D424138331023A4D1C1B67E3C63A19761B* ___m_DeliveryTypesForNetworkVariableGroups_21;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkVariableBase> Unity.Netcode.NetworkBehaviour::NetworkVariableFields
	List_1_tB6CC3AFBA7164AC34B1EF29A0A73721899567AE3* ___NetworkVariableFields_22;
	// System.Collections.Generic.List`1<System.Int32> Unity.Netcode.NetworkBehaviour::NetworkVariableIndexesToReset
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___NetworkVariableIndexesToReset_24;
	// System.Collections.Generic.HashSet`1<System.Int32> Unity.Netcode.NetworkBehaviour::NetworkVariableIndexesToResetSet
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___NetworkVariableIndexesToResetSet_25;
	// System.UInt64 Unity.Netcode.NetworkBehaviour::<m_TargetIdBeingSynchronized>k__BackingField
	uint64_t ___U3Cm_TargetIdBeingSynchronizedU3Ek__BackingField_26;
};

struct NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo[]> Unity.Netcode.NetworkBehaviour::s_FieldTypes
	Dictionary_2_t04BB274E1321E9A9FFE2C45EF5DC62AA12E85365* ___s_FieldTypes_23;
};

// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Netcode.NetworkBehaviourUpdater Unity.Netcode.NetworkManager::<BehaviourUpdater>k__BackingField
	NetworkBehaviourUpdater_t215DD428092983D5AECE1BF5BA0576E5070F987C* ___U3CBehaviourUpdaterU3Ek__BackingField_7;
	// Unity.Netcode.MessagingSystem Unity.Netcode.NetworkManager::<MessagingSystem>k__BackingField
	MessagingSystem_tE5E070D8EDEED13D4D0C9D518961289FB3EE1C5D* ___U3CMessagingSystemU3Ek__BackingField_8;
	// Unity.Netcode.NetworkPrefabHandler Unity.Netcode.NetworkManager::m_PrefabHandler
	NetworkPrefabHandler_tDAE80C95FD27B1749A8657944402C831679B0AAE* ___m_PrefabHandler_9;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovalResponse> Unity.Netcode.NetworkManager::ClientsToApprove
	Dictionary_2_t647F7F7CA786348F8808D433385C1B2D157E852A* ___ClientsToApprove_10;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.List`1<Unity.Netcode.NetworkObject>> Unity.Netcode.NetworkManager::ObjectsToShowToClient
	Dictionary_2_tEFAF073C90BF36DA59A8A6A357782DF7453A1D5C* ___ObjectsToShowToClient_11;
	// System.Boolean Unity.Netcode.NetworkManager::m_ShuttingDown
	bool ___m_ShuttingDown_12;
	// System.Boolean Unity.Netcode.NetworkManager::m_StopProcessingMessages
	bool ___m_StopProcessingMessages_13;
	// System.String Unity.Netcode.NetworkManager::<DisconnectReason>k__BackingField
	String_t* ___U3CDisconnectReasonU3Ek__BackingField_14;
	// Unity.Netcode.NetworkTimeSystem Unity.Netcode.NetworkManager::<NetworkTimeSystem>k__BackingField
	NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* ___U3CNetworkTimeSystemU3Ek__BackingField_15;
	// Unity.Netcode.NetworkTickSystem Unity.Netcode.NetworkManager::<NetworkTickSystem>k__BackingField
	NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* ___U3CNetworkTickSystemU3Ek__BackingField_16;
	// System.Boolean Unity.Netcode.NetworkManager::RunInBackground
	bool ___RunInBackground_17;
	// Unity.Netcode.LogLevel Unity.Netcode.NetworkManager::LogLevel
	int32_t ___LogLevel_18;
	// Unity.Netcode.NetworkSpawnManager Unity.Netcode.NetworkManager::<SpawnManager>k__BackingField
	NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* ___U3CSpawnManagerU3Ek__BackingField_20;
	// Unity.Netcode.IDeferredMessageManager Unity.Netcode.NetworkManager::<DeferredMessageManager>k__BackingField
	RuntimeObject* ___U3CDeferredMessageManagerU3Ek__BackingField_21;
	// Unity.Netcode.IRealTimeProvider Unity.Netcode.NetworkManager::<RealTimeProvider>k__BackingField
	RuntimeObject* ___U3CRealTimeProviderU3Ek__BackingField_22;
	// Unity.Netcode.CustomMessagingManager Unity.Netcode.NetworkManager::<CustomMessagingManager>k__BackingField
	CustomMessagingManager_t713DDF9DC30FAF5178913295556DD07C946A9746* ___U3CCustomMessagingManagerU3Ek__BackingField_23;
	// Unity.Netcode.NetworkSceneManager Unity.Netcode.NetworkManager::<SceneManager>k__BackingField
	NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC* ___U3CSceneManagerU3Ek__BackingField_24;
	// System.UInt64 Unity.Netcode.NetworkManager::m_LocalClientId
	uint64_t ___m_LocalClientId_26;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::m_ConnectedClients
	Dictionary_2_t04CE97C57D2E25D600E03BF7F53BDCDDAC05C9DF* ___m_ConnectedClients_27;
	// System.UInt64 Unity.Netcode.NetworkManager::m_NextClientId
	uint64_t ___m_NextClientId_28;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkManager::m_ClientIdToTransportIdMap
	Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* ___m_ClientIdToTransportIdMap_29;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkManager::m_TransportIdToClientIdMap
	Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* ___m_TransportIdToClientIdMap_30;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::m_ConnectedClientsList
	List_1_t57C6C818F7D91A7154A4799FE6DEFD3ACD6F39A5* ___m_ConnectedClientsList_31;
	// System.Collections.Generic.List`1<System.UInt64> Unity.Netcode.NetworkManager::m_ConnectedClientIds
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___m_ConnectedClientIds_32;
	// Unity.Netcode.NetworkClient Unity.Netcode.NetworkManager::<LocalClient>k__BackingField
	NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* ___U3CLocalClientU3Ek__BackingField_33;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient> Unity.Netcode.NetworkManager::PendingClients
	Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684* ___PendingClients_34;
	// System.Boolean Unity.Netcode.NetworkManager::<IsServer>k__BackingField
	bool ___U3CIsServerU3Ek__BackingField_35;
	// System.Boolean Unity.Netcode.NetworkManager::<IsClient>k__BackingField
	bool ___U3CIsClientU3Ek__BackingField_36;
	// System.Boolean Unity.Netcode.NetworkManager::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_37;
	// System.Boolean Unity.Netcode.NetworkManager::<IsConnectedClient>k__BackingField
	bool ___U3CIsConnectedClientU3Ek__BackingField_38;
	// System.Boolean Unity.Netcode.NetworkManager::<IsApproved>k__BackingField
	bool ___U3CIsApprovedU3Ek__BackingField_39;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkManager::OnClientConnectedCallback
	Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___OnClientConnectedCallback_40;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkManager::OnClientDisconnectCallback
	Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___OnClientDisconnectCallback_41;
	// System.Action Unity.Netcode.NetworkManager::OnServerStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnServerStarted_42;
	// System.Action Unity.Netcode.NetworkManager::OnClientStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnClientStarted_43;
	// System.Action`1<System.Boolean> Unity.Netcode.NetworkManager::OnServerStopped
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnServerStopped_44;
	// System.Action`1<System.Boolean> Unity.Netcode.NetworkManager::OnClientStopped
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnClientStopped_45;
	// System.Action Unity.Netcode.NetworkManager::OnTransportFailure
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnTransportFailure_46;
	// System.Action`2<Unity.Netcode.NetworkManager/ConnectionApprovalRequest,Unity.Netcode.NetworkManager/ConnectionApprovalResponse> Unity.Netcode.NetworkManager::m_ConnectionApprovalCallback
	Action_2_t5E7B4E17493B71D65B87865FA28E6CCE1C2ED68B* ___m_ConnectionApprovalCallback_47;
	// Unity.Netcode.NetworkConfig Unity.Netcode.NetworkManager::NetworkConfig
	NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113* ___NetworkConfig_48;
	// System.String Unity.Netcode.NetworkManager::<ConnectedHostname>k__BackingField
	String_t* ___U3CConnectedHostnameU3Ek__BackingField_49;
	// Unity.Netcode.INetworkMetrics Unity.Netcode.NetworkManager::<NetworkMetrics>k__BackingField
	RuntimeObject* ___U3CNetworkMetricsU3Ek__BackingField_50;
};

struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler> Unity.Netcode.NetworkManager::__rpc_func_table
	Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* _____rpc_func_table_4;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager::<Singleton>k__BackingField
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___U3CSingletonU3Ek__BackingField_19;
	// System.Action Unity.Netcode.NetworkManager::OnSingletonReady
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSingletonReady_51;
};

// Unity.Netcode.NetworkObject
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.UInt32 Unity.Netcode.NetworkObject::GlobalObjectIdHash
	uint32_t ___GlobalObjectIdHash_4;
	// System.Boolean Unity.Netcode.NetworkObject::m_IsPrefab
	bool ___m_IsPrefab_5;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkObject::NetworkManagerOwner
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___NetworkManagerOwner_6;
	// System.UInt64 Unity.Netcode.NetworkObject::<NetworkObjectId>k__BackingField
	uint64_t ___U3CNetworkObjectIdU3Ek__BackingField_7;
	// System.UInt64 Unity.Netcode.NetworkObject::<OwnerClientId>k__BackingField
	uint64_t ___U3COwnerClientIdU3Ek__BackingField_8;
	// System.Boolean Unity.Netcode.NetworkObject::AlwaysReplicateAsRoot
	bool ___AlwaysReplicateAsRoot_9;
	// System.Boolean Unity.Netcode.NetworkObject::<IsPlayerObject>k__BackingField
	bool ___U3CIsPlayerObjectU3Ek__BackingField_10;
	// System.Boolean Unity.Netcode.NetworkObject::SynchronizeTransform
	bool ___SynchronizeTransform_11;
	// System.Boolean Unity.Netcode.NetworkObject::<IsSpawned>k__BackingField
	bool ___U3CIsSpawnedU3Ek__BackingField_12;
	// System.Nullable`1<System.Boolean> Unity.Netcode.NetworkObject::<IsSceneObject>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CIsSceneObjectU3Ek__BackingField_13;
	// System.Boolean Unity.Netcode.NetworkObject::<DestroyWithScene>k__BackingField
	bool ___U3CDestroyWithSceneU3Ek__BackingField_14;
	// System.Boolean Unity.Netcode.NetworkObject::ActiveSceneSynchronization
	bool ___ActiveSceneSynchronization_15;
	// System.Boolean Unity.Netcode.NetworkObject::SceneMigrationSynchronization
	bool ___SceneMigrationSynchronization_16;
	// System.Action Unity.Netcode.NetworkObject::OnMigratedToNewScene
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnMigratedToNewScene_17;
	// Unity.Netcode.NetworkObject/VisibilityDelegate Unity.Netcode.NetworkObject::CheckObjectVisibility
	VisibilityDelegate_t43869941CF7C26CBA2B0FEBB3E7A33BA67D3216A* ___CheckObjectVisibility_18;
	// Unity.Netcode.NetworkObject/SpawnDelegate Unity.Netcode.NetworkObject::IncludeTransformWhenSpawning
	SpawnDelegate_t54493DE8F3E71A9E28528811BBD80E50C09BFF57* ___IncludeTransformWhenSpawning_19;
	// System.Boolean Unity.Netcode.NetworkObject::DontDestroyWithOwner
	bool ___DontDestroyWithOwner_20;
	// System.Boolean Unity.Netcode.NetworkObject::AutoObjectParentSync
	bool ___AutoObjectParentSync_21;
	// System.Collections.Generic.HashSet`1<System.UInt64> Unity.Netcode.NetworkObject::Observers
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___Observers_22;
	// System.String Unity.Netcode.NetworkObject::m_CachedNameForMetrics
	String_t* ___m_CachedNameForMetrics_23;
	// System.Collections.Generic.HashSet`1<System.UInt64> Unity.Netcode.NetworkObject::m_EmptyULongHashSet
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___m_EmptyULongHashSet_24;
	// System.Int32 Unity.Netcode.NetworkObject::SceneOriginHandle
	int32_t ___SceneOriginHandle_25;
	// System.Int32 Unity.Netcode.NetworkObject::NetworkSceneHandle
	int32_t ___NetworkSceneHandle_26;
	// UnityEngine.SceneManagement.Scene Unity.Netcode.NetworkObject::m_SceneOrigin
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___m_SceneOrigin_27;
	// System.Nullable`1<System.UInt64> Unity.Netcode.NetworkObject::m_LatestParent
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___m_LatestParent_28;
	// UnityEngine.Transform Unity.Netcode.NetworkObject::m_CachedParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedParent_29;
	// System.Boolean Unity.Netcode.NetworkObject::m_CachedWorldPositionStays
	bool ___m_CachedWorldPositionStays_30;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkBehaviour> Unity.Netcode.NetworkObject::m_ChildNetworkBehaviours
	List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5* ___m_ChildNetworkBehaviours_32;
};

struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_StaticFields
{
	// System.Collections.Generic.HashSet`1<Unity.Netcode.NetworkObject> Unity.Netcode.NetworkObject::OrphanChildren
	HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337* ___OrphanChildren_31;
};

// Unity.Netcode.NetworkTransport
struct NetworkTransport_t55E07951299283974C86476F46CC977780560B64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Netcode.INetworkMetrics Unity.Netcode.NetworkTransport::NetworkMetrics
	RuntimeObject* ___NetworkMetrics_4;
	// Unity.Netcode.NetworkTransport/TransportEventDelegate Unity.Netcode.NetworkTransport::OnTransportEvent
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* ___OnTransportEvent_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI UIController::settingsPlayerName
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___settingsPlayerName_4;
	// TMPro.TextMeshProUGUI UIController::lobbyPlayerName
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___lobbyPlayerName_5;
	// UnityEngine.GameObject UIController::settingsUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___settingsUI_6;
	// UnityEngine.GameObject UIController::lobbyUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lobbyUI_7;
};

// Unity.Netcode.NetworkManager/RpcReceiveHandler
struct RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597  : public MulticastDelegate_t
{
};

// CoinController
struct CoinController_t235C3DF0755DD8275C06CCA8F5F5C0A41AE2781D  : public NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE
{
	// ScoreManager CoinController::scoreManager
	ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* ___scoreManager_28;
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

// HealthSystem
struct HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8  : public NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE
{
	// UnityEngine.UI.Image HealthSystem::healthbar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___healthbar_27;
	// UnityEngine.UI.Image HealthSystem::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_28;
	// UnityEngine.GameObject HealthSystem::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_29;
	// System.Single HealthSystem::maxHealth
	float ___maxHealth_30;
	// System.Single HealthSystem::currentHealth
	float ___currentHealth_31;
	// UnityEngine.Vector3 HealthSystem::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_32;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE
{
	// UnityEngine.GameObject PlayerController::projectile
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectile_27;
	// UnityEngine.Transform PlayerController::projectileSpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___projectileSpawnPoint_28;
	// PlayerInputActions PlayerController::playerInputActions
	PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* ___playerInputActions_29;
	// UnityEngine.Animator PlayerController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_30;
	// ScoreManager PlayerController::scoreManager
	ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* ___scoreManager_31;
	// UnityEngine.Vector2 PlayerController::inputVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___inputVector_32;
	// System.Int32 PlayerController::score
	int32_t ___score_33;
	// System.Single PlayerController::speed
	float ___speed_34;
	// System.Single PlayerController::rotationSpeed
	float ___rotationSpeed_35;
	// System.Single PlayerController::currentHealth
	float ___currentHealth_36;
};

// PlayerSpawner
struct PlayerSpawner_t3A74834B7A1A9F58FECE5AF56F46844CD026E4AC  : public NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE
{
	// UnityEngine.GameObject PlayerSpawner::playerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerPrefab_27;
};

// ProjectileController
struct ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46  : public NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE
{
	// System.Single ProjectileController::lifeTime
	float ___lifeTime_27;
	// System.Single ProjectileController::speed
	float ___speed_28;
};

struct ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_StaticFields
{
	// System.Single ProjectileController::<damage>k__BackingField
	float ___U3CdamageU3Ek__BackingField_29;
};

// ScoreManager
struct ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39  : public NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE
{
	// System.Int32 ScoreManager::score
	int32_t ___score_27;
	// TMPro.TextMeshProUGUI ScoreManager::scoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___scoreText_28;
};

// Unity.Netcode.Transports.UTP.UnityTransport
struct UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4  : public NetworkTransport_t55E07951299283974C86476F46CC977780560B64
{
	// Unity.Netcode.Transports.UTP.UnityTransport/ProtocolType Unity.Netcode.Transports.UTP.UnityTransport::m_ProtocolType
	int32_t ___m_ProtocolType_12;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_MaxPacketQueueSize
	int32_t ___m_MaxPacketQueueSize_13;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_MaxPayloadSize
	int32_t ___m_MaxPayloadSize_14;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_MaxSendQueueSize
	int32_t ___m_MaxSendQueueSize_15;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_HeartbeatTimeoutMS
	int32_t ___m_HeartbeatTimeoutMS_16;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_ConnectTimeoutMS
	int32_t ___m_ConnectTimeoutMS_17;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_MaxConnectAttempts
	int32_t ___m_MaxConnectAttempts_18;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_DisconnectTimeoutMS
	int32_t ___m_DisconnectTimeoutMS_19;
	// Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData Unity.Netcode.Transports.UTP.UnityTransport::ConnectionData
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 ___ConnectionData_20;
	// Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters Unity.Netcode.Transports.UTP.UnityTransport::DebugSimulator
	SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67 ___DebugSimulator_21;
	// System.Nullable`1<System.UInt32> Unity.Netcode.Transports.UTP.UnityTransport::<DebugSimulatorRandomSeed>k__BackingField
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___U3CDebugSimulatorRandomSeedU3Ek__BackingField_22;
	// Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache Unity.Netcode.Transports.UTP.UnityTransport::m_PacketLossCache
	PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7 ___m_PacketLossCache_25;
	// Unity.Netcode.Transports.UTP.UnityTransport/State Unity.Netcode.Transports.UTP.UnityTransport::m_State
	int32_t ___m_State_26;
	// Unity.Networking.Transport.NetworkDriver Unity.Netcode.Transports.UTP.UnityTransport::m_Driver
	NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 ___m_Driver_27;
	// Unity.Networking.Transport.NetworkSettings Unity.Netcode.Transports.UTP.UnityTransport::m_NetworkSettings
	NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 ___m_NetworkSettings_28;
	// System.UInt64 Unity.Netcode.Transports.UTP.UnityTransport::m_ServerClientId
	uint64_t ___m_ServerClientId_29;
	// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport::m_UnreliableFragmentedPipeline
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___m_UnreliableFragmentedPipeline_30;
	// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport::m_UnreliableSequencedFragmentedPipeline
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___m_UnreliableSequencedFragmentedPipeline_31;
	// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport::m_ReliableSequencedPipeline
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___m_ReliableSequencedPipeline_32;
	// Unity.Networking.Transport.Relay.RelayServerData Unity.Netcode.Transports.UTP.UnityTransport::m_RelayServerData
	RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 ___m_RelayServerData_33;
	// Unity.Netcode.NetworkManager Unity.Netcode.Transports.UTP.UnityTransport::NetworkManager
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___NetworkManager_34;
	// Unity.Netcode.IRealTimeProvider Unity.Netcode.Transports.UTP.UnityTransport::m_RealTimeProvider
	RuntimeObject* ___m_RealTimeProvider_35;
	// System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue> Unity.Netcode.Transports.UTP.UnityTransport::m_SendQueue
	Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* ___m_SendQueue_36;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue> Unity.Netcode.Transports.UTP.UnityTransport::m_ReliableReceiveQueues
	Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* ___m_ReliableReceiveQueues_37;
	// System.String Unity.Netcode.Transports.UTP.UnityTransport::m_ServerPrivateKey
	String_t* ___m_ServerPrivateKey_38;
	// System.String Unity.Netcode.Transports.UTP.UnityTransport::m_ServerCertificate
	String_t* ___m_ServerCertificate_39;
	// System.String Unity.Netcode.Transports.UTP.UnityTransport::m_ServerCommonName
	String_t* ___m_ServerCommonName_40;
	// System.String Unity.Netcode.Transports.UTP.UnityTransport::m_ClientCaCertificate
	String_t* ___m_ClientCaCertificate_41;
};

struct UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields
{
	// Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData Unity.Netcode.Transports.UTP.UnityTransport::s_DefaultConnectionAddressData
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 ___s_DefaultConnectionAddressData_10;
	// Unity.Netcode.Transports.UTP.INetworkStreamDriverConstructor Unity.Netcode.Transports.UTP.UnityTransport::s_DriverConstructor
	RuntimeObject* ___s_DriverConstructor_11;
	// System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver> Unity.Netcode.Transports.UTP.UnityTransport::TransportInitialized
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* ___TransportInitialized_23;
	// System.Action`1<System.Int32> Unity.Netcode.Transports.UTP.UnityTransport::TransportDisposed
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___TransportDisposed_24;
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<System.Single>(T&,Unity.Netcode.FastBufferWriter/ForPrimitives)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDFA9B9ED9720515B9FCBBC0F6D35A1F9572CDCEC_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, float* ___value0, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___unused1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<System.Single>(T&,Unity.Netcode.FastBufferWriter/ForPrimitives)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m75B00CC543B79B01824FFDFB32684BDEDDAC729D_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, float* ___value0, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___unused1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<LobbyManager/<Start>d__6>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92_mB1D33F01D44F082F4D1BD036A5B9CDC76FBD6147_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<LobbyManager/<AllocateRelay>d__7>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88_mAFA1E91713DD21464156C229639AD564D985D8D5_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<LobbyManager/<GetRelayJoinCode>d__8>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54_m5A4A61FC1D39F6F28450E3D13003C3BB64823FDE_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<LobbyManager/<JoinRelay>d__9>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8_m1CF7838A52CC9628490CF47C17231C0484AABFEC_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<LobbyManager/<CreateLobby>d__10>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m2046D2DA08BDA9A7CF4B902A61F5F6317EABE9B6_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<LobbyManager/<JoinLobby>d__11>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_mA2250A57A99A512CA0A508CE6633B39D3D861DD8_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,LobbyManager/<Start>d__6>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92_mB3ABA98BFB7B92974000FE2DF6D3BA5324341386_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92* ___stateMachine1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,LobbyManager/<AllocateRelay>d__7>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88_mBD5126DF9AF5C13ADC125D9C8981A9E36E74CF46_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,LobbyManager/<GetRelayJoinCode>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54_mF9868FFC187FC464BA6E6861840D367D28FECEBF_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,LobbyManager/<JoinRelay>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8_mFCC7FE873619FAD2BEE4482938746E1132F5F973_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,LobbyManager/<CreateLobby>d__10>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m20ED3D4D2FB1470195CB74D497F18CCB0C6277D5_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,LobbyManager/<JoinLobby>d__11>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_mE371A65498E4DA2703350015DB1DBF40B4741304_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9* ___stateMachine1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.UInt64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m9D03744CB4F9BFE4C8A4B2FF3970EF3F22389E8D_gshared (Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteUnmanagedSafe<System.Single>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteUnmanagedSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5F9D23D48A171B29C651DCB82BAD7CCAF800748_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, float* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadUnmanagedSafe<System.Single>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadUnmanagedSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m456DA814AF45C8ACDF18D0F14659B3B497339349_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, float* ___value0, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ScoreManager::UpdateScoreServerRpc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_UpdateScoreServerRpc_m5EF2918BD521673610EAC17D636AADD0DA9B299B (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkManager Unity.Netcode.NetworkBehaviour::get_NetworkManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::get_IsListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::get_IsClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::get_IsHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124 (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.NetworkBehaviour::get_OwnerClientId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF_inline (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.NetworkManager::get_LocalClientId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkManager_get_LocalClientId_m1B93454E7949ACBF20043DCDD884F63E119E6577_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Unity.Netcode.FastBufferWriter Unity.Netcode.NetworkBehaviour::__beginSendServerRpc(System.UInt32,Unity.Netcode.ServerRpcParams,Unity.Netcode.RpcDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC NetworkBehaviour___beginSendServerRpc_m4A2F11DDFFDA210CA349A21652A185BA75379429 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, uint32_t ___rpcMethodId0, ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___serverRpcParams1, int32_t ___rpcDelivery2, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkBehaviour::__endSendServerRpc(Unity.Netcode.FastBufferWriter&,System.UInt32,Unity.Netcode.ServerRpcParams,Unity.Netcode.RpcDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour___endSendServerRpc_m012C05F43A55FCBC009562DA6EE207AAF38AD32C (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___bufferWriter0, uint32_t ___rpcMethodId1, ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___serverRpcParams2, int32_t ___rpcDelivery3, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::get_IsServer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour__ctor_m0BFD04A5D02376F13DD2E85274836CD4A3AD38E6 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkManager/RpcReceiveHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6 (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>::Add(TKey,TValue)
inline void Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877 (Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* __this, uint32_t ___key0, RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD*, uint32_t, RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*, const RuntimeMethod*))Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83_gshared)(__this, ___key0, ___value1, method);
}
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void CoinController::DespawnServerRpc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinController_DespawnServerRpc_m095558C5E59A5E0A2AAD70D2FD802ED8549CDF63 (CoinController_t235C3DF0755DD8275C06CCA8F5F5C0A41AE2781D* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkBehaviour::get_IsOwner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsOwner_m2C408A356ACBD9AF0C991BF01B5F20C75891FAB3_inline (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// System.Void ScoreManager::UpdateScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_UpdateScore_m226F66BDBCFC21B520C0C96D2D302F16EB9A2A1C (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Unity.Netcode.NetworkObject>()
inline NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Unity.Netcode.NetworkObject::Despawn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_Despawn_mC20F16433447650773B8DE784593B44A63C68EB7 (NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* __this, bool ___destroy0, const RuntimeMethod* method) ;
// System.Void GameManager::set_Instance(GameManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_Instance_mCFE1FA9223DC000B8D5535A9B6576264FA4405EF_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// Unity.Netcode.FastBufferWriter Unity.Netcode.NetworkBehaviour::__beginSendClientRpc(System.UInt32,Unity.Netcode.ClientRpcParams,Unity.Netcode.RpcDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC NetworkBehaviour___beginSendClientRpc_mCED583D0CFBAC5802EFF7000B7210FDB64421582 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, uint32_t ___rpcMethodId0, ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___clientRpcParams1, int32_t ___rpcDelivery2, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<System.Single>(T&,Unity.Netcode.FastBufferWriter/ForPrimitives)
inline void FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDFA9B9ED9720515B9FCBBC0F6D35A1F9572CDCEC_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, float* ___value0, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___unused1, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDFA9B9ED9720515B9FCBBC0F6D35A1F9572CDCEC_gshared_inline)(__this, ___value0, ___unused1, method);
}
// System.Void Unity.Netcode.NetworkBehaviour::__endSendClientRpc(Unity.Netcode.FastBufferWriter&,System.UInt32,Unity.Netcode.ClientRpcParams,Unity.Netcode.RpcDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour___endSendClientRpc_mAD4E56593D94018049AE53018F989AE61F8C4C4E (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___bufferWriter0, uint32_t ___rpcMethodId1, ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___clientRpcParams2, int32_t ___rpcDelivery3, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<System.Single>(T&,Unity.Netcode.FastBufferWriter/ForPrimitives)
inline void FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m75B00CC543B79B01824FFDFB32684BDEDDAC729D_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, float* ___value0, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___unused1, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m75B00CC543B79B01824FFDFB32684BDEDDAC729D_gshared_inline)(__this, ___value0, ___unused1, method);
}
// System.Void HealthSystem::DamageTakenClientRpc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem_DamageTakenClientRpc_mF8CFF45E91617024B72D8DD68768F1ECCFF68E40 (HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8* __this, float ___damage0, const RuntimeMethod* method) ;
// System.Void Loader/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m1D8C2B42CEFDA1968E429BCC89641347B27E660A (U3CU3Ec__DisplayClass3_0_t16ED08FBDF3B3496E4228001D49787220311E61F* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager::get_Singleton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline (const RuntimeMethod* method) ;
// Unity.Netcode.NetworkSceneManager Unity.Netcode.NetworkManager::get_SceneManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC* NetworkManager_get_SceneManager_m88D4B3F1D93093835BE6C7D13A4E3E3D337637C2_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Unity.Netcode.SceneEventProgressStatus Unity.Netcode.NetworkSceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkSceneManager_LoadScene_mF151202D7FD1481D58B963380375A63EF73F6EE5 (NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC* __this, String_t* ___sceneName0, int32_t ___loadSceneMode1, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Loader::LoaderCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_LoaderCallback_mFEE9EB07FAA5FD6FBBB6216B1163220C02517B38 (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<LobbyManager/<Start>d__6>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92_mB1D33F01D44F082F4D1BD036A5B9CDC76FBD6147 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92_mB1D33F01D44F082F4D1BD036A5B9CDC76FBD6147_gshared)(__this, ___stateMachine0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.Allocation>::Create()
inline AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12 AsyncTaskMethodBuilder_1_Create_mD74F6D890D1EFF4CE1FCF1C872EA6602271D4598 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.Allocation>::Start<LobbyManager/<AllocateRelay>d__7>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88_m615F2F50A19DB1EE42E94CFD6B53D59B821154CF (AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12* __this, U3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12*, U3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88_mAFA1E91713DD21464156C229639AD564D985D8D5_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.Allocation>::get_Task()
inline Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615* AsyncTaskMethodBuilder_1_get_Task_mF0C064E600E18FBE8FA81DD1AC7BEE8378085860 (AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615* (*) (AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Create()
inline AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Start<LobbyManager/<GetRelayJoinCode>d__8>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54_mA6BA30AF626F03009FB9FE08256C740321231FD8 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, U3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, U3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54_m5A4A61FC1D39F6F28450E3D13003C3BB64823FDE_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::get_Task()
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.JoinAllocation>::Create()
inline AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771 AsyncTaskMethodBuilder_1_Create_m801E398CBD085A7776D3D65FC41964E98E05D281 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.JoinAllocation>::Start<LobbyManager/<JoinRelay>d__9>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8_m47FD2E958A075B4D3922CD48900F063FE89246D1 (AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771* __this, U3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771*, U3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8_m1CF7838A52CC9628490CF47C17231C0484AABFEC_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.JoinAllocation>::get_Task()
inline Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC* AsyncTaskMethodBuilder_1_get_Task_m0D74C088429D33A295E602DBD6F8F7A7B36EF300 (AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC* (*) (AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<LobbyManager/<CreateLobby>d__10>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m2046D2DA08BDA9A7CF4B902A61F5F6317EABE9B6 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m2046D2DA08BDA9A7CF4B902A61F5F6317EABE9B6_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<LobbyManager/<JoinLobby>d__11>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_mA2250A57A99A512CA0A508CE6633B39D3D861DD8 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_mA2250A57A99A512CA0A508CE6633B39D3D861DD8_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Lobbies.Models.Player::.ctor(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.PlayerDataObject>,System.String,System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m20CFFAC27BA148DCFEE050FA2BC3AFB3D34E65D9 (Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* __this, String_t* ___id0, String_t* ___connectionInfo1, Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4* ___data2, String_t* ___allocationId3, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___joined4, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lastUpdated5, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.PlayerDataObject>::.ctor()
inline void Dictionary_2__ctor_m9872C9FA5758C9E37E5177754842EB2DF6F96F5D (Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Unity.Services.Lobbies.Models.PlayerDataObject::.ctor(Unity.Services.Lobbies.Models.PlayerDataObject/VisibilityOptions,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerDataObject__ctor_m9D6DA757F880329DC76473E143F612E008D04209 (PlayerDataObject_t0D8F6C76C20CE409B0E408EB0394488F5236027B* __this, int32_t ___visibility0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.PlayerDataObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA243B5B805DDE48026D86330A634261C50989D6C (Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4* __this, String_t* ___key0, PlayerDataObject_t0D8F6C76C20CE409B0E408EB0394488F5236027B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4*, String_t*, PlayerDataObject_t0D8F6C76C20CE409B0E408EB0394488F5236027B*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.Services.Lobbies.Models.Player::set_Data(System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.PlayerDataObject>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_Data_m9711066FDCA86E6A1E5FBB7F7D161A0DD6033DB0_inline (Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* __this, Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Unity.Services.Lobbies.Models.Player> Unity.Services.Lobbies.Models.Lobby::get_Players()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA417A94B122547E4DD22BF1528BDCDF1DB2FAFE0* Lobby_get_Players_mDF781AEEDB64686EAE43DA61B7BE704FC551FC4E_inline (Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.Services.Lobbies.Models.Player>::GetEnumerator()
inline Enumerator_t0FEC0E0A721A10CF74B8FB9621F24754A0D55B15 List_1_GetEnumerator_m9F32FF770A4A1F3DB0FE0F26D3DB4DDD4543A513 (List_1_tA417A94B122547E4DD22BF1528BDCDF1DB2FAFE0* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0FEC0E0A721A10CF74B8FB9621F24754A0D55B15 (*) (List_1_tA417A94B122547E4DD22BF1528BDCDF1DB2FAFE0*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Services.Lobbies.Models.Player>::Dispose()
inline void Enumerator_Dispose_mAE34B9EED0C32D22BDEF9AAB85A24F44C2ED0C55 (Enumerator_t0FEC0E0A721A10CF74B8FB9621F24754A0D55B15* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0FEC0E0A721A10CF74B8FB9621F24754A0D55B15*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.Services.Lobbies.Models.Player>::get_Current()
inline Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* Enumerator_get_Current_mA01CAE0908667A0B65004B670E671EB9007D60E0_inline (Enumerator_t0FEC0E0A721A10CF74B8FB9621F24754A0D55B15* __this, const RuntimeMethod* method)
{
	return ((  Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* (*) (Enumerator_t0FEC0E0A721A10CF74B8FB9621F24754A0D55B15*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.PlayerDataObject> Unity.Services.Lobbies.Models.Player::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4* Player_get_Data_m53B2B5010C4B503A5DBC8483D51FCE202C717569_inline (Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.PlayerDataObject>::get_Item(TKey)
inline PlayerDataObject_t0D8F6C76C20CE409B0E408EB0394488F5236027B* Dictionary_2_get_Item_m8761EC13363DD95A743C1039E3A0ABDB58F384C4 (Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  PlayerDataObject_t0D8F6C76C20CE409B0E408EB0394488F5236027B* (*) (Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.String Unity.Services.Lobbies.Models.PlayerDataObject::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayerDataObject_get_Value_m4C21C8A947ADAF71DB0857CFEC5ADE02D9FA2A86_inline (PlayerDataObject_t0D8F6C76C20CE409B0E408EB0394488F5236027B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Services.Lobbies.Models.Player>::MoveNext()
inline bool Enumerator_MoveNext_m7453D1E9C67DD9BE7E26D566498FF731DAA69C44 (Enumerator_t0FEC0E0A721A10CF74B8FB9621F24754A0D55B15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0FEC0E0A721A10CF74B8FB9621F24754A0D55B15*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void LobbyManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD038369A22F87DFEB05AF1E08AA71301B4ECCE3D (U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7* __this, const RuntimeMethod* method) ;
// Unity.Services.Authentication.IAuthenticationService Unity.Services.Authentication.AuthenticationService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationService_get_Instance_m84EBB538A503492BD441FFB825CF257EE1365BD1 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Core.UnityServices::InitializeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServices_InitializeAsync_mDC1CB3B695B5497E7159CE261445C907B26D223A (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,LobbyManager/<Start>d__6>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92_mB3ABA98BFB7B92974000FE2DF6D3BA5324341386 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92_mB3ABA98BFB7B92974000FE2DF6D3BA5324341386_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void LobbyManager/<Start>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__6_MoveNext_m119EA9766BC4735A303DAD8F53F765805F7EB803 (U3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void LobbyManager/<Start>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__6_SetStateMachine_m8019B0C1981CDD7FE85AD9DB16E7482D540D42B8 (U3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// Unity.Services.Relay.IRelayService Unity.Services.Relay.RelayService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RelayService_get_Instance_m6034E42B7046AFAEF11623931B56ADC3DBFF20AD (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.Allocation>::GetAwaiter()
inline TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 Task_1_GetAwaiter_mF4799A95907ED44730FB988294CED3E92C5F0659 (Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 (*) (Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.Allocation>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m21C14D8866EDB1A215DB500426037F27C2E4D833 (TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.Allocation>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.Allocation>,LobbyManager/<AllocateRelay>d__7>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064_TisU3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88_m093DFD133BE4ED98165462BD5114A950CD2E0675 (AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12* __this, TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064* ___awaiter0, U3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12*, TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064*, U3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88_mBD5126DF9AF5C13ADC125D9C8981A9E36E74CF46_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.Allocation>::GetResult()
inline Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* TaskAwaiter_1_GetResult_m51A92311D3774AA6816FBCE3A76D255D13A0CB9A (TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064* __this, const RuntimeMethod* method)
{
	return ((  Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* (*) (TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.Allocation>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mDE77C042A6806DC351ADFFBD6E0EE04ECFF4763A (AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.Allocation>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m4D5D65D3007290853274F8CD5164420B2F2A29E7 (AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12* __this, Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12*, Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void LobbyManager/<AllocateRelay>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllocateRelayU3Ed__7_MoveNext_mEBCED4D2D3562323E2C70A0CA433E9C210069415 (U3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.Allocation>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mB4425F81BFE6999EF99DE881C195AE6992AE82DA (AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void LobbyManager/<AllocateRelay>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllocateRelayU3Ed__7_SetStateMachine_m8A071B30DA8D2B1E084AFA2906CE8F83FB0C8C60 (U3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Guid Unity.Services.Relay.Models.Allocation::get_AllocationId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Allocation_get_AllocationId_mF3672B7F013E1E320C40C273C6ED9658874C3987_inline (Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,LobbyManager/<GetRelayJoinCode>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54_mF6DADA7B53850BF4486E0C6768A6C26084DC006A (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___awaiter0, U3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, U3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54_mF9868FFC187FC464BA6E6861840D367D28FECEBF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, String_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void LobbyManager/<GetRelayJoinCode>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRelayJoinCodeU3Ed__8_MoveNext_m3A1BE2B79B6228783B260B996E4B0E69C5C47385 (U3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void LobbyManager/<GetRelayJoinCode>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRelayJoinCodeU3Ed__8_SetStateMachine_mAF0929509EACF73E954C365E5DD5BBE91A2023C5 (U3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.JoinAllocation>::GetAwaiter()
inline TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D Task_1_GetAwaiter_m2C8628CE07135D4675ED0A27F632652572D0D92B (Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D (*) (Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.JoinAllocation>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m33FB81ED48D176A4BB167BA9C9ED52D6CB8C53F5 (TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.JoinAllocation>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.JoinAllocation>,LobbyManager/<JoinRelay>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D_TisU3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8_m48B28DAA129ED629137F6F34582E81F154BEDC31 (AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771* __this, TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D* ___awaiter0, U3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771*, TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D*, U3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8_mFCC7FE873619FAD2BEE4482938746E1132F5F973_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.JoinAllocation>::GetResult()
inline JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* TaskAwaiter_1_GetResult_m51425551EA802FC593AA4584F04C3458AEC6EC9F (TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D* __this, const RuntimeMethod* method)
{
	return ((  JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* (*) (TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.JoinAllocation>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF239616FE7D98BF9C7A0A8B6E122346EA8D57D27 (AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.JoinAllocation>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m096450B47F6859FC11E5F91433776513CADD67B4 (AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771* __this, JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771*, JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void LobbyManager/<JoinRelay>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinRelayU3Ed__9_MoveNext_mB951DFA977580321E40A33EC4FDCBA8189E7FF67 (U3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Relay.Models.JoinAllocation>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m25C7244280E880F59DDB0490E1E12970D0E60680 (AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void LobbyManager/<JoinRelay>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinRelayU3Ed__9_SetStateMachine_mE3C1BF1687BBA657949C2E66A2E04F151F100482 (U3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Lobbies.CreateLobbyOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateLobbyOptions__ctor_m1A2D1421F78790B2BE9CA389AA9E09A7BC6F714B (CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___value0, method);
}
// System.Void Unity.Services.Lobbies.CreateLobbyOptions::set_IsPrivate(System.Nullable`1<System.Boolean>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateLobbyOptions_set_IsPrivate_m8790F677FEF9CAAC23FC2B7F3965E85D60923658_inline (CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___value0, const RuntimeMethod* method) ;
// Unity.Services.Lobbies.Models.Player LobbyManager::GetPlayerDetails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* LobbyManager_GetPlayerDetails_mF8EB6932E137FA4237B6524153BC54F1CA57D8ED (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Lobbies.CreateLobbyOptions::set_Player(Unity.Services.Lobbies.Models.Player)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateLobbyOptions_set_Player_m38770CD078390E1DC9D84ACFC0F186C396270A20_inline (CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46* __this, Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* ___value0, const RuntimeMethod* method) ;
// Unity.Services.Lobbies.ILobbyService Unity.Services.Lobbies.LobbyService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LobbyService_get_Instance_m4E0DEAF7F6E132F1280E51EC00060AE88DE4DDC1 (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Lobbies.Models.Lobby>::GetAwaiter()
inline TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D Task_1_GetAwaiter_m3063B5DDFA87B3DD52F9BF2867E39F1C8C6D5964 (Task_1_t14D07ED713222B97E440F98F73CDA5AD1534DDD1* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D (*) (Task_1_t14D07ED713222B97E440F98F73CDA5AD1534DDD1*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Lobbies.Models.Lobby>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m674F4EA58E107D380064CD33B2019F20096B4B71 (TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Lobbies.Models.Lobby>,LobbyManager/<CreateLobby>d__10>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_mD246729D9B70467A23435C77046DCEDABCC502D1 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D* ___awaiter0, U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D*, U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m20ED3D4D2FB1470195CB74D497F18CCB0C6277D5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Lobbies.Models.Lobby>::GetResult()
inline Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* TaskAwaiter_1_GetResult_m14C87DCCDD83A0D46087BADE40E9DB29D574BF0D (TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D* __this, const RuntimeMethod* method)
{
	return ((  Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* (*) (TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.Allocation> LobbyManager::AllocateRelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615* LobbyManager_AllocateRelay_m4CCA6C3F5326AB2279E3AE43C13BC0E3CCB3EADE (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.Allocation>,LobbyManager/<CreateLobby>d__10>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m00CB53425681B565CB81245094496AE2F5EA88CB (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064* ___awaiter0, U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064*, U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m20ED3D4D2FB1470195CB74D497F18CCB0C6277D5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task`1<System.String> LobbyManager::GetRelayJoinCode(Unity.Services.Relay.Models.Allocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* LobbyManager_GetRelayJoinCode_m8D37EBA3FFE1E7342CB0FD6C3F4B199F10D6DF0B (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* ___allocation0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,LobbyManager/<CreateLobby>d__10>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m75F7D31730CB28148C85E13421C8D44D67CACE56 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___awaiter0, U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m20ED3D4D2FB1470195CB74D497F18CCB0C6277D5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String Unity.Services.Lobbies.Models.Lobby::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Lobby_get_Id_mAA7BA102381A42EF34951DEF00C116611BC9D403_inline (Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Lobbies.UpdateLobbyOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateLobbyOptions__ctor_mE224C92DB7B358E05FCCF8935051E6611E44538E (UpdateLobbyOptions_t515C0450F4C550EDE74AF44D1707FFE282A64AF9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.DataObject>::.ctor()
inline void Dictionary_2__ctor_m85E18A57786A8B017E426523F856642EA45E0122 (Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Unity.Services.Lobbies.Models.DataObject::.ctor(Unity.Services.Lobbies.Models.DataObject/VisibilityOptions,System.String,Unity.Services.Lobbies.Models.DataObject/IndexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataObject__ctor_m229033F052BDB87954349469100D9D65DB4A0C14 (DataObject_tCE3C7F1A26400A13D21A110FE0508CC2BA73AADD* __this, int32_t ___visibility0, String_t* ___value1, int32_t ___index2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.DataObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA69276749EF73DFA40B6924A067B3F441359A9A1 (Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E* __this, String_t* ___key0, DataObject_tCE3C7F1A26400A13D21A110FE0508CC2BA73AADD* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E*, String_t*, DataObject_tCE3C7F1A26400A13D21A110FE0508CC2BA73AADD*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.Services.Lobbies.UpdateLobbyOptions::set_Data(System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.DataObject>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdateLobbyOptions_set_Data_mE129466296853E2A4C52786BF129BA6999764802_inline (UpdateLobbyOptions_t515C0450F4C550EDE74AF44D1707FFE282A64AF9* __this, Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.Netcode.Transports.UTP.UnityTransport>()
inline UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Unity.Networking.Transport.Relay.RelayServerData::.ctor(Unity.Services.Relay.Models.Allocation,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayServerData__ctor_mEF9C848F17FA991D2042E23093F82B3FA7D470D9 (RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* __this, Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* ___allocation0, String_t* ___connectionType1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetRelayServerData(Unity.Networking.Transport.Relay.RelayServerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetRelayServerData_m5ECB5AF89AEFCDF25BD0C7ABF37DB6731DF5C312 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 ___serverData0, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::StartHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkManager_StartHost_mC5360D94182499D592AB3E51D31E9D662764F31F (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Void Loader::LoadNetwork(Loader/Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_LoadNetwork_m7DFA4F73B2B62E8CBCB38D2124405AA12F0E26F1 (int32_t ___targetScene0, const RuntimeMethod* method) ;
// System.Void LobbyManager::PrintPlayers(Unity.Services.Lobbies.Models.Lobby)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_PrintPlayers_m52643A796E644030D1525A7406198B949FA379AD (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* ___lobby0, const RuntimeMethod* method) ;
// System.Void LobbyManager/<CreateLobby>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLobbyU3Ed__10_MoveNext_mB3C2BA4A2D080AA30F36BBF853A781FFDD509705 (U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11* __this, const RuntimeMethod* method) ;
// System.Void LobbyManager/<CreateLobby>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLobbyU3Ed__10_SetStateMachine_m64B71A6CC5925C7CD23902FCAA9D6A12267BF789 (U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Lobbies.JoinLobbyByCodeOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoinLobbyByCodeOptions__ctor_mA619AC213268D47110809259C1F4E3ADA21FADB6 (JoinLobbyByCodeOptions_tF4262E7977AFCD63208DE6BF0D299E8B95727D85* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Lobbies.JoinLobbyByCodeOptions::set_Player(Unity.Services.Lobbies.Models.Player)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JoinLobbyByCodeOptions_set_Player_mFFD7C9175E53262398E884875A89C02B6C5BE8AF_inline (JoinLobbyByCodeOptions_tF4262E7977AFCD63208DE6BF0D299E8B95727D85* __this, Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* ___value0, const RuntimeMethod* method) ;
// Unity.Services.Lobbies.ILobbyServiceSDK Unity.Services.Lobbies.Lobbies::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lobbies_get_Instance_m0DEE71DFAC045D1C40A56B231A4182EFCA1D544E (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Lobbies.Models.QueryResponse>::GetAwaiter()
inline TaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62 Task_1_GetAwaiter_m3FB42C716CEC5AA7A9ED19066184B5A1CF3D65A0 (Task_1_tE9AEBB5E01E6AE360BD0305D0AE3A6756F3C81F2* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62 (*) (Task_1_tE9AEBB5E01E6AE360BD0305D0AE3A6756F3C81F2*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Lobbies.Models.QueryResponse>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m27B2F6175FF5AFC0486212632A79556399CA6B7E (TaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Lobbies.Models.QueryResponse>,LobbyManager/<JoinLobby>d__11>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_m53E5BAC13FE496C3537F605FF0E537B241AAB4E6 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62* ___awaiter0, U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62*, U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_mE371A65498E4DA2703350015DB1DBF40B4741304_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Lobbies.Models.QueryResponse>::GetResult()
inline QueryResponse_tB3161BB8C249085FF9A3289A155FDDE1B30373A6* TaskAwaiter_1_GetResult_m9711D191C6A3EB3886BBA11822AC0384188C1751 (TaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62* __this, const RuntimeMethod* method)
{
	return ((  QueryResponse_tB3161BB8C249085FF9A3289A155FDDE1B30373A6* (*) (TaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Unity.Services.Lobbies.Models.Lobby> Unity.Services.Lobbies.Models.QueryResponse::get_Results()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2042FCDC35CA07B523474220DF460A1A043B4C9D* QueryResponse_get_Results_mDAE2B6B500301687A39581DDB74DAE6B00A3BA11_inline (QueryResponse_tB3161BB8C249085FF9A3289A155FDDE1B30373A6* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.Services.Lobbies.Models.Lobby>::GetEnumerator()
inline Enumerator_t62A7CDD4452EE9AC00A96983754D89E36D8D2C30 List_1_GetEnumerator_mDC89155D172B221FCAD4C1AC5DB032A0D264D7FA (List_1_t2042FCDC35CA07B523474220DF460A1A043B4C9D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t62A7CDD4452EE9AC00A96983754D89E36D8D2C30 (*) (List_1_t2042FCDC35CA07B523474220DF460A1A043B4C9D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Services.Lobbies.Models.Lobby>::Dispose()
inline void Enumerator_Dispose_m5345C129C7452F71CE15F31EAE87AA4D60730623 (Enumerator_t62A7CDD4452EE9AC00A96983754D89E36D8D2C30* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t62A7CDD4452EE9AC00A96983754D89E36D8D2C30*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.Services.Lobbies.Models.Lobby>::get_Current()
inline Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* Enumerator_get_Current_m338AD6E2690E5B550328E99F97A5D3C00C3256C9_inline (Enumerator_t62A7CDD4452EE9AC00A96983754D89E36D8D2C30* __this, const RuntimeMethod* method)
{
	return ((  Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* (*) (Enumerator_t62A7CDD4452EE9AC00A96983754D89E36D8D2C30*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String Unity.Services.Lobbies.Models.Lobby::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Lobby_get_Name_m2B0F7CB176D09B582F2C80DFE5C151DEA608AF04_inline (Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Services.Lobbies.Models.Lobby>::MoveNext()
inline bool Enumerator_MoveNext_mF80AD77E11742CEE46C977B72EABDC8669CA384A (Enumerator_t62A7CDD4452EE9AC00A96983754D89E36D8D2C30* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t62A7CDD4452EE9AC00A96983754D89E36D8D2C30*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Lobbies.Models.Lobby>,LobbyManager/<JoinLobby>d__11>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_m8124AF5EA7DA5D1615D441A109977E96B7E72918 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D* ___awaiter0, U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D*, U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_mE371A65498E4DA2703350015DB1DBF40B4741304_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.DataObject> Unity.Services.Lobbies.Models.Lobby::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E* Lobby_get_Data_m1A49E5C6EFB7BB36308086F05F32F548DD748662_inline (Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Lobbies.Models.DataObject>::get_Item(TKey)
inline DataObject_tCE3C7F1A26400A13D21A110FE0508CC2BA73AADD* Dictionary_2_get_Item_m046F39774A960F8342F509030C7CC97BDD51B2A2 (Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  DataObject_tCE3C7F1A26400A13D21A110FE0508CC2BA73AADD* (*) (Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.String Unity.Services.Lobbies.Models.DataObject::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DataObject_get_Value_mD0E5FFFEA974682B1205D22209ED4208E094860A_inline (DataObject_tCE3C7F1A26400A13D21A110FE0508CC2BA73AADD* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.JoinAllocation> LobbyManager::JoinRelay(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC* LobbyManager_JoinRelay_mE7ACACE19250B9E7F71D239504C9B80E852DE7E0 (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, String_t* ___joinCode0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Relay.Models.JoinAllocation>,LobbyManager/<JoinLobby>d__11>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_mE31ED9298D551C909C47806C1032918FDE6DAE2C (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D* ___awaiter0, U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D*, U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_mE371A65498E4DA2703350015DB1DBF40B4741304_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Unity.Networking.Transport.Relay.RelayServerData::.ctor(Unity.Services.Relay.Models.JoinAllocation,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayServerData__ctor_m1A05E16148B6EE4275C3F09AF5D83197710AA241 (RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* __this, JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* ___allocation0, String_t* ___connectionType1, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::StartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkManager_StartClient_mD484EFEF39F84707CAAC431B658BC79721AB6ACD (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Void LobbyManager/<JoinLobby>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinLobbyU3Ed__11_MoveNext_m3537DB5FB86E141F16604D9054A82C88F82F6F0A (U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9* __this, const RuntimeMethod* method) ;
// System.Void LobbyManager/<JoinLobby>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinLobbyU3Ed__11_SetStateMachine_mFE7B13135530C6E89F0BFE35A6B6DF13DB5E068E (U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void PlayerInputActions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputActions__ctor_m3007C78241520148B12C773C76D25024D9B20E3A (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<HealthSystem>()
inline HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8* Component_GetComponentInParent_TisHealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_m1EE2A09437E488BC853062A2307174FF6D00D0FB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void PlayerController::Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Movement_mA3C0BF3320BCD093A506529BBBB6FE3B4EE65266 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkBehaviour::get_IsServer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsServer_m57CCCE498593E3A21E6B952AB9C4BAA482EB4CD6_inline (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// PlayerInputActions/PlayerActions PlayerInputActions::get_Player()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C PlayerInputActions_get_Player_m8F1E753198905DAB61C04292E919BAB267BB6739 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction PlayerInputActions/PlayerActions::get_Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Movement_mD9469EF34C9F8BA6BFFAD6858D0B172322D988E0 (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// System.Void PlayerController::AnimationHandler(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AnimationHandler_mCED5339E3A4B759FAD86E15C5248FBB61FE10B38 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___inputVector0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::RotateTowards(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_RotateTowards_m50EF9D609C80CD423CDA856EA3481DE2004633A3_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___from0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___to1, float ___maxDegreesDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void PlayerController::SpawnProjectileServerRpc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SpawnProjectileServerRpc_m1D8419672FF0E780CC847995499CC328F4357FAB (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void Unity.Netcode.NetworkObject::Spawn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_Spawn_m5797FF38B1FB36F359407E9BA083DEE45413CBB0 (NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* __this, bool ___destroyWithScene0, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.Collision2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<HealthSystem>()
inline HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8* GameObject_GetComponentInParent_TisHealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_m8EE3D342E3C341D21DDA142B3EA7515A604CEED0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// System.Single ProjectileController::get_damage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ProjectileController_get_damage_mCDC23EFC1975EFAB093CA52E4247BEB63BF4F802_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ProjectileController>()
inline ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* GameObject_GetComponent_TisProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_m3DA67640691AB02BC82AC4FC9FB5F6E0A2E3EDB2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ProjectileController::DestroyServerRpc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileController_DestroyServerRpc_mA956463C71DBE2D2673BD9138FC4523A9B5C5E93 (ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void PlayerInputActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputActions_Enable_mD47BCD016CA00174C935EC76B83C4944775EAB71 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction PlayerInputActions/PlayerActions::get_Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Shoot_m1FA6606E585499D7B3B35E9F8A1387D0E2CE08F1 (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void PlayerInputActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputActions_Disable_mCB48734F566DF7736773346C95774E2AF14A3465 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void PlayerController::DestroyServerRpc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_DestroyServerRpc_mFD0A2E04232123957F5B3141EFF56184E4196D0B (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.String PlayerData::get_playerName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayerData_get_playerName_m5EAB50A09FE209D412F859DCC060B6A5C3AC067B_inline (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) ;
// System.Void PlayerData::set_playerName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerData_set_playerName_m69D5A90F237CF84DDE833FD52B325C7DF6CA123A_inline (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean PlayerData::Equals(PlayerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerData_Equals_m3CD103B2A67631C25825B21B707C73724D786B71 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A ___other0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<PlayerInputActions/IPlayerActions>::.ctor()
inline void List_1__ctor_mAA58FC3B6F845F58D6FC7B00824D538D5C716A03 (List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* InputActionAsset_FromJson_m8F7212EB013EF4D853836228D393C0D15BD0433C (String_t* ___json0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset PlayerInputActions::get_asset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset::FindActionMap(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindingMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.InputActionAsset::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> UnityEngine.InputSystem.InputActionAsset::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionAsset::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> PlayerInputActions::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInputActions_GetEnumerator_m01CFD2F20E928973D9E48AA9F6A026E776792482 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionAsset::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputActionAsset::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___mask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) ;
// System.Void PlayerInputActions/PlayerActions::.ctor(PlayerInputActions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerActions__ctor_m193F8F973C130637191BFA5A33A18ED931C1328B_inline (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* ___wrapper0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction PlayerInputActions/PlayerActions::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Rotation_mD012C7FADC0BCBDD04EF77CD183BC9E44403B1FB (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap PlayerInputActions/PlayerActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_Get_mA7C482C597BC15C02AB9A5EA22B1A57A679C107E (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void PlayerInputActions/PlayerActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Enable_mF58238B2F4FDAC4042D0C535E628A2DCDEF89D7F (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void PlayerInputActions/PlayerActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Disable_mDB55707960321BA19120D2FBFDE0BE47254F8CD9 (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Boolean PlayerInputActions/PlayerActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerActions_get_enabled_m13FC6D627F770B0D78D9FBA889BB4A6116AF5771 (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<PlayerInputActions/IPlayerActions>::Contains(T)
inline bool List_1_Contains_m454705CBDA77D048B31C3DA323CF1050C68B9A24 (List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E*, RuntimeObject*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<PlayerInputActions/IPlayerActions>::Add(T)
inline void List_1_Add_m9540FEA61598062A723F0D41A98EC628BE00BBD1_inline (List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void PlayerInputActions/PlayerActions::AddCallbacks(PlayerInputActions/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_AddCallbacks_m5C0962D71E43D284E9FAFBDBC76578DE8A277E40 (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void PlayerInputActions/PlayerActions::UnregisterCallbacks(PlayerInputActions/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_UnregisterCallbacks_m0EE7276BB6AF3F8AD8B9C9BD95F21DD411202770 (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<PlayerInputActions/IPlayerActions>::Remove(T)
inline bool List_1_Remove_mF0DC1699190D9A7F16C59F7015A582906F32B920 (List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void PlayerInputActions/PlayerActions::RemoveCallbacks(PlayerInputActions/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_RemoveCallbacks_m744BBD23DF0FD87FB89E1B70A9F42D4B365D3674 (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PlayerInputActions/IPlayerActions>::GetEnumerator()
inline Enumerator_tA8F639E63A7CB78C8A3AB38721F85DECCD73272B List_1_GetEnumerator_mC9096B575C2C015F75F49B6C88ACC405946955B7 (List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA8F639E63A7CB78C8A3AB38721F85DECCD73272B (*) (List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<PlayerInputActions/IPlayerActions>::Dispose()
inline void Enumerator_Dispose_m64515856D986CB3D409426069FB04CFA32088962 (Enumerator_tA8F639E63A7CB78C8A3AB38721F85DECCD73272B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA8F639E63A7CB78C8A3AB38721F85DECCD73272B*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<PlayerInputActions/IPlayerActions>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mCE17733F5755DBD993FDF622E51430326E622BAA_inline (Enumerator_tA8F639E63A7CB78C8A3AB38721F85DECCD73272B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tA8F639E63A7CB78C8A3AB38721F85DECCD73272B*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<PlayerInputActions/IPlayerActions>::MoveNext()
inline bool Enumerator_MoveNext_m0AE002887C57BF00E27BDDC6B1D3A4CCDED75F2D (Enumerator_tA8F639E63A7CB78C8A3AB38721F85DECCD73272B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA8F639E63A7CB78C8A3AB38721F85DECCD73272B*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<PlayerInputActions/IPlayerActions>::Clear()
inline void List_1_Clear_m918B6424E64FD0AC28914AC99A6F25ECD1B28CA9_inline (List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void PlayerInputActions/PlayerActions::SetCallbacks(PlayerInputActions/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_SetCallbacks_mF14401481D7EDE8CDE7441FF33A814595D844AE0 (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkSceneManager/OnEventCompletedDelegateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEventCompletedDelegateHandler__ctor_mD983C586CEF03A20D709B26DD5287AED6637C29C (OnEventCompletedDelegateHandler_t95567703998423114BF49A290F181D1B8E6A2788* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkSceneManager::add_OnLoadEventCompleted(Unity.Netcode.NetworkSceneManager/OnEventCompletedDelegateHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManager_add_OnLoadEventCompleted_m4F987BEE576F7E824FBD9267415B4E68B946EB7A (NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC* __this, OnEventCompletedDelegateHandler_t95567703998423114BF49A290F181D1B8E6A2788* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.UInt64>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9D03744CB4F9BFE4C8A4B2FF3970EF3F22389E8D (Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m9D03744CB4F9BFE4C8A4B2FF3970EF3F22389E8D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.Netcode.NetworkManager::add_OnClientConnectedCallback(System.Action`1<System.UInt64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_add_OnClientConnectedCallback_m84FF66C1C18421FAC38DAE1B94BCC3830AFED31A (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkBehaviour::get_IsHost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsHost_m8467EE16C1819716A8427F93EEE0D6CA13AC8422_inline (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void Unity.Netcode.NetworkObject::SpawnAsPlayerObject(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_SpawnAsPlayerObject_m8DA6ABE899C9CD4E8A0A89A0741F7CAE230744DF (NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* __this, uint64_t ___clientId0, bool ___destroyWithScene1, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<System.UInt64> Unity.Netcode.NetworkManager::get_ConnectedClientsIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkManager_get_ConnectedClientsIds_mAC05454DCEFB717F590830D86FFA869E7201231A (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// System.Void ProjectileController/<ProjectileLifeTime>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProjectileLifeTimeU3Ed__8__ctor_m8AB9E63C4C197C300D085DB5BE186B12B75DDD30 (U3CProjectileLifeTimeU3Ed__8_t10F32EC3053882FD0D6923EF1650B43F69D2FD9D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::SlerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_SlerpUnclamped_mAE7F4DF2F239831CCAA1DFB52F313E5AED52D32D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteUnmanagedSafe<System.Single>(T&)
inline void FastBufferWriter_WriteUnmanagedSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5F9D23D48A171B29C651DCB82BAD7CCAF800748_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, float* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, float*, const RuntimeMethod*))FastBufferWriter_WriteUnmanagedSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5F9D23D48A171B29C651DCB82BAD7CCAF800748_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadUnmanagedSafe<System.Single>(T&)
inline void FastBufferReader_ReadUnmanagedSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m456DA814AF45C8ACDF18D0F14659B3B497339349_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, float* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, float*, const RuntimeMethod*))FastBufferReader_ReadUnmanagedSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m456DA814AF45C8ACDF18D0F14659B3B497339349_gshared_inline)(__this, ___value0, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___dot0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteBytesSafe(System.Byte*,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadBytesSafe(System.Byte*,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.FastBufferWriter::TryBeginWriteInternal(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___bytes0, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.FastBufferReader::TryBeginReadInternal(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t ___bytes0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::Grow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___additionalSizeRequired0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E__cctor_m75D71476E2FF3F5ABB7BE2ADBF723C07E20A2C63 (const RuntimeMethod* method) 
{
	{
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
// System.Void ScoreManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Awake_mB3BB0D0448D4C240C4572B7395AF328615E76D8A (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___scoreText_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scoreText_28), (void*)L_0);
		// }
		return;
	}
}
// System.Void ScoreManager::UpdateScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_UpdateScore_m226F66BDBCFC21B520C0C96D2D302F16EB9A2A1C (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	{
		// UpdateScoreServerRpc();
		ScoreManager_UpdateScoreServerRpc_m5EF2918BD521673610EAC17D636AADD0DA9B299B(__this, NULL);
		// }
		return;
	}
}
// System.Void ScoreManager::UpdateScoreServerRpc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_UpdateScoreServerRpc_m5EF2918BD521673610EAC17D636AADD0DA9B299B (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_1;
	memset((&V_1), 0, sizeof(V_1));
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		V_0 = L_0;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_00d0;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_7, NULL);
		if (!L_8)
		{
			goto IL_00d0;
		}
	}

IL_0058:
	{
		uint64_t L_9;
		L_9 = NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF_inline(__this, NULL);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_10 = V_0;
		NullCheck(L_10);
		uint64_t L_11;
		L_11 = NetworkManager_get_LocalClientId_m1B93454E7949ACBF20043DCDD884F63E119E6577_inline(L_10, NULL);
		if (!((((int32_t)((((int64_t)L_9) == ((int64_t)L_11))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009e;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___LogLevel_18;
		if (!((((int32_t)((((int32_t)L_13) > ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6, NULL);
	}

IL_009c:
	{
		return;
	}

IL_009e:
	{
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_14 = V_2;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_15;
		L_15 = NetworkBehaviour___beginSendServerRpc_m4A2F11DDFFDA210CA349A21652A185BA75379429(__this, ((int32_t)-2052812924), L_14, ((int32_t)0), NULL);
		V_1 = L_15;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_16 = V_2;
		NetworkBehaviour___endSendServerRpc_m012C05F43A55FCBC009562DA6EE207AAF38AD32C(__this, (&V_1), ((int32_t)-2052812924), L_16, ((int32_t)0), NULL);
	}

IL_00d0:
	{
		int32_t L_17 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)L_17) == ((int32_t)((int32_t)1)))? 1 : 0))
		{
			goto IL_00ff;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_18 = V_0;
		NullCheck(L_18);
		bool L_19;
		L_19 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_18, NULL);
		if (L_19)
		{
			goto IL_0100;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_20 = V_0;
		NullCheck(L_20);
		bool L_21;
		L_21 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_20, NULL);
		if (L_21)
		{
			goto IL_0100;
		}
	}

IL_00ff:
	{
		return;
	}

IL_0100:
	{
		// score++;
		int32_t L_22 = __this->___score_27;
		__this->___score_27 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		// scoreText.text = "Score: " + score.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = __this->___scoreText_28;
		int32_t* L_24 = (&__this->___score_27);
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_24, NULL);
		String_t* L_26;
		L_26 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_25, NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_23, L_26);
		// }
		return;
	}
}
// System.Void ScoreManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager__ctor_mE5C264C34A9CBBAB72DCF99CCCC9841AF8F9FEE6 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_m0BFD04A5D02376F13DD2E85274836CD4A3AD38E6(__this, NULL);
		return;
	}
}
// System.Void ScoreManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager__cctor_m5C488A2A97722EE3B69D1F34938D65ECB05E8A4F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager___rpc_handler_2242154372_mDC904EB1505B2AD42059C0281A6A2D8D8B92C99E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* L_0 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->_____rpc_func_table_4;
		RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* L_1 = (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*)il2cpp_codegen_object_new(RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6(L_1, NULL, (intptr_t)((void*)ScoreManager___rpc_handler_2242154372_mDC904EB1505B2AD42059C0281A6A2D8D8B92C99E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877(L_0, ((int32_t)-2052812924), L_1, Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		return;
	}
}
// System.Void ScoreManager::__rpc_handler_2242154372(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager___rpc_handler_2242154372_mDC904EB1505B2AD42059C0281A6A2D8D8B92C99E (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___target0, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader1, __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E ___rpcParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	{
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_0 = ___target0;
		NullCheck(L_0);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1;
		L_1 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(L_0, NULL);
		V_0 = L_1;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		__RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E L_5 = ___rpcParams2;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_6 = L_5.___Server_0;
		ServerRpcReceiveParams_t13F450FA39CB2BE6C1DB10FFDC686A89EFC4EF95 L_7 = L_6.___Receive_1;
		uint64_t L_8 = L_7.___SenderClientId_0;
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_9 = ___target0;
		NullCheck(L_9);
		uint64_t L_10;
		L_10 = NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF_inline(L_9, NULL);
		if (!((((int32_t)((((int64_t)L_8) == ((int64_t)L_10))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_006f;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___LogLevel_18;
		if (!((((int32_t)((((int32_t)L_12) > ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_006d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6, NULL);
	}

IL_006d:
	{
		return;
	}

IL_006f:
	{
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_13 = ___target0;
		NullCheck(L_13);
		L_13->_____rpc_exec_stage_4 = ((int32_t)1);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_14 = ___target0;
		NullCheck(((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39*)CastclassClass((RuntimeObject*)L_14, ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var)));
		ScoreManager_UpdateScoreServerRpc_m5EF2918BD521673610EAC17D636AADD0DA9B299B(((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39*)CastclassClass((RuntimeObject*)L_14, ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var)), NULL);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_15 = ___target0;
		NullCheck(L_15);
		L_15->_____rpc_exec_stage_4 = ((int32_t)0);
		return;
	}
}
// System.String ScoreManager::__getTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScoreManager___getTypeName_mC2343023B25B6705F943DFCF52F0F6EC6ADDBFDB (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEFD2F18E987512C30D83427DEF3E8980C4294D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralBEFD2F18E987512C30D83427DEF3E8980C4294D3;
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
// System.Void CoinController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinController_OnTriggerEnter2D_mE1B49458FAC776AD4254FD9967A5871F5F4F29A2 (CoinController_t235C3DF0755DD8275C06CCA8F5F5C0A41AE2781D* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == PLAYER) {
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// DespawnServerRpc();
		CoinController_DespawnServerRpc_m095558C5E59A5E0A2AAD70D2FD802ED8549CDF63(__this, NULL);
		// if(IsOwner) scoreManager.UpdateScore();
		bool L_3;
		L_3 = NetworkBehaviour_get_IsOwner_m2C408A356ACBD9AF0C991BF01B5F20C75891FAB3_inline(__this, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// if(IsOwner) scoreManager.UpdateScore();
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_4 = __this->___scoreManager_28;
		NullCheck(L_4);
		ScoreManager_UpdateScore_m226F66BDBCFC21B520C0C96D2D302F16EB9A2A1C(L_4, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void CoinController::DespawnServerRpc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinController_DespawnServerRpc_m095558C5E59A5E0A2AAD70D2FD802ED8549CDF63 (CoinController_t235C3DF0755DD8275C06CCA8F5F5C0A41AE2781D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_1;
	memset((&V_1), 0, sizeof(V_1));
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		V_0 = L_0;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_008a;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_7, NULL);
		if (!L_8)
		{
			goto IL_008a;
		}
	}

IL_0058:
	{
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_9 = V_2;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_10;
		L_10 = NetworkBehaviour___beginSendServerRpc_m4A2F11DDFFDA210CA349A21652A185BA75379429(__this, ((int32_t)690585775), L_9, ((int32_t)0), NULL);
		V_1 = L_10;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_11 = V_2;
		NetworkBehaviour___endSendServerRpc_m012C05F43A55FCBC009562DA6EE207AAF38AD32C(__this, (&V_1), ((int32_t)690585775), L_11, ((int32_t)0), NULL);
	}

IL_008a:
	{
		int32_t L_12 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)L_12) == ((int32_t)((int32_t)1)))? 1 : 0))
		{
			goto IL_00b9;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_13 = V_0;
		NullCheck(L_13);
		bool L_14;
		L_14 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_13, NULL);
		if (L_14)
		{
			goto IL_00ba;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_15, NULL);
		if (L_16)
		{
			goto IL_00ba;
		}
	}

IL_00b9:
	{
		return;
	}

IL_00ba:
	{
		// gameObject.GetComponent<NetworkObject>().Despawn();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_17);
		NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* L_18;
		L_18 = GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E(L_17, GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E_RuntimeMethod_var);
		NullCheck(L_18);
		NetworkObject_Despawn_mC20F16433447650773B8DE784593B44A63C68EB7(L_18, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CoinController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinController__ctor_mFEFFAC115A8889862E9D89A1D46FF820918177A4 (CoinController_t235C3DF0755DD8275C06CCA8F5F5C0A41AE2781D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_m0BFD04A5D02376F13DD2E85274836CD4A3AD38E6(__this, NULL);
		return;
	}
}
// System.Void CoinController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinController__cctor_m1C033F8B5A7CADC0FB070B9380B9D4577FDFAEE9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoinController___rpc_handler_690585775_m427CE6059C77130B594FAF8DF9E349D5434A6E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* L_0 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->_____rpc_func_table_4;
		RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* L_1 = (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*)il2cpp_codegen_object_new(RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6(L_1, NULL, (intptr_t)((void*)CoinController___rpc_handler_690585775_m427CE6059C77130B594FAF8DF9E349D5434A6E95_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877(L_0, ((int32_t)690585775), L_1, Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		return;
	}
}
// System.Void CoinController::__rpc_handler_690585775(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinController___rpc_handler_690585775_m427CE6059C77130B594FAF8DF9E349D5434A6E95 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___target0, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader1, __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E ___rpcParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoinController_t235C3DF0755DD8275C06CCA8F5F5C0A41AE2781D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	{
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_0 = ___target0;
		NullCheck(L_0);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1;
		L_1 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(L_0, NULL);
		V_0 = L_1;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_5 = ___target0;
		NullCheck(L_5);
		L_5->_____rpc_exec_stage_4 = ((int32_t)1);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_6 = ___target0;
		NullCheck(((CoinController_t235C3DF0755DD8275C06CCA8F5F5C0A41AE2781D*)CastclassClass((RuntimeObject*)L_6, CoinController_t235C3DF0755DD8275C06CCA8F5F5C0A41AE2781D_il2cpp_TypeInfo_var)));
		CoinController_DespawnServerRpc_m095558C5E59A5E0A2AAD70D2FD802ED8549CDF63(((CoinController_t235C3DF0755DD8275C06CCA8F5F5C0A41AE2781D*)CastclassClass((RuntimeObject*)L_6, CoinController_t235C3DF0755DD8275C06CCA8F5F5C0A41AE2781D_il2cpp_TypeInfo_var)), NULL);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_7 = ___target0;
		NullCheck(L_7);
		L_7->_____rpc_exec_stage_4 = ((int32_t)0);
		return;
	}
}
// System.String CoinController::__getTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoinController___getTypeName_m5FFEF165E6C88B246A280F34E633D187449C34E8 (CoinController_t235C3DF0755DD8275C06CCA8F5F5C0A41AE2781D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A72AEE32C5954FBA4C3036DB65C9BB95247A939);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2A72AEE32C5954FBA4C3036DB65C9BB95247A939;
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
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameManager Instance { get; private set; }
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void GameManager::set_Instance(GameManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_Instance_mCFE1FA9223DC000B8D5535A9B6576264FA4405EF (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameManager Instance { get; private set; }
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ___value0;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		GameManager_set_Instance_mCFE1FA9223DC000B8D5535A9B6576264FA4405EF_inline(__this, NULL);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
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
// System.Void HealthSystem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem_Awake_mB20B541960F3AC5355D416903DF32BC5B6322064 (HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8* __this, const RuntimeMethod* method) 
{
	{
		// currentHealth = maxHealth;
		float L_0 = __this->___maxHealth_30;
		__this->___currentHealth_31 = L_0;
		// }
		return;
	}
}
// System.Void HealthSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem_Update_m710657B59AA7EB20A2420DCB80AE6460D8F04616 (HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8* __this, const RuntimeMethod* method) 
{
	{
		// healthbar.transform.position = player.transform.position - offset;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___healthbar_27;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___player_29;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___offset_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_5, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_6, NULL);
		// background.transform.position = healthbar.transform.position;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___background_28;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___healthbar_27;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_11, NULL);
		// }
		return;
	}
}
// System.Void HealthSystem::DamageTakenClientRpc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem_DamageTakenClientRpc_mF8CFF45E91617024B72D8DD68768F1ECCFF68E40 (HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8* __this, float ___damage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDFA9B9ED9720515B9FCBBC0F6D35A1F9572CDCEC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_1;
	memset((&V_1), 0, sizeof(V_1));
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		V_0 = L_0;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)2)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_00a5;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_7, NULL);
		if (!L_8)
		{
			goto IL_00a5;
		}
	}

IL_0058:
	{
		ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_9 = V_2;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_10;
		L_10 = NetworkBehaviour___beginSendClientRpc_mCED583D0CFBAC5802EFF7000B7210FDB64421582(__this, ((int32_t)-563918631), L_9, ((int32_t)0), NULL);
		V_1 = L_10;
		il2cpp_codegen_initobj((&V_3), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_11 = V_3;
		FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDFA9B9ED9720515B9FCBBC0F6D35A1F9572CDCEC_inline((&V_1), (&___damage0), L_11, FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDFA9B9ED9720515B9FCBBC0F6D35A1F9572CDCEC_RuntimeMethod_var);
		ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_12 = V_2;
		NetworkBehaviour___endSendClientRpc_mAD4E56593D94018049AE53018F989AE61F8C4C4E(__this, (&V_1), ((int32_t)-563918631), L_12, ((int32_t)0), NULL);
	}

IL_00a5:
	{
		int32_t L_13 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)L_13) == ((int32_t)((int32_t)2)))? 1 : 0))
		{
			goto IL_00d4;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_14, NULL);
		if (L_15)
		{
			goto IL_00d5;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_16 = V_0;
		NullCheck(L_16);
		bool L_17;
		L_17 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_16, NULL);
		if (L_17)
		{
			goto IL_00d5;
		}
	}

IL_00d4:
	{
		return;
	}

IL_00d5:
	{
		// currentHealth -= damage;
		float L_18 = __this->___currentHealth_31;
		float L_19 = ___damage0;
		__this->___currentHealth_31 = ((float)il2cpp_codegen_subtract(L_18, L_19));
		// healthbar.fillAmount = currentHealth / maxHealth;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_20 = __this->___healthbar_27;
		float L_21 = __this->___currentHealth_31;
		float L_22 = __this->___maxHealth_30;
		NullCheck(L_20);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_20, ((float)(L_21/L_22)), NULL);
		// }
		return;
	}
}
// System.Void HealthSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem__ctor_m1E471AB9A4C7EC6D86D4B3660BD4145109958995 (HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 offset = new Vector3(0f, -0.5f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (-0.5f), (0.0f), /*hidden argument*/NULL);
		__this->___offset_32 = L_0;
		il2cpp_codegen_runtime_class_init_inline(NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_m0BFD04A5D02376F13DD2E85274836CD4A3AD38E6(__this, NULL);
		return;
	}
}
// System.Void HealthSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem__cctor_mEA5436D460C0A64D8C199D70ECC8E0AA0CB3A7E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthSystem___rpc_handler_3731048665_m213E0798D9EDA8A71E4E893E748F7F0D41251F5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* L_0 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->_____rpc_func_table_4;
		RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* L_1 = (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*)il2cpp_codegen_object_new(RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6(L_1, NULL, (intptr_t)((void*)HealthSystem___rpc_handler_3731048665_m213E0798D9EDA8A71E4E893E748F7F0D41251F5D_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877(L_0, ((int32_t)-563918631), L_1, Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		return;
	}
}
// System.Void HealthSystem::__rpc_handler_3731048665(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem___rpc_handler_3731048665_m213E0798D9EDA8A71E4E893E748F7F0D41251F5D (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___target0, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader1, __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E ___rpcParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m75B00CC543B79B01824FFDFB32684BDEDDAC729D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	float V_1 = 0.0f;
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_0 = ___target0;
		NullCheck(L_0);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1;
		L_1 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(L_0, NULL);
		V_0 = L_1;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_5 = V_2;
		FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m75B00CC543B79B01824FFDFB32684BDEDDAC729D_inline((&___reader1), (&V_1), L_5, FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m75B00CC543B79B01824FFDFB32684BDEDDAC729D_RuntimeMethod_var);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_6 = ___target0;
		NullCheck(L_6);
		L_6->_____rpc_exec_stage_4 = ((int32_t)2);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_7 = ___target0;
		float L_8 = V_1;
		NullCheck(((HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8*)CastclassClass((RuntimeObject*)L_7, HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var)));
		HealthSystem_DamageTakenClientRpc_mF8CFF45E91617024B72D8DD68768F1ECCFF68E40(((HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8*)CastclassClass((RuntimeObject*)L_7, HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_il2cpp_TypeInfo_var)), L_8, NULL);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_9 = ___target0;
		NullCheck(L_9);
		L_9->_____rpc_exec_stage_4 = ((int32_t)0);
		return;
	}
}
// System.String HealthSystem::__getTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HealthSystem___getTypeName_mEF9068196527D4E5112616D0C45F3DA24DF48316 (HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE96AAD04643C8591B35162EA304C009F36B8BB46);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralE96AAD04643C8591B35162EA304C009F36B8BB46;
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
// System.Void Loader::LoadNetwork(Loader/Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_LoadNetwork_m7DFA4F73B2B62E8CBCB38D2124405AA12F0E26F1 (int32_t ___targetScene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_t504D7CE0CD3B494AEBE040FA74242AC41DE1075B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CLoadNetworkU3Eb__0_m807E625664DFE827767F85C68CC023A566CF3FD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t16ED08FBDF3B3496E4228001D49787220311E61F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		U3CU3Ec__DisplayClass3_0_t16ED08FBDF3B3496E4228001D49787220311E61F* L_0 = (U3CU3Ec__DisplayClass3_0_t16ED08FBDF3B3496E4228001D49787220311E61F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t16ED08FBDF3B3496E4228001D49787220311E61F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m1D8C2B42CEFDA1968E429BCC89641347B27E660A(L_0, NULL);
		U3CU3Ec__DisplayClass3_0_t16ED08FBDF3B3496E4228001D49787220311E61F* L_1 = L_0;
		int32_t L_2 = ___targetScene0;
		NullCheck(L_1);
		L_1->___targetScene_0 = L_2;
		// onLoaderCallback = () => {
		//     NetworkManager.Singleton.SceneManager.LoadScene(targetScene.ToString(), LoadSceneMode.Single);
		// };
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_1, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CLoadNetworkU3Eb__0_m807E625664DFE827767F85C68CC023A566CF3FD1_RuntimeMethod_var), NULL);
		((Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8_StaticFields*)il2cpp_codegen_static_fields_for(Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8_il2cpp_TypeInfo_var))->___onLoaderCallback_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8_StaticFields*)il2cpp_codegen_static_fields_for(Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8_il2cpp_TypeInfo_var))->___onLoaderCallback_1), (void*)L_3);
		// NetworkManager.Singleton.SceneManager.LoadScene(Scene.LoadingScene.ToString(), LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_4;
		L_4 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_4);
		NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC* L_5;
		L_5 = NetworkManager_get_SceneManager_m88D4B3F1D93093835BE6C7D13A4E3E3D337637C2_inline(L_4, NULL);
		V_0 = 1;
		Il2CppFakeBox<int32_t> L_6(Scene_t504D7CE0CD3B494AEBE040FA74242AC41DE1075B_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		int32_t L_8;
		L_8 = NetworkSceneManager_LoadScene_mF151202D7FD1481D58B963380375A63EF73F6EE5(L_5, L_7, 0, NULL);
		// }
		return;
	}
}
// System.Void Loader::LoaderCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_LoaderCallback_mFEE9EB07FAA5FD6FBBB6216B1163220C02517B38 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onLoaderCallback != null) {
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8_StaticFields*)il2cpp_codegen_static_fields_for(Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8_il2cpp_TypeInfo_var))->___onLoaderCallback_1;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// onLoaderCallback();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ((Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8_StaticFields*)il2cpp_codegen_static_fields_for(Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8_il2cpp_TypeInfo_var))->___onLoaderCallback_1;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
		// onLoaderCallback = null;
		((Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8_StaticFields*)il2cpp_codegen_static_fields_for(Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8_il2cpp_TypeInfo_var))->___onLoaderCallback_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8_StaticFields*)il2cpp_codegen_static_fields_for(Loader_t8DA45BCA474D49F36807820E90683605DA2F5AF8_il2cpp_TypeInfo_var))->___onLoaderCallback_1), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
	}

IL_0017:
	{
		// }
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
// System.Void Loader/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m1D8C2B42CEFDA1968E429BCC89641347B27E660A (U3CU3Ec__DisplayClass3_0_t16ED08FBDF3B3496E4228001D49787220311E61F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Loader/<>c__DisplayClass3_0::<LoadNetwork>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CLoadNetworkU3Eb__0_m807E625664DFE827767F85C68CC023A566CF3FD1 (U3CU3Ec__DisplayClass3_0_t16ED08FBDF3B3496E4228001D49787220311E61F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_t504D7CE0CD3B494AEBE040FA74242AC41DE1075B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkManager.Singleton.SceneManager.LoadScene(targetScene.ToString(), LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_0);
		NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC* L_1;
		L_1 = NetworkManager_get_SceneManager_m88D4B3F1D93093835BE6C7D13A4E3E3D337637C2_inline(L_0, NULL);
		int32_t* L_2 = (&__this->___targetScene_0);
		Il2CppFakeBox<int32_t> L_3(Scene_t504D7CE0CD3B494AEBE040FA74242AC41DE1075B_il2cpp_TypeInfo_var, L_2);
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		NullCheck(L_1);
		int32_t L_5;
		L_5 = NetworkSceneManager_LoadScene_mF151202D7FD1481D58B963380375A63EF73F6EE5(L_1, L_4, 0, NULL);
		// };
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
// System.Void LoaderCallback::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoaderCallback_Update_mC267D27410954A50D7DE69CD1316BF02CFC02639 (LoaderCallback_t452625797B4FD87E770D14759A591E263B2EE91B* __this, const RuntimeMethod* method) 
{
	{
		// if (isFirstUpdate) {
		bool L_0 = __this->___isFirstUpdate_4;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// isFirstUpdate = false;
		__this->___isFirstUpdate_4 = (bool)0;
		// Loader.LoaderCallback();
		Loader_LoaderCallback_mFEE9EB07FAA5FD6FBBB6216B1163220C02517B38(NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void LoaderCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoaderCallback__ctor_m07245CDFBA2830ED9644D7AD3AA1A3FB54617A61 (LoaderCallback_t452625797B4FD87E770D14759A591E263B2EE91B* __this, const RuntimeMethod* method) 
{
	{
		// public bool isFirstUpdate = true;
		__this->___isFirstUpdate_4 = (bool)1;
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
// System.Void LobbyManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_Start_mF549C6A849CDD18D13D46BB3DF47AA45A20A0D29 (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92_mB1D33F01D44F082F4D1BD036A5B9CDC76FBD6147_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92_mB1D33F01D44F082F4D1BD036A5B9CDC76FBD6147(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92_mB1D33F01D44F082F4D1BD036A5B9CDC76FBD6147_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.Allocation> LobbyManager::AllocateRelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615* LobbyManager_AllocateRelay_m4CCA6C3F5326AB2279E3AE43C13BC0E3CCB3EADE (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mD74F6D890D1EFF4CE1FCF1C872EA6602271D4598_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88_m615F2F50A19DB1EE42E94CFD6B53D59B821154CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mF0C064E600E18FBE8FA81DD1AC7BEE8378085860_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mD74F6D890D1EFF4CE1FCF1C872EA6602271D4598(AsyncTaskMethodBuilder_1_Create_mD74F6D890D1EFF4CE1FCF1C872EA6602271D4598_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88_m615F2F50A19DB1EE42E94CFD6B53D59B821154CF(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88_m615F2F50A19DB1EE42E94CFD6B53D59B821154CF_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_mF0C064E600E18FBE8FA81DD1AC7BEE8378085860(L_2, AsyncTaskMethodBuilder_1_get_Task_mF0C064E600E18FBE8FA81DD1AC7BEE8378085860_RuntimeMethod_var);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<System.String> LobbyManager::GetRelayJoinCode(Unity.Services.Relay.Models.Allocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* LobbyManager_GetRelayJoinCode_m8D37EBA3FFE1E7342CB0FD6C3F4B199F10D6DF0B (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* ___allocation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54_mA6BA30AF626F03009FB9FE08256C740321231FD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D(AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* L_1 = ___allocation0;
		(&V_0)->___allocation_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___allocation_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54_mA6BA30AF626F03009FB9FE08256C740321231FD8(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54_mA6BA30AF626F03009FB9FE08256C740321231FD8_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E(L_3, AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.JoinAllocation> LobbyManager::JoinRelay(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC* LobbyManager_JoinRelay_mE7ACACE19250B9E7F71D239504C9B80E852DE7E0 (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, String_t* ___joinCode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m801E398CBD085A7776D3D65FC41964E98E05D281_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8_m47FD2E958A075B4D3922CD48900F063FE89246D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m0D74C088429D33A295E602DBD6F8F7A7B36EF300_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m801E398CBD085A7776D3D65FC41964E98E05D281(AsyncTaskMethodBuilder_1_Create_m801E398CBD085A7776D3D65FC41964E98E05D281_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		String_t* L_1 = ___joinCode0;
		(&V_0)->___joinCode_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___joinCode_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8_m47FD2E958A075B4D3922CD48900F063FE89246D1(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8_m47FD2E958A075B4D3922CD48900F063FE89246D1_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m0D74C088429D33A295E602DBD6F8F7A7B36EF300(L_3, AsyncTaskMethodBuilder_1_get_Task_m0D74C088429D33A295E602DBD6F8F7A7B36EF300_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void LobbyManager::CreateLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_CreateLobby_m56E1233E4BC58C7913E838F9C92315EC54FBCE1F (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m2046D2DA08BDA9A7CF4B902A61F5F6317EABE9B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m2046D2DA08BDA9A7CF4B902A61F5F6317EABE9B6(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m2046D2DA08BDA9A7CF4B902A61F5F6317EABE9B6_RuntimeMethod_var);
		return;
	}
}
// System.Void LobbyManager::JoinLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_JoinLobby_mC71BBE43EB9EDC8613A0DC78A62E41C2D4CC6899 (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_mA2250A57A99A512CA0A508CE6633B39D3D861DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_mA2250A57A99A512CA0A508CE6633B39D3D861DD8(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_mA2250A57A99A512CA0A508CE6633B39D3D861DD8_RuntimeMethod_var);
		return;
	}
}
// Unity.Services.Lobbies.Models.Player LobbyManager::GetPlayerDetails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* LobbyManager_GetPlayerDetails_mF8EB6932E137FA4237B6524153BC54F1CA57D8ED (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA243B5B805DDE48026D86330A634261C50989D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9872C9FA5758C9E37E5177754842EB2DF6F96F5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDataObject_t0D8F6C76C20CE409B0E408EB0394488F5236027B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D593402CCA6ACC55AF9D86F83E9BF79C5A9C557);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Player {
		// 
		//     Data = new Dictionary<string, PlayerDataObject> {
		//                 {"PlayerName", new PlayerDataObject(PlayerDataObject.VisibilityOptions.Member, playerNameText.text) }
		//             }
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = V_0;
		il2cpp_codegen_initobj((&V_0), sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = V_0;
		Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* L_2 = (Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90*)il2cpp_codegen_object_new(Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Player__ctor_m20CFFAC27BA148DCFEE050FA2BC3AFB3D34E65D9(L_2, (String_t*)NULL, (String_t*)NULL, (Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4*)NULL, (String_t*)NULL, L_0, L_1, NULL);
		Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* L_3 = L_2;
		Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4* L_4 = (Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4*)il2cpp_codegen_object_new(Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m9872C9FA5758C9E37E5177754842EB2DF6F96F5D(L_4, Dictionary_2__ctor_m9872C9FA5758C9E37E5177754842EB2DF6F96F5D_RuntimeMethod_var);
		Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4* L_5 = L_4;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___playerNameText_6;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_6);
		PlayerDataObject_t0D8F6C76C20CE409B0E408EB0394488F5236027B* L_8 = (PlayerDataObject_t0D8F6C76C20CE409B0E408EB0394488F5236027B*)il2cpp_codegen_object_new(PlayerDataObject_t0D8F6C76C20CE409B0E408EB0394488F5236027B_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		PlayerDataObject__ctor_m9D6DA757F880329DC76473E143F612E008D04209(L_8, 2, L_7, NULL);
		NullCheck(L_5);
		Dictionary_2_Add_mA243B5B805DDE48026D86330A634261C50989D6C(L_5, _stringLiteral8D593402CCA6ACC55AF9D86F83E9BF79C5A9C557, L_8, Dictionary_2_Add_mA243B5B805DDE48026D86330A634261C50989D6C_RuntimeMethod_var);
		NullCheck(L_3);
		Player_set_Data_m9711066FDCA86E6A1E5FBB7F7D161A0DD6033DB0_inline(L_3, L_5, NULL);
		return L_3;
	}
}
// System.Void LobbyManager::PrintPlayers(Unity.Services.Lobbies.Models.Lobby)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager_PrintPlayers_m52643A796E644030D1525A7406198B949FA379AD (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* ___lobby0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8761EC13363DD95A743C1039E3A0ABDB58F384C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAE34B9EED0C32D22BDEF9AAB85A24F44C2ED0C55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7453D1E9C67DD9BE7E26D566498FF731DAA69C44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA01CAE0908667A0B65004B670E671EB9007D60E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9F32FF770A4A1F3DB0FE0F26D3DB4DDD4543A513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D593402CCA6ACC55AF9D86F83E9BF79C5A9C557);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t0FEC0E0A721A10CF74B8FB9621F24754A0D55B15 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (Player player in lobby.Players) {
		Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* L_0 = ___lobby0;
		NullCheck(L_0);
		List_1_tA417A94B122547E4DD22BF1528BDCDF1DB2FAFE0* L_1;
		L_1 = Lobby_get_Players_mDF781AEEDB64686EAE43DA61B7BE704FC551FC4E_inline(L_0, NULL);
		NullCheck(L_1);
		Enumerator_t0FEC0E0A721A10CF74B8FB9621F24754A0D55B15 L_2;
		L_2 = List_1_GetEnumerator_m9F32FF770A4A1F3DB0FE0F26D3DB4DDD4543A513(L_1, List_1_GetEnumerator_m9F32FF770A4A1F3DB0FE0F26D3DB4DDD4543A513_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mAE34B9EED0C32D22BDEF9AAB85A24F44C2ED0C55((&V_0), Enumerator_Dispose_mAE34B9EED0C32D22BDEF9AAB85A24F44C2ED0C55_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_000e_1:
			{
				// foreach (Player player in lobby.Players) {
				Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* L_3;
				L_3 = Enumerator_get_Current_mA01CAE0908667A0B65004B670E671EB9007D60E0_inline((&V_0), Enumerator_get_Current_mA01CAE0908667A0B65004B670E671EB9007D60E0_RuntimeMethod_var);
				// print(player.Data["PlayerName"].Value);
				NullCheck(L_3);
				Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4* L_4;
				L_4 = Player_get_Data_m53B2B5010C4B503A5DBC8483D51FCE202C717569_inline(L_3, NULL);
				NullCheck(L_4);
				PlayerDataObject_t0D8F6C76C20CE409B0E408EB0394488F5236027B* L_5;
				L_5 = Dictionary_2_get_Item_m8761EC13363DD95A743C1039E3A0ABDB58F384C4(L_4, _stringLiteral8D593402CCA6ACC55AF9D86F83E9BF79C5A9C557, Dictionary_2_get_Item_m8761EC13363DD95A743C1039E3A0ABDB58F384C4_RuntimeMethod_var);
				NullCheck(L_5);
				String_t* L_6;
				L_6 = PlayerDataObject_get_Value_m4C21C8A947ADAF71DB0857CFEC5ADE02D9FA2A86_inline(L_5, NULL);
				MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_6, NULL);
			}

IL_002e_1:
			{
				// foreach (Player player in lobby.Players) {
				bool L_7;
				L_7 = Enumerator_MoveNext_m7453D1E9C67DD9BE7E26D566498FF731DAA69C44((&V_0), Enumerator_MoveNext_m7453D1E9C67DD9BE7E26D566498FF731DAA69C44_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void LobbyManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyManager__ctor_m1A4D2FDD6CF3611918EF889457B0D4ABA7384C4B (LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* __this, const RuntimeMethod* method) 
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
// System.Void LobbyManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB6055A98455F8094C5562BCEF8C3206E9641B569 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7* L_0 = (U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7*)il2cpp_codegen_object_new(U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mD038369A22F87DFEB05AF1E08AA71301B4ECCE3D(L_0, NULL);
		((U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void LobbyManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD038369A22F87DFEB05AF1E08AA71301B4ECCE3D (U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void LobbyManager/<>c::<Start>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__6_0_mB8AC00E7D7AD18F8C3E32BA175C6C69D79C73E52 (U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF08D7716E8F57D93888BA34EF203EB3C0D98C6BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("Signed in" + AuthenticationService.Instance.PlayerId);
		RuntimeObject* L_0;
		L_0 = AuthenticationService_get_Instance_m84EBB538A503492BD441FFB825CF257EE1365BD1(NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(12 /* System.String Unity.Services.Authentication.IAuthenticationService::get_PlayerId() */, IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF08D7716E8F57D93888BA34EF203EB3C0D98C6BA, L_1, NULL);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_2, NULL);
		// };
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
// System.Void LobbyManager/<Start>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__6_MoveNext_m119EA9766BC4735A303DAD8F53F765805F7EB803 (U3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92_mB3ABA98BFB7B92974000FE2DF6D3BA5324341386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__6_0_mB8AC00E7D7AD18F8C3E32BA175C6C69D79C73E52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0048_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_00ce_1;
			}
		}
		{
			// await UnityServices.InitializeAsync();
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
			L_3 = UnityServices_InitializeAsync_mDC1CB3B695B5497E7159CE261445C907B26D223A(NULL);
			NullCheck(L_3);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_4;
			L_4 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_3, NULL);
			V_1 = L_4;
			bool L_5;
			L_5 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_5)
			{
				goto IL_0064_1;
			}
		}
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->___U3CU3E1__state_0 = L_6;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_7 = V_1;
			__this->___U3CU3Eu__1_2 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_2))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_8 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92_mB3ABA98BFB7B92974000FE2DF6D3BA5324341386(L_8, (&V_1), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92_mB3ABA98BFB7B92974000FE2DF6D3BA5324341386_RuntimeMethod_var);
			goto IL_011d;
		}

IL_0048_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = __this->___U3CU3Eu__1_2;
			V_1 = L_9;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_10 = (&__this->___U3CU3Eu__1_2);
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_0064_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			// AuthenticationService.Instance.SignedIn += () => {
			//     print("Signed in" + AuthenticationService.Instance.PlayerId);
			// };
			RuntimeObject* L_12;
			L_12 = AuthenticationService_get_Instance_m84EBB538A503492BD441FFB825CF257EE1365BD1(NULL);
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_il2cpp_TypeInfo_var);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = ((U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = L_13;
			G_B7_0 = L_14;
			G_B7_1 = L_12;
			if (L_14)
			{
				G_B8_0 = L_14;
				G_B8_1 = L_12;
				goto IL_008f_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_il2cpp_TypeInfo_var);
			U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7* L_15 = ((U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
			NullCheck(L_16);
			Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_16, L_15, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__6_0_mB8AC00E7D7AD18F8C3E32BA175C6C69D79C73E52_RuntimeMethod_var), NULL);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = L_16;
			((U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_17;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t12D15DEF069F488F7EE5E11F81A6CC4692DCB1A7_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_17);
			G_B8_0 = L_17;
			G_B8_1 = G_B7_1;
		}

IL_008f_1:
		{
			NullCheck(G_B8_1);
			InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void Unity.Services.Authentication.IAuthenticationService::add_SignedIn(System.Action) */, IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737_il2cpp_TypeInfo_var, G_B8_1, G_B8_0);
			// await AuthenticationService.Instance.SignInAnonymouslyAsync();
			RuntimeObject* L_18;
			L_18 = AuthenticationService_get_Instance_m84EBB538A503492BD441FFB825CF257EE1365BD1(NULL);
			NullCheck(L_18);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_19;
			L_19 = InterfaceFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291* >::Invoke(16 /* System.Threading.Tasks.Task Unity.Services.Authentication.IAuthenticationService::SignInAnonymouslyAsync(Unity.Services.Authentication.SignInOptions) */, IAuthenticationService_tFE9A837104B06EF3DFCDA3A7D2B59DC2FF2A1737_il2cpp_TypeInfo_var, L_18, (SignInOptions_t0B3EF4ED716067F1A1538095BF907EF217288291*)NULL);
			NullCheck(L_19);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_20;
			L_20 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_19, NULL);
			V_1 = L_20;
			bool L_21;
			L_21 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_21)
			{
				goto IL_00ea_1;
			}
		}
		{
			int32_t L_22 = 1;
			V_0 = L_22;
			__this->___U3CU3E1__state_0 = L_22;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_23 = V_1;
			__this->___U3CU3Eu__1_2 = L_23;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_2))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_24 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92_mB3ABA98BFB7B92974000FE2DF6D3BA5324341386(L_24, (&V_1), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92_mB3ABA98BFB7B92974000FE2DF6D3BA5324341386_RuntimeMethod_var);
			goto IL_011d;
		}

IL_00ce_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_25 = __this->___U3CU3Eu__1_2;
			V_1 = L_25;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_26 = (&__this->___U3CU3Eu__1_2);
			il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->___U3CU3E1__state_0 = L_27;
		}

IL_00ea_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			goto IL_010a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f3;
		}
		throw e;
	}

CATCH_00f3:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_28 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_29 = V_2;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_28, L_29, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_011d;
	}// end catch (depth: 1)

IL_010a:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_30 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_30, NULL);
	}

IL_011d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__6_MoveNext_m119EA9766BC4735A303DAD8F53F765805F7EB803_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92*>(__this + _offset);
	U3CStartU3Ed__6_MoveNext_m119EA9766BC4735A303DAD8F53F765805F7EB803(_thisAdjusted, method);
}
// System.Void LobbyManager/<Start>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__6_SetStateMachine_m8019B0C1981CDD7FE85AD9DB16E7482D540D42B8 (U3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__6_SetStateMachine_m8019B0C1981CDD7FE85AD9DB16E7482D540D42B8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__6_t09840AB5FDB237CB3148743881C8BC935C006C92*>(__this + _offset);
	U3CStartU3Ed__6_SetStateMachine_m8019B0C1981CDD7FE85AD9DB16E7482D540D42B8(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LobbyManager/<AllocateRelay>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllocateRelayU3Ed__7_MoveNext_mEBCED4D2D3562323E2C70A0CA433E9C210069415 (U3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064_TisU3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88_m093DFD133BE4ED98165462BD5114A950CD2E0675_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m4D5D65D3007290853274F8CD5164420B2F2A29E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m51A92311D3774AA6816FBCE3A76D255D13A0CB9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m21C14D8866EDB1A215DB500426037F27C2E4D833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mF4799A95907ED44730FB988294CED3E92C5F0659_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* V_1 = NULL;
	TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0048_2;
				}
			}
			{
				// Allocation allocation = await RelayService.Instance.CreateAllocationAsync(4 - 1);
				RuntimeObject* L_3;
				L_3 = RelayService_get_Instance_m6034E42B7046AFAEF11623931B56ADC3DBFF20AD(NULL);
				NullCheck(L_3);
				Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615* L_4;
				L_4 = InterfaceFuncInvoker2< Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615*, int32_t, String_t* >::Invoke(0 /* System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.Allocation> Unity.Services.Relay.IRelayService::CreateAllocationAsync(System.Int32,System.String) */, IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2_il2cpp_TypeInfo_var, L_3, 3, (String_t*)NULL);
				NullCheck(L_4);
				TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 L_5;
				L_5 = Task_1_GetAwaiter_mF4799A95907ED44730FB988294CED3E92C5F0659(L_4, Task_1_GetAwaiter_mF4799A95907ED44730FB988294CED3E92C5F0659_RuntimeMethod_var);
				V_2 = L_5;
				bool L_6;
				L_6 = TaskAwaiter_1_get_IsCompleted_m21C14D8866EDB1A215DB500426037F27C2E4D833((&V_2), TaskAwaiter_1_get_IsCompleted_m21C14D8866EDB1A215DB500426037F27C2E4D833_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0064_2;
				}
			}
			{
				int32_t L_7 = 0;
				V_0 = L_7;
				__this->___U3CU3E1__state_0 = L_7;
				TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 L_8 = V_2;
				__this->___U3CU3Eu__1_2 = L_8;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_2))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12* L_9 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064_TisU3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88_m093DFD133BE4ED98165462BD5114A950CD2E0675(L_9, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064_TisU3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88_m093DFD133BE4ED98165462BD5114A950CD2E0675_RuntimeMethod_var);
				goto IL_00a2;
			}

IL_0048_2:
			{
				TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 L_10 = __this->___U3CU3Eu__1_2;
				V_2 = L_10;
				TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064* L_11 = (&__this->___U3CU3Eu__1_2);
				il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064));
				int32_t L_12 = (-1);
				V_0 = L_12;
				__this->___U3CU3E1__state_0 = L_12;
			}

IL_0064_2:
			{
				Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* L_13;
				L_13 = TaskAwaiter_1_GetResult_m51A92311D3774AA6816FBCE3A76D255D13A0CB9A((&V_2), TaskAwaiter_1_GetResult_m51A92311D3774AA6816FBCE3A76D255D13A0CB9A_RuntimeMethod_var);
				// return allocation;
				V_1 = L_13;
				goto IL_008e;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_006e_1;
			}
			throw e;
		}

CATCH_006e_1:
		{// begin catch(Unity.Services.Relay.RelayServiceException)
			// Debug.Log(e);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199*)IL2CPP_GET_ACTIVE_EXCEPTION(RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199*)), NULL);
			// return default;
			V_1 = (Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430*)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_008e;
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12* L_14 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_15 = V_3;
		AsyncTaskMethodBuilder_1_SetException_mDE77C042A6806DC351ADFFBD6E0EE04ECFF4763A(L_14, L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mDE77C042A6806DC351ADFFBD6E0EE04ECFF4763A_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a2;
	}// end catch (depth: 1)

IL_008e:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12* L_16 = (&__this->___U3CU3Et__builder_1);
		Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* L_17 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m4D5D65D3007290853274F8CD5164420B2F2A29E7(L_16, L_17, AsyncTaskMethodBuilder_1_SetResult_m4D5D65D3007290853274F8CD5164420B2F2A29E7_RuntimeMethod_var);
	}

IL_00a2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAllocateRelayU3Ed__7_MoveNext_mEBCED4D2D3562323E2C70A0CA433E9C210069415_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88*>(__this + _offset);
	U3CAllocateRelayU3Ed__7_MoveNext_mEBCED4D2D3562323E2C70A0CA433E9C210069415(_thisAdjusted, method);
}
// System.Void LobbyManager/<AllocateRelay>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllocateRelayU3Ed__7_SetStateMachine_m8A071B30DA8D2B1E084AFA2906CE8F83FB0C8C60 (U3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mB4425F81BFE6999EF99DE881C195AE6992AE82DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t7CFFC8CB4F8BA027D31B8B2292D90E0120D99F12* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mB4425F81BFE6999EF99DE881C195AE6992AE82DA(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mB4425F81BFE6999EF99DE881C195AE6992AE82DA_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAllocateRelayU3Ed__7_SetStateMachine_m8A071B30DA8D2B1E084AFA2906CE8F83FB0C8C60_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAllocateRelayU3Ed__7_tC41394C93EEFD60B37EB0FBA774E79D6B1423E88*>(__this + _offset);
	U3CAllocateRelayU3Ed__7_SetStateMachine_m8A071B30DA8D2B1E084AFA2906CE8F83FB0C8C60(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LobbyManager/<GetRelayJoinCode>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRelayJoinCodeU3Ed__8_MoveNext_m3A1BE2B79B6228783B260B996E4B0E69C5C47385 (U3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54_mF6DADA7B53850BF4486E0C6768A6C26084DC006A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0051_2;
				}
			}
			{
				// string relayJoinCode = await RelayService.Instance.GetJoinCodeAsync(allocation.AllocationId);
				RuntimeObject* L_3;
				L_3 = RelayService_get_Instance_m6034E42B7046AFAEF11623931B56ADC3DBFF20AD(NULL);
				Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* L_4 = __this->___allocation_2;
				NullCheck(L_4);
				Guid_t L_5;
				L_5 = Allocation_get_AllocationId_mF3672B7F013E1E320C40C273C6ED9658874C3987_inline(L_4, NULL);
				NullCheck(L_3);
				Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_6;
				L_6 = InterfaceFuncInvoker1< Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, Guid_t >::Invoke(1 /* System.Threading.Tasks.Task`1<System.String> Unity.Services.Relay.IRelayService::GetJoinCodeAsync(System.Guid) */, IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2_il2cpp_TypeInfo_var, L_3, L_5);
				NullCheck(L_6);
				TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_7;
				L_7 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_6, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
				V_2 = L_7;
				bool L_8;
				L_8 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_2), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_006d_2;
				}
			}
			{
				int32_t L_9 = 0;
				V_0 = L_9;
				__this->___U3CU3E1__state_0 = L_9;
				TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_10 = V_2;
				__this->___U3CU3Eu__1_3 = L_10;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_11 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54_mF6DADA7B53850BF4486E0C6768A6C26084DC006A(L_11, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54_mF6DADA7B53850BF4486E0C6768A6C26084DC006A_RuntimeMethod_var);
				goto IL_00ab;
			}

IL_0051_2:
			{
				TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_12 = __this->___U3CU3Eu__1_3;
				V_2 = L_12;
				TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_13 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
				int32_t L_14 = (-1);
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
			}

IL_006d_2:
			{
				String_t* L_15;
				L_15 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_2), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
				// return relayJoinCode;
				V_1 = L_15;
				goto IL_0097;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0077_1;
			}
			throw e;
		}

CATCH_0077_1:
		{// begin catch(Unity.Services.Relay.RelayServiceException)
			// Debug.Log(e);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199*)IL2CPP_GET_ACTIVE_EXCEPTION(RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199*)), NULL);
			// return default;
			V_1 = (String_t*)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0097;
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0080;
		}
		throw e;
	}

CATCH_0080:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_16 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_17 = V_3;
		AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C(L_16, L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ab;
	}// end catch (depth: 1)

IL_0097:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_18 = (&__this->___U3CU3Et__builder_1);
		String_t* L_19 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E(L_18, L_19, AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
	}

IL_00ab:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetRelayJoinCodeU3Ed__8_MoveNext_m3A1BE2B79B6228783B260B996E4B0E69C5C47385_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54*>(__this + _offset);
	U3CGetRelayJoinCodeU3Ed__8_MoveNext_m3A1BE2B79B6228783B260B996E4B0E69C5C47385(_thisAdjusted, method);
}
// System.Void LobbyManager/<GetRelayJoinCode>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRelayJoinCodeU3Ed__8_SetStateMachine_mAF0929509EACF73E954C365E5DD5BBE91A2023C5 (U3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetRelayJoinCodeU3Ed__8_SetStateMachine_mAF0929509EACF73E954C365E5DD5BBE91A2023C5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetRelayJoinCodeU3Ed__8_t3F48446C3D3D4C9A7709E11D2454E940FDFB6E54*>(__this + _offset);
	U3CGetRelayJoinCodeU3Ed__8_SetStateMachine_mAF0929509EACF73E954C365E5DD5BBE91A2023C5(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LobbyManager/<JoinRelay>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinRelayU3Ed__9_MoveNext_mB951DFA977580321E40A33EC4FDCBA8189E7FF67 (U3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D_TisU3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8_m48B28DAA129ED629137F6F34582E81F154BEDC31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m096450B47F6859FC11E5F91433776513CADD67B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m51425551EA802FC593AA4584F04C3458AEC6EC9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m33FB81ED48D176A4BB167BA9C9ED52D6CB8C53F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2C8628CE07135D4675ED0A27F632652572D0D92B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* V_1 = NULL;
	TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_004c_2;
				}
			}
			{
				// JoinAllocation joinAllocation = await RelayService.Instance.JoinAllocationAsync(joinCode);
				RuntimeObject* L_3;
				L_3 = RelayService_get_Instance_m6034E42B7046AFAEF11623931B56ADC3DBFF20AD(NULL);
				String_t* L_4 = __this->___joinCode_2;
				NullCheck(L_3);
				Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC* L_5;
				L_5 = InterfaceFuncInvoker1< Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC*, String_t* >::Invoke(2 /* System.Threading.Tasks.Task`1<Unity.Services.Relay.Models.JoinAllocation> Unity.Services.Relay.IRelayService::JoinAllocationAsync(System.String) */, IRelayService_tF03E0621EC4EC99A4AE428E304060B7F905C9FD2_il2cpp_TypeInfo_var, L_3, L_4);
				NullCheck(L_5);
				TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D L_6;
				L_6 = Task_1_GetAwaiter_m2C8628CE07135D4675ED0A27F632652572D0D92B(L_5, Task_1_GetAwaiter_m2C8628CE07135D4675ED0A27F632652572D0D92B_RuntimeMethod_var);
				V_2 = L_6;
				bool L_7;
				L_7 = TaskAwaiter_1_get_IsCompleted_m33FB81ED48D176A4BB167BA9C9ED52D6CB8C53F5((&V_2), TaskAwaiter_1_get_IsCompleted_m33FB81ED48D176A4BB167BA9C9ED52D6CB8C53F5_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0068_2;
				}
			}
			{
				int32_t L_8 = 0;
				V_0 = L_8;
				__this->___U3CU3E1__state_0 = L_8;
				TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D L_9 = V_2;
				__this->___U3CU3Eu__1_3 = L_9;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771* L_10 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D_TisU3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8_m48B28DAA129ED629137F6F34582E81F154BEDC31(L_10, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D_TisU3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8_m48B28DAA129ED629137F6F34582E81F154BEDC31_RuntimeMethod_var);
				goto IL_00a6;
			}

IL_004c_2:
			{
				TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D L_11 = __this->___U3CU3Eu__1_3;
				V_2 = L_11;
				TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D* L_12 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D));
				int32_t L_13 = (-1);
				V_0 = L_13;
				__this->___U3CU3E1__state_0 = L_13;
			}

IL_0068_2:
			{
				JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* L_14;
				L_14 = TaskAwaiter_1_GetResult_m51425551EA802FC593AA4584F04C3458AEC6EC9F((&V_2), TaskAwaiter_1_GetResult_m51425551EA802FC593AA4584F04C3458AEC6EC9F_RuntimeMethod_var);
				// return joinAllocation;
				V_1 = L_14;
				goto IL_0092;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0072_1;
			}
			throw e;
		}

CATCH_0072_1:
		{// begin catch(Unity.Services.Relay.RelayServiceException)
			// Debug.Log(e);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199*)IL2CPP_GET_ACTIVE_EXCEPTION(RelayServiceException_t878CA35BA987AAB6E16C86C0D0D18782256FB199*)), NULL);
			// return default;
			V_1 = (JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A*)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0092;
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007b;
		}
		throw e;
	}

CATCH_007b:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771* L_15 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_16 = V_3;
		AsyncTaskMethodBuilder_1_SetException_mF239616FE7D98BF9C7A0A8B6E122346EA8D57D27(L_15, L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF239616FE7D98BF9C7A0A8B6E122346EA8D57D27_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a6;
	}// end catch (depth: 1)

IL_0092:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771* L_17 = (&__this->___U3CU3Et__builder_1);
		JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* L_18 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m096450B47F6859FC11E5F91433776513CADD67B4(L_17, L_18, AsyncTaskMethodBuilder_1_SetResult_m096450B47F6859FC11E5F91433776513CADD67B4_RuntimeMethod_var);
	}

IL_00a6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CJoinRelayU3Ed__9_MoveNext_mB951DFA977580321E40A33EC4FDCBA8189E7FF67_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8*>(__this + _offset);
	U3CJoinRelayU3Ed__9_MoveNext_mB951DFA977580321E40A33EC4FDCBA8189E7FF67(_thisAdjusted, method);
}
// System.Void LobbyManager/<JoinRelay>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinRelayU3Ed__9_SetStateMachine_mE3C1BF1687BBA657949C2E66A2E04F151F100482 (U3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m25C7244280E880F59DDB0490E1E12970D0E60680_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tB7AE4918BE88CB9A2454731B3D63DA9E346AC771* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m25C7244280E880F59DDB0490E1E12970D0E60680(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m25C7244280E880F59DDB0490E1E12970D0E60680_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CJoinRelayU3Ed__9_SetStateMachine_mE3C1BF1687BBA657949C2E66A2E04F151F100482_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CJoinRelayU3Ed__9_t7E13B6E50750059FB4DD4DB9EB0AF00897A7E3D8*>(__this + _offset);
	U3CJoinRelayU3Ed__9_SetStateMachine_mE3C1BF1687BBA657949C2E66A2E04F151F100482(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LobbyManager/<CreateLobby>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLobbyU3Ed__10_MoveNext_mB3C2BA4A2D080AA30F36BBF853A781FFDD509705 (U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m75F7D31730CB28148C85E13421C8D44D67CACE56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_mD246729D9B70467A23435C77046DCEDABCC502D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m00CB53425681B565CB81245094496AE2F5EA88CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataObject_tCE3C7F1A26400A13D21A110FE0508CC2BA73AADD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA69276749EF73DFA40B6924A067B3F441359A9A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m85E18A57786A8B017E426523F856642EA45E0122_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILobbyService_t4F07247F1A81F56EA2F668B1F9A7E89FD2239CD4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyService_t64DAF17F1DA9F21F3CA655FB2D3A7E2484C15508_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m14C87DCCDD83A0D46087BADE40E9DB29D574BF0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m51A92311D3774AA6816FBCE3A76D255D13A0CB9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m21C14D8866EDB1A215DB500426037F27C2E4D833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m674F4EA58E107D380064CD33B2019F20096B4B71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m3063B5DDFA87B3DD52F9BF2867E39F1C8C6D5964_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mF4799A95907ED44730FB988294CED3E92C5F0659_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateLobbyOptions_t515C0450F4C550EDE74AF44D1707FFE282A64AF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral365A622C1D0761A5DFD0E0E9F6BAA2D68167EAE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE339799EDC0226109A35BD2FF389B7E82437CD7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* V_1 = NULL;
	String_t* V_2 = NULL;
	CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46* V_3 = NULL;
	String_t* V_4 = NULL;
	Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* V_5 = NULL;
	TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D V_6;
	memset((&V_6), 0, sizeof(V_6));
	Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* V_7 = NULL;
	TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 V_8;
	memset((&V_8), 0, sizeof(V_8));
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				switch (L_3)
				{
					case 0:
					{
						goto IL_0094_2;
					}
					case 1:
					{
						goto IL_00fc_2;
					}
					case 2:
					{
						goto IL_016a_2;
					}
					case 3:
					{
						goto IL_01fd_2;
					}
				}
			}
			{
				// string lobbyName = createLobbyNameText.text;
				LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* L_4 = V_1;
				NullCheck(L_4);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = L_4->___createLobbyNameText_4;
				NullCheck(L_5);
				String_t* L_6;
				L_6 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_5);
				V_2 = L_6;
				// CreateLobbyOptions createLobbyOptions = new CreateLobbyOptions {
				//     IsPrivate = false,
				//     Player = GetPlayerDetails()
				// };
				CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46* L_7 = (CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46*)il2cpp_codegen_object_new(CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				CreateLobbyOptions__ctor_m1A2D1421F78790B2BE9CA389AA9E09A7BC6F714B(L_7, NULL);
				CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46* L_8 = L_7;
				Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_9;
				memset((&L_9), 0, sizeof(L_9));
				Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_9), (bool)0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
				NullCheck(L_8);
				CreateLobbyOptions_set_IsPrivate_m8790F677FEF9CAAC23FC2B7F3965E85D60923658_inline(L_8, L_9, NULL);
				CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46* L_10 = L_8;
				LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* L_11 = V_1;
				NullCheck(L_11);
				Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* L_12;
				L_12 = LobbyManager_GetPlayerDetails_mF8EB6932E137FA4237B6524153BC54F1CA57D8ED(L_11, NULL);
				NullCheck(L_10);
				CreateLobbyOptions_set_Player_m38770CD078390E1DC9D84ACFC0F186C396270A20_inline(L_10, L_12, NULL);
				V_3 = L_10;
				// Lobby lobby = await LobbyService.Instance.CreateLobbyAsync(lobbyName, 4, createLobbyOptions);
				il2cpp_codegen_runtime_class_init_inline(LobbyService_t64DAF17F1DA9F21F3CA655FB2D3A7E2484C15508_il2cpp_TypeInfo_var);
				RuntimeObject* L_13;
				L_13 = LobbyService_get_Instance_m4E0DEAF7F6E132F1280E51EC00060AE88DE4DDC1(NULL);
				String_t* L_14 = V_2;
				CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46* L_15 = V_3;
				NullCheck(L_13);
				Task_1_t14D07ED713222B97E440F98F73CDA5AD1534DDD1* L_16;
				L_16 = InterfaceFuncInvoker3< Task_1_t14D07ED713222B97E440F98F73CDA5AD1534DDD1*, String_t*, int32_t, CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46* >::Invoke(0 /* System.Threading.Tasks.Task`1<Unity.Services.Lobbies.Models.Lobby> Unity.Services.Lobbies.ILobbyService::CreateLobbyAsync(System.String,System.Int32,Unity.Services.Lobbies.CreateLobbyOptions) */, ILobbyService_t4F07247F1A81F56EA2F668B1F9A7E89FD2239CD4_il2cpp_TypeInfo_var, L_13, L_14, 4, L_15);
				NullCheck(L_16);
				TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D L_17;
				L_17 = Task_1_GetAwaiter_m3063B5DDFA87B3DD52F9BF2867E39F1C8C6D5964(L_16, Task_1_GetAwaiter_m3063B5DDFA87B3DD52F9BF2867E39F1C8C6D5964_RuntimeMethod_var);
				V_6 = L_17;
				bool L_18;
				L_18 = TaskAwaiter_1_get_IsCompleted_m674F4EA58E107D380064CD33B2019F20096B4B71((&V_6), TaskAwaiter_1_get_IsCompleted_m674F4EA58E107D380064CD33B2019F20096B4B71_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_00b1_2;
				}
			}
			{
				int32_t L_19 = 0;
				V_0 = L_19;
				__this->___U3CU3E1__state_0 = L_19;
				TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D L_20 = V_6;
				__this->___U3CU3Eu__1_5 = L_20;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_21 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_mD246729D9B70467A23435C77046DCEDABCC502D1(L_21, (&V_6), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_mD246729D9B70467A23435C77046DCEDABCC502D1_RuntimeMethod_var);
				goto IL_02a3;
			}

IL_0094_2:
			{
				TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D L_22 = __this->___U3CU3Eu__1_5;
				V_6 = L_22;
				TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D* L_23 = (&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_23, sizeof(TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D));
				int32_t L_24 = (-1);
				V_0 = L_24;
				__this->___U3CU3E1__state_0 = L_24;
			}

IL_00b1_2:
			{
				Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* L_25;
				L_25 = TaskAwaiter_1_GetResult_m14C87DCCDD83A0D46087BADE40E9DB29D574BF0D((&V_6), TaskAwaiter_1_GetResult_m14C87DCCDD83A0D46087BADE40E9DB29D574BF0D_RuntimeMethod_var);
				V_5 = L_25;
				Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* L_26 = V_5;
				__this->___U3ClobbyU3E5__2_3 = L_26;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClobbyU3E5__2_3), (void*)L_26);
				// Allocation allocation = await AllocateRelay();
				LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* L_27 = V_1;
				NullCheck(L_27);
				Task_1_t1E77B39C23C2ACAE3B2AC948EF69F6D888B24615* L_28;
				L_28 = LobbyManager_AllocateRelay_m4CCA6C3F5326AB2279E3AE43C13BC0E3CCB3EADE(L_27, NULL);
				NullCheck(L_28);
				TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 L_29;
				L_29 = Task_1_GetAwaiter_mF4799A95907ED44730FB988294CED3E92C5F0659(L_28, Task_1_GetAwaiter_mF4799A95907ED44730FB988294CED3E92C5F0659_RuntimeMethod_var);
				V_8 = L_29;
				bool L_30;
				L_30 = TaskAwaiter_1_get_IsCompleted_m21C14D8866EDB1A215DB500426037F27C2E4D833((&V_8), TaskAwaiter_1_get_IsCompleted_m21C14D8866EDB1A215DB500426037F27C2E4D833_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_0119_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
				TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 L_32 = V_8;
				__this->___U3CU3Eu__2_6 = L_32;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_33 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m00CB53425681B565CB81245094496AE2F5EA88CB(L_33, (&V_8), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m00CB53425681B565CB81245094496AE2F5EA88CB_RuntimeMethod_var);
				goto IL_02a3;
			}

IL_00fc_2:
			{
				TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064 L_34 = __this->___U3CU3Eu__2_6;
				V_8 = L_34;
				TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064* L_35 = (&__this->___U3CU3Eu__2_6);
				il2cpp_codegen_initobj(L_35, sizeof(TaskAwaiter_1_tD8E8175DEF9055298F7F78CC604BB01547F5D064));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state_0 = L_36;
			}

IL_0119_2:
			{
				Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* L_37;
				L_37 = TaskAwaiter_1_GetResult_m51A92311D3774AA6816FBCE3A76D255D13A0CB9A((&V_8), TaskAwaiter_1_GetResult_m51A92311D3774AA6816FBCE3A76D255D13A0CB9A_RuntimeMethod_var);
				V_7 = L_37;
				Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* L_38 = V_7;
				__this->___U3CallocationU3E5__3_4 = L_38;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CallocationU3E5__3_4), (void*)L_38);
				// string relayJoinCode = await GetRelayJoinCode(allocation);
				LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* L_39 = V_1;
				Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* L_40 = __this->___U3CallocationU3E5__3_4;
				NullCheck(L_39);
				Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_41;
				L_41 = LobbyManager_GetRelayJoinCode_m8D37EBA3FFE1E7342CB0FD6C3F4B199F10D6DF0B(L_39, L_40, NULL);
				NullCheck(L_41);
				TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_42;
				L_42 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_41, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
				V_9 = L_42;
				bool L_43;
				L_43 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_9), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
				if (L_43)
				{
					goto IL_0187_2;
				}
			}
			{
				int32_t L_44 = 2;
				V_0 = L_44;
				__this->___U3CU3E1__state_0 = L_44;
				TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_45 = V_9;
				__this->___U3CU3Eu__3_7 = L_45;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__3_7))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_46 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m75F7D31730CB28148C85E13421C8D44D67CACE56(L_46, (&V_9), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_m75F7D31730CB28148C85E13421C8D44D67CACE56_RuntimeMethod_var);
				goto IL_02a3;
			}

IL_016a_2:
			{
				TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_47 = __this->___U3CU3Eu__3_7;
				V_9 = L_47;
				TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_48 = (&__this->___U3CU3Eu__3_7);
				il2cpp_codegen_initobj(L_48, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
				int32_t L_49 = (-1);
				V_0 = L_49;
				__this->___U3CU3E1__state_0 = L_49;
			}

IL_0187_2:
			{
				String_t* L_50;
				L_50 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_9), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
				V_4 = L_50;
				// await LobbyService.Instance.UpdateLobbyAsync(lobby.Id, new UpdateLobbyOptions {
				//     Data = new Dictionary<string, DataObject> {
				//          { KEY_RELAY_JOIN_CODE , new DataObject(DataObject.VisibilityOptions.Member, relayJoinCode) }
				//      }
				// });
				il2cpp_codegen_runtime_class_init_inline(LobbyService_t64DAF17F1DA9F21F3CA655FB2D3A7E2484C15508_il2cpp_TypeInfo_var);
				RuntimeObject* L_51;
				L_51 = LobbyService_get_Instance_m4E0DEAF7F6E132F1280E51EC00060AE88DE4DDC1(NULL);
				Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* L_52 = __this->___U3ClobbyU3E5__2_3;
				NullCheck(L_52);
				String_t* L_53;
				L_53 = Lobby_get_Id_mAA7BA102381A42EF34951DEF00C116611BC9D403_inline(L_52, NULL);
				UpdateLobbyOptions_t515C0450F4C550EDE74AF44D1707FFE282A64AF9* L_54 = (UpdateLobbyOptions_t515C0450F4C550EDE74AF44D1707FFE282A64AF9*)il2cpp_codegen_object_new(UpdateLobbyOptions_t515C0450F4C550EDE74AF44D1707FFE282A64AF9_il2cpp_TypeInfo_var);
				NullCheck(L_54);
				UpdateLobbyOptions__ctor_mE224C92DB7B358E05FCCF8935051E6611E44538E(L_54, NULL);
				UpdateLobbyOptions_t515C0450F4C550EDE74AF44D1707FFE282A64AF9* L_55 = L_54;
				Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E* L_56 = (Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E*)il2cpp_codegen_object_new(Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E_il2cpp_TypeInfo_var);
				NullCheck(L_56);
				Dictionary_2__ctor_m85E18A57786A8B017E426523F856642EA45E0122(L_56, Dictionary_2__ctor_m85E18A57786A8B017E426523F856642EA45E0122_RuntimeMethod_var);
				Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E* L_57 = L_56;
				String_t* L_58 = V_4;
				DataObject_tCE3C7F1A26400A13D21A110FE0508CC2BA73AADD* L_59 = (DataObject_tCE3C7F1A26400A13D21A110FE0508CC2BA73AADD*)il2cpp_codegen_object_new(DataObject_tCE3C7F1A26400A13D21A110FE0508CC2BA73AADD_il2cpp_TypeInfo_var);
				NullCheck(L_59);
				DataObject__ctor_m229033F052BDB87954349469100D9D65DB4A0C14(L_59, 2, L_58, 0, NULL);
				NullCheck(L_57);
				Dictionary_2_Add_mA69276749EF73DFA40B6924A067B3F441359A9A1(L_57, _stringLiteral365A622C1D0761A5DFD0E0E9F6BAA2D68167EAE2, L_59, Dictionary_2_Add_mA69276749EF73DFA40B6924A067B3F441359A9A1_RuntimeMethod_var);
				NullCheck(L_55);
				UpdateLobbyOptions_set_Data_mE129466296853E2A4C52786BF129BA6999764802_inline(L_55, L_57, NULL);
				NullCheck(L_51);
				Task_1_t14D07ED713222B97E440F98F73CDA5AD1534DDD1* L_60;
				L_60 = InterfaceFuncInvoker2< Task_1_t14D07ED713222B97E440F98F73CDA5AD1534DDD1*, String_t*, UpdateLobbyOptions_t515C0450F4C550EDE74AF44D1707FFE282A64AF9* >::Invoke(10 /* System.Threading.Tasks.Task`1<Unity.Services.Lobbies.Models.Lobby> Unity.Services.Lobbies.ILobbyService::UpdateLobbyAsync(System.String,Unity.Services.Lobbies.UpdateLobbyOptions) */, ILobbyService_t4F07247F1A81F56EA2F668B1F9A7E89FD2239CD4_il2cpp_TypeInfo_var, L_51, L_53, L_55);
				NullCheck(L_60);
				TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D L_61;
				L_61 = Task_1_GetAwaiter_m3063B5DDFA87B3DD52F9BF2867E39F1C8C6D5964(L_60, Task_1_GetAwaiter_m3063B5DDFA87B3DD52F9BF2867E39F1C8C6D5964_RuntimeMethod_var);
				V_6 = L_61;
				bool L_62;
				L_62 = TaskAwaiter_1_get_IsCompleted_m674F4EA58E107D380064CD33B2019F20096B4B71((&V_6), TaskAwaiter_1_get_IsCompleted_m674F4EA58E107D380064CD33B2019F20096B4B71_RuntimeMethod_var);
				if (L_62)
				{
					goto IL_021a_2;
				}
			}
			{
				int32_t L_63 = 3;
				V_0 = L_63;
				__this->___U3CU3E1__state_0 = L_63;
				TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D L_64 = V_6;
				__this->___U3CU3Eu__1_5 = L_64;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_65 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_mD246729D9B70467A23435C77046DCEDABCC502D1(L_65, (&V_6), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D_TisU3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11_mD246729D9B70467A23435C77046DCEDABCC502D1_RuntimeMethod_var);
				goto IL_02a3;
			}

IL_01fd_2:
			{
				TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D L_66 = __this->___U3CU3Eu__1_5;
				V_6 = L_66;
				TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D* L_67 = (&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_67, sizeof(TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D));
				int32_t L_68 = (-1);
				V_0 = L_68;
				__this->___U3CU3E1__state_0 = L_68;
			}

IL_021a_2:
			{
				Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* L_69;
				L_69 = TaskAwaiter_1_GetResult_m14C87DCCDD83A0D46087BADE40E9DB29D574BF0D((&V_6), TaskAwaiter_1_GetResult_m14C87DCCDD83A0D46087BADE40E9DB29D574BF0D_RuntimeMethod_var);
				// NetworkManager.Singleton.GetComponent<UnityTransport>().SetRelayServerData(new RelayServerData(allocation, "dtls"));
				il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
				NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_70;
				L_70 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
				NullCheck(L_70);
				UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_71;
				L_71 = Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28(L_70, Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28_RuntimeMethod_var);
				Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* L_72 = __this->___U3CallocationU3E5__3_4;
				RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 L_73;
				memset((&L_73), 0, sizeof(L_73));
				RelayServerData__ctor_mEF9C848F17FA991D2042E23093F82B3FA7D470D9((&L_73), L_72, _stringLiteralAE339799EDC0226109A35BD2FF389B7E82437CD7, /*hidden argument*/NULL);
				NullCheck(L_71);
				UnityTransport_SetRelayServerData_m5ECB5AF89AEFCDF25BD0C7ABF37DB6731DF5C312(L_71, L_73, NULL);
				// NetworkManager.Singleton.StartHost();
				NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_74;
				L_74 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
				NullCheck(L_74);
				bool L_75;
				L_75 = NetworkManager_StartHost_mC5360D94182499D592AB3E51D31E9D662764F31F(L_74, NULL);
				// Loader.LoadNetwork(Loader.Scene.GameScene);
				Loader_LoadNetwork_m7DFA4F73B2B62E8CBCB38D2124405AA12F0E26F1(2, NULL);
				// PrintPlayers(lobby);
				LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* L_76 = V_1;
				Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* L_77 = __this->___U3ClobbyU3E5__2_3;
				NullCheck(L_76);
				LobbyManager_PrintPlayers_m52643A796E644030D1525A7406198B949FA379AD(L_76, L_77, NULL);
				// } catch (LobbyServiceException e) {
				__this->___U3ClobbyU3E5__2_3 = (Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClobbyU3E5__2_3), (void*)(Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C*)NULL);
				__this->___U3CallocationU3E5__3_4 = (Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CallocationU3E5__3_4), (void*)(Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430*)NULL);
				goto IL_0275_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LobbyServiceException_tF62E8385211176AE2293E3FD2C169ABDA3C85010_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_026e_1;
			}
			throw e;
		}

CATCH_026e_1:
		{// begin catch(Unity.Services.Lobbies.LobbyServiceException)
			// print(e);
			MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(((LobbyServiceException_tF62E8385211176AE2293E3FD2C169ABDA3C85010*)IL2CPP_GET_ACTIVE_EXCEPTION(LobbyServiceException_tF62E8385211176AE2293E3FD2C169ABDA3C85010*)), NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0275_1;
		}// end catch (depth: 2)

IL_0275_1:
		{
			goto IL_0290;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0277;
		}
		throw e;
	}

CATCH_0277:
	{// begin catch(System.Exception)
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_78 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_79 = V_10;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_78, L_79, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02a3;
	}// end catch (depth: 1)

IL_0290:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_80 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_80, NULL);
	}

IL_02a3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCreateLobbyU3Ed__10_MoveNext_mB3C2BA4A2D080AA30F36BBF853A781FFDD509705_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11*>(__this + _offset);
	U3CCreateLobbyU3Ed__10_MoveNext_mB3C2BA4A2D080AA30F36BBF853A781FFDD509705(_thisAdjusted, method);
}
// System.Void LobbyManager/<CreateLobby>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLobbyU3Ed__10_SetStateMachine_m64B71A6CC5925C7CD23902FCAA9D6A12267BF789 (U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCreateLobbyU3Ed__10_SetStateMachine_m64B71A6CC5925C7CD23902FCAA9D6A12267BF789_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCreateLobbyU3Ed__10_t7EDA4E27538990AFF7767C2D84C008E95C7D5B11*>(__this + _offset);
	U3CCreateLobbyU3Ed__10_SetStateMachine_m64B71A6CC5925C7CD23902FCAA9D6A12267BF789(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LobbyManager/<JoinLobby>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinLobbyU3Ed__11_MoveNext_m3537DB5FB86E141F16604D9054A82C88F82F6F0A (U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_m53E5BAC13FE496C3537F605FF0E537B241AAB4E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_mE31ED9298D551C909C47806C1032918FDE6DAE2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_m8124AF5EA7DA5D1615D441A109977E96B7E72918_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m046F39774A960F8342F509030C7CC97BDD51B2A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5345C129C7452F71CE15F31EAE87AA4D60730623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF80AD77E11742CEE46C977B72EABDC8669CA384A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m338AD6E2690E5B550328E99F97A5D3C00C3256C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILobbyService_t4F07247F1A81F56EA2F668B1F9A7E89FD2239CD4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoinLobbyByCodeOptions_tF4262E7977AFCD63208DE6BF0D299E8B95727D85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDC89155D172B221FCAD4C1AC5DB032A0D264D7FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LobbyService_t64DAF17F1DA9F21F3CA655FB2D3A7E2484C15508_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m14C87DCCDD83A0D46087BADE40E9DB29D574BF0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m51425551EA802FC593AA4584F04C3458AEC6EC9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m9711D191C6A3EB3886BBA11822AC0384188C1751_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m27B2F6175FF5AFC0486212632A79556399CA6B7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m33FB81ED48D176A4BB167BA9C9ED52D6CB8C53F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m674F4EA58E107D380064CD33B2019F20096B4B71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2C8628CE07135D4675ED0A27F632652572D0D92B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m3063B5DDFA87B3DD52F9BF2867E39F1C8C6D5964_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m3FB42C716CEC5AA7A9ED19066184B5A1CF3D65A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral365A622C1D0761A5DFD0E0E9F6BAA2D68167EAE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE339799EDC0226109A35BD2FF389B7E82437CD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB876A663CDF50B1C84EE2F38A925B15FB3EC3B7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* V_1 = NULL;
	String_t* V_2 = NULL;
	JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* V_3 = NULL;
	TaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Enumerator_t62A7CDD4452EE9AC00A96983754D89E36D8D2C30 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* V_6 = NULL;
	TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D V_7;
	memset((&V_7), 0, sizeof(V_7));
	TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)2))))
			{
				goto IL_002e_1;
			}
		}
		{
			// string lobbyId = "";
			__this->___U3ClobbyIdU3E5__2_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClobbyIdU3E5__2_3), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
			// string lobbyName = joinLobbyNameText.text;
			LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* L_3 = V_1;
			NullCheck(L_3);
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = L_3->___joinLobbyNameText_5;
			NullCheck(L_4);
			String_t* L_5;
			L_5 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_4);
			__this->___U3ClobbyNameU3E5__3_4 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClobbyNameU3E5__3_4), (void*)L_5);
		}

IL_002e_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_6 = V_0;
				switch (L_6)
				{
					case 0:
					{
						goto IL_0092_2;
					}
					case 1:
					{
						goto IL_0175_2;
					}
					case 2:
					{
						goto IL_01e9_2;
					}
				}
			}
			{
				// JoinLobbyByCodeOptions joinLobbyByCodeOptions = new JoinLobbyByCodeOptions {
				//     Player = GetPlayerDetails()
				// };
				JoinLobbyByCodeOptions_tF4262E7977AFCD63208DE6BF0D299E8B95727D85* L_7 = (JoinLobbyByCodeOptions_tF4262E7977AFCD63208DE6BF0D299E8B95727D85*)il2cpp_codegen_object_new(JoinLobbyByCodeOptions_tF4262E7977AFCD63208DE6BF0D299E8B95727D85_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				JoinLobbyByCodeOptions__ctor_mA619AC213268D47110809259C1F4E3ADA21FADB6(L_7, NULL);
				JoinLobbyByCodeOptions_tF4262E7977AFCD63208DE6BF0D299E8B95727D85* L_8 = L_7;
				LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* L_9 = V_1;
				NullCheck(L_9);
				Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* L_10;
				L_10 = LobbyManager_GetPlayerDetails_mF8EB6932E137FA4237B6524153BC54F1CA57D8ED(L_9, NULL);
				NullCheck(L_8);
				JoinLobbyByCodeOptions_set_Player_mFFD7C9175E53262398E884875A89C02B6C5BE8AF_inline(L_8, L_10, NULL);
				// QueryResponse queryResponse = await Lobbies.Instance.QueryLobbiesAsync();
				RuntimeObject* L_11;
				L_11 = Lobbies_get_Instance_m0DEE71DFAC045D1C40A56B231A4182EFCA1D544E(NULL);
				NullCheck(L_11);
				Task_1_tE9AEBB5E01E6AE360BD0305D0AE3A6756F3C81F2* L_12;
				L_12 = InterfaceFuncInvoker1< Task_1_tE9AEBB5E01E6AE360BD0305D0AE3A6756F3C81F2*, QueryLobbiesOptions_t7D1B98D68E413D43AA89E1F409EBEDAB5F174F23* >::Invoke(7 /* System.Threading.Tasks.Task`1<Unity.Services.Lobbies.Models.QueryResponse> Unity.Services.Lobbies.ILobbyService::QueryLobbiesAsync(Unity.Services.Lobbies.QueryLobbiesOptions) */, ILobbyService_t4F07247F1A81F56EA2F668B1F9A7E89FD2239CD4_il2cpp_TypeInfo_var, L_11, (QueryLobbiesOptions_t7D1B98D68E413D43AA89E1F409EBEDAB5F174F23*)NULL);
				NullCheck(L_12);
				TaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62 L_13;
				L_13 = Task_1_GetAwaiter_m3FB42C716CEC5AA7A9ED19066184B5A1CF3D65A0(L_12, Task_1_GetAwaiter_m3FB42C716CEC5AA7A9ED19066184B5A1CF3D65A0_RuntimeMethod_var);
				V_4 = L_13;
				bool L_14;
				L_14 = TaskAwaiter_1_get_IsCompleted_m27B2F6175FF5AFC0486212632A79556399CA6B7E((&V_4), TaskAwaiter_1_get_IsCompleted_m27B2F6175FF5AFC0486212632A79556399CA6B7E_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00af_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				TaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62 L_16 = V_4;
				__this->___U3CU3Eu__1_5 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_17 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_m53E5BAC13FE496C3537F605FF0E537B241AAB4E6(L_17, (&V_4), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_m53E5BAC13FE496C3537F605FF0E537B241AAB4E6_RuntimeMethod_var);
				goto IL_0286;
			}

IL_0092_2:
			{
				TaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62 L_18 = __this->___U3CU3Eu__1_5;
				V_4 = L_18;
				TaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62* L_19 = (&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_1_tB76030B563AF991D76787A900929134985EC7C62));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00af_2:
			{
				QueryResponse_tB3161BB8C249085FF9A3289A155FDDE1B30373A6* L_21;
				L_21 = TaskAwaiter_1_GetResult_m9711D191C6A3EB3886BBA11822AC0384188C1751((&V_4), TaskAwaiter_1_GetResult_m9711D191C6A3EB3886BBA11822AC0384188C1751_RuntimeMethod_var);
				// foreach (Lobby lobby in queryResponse.Results) {
				NullCheck(L_21);
				List_1_t2042FCDC35CA07B523474220DF460A1A043B4C9D* L_22;
				L_22 = QueryResponse_get_Results_mDAE2B6B500301687A39581DDB74DAE6B00A3BA11_inline(L_21, NULL);
				NullCheck(L_22);
				Enumerator_t62A7CDD4452EE9AC00A96983754D89E36D8D2C30 L_23;
				L_23 = List_1_GetEnumerator_mDC89155D172B221FCAD4C1AC5DB032A0D264D7FA(L_22, List_1_GetEnumerator_mDC89155D172B221FCAD4C1AC5DB032A0D264D7FA_RuntimeMethod_var);
				V_5 = L_23;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_011e_2:
					{// begin finally (depth: 3)
						{
							int32_t L_24 = V_0;
							if ((((int32_t)L_24) >= ((int32_t)0)))
							{
								goto IL_012f_2;
							}
						}
						{
							Enumerator_Dispose_m5345C129C7452F71CE15F31EAE87AA4D60730623((&V_5), Enumerator_Dispose_m5345C129C7452F71CE15F31EAE87AA4D60730623_RuntimeMethod_var);
						}

IL_012f_2:
						{
							return;
						}
					}// end finally (depth: 3)
				});
				try
				{// begin try (depth: 3)
					{
						goto IL_0113_3;
					}

IL_00c4_3:
					{
						// foreach (Lobby lobby in queryResponse.Results) {
						Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* L_25;
						L_25 = Enumerator_get_Current_m338AD6E2690E5B550328E99F97A5D3C00C3256C9_inline((&V_5), Enumerator_get_Current_m338AD6E2690E5B550328E99F97A5D3C00C3256C9_RuntimeMethod_var);
						V_6 = L_25;
						// print("Lobby code" + lobby.Name.ToString());
						Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* L_26 = V_6;
						NullCheck(L_26);
						String_t* L_27;
						L_27 = Lobby_get_Name_m2B0F7CB176D09B582F2C80DFE5C151DEA608AF04_inline(L_26, NULL);
						NullCheck(L_27);
						String_t* L_28;
						L_28 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
						String_t* L_29;
						L_29 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEB876A663CDF50B1C84EE2F38A925B15FB3EC3B7, L_28, NULL);
						MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_29, NULL);
						// if (lobby.Name.ToString() == lobbyName) {
						Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* L_30 = V_6;
						NullCheck(L_30);
						String_t* L_31;
						L_31 = Lobby_get_Name_m2B0F7CB176D09B582F2C80DFE5C151DEA608AF04_inline(L_30, NULL);
						NullCheck(L_31);
						String_t* L_32;
						L_32 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
						String_t* L_33 = __this->___U3ClobbyNameU3E5__3_4;
						bool L_34;
						L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, L_33, NULL);
						if (!L_34)
						{
							goto IL_0113_3;
						}
					}
					{
						// lobbyId = lobby.Id.ToString();
						Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* L_35 = V_6;
						NullCheck(L_35);
						String_t* L_36;
						L_36 = Lobby_get_Id_mAA7BA102381A42EF34951DEF00C116611BC9D403_inline(L_35, NULL);
						NullCheck(L_36);
						String_t* L_37;
						L_37 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
						__this->___U3ClobbyIdU3E5__2_3 = L_37;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClobbyIdU3E5__2_3), (void*)L_37);
					}

IL_0113_3:
					{
						// foreach (Lobby lobby in queryResponse.Results) {
						bool L_38;
						L_38 = Enumerator_MoveNext_mF80AD77E11742CEE46C977B72EABDC8669CA384A((&V_5), Enumerator_MoveNext_mF80AD77E11742CEE46C977B72EABDC8669CA384A_RuntimeMethod_var);
						if (L_38)
						{
							goto IL_00c4_3;
						}
					}
					{
						goto IL_0130_2;
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0130_2:
			{
				// Lobby joinedLobby = await LobbyService.Instance.JoinLobbyByIdAsync(lobbyId);
				il2cpp_codegen_runtime_class_init_inline(LobbyService_t64DAF17F1DA9F21F3CA655FB2D3A7E2484C15508_il2cpp_TypeInfo_var);
				RuntimeObject* L_39;
				L_39 = LobbyService_get_Instance_m4E0DEAF7F6E132F1280E51EC00060AE88DE4DDC1(NULL);
				String_t* L_40 = __this->___U3ClobbyIdU3E5__2_3;
				NullCheck(L_39);
				Task_1_t14D07ED713222B97E440F98F73CDA5AD1534DDD1* L_41;
				L_41 = InterfaceFuncInvoker2< Task_1_t14D07ED713222B97E440F98F73CDA5AD1534DDD1*, String_t*, JoinLobbyByIdOptions_t1A6DEED90A8972855551A6F27C798C86CA121BD2* >::Invoke(6 /* System.Threading.Tasks.Task`1<Unity.Services.Lobbies.Models.Lobby> Unity.Services.Lobbies.ILobbyService::JoinLobbyByIdAsync(System.String,Unity.Services.Lobbies.JoinLobbyByIdOptions) */, ILobbyService_t4F07247F1A81F56EA2F668B1F9A7E89FD2239CD4_il2cpp_TypeInfo_var, L_39, L_40, (JoinLobbyByIdOptions_t1A6DEED90A8972855551A6F27C798C86CA121BD2*)NULL);
				NullCheck(L_41);
				TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D L_42;
				L_42 = Task_1_GetAwaiter_m3063B5DDFA87B3DD52F9BF2867E39F1C8C6D5964(L_41, Task_1_GetAwaiter_m3063B5DDFA87B3DD52F9BF2867E39F1C8C6D5964_RuntimeMethod_var);
				V_7 = L_42;
				bool L_43;
				L_43 = TaskAwaiter_1_get_IsCompleted_m674F4EA58E107D380064CD33B2019F20096B4B71((&V_7), TaskAwaiter_1_get_IsCompleted_m674F4EA58E107D380064CD33B2019F20096B4B71_RuntimeMethod_var);
				if (L_43)
				{
					goto IL_0192_2;
				}
			}
			{
				int32_t L_44 = 1;
				V_0 = L_44;
				__this->___U3CU3E1__state_0 = L_44;
				TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D L_45 = V_7;
				__this->___U3CU3Eu__2_6 = L_45;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_46 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_m8124AF5EA7DA5D1615D441A109977E96B7E72918(L_46, (&V_7), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_m8124AF5EA7DA5D1615D441A109977E96B7E72918_RuntimeMethod_var);
				goto IL_0286;
			}

IL_0175_2:
			{
				TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D L_47 = __this->___U3CU3Eu__2_6;
				V_7 = L_47;
				TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D* L_48 = (&__this->___U3CU3Eu__2_6);
				il2cpp_codegen_initobj(L_48, sizeof(TaskAwaiter_1_tB80770F918AE4925C7C245F04B38F3F4C25D063D));
				int32_t L_49 = (-1);
				V_0 = L_49;
				__this->___U3CU3E1__state_0 = L_49;
			}

IL_0192_2:
			{
				Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* L_50;
				L_50 = TaskAwaiter_1_GetResult_m14C87DCCDD83A0D46087BADE40E9DB29D574BF0D((&V_7), TaskAwaiter_1_GetResult_m14C87DCCDD83A0D46087BADE40E9DB29D574BF0D_RuntimeMethod_var);
				// string relayJoinCode = joinedLobby.Data[KEY_RELAY_JOIN_CODE].Value;
				NullCheck(L_50);
				Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E* L_51;
				L_51 = Lobby_get_Data_m1A49E5C6EFB7BB36308086F05F32F548DD748662_inline(L_50, NULL);
				NullCheck(L_51);
				DataObject_tCE3C7F1A26400A13D21A110FE0508CC2BA73AADD* L_52;
				L_52 = Dictionary_2_get_Item_m046F39774A960F8342F509030C7CC97BDD51B2A2(L_51, _stringLiteral365A622C1D0761A5DFD0E0E9F6BAA2D68167EAE2, Dictionary_2_get_Item_m046F39774A960F8342F509030C7CC97BDD51B2A2_RuntimeMethod_var);
				NullCheck(L_52);
				String_t* L_53;
				L_53 = DataObject_get_Value_mD0E5FFFEA974682B1205D22209ED4208E094860A_inline(L_52, NULL);
				V_2 = L_53;
				// JoinAllocation joinAllocation = await JoinRelay(relayJoinCode);
				LobbyManager_t3D76B2B2C2FBE659E1371C92C3C1B50AF2908797* L_54 = V_1;
				String_t* L_55 = V_2;
				NullCheck(L_54);
				Task_1_t50529E0258FC07E21B5B77E4D74251F095B976FC* L_56;
				L_56 = LobbyManager_JoinRelay_mE7ACACE19250B9E7F71D239504C9B80E852DE7E0(L_54, L_55, NULL);
				NullCheck(L_56);
				TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D L_57;
				L_57 = Task_1_GetAwaiter_m2C8628CE07135D4675ED0A27F632652572D0D92B(L_56, Task_1_GetAwaiter_m2C8628CE07135D4675ED0A27F632652572D0D92B_RuntimeMethod_var);
				V_8 = L_57;
				bool L_58;
				L_58 = TaskAwaiter_1_get_IsCompleted_m33FB81ED48D176A4BB167BA9C9ED52D6CB8C53F5((&V_8), TaskAwaiter_1_get_IsCompleted_m33FB81ED48D176A4BB167BA9C9ED52D6CB8C53F5_RuntimeMethod_var);
				if (L_58)
				{
					goto IL_0206_2;
				}
			}
			{
				int32_t L_59 = 2;
				V_0 = L_59;
				__this->___U3CU3E1__state_0 = L_59;
				TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D L_60 = V_8;
				__this->___U3CU3Eu__3_7 = L_60;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__3_7))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_61 = (&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_mE31ED9298D551C909C47806C1032918FDE6DAE2C(L_61, (&V_8), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D_TisU3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9_mE31ED9298D551C909C47806C1032918FDE6DAE2C_RuntimeMethod_var);
				goto IL_0286;
			}

IL_01e9_2:
			{
				TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D L_62 = __this->___U3CU3Eu__3_7;
				V_8 = L_62;
				TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D* L_63 = (&__this->___U3CU3Eu__3_7);
				il2cpp_codegen_initobj(L_63, sizeof(TaskAwaiter_1_tB791010DA44BF61FAD2F59840553F8F007C17B5D));
				int32_t L_64 = (-1);
				V_0 = L_64;
				__this->___U3CU3E1__state_0 = L_64;
			}

IL_0206_2:
			{
				JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* L_65;
				L_65 = TaskAwaiter_1_GetResult_m51425551EA802FC593AA4584F04C3458AEC6EC9F((&V_8), TaskAwaiter_1_GetResult_m51425551EA802FC593AA4584F04C3458AEC6EC9F_RuntimeMethod_var);
				V_3 = L_65;
				// NetworkManager.Singleton.GetComponent<UnityTransport>().SetRelayServerData(new RelayServerData(joinAllocation, "dtls"));
				il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
				NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_66;
				L_66 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
				NullCheck(L_66);
				UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_67;
				L_67 = Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28(L_66, Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28_RuntimeMethod_var);
				JoinAllocation_t4CEDE85146B9D5F2697A0DFFBF81C6FB6FAD7A3A* L_68 = V_3;
				RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 L_69;
				memset((&L_69), 0, sizeof(L_69));
				RelayServerData__ctor_m1A05E16148B6EE4275C3F09AF5D83197710AA241((&L_69), L_68, _stringLiteralAE339799EDC0226109A35BD2FF389B7E82437CD7, /*hidden argument*/NULL);
				NullCheck(L_67);
				UnityTransport_SetRelayServerData_m5ECB5AF89AEFCDF25BD0C7ABF37DB6731DF5C312(L_67, L_69, NULL);
				// NetworkManager.Singleton.StartClient();
				NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_70;
				L_70 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
				NullCheck(L_70);
				bool L_71;
				L_71 = NetworkManager_StartClient_mD484EFEF39F84707CAAC431B658BC79721AB6ACD(L_70, NULL);
				// } catch (LobbyServiceException e) {
				goto IL_023c_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LobbyServiceException_tF62E8385211176AE2293E3FD2C169ABDA3C85010_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0235_1;
			}
			throw e;
		}

CATCH_0235_1:
		{// begin catch(Unity.Services.Lobbies.LobbyServiceException)
			// print(e);
			MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(((LobbyServiceException_tF62E8385211176AE2293E3FD2C169ABDA3C85010*)IL2CPP_GET_ACTIVE_EXCEPTION(LobbyServiceException_tF62E8385211176AE2293E3FD2C169ABDA3C85010*)), NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_023c_1;
		}// end catch (depth: 2)

IL_023c_1:
		{
			goto IL_0265;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_023e;
		}
		throw e;
	}

CATCH_023e:
	{// begin catch(System.Exception)
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3ClobbyIdU3E5__2_3 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClobbyIdU3E5__2_3), (void*)(String_t*)NULL);
		__this->___U3ClobbyNameU3E5__3_4 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClobbyNameU3E5__3_4), (void*)(String_t*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_72 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_73 = V_9;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_72, L_73, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0286;
	}// end catch (depth: 1)

IL_0265:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3ClobbyIdU3E5__2_3 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClobbyIdU3E5__2_3), (void*)(String_t*)NULL);
		__this->___U3ClobbyNameU3E5__3_4 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClobbyNameU3E5__3_4), (void*)(String_t*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_74 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_74, NULL);
	}

IL_0286:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CJoinLobbyU3Ed__11_MoveNext_m3537DB5FB86E141F16604D9054A82C88F82F6F0A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9*>(__this + _offset);
	U3CJoinLobbyU3Ed__11_MoveNext_m3537DB5FB86E141F16604D9054A82C88F82F6F0A(_thisAdjusted, method);
}
// System.Void LobbyManager/<JoinLobby>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJoinLobbyU3Ed__11_SetStateMachine_mFE7B13135530C6E89F0BFE35A6B6DF13DB5E068E (U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CJoinLobbyU3Ed__11_SetStateMachine_mFE7B13135530C6E89F0BFE35A6B6DF13DB5E068E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CJoinLobbyU3Ed__11_t8ABFE5B34448F962A551FC4F328A879E716B62F9*>(__this + _offset);
	U3CJoinLobbyU3Ed__11_SetStateMachine_mFE7B13135530C6E89F0BFE35A6B6DF13DB5E068E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Awake_m82639826DE098DC447C79B43900C5F2A630B3DC3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisHealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_m1EE2A09437E488BC853062A2307174FF6D00D0FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerInputActions = new PlayerInputActions();
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694*)il2cpp_codegen_object_new(PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerInputActions__ctor_m3007C78241520148B12C773C76D25024D9B20E3A(L_0, NULL);
		__this->___playerInputActions_29 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerInputActions_29), (void*)L_0);
		// animator = GetComponentInChildren<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000(__this, Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		__this->___animator_30 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_30), (void*)L_1);
		// currentHealth = GetComponentInParent<HealthSystem>().currentHealth;
		HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8* L_2;
		L_2 = Component_GetComponentInParent_TisHealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_m1EE2A09437E488BC853062A2307174FF6D00D0FB(__this, Component_GetComponentInParent_TisHealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_m1EE2A09437E488BC853062A2307174FF6D00D0FB_RuntimeMethod_var);
		NullCheck(L_2);
		float L_3 = L_2->___currentHealth_31;
		__this->___currentHealth_36 = L_3;
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// if (IsOwner) {
		bool L_0;
		L_0 = NetworkBehaviour_get_IsOwner_m2C408A356ACBD9AF0C991BF01B5F20C75891FAB3_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Movement();
		PlayerController_Movement_mA3C0BF3320BCD093A506529BBBB6FE3B4EE65266(__this, NULL);
	}

IL_000e:
	{
		// if (currentHealth <= 0 && IsServer) {
		float L_1 = __this->___currentHealth_36;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_002f;
		}
	}
	{
		bool L_2;
		L_2 = NetworkBehaviour_get_IsServer_m57CCCE498593E3A21E6B952AB9C4BAA482EB4CD6_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Movement_mA3C0BF3320BCD093A506529BBBB6FE3B4EE65266 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// inputVector = playerInputActions.Player.Movement.ReadValue<Vector2>();
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = __this->___playerInputActions_29;
		NullCheck(L_0);
		PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C L_1;
		L_1 = PlayerInputActions_get_Player_m8F1E753198905DAB61C04292E919BAB267BB6739(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = PlayerActions_get_Movement_mD9469EF34C9F8BA6BFFAD6858D0B172322D988E0((&V_0), NULL);
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_2, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		__this->___inputVector_32 = L_3;
		// transform.Translate(inputVector * Time.deltaTime * speed, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___inputVector_32;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_5, L_6, NULL);
		float L_8 = __this->___speed_34;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_9, NULL);
		NullCheck(L_4);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_4, L_10, 0, NULL);
		// AnimationHandler(inputVector);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___inputVector_32;
		PlayerController_AnimationHandler_mCED5339E3A4B759FAD86E15C5248FBB61FE10B38(__this, L_11, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::AnimationHandler(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AnimationHandler_mCED5339E3A4B759FAD86E15C5248FBB61FE10B38 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___inputVector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (inputVector != Vector2.zero) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___inputVector0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_2;
		L_2 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_005c;
		}
	}
	{
		// animator.SetFloat(SPEED, 1);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_30;
		NullCheck(L_3);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_3, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, (1.0f), NULL);
		// Quaternion rotateTo = Quaternion.LookRotation(Vector3.forward, inputVector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___inputVector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_4, L_6, NULL);
		V_0 = L_7;
		// transform.rotation = Quaternion.RotateTowards(transform.rotation, rotateTo, rotationSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_0;
		float L_12 = __this->___rotationSpeed_35;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_RotateTowards_m50EF9D609C80CD423CDA856EA3481DE2004633A3_inline(L_10, L_11, ((float)il2cpp_codegen_multiply(L_12, L_13)), NULL);
		NullCheck(L_8);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_8, L_14, NULL);
		return;
	}

IL_005c:
	{
		// animator.SetFloat(SPEED, 0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->___animator_30;
		NullCheck(L_15);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_15, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Shoot_performed(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Shoot_performed_mA33F6EAD15428AEAE6DE64C790EF630C1F95F2A5 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___obj0, const RuntimeMethod* method) 
{
	{
		// if (!IsOwner) return;
		bool L_0;
		L_0 = NetworkBehaviour_get_IsOwner_m2C408A356ACBD9AF0C991BF01B5F20C75891FAB3_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsOwner) return;
		return;
	}

IL_0009:
	{
		// SpawnProjectileServerRpc();
		PlayerController_SpawnProjectileServerRpc_m1D8419672FF0E780CC847995499CC328F4357FAB(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::SpawnProjectileServerRpc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SpawnProjectileServerRpc_m1D8419672FF0E780CC847995499CC328F4357FAB (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_1;
	memset((&V_1), 0, sizeof(V_1));
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		V_0 = L_0;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_00d0;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_7, NULL);
		if (!L_8)
		{
			goto IL_00d0;
		}
	}

IL_0058:
	{
		uint64_t L_9;
		L_9 = NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF_inline(__this, NULL);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_10 = V_0;
		NullCheck(L_10);
		uint64_t L_11;
		L_11 = NetworkManager_get_LocalClientId_m1B93454E7949ACBF20043DCDD884F63E119E6577_inline(L_10, NULL);
		if (!((((int32_t)((((int64_t)L_9) == ((int64_t)L_11))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009e;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___LogLevel_18;
		if (!((((int32_t)((((int32_t)L_13) > ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6, NULL);
	}

IL_009c:
	{
		return;
	}

IL_009e:
	{
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_14 = V_2;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_15;
		L_15 = NetworkBehaviour___beginSendServerRpc_m4A2F11DDFFDA210CA349A21652A185BA75379429(__this, ((int32_t)1077261437), L_14, ((int32_t)0), NULL);
		V_1 = L_15;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_16 = V_2;
		NetworkBehaviour___endSendServerRpc_m012C05F43A55FCBC009562DA6EE207AAF38AD32C(__this, (&V_1), ((int32_t)1077261437), L_16, ((int32_t)0), NULL);
	}

IL_00d0:
	{
		int32_t L_17 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)L_17) == ((int32_t)((int32_t)1)))? 1 : 0))
		{
			goto IL_00ff;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_18 = V_0;
		NullCheck(L_18);
		bool L_19;
		L_19 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_18, NULL);
		if (L_19)
		{
			goto IL_0100;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_20 = V_0;
		NullCheck(L_20);
		bool L_21;
		L_21 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_20, NULL);
		if (L_21)
		{
			goto IL_0100;
		}
	}

IL_00ff:
	{
		return;
	}

IL_0100:
	{
		// GameObject projectileObject = Instantiate(projectile, projectileSpawnPoint.transform.position, projectileSpawnPoint.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___projectile_27;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___projectileSpawnPoint_28;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___projectileSpawnPoint_28;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_22, L_25, L_28, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// projectileObject.GetComponent<NetworkObject>().Spawn();
		NullCheck(L_29);
		NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* L_30;
		L_30 = GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E(L_29, GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E_RuntimeMethod_var);
		NullCheck(L_30);
		NetworkObject_Spawn_m5797FF38B1FB36F359407E9BA083DEE45413CBB0(L_30, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnCollisionEnter2D_m28C67E4361403BA9990C1E6D9526F78362591667 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisHealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_m8EE3D342E3C341D21DDA142B3EA7515A604CEED0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_m3DA67640691AB02BC82AC4FC9FB5F6E0A2E3EDB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.collider.tag == PROJECTILE) {
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		NullCheck(L_0);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F, NULL);
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		// gameObject.GetComponentInParent<HealthSystem>().DamageTakenClientRpc(ProjectileController.damage);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		HealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8* L_5;
		L_5 = GameObject_GetComponentInParent_TisHealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_m8EE3D342E3C341D21DDA142B3EA7515A604CEED0(L_4, GameObject_GetComponentInParent_TisHealthSystem_tF798D7431CA313C7690C7875AB58A2C199243BF8_m8EE3D342E3C341D21DDA142B3EA7515A604CEED0_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var);
		float L_6;
		L_6 = ProjectileController_get_damage_mCDC23EFC1975EFAB093CA52E4247BEB63BF4F802_inline(NULL);
		NullCheck(L_5);
		HealthSystem_DamageTakenClientRpc_mF8CFF45E91617024B72D8DD68768F1ECCFF68E40(L_5, L_6, NULL);
		// if (IsServer) collision.gameObject.GetComponent<ProjectileController>().DestroyServerRpc(0);
		bool L_7;
		L_7 = NetworkBehaviour_get_IsServer_m57CCCE498593E3A21E6B952AB9C4BAA482EB4CD6_inline(__this, NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// if (IsServer) collision.gameObject.GetComponent<ProjectileController>().DestroyServerRpc(0);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_8 = ___collision0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_8, NULL);
		NullCheck(L_9);
		ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* L_10;
		L_10 = GameObject_GetComponent_TisProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_m3DA67640691AB02BC82AC4FC9FB5F6E0A2E3EDB2(L_9, GameObject_GetComponent_TisProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_m3DA67640691AB02BC82AC4FC9FB5F6E0A2E3EDB2_RuntimeMethod_var);
		NullCheck(L_10);
		ProjectileController_DestroyServerRpc_mA956463C71DBE2D2673BD9138FC4523A9B5C5E93(L_10, (0.0f), NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void PlayerController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnEnable_m1558047F72022F1A32FC373A927E122D1F3CF5CC (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_Shoot_performed_mA33F6EAD15428AEAE6DE64C790EF630C1F95F2A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// playerInputActions.Enable();
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = __this->___playerInputActions_29;
		NullCheck(L_0);
		PlayerInputActions_Enable_mD47BCD016CA00174C935EC76B83C4944775EAB71(L_0, NULL);
		// playerInputActions.Player.Shoot.performed += Shoot_performed;
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_1 = __this->___playerInputActions_29;
		NullCheck(L_1);
		PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C L_2;
		L_2 = PlayerInputActions_get_Player_m8F1E753198905DAB61C04292E919BAB267BB6739(L_1, NULL);
		V_0 = L_2;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = PlayerActions_get_Shoot_m1FA6606E585499D7B3B35E9F8A1387D0E2CE08F1((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_4 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_4, __this, (intptr_t)((void*)PlayerController_Shoot_performed_mA33F6EAD15428AEAE6DE64C790EF630C1F95F2A5_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnDisable_m16524B89F1DDB4EB1E201CCEB7E9502967BF57DB (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_Shoot_performed_mA33F6EAD15428AEAE6DE64C790EF630C1F95F2A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// playerInputActions.Disable();
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = __this->___playerInputActions_29;
		NullCheck(L_0);
		PlayerInputActions_Disable_mCB48734F566DF7736773346C95774E2AF14A3465(L_0, NULL);
		// playerInputActions.Player.Shoot.performed -= Shoot_performed;
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_1 = __this->___playerInputActions_29;
		NullCheck(L_1);
		PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C L_2;
		L_2 = PlayerInputActions_get_Player_m8F1E753198905DAB61C04292E919BAB267BB6739(L_1, NULL);
		V_0 = L_2;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = PlayerActions_get_Shoot_m1FA6606E585499D7B3B35E9F8A1387D0E2CE08F1((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_4 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_4, __this, (intptr_t)((void*)PlayerController_Shoot_performed_mA33F6EAD15428AEAE6DE64C790EF630C1F95F2A5_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::DestroyServerRpc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_DestroyServerRpc_mFD0A2E04232123957F5B3141EFF56184E4196D0B (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_1;
	memset((&V_1), 0, sizeof(V_1));
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		V_0 = L_0;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_008a;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_7, NULL);
		if (!L_8)
		{
			goto IL_008a;
		}
	}

IL_0058:
	{
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_9 = V_2;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_10;
		L_10 = NetworkBehaviour___beginSendServerRpc_m4A2F11DDFFDA210CA349A21652A185BA75379429(__this, ((int32_t)-1234502872), L_9, ((int32_t)0), NULL);
		V_1 = L_10;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_11 = V_2;
		NetworkBehaviour___endSendServerRpc_m012C05F43A55FCBC009562DA6EE207AAF38AD32C(__this, (&V_1), ((int32_t)-1234502872), L_11, ((int32_t)0), NULL);
	}

IL_008a:
	{
		int32_t L_12 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)L_12) == ((int32_t)((int32_t)1)))? 1 : 0))
		{
			goto IL_00b9;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_13 = V_0;
		NullCheck(L_13);
		bool L_14;
		L_14 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_13, NULL);
		if (L_14)
		{
			goto IL_00ba;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_15, NULL);
		if (L_16)
		{
			goto IL_00ba;
		}
	}

IL_00b9:
	{
		return;
	}

IL_00ba:
	{
		// Destroy(gameObject.GetComponent<NetworkObject>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_17);
		NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* L_18;
		L_18 = GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E(L_17, GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_18, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_19, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] float speed = 2f;
		__this->___speed_34 = (2.0f);
		// [SerializeField] float rotationSpeed = 700f;
		__this->___rotationSpeed_35 = (700.0f);
		il2cpp_codegen_runtime_class_init_inline(NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_m0BFD04A5D02376F13DD2E85274836CD4A3AD38E6(__this, NULL);
		return;
	}
}
// System.Void PlayerController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__cctor_mD5287D95C780696565B20A04448A9EB476331E86 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController___rpc_handler_1077261437_m04C1C86AF00F56DC939D3EC49BB3F852A57ADB72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController___rpc_handler_3060464424_mBE3DB7129097DE9AA12299E32C342D81935B67FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* L_0 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->_____rpc_func_table_4;
		RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* L_1 = (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*)il2cpp_codegen_object_new(RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6(L_1, NULL, (intptr_t)((void*)PlayerController___rpc_handler_1077261437_m04C1C86AF00F56DC939D3EC49BB3F852A57ADB72_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877(L_0, ((int32_t)1077261437), L_1, Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* L_2 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->_____rpc_func_table_4;
		RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* L_3 = (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*)il2cpp_codegen_object_new(RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6(L_3, NULL, (intptr_t)((void*)PlayerController___rpc_handler_3060464424_mBE3DB7129097DE9AA12299E32C342D81935B67FF_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877(L_2, ((int32_t)-1234502872), L_3, Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		return;
	}
}
// System.Void PlayerController::__rpc_handler_1077261437(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController___rpc_handler_1077261437_m04C1C86AF00F56DC939D3EC49BB3F852A57ADB72 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___target0, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader1, __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E ___rpcParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	{
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_0 = ___target0;
		NullCheck(L_0);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1;
		L_1 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(L_0, NULL);
		V_0 = L_1;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		__RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E L_5 = ___rpcParams2;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_6 = L_5.___Server_0;
		ServerRpcReceiveParams_t13F450FA39CB2BE6C1DB10FFDC686A89EFC4EF95 L_7 = L_6.___Receive_1;
		uint64_t L_8 = L_7.___SenderClientId_0;
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_9 = ___target0;
		NullCheck(L_9);
		uint64_t L_10;
		L_10 = NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF_inline(L_9, NULL);
		if (!((((int32_t)((((int64_t)L_8) == ((int64_t)L_10))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_006f;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___LogLevel_18;
		if (!((((int32_t)((((int32_t)L_12) > ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_006d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6, NULL);
	}

IL_006d:
	{
		return;
	}

IL_006f:
	{
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_13 = ___target0;
		NullCheck(L_13);
		L_13->_____rpc_exec_stage_4 = ((int32_t)1);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_14 = ___target0;
		NullCheck(((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95*)CastclassClass((RuntimeObject*)L_14, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var)));
		PlayerController_SpawnProjectileServerRpc_m1D8419672FF0E780CC847995499CC328F4357FAB(((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95*)CastclassClass((RuntimeObject*)L_14, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var)), NULL);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_15 = ___target0;
		NullCheck(L_15);
		L_15->_____rpc_exec_stage_4 = ((int32_t)0);
		return;
	}
}
// System.Void PlayerController::__rpc_handler_3060464424(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController___rpc_handler_3060464424_mBE3DB7129097DE9AA12299E32C342D81935B67FF (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___target0, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader1, __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E ___rpcParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	{
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_0 = ___target0;
		NullCheck(L_0);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1;
		L_1 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(L_0, NULL);
		V_0 = L_1;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_5 = ___target0;
		NullCheck(L_5);
		L_5->_____rpc_exec_stage_4 = ((int32_t)1);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_6 = ___target0;
		NullCheck(((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95*)CastclassClass((RuntimeObject*)L_6, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var)));
		PlayerController_DestroyServerRpc_mFD0A2E04232123957F5B3141EFF56184E4196D0B(((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95*)CastclassClass((RuntimeObject*)L_6, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var)), NULL);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_7 = ___target0;
		NullCheck(L_7);
		L_7->_____rpc_exec_stage_4 = ((int32_t)0);
		return;
	}
}
// System.String PlayerController::__getTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerController___getTypeName_m025E6837FCF3629FB0167953C391397D5954513B (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA19C19949E879F4AF385F350A154ED75538FDBC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralA19C19949E879F4AF385F350A154ED75538FDBC7;
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
// Conversion methods for marshalling of: PlayerData
IL2CPP_EXTERN_C void PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_marshal_pinvoke(const PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A& unmarshaled, PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_marshaled_pinvoke& marshaled)
{
	marshaled.___clientId_0 = unmarshaled.___clientId_0;
	marshaled.___U3CplayerNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_string(unmarshaled.___U3CplayerNameU3Ek__BackingField_1);
}
IL2CPP_EXTERN_C void PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_marshal_pinvoke_back(const PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_marshaled_pinvoke& marshaled, PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A& unmarshaled)
{
	uint64_t unmarshaledclientId_temp_0 = 0;
	unmarshaledclientId_temp_0 = marshaled.___clientId_0;
	unmarshaled.___clientId_0 = unmarshaledclientId_temp_0;
	unmarshaled.___U3CplayerNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_string_result(marshaled.___U3CplayerNameU3Ek__BackingField_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CplayerNameU3Ek__BackingField_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CplayerNameU3Ek__BackingField_1));
}
// Conversion method for clean up from marshalling of: PlayerData
IL2CPP_EXTERN_C void PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_marshal_pinvoke_cleanup(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CplayerNameU3Ek__BackingField_1);
	marshaled.___U3CplayerNameU3Ek__BackingField_1 = NULL;
}
// Conversion methods for marshalling of: PlayerData
IL2CPP_EXTERN_C void PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_marshal_com(const PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A& unmarshaled, PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_marshaled_com& marshaled)
{
	marshaled.___clientId_0 = unmarshaled.___clientId_0;
	marshaled.___U3CplayerNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CplayerNameU3Ek__BackingField_1);
}
IL2CPP_EXTERN_C void PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_marshal_com_back(const PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_marshaled_com& marshaled, PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A& unmarshaled)
{
	uint64_t unmarshaledclientId_temp_0 = 0;
	unmarshaledclientId_temp_0 = marshaled.___clientId_0;
	unmarshaled.___clientId_0 = unmarshaledclientId_temp_0;
	unmarshaled.___U3CplayerNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CplayerNameU3Ek__BackingField_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CplayerNameU3Ek__BackingField_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CplayerNameU3Ek__BackingField_1));
}
// Conversion method for clean up from marshalling of: PlayerData
IL2CPP_EXTERN_C void PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_marshal_com_cleanup(PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CplayerNameU3Ek__BackingField_1);
	marshaled.___U3CplayerNameU3Ek__BackingField_1 = NULL;
}
// System.String PlayerData::get_playerName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerData_get_playerName_m5EAB50A09FE209D412F859DCC060B6A5C3AC067B (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	{
		// public string playerName { get; private set; }
		String_t* L_0 = __this->___U3CplayerNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* PlayerData_get_playerName_m5EAB50A09FE209D412F859DCC060B6A5C3AC067B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PlayerData_get_playerName_m5EAB50A09FE209D412F859DCC060B6A5C3AC067B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void PlayerData::set_playerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData_set_playerName_m69D5A90F237CF84DDE833FD52B325C7DF6CA123A (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string playerName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CplayerNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplayerNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerData_set_playerName_m69D5A90F237CF84DDE833FD52B325C7DF6CA123A_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A*>(__this + _offset);
	PlayerData_set_playerName_m69D5A90F237CF84DDE833FD52B325C7DF6CA123A_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean PlayerData::Equals(PlayerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerData_Equals_m3CD103B2A67631C25825B21B707C73724D786B71 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A ___other0, const RuntimeMethod* method) 
{
	{
		// return clientId == other.clientId && playerName == other.playerName;
		uint64_t L_0 = __this->___clientId_0;
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A L_1 = ___other0;
		uint64_t L_2 = L_1.___clientId_0;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3;
		L_3 = PlayerData_get_playerName_m5EAB50A09FE209D412F859DCC060B6A5C3AC067B_inline(__this, NULL);
		String_t* L_4;
		L_4 = PlayerData_get_playerName_m5EAB50A09FE209D412F859DCC060B6A5C3AC067B_inline((&___other0), NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool PlayerData_Equals_m3CD103B2A67631C25825B21B707C73724D786B71_AdjustorThunk (RuntimeObject* __this, PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A ___other0, const RuntimeMethod* method)
{
	PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayerData_Equals_m3CD103B2A67631C25825B21B707C73724D786B71(_thisAdjusted, ___other0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.InputActionAsset PlayerInputActions::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void PlayerInputActions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputActions__ctor_m3007C78241520148B12C773C76D25024D9B20E3A (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAA58FC3B6F845F58D6FC7B00824D538D5C716A03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06A3A357F4413F0528771B6F30BBACE1569A644A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C5DADC81836D86796D2CC7F7FAD03A93AEEE06F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96CEA6866E95B3D0620B6EF1F0B0D7EC115733CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<IPlayerActions> m_PlayerActionsCallbackInterfaces = new List<IPlayerActions>();
		List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E* L_0 = (List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E*)il2cpp_codegen_object_new(List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mAA58FC3B6F845F58D6FC7B00824D538D5C716A03(L_0, List_1__ctor_mAA58FC3B6F845F58D6FC7B00824D538D5C716A03_RuntimeMethod_var);
		__this->___m_PlayerActionsCallbackInterfaces_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlayerActionsCallbackInterfaces_2), (void*)L_0);
		// public @PlayerInputActions()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//         asset = InputActionAsset.FromJson(@"{
		//     ""name"": ""PlayerInputActions"",
		//     ""maps"": [
		//         {
		//             ""name"": ""Player"",
		//             ""id"": ""257abf5f-b599-4ae9-9ef7-0dd8daa89968"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""Movement"",
		//                     ""type"": ""Value"",
		//                     ""id"": ""1fba6467-59d1-4d07-ac3a-af6cf165ad1f"",
		//                     ""expectedControlType"": ""Axis"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": true
		//                 },
		//                 {
		//                     ""name"": ""Rotation"",
		//                     ""type"": ""Value"",
		//                     ""id"": ""463da0ec-b9ae-4f57-9585-01bb14073a92"",
		//                     ""expectedControlType"": ""Axis"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": true
		//                 },
		//                 {
		//                     ""name"": ""Shoot"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""99515162-d39b-41c7-b9cd-eab3e52958b5"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": ""2D Vector"",
		//                     ""id"": ""dbb32e23-b4d9-471e-b69f-063341ce96c8"",
		//                     ""path"": ""2DVector"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Movement"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""b6871e49-bfc6-4c80-9959-4cae374be14b"",
		//                     ""path"": ""<Keyboard>/w"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Movement"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""6de684d2-72b4-4b9f-b47a-d69a71dd8f12"",
		//                     ""path"": ""<Keyboard>/s"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Movement"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""cc56dfd9-8ad2-43a6-b912-8134a46d4257"",
		//                     ""path"": ""<Keyboard>/a"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Movement"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""4af704d4-3820-4575-b0d4-307d0f5b62a8"",
		//                     ""path"": ""<Keyboard>/d"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Movement"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""JoyStick"",
		//                     ""id"": ""1ea51590-2f0b-45c7-bac2-2b69a875aede"",
		//                     ""path"": ""2DVector(mode=2)"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Movement"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""fe753c9c-b66d-4f75-aff9-67436af03219"",
		//                     ""path"": ""<Gamepad>/leftStick/up"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Movement"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""1a42c2ef-40c1-457a-a0f8-7d599be4ca19"",
		//                     ""path"": ""<Gamepad>/leftStick/down"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Movement"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""a5826e93-6ccb-407d-9261-75db8c90a15b"",
		//                     ""path"": ""<Gamepad>/leftStick/left"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Movement"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""edb49a1e-cd4a-4009-ac4b-14bc8e65bc63"",
		//                     ""path"": ""<Gamepad>/leftStick/right"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Movement"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""3cbd9e82-e976-4ab7-9b0b-6f928c3f1f8f"",
		//                     ""path"": ""<Gamepad>/rightTrigger"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Shoot"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""66dfc69f-9dd6-4016-a606-bbafb5a843d4"",
		//                     ""path"": ""<Keyboard>/space"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Shoot"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""2D Vector"",
		//                     ""id"": ""869f9dc5-9ed2-4467-86bf-5ba57e5896f9"",
		//                     ""path"": ""2DVector"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Rotation"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""35553b7c-dd75-4afe-bee0-76b7b6b1f4f3"",
		//                     ""path"": ""<Keyboard>/w"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Rotation"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""8622ccef-539e-4ecd-8eb7-fe550985fa04"",
		//                     ""path"": ""<Keyboard>/s"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Rotation"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""080f1a92-8327-4472-960d-0eb23521a6b4"",
		//                     ""path"": ""<Keyboard>/a"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Rotation"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""ce4c5f63-ddd5-444f-8fb1-5d5694edf663"",
		//                     ""path"": ""<Keyboard>/d"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Rotation"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""JoyStick"",
		//                     ""id"": ""917f0719-ca47-482c-a0d6-b1fa1cd7d331"",
		//                     ""path"": ""2DVector(mode=2)"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Rotation"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""d236bb99-799a-443a-8f26-6e52821020a3"",
		//                     ""path"": ""<Gamepad>/rightStick/up"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Rotation"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""a5ad1c57-9b27-4a69-b521-fe401cac768d"",
		//                     ""path"": ""<Gamepad>/rightStick/down"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Rotation"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""05aedbc9-5bc1-4b41-b6c5-bafc7a78e472"",
		//                     ""path"": ""<Gamepad>/rightStick/left"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Rotation"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""398cc1d7-8499-46f1-88a1-8d1af106f1be"",
		//                     ""path"": ""<Gamepad>/rightStick/right"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Rotation"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 }
		//             ]
		//         }
		//     ],
		//     ""controlSchemes"": []
		// }");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = InputActionAsset_FromJson_m8F7212EB013EF4D853836228D393C0D15BD0433C(_stringLiteral8C5DADC81836D86796D2CC7F7FAD03A93AEEE06F, NULL);
		__this->___U3CassetU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassetU3Ek__BackingField_0), (void*)L_1);
		// m_Player = asset.FindActionMap("Player", throwIfNotFound: true);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_2;
		L_2 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		NullCheck(L_2);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_3;
		L_3 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, (bool)1, NULL);
		__this->___m_Player_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_1), (void*)L_3);
		// m_Player_Movement = m_Player.FindAction("Movement", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_4 = __this->___m_Player_1;
		NullCheck(L_4);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5;
		L_5 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_4, _stringLiteral06A3A357F4413F0528771B6F30BBACE1569A644A, (bool)1, NULL);
		__this->___m_Player_Movement_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_Movement_3), (void*)L_5);
		// m_Player_Rotation = m_Player.FindAction("Rotation", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_6 = __this->___m_Player_1;
		NullCheck(L_6);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7;
		L_7 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_6, _stringLiteral96CEA6866E95B3D0620B6EF1F0B0D7EC115733CD, (bool)1, NULL);
		__this->___m_Player_Rotation_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_Rotation_4), (void*)L_7);
		// m_Player_Shoot = m_Player.FindAction("Shoot", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_8 = __this->___m_Player_1;
		NullCheck(L_8);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9;
		L_9 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_8, _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8, (bool)1, NULL);
		__this->___m_Player_Shoot_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_Shoot_5), (void*)L_9);
		// }
		return;
	}
}
// System.Void PlayerInputActions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputActions_Dispose_m2AC2D95301CC2FB85875111A7A90697EED5886F4 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(asset);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> PlayerInputActions::get_bindingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 PlayerInputActions_get_bindingMask_mEC8BFDD6F9C15D41561E3C0AA6A69F5518E5C836 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.bindingMask;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1;
		L_1 = InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void PlayerInputActions::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputActions_set_bindingMask_mABC40B6D8CC89A69331923140496D1FAF9FCA096 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.bindingMask = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1 = ___value0;
		NullCheck(L_0);
		InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5(L_0, L_1, NULL);
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> PlayerInputActions::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D PlayerInputActions_get_devices_m43CB41FAC8ADF00480C1D4F3069BC0B7071F44DE (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.devices;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1;
		L_1 = InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C(L_0, NULL);
		return L_1;
	}
}
// System.Void PlayerInputActions::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputActions_set_devices_m2E43AB069A166171650682F7586134E37B5A142D (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.devices = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1 = ___value0;
		NullCheck(L_0);
		InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> PlayerInputActions::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 PlayerInputActions_get_controlSchemes_m92B4B28B637AD08CCA98C2455D3B6E13663126E5 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		NullCheck(L_0);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_1;
		L_1 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_0, NULL);
		return L_1;
	}
}
// System.Boolean PlayerInputActions::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInputActions_Contains_mA2B9FC677F0ABE5286A8090B596070943BE968DA (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) 
{
	{
		// return asset.Contains(action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = ___action0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> PlayerInputActions::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInputActions_GetEnumerator_m01CFD2F20E928973D9E48AA9F6A026E776792482 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// return asset.GetEnumerator();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9(L_0, NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerInputActions::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInputActions_System_Collections_IEnumerable_GetEnumerator_mA50CF9408948A4E82BF707B6FA8F5C5D30A10DD8 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = PlayerInputActions_GetEnumerator_m01CFD2F20E928973D9E48AA9F6A026E776792482(__this, NULL);
		return L_0;
	}
}
// System.Void PlayerInputActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputActions_Enable_mD47BCD016CA00174C935EC76B83C4944775EAB71 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// asset.Enable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		NullCheck(L_0);
		InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerInputActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputActions_Disable_mCB48734F566DF7736773346C95774E2AF14A3465 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// asset.Disable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		NullCheck(L_0);
		InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C(L_0, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> PlayerInputActions::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInputActions_get_bindings_m3125AE7CE781F4EAA8B0B66F145CF9F44AC98835 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<InputBinding> bindings => asset.bindings;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.InputSystem.InputAction PlayerInputActions::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerInputActions_FindAction_mB6309494AC8B242FF00D1EC4E0324EA1A6CC0F70 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) 
{
	{
		// return asset.FindAction(actionNameOrId, throwIfNotFound);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		String_t* L_1 = ___actionNameOrId0;
		bool L_2 = ___throwIfNotFound1;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 PlayerInputActions::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerInputActions_FindBinding_mAEB99F49171964FD5743ED406CC6BE76A227046C (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___bindingMask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) 
{
	{
		// return asset.FindBinding(bindingMask, out action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline(__this, NULL);
		InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 L_1 = ___bindingMask0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** L_2 = ___action1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// PlayerInputActions/PlayerActions PlayerInputActions::get_Player()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C PlayerInputActions_get_Player_m8F1E753198905DAB61C04292E919BAB267BB6739 (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// public PlayerActions @Player => new PlayerActions(this);
		PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C L_0;
		memset((&L_0), 0, sizeof(L_0));
		PlayerActions__ctor_m193F8F973C130637191BFA5A33A18ED931C1328B_inline((&L_0), __this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: PlayerInputActions/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C_marshal_pinvoke(const PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C& unmarshaled, PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C_marshal_pinvoke_back(const PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C_marshaled_pinvoke& marshaled, PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: PlayerInputActions/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C_marshal_pinvoke_cleanup(PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: PlayerInputActions/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C_marshal_com(const PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C& unmarshaled, PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C_marshal_com_back(const PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C_marshaled_com& marshaled, PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: PlayerInputActions/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C_marshal_com_cleanup(PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C_marshaled_com& marshaled)
{
}
// System.Void PlayerInputActions/PlayerActions::.ctor(PlayerInputActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions__ctor_m193F8F973C130637191BFA5A33A18ED931C1328B (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public PlayerActions(@PlayerInputActions wrapper) { m_Wrapper = wrapper; }
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public PlayerActions(@PlayerInputActions wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions__ctor_m193F8F973C130637191BFA5A33A18ED931C1328B_AdjustorThunk (RuntimeObject* __this, PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* ___wrapper0, const RuntimeMethod* method)
{
	PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C*>(__this + _offset);
	PlayerActions__ctor_m193F8F973C130637191BFA5A33A18ED931C1328B_inline(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction PlayerInputActions/PlayerActions::get_Movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Movement_mD9469EF34C9F8BA6BFFAD6858D0B172322D988E0 (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Movement => m_Wrapper.m_Player_Movement;
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Player_Movement_3;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Movement_mD9469EF34C9F8BA6BFFAD6858D0B172322D988E0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = PlayerActions_get_Movement_mD9469EF34C9F8BA6BFFAD6858D0B172322D988E0(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerInputActions/PlayerActions::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Rotation_mD012C7FADC0BCBDD04EF77CD183BC9E44403B1FB (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Rotation => m_Wrapper.m_Player_Rotation;
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Player_Rotation_4;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Rotation_mD012C7FADC0BCBDD04EF77CD183BC9E44403B1FB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = PlayerActions_get_Rotation_mD012C7FADC0BCBDD04EF77CD183BC9E44403B1FB(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerInputActions/PlayerActions::get_Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Shoot_m1FA6606E585499D7B3B35E9F8A1387D0E2CE08F1 (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Shoot => m_Wrapper.m_Player_Shoot;
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Player_Shoot_5;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Shoot_m1FA6606E585499D7B3B35E9F8A1387D0E2CE08F1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = PlayerActions_get_Shoot_m1FA6606E585499D7B3B35E9F8A1387D0E2CE08F1(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap PlayerInputActions/PlayerActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_Get_mA7C482C597BC15C02AB9A5EA22B1A57A679C107E (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionMap Get() { return m_Wrapper.m_Player; }
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = L_0->___m_Player_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_Get_mA7C482C597BC15C02AB9A5EA22B1A57A679C107E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C*>(__this + _offset);
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* _returnValue;
	_returnValue = PlayerActions_Get_mA7C482C597BC15C02AB9A5EA22B1A57A679C107E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void PlayerInputActions/PlayerActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Enable_mF58238B2F4FDAC4042D0C535E628A2DCDEF89D7F (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, const RuntimeMethod* method) 
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_mA7C482C597BC15C02AB9A5EA22B1A57A679C107E(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_0, NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_Enable_mF58238B2F4FDAC4042D0C535E628A2DCDEF89D7F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C*>(__this + _offset);
	PlayerActions_Enable_mF58238B2F4FDAC4042D0C535E628A2DCDEF89D7F(_thisAdjusted, method);
}
// System.Void PlayerInputActions/PlayerActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Disable_mDB55707960321BA19120D2FBFDE0BE47254F8CD9 (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, const RuntimeMethod* method) 
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_mA7C482C597BC15C02AB9A5EA22B1A57A679C107E(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_0, NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_Disable_mDB55707960321BA19120D2FBFDE0BE47254F8CD9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C*>(__this + _offset);
	PlayerActions_Disable_mDB55707960321BA19120D2FBFDE0BE47254F8CD9(_thisAdjusted, method);
}
// System.Boolean PlayerInputActions/PlayerActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerActions_get_enabled_m13FC6D627F770B0D78D9FBA889BB4A6116AF5771 (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_mA7C482C597BC15C02AB9A5EA22B1A57A679C107E(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayerActions_get_enabled_m13FC6D627F770B0D78D9FBA889BB4A6116AF5771_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayerActions_get_enabled_m13FC6D627F770B0D78D9FBA889BB4A6116AF5771(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap PlayerInputActions/PlayerActions::op_Implicit(PlayerInputActions/PlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_op_Implicit_mA9565A8E45F42FBE2AF70A501187A897393BCE7D (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C ___set0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator InputActionMap(PlayerActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_mA7C482C597BC15C02AB9A5EA22B1A57A679C107E((&___set0), NULL);
		return L_0;
	}
}
// System.Void PlayerInputActions/PlayerActions::AddCallbacks(PlayerInputActions/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_AddCallbacks_m5C0962D71E43D284E9FAFBDBC76578DE8A277E40 (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9540FEA61598062A723F0D41A98EC628BE00BBD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m454705CBDA77D048B31C3DA323CF1050C68B9A24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null || m_Wrapper.m_PlayerActionsCallbackInterfaces.Contains(instance)) return;
		RuntimeObject* L_0 = ___instance0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_1 = __this->___m_Wrapper_0;
		NullCheck(L_1);
		List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E* L_2 = L_1->___m_PlayerActionsCallbackInterfaces_2;
		RuntimeObject* L_3 = ___instance0;
		NullCheck(L_2);
		bool L_4;
		L_4 = List_1_Contains_m454705CBDA77D048B31C3DA323CF1050C68B9A24(L_2, L_3, List_1_Contains_m454705CBDA77D048B31C3DA323CF1050C68B9A24_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (instance == null || m_Wrapper.m_PlayerActionsCallbackInterfaces.Contains(instance)) return;
		return;
	}

IL_0017:
	{
		// m_Wrapper.m_PlayerActionsCallbackInterfaces.Add(instance);
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_5 = __this->___m_Wrapper_0;
		NullCheck(L_5);
		List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E* L_6 = L_5->___m_PlayerActionsCallbackInterfaces_2;
		RuntimeObject* L_7 = ___instance0;
		NullCheck(L_6);
		List_1_Add_m9540FEA61598062A723F0D41A98EC628BE00BBD1_inline(L_6, L_7, List_1_Add_m9540FEA61598062A723F0D41A98EC628BE00BBD1_RuntimeMethod_var);
		// @Movement.started += instance.OnMovement;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = PlayerActions_get_Movement_mD9469EF34C9F8BA6BFFAD6858D0B172322D988E0(__this, NULL);
		RuntimeObject* L_9 = ___instance0;
		RuntimeObject* L_10 = L_9;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_11 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_11, L_10, (intptr_t)((void*)GetInterfaceMethodInfo(L_10, 0, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_8);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_8, L_11, NULL);
		// @Movement.performed += instance.OnMovement;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = PlayerActions_get_Movement_mD9469EF34C9F8BA6BFFAD6858D0B172322D988E0(__this, NULL);
		RuntimeObject* L_13 = ___instance0;
		RuntimeObject* L_14 = L_13;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_15 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_15, L_14, (intptr_t)((void*)GetInterfaceMethodInfo(L_14, 0, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_12);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_12, L_15, NULL);
		// @Movement.canceled += instance.OnMovement;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_16;
		L_16 = PlayerActions_get_Movement_mD9469EF34C9F8BA6BFFAD6858D0B172322D988E0(__this, NULL);
		RuntimeObject* L_17 = ___instance0;
		RuntimeObject* L_18 = L_17;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_19 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_19, L_18, (intptr_t)((void*)GetInterfaceMethodInfo(L_18, 0, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_16);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_16, L_19, NULL);
		// @Rotation.started += instance.OnRotation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_20;
		L_20 = PlayerActions_get_Rotation_mD012C7FADC0BCBDD04EF77CD183BC9E44403B1FB(__this, NULL);
		RuntimeObject* L_21 = ___instance0;
		RuntimeObject* L_22 = L_21;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_23 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_23, L_22, (intptr_t)((void*)GetInterfaceMethodInfo(L_22, 1, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_20);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_20, L_23, NULL);
		// @Rotation.performed += instance.OnRotation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_24;
		L_24 = PlayerActions_get_Rotation_mD012C7FADC0BCBDD04EF77CD183BC9E44403B1FB(__this, NULL);
		RuntimeObject* L_25 = ___instance0;
		RuntimeObject* L_26 = L_25;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_27 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_27, L_26, (intptr_t)((void*)GetInterfaceMethodInfo(L_26, 1, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_24);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_24, L_27, NULL);
		// @Rotation.canceled += instance.OnRotation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_28;
		L_28 = PlayerActions_get_Rotation_mD012C7FADC0BCBDD04EF77CD183BC9E44403B1FB(__this, NULL);
		RuntimeObject* L_29 = ___instance0;
		RuntimeObject* L_30 = L_29;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_31 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_31, L_30, (intptr_t)((void*)GetInterfaceMethodInfo(L_30, 1, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_28);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_28, L_31, NULL);
		// @Shoot.started += instance.OnShoot;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_32;
		L_32 = PlayerActions_get_Shoot_m1FA6606E585499D7B3B35E9F8A1387D0E2CE08F1(__this, NULL);
		RuntimeObject* L_33 = ___instance0;
		RuntimeObject* L_34 = L_33;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_35 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_35, L_34, (intptr_t)((void*)GetInterfaceMethodInfo(L_34, 2, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_32);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_32, L_35, NULL);
		// @Shoot.performed += instance.OnShoot;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_36;
		L_36 = PlayerActions_get_Shoot_m1FA6606E585499D7B3B35E9F8A1387D0E2CE08F1(__this, NULL);
		RuntimeObject* L_37 = ___instance0;
		RuntimeObject* L_38 = L_37;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_39 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_39, L_38, (intptr_t)((void*)GetInterfaceMethodInfo(L_38, 2, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_36);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_36, L_39, NULL);
		// @Shoot.canceled += instance.OnShoot;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_40;
		L_40 = PlayerActions_get_Shoot_m1FA6606E585499D7B3B35E9F8A1387D0E2CE08F1(__this, NULL);
		RuntimeObject* L_41 = ___instance0;
		RuntimeObject* L_42 = L_41;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_43 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_43, L_42, (intptr_t)((void*)GetInterfaceMethodInfo(L_42, 2, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_40);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_40, L_43, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_AddCallbacks_m5C0962D71E43D284E9FAFBDBC76578DE8A277E40_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C*>(__this + _offset);
	PlayerActions_AddCallbacks_m5C0962D71E43D284E9FAFBDBC76578DE8A277E40(_thisAdjusted, ___instance0, method);
}
// System.Void PlayerInputActions/PlayerActions::UnregisterCallbacks(PlayerInputActions/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_UnregisterCallbacks_m0EE7276BB6AF3F8AD8B9C9BD95F21DD411202770 (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// @Movement.started -= instance.OnMovement;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0;
		L_0 = PlayerActions_get_Movement_mD9469EF34C9F8BA6BFFAD6858D0B172322D988E0(__this, NULL);
		RuntimeObject* L_1 = ___instance0;
		RuntimeObject* L_2 = L_1;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, L_2, (intptr_t)((void*)GetInterfaceMethodInfo(L_2, 0, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_0);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_0, L_3, NULL);
		// @Movement.performed -= instance.OnMovement;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = PlayerActions_get_Movement_mD9469EF34C9F8BA6BFFAD6858D0B172322D988E0(__this, NULL);
		RuntimeObject* L_5 = ___instance0;
		RuntimeObject* L_6 = L_5;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, L_6, (intptr_t)((void*)GetInterfaceMethodInfo(L_6, 0, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_4);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_4, L_7, NULL);
		// @Movement.canceled -= instance.OnMovement;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = PlayerActions_get_Movement_mD9469EF34C9F8BA6BFFAD6858D0B172322D988E0(__this, NULL);
		RuntimeObject* L_9 = ___instance0;
		RuntimeObject* L_10 = L_9;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_11 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_11, L_10, (intptr_t)((void*)GetInterfaceMethodInfo(L_10, 0, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_8);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_8, L_11, NULL);
		// @Rotation.started -= instance.OnRotation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = PlayerActions_get_Rotation_mD012C7FADC0BCBDD04EF77CD183BC9E44403B1FB(__this, NULL);
		RuntimeObject* L_13 = ___instance0;
		RuntimeObject* L_14 = L_13;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_15 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_15, L_14, (intptr_t)((void*)GetInterfaceMethodInfo(L_14, 1, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_12);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_12, L_15, NULL);
		// @Rotation.performed -= instance.OnRotation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_16;
		L_16 = PlayerActions_get_Rotation_mD012C7FADC0BCBDD04EF77CD183BC9E44403B1FB(__this, NULL);
		RuntimeObject* L_17 = ___instance0;
		RuntimeObject* L_18 = L_17;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_19 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_19, L_18, (intptr_t)((void*)GetInterfaceMethodInfo(L_18, 1, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_16);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_16, L_19, NULL);
		// @Rotation.canceled -= instance.OnRotation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_20;
		L_20 = PlayerActions_get_Rotation_mD012C7FADC0BCBDD04EF77CD183BC9E44403B1FB(__this, NULL);
		RuntimeObject* L_21 = ___instance0;
		RuntimeObject* L_22 = L_21;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_23 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_23, L_22, (intptr_t)((void*)GetInterfaceMethodInfo(L_22, 1, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_20);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_20, L_23, NULL);
		// @Shoot.started -= instance.OnShoot;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_24;
		L_24 = PlayerActions_get_Shoot_m1FA6606E585499D7B3B35E9F8A1387D0E2CE08F1(__this, NULL);
		RuntimeObject* L_25 = ___instance0;
		RuntimeObject* L_26 = L_25;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_27 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_27, L_26, (intptr_t)((void*)GetInterfaceMethodInfo(L_26, 2, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_24);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_24, L_27, NULL);
		// @Shoot.performed -= instance.OnShoot;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_28;
		L_28 = PlayerActions_get_Shoot_m1FA6606E585499D7B3B35E9F8A1387D0E2CE08F1(__this, NULL);
		RuntimeObject* L_29 = ___instance0;
		RuntimeObject* L_30 = L_29;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_31 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_31, L_30, (intptr_t)((void*)GetInterfaceMethodInfo(L_30, 2, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_28);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_28, L_31, NULL);
		// @Shoot.canceled -= instance.OnShoot;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_32;
		L_32 = PlayerActions_get_Shoot_m1FA6606E585499D7B3B35E9F8A1387D0E2CE08F1(__this, NULL);
		RuntimeObject* L_33 = ___instance0;
		RuntimeObject* L_34 = L_33;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_35 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_35, L_34, (intptr_t)((void*)GetInterfaceMethodInfo(L_34, 2, IPlayerActions_t71B1DE685863404A0563EC268B5E0225748DA4F1_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_32);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_32, L_35, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_UnregisterCallbacks_m0EE7276BB6AF3F8AD8B9C9BD95F21DD411202770_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C*>(__this + _offset);
	PlayerActions_UnregisterCallbacks_m0EE7276BB6AF3F8AD8B9C9BD95F21DD411202770(_thisAdjusted, ___instance0, method);
}
// System.Void PlayerInputActions/PlayerActions::RemoveCallbacks(PlayerInputActions/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_RemoveCallbacks_m744BBD23DF0FD87FB89E1B70A9F42D4B365D3674 (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mF0DC1699190D9A7F16C59F7015A582906F32B920_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Wrapper.m_PlayerActionsCallbackInterfaces.Remove(instance))
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E* L_1 = L_0->___m_PlayerActionsCallbackInterfaces_2;
		RuntimeObject* L_2 = ___instance0;
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Remove_mF0DC1699190D9A7F16C59F7015A582906F32B920(L_1, L_2, List_1_Remove_mF0DC1699190D9A7F16C59F7015A582906F32B920_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// UnregisterCallbacks(instance);
		RuntimeObject* L_4 = ___instance0;
		PlayerActions_UnregisterCallbacks_m0EE7276BB6AF3F8AD8B9C9BD95F21DD411202770(__this, L_4, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_RemoveCallbacks_m744BBD23DF0FD87FB89E1B70A9F42D4B365D3674_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C*>(__this + _offset);
	PlayerActions_RemoveCallbacks_m744BBD23DF0FD87FB89E1B70A9F42D4B365D3674(_thisAdjusted, ___instance0, method);
}
// System.Void PlayerInputActions/PlayerActions::SetCallbacks(PlayerInputActions/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_SetCallbacks_mF14401481D7EDE8CDE7441FF33A814595D844AE0 (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m64515856D986CB3D409426069FB04CFA32088962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0AE002887C57BF00E27BDDC6B1D3A4CCDED75F2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCE17733F5755DBD993FDF622E51430326E622BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m918B6424E64FD0AC28914AC99A6F25ECD1B28CA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC9096B575C2C015F75F49B6C88ACC405946955B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA8F639E63A7CB78C8A3AB38721F85DECCD73272B V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// foreach (var item in m_Wrapper.m_PlayerActionsCallbackInterfaces)
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E* L_1 = L_0->___m_PlayerActionsCallbackInterfaces_2;
		NullCheck(L_1);
		Enumerator_tA8F639E63A7CB78C8A3AB38721F85DECCD73272B L_2;
		L_2 = List_1_GetEnumerator_mC9096B575C2C015F75F49B6C88ACC405946955B7(L_1, List_1_GetEnumerator_mC9096B575C2C015F75F49B6C88ACC405946955B7_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m64515856D986CB3D409426069FB04CFA32088962((&V_0), Enumerator_Dispose_m64515856D986CB3D409426069FB04CFA32088962_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_0013_1:
			{
				// foreach (var item in m_Wrapper.m_PlayerActionsCallbackInterfaces)
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_mCE17733F5755DBD993FDF622E51430326E622BAA_inline((&V_0), Enumerator_get_Current_mCE17733F5755DBD993FDF622E51430326E622BAA_RuntimeMethod_var);
				V_1 = L_3;
				// UnregisterCallbacks(item);
				RuntimeObject* L_4 = V_1;
				PlayerActions_UnregisterCallbacks_m0EE7276BB6AF3F8AD8B9C9BD95F21DD411202770(__this, L_4, NULL);
			}

IL_0022_1:
			{
				// foreach (var item in m_Wrapper.m_PlayerActionsCallbackInterfaces)
				bool L_5;
				L_5 = Enumerator_MoveNext_m0AE002887C57BF00E27BDDC6B1D3A4CCDED75F2D((&V_0), Enumerator_MoveNext_m0AE002887C57BF00E27BDDC6B1D3A4CCDED75F2D_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// m_Wrapper.m_PlayerActionsCallbackInterfaces.Clear();
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_6 = __this->___m_Wrapper_0;
		NullCheck(L_6);
		List_1_t99B60944FB4754A2F50B9E10D28ED6D4E84B5E4E* L_7 = L_6->___m_PlayerActionsCallbackInterfaces_2;
		NullCheck(L_7);
		List_1_Clear_m918B6424E64FD0AC28914AC99A6F25ECD1B28CA9_inline(L_7, List_1_Clear_m918B6424E64FD0AC28914AC99A6F25ECD1B28CA9_RuntimeMethod_var);
		// AddCallbacks(instance);
		RuntimeObject* L_8 = ___instance0;
		PlayerActions_AddCallbacks_m5C0962D71E43D284E9FAFBDBC76578DE8A277E40(__this, L_8, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_SetCallbacks_mF14401481D7EDE8CDE7441FF33A814595D844AE0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C*>(__this + _offset);
	PlayerActions_SetCallbacks_mF14401481D7EDE8CDE7441FF33A814595D844AE0(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawner_Start_mFB40EA42E15E6C21061528AC9F2637008A7A37F8 (PlayerSpawner_t3A74834B7A1A9F58FECE5AF56F46844CD026E4AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerSpawner::OnNetworkSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawner_OnNetworkSpawn_mBB0CF3E290108DC68C66B597D7AF580D3189A331 (PlayerSpawner_t3A74834B7A1A9F58FECE5AF56F46844CD026E4AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnEventCompletedDelegateHandler_t95567703998423114BF49A290F181D1B8E6A2788_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerSpawner_ClientConnected_mFC044C2B7DF1C10263FCEDA1B9B69C72B6C3C215_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerSpawner_SceneLoaded_m41EA0CC8DE6C2CE367640754FC6F4A3A84B826D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkManager.Singleton.SceneManager.OnLoadEventCompleted += SceneLoaded;
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_0);
		NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC* L_1;
		L_1 = NetworkManager_get_SceneManager_m88D4B3F1D93093835BE6C7D13A4E3E3D337637C2_inline(L_0, NULL);
		OnEventCompletedDelegateHandler_t95567703998423114BF49A290F181D1B8E6A2788* L_2 = (OnEventCompletedDelegateHandler_t95567703998423114BF49A290F181D1B8E6A2788*)il2cpp_codegen_object_new(OnEventCompletedDelegateHandler_t95567703998423114BF49A290F181D1B8E6A2788_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OnEventCompletedDelegateHandler__ctor_mD983C586CEF03A20D709B26DD5287AED6637C29C(L_2, __this, (intptr_t)((void*)PlayerSpawner_SceneLoaded_m41EA0CC8DE6C2CE367640754FC6F4A3A84B826D6_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		NetworkSceneManager_add_OnLoadEventCompleted_m4F987BEE576F7E824FBD9267415B4E68B946EB7A(L_1, L_2, NULL);
		// NetworkManager.Singleton.OnClientConnectedCallback += ClientConnected;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3;
		L_3 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* L_4 = (Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C*)il2cpp_codegen_object_new(Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m9D03744CB4F9BFE4C8A4B2FF3970EF3F22389E8D(L_4, __this, (intptr_t)((void*)PlayerSpawner_ClientConnected_mFC044C2B7DF1C10263FCEDA1B9B69C72B6C3C215_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		NetworkManager_add_OnClientConnectedCallback_m84FF66C1C18421FAC38DAE1B94BCC3830AFED31A(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void PlayerSpawner::ClientConnected(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawner_ClientConnected_mFC044C2B7DF1C10263FCEDA1B9B69C72B6C3C215 (PlayerSpawner_t3A74834B7A1A9F58FECE5AF56F46844CD026E4AC* __this, uint64_t ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsHost) {
		bool L_0;
		L_0 = NetworkBehaviour_get_IsHost_m8467EE16C1819716A8427F93EEE0D6CA13AC8422_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// GameObject player = Instantiate(playerPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___playerPrefab_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// player.GetComponent<NetworkObject>().SpawnAsPlayerObject(obj, true);
		NullCheck(L_2);
		NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* L_3;
		L_3 = GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E(L_2, GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E_RuntimeMethod_var);
		uint64_t L_4 = ___obj0;
		NullCheck(L_3);
		NetworkObject_SpawnAsPlayerObject_m8DA6ABE899C9CD4E8A0A89A0741F7CAE230744DF(L_3, L_4, (bool)1, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void PlayerSpawner::SceneLoaded(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Collections.Generic.List`1<System.UInt64>,System.Collections.Generic.List`1<System.UInt64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawner_SceneLoaded_m41EA0CC8DE6C2CE367640754FC6F4A3A84B826D6 (PlayerSpawner_t3A74834B7A1A9F58FECE5AF56F46844CD026E4AC* __this, String_t* ___sceneName0, int32_t ___loadSceneMode1, List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___clientsCompleted2, List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___clientsTimedOut3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0AC4B0264C90B43D2F1B3B68095F5A35E8750525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE07B98951C528DCEC133D87CFB6966101285E71E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint64_t V_1 = 0;
	{
		// if (IsHost && sceneName == GAME_SCENE) {
		bool L_0;
		L_0 = NetworkBehaviour_get_IsHost_m8467EE16C1819716A8427F93EEE0D6CA13AC8422_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_1 = ___sceneName0;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral3E538D25AD88E153C305B95581F14918239F2431, NULL);
		if (!L_2)
		{
			goto IL_0059;
		}
	}
	{
		// foreach (ulong id in NetworkManager.Singleton.ConnectedClientsIds) {
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3;
		L_3 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = NetworkManager_get_ConnectedClientsIds_mAC05454DCEFB717F590830D86FFA869E7201231A(L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UInt64>::GetEnumerator() */, IEnumerable_1_t0AC4B0264C90B43D2F1B3B68095F5A35E8750525_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_0058;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0058:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0045_1;
			}

IL_0027_1:
			{
				// foreach (ulong id in NetworkManager.Singleton.ConnectedClientsIds) {
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				uint64_t L_9;
				L_9 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.UInt64>::get_Current() */, IEnumerator_1_tE07B98951C528DCEC133D87CFB6966101285E71E_il2cpp_TypeInfo_var, L_8);
				V_1 = L_9;
				// GameObject player = Instantiate(playerPrefab);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___playerPrefab_27;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
				L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
				// player.GetComponent<NetworkObject>().SpawnAsPlayerObject(id, true);
				NullCheck(L_11);
				NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* L_12;
				L_12 = GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E(L_11, GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E_RuntimeMethod_var);
				uint64_t L_13 = V_1;
				NullCheck(L_12);
				NetworkObject_SpawnAsPlayerObject_m8DA6ABE899C9CD4E8A0A89A0741F7CAE230744DF(L_12, L_13, (bool)1, NULL);
			}

IL_0045_1:
			{
				// foreach (ulong id in NetworkManager.Singleton.ConnectedClientsIds) {
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_0059;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void PlayerSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawner__ctor_m9AC0A2021C9A25BE1115E0B828E459A65E992FA3 (PlayerSpawner_t3A74834B7A1A9F58FECE5AF56F46844CD026E4AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_m0BFD04A5D02376F13DD2E85274836CD4A3AD38E6(__this, NULL);
		return;
	}
}
// System.String PlayerSpawner::__getTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerSpawner___getTypeName_m99C16BCB39F1ED426B1ED8607DFE0D9664BE6DC0 (PlayerSpawner_t3A74834B7A1A9F58FECE5AF56F46844CD026E4AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF8C29CC08C940DE26E62C1566202CB777E95EFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralFF8C29CC08C940DE26E62C1566202CB777E95EFD;
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
// System.Single ProjectileController::get_damage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ProjectileController_get_damage_mCDC23EFC1975EFAB093CA52E4247BEB63BF4F802 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float damage { get; private set; } = (10f);
		il2cpp_codegen_runtime_class_init_inline(ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var);
		float L_0 = ((ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_StaticFields*)il2cpp_codegen_static_fields_for(ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var))->___U3CdamageU3Ek__BackingField_29;
		return L_0;
	}
}
// System.Void ProjectileController::set_damage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileController_set_damage_m117E201D409355B14228A7C371DCEC5DB6197E0A (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float damage { get; private set; } = (10f);
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var);
		((ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_StaticFields*)il2cpp_codegen_static_fields_for(ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var))->___U3CdamageU3Ek__BackingField_29 = L_0;
		return;
	}
}
// System.Void ProjectileController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileController_Start_mC8286D6B48220A4E8A284879C39F93F4F033A213 (ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* __this, const RuntimeMethod* method) 
{
	{
		// if (IsServer) {
		bool L_0;
		L_0 = NetworkBehaviour_get_IsServer_m57CCCE498593E3A21E6B952AB9C4BAA482EB4CD6_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// DestroyServerRpc(lifeTime);
		float L_1 = __this->___lifeTime_27;
		ProjectileController_DestroyServerRpc_mA956463C71DBE2D2673BD9138FC4523A9B5C5E93(__this, L_1, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void ProjectileController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileController_FixedUpdate_mE8ED986C9FE2F18D4403061E243340210D2BE443 (ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(Vector2.up * Time.fixedDeltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		float L_2;
		L_2 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_1, L_2, NULL);
		float L_4 = __this->___speed_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		NullCheck(L_0);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ProjectileController::ProjectileLifeTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProjectileController_ProjectileLifeTime_mBAFD92F1D153E2D29A20964F588BEF9F51247599 (ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* __this, float ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CProjectileLifeTimeU3Ed__8_t10F32EC3053882FD0D6923EF1650B43F69D2FD9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CProjectileLifeTimeU3Ed__8_t10F32EC3053882FD0D6923EF1650B43F69D2FD9D* L_0 = (U3CProjectileLifeTimeU3Ed__8_t10F32EC3053882FD0D6923EF1650B43F69D2FD9D*)il2cpp_codegen_object_new(U3CProjectileLifeTimeU3Ed__8_t10F32EC3053882FD0D6923EF1650B43F69D2FD9D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CProjectileLifeTimeU3Ed__8__ctor_m8AB9E63C4C197C300D085DB5BE186B12B75DDD30(L_0, 0, NULL);
		U3CProjectileLifeTimeU3Ed__8_t10F32EC3053882FD0D6923EF1650B43F69D2FD9D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CProjectileLifeTimeU3Ed__8_t10F32EC3053882FD0D6923EF1650B43F69D2FD9D* L_2 = L_1;
		float L_3 = ___time0;
		NullCheck(L_2);
		L_2->___time_2 = L_3;
		return L_2;
	}
}
// System.Void ProjectileController::DestroyServerRpc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileController_DestroyServerRpc_mA956463C71DBE2D2673BD9138FC4523A9B5C5E93 (ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* __this, float ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDFA9B9ED9720515B9FCBBC0F6D35A1F9572CDCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_1;
	memset((&V_1), 0, sizeof(V_1));
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		V_0 = L_0;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_00a5;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_7, NULL);
		if (!L_8)
		{
			goto IL_00a5;
		}
	}

IL_0058:
	{
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_9 = V_2;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_10;
		L_10 = NetworkBehaviour___beginSendServerRpc_m4A2F11DDFFDA210CA349A21652A185BA75379429(__this, ((int32_t)-1699883846), L_9, ((int32_t)0), NULL);
		V_1 = L_10;
		il2cpp_codegen_initobj((&V_3), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_11 = V_3;
		FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDFA9B9ED9720515B9FCBBC0F6D35A1F9572CDCEC_inline((&V_1), (&___time0), L_11, FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDFA9B9ED9720515B9FCBBC0F6D35A1F9572CDCEC_RuntimeMethod_var);
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_12 = V_2;
		NetworkBehaviour___endSendServerRpc_m012C05F43A55FCBC009562DA6EE207AAF38AD32C(__this, (&V_1), ((int32_t)-1699883846), L_12, ((int32_t)0), NULL);
	}

IL_00a5:
	{
		int32_t L_13 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)L_13) == ((int32_t)((int32_t)1)))? 1 : 0))
		{
			goto IL_00d4;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_14, NULL);
		if (L_15)
		{
			goto IL_00d5;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_16 = V_0;
		NullCheck(L_16);
		bool L_17;
		L_17 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_16, NULL);
		if (L_17)
		{
			goto IL_00d5;
		}
	}

IL_00d4:
	{
		return;
	}

IL_00d5:
	{
		// Destroy(gameObject.GetComponent<NetworkObject>(), time);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_18);
		NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* L_19;
		L_19 = GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E(L_18, GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E_RuntimeMethod_var);
		float L_20 = ___time0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_19, L_20, NULL);
		// Destroy(gameObject, time);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_22 = ___time0;
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_21, L_22, NULL);
		// }
		return;
	}
}
// System.Void ProjectileController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileController__ctor_mB1B701C69DFB3576EAE38B3B962C26C6E5AE2E38 (ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_m0BFD04A5D02376F13DD2E85274836CD4A3AD38E6(__this, NULL);
		return;
	}
}
// System.Void ProjectileController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileController__cctor_m1C1885ECDEED089398F16940DCF1ED9CBBBE5BED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectileController___rpc_handler_2595083450_mFC03DB0358F78850D3696D94737C116642A84DB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* L_0 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->_____rpc_func_table_4;
		RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* L_1 = (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*)il2cpp_codegen_object_new(RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6(L_1, NULL, (intptr_t)((void*)ProjectileController___rpc_handler_2595083450_mFC03DB0358F78850D3696D94737C116642A84DB1_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877(L_0, ((int32_t)-1699883846), L_1, Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		// public static float damage { get; private set; } = (10f);
		((ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_StaticFields*)il2cpp_codegen_static_fields_for(ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var))->___U3CdamageU3Ek__BackingField_29 = (10.0f);
		return;
	}
}
// System.Void ProjectileController::__rpc_handler_2595083450(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileController___rpc_handler_2595083450_mFC03DB0358F78850D3696D94737C116642A84DB1 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___target0, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader1, __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E ___rpcParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m75B00CC543B79B01824FFDFB32684BDEDDAC729D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	float V_1 = 0.0f;
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_0 = ___target0;
		NullCheck(L_0);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1;
		L_1 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(L_0, NULL);
		V_0 = L_1;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_5 = V_2;
		FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m75B00CC543B79B01824FFDFB32684BDEDDAC729D_inline((&___reader1), (&V_1), L_5, FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m75B00CC543B79B01824FFDFB32684BDEDDAC729D_RuntimeMethod_var);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_6 = ___target0;
		NullCheck(L_6);
		L_6->_____rpc_exec_stage_4 = ((int32_t)1);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_7 = ___target0;
		float L_8 = V_1;
		NullCheck(((ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46*)CastclassClass((RuntimeObject*)L_7, ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var)));
		ProjectileController_DestroyServerRpc_mA956463C71DBE2D2673BD9138FC4523A9B5C5E93(((ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46*)CastclassClass((RuntimeObject*)L_7, ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var)), L_8, NULL);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_9 = ___target0;
		NullCheck(L_9);
		L_9->_____rpc_exec_stage_4 = ((int32_t)0);
		return;
	}
}
// System.String ProjectileController::__getTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProjectileController___getTypeName_m910A8731C10A1E5ED1A49935551E0F062F695A34 (ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07F29B0542766071331D57CAF586B479B0C6F6E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral07F29B0542766071331D57CAF586B479B0C6F6E7;
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
// System.Void ProjectileController/<ProjectileLifeTime>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProjectileLifeTimeU3Ed__8__ctor_m8AB9E63C4C197C300D085DB5BE186B12B75DDD30 (U3CProjectileLifeTimeU3Ed__8_t10F32EC3053882FD0D6923EF1650B43F69D2FD9D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ProjectileController/<ProjectileLifeTime>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProjectileLifeTimeU3Ed__8_System_IDisposable_Dispose_m577D58EC96A1F66F8FE3020C92E60A5E41264263 (U3CProjectileLifeTimeU3Ed__8_t10F32EC3053882FD0D6923EF1650B43F69D2FD9D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ProjectileController/<ProjectileLifeTime>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CProjectileLifeTimeU3Ed__8_MoveNext_m37755E4F5D66101FA70F6986E62655791867D811 (U3CProjectileLifeTimeU3Ed__8_t10F32EC3053882FD0D6923EF1650B43F69D2FD9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* L_1 = __this->___U3CU3E4__this_3;
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(time);
		float L_4 = __this->___time_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.GetComponent<NetworkObject>().Despawn();
		ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* L_8;
		L_8 = GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E(L_7, GameObject_GetComponent_TisNetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_mBCE234D890EEA6036A8107F53EC10D85BF65D03E_RuntimeMethod_var);
		NullCheck(L_8);
		NetworkObject_Despawn_mC20F16433447650773B8DE784593B44A63C68EB7(L_8, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ProjectileController/<ProjectileLifeTime>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CProjectileLifeTimeU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC48AE1C218C8ADD8A2AAF8BA9B247948A1A94906 (U3CProjectileLifeTimeU3Ed__8_t10F32EC3053882FD0D6923EF1650B43F69D2FD9D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ProjectileController/<ProjectileLifeTime>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProjectileLifeTimeU3Ed__8_System_Collections_IEnumerator_Reset_mDA73E6192913F2520E9EF044276E40D9FBCEDFE5 (U3CProjectileLifeTimeU3Ed__8_t10F32EC3053882FD0D6923EF1650B43F69D2FD9D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CProjectileLifeTimeU3Ed__8_System_Collections_IEnumerator_Reset_mDA73E6192913F2520E9EF044276E40D9FBCEDFE5_RuntimeMethod_var)));
	}
}
// System.Object ProjectileController/<ProjectileLifeTime>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CProjectileLifeTimeU3Ed__8_System_Collections_IEnumerator_get_Current_m65E02399663B44C43F73A33A14C7C2C5B6A197E0 (U3CProjectileLifeTimeU3Ed__8_t10F32EC3053882FD0D6923EF1650B43F69D2FD9D* __this, const RuntimeMethod* method) 
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
// System.Void UIController::ApplyPlayerSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_ApplyPlayerSettings_m075D1EFE28A23312D782DD896193A278756B87C3 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// lobbyPlayerName.text = settingsPlayerName.text;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___lobbyPlayerName_5;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___settingsPlayerName_4;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_1);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_2);
		// settingsUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___settingsUI_6;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// lobbyUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___lobbyUI_7;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController__ctor_mFF218DBC8CCEFE36AAC295D2376501658CD8B7A2 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsListening { get; internal set; }
		bool L_0 = __this->___U3CIsListeningU3Ek__BackingField_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsClient { get; internal set; }
		bool L_0 = __this->___U3CIsClientU3Ek__BackingField_36;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF_inline (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) 
{
	{
		// public ulong OwnerClientId { get; internal set; }
		uint64_t L_0 = __this->___U3COwnerClientIdU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkManager_get_LocalClientId_m1B93454E7949ACBF20043DCDD884F63E119E6577_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LocalClientId;
		uint64_t L_0 = __this->___m_LocalClientId_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsServer { get; internal set; }
		bool L_0 = __this->___U3CIsServerU3Ek__BackingField_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsOwner_m2C408A356ACBD9AF0C991BF01B5F20C75891FAB3_inline (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsOwner { get; internal set; }
		bool L_0 = __this->___U3CIsOwnerU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_Instance_mCFE1FA9223DC000B8D5535A9B6576264FA4405EF_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameManager Instance { get; private set; }
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ___value0;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NetworkManager Singleton { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->___U3CSingletonU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC* NetworkManager_get_SceneManager_m88D4B3F1D93093835BE6C7D13A4E3E3D337637C2_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) 
{
	{
		// public NetworkSceneManager SceneManager { get; private set; }
		NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC* L_0 = __this->___U3CSceneManagerU3Ek__BackingField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_Data_m9711066FDCA86E6A1E5FBB7F7D161A0DD6033DB0_inline (Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* __this, Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, PlayerDataObject> Data{ get; set; }
		Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA417A94B122547E4DD22BF1528BDCDF1DB2FAFE0* Lobby_get_Players_mDF781AEEDB64686EAE43DA61B7BE704FC551FC4E_inline (Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* __this, const RuntimeMethod* method) 
{
	{
		// public List<Player> Players{ get; internal set; }
		List_1_tA417A94B122547E4DD22BF1528BDCDF1DB2FAFE0* L_0 = __this->___U3CPlayersU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4* Player_get_Data_m53B2B5010C4B503A5DBC8483D51FCE202C717569_inline (Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, PlayerDataObject> Data{ get; set; }
		Dictionary_2_tAC9B5191DF5696B0F7280B8AEAEBD7D2447BE8E4* L_0 = __this->___U3CDataU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayerDataObject_get_Value_m4C21C8A947ADAF71DB0857CFEC5ADE02D9FA2A86_inline (PlayerDataObject_t0D8F6C76C20CE409B0E408EB0394488F5236027B* __this, const RuntimeMethod* method) 
{
	{
		// public string Value{ get; set; }
		String_t* L_0 = __this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Allocation_get_AllocationId_mF3672B7F013E1E320C40C273C6ED9658874C3987_inline (Allocation_t485155861D9DF79FCFE5C4C5F93C9889D041C430* __this, const RuntimeMethod* method) 
{
	{
		// public System.Guid AllocationId{ get; }
		Guid_t L_0 = __this->___U3CAllocationIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateLobbyOptions_set_IsPrivate_m8790F677FEF9CAAC23FC2B7F3965E85D60923658_inline (CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___value0, const RuntimeMethod* method) 
{
	{
		// public bool? IsPrivate { get; set; }
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = ___value0;
		__this->___U3CIsPrivateU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateLobbyOptions_set_Player_m38770CD078390E1DC9D84ACFC0F186C396270A20_inline (CreateLobbyOptions_t41D6D11CB0C7B6868C5B73C16529714239A2FC46* __this, Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* ___value0, const RuntimeMethod* method) 
{
	{
		// public Player Player { get; set; }
		Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* L_0 = ___value0;
		__this->___U3CPlayerU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlayerU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Lobby_get_Id_mAA7BA102381A42EF34951DEF00C116611BC9D403_inline (Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* __this, const RuntimeMethod* method) 
{
	{
		// public string Id{ get; internal set; }
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdateLobbyOptions_set_Data_mE129466296853E2A4C52786BF129BA6999764802_inline (UpdateLobbyOptions_t515C0450F4C550EDE74AF44D1707FFE282A64AF9* __this, Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, DataObject> Data { get; set; }
		Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JoinLobbyByCodeOptions_set_Player_mFFD7C9175E53262398E884875A89C02B6C5BE8AF_inline (JoinLobbyByCodeOptions_tF4262E7977AFCD63208DE6BF0D299E8B95727D85* __this, Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* ___value0, const RuntimeMethod* method) 
{
	{
		// public Player Player { get; set; }
		Player_t52383FEE4E35AF8A8C9860F1411602AB6889EF90* L_0 = ___value0;
		__this->___U3CPlayerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlayerU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2042FCDC35CA07B523474220DF460A1A043B4C9D* QueryResponse_get_Results_mDAE2B6B500301687A39581DDB74DAE6B00A3BA11_inline (QueryResponse_tB3161BB8C249085FF9A3289A155FDDE1B30373A6* __this, const RuntimeMethod* method) 
{
	{
		// public List<Lobby> Results{ get; }
		List_1_t2042FCDC35CA07B523474220DF460A1A043B4C9D* L_0 = __this->___U3CResultsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Lobby_get_Name_m2B0F7CB176D09B582F2C80DFE5C151DEA608AF04_inline (Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* __this, const RuntimeMethod* method) 
{
	{
		// public string Name{ get; internal set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E* Lobby_get_Data_m1A49E5C6EFB7BB36308086F05F32F548DD748662_inline (Lobby_tD9B010A835C21C31B100D06A4F3C8BDD80D21B6C* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, DataObject> Data{ get; internal set; }
		Dictionary_2_t44E1BA3A6467D7E07F9BAFB86D5EB4E56B42CE1E* L_0 = __this->___U3CDataU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DataObject_get_Value_mD0E5FFFEA974682B1205D22209ED4208E094860A_inline (DataObject_tCE3C7F1A26400A13D21A110FE0508CC2BA73AADD* __this, const RuntimeMethod* method) 
{
	{
		// public string Value{ get; }
		String_t* L_0 = __this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsServer_m57CCCE498593E3A21E6B952AB9C4BAA482EB4CD6_inline (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsServer { get; private set; }
		bool L_0 = __this->___U3CIsServerU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_RotateTowards_m50EF9D609C80CD423CDA856EA3481DE2004633A3_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___from0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___to1, float ___maxDegreesDelta2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___from0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___to1;
		float L_2;
		L_2 = Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) == ((float)(0.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___to1;
		V_2 = L_5;
		goto IL_0030;
	}

IL_0019:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___from0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___to1;
		float L_8 = ___maxDegreesDelta2;
		float L_9 = V_0;
		float L_10;
		L_10 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((1.0f), ((float)(L_8/L_9)), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_SlerpUnclamped_mAE7F4DF2F239831CCAA1DFB52F313E5AED52D32D(L_6, L_7, L_10, NULL);
		V_2 = L_11;
		goto IL_0030;
	}

IL_0030:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ProjectileController_get_damage_mCDC23EFC1975EFAB093CA52E4247BEB63BF4F802_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float damage { get; private set; } = (10f);
		il2cpp_codegen_runtime_class_init_inline(ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var);
		float L_0 = ((ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_StaticFields*)il2cpp_codegen_static_fields_for(ProjectileController_t6A3639ADFDF1E54E8545837B51A46194534CBA46_il2cpp_TypeInfo_var))->___U3CdamageU3Ek__BackingField_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayerData_get_playerName_m5EAB50A09FE209D412F859DCC060B6A5C3AC067B_inline (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	{
		// public string playerName { get; private set; }
		String_t* L_0 = __this->___U3CplayerNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerData_set_playerName_m69D5A90F237CF84DDE833FD52B325C7DF6CA123A_inline (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string playerName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CplayerNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplayerNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* PlayerInputActions_get_asset_m9B9C68DD9768FCB1CF6BD634D275E31D0235D444_inline (PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BindingMask;
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_0 = __this->___m_BindingMask_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerActions__ctor_m193F8F973C130637191BFA5A33A18ED931C1328B_inline (PlayerActions_tBE4F44981B90C2F63310A719AB5531126369CB5C* __this, PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public PlayerActions(@PlayerInputActions wrapper) { m_Wrapper = wrapper; }
		PlayerInputActions_t4371BD30BF780546160FC74115946343BB75D694* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public PlayerActions(@PlayerInputActions wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsHost_m8467EE16C1819716A8427F93EEE0D6CA13AC8422_inline (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsHost { get; private set; }
		bool L_0 = __this->___U3CIsHostU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDFA9B9ED9720515B9FCBBC0F6D35A1F9572CDCEC_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, float* ___value0, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___unused1, const RuntimeMethod* method) 
{
	{
		// public void WriteValueSafe<T>(in T value, ForPrimitives unused = default) where T : unmanaged, IComparable, IConvertible, IComparable<T>, IEquatable<T> => WriteUnmanagedSafe(value);
		float* L_0 = ___value0;
		FastBufferWriter_WriteUnmanagedSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5F9D23D48A171B29C651DCB82BAD7CCAF800748_inline(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m75B00CC543B79B01824FFDFB32684BDEDDAC729D_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, float* ___value0, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___unused1, const RuntimeMethod* method) 
{
	{
		// public void ReadValueSafe<T>(out T value, FastBufferWriter.ForPrimitives unused = default) where T : unmanaged, IComparable, IConvertible, IComparable<T>, IEquatable<T> => ReadUnmanagedSafe(out value);
		float* L_0 = ___value0;
		FastBufferReader_ReadUnmanagedSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m456DA814AF45C8ACDF18D0F14659B3B497339349_inline(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___b1;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4;
		L_4 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_3, (1.0f), NULL);
		V_0 = L_4;
		float L_5 = V_0;
		bool L_6;
		L_6 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		float L_7 = V_0;
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (2.0f))), (57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteUnmanagedSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5F9D23D48A171B29C651DCB82BAD7CCAF800748_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, float* ___value0, const RuntimeMethod* method) 
{
	float* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// {
		float* L_0 = ___value0;
		V_0 = L_0;
		// fixed (T* ptr = &value)
		float* L_1 = V_0;
		// byte* bytes = (byte*)ptr;
		V_1 = (uint8_t*)((uintptr_t)L_1);
		// WriteBytesSafe(bytes, sizeof(T));
		uint8_t* L_2 = V_1;
		uint32_t L_3 = sizeof(float);
		FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_inline(__this, L_2, (int32_t)L_3, 0, NULL);
		V_0 = (float*)((uintptr_t)0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadUnmanagedSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m456DA814AF45C8ACDF18D0F14659B3B497339349_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, float* ___value0, const RuntimeMethod* method) 
{
	float* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// {
		float* L_0 = ___value0;
		V_0 = L_0;
		// fixed (T* ptr = &value)
		float* L_1 = V_0;
		// byte* bytes = (byte*)ptr;
		V_1 = (uint8_t*)((uintptr_t)L_1);
		// ReadBytesSafe(bytes, sizeof(T));
		uint8_t* L_2 = V_1;
		uint32_t L_3 = sizeof(float);
		FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_inline(__this, L_2, (int32_t)L_3, 0, NULL);
		V_0 = (float*)((uintptr_t)0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___dot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___dot0;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	{
		// if (!TryBeginWriteInternal(size))
		int32_t L_0 = ___size1;
		bool L_1;
		L_1 = FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_RuntimeMethod_var)));
	}

IL_0014:
	{
		// UnsafeUtility.MemCpy((Handle->BufferPointer + Handle->Position), value + offset, size);
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___BufferPointer_0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position_1;
		uint8_t* L_7 = ___value0;
		int32_t L_8 = ___offset2;
		int32_t L_9 = ___size1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_8)), ((int64_t)L_9), NULL);
		// Handle->Position += size;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_10 = __this->___Handle_0;
		NullCheck(L_10);
		int32_t* L_11 = (&L_10->___Position_1);
		int32_t* L_12 = L_11;
		int32_t L_13 = *((int32_t*)L_12);
		int32_t L_14 = ___size1;
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	{
		// if (!TryBeginReadInternal(size))
		int32_t L_0 = ___size1;
		bool L_1;
		L_1 = FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_RuntimeMethod_var)));
	}

IL_0014:
	{
		// UnsafeUtility.MemCpy(value + offset, (Handle->BufferPointer + Handle->Position), size);
		uint8_t* L_3 = ___value0;
		int32_t L_4 = ___offset2;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___BufferPointer_0;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Position_1;
		int32_t L_9 = ___size1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_8)), ((int64_t)L_9), NULL);
		// Handle->Position += size;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_10 = __this->___Handle_0;
		NullCheck(L_10);
		int32_t* L_11 = (&L_10->___Position_1);
		int32_t* L_12 = L_11;
		int32_t L_13 = *((int32_t*)L_12);
		int32_t L_14 = ___size1;
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___bytes0, const RuntimeMethod* method) 
{
	{
		// if (Handle->Position + bytes > Handle->Capacity)
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		int32_t L_2 = ___bytes0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Capacity_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_0059;
		}
	}
	{
		// if (Handle->Position + bytes > Handle->MaxCapacity)
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position_1;
		int32_t L_7 = ___bytes0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_8 = __this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___MaxCapacity_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)L_9)))
		{
			goto IL_0036;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// if (Handle->Capacity < Handle->MaxCapacity)
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_10 = __this->___Handle_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Capacity_3;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_12 = __this->___Handle_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___MaxCapacity_4;
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0057;
		}
	}
	{
		// Grow(bytes);
		int32_t L_14 = ___bytes0;
		FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB(__this, L_14, NULL);
		goto IL_0059;
	}

IL_0057:
	{
		// return false;
		return (bool)0;
	}

IL_0059:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t ___bytes0, const RuntimeMethod* method) 
{
	{
		// if (Handle->Position + bytes > Handle->Length)
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		int32_t L_2 = ___bytes0;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Length_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// return true;
		return (bool)1;
	}
}
