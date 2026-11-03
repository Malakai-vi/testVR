#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IComparer_1_tFAD3AE9FE3CE1FB3CBB781C55DC57C986D71521E;
struct IDictionary_2_t4D3B65115D85F2C21975A2BBF4A23860F8BCD02F;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEnumerator_1_t1DE1A6D62A866B680CA05436970C66219F072F3F;
struct IEnumerator_1_tF422B2F697FFF4CEE00980A3F34C5EBCFF513AF8;
struct IEnumerator_1_tAD7115F3C599B3BBBB9FE1BAF43B40430B72787B;
struct IEnumerator_1_tB51F2BDB78AE50C18CD1FF9228F79A4F3E42E0F7;
struct IEnumerator_1_t9C4BEE74A726ABB541B6A2B81ABEBF11CEA37C93;
struct IEnumerator_1_tD4C45DA5A0EA402F52194AEF4BC5CEE33E9C42E7;
struct IEnumerator_1_t7F214D72DFE165B967A6488A351FD951AC943ECA;
struct IEnumerator_1_t0C0EDCE3A6B9EA3A2D6EC2B7900A7C8BA8CF41F3;
struct IEnumerator_1_t587E5AA21F331C923CB8C57887C8808141E5E07D;
struct IEnumerator_1_tFE6E2BC242ED315B202D7AAFB5C2F283E0ACF41C;
struct IEnumerator_1_t9357DF13155A41022B9D2DAFB156C0520B699468;
struct IEnumerator_1_t3213D02848B6FA0AFF56BE2845A373C10004DCEC;
struct IEnumerator_1_t0283A591C147070A93FFA0F6C159D608B6155514;
struct IEnumerator_1_t8786CDA48E7686ED7408ABC3D0107028D2ECF147;
struct IEnumerator_1_tBDF7E057F62DB2860C2B14C0D800AACDDFFD0D09;
struct IEnumerator_1_t856F6838DCBDCCBBBC1BCE5D2A2CA3FB73C9E5C9;
struct IEnumerator_1_t96CA618C0F1490C62CB48DE504AD7E51854CBF89;
struct IEnumerator_1_t599F3C486FA9A5C478FFFD6420C59A6BBB7876CB;
struct IEnumerator_1_t3420CC02D45AD081C93A309F912BA9125536ACAC;
struct IEnumerator_1_t2DBB855D69A64DE5334877DE3B762940234B9A72;
struct IEnumerator_1_t79B912CBA712D5F76599837CD1604BEED0829411;
struct IEnumerator_1_t17B2429C510C1E9E3380E6F5BB52299267F7ABBC;
struct IEnumerator_1_tB22FCD08D591B657979BC015772EF132DF8E4A74;
struct IEnumerator_1_t000A232CAF2DD4044B9AFBD8982ECD3FB93809DC;
struct IEnumerator_1_tE972D340F536B04FCEE79D5799CA3F036A83451E;
struct IEnumerator_1_t90BCA6A7B2801D6A60BF1AFFCCA677FFF22E4CDA;
struct IEnumerator_1_t2AE5E199CB93D17B1E27686CC16B6667521C4040;
struct IEnumerator_1_tBF6C47FD132BC760EB3FDF790E0FE91FD3053E9B;
struct IEnumerator_1_t837F12EEBD47871CA329AE5636F57529BD8510A5;
struct IEnumerator_1_tB7E64F4FC8645D70280298B262EEF209F1759BD8;
struct IEnumerator_1_tB17887AB90F31EF533692113C116282BE8137A72;
struct IEnumerator_1_t9BAC5B5F88A0B1402733E2E2AA7CDE94AAFFA628;
struct IEnumerator_1_tDA7EC6DD9C7B117D360F4F267DE1AF00D78E8A69;
struct IEnumerator_1_t795CE62572C33D602EE9162EFF1F8EB4430DAD53;
struct IEnumerator_1_tA50BA3A8477F7D3879301E45E86A18629E2CBF24;
struct IEnumerator_1_t3EEE9F125377475C3703132A819F02052CF21AFE;
struct IEnumerator_1_t7BCCF276AC30D3D187A762A3D4C55F4DA5CF0A12;
struct IEnumerator_1_t039FD1F79231873CA31A318A129D0F6366AE3729;
struct IEnumerator_1_t05AB4B707B5C100437510D3CD21B098CF9B1B3E2;
struct IEnumerator_1_t15BDEA63728C9199E0531C862F5C850A3D0C29B8;
struct IEnumerator_1_tA64CB30F779A737F032BA0D0CA682AC54394FFA9;
struct IList_1_t94487033F99C5F7721C5C01BF007997207619130;
struct IList_1_t7563D82E2F8FABF600EEAB60A1585E401B6956D8;
struct IList_1_t7ECC6E2121DC015DF0532362ADD66FD411AE1D15;
struct IList_1_t6DC167BA63FEF5BD4CEDB6EB280344C5BA1AD4F4;
struct IList_1_tD27D8B7ADCEC5D64ADFBFA86505E4FE8D79AE399;
struct IList_1_tE36A63031E9C51E9B9F93EA9B09C4F9E5D8D9DC6;
struct IList_1_tFC0A38BF4A5A9374A84D2EB9837B4BB339BBC0DE;
struct IList_1_tEDA9D4645F802E6C118B27819ECA6407351E9E48;
struct IList_1_tFFCD06F0AF2F34141966FE22B2AA2F5DAD56651C;
struct IList_1_t609D22177EE2C239AD3FF73279ECE88BBA4F0BFD;
struct IList_1_tAA1BA8212B537BD1CD622C60BC1660EC40FC5A55;
struct IList_1_tEB2AED36070E2E4FB9F2FEEC1E6A428E7AF0F27C;
struct IList_1_t3639BAE2393179717490A044F0250855FC246BA0;
struct IList_1_t4A9A4A4522238CC06724A58FE97BCC6029EA9F08;
struct IList_1_tF9176C866FFDE150BF57180C6B228C8CDA338F9F;
struct IList_1_t8532AAEB5D11551EBC2277A07A759536F58EA1A4;
struct IList_1_t0452DCD97F96CC5792FDE60596F97D2E5B5B8AFB;
struct IList_1_t143D8FB6289D26A7B7AD4238902B17029E83C017;
struct IList_1_t2921968A59430732E1BB3346746EE98D3011E0A4;
struct IList_1_t176D0EB534E14001C2A639DE6CD5980B55BD6FAB;
struct IList_1_t311EFF3B321589A14DAE708AD51B9BF47F025EB8;
struct IList_1_t7A5D43E01100F1A7EA9D3B90FB501EB48E5213AB;
struct IList_1_t9D41323B910C0BD2D04A6EF5DB4357FECB8F8BA3;
struct IList_1_t6D08EA7FA01BDF3C06E5BAAE0BFA0F62C86BD338;
struct IList_1_tB81C98CCFC4C70060D8C4A7773A2E018B7705389;
struct IList_1_tEBC9CEC655A21BEAC057F73381FE6A0F3284AB01;
struct IList_1_tCC943A0042E6BB5B3A81CD3BE47F5757992D48D0;
struct IList_1_t508D5DFA2AB2A294AE3394E462C1CAD77F2661CB;
struct IList_1_t3EE866489B03C7FF7DEF9C7563B742E75B5689A2;
struct IList_1_t1D3509F1CD03CA00870C78A5694C3D684F7810D2;
struct IList_1_t281C2488A2CCBB6BE7D56F60DD4217ED86CB27E2;
struct IList_1_t36B65C5A0703C973E0430B86757444E48EB4FB33;
struct IList_1_t003E5AFD433AB8547CCEE560E2BED50D6AD222BD;
struct IList_1_tDE5A2CD28934CB598C6F11B9F1968099A5148F4C;
struct IList_1_tFE2112C69F0B9C04D713EA1C40EFA14A01A0F401;
struct IList_1_tE3897FF146787D9898848BA6072D0A5ACF74AF62;
struct IList_1_tC43AD077B5DBEFD836CDC2D1D0F3257315EB484F;
struct IList_1_t45147F5693AC2CD8E1FC02E6C69D23EC082D597B;
struct IList_1_t167843A5F05138E45B11C0C0C05948EC417AFA03;
struct IList_1_tFAAC62CDDF5DFAD071729740E8797D4AC890A2CE;
struct IList_1_t9603583555C8EAF0519028F467C9AD34BFEE4011;
struct KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221;
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53;
struct ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D;
struct ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC;
struct ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216;
struct ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4;
struct ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF;
struct ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5;
struct ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214;
struct ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2;
struct ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90;
struct ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5;
struct ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631;
struct ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318;
struct ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32;
struct ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501;
struct ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73;
struct ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E;
struct ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432;
struct ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6;
struct ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00;
struct ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80;
struct ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07;
struct ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3;
struct ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69;
struct ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7;
struct ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135;
struct ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4;
struct ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65;
struct ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF;
struct ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568;
struct ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172;
struct ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6;
struct ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227;
struct ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC;
struct ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247;
struct ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466;
struct ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D;
struct ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4;
struct ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235;
struct ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3;
struct ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9;
struct ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434;
struct ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734;
struct ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849;
struct KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98;
struct BrickChunkAllocU5BU5D_t67316E3C7BB0F8E26AB0D8AD7B8CC62FD533F6AE;
struct SerializedPerSceneCellListU5BU5D_tF4A784BCC24343A482BE15CBF415A68F3B353D6F;
struct ObsoleteSerializablePerScenarioDataItemU5BU5D_t28ABF785278BD4BAD3D8A00B4EE4F247361A22F3;
struct StreamableCellDescU5BU5D_tDAAACF4DEEFB9A39DD6E17E66EB55EC8A41258B7;
struct SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6;
struct ElementInsertionDataU5BU5D_tC694C1E86CD6BF2A280620FDE4C8A6F02EC3F7FB;
struct MinMaxBoundsU5BU5D_tBCCC38EDCBA810A447297E68EF7A3B22AE8A25C3;
struct SplineToNativeU5BU5D_t5C3D6D382D7C3E802A46457C9F252F5B7C57C8A7;
struct InstantiableItemU5BU5D_tF64079AEA3E62BEE55ECF1E2511ECD8F80AF08A8;
struct PageU5BU5D_tDFA5009590467C6D992272922113C6230D341CE4;
struct AttributeOverrideU5BU5D_t4D2E0B93EF3A1A1EB58AC1F48E6CFE20A0EA27E8;
struct UxmlSerializedDataOverrideU5BU5D_t31FF90782892C74FA1E1C67897A3E6C0BB0A5B9A;
struct FontReferenceMapU5BU5D_tFA470305A1935D0EBE0F74758328811439915118;
struct BlitInfoU5BU5D_t090EAE36AF18528B2F72B1D3BBA4831E32F287BA;
struct FrameU5BU5D_tED4B6DE19C37177FEDD77F466E6807E1D5288F25;
struct TextureInfoU5BU5D_t0571178EAC2A0DE9A1F27F2C00A9301E04AAFB83;
struct NotificationEntryU5BU5D_t51F6D9F2EB943E3F431D8548C24B3A3F4384F5DF;
struct RaycastHitDataU5BU5D_t98BBA3CE354036B88621172C27ED5C5DD7CB9279;
struct PoseDataU5BU5D_t2C3BAD03F54ECC8DA545558F23FC7A58A33BD566;
struct UnitPortPreservationU5BU5D_tDAF6905F32D73AC466BC22BCA9E29E3A14DD2945;
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577;
struct TextureDataU5BU5D_tF50D03A92133D3F8BD17E52CB70600C6A4BCA5A9;
struct AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F;
struct SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299;
struct SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A;
struct UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811;
struct VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64;
struct PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA;
struct XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27;
struct AotCompilationU5BU5D_t40B040865E1C3D9272C7135830810B4F31327FCC;
struct ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB;
struct VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F;
struct ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279;
struct LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E;
struct InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3;
struct PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC;
struct ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B;
struct EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B;
struct ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73;
struct RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316;
struct PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Entry_t475ED76E31923970E7F7A6522E570E7577C487B9;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct INotification_tEF630287442F0A66470493068A5D158E3C2D3C6B;
struct ISpline_t4155AE07719AA93F67BA1BA506E8C8AD207E4879;
struct IUnit_tDD8B7D0F06EA3DB55DEBE4DF3CC85F4A63FBB98E;
struct Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct String_t;
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UxmlSerializedData_t5BDDB665835158F6BC2975E086891B337C3BB706;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377;
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1;
struct VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1;
struct XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9;
struct XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D;
struct BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57;
struct TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3;
struct NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F;
struct ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;

struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct BrickChunkAllocU5BU5D_t67316E3C7BB0F8E26AB0D8AD7B8CC62FD533F6AE;
struct SerializedPerSceneCellListU5BU5D_tF4A784BCC24343A482BE15CBF415A68F3B353D6F;
struct ObsoleteSerializablePerScenarioDataItemU5BU5D_t28ABF785278BD4BAD3D8A00B4EE4F247361A22F3;
struct StreamableCellDescU5BU5D_tDAAACF4DEEFB9A39DD6E17E66EB55EC8A41258B7;
struct SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6;
struct ElementInsertionDataU5BU5D_tC694C1E86CD6BF2A280620FDE4C8A6F02EC3F7FB;
struct MinMaxBoundsU5BU5D_tBCCC38EDCBA810A447297E68EF7A3B22AE8A25C3;
struct SplineToNativeU5BU5D_t5C3D6D382D7C3E802A46457C9F252F5B7C57C8A7;
struct InstantiableItemU5BU5D_tF64079AEA3E62BEE55ECF1E2511ECD8F80AF08A8;
struct PageU5BU5D_tDFA5009590467C6D992272922113C6230D341CE4;
struct AttributeOverrideU5BU5D_t4D2E0B93EF3A1A1EB58AC1F48E6CFE20A0EA27E8;
struct UxmlSerializedDataOverrideU5BU5D_t31FF90782892C74FA1E1C67897A3E6C0BB0A5B9A;
struct FontReferenceMapU5BU5D_tFA470305A1935D0EBE0F74758328811439915118;
struct BlitInfoU5BU5D_t090EAE36AF18528B2F72B1D3BBA4831E32F287BA;
struct FrameU5BU5D_tED4B6DE19C37177FEDD77F466E6807E1D5288F25;
struct TextureInfoU5BU5D_t0571178EAC2A0DE9A1F27F2C00A9301E04AAFB83;
struct NotificationEntryU5BU5D_t51F6D9F2EB943E3F431D8548C24B3A3F4384F5DF;
struct RaycastHitDataU5BU5D_t98BBA3CE354036B88621172C27ED5C5DD7CB9279;
struct PoseDataU5BU5D_t2C3BAD03F54ECC8DA545558F23FC7A58A33BD566;
struct UnitPortPreservationU5BU5D_tDAF6905F32D73AC466BC22BCA9E29E3A14DD2945;
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577;
struct TextureDataU5BU5D_tF50D03A92133D3F8BD17E52CB70600C6A4BCA5A9;
struct AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F;
struct SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299;
struct SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A;
struct UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811;
struct VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64;
struct PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA;
struct XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27;
struct AotCompilationU5BU5D_t40B040865E1C3D9272C7135830810B4F31327FCC;
struct ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB;
struct VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F;
struct ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279;
struct LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E;
struct InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3;
struct PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC;
struct ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B;
struct EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B;
struct ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73;
struct RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316;
struct PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221  : public RuntimeObject
{
	RuntimeObject* ____collection;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734  : public RuntimeObject
{
	RuntimeObject* ___m_dictionary;
	RuntimeObject* ____syncRoot;
	KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* ____keys;
	ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* ____values;
};
struct ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849  : public RuntimeObject
{
	RuntimeObject* ____collection;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77 
{
	RuntimeObject* ____dictionary;
	RuntimeObject* ____enumerator;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 
{
	KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC* ___m_Patterns;
};
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns;
};
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
struct BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 
{
	String_t* ___sceneGUID;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___cellList;
};
struct SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591_marshaled_pinvoke
{
	char* ___sceneGUID;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___cellList;
};
struct SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591_marshaled_com
{
	Il2CppChar* ___sceneGUID;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___cellList;
};
struct ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C 
{
	int32_t ___sceneHash;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellDataAsset;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellOptionalDataAsset;
};
struct ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C_marshaled_pinvoke
{
	int32_t ___sceneHash;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellDataAsset;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellOptionalDataAsset;
};
struct ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C_marshaled_com
{
	int32_t ___sceneHash;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellDataAsset;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellOptionalDataAsset;
};
struct StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A 
{
	int32_t ___offset;
	int32_t ___elementCount;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC 
{
	Il2CppChar ___First;
	Il2CppChar ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	bool ___canceled;
};
struct ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___canceled;
};
struct ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___canceled;
};
struct InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Prefab;
	float ___probability;
	float ___Probability;
};
struct InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Prefab;
	float ___probability;
	float ___Probability;
};
struct InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Prefab;
	float ___probability;
	float ___Probability;
};
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF 
{
	String_t* ___m_ElementName;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_NamesPath;
	String_t* ___m_AttributeName;
	String_t* ___m_Value;
};
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshaled_pinvoke
{
	char* ___m_ElementName;
	char** ___m_NamesPath;
	char* ___m_AttributeName;
	char* ___m_Value;
};
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshaled_com
{
	Il2CppChar* ___m_ElementName;
	Il2CppChar** ___m_NamesPath;
	Il2CppChar* ___m_AttributeName;
	Il2CppChar* ___m_Value;
};
struct UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 
{
	int32_t ___m_ElementId;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_ElementIdsPath;
	UxmlSerializedData_t5BDDB665835158F6BC2975E086891B337C3BB706* ___m_SerializedData;
};
struct UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67_marshaled_pinvoke
{
	int32_t ___m_ElementId;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_ElementIdsPath;
	UxmlSerializedData_t5BDDB665835158F6BC2975E086891B337C3BB706* ___m_SerializedData;
};
struct UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67_marshaled_com
{
	int32_t ___m_ElementId;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_ElementIdsPath;
	UxmlSerializedData_t5BDDB665835158F6BC2975E086891B337C3BB706* ___m_SerializedData;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 
{
	float ___x;
	float ___y;
	float ___w;
	float ___h;
};
struct SpriteSize_tF99BB7603AE2E6587E6184ACAB6CD209FE6569B3 
{
	float ___w;
	float ___h;
};
struct TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture;
	bool ___dynamic;
	int32_t ___refCount;
};
struct TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture;
	int32_t ___dynamic;
	int32_t ___refCount;
};
struct TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture;
	int32_t ___dynamic;
	int32_t ___refCount;
};
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A 
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames;
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses;
};
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_pinvoke
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames;
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses;
};
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_com
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames;
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses;
};
struct UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 
{
	RuntimeObject* ___unit;
	String_t* ___key;
};
struct UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4_marshaled_pinvoke
{
	RuntimeObject* ___unit;
	char* ___key;
};
struct UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4_marshaled_com
{
	RuntimeObject* ___unit;
	Il2CppChar* ___key;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback;
	RuntimeObject* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___Texture;
	int32_t ___BufferLength;
};
struct TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___Texture;
	int32_t ___BufferLength;
};
struct TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___Texture;
	int32_t ___BufferLength;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 
{
	String_t* ___name;
	int32_t ___insertionPointId;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshaled_pinvoke
{
	char* ___name;
	int32_t ___insertionPointId;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___insertionPointId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 
{
	String_t* ___slotName;
	int32_t ___assetId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshaled_pinvoke
{
	char* ___slotName;
	int32_t ___assetId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshaled_com
{
	Il2CppChar* ___slotName;
	int32_t ___assetId;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 
{
	String_t* ___alias;
	String_t* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_pinvoke
{
	char* ___alias;
	char* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_com
{
	Il2CppChar* ___alias;
	Il2CppChar* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 
{
	RuntimeObject* ___source;
	int64_t ___version;
};
struct VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8_marshaled_pinvoke
{
	Il2CppIUnknown* ___source;
	int64_t ___version;
};
struct VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8_marshaled_com
{
	Il2CppIUnknown* ___source;
	int64_t ___version;
};
struct XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD 
{
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname;
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___xso;
};
struct XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_marshaled_pinvoke
{
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname;
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___xso;
};
struct XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_marshaled_com
{
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname;
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___xso;
};
struct AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 
{
	Type_t* ___Type;
	fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* ___Members;
	bool ___IsConstructorPublic;
};
struct AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440_marshaled_pinvoke
{
	Type_t* ___Type;
	fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* ___Members;
	int32_t ___IsConstructorPublic;
};
struct AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440_marshaled_com
{
	Type_t* ___Type;
	fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* ___Members;
	int32_t ___IsConstructorPublic;
};
struct ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 
{
	String_t* ___displayName;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action;
};
struct ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_marshaled_pinvoke
{
	char* ___displayName;
	Il2CppMethodPointer ___action;
};
struct ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_marshaled_com
{
	Il2CppChar* ___displayName;
	Il2CppMethodPointer ___action;
};
struct NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4 
{
	String_t* ___name;
	String_t* ___tooltip;
};
struct NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshaled_pinvoke
{
	char* ___name;
	char* ___tooltip;
};
struct NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___tooltip;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D 
{
	int32_t ____index;
	int32_t ____stackDepth;
	int32_t ____continuationsDepth;
	String_t* ____name;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshaled_pinvoke
{
	int32_t ____index;
	int32_t ____stackDepth;
	int32_t ____continuationsDepth;
	char* ____name;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshaled_com
{
	int32_t ____index;
	int32_t ____stackDepth;
	int32_t ____continuationsDepth;
	Il2CppChar* ____name;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction;
};
struct PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31 
{
	String_t* ___filePath;
	int32_t ___line;
};
struct PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31_marshaled_pinvoke
{
	char* ___filePath;
	int32_t ___line;
};
struct PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31_marshaled_com
{
	Il2CppChar* ___filePath;
	int32_t ___line;
};
struct ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 
{
	String_t* ___name;
	bool ___imported;
	int32_t ___creationPassIndex;
	int32_t ___releasePassIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList;
	bool ___memoryless;
	TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3* ___textureData;
	BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57* ___bufferData;
};
struct ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3_marshaled_pinvoke
{
	char* ___name;
	int32_t ___imported;
	int32_t ___creationPassIndex;
	int32_t ___releasePassIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList;
	int32_t ___memoryless;
	TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3* ___textureData;
	BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57* ___bufferData;
};
struct ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___imported;
	int32_t ___creationPassIndex;
	int32_t ___releasePassIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList;
	int32_t ___memoryless;
	TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3* ___textureData;
	BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57* ___bufferData;
};
struct PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 
{
	String_t* ___message;
	bool ___isCompatible;
};
struct PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3_marshaled_pinvoke
{
	char* ___message;
	int32_t ___isCompatible;
};
struct PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3_marshaled_com
{
	Il2CppChar* ___message;
	int32_t ___isCompatible;
};
struct LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct NotificationFlags_tB23F73EAAD5438F9AC46646EAE9BCBEA142ABC1A 
{
	int16_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RenderGraphPassType_tD00EC2DAA135C660EE7E71652291A4672104EA2D 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 
{
	String_t* ___scenario;
	ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C ___data;
};
struct ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7_marshaled_pinvoke
{
	char* ___scenario;
	ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C_marshaled_pinvoke ___data;
};
struct ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7_marshaled_com
{
	Il2CppChar* ___scenario;
	ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C_marshaled_com ___data;
};
struct MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___min;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___max;
};
struct BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___srcRect;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dstPos;
	int32_t ___border;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint;
};
struct BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___srcRect;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dstPos;
	int32_t ___border;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint;
};
struct BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___srcRect;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dstPos;
	int32_t ___border;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint;
};
struct Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD 
{
	String_t* ___filename;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___frame;
	bool ___rotated;
	bool ___trimmed;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___spriteSourceSize;
	SpriteSize_tF99BB7603AE2E6587E6184ACAB6CD209FE6569B3 ___sourceSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot;
};
struct Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_marshaled_pinvoke
{
	char* ___filename;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___frame;
	int32_t ___rotated;
	int32_t ___trimmed;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___spriteSourceSize;
	SpriteSize_tF99BB7603AE2E6587E6184ACAB6CD209FE6569B3 ___sourceSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot;
};
struct Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_marshaled_com
{
	Il2CppChar* ___filename;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___frame;
	int32_t ___rotated;
	int32_t ___trimmed;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___spriteSourceSize;
	SpriteSize_tF99BB7603AE2E6587E6184ACAB6CD209FE6569B3 ___sourceSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot;
};
struct RaycastHitData_t5EAB266730389AB27715962670C2512800451841 
{
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___U3CgraphicU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldHitPositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscreenPositionU3Ek__BackingField;
	float ___U3CdistanceU3Ek__BackingField;
};
struct RaycastHitData_t5EAB266730389AB27715962670C2512800451841_marshaled_pinvoke
{
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___U3CgraphicU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldHitPositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscreenPositionU3Ek__BackingField;
	float ___U3CdistanceU3Ek__BackingField;
};
struct RaycastHitData_t5EAB266730389AB27715962670C2512800451841_marshaled_com
{
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___U3CgraphicU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldHitPositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscreenPositionU3Ek__BackingField;
	float ___U3CdistanceU3Ek__BackingField;
};
struct PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	int32_t ___type;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___intensity;
	int32_t ___castShadows;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward;
	int32_t ___contributesToDirectLighting;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___attenuation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up;
	float ___width;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___right;
	float ___height;
	uint32_t ___layerMask;
	float ___indirectScale;
	float ___spotAngle;
	float ___innerSpotAngle;
	float ___range;
	int32_t ___shadowMaskChannel;
	int32_t ___falloffIndex;
	float ___shadowRadius;
	int32_t ___cookieIndex;
};
struct VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E 
{
	NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4 ___nameAndTooltip;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___volumeProfile;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___volumeComponent;
	Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___volume;
};
struct VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E_marshaled_pinvoke
{
	NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshaled_pinvoke ___nameAndTooltip;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___volumeProfile;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___volumeComponent;
	Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___volume;
};
struct VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E_marshaled_com
{
	NameAndTooltip_tA6656221A6E70C8409CFCBAF6CCEC9C718E344D4_marshaled_com ___nameAndTooltip;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___volumeProfile;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___volumeComponent;
	Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___volume;
};
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___layoutName;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___deviceMatcher;
};
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6_marshaled_pinvoke
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___layoutName;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke ___deviceMatcher;
};
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6_marshaled_com
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___layoutName;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com ___deviceMatcher;
};
struct VisualsProcessingType_t19983E0076886C15ED2761057B9992989A710ECC 
{
	int32_t ___value__;
};
struct Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Pos;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rot;
};
struct NativeArray_1_t876D97A683FF20D578BCC2249207682765E4A6B1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6D04049B466F6CBF136507BF642A2157F1526E92 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t92D6D8E4CD8D7A714336724F6315DC2863B9BA86 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 
{
	double ___time;
	RuntimeObject* ___payload;
	bool ___notificationFired;
	int16_t ___flags;
};
struct NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62_marshaled_pinvoke
{
	double ___time;
	RuntimeObject* ___payload;
	int32_t ___notificationFired;
	int16_t ___flags;
};
struct NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62_marshaled_com
{
	double ___time;
	RuntimeObject* ___payload;
	int32_t ___notificationFired;
	int16_t ___flags;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D 
{
	String_t* ___m_Path;
	String_t* ___m_TypeFullName;
	LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B ___m_AssetReference;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	Type_t* ___m_CachedType;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshaled_pinvoke
{
	char* ___m_Path;
	char* ___m_TypeFullName;
	LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B ___m_AssetReference;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	Type_t* ___m_CachedType;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshaled_com
{
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_TypeFullName;
	LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B ___m_AssetReference;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	Type_t* ___m_CachedType;
};
struct Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD 
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___Custom;
	float ___Weight;
};
struct Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD_marshaled_pinvoke
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___Custom;
	float ___Weight;
};
struct Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD_marshaled_com
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___Custom;
	float ___Weight;
};
struct PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F 
{
	String_t* ___name;
	int32_t ___type;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceReadLists;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceWriteLists;
	bool ___culled;
	bool ___async;
	int32_t ___nativeSubPassIndex;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	bool ___generateDebugData;
	NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F* ___nrpInfo;
	PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31 ___scriptInfo;
};
struct PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F_marshaled_pinvoke
{
	char* ___name;
	int32_t ___type;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceReadLists;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceWriteLists;
	int32_t ___culled;
	int32_t ___async;
	int32_t ___nativeSubPassIndex;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___generateDebugData;
	NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F* ___nrpInfo;
	PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31_marshaled_pinvoke ___scriptInfo;
};
struct PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___type;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceReadLists;
	ResourceIdLists_tD6328DF3B43DB6A2B045464122D4DD5AC1629D99* ___resourceWriteLists;
	int32_t ___culled;
	int32_t ___async;
	int32_t ___nativeSubPassIndex;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___generateDebugData;
	NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F* ___nrpInfo;
	PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31_marshaled_com ___scriptInfo;
};
struct EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 
{
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289_marshaled_pinvoke
{
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289_marshaled_com
{
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B 
{
	float ___Time;
	bool ___IsCut;
	Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___Item;
};
struct RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B_marshaled_pinvoke
{
	float ___Time;
	int32_t ___IsCut;
	Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___Item;
};
struct RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B_marshaled_com
{
	float ___Time;
	int32_t ___IsCut;
	Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___Item;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NativeSpline_t6FFE682AE142C2692DE72080121D9A961481FCA9 
{
	NativeArray_1_t6D04049B466F6CBF136507BF642A2157F1526E92 ___m_Knots;
	NativeArray_1_t876D97A683FF20D578BCC2249207682765E4A6B1 ___m_Curves;
	NativeArray_1_t92D6D8E4CD8D7A714336724F6315DC2863B9BA86 ___m_SegmentLengthsLookupTable;
	NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 ___m_UpVectorsLookupTable;
	bool ___m_Closed;
	float ___m_Length;
};
struct NativeSpline_t6FFE682AE142C2692DE72080121D9A961481FCA9_marshaled_pinvoke
{
	NativeArray_1_t6D04049B466F6CBF136507BF642A2157F1526E92 ___m_Knots;
	NativeArray_1_t876D97A683FF20D578BCC2249207682765E4A6B1 ___m_Curves;
	NativeArray_1_t92D6D8E4CD8D7A714336724F6315DC2863B9BA86 ___m_SegmentLengthsLookupTable;
	NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 ___m_UpVectorsLookupTable;
	int32_t ___m_Closed;
	float ___m_Length;
};
struct NativeSpline_t6FFE682AE142C2692DE72080121D9A961481FCA9_marshaled_com
{
	NativeArray_1_t6D04049B466F6CBF136507BF642A2157F1526E92 ___m_Knots;
	NativeArray_1_t876D97A683FF20D578BCC2249207682765E4A6B1 ___m_Curves;
	NativeArray_1_t92D6D8E4CD8D7A714336724F6315DC2863B9BA86 ___m_SegmentLengthsLookupTable;
	NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 ___m_UpVectorsLookupTable;
	int32_t ___m_Closed;
	float ___m_Length;
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___array;
	int32_t ___used;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 
{
	RuntimeObject* ___spline;
	NativeSpline_t6FFE682AE142C2692DE72080121D9A961481FCA9 ___nativeSpline;
};
struct SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7_marshaled_pinvoke
{
	RuntimeObject* ___spline;
	NativeSpline_t6FFE682AE142C2692DE72080121D9A961481FCA9_marshaled_pinvoke ___nativeSpline;
};
struct SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7_marshaled_com
{
	RuntimeObject* ___spline;
	NativeSpline_t6FFE682AE142C2692DE72080121D9A961481FCA9_marshaled_com ___nativeSpline;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_StaticFields
{
	RuntimeObject* ___comparer;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct BrickChunkAllocU5BU5D_t67316E3C7BB0F8E26AB0D8AD7B8CC62FD533F6AE  : public RuntimeArray
{
	ALIGN_FIELD (8) BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B m_Items[1];

	inline BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B value)
	{
		m_Items[index] = value;
	}
};
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
struct SerializedPerSceneCellListU5BU5D_tF4A784BCC24343A482BE15CBF415A68F3B353D6F  : public RuntimeArray
{
	ALIGN_FIELD (8) SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 m_Items[1];

	inline SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sceneGUID), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___cellList), (void*)NULL);
		#endif
	}
	inline SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sceneGUID), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___cellList), (void*)NULL);
		#endif
	}
};
struct ObsoleteSerializablePerScenarioDataItemU5BU5D_t28ABF785278BD4BAD3D8A00B4EE4F247361A22F3  : public RuntimeArray
{
	ALIGN_FIELD (8) ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 m_Items[1];

	inline ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___scenario), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data))->___cellDataAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data))->___cellOptionalDataAsset), (void*)NULL);
		#endif
	}
	inline ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___scenario), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data))->___cellDataAsset), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___data))->___cellOptionalDataAsset), (void*)NULL);
		#endif
	}
};
struct StreamableCellDescU5BU5D_tDAAACF4DEEFB9A39DD6E17E66EB55EC8A41258B7  : public RuntimeArray
{
	ALIGN_FIELD (8) StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A m_Items[1];

	inline StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A value)
	{
		m_Items[index] = value;
	}
};
struct SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6  : public RuntimeArray
{
	ALIGN_FIELD (8) SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC m_Items[1];

	inline SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC value)
	{
		m_Items[index] = value;
	}
};
struct ElementInsertionDataU5BU5D_tC694C1E86CD6BF2A280620FDE4C8A6F02EC3F7FB  : public RuntimeArray
{
	ALIGN_FIELD (8) ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 m_Items[1];

	inline ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___element), (void*)NULL);
	}
	inline ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___element), (void*)NULL);
	}
};
struct MinMaxBoundsU5BU5D_tBCCC38EDCBA810A447297E68EF7A3B22AE8A25C3  : public RuntimeArray
{
	ALIGN_FIELD (8) MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 m_Items[1];

	inline MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 value)
	{
		m_Items[index] = value;
	}
};
struct SplineToNativeU5BU5D_t5C3D6D382D7C3E802A46457C9F252F5B7C57C8A7  : public RuntimeArray
{
	ALIGN_FIELD (8) SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 m_Items[1];

	inline SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spline), (void*)NULL);
	}
	inline SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spline), (void*)NULL);
	}
};
struct InstantiableItemU5BU5D_tF64079AEA3E62BEE55ECF1E2511ECD8F80AF08A8  : public RuntimeArray
{
	ALIGN_FIELD (8) InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 m_Items[1];

	inline InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___prefab), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Prefab), (void*)NULL);
		#endif
	}
	inline InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___prefab), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Prefab), (void*)NULL);
		#endif
	}
};
struct PageU5BU5D_tDFA5009590467C6D992272922113C6230D341CE4  : public RuntimeArray
{
	ALIGN_FIELD (8) Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 m_Items[1];

	inline Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 value)
	{
		m_Items[index] = value;
	}
};
struct AttributeOverrideU5BU5D_t4D2E0B93EF3A1A1EB58AC1F48E6CFE20A0EA27E8  : public RuntimeArray
{
	ALIGN_FIELD (8) AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF m_Items[1];

	inline AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ElementName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_NamesPath), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_AttributeName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Value), (void*)NULL);
		#endif
	}
	inline AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ElementName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_NamesPath), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_AttributeName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Value), (void*)NULL);
		#endif
	}
};
struct UxmlSerializedDataOverrideU5BU5D_t31FF90782892C74FA1E1C67897A3E6C0BB0A5B9A  : public RuntimeArray
{
	ALIGN_FIELD (8) UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 m_Items[1];

	inline UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ElementIdsPath), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SerializedData), (void*)NULL);
		#endif
	}
	inline UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ElementIdsPath), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SerializedData), (void*)NULL);
		#endif
	}
};
struct FontReferenceMapU5BU5D_tFA470305A1935D0EBE0F74758328811439915118  : public RuntimeArray
{
	ALIGN_FIELD (8) FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 m_Items[1];

	inline FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset), (void*)NULL);
		#endif
	}
	inline FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset), (void*)NULL);
		#endif
	}
};
struct BlitInfoU5BU5D_t090EAE36AF18528B2F72B1D3BBA4831E32F287BA  : public RuntimeArray
{
	ALIGN_FIELD (8) BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 m_Items[1];

	inline BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___src), (void*)NULL);
	}
	inline BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___src), (void*)NULL);
	}
};
struct FrameU5BU5D_tED4B6DE19C37177FEDD77F466E6807E1D5288F25  : public RuntimeArray
{
	ALIGN_FIELD (8) Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD m_Items[1];

	inline Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___filename), (void*)NULL);
	}
	inline Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___filename), (void*)NULL);
	}
};
struct TextureInfoU5BU5D_t0571178EAC2A0DE9A1F27F2C00A9301E04AAFB83  : public RuntimeArray
{
	ALIGN_FIELD (8) TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B m_Items[1];

	inline TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___texture), (void*)NULL);
	}
	inline TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___texture), (void*)NULL);
	}
};
struct NotificationEntryU5BU5D_t51F6D9F2EB943E3F431D8548C24B3A3F4384F5DF  : public RuntimeArray
{
	ALIGN_FIELD (8) NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 m_Items[1];

	inline NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___payload), (void*)NULL);
	}
	inline NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___payload), (void*)NULL);
	}
};
struct RaycastHitDataU5BU5D_t98BBA3CE354036B88621172C27ED5C5DD7CB9279  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHitData_t5EAB266730389AB27715962670C2512800451841 m_Items[1];

	inline RaycastHitData_t5EAB266730389AB27715962670C2512800451841 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHitData_t5EAB266730389AB27715962670C2512800451841* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHitData_t5EAB266730389AB27715962670C2512800451841 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CgraphicU3Ek__BackingField), (void*)NULL);
	}
	inline RaycastHitData_t5EAB266730389AB27715962670C2512800451841 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHitData_t5EAB266730389AB27715962670C2512800451841* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHitData_t5EAB266730389AB27715962670C2512800451841 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CgraphicU3Ek__BackingField), (void*)NULL);
	}
};
struct PoseDataU5BU5D_t2C3BAD03F54ECC8DA545558F23FC7A58A33BD566  : public RuntimeArray
{
	ALIGN_FIELD (8) PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A m_Items[1];

	inline PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___PoseNames), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Poses), (void*)NULL);
		#endif
	}
	inline PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___PoseNames), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Poses), (void*)NULL);
		#endif
	}
};
struct UnitPortPreservationU5BU5D_tDAF6905F32D73AC466BC22BCA9E29E3A14DD2945  : public RuntimeArray
{
	ALIGN_FIELD (8) UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 m_Items[1];

	inline UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___unit), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#endif
	}
	inline UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___unit), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#endif
	}
};
struct WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577  : public RuntimeArray
{
	ALIGN_FIELD (8) WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 m_Items[1];

	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle), (void*)NULL);
		#endif
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle), (void*)NULL);
		#endif
	}
};
struct TextureDataU5BU5D_tF50D03A92133D3F8BD17E52CB70600C6A4BCA5A9  : public RuntimeArray
{
	ALIGN_FIELD (8) TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 m_Items[1];

	inline TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Texture), (void*)NULL);
	}
	inline TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Texture), (void*)NULL);
	}
};
struct AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F  : public RuntimeArray
{
	ALIGN_FIELD (8) AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D m_Items[1];

	inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Path), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_TypeFullName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CachedType), (void*)NULL);
		#endif
	}
	inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Path), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_TypeFullName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CachedType), (void*)NULL);
		#endif
	}
};
struct SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299  : public RuntimeArray
{
	ALIGN_FIELD (8) SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 m_Items[1];

	inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
	inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
};
struct SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A  : public RuntimeArray
{
	ALIGN_FIELD (8) SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 m_Items[1];

	inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___slotName), (void*)NULL);
	}
	inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___slotName), (void*)NULL);
	}
};
struct UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811  : public RuntimeArray
{
	ALIGN_FIELD (8) UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 m_Items[1];

	inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___alias), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___path), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___asset), (void*)NULL);
		#endif
	}
	inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___alias), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___path), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___asset), (void*)NULL);
		#endif
	}
};
struct VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64  : public RuntimeArray
{
	ALIGN_FIELD (8) VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 m_Items[1];

	inline VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___source), (void*)NULL);
	}
	inline VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___source), (void*)NULL);
	}
};
struct PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA  : public RuntimeArray
{
	ALIGN_FIELD (8) PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 m_Items[1];

	inline PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 value)
	{
		m_Items[index] = value;
	}
};
struct XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27  : public RuntimeArray
{
	ALIGN_FIELD (8) XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD m_Items[1];

	inline XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___qname), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___xso), (void*)NULL);
		#endif
	}
	inline XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___qname), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___xso), (void*)NULL);
		#endif
	}
};
struct AotCompilationU5BU5D_t40B040865E1C3D9272C7135830810B4F31327FCC  : public RuntimeArray
{
	ALIGN_FIELD (8) AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 m_Items[1];

	inline AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Type), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Members), (void*)NULL);
		#endif
	}
	inline AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Type), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Members), (void*)NULL);
		#endif
	}
};
struct ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB  : public RuntimeArray
{
	ALIGN_FIELD (8) Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD m_Items[1];

	inline Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Custom), (void*)NULL);
	}
	inline Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Custom), (void*)NULL);
	}
};
struct VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F  : public RuntimeArray
{
	ALIGN_FIELD (8) VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E m_Items[1];

	inline VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___nameAndTooltip))->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___nameAndTooltip))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___volumeProfile), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___volumeComponent), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___volume), (void*)NULL);
		#endif
	}
	inline VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___nameAndTooltip))->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___nameAndTooltip))->___tooltip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___volumeProfile), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___volumeComponent), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___volume), (void*)NULL);
		#endif
	}
};
struct ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279  : public RuntimeArray
{
	ALIGN_FIELD (8) ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 m_Items[1];

	inline ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___displayName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___action), (void*)NULL);
		#endif
	}
	inline ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___displayName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___action), (void*)NULL);
		#endif
	}
};
struct LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E  : public RuntimeArray
{
	ALIGN_FIELD (8) LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 m_Items[1];

	inline LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___layoutName))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___layoutName))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___deviceMatcher))->___m_Patterns), (void*)NULL);
		#endif
	}
	inline LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___layoutName))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___layoutName))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___deviceMatcher))->___m_Patterns), (void*)NULL);
		#endif
	}
};
struct InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3  : public RuntimeArray
{
	ALIGN_FIELD (8) InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D m_Items[1];

	inline InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____instruction), (void*)NULL);
		#endif
	}
	inline InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____instruction), (void*)NULL);
		#endif
	}
};
struct PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC  : public RuntimeArray
{
	ALIGN_FIELD (8) PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F m_Items[1];

	inline PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___resourceReadLists), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___resourceWriteLists), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___nrpInfo), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___scriptInfo))->___filePath), (void*)NULL);
		#endif
	}
	inline PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___resourceReadLists), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___resourceWriteLists), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___nrpInfo), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___scriptInfo))->___filePath), (void*)NULL);
		#endif
	}
};
struct ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B  : public RuntimeArray
{
	ALIGN_FIELD (8) ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 m_Items[1];

	inline ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___consumerList), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___producerList), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textureData), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___bufferData), (void*)NULL);
		#endif
	}
	inline ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___consumerList), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___producerList), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textureData), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___bufferData), (void*)NULL);
		#endif
	}
};
struct EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B  : public RuntimeArray
{
	ALIGN_FIELD (8) EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 m_Items[1];

	inline EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___renderData), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___rootEntry), (void*)NULL);
		#endif
	}
	inline EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___renderData), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___rootEntry), (void*)NULL);
		#endif
	}
};
struct ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73  : public RuntimeArray
{
	ALIGN_FIELD (8) Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 m_Items[1];

	inline Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 value)
	{
		m_Items[index] = value;
	}
};
struct RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316  : public RuntimeArray
{
	ALIGN_FIELD (8) RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B m_Items[1];

	inline RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B value)
	{
		m_Items[index] = value;
	}
};
struct PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317  : public RuntimeArray
{
	ALIGN_FIELD (8) PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 m_Items[1];

	inline PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___message), (void*)NULL);
	}
	inline PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___message), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE31E6450162F6E9B618AAC3AC422BA73138F2DF2 (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1584B4A5D71D0BD68DC0B608E63CE74E81094A13 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3E387EA2DD8EE68F91476C1CFC4FB56DB16FE901 (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB2EE20AD2CF899F6D963C508EB10B05E9DBAAFD1 (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m2278DB015831D3852A1ECDC9C8E44CA52E94A010 (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6679EEE84E9BBDBE8761CF44B8294155AB69A45E (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mB732A9E350D9E3CD2C7840CC90E0CD38529A5C1C (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m002E2463EC869D6B730B00CF9A1A973007B41B35 (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m98DEFEBAE637436EEDC27C55AE2C19B076DE090F (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2762EABC097FB2A997370146E5E61C2A197552CE (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6453D07CDC6264E9F4FEBF425DFA817487EE9723 (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB98D3656FF7E5F1A67C4FB181C9A4A3D309087FA (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m2CC3246BF9378F698D206586E815F940BDFF3A4F (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mAD7E8A171AFE7CD86454D7E8BFDE0CD9D216060C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m47AEA24C0ACE4F3899592E7466AEEAEC7C8677AB (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2C11317DDF1B10C32280199980586FF267E163F6 (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD9D82410CB95D4FE5C14BACB7022BFC0B090CB23 (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mA31AC1D905D65EE27428ABA47C90CFA51CA93BA8 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m913E4228E930667ED05C69E275781B4D65AD6377 (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m05146C24F41FA016ABE609031F1CCDF60E768619 (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m95E8E1F55501F640B52A5AD4E73DE9CB674CA074 (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mAB1EFE8A5D353B131BBE9EB34B74A6BAE06F9599 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m983620D9F4A7313CEB1B1AEFFEDC8DB2DF1600F3 (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mAB5A5EADC7E5E50497A3B7584352D42B28CE3C69 (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0EEB9CC7A903E35B3737942EFF99016D288DDED6 (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0DDEE58D13E8FB5B2766AC7DA0C55DAC13584B77 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC67C7EF96296B0DE1C19FDEEDBABA0FFBD67CB03 (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m716BA7D21054B1D77515F421EE50AD75DB3EACBE (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m4AEAC1701CA9A62BE785789577701D3067BA940C (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E3E93ABA74E874883D6D2D19850D0E9228C1602 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m18DFA62AB994A0E2B7A55DE857C5BF43DD82B9BB (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m068973C4E30DF1B7F19B5DE178E5CC5D7DE63DA0 (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m2F3826CE2CEDCD83FC187ED8CB24FF2F8B004468 (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB6D8AF95BBBB7D0D3CEDFACC51FF5A3192DA595A (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9770830482CC56023A66FA9929A8560F8DA502D5 (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m0CB0499803DC3663D38A5B2842B1D4B3E41EC17A (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mF8F286601D8EED13DACAB99C02259324E49C6DA1 (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m95712CD049C6EEB0E90DB244AC3171FA85166DB6 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m947A3FA40F7BF31EEE550BB315172BE53B38F22F (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m0A4F50958D471DC760F266D8D2A1EE200DF52C2E (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBB2B7BF08D287E2667F29836FCF9E439551DBE8F (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m11348500F34A92ED3E4F57AA0233784078379771 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m638A809E5C72AB15EDA998647FE19E464E709DEF (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC3926319976609BD7A37B3FD87A61906A26C54B6 (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE24114E67C1515ED8C4F81DBE65B00B6B917A279 (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5F2B05B1740F553E40DFC6DED6A468B45B9316FF (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m23A5C68995E101E0D2EB2F9483D609514BBDBD2E (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE9844C779BE6775172325AFACCE26458ABB4B8C0 (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m294CA4038F05C8500E78F059A44B5C74556DBBF8 (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mFCD2A54038776E3951F71F390645766807267DE5 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m07FD564014E69D4B40CE0B12AFAA93929EC83137 (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB2559896BC5F11800B0108BEBA9EAB2A6C95EE0F (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m9759E4E426E53E8DD9400478BA7D6F81C7045498 (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m77E7B5A08971CD505FF41765E78B811AAB31B492 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mF080F0FA34F8F5E175F6E4DEDD178B75394CF519 (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2B98BD0E648DADFDD364421B9F9FC9936A394B91 (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m9755643A08D11F86D78C24879A20FA6B7A92EF03 (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m8408613E90585C543FF86E0D19765A06036A7DB1 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3950355F5CE2667D4D6E45F1236436E1D59D65BA (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE665276036AA8B4551F37184CDA5DB0F5FB3E144 (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA3718CBDAD334D0C3B3B3D9C2FBFFC64CB9C1280 (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD22DEE1877768FD46CF1D7BE9E64A9BBF4762858 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m226D99000078C09F61A5D23C9D572EEFD2C1F3AB (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m38FC28A8D172A809848EBBE17B7593C9A4AC5309 (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1A6CD671F2232BF4A06B207D55F1F568E63926C4 (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mA9A4BFFC0194840C24FA3236828CF7317CD9520B (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mEB871392DF075F46BCE7069114A25D156DE0073F (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m95340ADEACAB1B65557172787156CAE6656430EF (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0AFB680989F7183252C477DD7EB9EF59D9C88ECC (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m052B85911C70FD4FE70D220FF791FAF6C6479F83 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m37A8647602E0715AC27FDFF43DABCCEF7701AEAB (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, RaycastHitData_t5EAB266730389AB27715962670C2512800451841 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE1ABD3A991704C640186283F3DD505E3B9A77BB6 (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, RaycastHitData_t5EAB266730389AB27715962670C2512800451841 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m7CC35A27EBA8DF9C76DAF0D135AC0AE03712BBA2 (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mCA22625D9257E2DDB3A7D2F73B68CFCF0FA4CDE9 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE786437D766F8A28AD7EEEAB775C2747A0BD7592 (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mF845FAB93C4FA2A86FEA19E58ACF92D61B537135 (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE13D12DF114975DD908CD625BAB9AF74B01C75C1 (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1DFF8D7E2AFA26178259B3EA21D8C812B717AD3F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m4392D985997DFE546274579509012A5F456F6D81 (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC3CD699DBC3E9DF379117EF72E71730E06704115 (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m409F5776BEB430BE72273C433CC1850CD93700A7 (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m297F49BCB3FD33C8DE274BA917FFF7B708758DB7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mDF174A6917D3D93C8D7910C91080D253891A1AC5 (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC7204EA734A903659BFE12EFC2FD358391419441 (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m5DE9DBF6255A059388D36D97702FA9CDCA1F9E5A (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m41DC571ED10EE6B9368416B94DB4ED4ED4D05021 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m22B8E4AFE7549E0E424815E99B7AAE95D37AE17A (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m48EDD04333A38176B3F28ECB570626948E901066 (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m31B5E7F8E3D51CB370BE05608F7B2C3C11EE0C55 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m496DFF37E9CC6DE59F0E2B4E2A5DBEAA32DEAD94 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6057F27D1ACAA9CBF4A9FFC87FDAA2ACC117A809 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD865206564138ED88C746288B0A9A6EB96555FC2 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m15D679310A0AC97586C8124180F5EB3E1D40A2BC (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m948DB26D5A8A2DF64E9700A6DEB6F836B10749A3 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9ADA09E692C504A400AF0D8E4BF59A7C3C2C8F93 (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m942BE9C1C9D8A0392F495981442E058E887308CF (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m299B4E260E97612F6BFD1965863F5EDB0D80889F (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBF48FC95A670E75A65647A9F7520AEB9AE4A0FE6 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m705B2717517A6E1493976E0F972CEC791692FF97 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBE061D69DECDF68D566C15E465E25ECFCE11FCD3 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m05F05C64F32981A1BF2CEC3E7589604A188B612B (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBA2972FFD773AA00EC4BAD22D43C97C5FFFD31EA (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD887308D8602D0A6C687F8B588F772CB0D0911A2 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mCC0B8F0541328E20D9E516ACE2AF53B44AA502ED (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCB408C9C0EF8BB4EAF3BD9D74210EA1BF645DF9F (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mCB5B8ABED8FAA81E9313462E91E846577DBF79E7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA07C916646443F7E600B771BA5B6E3276CF6F38D (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m24635AF1EE0DBE26C00D1E919C331F3EC3514442 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m95888730659343F372198CD5B3EE35B001150127 (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE94C5A9A40442783E8EE309CDBA6395F4842EEB3 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m25DB18C9E908096B821F4C692B9190E3B812A1FA (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m4D6C6D23DE1E2EE6057F94BDBD946631CC5B2EBC (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCB4FF2AFAA94D01923F9242ACB66F817F7CF18C7 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC5B4A17FCA21C2DF1F66767E828535AD34B90513 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m116AE421F0EB30927F6725D62792FFA5A6065627 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mF523F5C22B1C3DFB9577177B1C50F9DC3B9704C2 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBCA2EE72377AB6EC0E4641B1D12026B5333268CE (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5C117EA0A998E2211CD0904DFCA1A117CB6D4B29 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m675B455613C954C02AFAF1510FA04B3FC256E279 (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m47E0AD9DAF851871758572465D8585553D7FBAA7 (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m33394098C1C040B6577A13565B005D626C626998 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mAC5EAC32404917AD2C3C5618AB0234A151B5D2BC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m40807F66AD9634874F484D3B3BD8150C0EBCCC7F (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE4DF1F8EB3A5DCA1E96582AFE6D32FACF680CDC5 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8458978F11950358DAF515D9793F94E96E164867 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0F15E0EC055DA3F521E73184206A61A28D6E1C0F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE296E176CF781CFBEDEA890CD7B7438707C5CBC2 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m25AC6AFADC9DA3C7616FB3DF2538489069FE82FF (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCFEB25EF1344B976A050CB6937362A3F5DF0199A (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m3A0010FDAC2908AF80DDEB4BA4458869F0FE9F8F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3CAC4C8BA133B39A5BA9FA0A1E0E711E09BD7694 (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE8080B23EA1AD670E7D7D77D172A6973A222ED2C (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m88DC99D667337D16893CDF63694D22FEAF331E05 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E692C71C0193F22ACD65EEFBA4ECA75E5C53AAD (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9FE5CCC2B059229D4C97248D4F5E82C20ECB5FBE (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m093DAAF13F65B6DE09B24D00F36FCC13F61E6E15 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m283266AC4D77DC2424BDBD9CB125A1A61AB55E1C (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD7979063F69DBCBBA075F88868B40DE92ED347FC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m7535255C244884FCE69E71A597A10D82C38A21AB (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m07CEF5EB192EFDA22EC079165EEE0F82A03E5FD7 (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m818A3E47FE33091DD1275D2DFDF70695E715E185 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E090EF8DAC5EB1362F55C11AC2FD29FE307A954 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3006B42AEF364FAED734490926CA034ED5348569 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m4D42E127F9A2F6A6D223785F8CA656A4930B87C2 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0730B9BAC8092A41B1C48042F79C306FD18E553F (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m718A868545EA0ABD0015911A27C3815E8A95752D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD6916963F70388076B4D8A005C8C1AC7DB630642 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mEAC3EE66A5CB94BE471210EA64A682C55D8463D0 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8B2AEA509E07E389B797D3576C0DDF9A5551E3A4 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC9A90AF46B6E7EC8BC710283B87EB110801FAB1B (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD750C5DD43B49E3369FF1CC3778B43D83F58636E (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDA0A610D1FE508DC17DABD5A4D5D861295857416 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB93E2CFB5B2969AC39C4A63A510317CFDEE6CFF9 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m989053EC4E5C8CEDAE6D100C0507BCE7CF6BE8A7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD3065D7A926DDD6807774F528EF0D74C95B73147 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m26DD8D621F4B82DD8AF033C7ABF8ABC7475D7ADB (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA5768C536204B5BD1FAF1DA63A182D90F8E99A00 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1614379187C193FBC11C8EA68980A7A00B472377 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m75DEDE8EC817491CD64CE8D09BCFBA73BDB72656 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD092C8821B7FC54D44F94C4F3B282D4588DED068 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m5BD62585103C935CC4B20021B610D1D480BE6F19 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC38E543F0BA4C1931B8FDCDA225802CE37FBD971 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC061A8BAB0855DF9F3365468CFE7C6897B27DB66 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m91DD8D51560F4B4A6690B2B4DCF114816973A693 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mA1A62AF5ED8AB1B514BBAAAEA9BB3D081C3AA4ED_fshared (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_fshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE31E6450162F6E9B618AAC3AC422BA73138F2DF2 (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1584B4A5D71D0BD68DC0B608E63CE74E81094A13 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3E387EA2DD8EE68F91476C1CFC4FB56DB16FE901 (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB2EE20AD2CF899F6D963C508EB10B05E9DBAAFD1 (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m2278DB015831D3852A1ECDC9C8E44CA52E94A010 (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6679EEE84E9BBDBE8761CF44B8294155AB69A45E (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mB732A9E350D9E3CD2C7840CC90E0CD38529A5C1C (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m002E2463EC869D6B730B00CF9A1A973007B41B35 (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m98DEFEBAE637436EEDC27C55AE2C19B076DE090F (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2762EABC097FB2A997370146E5E61C2A197552CE (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6453D07CDC6264E9F4FEBF425DFA817487EE9723 (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB98D3656FF7E5F1A67C4FB181C9A4A3D309087FA (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m2CC3246BF9378F698D206586E815F940BDFF3A4F (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mAD7E8A171AFE7CD86454D7E8BFDE0CD9D216060C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m47AEA24C0ACE4F3899592E7466AEEAEC7C8677AB (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2C11317DDF1B10C32280199980586FF267E163F6 (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD9D82410CB95D4FE5C14BACB7022BFC0B090CB23 (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mA31AC1D905D65EE27428ABA47C90CFA51CA93BA8 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m913E4228E930667ED05C69E275781B4D65AD6377 (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m05146C24F41FA016ABE609031F1CCDF60E768619 (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m95E8E1F55501F640B52A5AD4E73DE9CB674CA074 (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mAB1EFE8A5D353B131BBE9EB34B74A6BAE06F9599 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m983620D9F4A7313CEB1B1AEFFEDC8DB2DF1600F3 (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mAB5A5EADC7E5E50497A3B7584352D42B28CE3C69 (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0EEB9CC7A903E35B3737942EFF99016D288DDED6 (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0DDEE58D13E8FB5B2766AC7DA0C55DAC13584B77 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC67C7EF96296B0DE1C19FDEEDBABA0FFBD67CB03 (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m716BA7D21054B1D77515F421EE50AD75DB3EACBE (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m4AEAC1701CA9A62BE785789577701D3067BA940C (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E3E93ABA74E874883D6D2D19850D0E9228C1602 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m18DFA62AB994A0E2B7A55DE857C5BF43DD82B9BB (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m068973C4E30DF1B7F19B5DE178E5CC5D7DE63DA0 (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m2F3826CE2CEDCD83FC187ED8CB24FF2F8B004468 (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB6D8AF95BBBB7D0D3CEDFACC51FF5A3192DA595A (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9770830482CC56023A66FA9929A8560F8DA502D5 (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m0CB0499803DC3663D38A5B2842B1D4B3E41EC17A (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mF8F286601D8EED13DACAB99C02259324E49C6DA1 (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m95712CD049C6EEB0E90DB244AC3171FA85166DB6 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m947A3FA40F7BF31EEE550BB315172BE53B38F22F (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m0A4F50958D471DC760F266D8D2A1EE200DF52C2E (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBB2B7BF08D287E2667F29836FCF9E439551DBE8F (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m11348500F34A92ED3E4F57AA0233784078379771 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m638A809E5C72AB15EDA998647FE19E464E709DEF (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC3926319976609BD7A37B3FD87A61906A26C54B6 (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE24114E67C1515ED8C4F81DBE65B00B6B917A279 (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5F2B05B1740F553E40DFC6DED6A468B45B9316FF (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m23A5C68995E101E0D2EB2F9483D609514BBDBD2E (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE9844C779BE6775172325AFACCE26458ABB4B8C0 (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m294CA4038F05C8500E78F059A44B5C74556DBBF8 (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mFCD2A54038776E3951F71F390645766807267DE5 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m07FD564014E69D4B40CE0B12AFAA93929EC83137 (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB2559896BC5F11800B0108BEBA9EAB2A6C95EE0F (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m9759E4E426E53E8DD9400478BA7D6F81C7045498 (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m77E7B5A08971CD505FF41765E78B811AAB31B492 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mF080F0FA34F8F5E175F6E4DEDD178B75394CF519 (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2B98BD0E648DADFDD364421B9F9FC9936A394B91 (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m9755643A08D11F86D78C24879A20FA6B7A92EF03 (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m8408613E90585C543FF86E0D19765A06036A7DB1 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3950355F5CE2667D4D6E45F1236436E1D59D65BA (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE665276036AA8B4551F37184CDA5DB0F5FB3E144 (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA3718CBDAD334D0C3B3B3D9C2FBFFC64CB9C1280 (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD22DEE1877768FD46CF1D7BE9E64A9BBF4762858 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m226D99000078C09F61A5D23C9D572EEFD2C1F3AB (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m38FC28A8D172A809848EBBE17B7593C9A4AC5309 (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1A6CD671F2232BF4A06B207D55F1F568E63926C4 (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mA9A4BFFC0194840C24FA3236828CF7317CD9520B (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mEB871392DF075F46BCE7069114A25D156DE0073F (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m95340ADEACAB1B65557172787156CAE6656430EF (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0AFB680989F7183252C477DD7EB9EF59D9C88ECC (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m052B85911C70FD4FE70D220FF791FAF6C6479F83 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m37A8647602E0715AC27FDFF43DABCCEF7701AEAB (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, RaycastHitData_t5EAB266730389AB27715962670C2512800451841 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE1ABD3A991704C640186283F3DD505E3B9A77BB6 (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, RaycastHitData_t5EAB266730389AB27715962670C2512800451841 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m7CC35A27EBA8DF9C76DAF0D135AC0AE03712BBA2 (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mCA22625D9257E2DDB3A7D2F73B68CFCF0FA4CDE9 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE786437D766F8A28AD7EEEAB775C2747A0BD7592 (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mF845FAB93C4FA2A86FEA19E58ACF92D61B537135 (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE13D12DF114975DD908CD625BAB9AF74B01C75C1 (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1DFF8D7E2AFA26178259B3EA21D8C812B717AD3F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m4392D985997DFE546274579509012A5F456F6D81 (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC3CD699DBC3E9DF379117EF72E71730E06704115 (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m409F5776BEB430BE72273C433CC1850CD93700A7 (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m297F49BCB3FD33C8DE274BA917FFF7B708758DB7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mDF174A6917D3D93C8D7910C91080D253891A1AC5 (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC7204EA734A903659BFE12EFC2FD358391419441 (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m5DE9DBF6255A059388D36D97702FA9CDCA1F9E5A (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m41DC571ED10EE6B9368416B94DB4ED4ED4D05021 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m22B8E4AFE7549E0E424815E99B7AAE95D37AE17A (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m48EDD04333A38176B3F28ECB570626948E901066 (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m31B5E7F8E3D51CB370BE05608F7B2C3C11EE0C55 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m496DFF37E9CC6DE59F0E2B4E2A5DBEAA32DEAD94 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6057F27D1ACAA9CBF4A9FFC87FDAA2ACC117A809 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD865206564138ED88C746288B0A9A6EB96555FC2 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m15D679310A0AC97586C8124180F5EB3E1D40A2BC (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m948DB26D5A8A2DF64E9700A6DEB6F836B10749A3 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9ADA09E692C504A400AF0D8E4BF59A7C3C2C8F93 (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m942BE9C1C9D8A0392F495981442E058E887308CF (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m299B4E260E97612F6BFD1965863F5EDB0D80889F (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBF48FC95A670E75A65647A9F7520AEB9AE4A0FE6 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m705B2717517A6E1493976E0F972CEC791692FF97 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBE061D69DECDF68D566C15E465E25ECFCE11FCD3 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m05F05C64F32981A1BF2CEC3E7589604A188B612B (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBA2972FFD773AA00EC4BAD22D43C97C5FFFD31EA (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD887308D8602D0A6C687F8B588F772CB0D0911A2 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mCC0B8F0541328E20D9E516ACE2AF53B44AA502ED (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCB408C9C0EF8BB4EAF3BD9D74210EA1BF645DF9F (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mCB5B8ABED8FAA81E9313462E91E846577DBF79E7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA07C916646443F7E600B771BA5B6E3276CF6F38D (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m24635AF1EE0DBE26C00D1E919C331F3EC3514442 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m95888730659343F372198CD5B3EE35B001150127 (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE94C5A9A40442783E8EE309CDBA6395F4842EEB3 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m25DB18C9E908096B821F4C692B9190E3B812A1FA (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m4D6C6D23DE1E2EE6057F94BDBD946631CC5B2EBC (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCB4FF2AFAA94D01923F9242ACB66F817F7CF18C7 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC5B4A17FCA21C2DF1F66767E828535AD34B90513 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m116AE421F0EB30927F6725D62792FFA5A6065627 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mF523F5C22B1C3DFB9577177B1C50F9DC3B9704C2 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBCA2EE72377AB6EC0E4641B1D12026B5333268CE (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5C117EA0A998E2211CD0904DFCA1A117CB6D4B29 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m675B455613C954C02AFAF1510FA04B3FC256E279 (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m47E0AD9DAF851871758572465D8585553D7FBAA7 (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m33394098C1C040B6577A13565B005D626C626998 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mAC5EAC32404917AD2C3C5618AB0234A151B5D2BC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m40807F66AD9634874F484D3B3BD8150C0EBCCC7F (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE4DF1F8EB3A5DCA1E96582AFE6D32FACF680CDC5 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8458978F11950358DAF515D9793F94E96E164867 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0F15E0EC055DA3F521E73184206A61A28D6E1C0F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE296E176CF781CFBEDEA890CD7B7438707C5CBC2 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m25AC6AFADC9DA3C7616FB3DF2538489069FE82FF (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCFEB25EF1344B976A050CB6937362A3F5DF0199A (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m3A0010FDAC2908AF80DDEB4BA4458869F0FE9F8F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3CAC4C8BA133B39A5BA9FA0A1E0E711E09BD7694 (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE8080B23EA1AD670E7D7D77D172A6973A222ED2C (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m88DC99D667337D16893CDF63694D22FEAF331E05 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E692C71C0193F22ACD65EEFBA4ECA75E5C53AAD (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9FE5CCC2B059229D4C97248D4F5E82C20ECB5FBE (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m093DAAF13F65B6DE09B24D00F36FCC13F61E6E15 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m283266AC4D77DC2424BDBD9CB125A1A61AB55E1C (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD7979063F69DBCBBA075F88868B40DE92ED347FC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m7535255C244884FCE69E71A597A10D82C38A21AB (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m07CEF5EB192EFDA22EC079165EEE0F82A03E5FD7 (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m818A3E47FE33091DD1275D2DFDF70695E715E185 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E090EF8DAC5EB1362F55C11AC2FD29FE307A954 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3006B42AEF364FAED734490926CA034ED5348569 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m4D42E127F9A2F6A6D223785F8CA656A4930B87C2 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0730B9BAC8092A41B1C48042F79C306FD18E553F (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m718A868545EA0ABD0015911A27C3815E8A95752D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD6916963F70388076B4D8A005C8C1AC7DB630642 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mEAC3EE66A5CB94BE471210EA64A682C55D8463D0 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8B2AEA509E07E389B797D3576C0DDF9A5551E3A4 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC9A90AF46B6E7EC8BC710283B87EB110801FAB1B (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD750C5DD43B49E3369FF1CC3778B43D83F58636E (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDA0A610D1FE508DC17DABD5A4D5D861295857416 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB93E2CFB5B2969AC39C4A63A510317CFDEE6CFF9 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m989053EC4E5C8CEDAE6D100C0507BCE7CF6BE8A7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD3065D7A926DDD6807774F528EF0D74C95B73147 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m26DD8D621F4B82DD8AF033C7ABF8ABC7475D7ADB (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA5768C536204B5BD1FAF1DA63A182D90F8E99A00 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1614379187C193FBC11C8EA68980A7A00B472377 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m75DEDE8EC817491CD64CE8D09BCFBA73BDB72656 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD092C8821B7FC54D44F94C4F3B282D4588DED068 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m5BD62585103C935CC4B20021B610D1D480BE6F19 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC38E543F0BA4C1931B8FDCDA225802CE37FBD971 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC061A8BAB0855DF9F3365468CFE7C6897B27DB66 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m91DD8D51560F4B4A6690B2B4DCF114816973A693 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void DictionaryEnumerator__ctor_mA1A62AF5ED8AB1B514BBAAAEA9BB3D081C3AA4ED (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77*, RuntimeObject*, const RuntimeMethod*))DictionaryEnumerator__ctor_mA1A62AF5ED8AB1B514BBAAAEA9BB3D081C3AA4ED_fshared)(__this, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_fshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE31E6450162F6E9B618AAC3AC422BA73138F2DF2 (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B ReadOnlyCollection_1_get_Item_m132DCFF193762D3CAD7C52269975CEEF884DCAEA (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_2;
		L_2 = InterfaceFuncInvoker1< BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3E387EA2DD8EE68F91476C1CFC4FB56DB16FE901 (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mF3BC784E622D7F6C8DB66152DD44A940BE3EF933 (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, BrickChunkAllocU5BU5D_t67316E3C7BB0F8E26AB0D8AD7B8CC62FD533F6AE* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		BrickChunkAllocU5BU5D_t67316E3C7BB0F8E26AB0D8AD7B8CC62FD533F6AE* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< BrickChunkAllocU5BU5D_t67316E3C7BB0F8E26AB0D8AD7B8CC62FD533F6AE*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m95F697101E9CCDA4A18F1FEF1129F5B87744A369 (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB2EE20AD2CF899F6D963C508EB10B05E9DBAAFD1 (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m2ADF39EAA11EDED4E6B6FE975CB977671F21A20C (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_2;
		L_2 = InterfaceFuncInvoker1< BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mF5A1B7352740CCF3BF5F4EE0B5406179B84CB1FC (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	BrickChunkAllocU5BU5D_t67316E3C7BB0F8E26AB0D8AD7B8CC62FD533F6AE* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mE31E6450162F6E9B618AAC3AC422BA73138F2DF2(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((BrickChunkAllocU5BU5D_t67316E3C7BB0F8E26AB0D8AD7B8CC62FD533F6AE*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		BrickChunkAllocU5BU5D_t67316E3C7BB0F8E26AB0D8AD7B8CC62FD533F6AE* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		BrickChunkAllocU5BU5D_t67316E3C7BB0F8E26AB0D8AD7B8CC62FD533F6AE* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< BrickChunkAllocU5BU5D_t67316E3C7BB0F8E26AB0D8AD7B8CC62FD533F6AE*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_35;
			L_35 = InterfaceFuncInvoker1< BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m425FA0CF5BB531266E8B272474E22B793C16217C (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_2;
		L_2 = InterfaceFuncInvoker1< BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1584B4A5D71D0BD68DC0B608E63CE74E81094A13 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B));
		BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m9CCECDE0CEF98FA060360974EDF5457467B9B66D (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m1584B4A5D71D0BD68DC0B608E63CE74E81094A13(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m3E387EA2DD8EE68F91476C1CFC4FB56DB16FE901(__this, ((*(BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mCD70A4D5F566D2C96465CDD51373CA26C1F28A22 (ReadOnlyCollection_1_t60075704E4AC0EE9C6A477EFA7FDB046ED3A199D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m1584B4A5D71D0BD68DC0B608E63CE74E81094A13(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mB2EE20AD2CF899F6D963C508EB10B05E9DBAAFD1(__this, ((*(BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m2278DB015831D3852A1ECDC9C8E44CA52E94A010 (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 ReadOnlyCollection_1_get_Item_mB18A3E26533B720F56902716C58B3A46532BB5A3 (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 L_2;
		L_2 = InterfaceFuncInvoker1< SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mB732A9E350D9E3CD2C7840CC90E0CD38529A5C1C (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m850573B05FD0B45287F263F8D4FFA6C2D8315C1F (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, SerializedPerSceneCellListU5BU5D_tF4A784BCC24343A482BE15CBF415A68F3B353D6F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SerializedPerSceneCellListU5BU5D_tF4A784BCC24343A482BE15CBF415A68F3B353D6F* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< SerializedPerSceneCellListU5BU5D_tF4A784BCC24343A482BE15CBF415A68F3B353D6F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m1D6BB9CBE4FE3DE704D9379D7E898D80072A9056 (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m002E2463EC869D6B730B00CF9A1A973007B41B35 (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mA78C5A09FE79C6FDE01D95A4ED9DF83DACFB096D (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 L_2;
		L_2 = InterfaceFuncInvoker1< SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m720C3B05304C9D4C04E6516DF0CC49854171BF9A (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SerializedPerSceneCellListU5BU5D_tF4A784BCC24343A482BE15CBF415A68F3B353D6F* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m2278DB015831D3852A1ECDC9C8E44CA52E94A010(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((SerializedPerSceneCellListU5BU5D_tF4A784BCC24343A482BE15CBF415A68F3B353D6F*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		SerializedPerSceneCellListU5BU5D_tF4A784BCC24343A482BE15CBF415A68F3B353D6F* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		SerializedPerSceneCellListU5BU5D_tF4A784BCC24343A482BE15CBF415A68F3B353D6F* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< SerializedPerSceneCellListU5BU5D_tF4A784BCC24343A482BE15CBF415A68F3B353D6F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 L_35;
			L_35 = InterfaceFuncInvoker1< SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m65AEF26CCBD4B5E5AB39874A2B66F1A5D617627B (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 L_2;
		L_2 = InterfaceFuncInvoker1< SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6679EEE84E9BBDBE8761CF44B8294155AB69A45E (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591));
		SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mF39A00AAC6A77065B1DA51AF1D2982D7C0C86041 (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m6679EEE84E9BBDBE8761CF44B8294155AB69A45E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mB732A9E350D9E3CD2C7840CC90E0CD38529A5C1C(__this, ((*(SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m6D60BAE0CFECCCF35688404A896616CC998B7905 (ReadOnlyCollection_1_tF8522889690BC1839B3C279644A00A0E8F789DEC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m6679EEE84E9BBDBE8761CF44B8294155AB69A45E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m002E2463EC869D6B730B00CF9A1A973007B41B35(__this, ((*(SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m98DEFEBAE637436EEDC27C55AE2C19B076DE090F (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 ReadOnlyCollection_1_get_Item_m32124F321123E04C9273B3ED7186012C0F73AEC0 (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 L_2;
		L_2 = InterfaceFuncInvoker1< ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6453D07CDC6264E9F4FEBF425DFA817487EE9723 (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mC9837DF3E941CF61A337DB2C33D5434A08F4967C (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, ObsoleteSerializablePerScenarioDataItemU5BU5D_t28ABF785278BD4BAD3D8A00B4EE4F247361A22F3* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ObsoleteSerializablePerScenarioDataItemU5BU5D_t28ABF785278BD4BAD3D8A00B4EE4F247361A22F3* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ObsoleteSerializablePerScenarioDataItemU5BU5D_t28ABF785278BD4BAD3D8A00B4EE4F247361A22F3*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m23D535A49E78F3C159D13A0BD34BE9C4D571505C (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB98D3656FF7E5F1A67C4FB181C9A4A3D309087FA (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mF4AEE2A281B2BD48ECFEA466EC462CBD88CAA9CF (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 L_2;
		L_2 = InterfaceFuncInvoker1< ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m6766457A1DB2E8F45E4AD7F8EF149B2BF26F6F0F (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ObsoleteSerializablePerScenarioDataItemU5BU5D_t28ABF785278BD4BAD3D8A00B4EE4F247361A22F3* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m98DEFEBAE637436EEDC27C55AE2C19B076DE090F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ObsoleteSerializablePerScenarioDataItemU5BU5D_t28ABF785278BD4BAD3D8A00B4EE4F247361A22F3*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		ObsoleteSerializablePerScenarioDataItemU5BU5D_t28ABF785278BD4BAD3D8A00B4EE4F247361A22F3* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ObsoleteSerializablePerScenarioDataItemU5BU5D_t28ABF785278BD4BAD3D8A00B4EE4F247361A22F3* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< ObsoleteSerializablePerScenarioDataItemU5BU5D_t28ABF785278BD4BAD3D8A00B4EE4F247361A22F3*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 L_35;
			L_35 = InterfaceFuncInvoker1< ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m34737255FF46AD70F519BBFF48F00F9ACD351067 (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 L_2;
		L_2 = InterfaceFuncInvoker1< ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2762EABC097FB2A997370146E5E61C2A197552CE (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7));
		ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m486E7A76855399E9EAB093694494620A5396FED8 (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m2762EABC097FB2A997370146E5E61C2A197552CE(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m6453D07CDC6264E9F4FEBF425DFA817487EE9723(__this, ((*(ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m5F70ABC2563E7A3D1ACA11DF15FE1E3AA2671A53 (ReadOnlyCollection_1_tC344EA24C72FF0194C07947E811476F242841216* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m2762EABC097FB2A997370146E5E61C2A197552CE(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mB98D3656FF7E5F1A67C4FB181C9A4A3D309087FA(__this, ((*(ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m2CC3246BF9378F698D206586E815F940BDFF3A4F (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A ReadOnlyCollection_1_get_Item_mEE5E5637BE9785010B3A21EF121ABD5A0261442D (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A L_2;
		L_2 = InterfaceFuncInvoker1< StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m47AEA24C0ACE4F3899592E7466AEEAEC7C8677AB (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mDA247EBE5E4425CADB40177CF792579541303F4E (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, StreamableCellDescU5BU5D_tDAAACF4DEEFB9A39DD6E17E66EB55EC8A41258B7* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StreamableCellDescU5BU5D_tDAAACF4DEEFB9A39DD6E17E66EB55EC8A41258B7* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< StreamableCellDescU5BU5D_tDAAACF4DEEFB9A39DD6E17E66EB55EC8A41258B7*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m247154DEDE05E4EB209AD57F0A87AFB0408AE7BB (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2C11317DDF1B10C32280199980586FF267E163F6 (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mE21BC76810E498D1A97DB58F486DEDC10E193299 (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A L_2;
		L_2 = InterfaceFuncInvoker1< StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m0F24B9B8E0075C128ED5C42A638B781F8F7AE2E8 (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	StreamableCellDescU5BU5D_tDAAACF4DEEFB9A39DD6E17E66EB55EC8A41258B7* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m2CC3246BF9378F698D206586E815F940BDFF3A4F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((StreamableCellDescU5BU5D_tDAAACF4DEEFB9A39DD6E17E66EB55EC8A41258B7*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		StreamableCellDescU5BU5D_tDAAACF4DEEFB9A39DD6E17E66EB55EC8A41258B7* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		StreamableCellDescU5BU5D_tDAAACF4DEEFB9A39DD6E17E66EB55EC8A41258B7* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< StreamableCellDescU5BU5D_tDAAACF4DEEFB9A39DD6E17E66EB55EC8A41258B7*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A L_35;
			L_35 = InterfaceFuncInvoker1< StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m784006CE053BEF0549101CE68D3A3537C92F5101 (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A L_2;
		L_2 = InterfaceFuncInvoker1< StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mAD7E8A171AFE7CD86454D7E8BFDE0CD9D216060C (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A));
		StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m6D0E86731C4B7060C2F4FBBB69FCF7C455238CA7 (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mAD7E8A171AFE7CD86454D7E8BFDE0CD9D216060C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m47AEA24C0ACE4F3899592E7466AEEAEC7C8677AB(__this, ((*(StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mA0500C0627796558DA81F0945C81B61610540396 (ReadOnlyCollection_1_t80B210113B317228123ECCEA2A496292D5A546B4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mAD7E8A171AFE7CD86454D7E8BFDE0CD9D216060C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m2C11317DDF1B10C32280199980586FF267E163F6(__this, ((*(StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD9D82410CB95D4FE5C14BACB7022BFC0B090CB23 (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ReadOnlyCollection_1_get_Item_m47C9C15DA6295A4D3205BB3DF6706E714754C5BE (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_2;
		L_2 = InterfaceFuncInvoker1< SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m913E4228E930667ED05C69E275781B4D65AD6377 (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m858A6F6B62C63990989FBEB02C82B3AB723D9C05 (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mFA24EA6DA76344F50A16777637DC62C58EAE49F7 (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m05146C24F41FA016ABE609031F1CCDF60E768619 (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mF1CEF15879CE0766AB2D52E18BAB760BD390A1B4 (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_2;
		L_2 = InterfaceFuncInvoker1< SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mB5C7194DC6DB6217A91C0C87EB20DD179B46013A (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mD9D82410CB95D4FE5C14BACB7022BFC0B090CB23(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< SingleRangeU5BU5D_t9F938F2249733D85C4F97842A125778D69A843D6*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_35;
			L_35 = InterfaceFuncInvoker1< SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mB7719C09C00A3DC120B4DBAD4F4051DA0F2D429E (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_2;
		L_2 = InterfaceFuncInvoker1< SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mA31AC1D905D65EE27428ABA47C90CFA51CA93BA8 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC));
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m66E6055368525A72DCCC69258DE70D1A6DF4F01D (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mA31AC1D905D65EE27428ABA47C90CFA51CA93BA8(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m913E4228E930667ED05C69E275781B4D65AD6377(__this, ((*(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mEA821C50AEAA88BFB68B38FC52D7A12B7EDEC746 (ReadOnlyCollection_1_tB4D9A0CDCFB95FF39CF5E7E6C0BA76B3178ECBDF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mA31AC1D905D65EE27428ABA47C90CFA51CA93BA8(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m05146C24F41FA016ABE609031F1CCDF60E768619(__this, ((*(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m95E8E1F55501F640B52A5AD4E73DE9CB674CA074 (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 ReadOnlyCollection_1_get_Item_mCB2DAD592707EC93120F0AD493A9EA30B7887EB8 (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 L_2;
		L_2 = InterfaceFuncInvoker1< ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m983620D9F4A7313CEB1B1AEFFEDC8DB2DF1600F3 (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m40BC7F09113CF3778DD9CE61159EAA8A62872F22 (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, ElementInsertionDataU5BU5D_tC694C1E86CD6BF2A280620FDE4C8A6F02EC3F7FB* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ElementInsertionDataU5BU5D_tC694C1E86CD6BF2A280620FDE4C8A6F02EC3F7FB* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ElementInsertionDataU5BU5D_tC694C1E86CD6BF2A280620FDE4C8A6F02EC3F7FB*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m5EB776BC8FA7C980F555614D77D18288C66839E7 (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mAB5A5EADC7E5E50497A3B7584352D42B28CE3C69 (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mEC91C61631281A228CD6D39445182F6E66DEC9C9 (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 L_2;
		L_2 = InterfaceFuncInvoker1< ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m2AE3E1B1E59B2E2882D52A6BA4697F89C963E541 (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ElementInsertionDataU5BU5D_tC694C1E86CD6BF2A280620FDE4C8A6F02EC3F7FB* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m95E8E1F55501F640B52A5AD4E73DE9CB674CA074(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ElementInsertionDataU5BU5D_tC694C1E86CD6BF2A280620FDE4C8A6F02EC3F7FB*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		ElementInsertionDataU5BU5D_tC694C1E86CD6BF2A280620FDE4C8A6F02EC3F7FB* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ElementInsertionDataU5BU5D_tC694C1E86CD6BF2A280620FDE4C8A6F02EC3F7FB* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< ElementInsertionDataU5BU5D_tC694C1E86CD6BF2A280620FDE4C8A6F02EC3F7FB*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 L_35;
			L_35 = InterfaceFuncInvoker1< ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m0B2A6F557628FA85BBD21D837688D84AECA13566 (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 L_2;
		L_2 = InterfaceFuncInvoker1< ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mAB1EFE8A5D353B131BBE9EB34B74A6BAE06F9599 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959));
		ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mCA9FE786A4205269188C6A4BF84029E0FF903A8F (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mAB1EFE8A5D353B131BBE9EB34B74A6BAE06F9599(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m983620D9F4A7313CEB1B1AEFFEDC8DB2DF1600F3(__this, ((*(ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m536D38B178BA32CB2F6C5CFB8CA3A164574146C3 (ReadOnlyCollection_1_t778705179F5558E3A20AA29622B7B6CF3430C9F5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mAB1EFE8A5D353B131BBE9EB34B74A6BAE06F9599(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mAB5A5EADC7E5E50497A3B7584352D42B28CE3C69(__this, ((*(ElementInsertionData_tA691432209201F6E803ADDFD410186B673527959*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0EEB9CC7A903E35B3737942EFF99016D288DDED6 (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 ReadOnlyCollection_1_get_Item_m7415C820C0D80497D667E7E8E1D21D38A86333F3 (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 L_2;
		L_2 = InterfaceFuncInvoker1< MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC67C7EF96296B0DE1C19FDEEDBABA0FFBD67CB03 (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mF9234048E6B173728F12D5D69C5881BB9E123ECA (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, MinMaxBoundsU5BU5D_tBCCC38EDCBA810A447297E68EF7A3B22AE8A25C3* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		MinMaxBoundsU5BU5D_tBCCC38EDCBA810A447297E68EF7A3B22AE8A25C3* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< MinMaxBoundsU5BU5D_tBCCC38EDCBA810A447297E68EF7A3B22AE8A25C3*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m73970EA5B885D292B5D238D8D85D6FCB0B325855 (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m716BA7D21054B1D77515F421EE50AD75DB3EACBE (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m07DC4180FC629AEF8A747CA4CA539A13C1D04EC1 (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 L_2;
		L_2 = InterfaceFuncInvoker1< MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m7EED9AAA73BBCCB5B4031DCB332410B3D2431D5D (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	MinMaxBoundsU5BU5D_tBCCC38EDCBA810A447297E68EF7A3B22AE8A25C3* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m0EEB9CC7A903E35B3737942EFF99016D288DDED6(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((MinMaxBoundsU5BU5D_tBCCC38EDCBA810A447297E68EF7A3B22AE8A25C3*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		MinMaxBoundsU5BU5D_tBCCC38EDCBA810A447297E68EF7A3B22AE8A25C3* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		MinMaxBoundsU5BU5D_tBCCC38EDCBA810A447297E68EF7A3B22AE8A25C3* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< MinMaxBoundsU5BU5D_tBCCC38EDCBA810A447297E68EF7A3B22AE8A25C3*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 L_35;
			L_35 = InterfaceFuncInvoker1< MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mD8030423A389CA050AF9715D5C7385D1BA1E78CA (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 L_2;
		L_2 = InterfaceFuncInvoker1< MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0DDEE58D13E8FB5B2766AC7DA0C55DAC13584B77 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537));
		MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m673461D6E3EEDCF81DA81A18BBA7DD2CA2566E1C (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m0DDEE58D13E8FB5B2766AC7DA0C55DAC13584B77(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mC67C7EF96296B0DE1C19FDEEDBABA0FFBD67CB03(__this, ((*(MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m5035A77F0C55B000B56E7B9CEFB52524919CB42E (ReadOnlyCollection_1_t5E28CD01FD3AD826ADA55DFBBFCB6EBA5A07C214* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m0DDEE58D13E8FB5B2766AC7DA0C55DAC13584B77(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m716BA7D21054B1D77515F421EE50AD75DB3EACBE(__this, ((*(MinMaxBounds_t35E6E7F057C2DA166CB55DB2865E06EC1E344537*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m4AEAC1701CA9A62BE785789577701D3067BA940C (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 ReadOnlyCollection_1_get_Item_m13440A6AE18FB3C0BEF7B5E9352C11106763072B (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 L_2;
		L_2 = InterfaceFuncInvoker1< SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m18DFA62AB994A0E2B7A55DE857C5BF43DD82B9BB (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mD7D8EAB45610C574A684957BAE9856CA249CC0DD (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, SplineToNativeU5BU5D_t5C3D6D382D7C3E802A46457C9F252F5B7C57C8A7* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SplineToNativeU5BU5D_t5C3D6D382D7C3E802A46457C9F252F5B7C57C8A7* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< SplineToNativeU5BU5D_t5C3D6D382D7C3E802A46457C9F252F5B7C57C8A7*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m2CD4AB78F2882E97C3A00A85CDF99841EB819896 (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m068973C4E30DF1B7F19B5DE178E5CC5D7DE63DA0 (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mEA5B7423A0AE33C46E7A949466A2A91DF9E33C16 (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 L_2;
		L_2 = InterfaceFuncInvoker1< SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m5DD68D1E5E36E7035001423515C3E55D006590B3 (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SplineToNativeU5BU5D_t5C3D6D382D7C3E802A46457C9F252F5B7C57C8A7* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m4AEAC1701CA9A62BE785789577701D3067BA940C(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((SplineToNativeU5BU5D_t5C3D6D382D7C3E802A46457C9F252F5B7C57C8A7*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		SplineToNativeU5BU5D_t5C3D6D382D7C3E802A46457C9F252F5B7C57C8A7* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		SplineToNativeU5BU5D_t5C3D6D382D7C3E802A46457C9F252F5B7C57C8A7* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< SplineToNativeU5BU5D_t5C3D6D382D7C3E802A46457C9F252F5B7C57C8A7*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 L_35;
			L_35 = InterfaceFuncInvoker1< SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mF0C6DB887B010B7AC3542C6835DC8E6FA5034C86 (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 L_2;
		L_2 = InterfaceFuncInvoker1< SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E3E93ABA74E874883D6D2D19850D0E9228C1602 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7));
		SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m8B60C7D331CB10E93B2AE354A97D8DC2655E0BBE (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9E3E93ABA74E874883D6D2D19850D0E9228C1602(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m18DFA62AB994A0E2B7A55DE857C5BF43DD82B9BB(__this, ((*(SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m98FC26B5F27BBE6C251C16CD3E13D4F3E959F19E (ReadOnlyCollection_1_t28DF0456045C9D32DEA18623028183A6D89164D2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9E3E93ABA74E874883D6D2D19850D0E9228C1602(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m068973C4E30DF1B7F19B5DE178E5CC5D7DE63DA0(__this, ((*(SplineToNative_t955EDC9C3204A76BF229569169C9D5D0128D71D7*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m2F3826CE2CEDCD83FC187ED8CB24FF2F8B004468 (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 ReadOnlyCollection_1_get_Item_m795DB3CA4EE3A739E0EDB5FF1C9C4348471A38FE (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 L_2;
		L_2 = InterfaceFuncInvoker1< InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9770830482CC56023A66FA9929A8560F8DA502D5 (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m4464E2A1FBD41CFDED5A10734C532C5BABA33794 (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, InstantiableItemU5BU5D_tF64079AEA3E62BEE55ECF1E2511ECD8F80AF08A8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		InstantiableItemU5BU5D_tF64079AEA3E62BEE55ECF1E2511ECD8F80AF08A8* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< InstantiableItemU5BU5D_tF64079AEA3E62BEE55ECF1E2511ECD8F80AF08A8*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mF3B9B7D31ED542BC779873E87635AED2E0F164F7 (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m0CB0499803DC3663D38A5B2842B1D4B3E41EC17A (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mDB0B8AA104E3F29F9F8F776494C3727CE29F95A1 (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 L_2;
		L_2 = InterfaceFuncInvoker1< InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mCAA327C830A3AAC9F788B09DB25474D6CF6E9AE2 (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	InstantiableItemU5BU5D_tF64079AEA3E62BEE55ECF1E2511ECD8F80AF08A8* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m2F3826CE2CEDCD83FC187ED8CB24FF2F8B004468(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((InstantiableItemU5BU5D_tF64079AEA3E62BEE55ECF1E2511ECD8F80AF08A8*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		InstantiableItemU5BU5D_tF64079AEA3E62BEE55ECF1E2511ECD8F80AF08A8* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		InstantiableItemU5BU5D_tF64079AEA3E62BEE55ECF1E2511ECD8F80AF08A8* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< InstantiableItemU5BU5D_tF64079AEA3E62BEE55ECF1E2511ECD8F80AF08A8*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 L_35;
			L_35 = InterfaceFuncInvoker1< InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m4BAE7A8691F212F55595C1E80134623BAD66358D (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 L_2;
		L_2 = InterfaceFuncInvoker1< InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB6D8AF95BBBB7D0D3CEDFACC51FF5A3192DA595A (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332));
		InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m019DFD0E62A31A752A5B804BE511F816977E6B57 (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mB6D8AF95BBBB7D0D3CEDFACC51FF5A3192DA595A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m9770830482CC56023A66FA9929A8560F8DA502D5(__this, ((*(InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m016832D885D1333ED32C6DE319E149D2570CE7C0 (ReadOnlyCollection_1_t7DDBFAABC6670BF276EBEF7F29FDE607CE49DA90* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mB6D8AF95BBBB7D0D3CEDFACC51FF5A3192DA595A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m0CB0499803DC3663D38A5B2842B1D4B3E41EC17A(__this, ((*(InstantiableItem_tAB5FB34542FF79D15CFAC5CDD0D2CBD73298E332*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mF8F286601D8EED13DACAB99C02259324E49C6DA1 (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 ReadOnlyCollection_1_get_Item_m1D74069955A7C0AE2F04D75AD99E619602CC9191 (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 L_2;
		L_2 = InterfaceFuncInvoker1< Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m947A3FA40F7BF31EEE550BB315172BE53B38F22F (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mB3E14D2ED861B1E3772607ADED57151D60A76DC6 (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, PageU5BU5D_tDFA5009590467C6D992272922113C6230D341CE4* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PageU5BU5D_tDFA5009590467C6D992272922113C6230D341CE4* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< PageU5BU5D_tDFA5009590467C6D992272922113C6230D341CE4*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mAE7EF09A63B12DB9F2AAD6F7B8588C42317449D4 (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m0A4F50958D471DC760F266D8D2A1EE200DF52C2E (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m685CEBD77D747F24BAAD44D969400299D11D8CEB (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 L_2;
		L_2 = InterfaceFuncInvoker1< Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mA2981F55B76AA271CC7FFBA9A081F63C6F9B6A2A (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	PageU5BU5D_tDFA5009590467C6D992272922113C6230D341CE4* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mF8F286601D8EED13DACAB99C02259324E49C6DA1(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((PageU5BU5D_tDFA5009590467C6D992272922113C6230D341CE4*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		PageU5BU5D_tDFA5009590467C6D992272922113C6230D341CE4* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		PageU5BU5D_tDFA5009590467C6D992272922113C6230D341CE4* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< PageU5BU5D_tDFA5009590467C6D992272922113C6230D341CE4*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 L_35;
			L_35 = InterfaceFuncInvoker1< Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m393B60BAB8CEA427AFA24D38A8A71A4510A77C49 (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 L_2;
		L_2 = InterfaceFuncInvoker1< Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m95712CD049C6EEB0E90DB244AC3171FA85166DB6 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981));
		Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mDBB06A616B5CB5D091360CD1C26ED9550A2A9B3F (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m95712CD049C6EEB0E90DB244AC3171FA85166DB6(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m947A3FA40F7BF31EEE550BB315172BE53B38F22F(__this, ((*(Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m828A009F4EA01F066405C27334BA7DA1E5EAABA7 (ReadOnlyCollection_1_t94B813926D2C4CA835FE4DF72FAEED427A8294F5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m95712CD049C6EEB0E90DB244AC3171FA85166DB6(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m0A4F50958D471DC760F266D8D2A1EE200DF52C2E(__this, ((*(Page_tF4CAEB005DC95E53F6992D59C12E548C3C2DE981*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBB2B7BF08D287E2667F29836FCF9E439551DBE8F (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF ReadOnlyCollection_1_get_Item_m7D6E7F9A7B2DCA2865C2320EAD02C97BFA7057E1 (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_2;
		L_2 = InterfaceFuncInvoker1< AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m638A809E5C72AB15EDA998647FE19E464E709DEF (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m388483269164B7D2D2C0DFC1E1CA02135AFA2984 (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, AttributeOverrideU5BU5D_t4D2E0B93EF3A1A1EB58AC1F48E6CFE20A0EA27E8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		AttributeOverrideU5BU5D_t4D2E0B93EF3A1A1EB58AC1F48E6CFE20A0EA27E8* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< AttributeOverrideU5BU5D_t4D2E0B93EF3A1A1EB58AC1F48E6CFE20A0EA27E8*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m7747E7F55D0427D07FEBE057396F3C0C34361BFF (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC3926319976609BD7A37B3FD87A61906A26C54B6 (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mADA35CDF24AA2C23D47899052C6B14D9E15D936D (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_2;
		L_2 = InterfaceFuncInvoker1< AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m1117466AFAE6686A4A21825C6F8BCF74E029F8F3 (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	AttributeOverrideU5BU5D_t4D2E0B93EF3A1A1EB58AC1F48E6CFE20A0EA27E8* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mBB2B7BF08D287E2667F29836FCF9E439551DBE8F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((AttributeOverrideU5BU5D_t4D2E0B93EF3A1A1EB58AC1F48E6CFE20A0EA27E8*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		AttributeOverrideU5BU5D_t4D2E0B93EF3A1A1EB58AC1F48E6CFE20A0EA27E8* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		AttributeOverrideU5BU5D_t4D2E0B93EF3A1A1EB58AC1F48E6CFE20A0EA27E8* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< AttributeOverrideU5BU5D_t4D2E0B93EF3A1A1EB58AC1F48E6CFE20A0EA27E8*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_35;
			L_35 = InterfaceFuncInvoker1< AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m6A6FB3510D880798441A249753DD53712D2A4E64 (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_2;
		L_2 = InterfaceFuncInvoker1< AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m11348500F34A92ED3E4F57AA0233784078379771 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF));
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mC4DA23437E5F7D1AECD4DCE05731DF55CFECED0B (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m11348500F34A92ED3E4F57AA0233784078379771(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m638A809E5C72AB15EDA998647FE19E464E709DEF(__this, ((*(AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mE3C28CE739EDDCA049F7767F48C3C8511722BFE4 (ReadOnlyCollection_1_tDC2EF30575D579ECA71384FC25F70D7736968631* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m11348500F34A92ED3E4F57AA0233784078379771(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mC3926319976609BD7A37B3FD87A61906A26C54B6(__this, ((*(AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE24114E67C1515ED8C4F81DBE65B00B6B917A279 (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 ReadOnlyCollection_1_get_Item_m8CBA9F3CACB0C9BC25CD4273AFA26E930A2CF53F (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 L_2;
		L_2 = InterfaceFuncInvoker1< UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m23A5C68995E101E0D2EB2F9483D609514BBDBD2E (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mBE33CDCA2DDF586C7685B7DBE8BA2ABC295D2C03 (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, UxmlSerializedDataOverrideU5BU5D_t31FF90782892C74FA1E1C67897A3E6C0BB0A5B9A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UxmlSerializedDataOverrideU5BU5D_t31FF90782892C74FA1E1C67897A3E6C0BB0A5B9A* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UxmlSerializedDataOverrideU5BU5D_t31FF90782892C74FA1E1C67897A3E6C0BB0A5B9A*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m59F7964D59B5A1EDC84520847B54446AA599F2A6 (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE9844C779BE6775172325AFACCE26458ABB4B8C0 (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mFB5FD819475E9D3F4A7BC8F80A0ACE57AAD94321 (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 L_2;
		L_2 = InterfaceFuncInvoker1< UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m63D503B8D2F7D6F1325ADC9EDC871334C3688B2B (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UxmlSerializedDataOverrideU5BU5D_t31FF90782892C74FA1E1C67897A3E6C0BB0A5B9A* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mE24114E67C1515ED8C4F81DBE65B00B6B917A279(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UxmlSerializedDataOverrideU5BU5D_t31FF90782892C74FA1E1C67897A3E6C0BB0A5B9A*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UxmlSerializedDataOverrideU5BU5D_t31FF90782892C74FA1E1C67897A3E6C0BB0A5B9A* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UxmlSerializedDataOverrideU5BU5D_t31FF90782892C74FA1E1C67897A3E6C0BB0A5B9A* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UxmlSerializedDataOverrideU5BU5D_t31FF90782892C74FA1E1C67897A3E6C0BB0A5B9A*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 L_35;
			L_35 = InterfaceFuncInvoker1< UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m13FA31BF41D1D1B7AF8E72467D245D9D009191DD (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 L_2;
		L_2 = InterfaceFuncInvoker1< UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5F2B05B1740F553E40DFC6DED6A468B45B9316FF (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67));
		UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m4732772C9917871E0AE5CE98C6B7BC615756A6D8 (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m5F2B05B1740F553E40DFC6DED6A468B45B9316FF(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m23A5C68995E101E0D2EB2F9483D609514BBDBD2E(__this, ((*(UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mEF5D70A735D715F8387FEF70F747911CB25B92A4 (ReadOnlyCollection_1_t558A7922925B11EDC9269DCBDDF8FF3619D03318* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m5F2B05B1740F553E40DFC6DED6A468B45B9316FF(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mE9844C779BE6775172325AFACCE26458ABB4B8C0(__this, ((*(UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m294CA4038F05C8500E78F059A44B5C74556DBBF8 (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 ReadOnlyCollection_1_get_Item_m2649CF44A90207A705DB7598D1F3ED59015BAE33 (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 L_2;
		L_2 = InterfaceFuncInvoker1< FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m07FD564014E69D4B40CE0B12AFAA93929EC83137 (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m84897558F2E8B698A890328B3743B8152B705EA5 (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, FontReferenceMapU5BU5D_tFA470305A1935D0EBE0F74758328811439915118* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		FontReferenceMapU5BU5D_tFA470305A1935D0EBE0F74758328811439915118* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< FontReferenceMapU5BU5D_tFA470305A1935D0EBE0F74758328811439915118*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m2F522FCFF4FB833C077DBD0C3241FB9ABEAF313F (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB2559896BC5F11800B0108BEBA9EAB2A6C95EE0F (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mFCCCBEBF08B4DFA4BC4940F0B95F77412AF94B06 (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 L_2;
		L_2 = InterfaceFuncInvoker1< FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mBB9AB186341D4FCEB4AC500C094E494CB11F3A06 (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	FontReferenceMapU5BU5D_tFA470305A1935D0EBE0F74758328811439915118* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m294CA4038F05C8500E78F059A44B5C74556DBBF8(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((FontReferenceMapU5BU5D_tFA470305A1935D0EBE0F74758328811439915118*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		FontReferenceMapU5BU5D_tFA470305A1935D0EBE0F74758328811439915118* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		FontReferenceMapU5BU5D_tFA470305A1935D0EBE0F74758328811439915118* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< FontReferenceMapU5BU5D_tFA470305A1935D0EBE0F74758328811439915118*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 L_35;
			L_35 = InterfaceFuncInvoker1< FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m2C38C1D01ADFC930A6D3D7347FBCC1E811B466EF (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 L_2;
		L_2 = InterfaceFuncInvoker1< FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mFCD2A54038776E3951F71F390645766807267DE5 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831));
		FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m1785004310E9CBE7B7AB3212BA94D45F563A488D (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mFCD2A54038776E3951F71F390645766807267DE5(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m07FD564014E69D4B40CE0B12AFAA93929EC83137(__this, ((*(FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m68AD8C2D1BA9FC51DA3959193D79B789D818ABC4 (ReadOnlyCollection_1_tF9BDC7A725517ED0439C01A1532E809C474C0D32* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mFCD2A54038776E3951F71F390645766807267DE5(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mB2559896BC5F11800B0108BEBA9EAB2A6C95EE0F(__this, ((*(FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m9759E4E426E53E8DD9400478BA7D6F81C7045498 (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 ReadOnlyCollection_1_get_Item_m1140A77AD970C4BA0905BBBC9990D0141389AC91 (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 L_2;
		L_2 = InterfaceFuncInvoker1< BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mF080F0FA34F8F5E175F6E4DEDD178B75394CF519 (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mB1F5787AFF61E469135D7C826492721AD3306D11 (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, BlitInfoU5BU5D_t090EAE36AF18528B2F72B1D3BBA4831E32F287BA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		BlitInfoU5BU5D_t090EAE36AF18528B2F72B1D3BBA4831E32F287BA* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< BlitInfoU5BU5D_t090EAE36AF18528B2F72B1D3BBA4831E32F287BA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m9A53384E819CDAFA059ED39C6576E0768FC4A691 (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2B98BD0E648DADFDD364421B9F9FC9936A394B91 (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m95546CBB81EC37D208264CB0855C267AF0F3108C (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 L_2;
		L_2 = InterfaceFuncInvoker1< BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mA7ACF524BEA113BD7316A7A994719B45E71B6432 (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	BlitInfoU5BU5D_t090EAE36AF18528B2F72B1D3BBA4831E32F287BA* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m9759E4E426E53E8DD9400478BA7D6F81C7045498(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((BlitInfoU5BU5D_t090EAE36AF18528B2F72B1D3BBA4831E32F287BA*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		BlitInfoU5BU5D_t090EAE36AF18528B2F72B1D3BBA4831E32F287BA* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		BlitInfoU5BU5D_t090EAE36AF18528B2F72B1D3BBA4831E32F287BA* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< BlitInfoU5BU5D_t090EAE36AF18528B2F72B1D3BBA4831E32F287BA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 L_35;
			L_35 = InterfaceFuncInvoker1< BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mC6CEC9A11949D24A58641BF7DA672BB534306C77 (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 L_2;
		L_2 = InterfaceFuncInvoker1< BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m77E7B5A08971CD505FF41765E78B811AAB31B492 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357));
		BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mC79FE472B90507EB6060FADA994F3B6BF7DBBA0B (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m77E7B5A08971CD505FF41765E78B811AAB31B492(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mF080F0FA34F8F5E175F6E4DEDD178B75394CF519(__this, ((*(BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m11CC29E43CE84BC14316BA7FEE64B488823D11B9 (ReadOnlyCollection_1_tEDA5A8E1827AB831F1A307CC5CFFEDD2E0F2F501* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m77E7B5A08971CD505FF41765E78B811AAB31B492(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m2B98BD0E648DADFDD364421B9F9FC9936A394B91(__this, ((*(BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m9755643A08D11F86D78C24879A20FA6B7A92EF03 (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD ReadOnlyCollection_1_get_Item_m65012F3FFE6E3AEC967987A2C8165310CA1D978A (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD L_2;
		L_2 = InterfaceFuncInvoker1< Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3950355F5CE2667D4D6E45F1236436E1D59D65BA (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mC279D2144EC707AD681A67F40B68FD82860CC28C (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, FrameU5BU5D_tED4B6DE19C37177FEDD77F466E6807E1D5288F25* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		FrameU5BU5D_tED4B6DE19C37177FEDD77F466E6807E1D5288F25* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< FrameU5BU5D_tED4B6DE19C37177FEDD77F466E6807E1D5288F25*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m2DECCFB8C520E1F9F767B1B6DBE52E4F26799F5F (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE665276036AA8B4551F37184CDA5DB0F5FB3E144 (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m06C596AA7A2D53FAA8F654B45BE427C3BD54300B (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD L_2;
		L_2 = InterfaceFuncInvoker1< Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m5DDF220031A533E71194983A622D272D835AC6BE (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	FrameU5BU5D_tED4B6DE19C37177FEDD77F466E6807E1D5288F25* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m9755643A08D11F86D78C24879A20FA6B7A92EF03(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((FrameU5BU5D_tED4B6DE19C37177FEDD77F466E6807E1D5288F25*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		FrameU5BU5D_tED4B6DE19C37177FEDD77F466E6807E1D5288F25* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		FrameU5BU5D_tED4B6DE19C37177FEDD77F466E6807E1D5288F25* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< FrameU5BU5D_tED4B6DE19C37177FEDD77F466E6807E1D5288F25*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD L_35;
			L_35 = InterfaceFuncInvoker1< Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m77C0FE1F8E2110E95D48042BD5D1AF3F2967F09D (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD L_2;
		L_2 = InterfaceFuncInvoker1< Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m8408613E90585C543FF86E0D19765A06036A7DB1 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD));
		Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m8EF9C6555484D25E1BC3481C413AD1C3DC574BE3 (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m8408613E90585C543FF86E0D19765A06036A7DB1(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m3950355F5CE2667D4D6E45F1236436E1D59D65BA(__this, ((*(Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m6EFB70092641BFA5A7B0668F7FD1D3EC49E0AB60 (ReadOnlyCollection_1_t84E63FC18400336175812408C442A552EE840F73* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m8408613E90585C543FF86E0D19765A06036A7DB1(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mE665276036AA8B4551F37184CDA5DB0F5FB3E144(__this, ((*(Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA3718CBDAD334D0C3B3B3D9C2FBFFC64CB9C1280 (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B ReadOnlyCollection_1_get_Item_m8B59DAF06D65CB643DEBC41E31022C94ABFCF201 (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B L_2;
		L_2 = InterfaceFuncInvoker1< TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m226D99000078C09F61A5D23C9D572EEFD2C1F3AB (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m0F0C917FD1406F4F32851B6001728D34FCF8F916 (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, TextureInfoU5BU5D_t0571178EAC2A0DE9A1F27F2C00A9301E04AAFB83* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TextureInfoU5BU5D_t0571178EAC2A0DE9A1F27F2C00A9301E04AAFB83* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< TextureInfoU5BU5D_t0571178EAC2A0DE9A1F27F2C00A9301E04AAFB83*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mE67F3699969AF5E867F200CCB537315190D8F228 (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m38FC28A8D172A809848EBBE17B7593C9A4AC5309 (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m068D9D53938421BE65EC1E68460FE317576DE399 (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B L_2;
		L_2 = InterfaceFuncInvoker1< TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m017BA78B6833B8E2C2CF7825DB54DAC7A82CF0AA (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	TextureInfoU5BU5D_t0571178EAC2A0DE9A1F27F2C00A9301E04AAFB83* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mA3718CBDAD334D0C3B3B3D9C2FBFFC64CB9C1280(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((TextureInfoU5BU5D_t0571178EAC2A0DE9A1F27F2C00A9301E04AAFB83*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		TextureInfoU5BU5D_t0571178EAC2A0DE9A1F27F2C00A9301E04AAFB83* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		TextureInfoU5BU5D_t0571178EAC2A0DE9A1F27F2C00A9301E04AAFB83* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< TextureInfoU5BU5D_t0571178EAC2A0DE9A1F27F2C00A9301E04AAFB83*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B L_35;
			L_35 = InterfaceFuncInvoker1< TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m42D884E04404CA71A624FD38BE1668900821FBBB (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B L_2;
		L_2 = InterfaceFuncInvoker1< TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD22DEE1877768FD46CF1D7BE9E64A9BBF4762858 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B));
		TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m061D2F5226F935C163FEAC10BC96B6061FC7B3B4 (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mD22DEE1877768FD46CF1D7BE9E64A9BBF4762858(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m226D99000078C09F61A5D23C9D572EEFD2C1F3AB(__this, ((*(TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mE47DC91D620407A1DB7FB76011716B2E6E93D88B (ReadOnlyCollection_1_t82FFA6508CB53CD9CD9774F8D35B5FA03F04049E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mD22DEE1877768FD46CF1D7BE9E64A9BBF4762858(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m38FC28A8D172A809848EBBE17B7593C9A4AC5309(__this, ((*(TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1A6CD671F2232BF4A06B207D55F1F568E63926C4 (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 ReadOnlyCollection_1_get_Item_m2C6C2AEE1AE9A0091115A5B1B52040F933BBC1F0 (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 L_2;
		L_2 = InterfaceFuncInvoker1< NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mEB871392DF075F46BCE7069114A25D156DE0073F (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m5E8D9B96E39850B0D8CAD86159F3745023309AC1 (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, NotificationEntryU5BU5D_t51F6D9F2EB943E3F431D8548C24B3A3F4384F5DF* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NotificationEntryU5BU5D_t51F6D9F2EB943E3F431D8548C24B3A3F4384F5DF* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< NotificationEntryU5BU5D_t51F6D9F2EB943E3F431D8548C24B3A3F4384F5DF*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m97295EA4F04B34790290031F2EAEC05D306943EC (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m95340ADEACAB1B65557172787156CAE6656430EF (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m6057F37D0F4ECF4CB39A38FB175D72A9744E5F2F (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 L_2;
		L_2 = InterfaceFuncInvoker1< NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m87833C8DBAF056B1C789951E63F2E05BF16460F0 (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	NotificationEntryU5BU5D_t51F6D9F2EB943E3F431D8548C24B3A3F4384F5DF* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m1A6CD671F2232BF4A06B207D55F1F568E63926C4(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((NotificationEntryU5BU5D_t51F6D9F2EB943E3F431D8548C24B3A3F4384F5DF*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		NotificationEntryU5BU5D_t51F6D9F2EB943E3F431D8548C24B3A3F4384F5DF* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		NotificationEntryU5BU5D_t51F6D9F2EB943E3F431D8548C24B3A3F4384F5DF* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< NotificationEntryU5BU5D_t51F6D9F2EB943E3F431D8548C24B3A3F4384F5DF*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 L_35;
			L_35 = InterfaceFuncInvoker1< NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m5088329BA8ECC1382CE464AB84A4CE66176D4A6C (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 L_2;
		L_2 = InterfaceFuncInvoker1< NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mA9A4BFFC0194840C24FA3236828CF7317CD9520B (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62));
		NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m95CDA9FC2D9E3A971FD0F8DFB1A852787CF65E9E (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mA9A4BFFC0194840C24FA3236828CF7317CD9520B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mEB871392DF075F46BCE7069114A25D156DE0073F(__this, ((*(NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m08014579F904E9226CEE368ED372D2848D86889F (ReadOnlyCollection_1_t8D919055587DC811C686F60DB9B113375F424432* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mA9A4BFFC0194840C24FA3236828CF7317CD9520B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m95340ADEACAB1B65557172787156CAE6656430EF(__this, ((*(NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0AFB680989F7183252C477DD7EB9EF59D9C88ECC (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitData_t5EAB266730389AB27715962670C2512800451841 ReadOnlyCollection_1_get_Item_m5884CA8614092EDE0411FE4E4BA9EE0533AD968C (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RaycastHitData_t5EAB266730389AB27715962670C2512800451841 L_2;
		L_2 = InterfaceFuncInvoker1< RaycastHitData_t5EAB266730389AB27715962670C2512800451841, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m37A8647602E0715AC27FDFF43DABCCEF7701AEAB (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, RaycastHitData_t5EAB266730389AB27715962670C2512800451841 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		RaycastHitData_t5EAB266730389AB27715962670C2512800451841 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RaycastHitData_t5EAB266730389AB27715962670C2512800451841 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m5F082B47628439FCF310B67488B7BAC95F226B6F (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, RaycastHitDataU5BU5D_t98BBA3CE354036B88621172C27ED5C5DD7CB9279* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		RaycastHitDataU5BU5D_t98BBA3CE354036B88621172C27ED5C5DD7CB9279* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< RaycastHitDataU5BU5D_t98BBA3CE354036B88621172C27ED5C5DD7CB9279*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m62AFB23540393AE6D40811F4B02DF2FB51F4BA4B (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE1ABD3A991704C640186283F3DD505E3B9A77BB6 (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, RaycastHitData_t5EAB266730389AB27715962670C2512800451841 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		RaycastHitData_t5EAB266730389AB27715962670C2512800451841 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RaycastHitData_t5EAB266730389AB27715962670C2512800451841 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitData_t5EAB266730389AB27715962670C2512800451841 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m33916FAE71F1DA5215615B4EDDEC7EC00AB57E2B (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RaycastHitData_t5EAB266730389AB27715962670C2512800451841 L_2;
		L_2 = InterfaceFuncInvoker1< RaycastHitData_t5EAB266730389AB27715962670C2512800451841, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mAC87670FB05B0AAEDFA8540073A293C7B7692088 (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	RaycastHitDataU5BU5D_t98BBA3CE354036B88621172C27ED5C5DD7CB9279* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m0AFB680989F7183252C477DD7EB9EF59D9C88ECC(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((RaycastHitDataU5BU5D_t98BBA3CE354036B88621172C27ED5C5DD7CB9279*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		RaycastHitDataU5BU5D_t98BBA3CE354036B88621172C27ED5C5DD7CB9279* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		RaycastHitDataU5BU5D_t98BBA3CE354036B88621172C27ED5C5DD7CB9279* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< RaycastHitDataU5BU5D_t98BBA3CE354036B88621172C27ED5C5DD7CB9279*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			RaycastHitData_t5EAB266730389AB27715962670C2512800451841 L_35;
			L_35 = InterfaceFuncInvoker1< RaycastHitData_t5EAB266730389AB27715962670C2512800451841, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			RaycastHitData_t5EAB266730389AB27715962670C2512800451841 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m330DB679D829648ECF5DEE0E33721487E7FF9595 (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RaycastHitData_t5EAB266730389AB27715962670C2512800451841 L_2;
		L_2 = InterfaceFuncInvoker1< RaycastHitData_t5EAB266730389AB27715962670C2512800451841, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		RaycastHitData_t5EAB266730389AB27715962670C2512800451841 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m052B85911C70FD4FE70D220FF791FAF6C6479F83 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	RaycastHitData_t5EAB266730389AB27715962670C2512800451841 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHitData_t5EAB266730389AB27715962670C2512800451841));
		RaycastHitData_t5EAB266730389AB27715962670C2512800451841 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mAD0F6827C00D83F54DE41A24AF223A40737989B5 (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m052B85911C70FD4FE70D220FF791FAF6C6479F83(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m37A8647602E0715AC27FDFF43DABCCEF7701AEAB(__this, ((*(RaycastHitData_t5EAB266730389AB27715962670C2512800451841*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m6DBCEC9DA9D6432848242D4594243B56DBD7A15A (ReadOnlyCollection_1_t73DCD6C4D5F3100950AD53A9D36C7DFD67E9D0A6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m052B85911C70FD4FE70D220FF791FAF6C6479F83(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mE1ABD3A991704C640186283F3DD505E3B9A77BB6(__this, ((*(RaycastHitData_t5EAB266730389AB27715962670C2512800451841*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m7CC35A27EBA8DF9C76DAF0D135AC0AE03712BBA2 (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A ReadOnlyCollection_1_get_Item_mA312B489F86AA951DB38D5C034BE0AF657B35802 (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A L_2;
		L_2 = InterfaceFuncInvoker1< PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE786437D766F8A28AD7EEEAB775C2747A0BD7592 (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mA646ECD3247649A00D3CB8521887A50578D1DEE1 (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, PoseDataU5BU5D_t2C3BAD03F54ECC8DA545558F23FC7A58A33BD566* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PoseDataU5BU5D_t2C3BAD03F54ECC8DA545558F23FC7A58A33BD566* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< PoseDataU5BU5D_t2C3BAD03F54ECC8DA545558F23FC7A58A33BD566*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m5007174E128BA7AB1116DFA0F0DF84AFB6E9ACBE (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mF845FAB93C4FA2A86FEA19E58ACF92D61B537135 (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m4F2CBB8F39D96C18C618FE8FEF0195E2379F46A0 (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A L_2;
		L_2 = InterfaceFuncInvoker1< PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m2E976DC39802AD8C3AC1CD6FB7F0D3554B43CA1C (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	PoseDataU5BU5D_t2C3BAD03F54ECC8DA545558F23FC7A58A33BD566* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m7CC35A27EBA8DF9C76DAF0D135AC0AE03712BBA2(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((PoseDataU5BU5D_t2C3BAD03F54ECC8DA545558F23FC7A58A33BD566*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		PoseDataU5BU5D_t2C3BAD03F54ECC8DA545558F23FC7A58A33BD566* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		PoseDataU5BU5D_t2C3BAD03F54ECC8DA545558F23FC7A58A33BD566* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< PoseDataU5BU5D_t2C3BAD03F54ECC8DA545558F23FC7A58A33BD566*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A L_35;
			L_35 = InterfaceFuncInvoker1< PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m2C7F0953F52E83FF7E06C20562E2A58D0B2CCC13 (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A L_2;
		L_2 = InterfaceFuncInvoker1< PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mCA22625D9257E2DDB3A7D2F73B68CFCF0FA4CDE9 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A));
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mC15B30D6DF72EBE35621534721CF7C5CAEDAA976 (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mCA22625D9257E2DDB3A7D2F73B68CFCF0FA4CDE9(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mE786437D766F8A28AD7EEEAB775C2747A0BD7592(__this, ((*(PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m9A522E9F3B19491623B01A69AFC02A82EC45D559 (ReadOnlyCollection_1_t2C06CDFE8C8CB84C506B276369EE30DB23D08C00* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mCA22625D9257E2DDB3A7D2F73B68CFCF0FA4CDE9(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mF845FAB93C4FA2A86FEA19E58ACF92D61B537135(__this, ((*(PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE13D12DF114975DD908CD625BAB9AF74B01C75C1 (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 ReadOnlyCollection_1_get_Item_m8209E4FFD38CCF9ADA3BBF23344354C137B3BC99 (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 L_2;
		L_2 = InterfaceFuncInvoker1< UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m4392D985997DFE546274579509012A5F456F6D81 (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m3F761D6A7C3279AE7A0F1B176FF4E73EB2A4EB45 (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, UnitPortPreservationU5BU5D_tDAF6905F32D73AC466BC22BCA9E29E3A14DD2945* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UnitPortPreservationU5BU5D_tDAF6905F32D73AC466BC22BCA9E29E3A14DD2945* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UnitPortPreservationU5BU5D_tDAF6905F32D73AC466BC22BCA9E29E3A14DD2945*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m28B7635EA03814F90CDC88FA05269FB8A0CF31AA (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC3CD699DBC3E9DF379117EF72E71730E06704115 (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mC4780754A13E2996C889388343E8DE17295CD524 (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 L_2;
		L_2 = InterfaceFuncInvoker1< UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m522FA78B851BA268A288710ACA07AB5EF164117A (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UnitPortPreservationU5BU5D_tDAF6905F32D73AC466BC22BCA9E29E3A14DD2945* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mE13D12DF114975DD908CD625BAB9AF74B01C75C1(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UnitPortPreservationU5BU5D_tDAF6905F32D73AC466BC22BCA9E29E3A14DD2945*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UnitPortPreservationU5BU5D_tDAF6905F32D73AC466BC22BCA9E29E3A14DD2945* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UnitPortPreservationU5BU5D_tDAF6905F32D73AC466BC22BCA9E29E3A14DD2945* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UnitPortPreservationU5BU5D_tDAF6905F32D73AC466BC22BCA9E29E3A14DD2945*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 L_35;
			L_35 = InterfaceFuncInvoker1< UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mBE340922C9DB2D6F3478E0B5F7C1915975878FA5 (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 L_2;
		L_2 = InterfaceFuncInvoker1< UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1DFF8D7E2AFA26178259B3EA21D8C812B717AD3F (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4));
		UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mA302170354D82F4AF84B9BAA347AC2A6057A83FB (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m1DFF8D7E2AFA26178259B3EA21D8C812B717AD3F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m4392D985997DFE546274579509012A5F456F6D81(__this, ((*(UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m7E39C250949743A848721BC26F5E868A020C0113 (ReadOnlyCollection_1_tCAA587FF0357FD45F2D376D85DB3C0103961BB80* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m1DFF8D7E2AFA26178259B3EA21D8C812B717AD3F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mC3CD699DBC3E9DF379117EF72E71730E06704115(__this, ((*(UnitPortPreservation_t786FF6E98EAE1CB21E88F11E0C25643BFD1D02F4*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m409F5776BEB430BE72273C433CC1850CD93700A7 (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ReadOnlyCollection_1_get_Item_mC89B10C454A992A80E70F460707E3A96AE6AE1ED (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_2;
		L_2 = InterfaceFuncInvoker1< WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mDF174A6917D3D93C8D7910C91080D253891A1AC5 (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m34129B777F4C0D729638A29403265448F67AAB7E (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m3AE0234C0DA1C378A676F109CCB2CE268E405AB4 (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC7204EA734A903659BFE12EFC2FD358391419441 (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mB501D0309F1CC0BF9203CF948994D438621201BD (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_2;
		L_2 = InterfaceFuncInvoker1< WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m44BBB5AB33E2C90225D466FD249C45ACCD42465C (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m409F5776BEB430BE72273C433CC1850CD93700A7(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< WorkRequestU5BU5D_t1B912B8BE58CF60CAF3A4FEC0A5C0F5BB6D99577*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_35;
			L_35 = InterfaceFuncInvoker1< WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m6177EFE8D98E3D7B7B5475B10665A5B4A0CED868 (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_2;
		L_2 = InterfaceFuncInvoker1< WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m297F49BCB3FD33C8DE274BA917FFF7B708758DB7 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44));
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m7BD692E11177D43D9730EE9D3CAE473ED0901007 (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m297F49BCB3FD33C8DE274BA917FFF7B708758DB7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mDF174A6917D3D93C8D7910C91080D253891A1AC5(__this, ((*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mDC76BD09F10EE0179D32F61859653C019393CD2B (ReadOnlyCollection_1_tB59426B63A6357E19EEB6EAD530B26D450DAAD07* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m297F49BCB3FD33C8DE274BA917FFF7B708758DB7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mC7204EA734A903659BFE12EFC2FD358391419441(__this, ((*(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m5DE9DBF6255A059388D36D97702FA9CDCA1F9E5A (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 ReadOnlyCollection_1_get_Item_mF08311567F3286D4480ECD8B7F8416CB9D5D6BA4 (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 L_2;
		L_2 = InterfaceFuncInvoker1< TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m22B8E4AFE7549E0E424815E99B7AAE95D37AE17A (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m02CAA138AB9B30DF630B6039B0B3DF36D0918012 (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, TextureDataU5BU5D_tF50D03A92133D3F8BD17E52CB70600C6A4BCA5A9* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TextureDataU5BU5D_tF50D03A92133D3F8BD17E52CB70600C6A4BCA5A9* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< TextureDataU5BU5D_tF50D03A92133D3F8BD17E52CB70600C6A4BCA5A9*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mA86FF339472E0464F83BAEB7647CA621BBB0561E (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m48EDD04333A38176B3F28ECB570626948E901066 (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mDDDF57E2DF70318ED81774953D59B73637AA8491 (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 L_2;
		L_2 = InterfaceFuncInvoker1< TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mFE4F1033399CE1D726D02657226897F94664ED66 (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	TextureDataU5BU5D_tF50D03A92133D3F8BD17E52CB70600C6A4BCA5A9* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m5DE9DBF6255A059388D36D97702FA9CDCA1F9E5A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((TextureDataU5BU5D_tF50D03A92133D3F8BD17E52CB70600C6A4BCA5A9*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		TextureDataU5BU5D_tF50D03A92133D3F8BD17E52CB70600C6A4BCA5A9* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		TextureDataU5BU5D_tF50D03A92133D3F8BD17E52CB70600C6A4BCA5A9* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< TextureDataU5BU5D_tF50D03A92133D3F8BD17E52CB70600C6A4BCA5A9*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 L_35;
			L_35 = InterfaceFuncInvoker1< TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mC4F0450381FA36E6AB3E98A64CF205F569313BA8 (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 L_2;
		L_2 = InterfaceFuncInvoker1< TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m41DC571ED10EE6B9368416B94DB4ED4ED4D05021 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119));
		TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m33588F938F6592271B6FE8F392AFD56FB76E68E1 (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m41DC571ED10EE6B9368416B94DB4ED4ED4D05021(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m22B8E4AFE7549E0E424815E99B7AAE95D37AE17A(__this, ((*(TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m94996A4FE2BF66BEE3344FE4D3B13292B1B794C5 (ReadOnlyCollection_1_tDA091C6DB8202FFD6B22E9E1BCA9B26047B4A5A3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m41DC571ED10EE6B9368416B94DB4ED4ED4D05021(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m48EDD04333A38176B3F28ECB570626948E901066(__this, ((*(TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m31B5E7F8E3D51CB370BE05608F7B2C3C11EE0C55 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ReadOnlyCollection_1_get_Item_m5AB43596F44CC288DA87BCA19EC8D9CF352BC830 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_2;
		L_2 = InterfaceFuncInvoker1< AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6057F27D1ACAA9CBF4A9FFC87FDAA2ACC117A809 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m3D5D6472653F81CBBF60F1A4F5FB285FE8FD81F4 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m73A5FD2B15474679BE446FD212642A0DFA1BDACC (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD865206564138ED88C746288B0A9A6EB96555FC2 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m5CAA0592F9EEFE14B9D85A067D8A48E463BD0255 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_2;
		L_2 = InterfaceFuncInvoker1< AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mE829AA0EB6560D334DE747097153F5A357D552D3 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m31B5E7F8E3D51CB370BE05608F7B2C3C11EE0C55(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_35;
			L_35 = InterfaceFuncInvoker1< AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mDA2999BA621C7C5B8E399FFFEBBFEC2075F03CFB (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_2;
		L_2 = InterfaceFuncInvoker1< AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m496DFF37E9CC6DE59F0E2B4E2A5DBEAA32DEAD94 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D));
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m01E51474F8560A28BE0B3BC89A91337DBA7CF7D3 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m496DFF37E9CC6DE59F0E2B4E2A5DBEAA32DEAD94(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m6057F27D1ACAA9CBF4A9FFC87FDAA2ACC117A809(__this, ((*(AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mF018250B690D9925EADF086DD08D674AFB5B8D59 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m496DFF37E9CC6DE59F0E2B4E2A5DBEAA32DEAD94(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mD865206564138ED88C746288B0A9A6EB96555FC2(__this, ((*(AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m15D679310A0AC97586C8124180F5EB3E1D40A2BC (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ReadOnlyCollection_1_get_Item_m6397C9E0F57C3E4112047E50BA57CF877EF7AA5E (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_2;
		L_2 = InterfaceFuncInvoker1< SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9ADA09E692C504A400AF0D8E4BF59A7C3C2C8F93 (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m9CEC885D66A757E55A1BCAAA81EE56C3331F7C80 (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m5281DA7E199DAF2110C2E3AC674BF46ED6E5A909 (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m942BE9C1C9D8A0392F495981442E058E887308CF (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mADAE772B4BD15F8285463DB5CE3C374B3886B620 (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_2;
		L_2 = InterfaceFuncInvoker1< SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mC35A16F6E2DB9422F719776935632AAC1B8CEF43 (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m15D679310A0AC97586C8124180F5EB3E1D40A2BC(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_35;
			L_35 = InterfaceFuncInvoker1< SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m1FF003DF50C41FA0FE8F95E3E98170E1AC8394BB (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_2;
		L_2 = InterfaceFuncInvoker1< SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m948DB26D5A8A2DF64E9700A6DEB6F836B10749A3 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8));
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m4DABD32E7AACFC8A0443D40D2F09D045E7AE944B (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m948DB26D5A8A2DF64E9700A6DEB6F836B10749A3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m9ADA09E692C504A400AF0D8E4BF59A7C3C2C8F93(__this, ((*(SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m85B208EB89FC3FC4D4874377BB2FABD4DDB604AB (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m948DB26D5A8A2DF64E9700A6DEB6F836B10749A3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m942BE9C1C9D8A0392F495981442E058E887308CF(__this, ((*(SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m299B4E260E97612F6BFD1965863F5EDB0D80889F (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ReadOnlyCollection_1_get_Item_m60E6A62D890747F1AC1DC730E0D3FCE9D4E02F01 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_2;
		L_2 = InterfaceFuncInvoker1< SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m705B2717517A6E1493976E0F972CEC791692FF97 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mC1257C5457DDC4F101CB1C6E13C3918EDA840EAA (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mE2C132C56C7624052D3E4DD98373FEC71D0C7CB4 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBE061D69DECDF68D566C15E465E25ECFCE11FCD3 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m10F1544185B2CAC61276C7FC78D4A1E5250030AE (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_2;
		L_2 = InterfaceFuncInvoker1< SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m0AE5422374BE07A750F53B941582E1D7881D19C9 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m299B4E260E97612F6BFD1965863F5EDB0D80889F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_35;
			L_35 = InterfaceFuncInvoker1< SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m2E8461F31879EC0FA0F5D99691AFAFB5A7346225 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_2;
		L_2 = InterfaceFuncInvoker1< SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBF48FC95A670E75A65647A9F7520AEB9AE4A0FE6 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76));
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m64537CE10B51851FBE9771726AFCC8AAF5CF02C8 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mBF48FC95A670E75A65647A9F7520AEB9AE4A0FE6(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m705B2717517A6E1493976E0F972CEC791692FF97(__this, ((*(SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m199CADD8D916A7510EF043D4D33ADE50B0DFFD37 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mBF48FC95A670E75A65647A9F7520AEB9AE4A0FE6(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mBE061D69DECDF68D566C15E465E25ECFCE11FCD3(__this, ((*(SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m05F05C64F32981A1BF2CEC3E7589604A188B612B (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ReadOnlyCollection_1_get_Item_mF2270136C87C6CD47C4ED8B9CB895254931977C9 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_2;
		L_2 = InterfaceFuncInvoker1< UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD887308D8602D0A6C687F8B588F772CB0D0911A2 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mDA466383B01D8262103FE86D1BFABC09CADECA76 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m8F53882B80F14E008D7286F26BBF322554B99DBA (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mCC0B8F0541328E20D9E516ACE2AF53B44AA502ED (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m4FF40A61AEA113EF82D13F16B3B2C6BF18B677E3 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_2;
		L_2 = InterfaceFuncInvoker1< UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m26C1285E73FDD195193E87CAE2B53B9D1237EB84 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m05F05C64F32981A1BF2CEC3E7589604A188B612B(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_35;
			L_35 = InterfaceFuncInvoker1< UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mA86767BE1489730FEEF7C9B2F51CADDCB1AFE68A (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_2;
		L_2 = InterfaceFuncInvoker1< UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBA2972FFD773AA00EC4BAD22D43C97C5FFFD31EA (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484));
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mB58F33AA4E890E1EB6DC1BFAA71B1EAE2F5E5B48 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mBA2972FFD773AA00EC4BAD22D43C97C5FFFD31EA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mD887308D8602D0A6C687F8B588F772CB0D0911A2(__this, ((*(UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m45B400C577803964484B6C2318A986085887DF6E (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mBA2972FFD773AA00EC4BAD22D43C97C5FFFD31EA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mCC0B8F0541328E20D9E516ACE2AF53B44AA502ED(__this, ((*(UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCB408C9C0EF8BB4EAF3BD9D74210EA1BF645DF9F (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ReadOnlyCollection_1_get_Item_mFD65FE8672CF437F4E56553136F3296603743E5B (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_2;
		L_2 = InterfaceFuncInvoker1< VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA07C916646443F7E600B771BA5B6E3276CF6F38D (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m373BF4F61459CBD0614937565D50D38211EC389D (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m627A159A926F95C24D2FC6C0A665BAE6B31C6210 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m24635AF1EE0DBE26C00D1E919C331F3EC3514442 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mF2CBAC673542C78C4E66A0B63AB25F7E23E426F4 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_2;
		L_2 = InterfaceFuncInvoker1< VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mB9E303B104B18F639A07B580FCDCB916D8C5F43A (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mCB408C9C0EF8BB4EAF3BD9D74210EA1BF645DF9F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_35;
			L_35 = InterfaceFuncInvoker1< VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m7FF73F40502F4224B0A39DC1C6E21D7F62ED5320 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_2;
		L_2 = InterfaceFuncInvoker1< VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mCB5B8ABED8FAA81E9313462E91E846577DBF79E7 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8));
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m21250661C6C1891AA59CA1F5DB154974346EB45E (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mCB5B8ABED8FAA81E9313462E91E846577DBF79E7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mA07C916646443F7E600B771BA5B6E3276CF6F38D(__this, ((*(VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mBDF6671029CE751A5B90318650A9E1266C9FFBAC (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mCB5B8ABED8FAA81E9313462E91E846577DBF79E7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m24635AF1EE0DBE26C00D1E919C331F3EC3514442(__this, ((*(VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m95888730659343F372198CD5B3EE35B001150127 (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ReadOnlyCollection_1_get_Item_m7CD152BDDD7716D36C1C41279EC65D85E8CB336E (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_2;
		L_2 = InterfaceFuncInvoker1< PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m25DB18C9E908096B821F4C692B9190E3B812A1FA (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mB72E3ECC1BD7BE6EF41EAB69D61D4D551D5D7B89 (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m25FE1E3664407CBA72B82B60D79E2295FAC8291E (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m4D6C6D23DE1E2EE6057F94BDBD946631CC5B2EBC (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mA5BE02C34F89A35C9EB327E73EB8E920D45F7AD0 (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_2;
		L_2 = InterfaceFuncInvoker1< PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m4D2D02DA14D0D7C5D53BFB7522B954AD7F0258D9 (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m95888730659343F372198CD5B3EE35B001150127(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< PTLightU5BU5D_t9592476161BA9F6C7956249ABC75077F03983DEA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_35;
			L_35 = InterfaceFuncInvoker1< PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m0ED2777C1644BA763D2847C20D0EB95164641148 (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_2;
		L_2 = InterfaceFuncInvoker1< PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE94C5A9A40442783E8EE309CDBA6395F4842EEB3 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778));
		PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m37A23B07BDB72251DDBBBA222C1B0C5A82E3F8CF (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE94C5A9A40442783E8EE309CDBA6395F4842EEB3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m25DB18C9E908096B821F4C692B9190E3B812A1FA(__this, ((*(PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mDC3A7E0D7DDCBBAA2C8CDC52F00594BB83BED3F2 (ReadOnlyCollection_1_t3B7FA21C526038C7FD1E057F004ECA81EF8C6DEF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE94C5A9A40442783E8EE309CDBA6395F4842EEB3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m4D6C6D23DE1E2EE6057F94BDBD946631CC5B2EBC(__this, ((*(PTLight_tBEB70EAD4BA181C3FDAFE151BEB34830CFF92778*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCB4FF2AFAA94D01923F9242ACB66F817F7CF18C7 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ReadOnlyCollection_1_get_Item_m4534A86754FC3150BB56EE056CF44694CFD57C47 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_2;
		L_2 = InterfaceFuncInvoker1< XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m116AE421F0EB30927F6725D62792FFA5A6065627 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m8AA5CBAE562679AFCE7394F17B403AAF1B7890E2 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m183CC0AE8D94E74219F7F9C2466D2F7804BA497B (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mF523F5C22B1C3DFB9577177B1C50F9DC3B9704C2 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m00D2C57ECBF88B874CB68F5C81534469F56A4FEF (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_2;
		L_2 = InterfaceFuncInvoker1< XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m4C097801325D2332FC1A226D23825CFF771B6ED6 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mCB4FF2AFAA94D01923F9242ACB66F817F7CF18C7(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_35;
			L_35 = InterfaceFuncInvoker1< XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mEA0B17247D97DD5D3CB64691624A04D50BCA99A1 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_2;
		L_2 = InterfaceFuncInvoker1< XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC5B4A17FCA21C2DF1F66767E828535AD34B90513 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD));
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mBD795131F32122B764751DC7B95C0ED36D0371AA (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC5B4A17FCA21C2DF1F66767E828535AD34B90513(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m116AE421F0EB30927F6725D62792FFA5A6065627(__this, ((*(XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mCCDA3835E895D0768BB7B32D130DDF9C4FD557C8 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC5B4A17FCA21C2DF1F66767E828535AD34B90513(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mF523F5C22B1C3DFB9577177B1C50F9DC3B9704C2(__this, ((*(XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBCA2EE72377AB6EC0E4641B1D12026B5333268CE (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 ReadOnlyCollection_1_get_Item_m9FE46389DC27453555E588F9A10D803C6D3B1E1D (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 L_2;
		L_2 = InterfaceFuncInvoker1< AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m675B455613C954C02AFAF1510FA04B3FC256E279 (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mDB1DA2ADF16072B24E62E1DECA8490544C802081 (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, AotCompilationU5BU5D_t40B040865E1C3D9272C7135830810B4F31327FCC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		AotCompilationU5BU5D_t40B040865E1C3D9272C7135830810B4F31327FCC* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< AotCompilationU5BU5D_t40B040865E1C3D9272C7135830810B4F31327FCC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mFA424CEE852079E0B6DCAE7B8D826241FCE1912D (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m47E0AD9DAF851871758572465D8585553D7FBAA7 (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mCE69E0963C1F672EA9589158AB15A2F07DA90BBB (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 L_2;
		L_2 = InterfaceFuncInvoker1< AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mE7641B6B98409C7DDF223BB0DFB6DE9FE245D23A (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	AotCompilationU5BU5D_t40B040865E1C3D9272C7135830810B4F31327FCC* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mBCA2EE72377AB6EC0E4641B1D12026B5333268CE(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((AotCompilationU5BU5D_t40B040865E1C3D9272C7135830810B4F31327FCC*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		AotCompilationU5BU5D_t40B040865E1C3D9272C7135830810B4F31327FCC* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		AotCompilationU5BU5D_t40B040865E1C3D9272C7135830810B4F31327FCC* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< AotCompilationU5BU5D_t40B040865E1C3D9272C7135830810B4F31327FCC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 L_35;
			L_35 = InterfaceFuncInvoker1< AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mE9701F3069C043E26F555EC1D4366A2DCF57F422 (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 L_2;
		L_2 = InterfaceFuncInvoker1< AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5C117EA0A998E2211CD0904DFCA1A117CB6D4B29 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440));
		AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mA66BB32C22ABA8B26BA097096B17A44F43853FA2 (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m5C117EA0A998E2211CD0904DFCA1A117CB6D4B29(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m675B455613C954C02AFAF1510FA04B3FC256E279(__this, ((*(AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m23E59FFD3B1A69DE20666F647516C27FAB6FF6C8 (ReadOnlyCollection_1_t79289FF8D78F46DC3FC488CB6C292A8393A7F172* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m5C117EA0A998E2211CD0904DFCA1A117CB6D4B29(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m47E0AD9DAF851871758572465D8585553D7FBAA7(__this, ((*(AotCompilation_t62080A5BAEE4C051A3D097FBE9042DAEE36E1440*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m33394098C1C040B6577A13565B005D626C626998 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD ReadOnlyCollection_1_get_Item_m96D7E7FCA04DE23EC4C0A0B048D1D754D17EF680 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_2;
		L_2 = InterfaceFuncInvoker1< Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m40807F66AD9634874F484D3B3BD8150C0EBCCC7F (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m8BBE3A087DB60CA97B402960B9B479488A7F2A44 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m2E67C85AF9FCD273304B6B3251A9CF8D3CED0517 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE4DF1F8EB3A5DCA1E96582AFE6D32FACF680CDC5 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mEFD93DD2501C662AC25464CF3837EC25E62626B4 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_2;
		L_2 = InterfaceFuncInvoker1< Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m422248984A15878B68673C6C418627AC7B44C550 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m33394098C1C040B6577A13565B005D626C626998(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_35;
			L_35 = InterfaceFuncInvoker1< Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m298759261315F8DE274C96B1F78C3A034283A1D8 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_2;
		L_2 = InterfaceFuncInvoker1< Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mAC5EAC32404917AD2C3C5618AB0234A151B5D2BC (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD));
		Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m66710E6D746B175AD0069E2AFA232FE88289003F (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mAC5EAC32404917AD2C3C5618AB0234A151B5D2BC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m40807F66AD9634874F484D3B3BD8150C0EBCCC7F(__this, ((*(Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mFCF04E1876A1EEB964C6E7CB317819C2704CEB5E (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mAC5EAC32404917AD2C3C5618AB0234A151B5D2BC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mE4DF1F8EB3A5DCA1E96582AFE6D32FACF680CDC5(__this, ((*(Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8458978F11950358DAF515D9793F94E96E164867 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E ReadOnlyCollection_1_get_Item_m27C60ADC9D3F27B6DE1E527CB213B2F315F09971 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_2;
		L_2 = InterfaceFuncInvoker1< VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE296E176CF781CFBEDEA890CD7B7438707C5CBC2 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m242D80A80BCA864DE06422CE7A0AD846E91870C3 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mBCFE48F26F4626AE0ECC7E048A8CE902E619C243 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m25AC6AFADC9DA3C7616FB3DF2538489069FE82FF (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m79AFAF6B4C025D04CED3F7A6CEEE4C0AEDF09FC0 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_2;
		L_2 = InterfaceFuncInvoker1< VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mC52C7CC07686EB43525D65DC943ACD1CF6E38106 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m8458978F11950358DAF515D9793F94E96E164867(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< VolumeParameterChainU5BU5D_t0474622D9FD8B1CC198D56824468949D1E1C680F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_35;
			L_35 = InterfaceFuncInvoker1< VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m1B4F3750ED4A1C2557520A532E4AE71F1F78870E (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_2;
		L_2 = InterfaceFuncInvoker1< VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0F15E0EC055DA3F521E73184206A61A28D6E1C0F (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E));
		VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m30D3408DB81CC07D32C804A176F112FD8627B192 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m0F15E0EC055DA3F521E73184206A61A28D6E1C0F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mE296E176CF781CFBEDEA890CD7B7438707C5CBC2(__this, ((*(VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m70B38A80F2FAF67F7336339F89B2A3851478DA77 (ReadOnlyCollection_1_t94E1EAD664D431DAF5233CA9EF20FF855C992227* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m0F15E0EC055DA3F521E73184206A61A28D6E1C0F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m25AC6AFADC9DA3C7616FB3DF2538489069FE82FF(__this, ((*(VolumeParameterChain_tF0AF946FA26C5D61B2713BA220DD70D041EAA35E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCFEB25EF1344B976A050CB6937362A3F5DF0199A (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ReadOnlyCollection_1_get_Item_mB4FBA6653B45B885F77168D2A31246E86A61239C (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_2;
		L_2 = InterfaceFuncInvoker1< ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3CAC4C8BA133B39A5BA9FA0A1E0E711E09BD7694 (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m98B2AA9918F58E13BC7615C283CD2A2B5AC5BA2F (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mAA1BF20823EFD08F455F9177A2BADBCF07470285 (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE8080B23EA1AD670E7D7D77D172A6973A222ED2C (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mD2A608FF40630292908E8D69A6102C27001FC717 (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_2;
		L_2 = InterfaceFuncInvoker1< ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mCF1AC1CDAFDA110866DACF9EE9A70AEC9AA0BE4D (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mCFEB25EF1344B976A050CB6937362A3F5DF0199A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< ContextMenuItemU5BU5D_tFD4FC81929646BCD206377E2AC8E290E93FEE279*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_35;
			L_35 = InterfaceFuncInvoker1< ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m8EAA569D28A7BEE2BF68701BDCE7E3F7230F0A39 (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_2;
		L_2 = InterfaceFuncInvoker1< ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m3A0010FDAC2908AF80DDEB4BA4458869F0FE9F8F (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9));
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m67E991E768D997905AAE39961F6EE846E0859535 (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m3A0010FDAC2908AF80DDEB4BA4458869F0FE9F8F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m3CAC4C8BA133B39A5BA9FA0A1E0E711E09BD7694(__this, ((*(ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mDE2CF32E3C5F436DD6FA819744A0876F36859728 (ReadOnlyCollection_1_t4E57872B64C17ACE2E87B5BBEEB28AB5B627DDBC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m3A0010FDAC2908AF80DDEB4BA4458869F0FE9F8F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mE8080B23EA1AD670E7D7D77D172A6973A222ED2C(__this, ((*(ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m88DC99D667337D16893CDF63694D22FEAF331E05 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ReadOnlyCollection_1_get_Item_m0A91A846BBC91E711D2FD276F926C8622F725207 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_2;
		L_2 = InterfaceFuncInvoker1< LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9FE5CCC2B059229D4C97248D4F5E82C20ECB5FBE (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m2E2F7FE9FE98257542D040CCB5A505040BB765DD (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m77826D7B702325BB85B22D685A41A3BDBF2E6DFE (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m093DAAF13F65B6DE09B24D00F36FCC13F61E6E15 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m00749260A028B5DAE550D78E7C08AA80CB178383 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_2;
		L_2 = InterfaceFuncInvoker1< LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m97E025565D89BA957D0D7595F9930CB1EBA802FD (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m88DC99D667337D16893CDF63694D22FEAF331E05(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_35;
			L_35 = InterfaceFuncInvoker1< LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m91FB5557DA051340EECCD4F9A13275A509B5379B (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_2;
		L_2 = InterfaceFuncInvoker1< LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E692C71C0193F22ACD65EEFBA4ECA75E5C53AAD (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6));
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m07AAC581ACA363E09C760153D0F5634069AAEF43 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9E692C71C0193F22ACD65EEFBA4ECA75E5C53AAD(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m9FE5CCC2B059229D4C97248D4F5E82C20ECB5FBE(__this, ((*(LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m28EE46B044CC3F881E8EEF91F1FB3C37C601376C (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9E692C71C0193F22ACD65EEFBA4ECA75E5C53AAD(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m093DAAF13F65B6DE09B24D00F36FCC13F61E6E15(__this, ((*(LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m283266AC4D77DC2424BDBD9CB125A1A61AB55E1C (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ReadOnlyCollection_1_get_Item_m7AC6E00BD2F6EA75A1E1B09ED4B82A4098110EF3 (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_2;
		L_2 = InterfaceFuncInvoker1< InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m7535255C244884FCE69E71A597A10D82C38A21AB (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mA1B55098F63BA27BE711D1D31130C38B32CB2736 (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mDAEDE4966E056491EDD88CFC26EDCADE3C46EA26 (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m07CEF5EB192EFDA22EC079165EEE0F82A03E5FD7 (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m1B2ADAE698787A805757D5552B8621296703F2E9 (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_2;
		L_2 = InterfaceFuncInvoker1< InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m9742AA735CF66DE2EBB0A96F4D32E09171B49041 (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m283266AC4D77DC2424BDBD9CB125A1A61AB55E1C(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< InstructionViewU5BU5D_t2A200DCB627CD67C1DDBD22595A355894F2646A3*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_35;
			L_35 = InterfaceFuncInvoker1< InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m24710EB1D21C4B8F4BB3D9D2056EFCB3DE939181 (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_2;
		L_2 = InterfaceFuncInvoker1< InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD7979063F69DBCBBA075F88868B40DE92ED347FC (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D));
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mC2D64D9B1CEC419CEF540449FBC051217E2AA963 (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mD7979063F69DBCBBA075F88868B40DE92ED347FC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m7535255C244884FCE69E71A597A10D82C38A21AB(__this, ((*(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mF41F8CBA905BB1AB7C399429BF5691110460D2BB (ReadOnlyCollection_1_tB919AFBB5D00764975FBCFA46BD779234DFFA466* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mD7979063F69DBCBBA075F88868B40DE92ED347FC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m07CEF5EB192EFDA22EC079165EEE0F82A03E5FD7(__this, ((*(InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m818A3E47FE33091DD1275D2DFDF70695E715E185 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ReadOnlyCollection_1_get_Item_m6EB60D34CA0BE21AE6C2908D8CE1058DEFEC7ACC (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_2;
		L_2 = InterfaceFuncInvoker1< PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3006B42AEF364FAED734490926CA034ED5348569 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m2D5B34537E9E88D61CE6DE65DA8E4ED641EB3412 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m21221C7CFD70D8A1E5963C9CDB0967B1361B8862 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m4D42E127F9A2F6A6D223785F8CA656A4930B87C2 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mF564FD5A7A7060A271DCFBBC8A415AB7A76F20C1 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_2;
		L_2 = InterfaceFuncInvoker1< PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mF9EA85ACDC0EF457938D363BAFC351F38291161D (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m818A3E47FE33091DD1275D2DFDF70695E715E185(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< PassDataU5BU5D_tF21A03049926F4AE1289DBF568C76ED64042A9FC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_35;
			L_35 = InterfaceFuncInvoker1< PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mB766727BF7DB38B182F8140AA0BFF30A2876EE26 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_2;
		L_2 = InterfaceFuncInvoker1< PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E090EF8DAC5EB1362F55C11AC2FD29FE307A954 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F));
		PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mBB60F8752EE0A063BE174C1034872A826F05E331 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9E090EF8DAC5EB1362F55C11AC2FD29FE307A954(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m3006B42AEF364FAED734490926CA034ED5348569(__this, ((*(PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mEAFE167288B6716BC550C1AEDEC66E25A61C8E18 (ReadOnlyCollection_1_t5B9BEDC95C484389997D167F070E30505719DE4D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9E090EF8DAC5EB1362F55C11AC2FD29FE307A954(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m4D42E127F9A2F6A6D223785F8CA656A4930B87C2(__this, ((*(PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0730B9BAC8092A41B1C48042F79C306FD18E553F (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ReadOnlyCollection_1_get_Item_mF9FA72847D5DA338D66D016E4FB297385FB9A42E (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_2;
		L_2 = InterfaceFuncInvoker1< ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD6916963F70388076B4D8A005C8C1AC7DB630642 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mA42C7EDA1BAF578D320D80F48E0647C110ADD681 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mB84E20F8BA5119B21FD4984601C9A70C64C57C52 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mEAC3EE66A5CB94BE471210EA64A682C55D8463D0 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mA1A935A7DA00C54303DF2E52B8AFCFC4BA64E51A (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_2;
		L_2 = InterfaceFuncInvoker1< ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m3CC70612B859C690D9C3531703CE753DF1B647EC (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m0730B9BAC8092A41B1C48042F79C306FD18E553F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_35;
			L_35 = InterfaceFuncInvoker1< ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mB71CAA326A4ACDF03E75906564872A478196DBF9 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_2;
		L_2 = InterfaceFuncInvoker1< ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m718A868545EA0ABD0015911A27C3815E8A95752D (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3));
		ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mCE36C4978C8E258E0C77969A66E4C55E374D1CB8 (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m718A868545EA0ABD0015911A27C3815E8A95752D(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mD6916963F70388076B4D8A005C8C1AC7DB630642(__this, ((*(ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m5DADB45967A9C3E8795B4E777233868592A3956E (ReadOnlyCollection_1_t6354AFE67B5ECFE646A867BDA68157E8795ED5B4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m718A868545EA0ABD0015911A27C3815E8A95752D(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mEAC3EE66A5CB94BE471210EA64A682C55D8463D0(__this, ((*(ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8B2AEA509E07E389B797D3576C0DDF9A5551E3A4 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ReadOnlyCollection_1_get_Item_m586F777658B145682E70A3FCE202B5FEE78F8F18 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_2;
		L_2 = InterfaceFuncInvoker1< EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD750C5DD43B49E3369FF1CC3778B43D83F58636E (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mF318B9F02EA7AE7C2734AC064B64ED94C16F8798 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m7C08CE459BEEDC1DF2952F054F69A3482C2433F6 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDA0A610D1FE508DC17DABD5A4D5D861295857416 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m5D48D4159D5115984C187FE5B07D9140556FDA49 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_2;
		L_2 = InterfaceFuncInvoker1< EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m8958097E6E660BACA1709F0424DE966BF89439FD (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m8B2AEA509E07E389B797D3576C0DDF9A5551E3A4(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_35;
			L_35 = InterfaceFuncInvoker1< EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mAC7741CB7BECB294DA1E38E3745C58853F0A197A (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_2;
		L_2 = InterfaceFuncInvoker1< EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC9A90AF46B6E7EC8BC710283B87EB110801FAB1B (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289));
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mC6029EF4ADA5CF37C75A5D189C30F6EEF696996C (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC9A90AF46B6E7EC8BC710283B87EB110801FAB1B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mD750C5DD43B49E3369FF1CC3778B43D83F58636E(__this, ((*(EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mF634A5AA11D90AB73EE09FC2DA892D8C98BD76E1 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC9A90AF46B6E7EC8BC710283B87EB110801FAB1B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mDA0A610D1FE508DC17DABD5A4D5D861295857416(__this, ((*(EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB93E2CFB5B2969AC39C4A63A510317CFDEE6CFF9 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ReadOnlyCollection_1_get_Item_m2873EE6951A9D52360B2983D71A24CBBB412E669 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_2;
		L_2 = InterfaceFuncInvoker1< Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD3065D7A926DDD6807774F528EF0D74C95B73147 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m518D0DA542FB03A5EC3D28A2BA16ECAC2D01DD25 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mC29C91AEC09530EFA2EC4F7CDB86C1F7E2973140 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m26DD8D621F4B82DD8AF033C7ABF8ABC7475D7ADB (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m8E4C2C760903C7EA67FE6FF09C09A49877F3CFE5 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_2;
		L_2 = InterfaceFuncInvoker1< Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m069159C372D25365EDAC10B39048134700316192 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mB93E2CFB5B2969AC39C4A63A510317CFDEE6CFF9(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_35;
			L_35 = InterfaceFuncInvoker1< Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mBE287B5E2719FB5CA2D4CBB5BC113174C63D77DE (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_2;
		L_2 = InterfaceFuncInvoker1< Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m989053EC4E5C8CEDAE6D100C0507BCE7CF6BE8A7 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9));
		Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mA660C38FD0787017894FDFDC334E44CFD2612386 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m989053EC4E5C8CEDAE6D100C0507BCE7CF6BE8A7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mD3065D7A926DDD6807774F528EF0D74C95B73147(__this, ((*(Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m7158231C15FFBB9BFA6D6C619F34E574BDCC76CF (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m989053EC4E5C8CEDAE6D100C0507BCE7CF6BE8A7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m26DD8D621F4B82DD8AF033C7ABF8ABC7475D7ADB(__this, ((*(Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA5768C536204B5BD1FAF1DA63A182D90F8E99A00 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B ReadOnlyCollection_1_get_Item_m629A53464FB7B4FBBB8B011A4E5ABDA2FB236B6C (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_2;
		L_2 = InterfaceFuncInvoker1< RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m75DEDE8EC817491CD64CE8D09BCFBA73BDB72656 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m6D1B02DA65790B10D6AC649CB5BFB02D47B70D95 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m12E9F80E8FBC3968C432691E7BC1C495FB1E362C (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD092C8821B7FC54D44F94C4F3B282D4588DED068 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m1D5EB6438C4221D078C4F7C47FD49C17F44D49E0 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_2;
		L_2 = InterfaceFuncInvoker1< RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m077B6DC74DFC374D67ED0A2123019815AD604BC3 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mA5768C536204B5BD1FAF1DA63A182D90F8E99A00(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_35;
			L_35 = InterfaceFuncInvoker1< RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mA0918F854D8301692ABD5FC09118B33565AB5510 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_2;
		L_2 = InterfaceFuncInvoker1< RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1614379187C193FBC11C8EA68980A7A00B472377 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B));
		RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m03F5113A82A515CBF9586737F10A9A7F2F0F6B9C (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m1614379187C193FBC11C8EA68980A7A00B472377(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m75DEDE8EC817491CD64CE8D09BCFBA73BDB72656(__this, ((*(RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m7CDCD9BDBD24662DDD49C70C631294B140E295AE (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m1614379187C193FBC11C8EA68980A7A00B472377(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mD092C8821B7FC54D44F94C4F3B282D4588DED068(__this, ((*(RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11153
// Method Definition Index: 11154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m5BD62585103C935CC4B20021B610D1D480BE6F19 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 11155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ReadOnlyCollection_1_get_Item_mDB5391F21C03A541CD55AAEEDE20775B401A9B0F (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_2;
		L_2 = InterfaceFuncInvoker1< PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC061A8BAB0855DF9F3365468CFE7C6897B27DB66 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mDCD28C7482420D9DBA17845A440A0928A68429FA (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mD96010D6ACA8DBED4391371570F48D8592665CE9 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 11159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m91DD8D51560F4B4A6690B2B4DCF114816973A693 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11160
// Method Definition Index: 11161
// Method Definition Index: 11162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mFDAFCF3888D2F84E5825B20EB17C904A41553B12 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_2;
		L_2 = InterfaceFuncInvoker1< PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11163
// Method Definition Index: 11164
// Method Definition Index: 11165
// Method Definition Index: 11166
// Method Definition Index: 11167
// Method Definition Index: 11168
// Method Definition Index: 11169
// Method Definition Index: 11170
// Method Definition Index: 11171
// Method Definition Index: 11172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m47B9326BE9528881CB7336D37DFE3226E23E55FE (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m5BD62585103C935CC4B20021B610D1D480BE6F19(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(49, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_35;
			L_35 = InterfaceFuncInvoker1< PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 11173
// Method Definition Index: 11174
// Method Definition Index: 11175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mFB260CCC81131D42BBC60B530874B1242ACE93FB (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_2;
		L_2 = InterfaceFuncInvoker1< PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 11176
// Method Definition Index: 11177
// Method Definition Index: 11178
// Method Definition Index: 11179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC38E543F0BA4C1931B8FDCDA225802CE37FBD971 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3));
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m8711E20808D5FAEED1F14B95371E43C309AD8B31 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC38E543F0BA4C1931B8FDCDA225802CE37FBD971(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mC061A8BAB0855DF9F3365468CFE7C6897B27DB66(__this, ((*(PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m3A46C0E6A81DD7844E346E5E9A60C5AB27538505 (ReadOnlyCollection_1_tC4D78C5AC16950429CBABEB2E20BE027AD31F434* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC38E543F0BA4C1931B8FDCDA225802CE37FBD971(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m91DD8D51560F4B4A6690B2B4DCF114816973A693(__this, ((*(PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 11182
// Method Definition Index: 11183
// Method Definition Index: 11184
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* ReadOnlyDictionary_2_get_Keys_m3D38C4849A0CBA72A3BEC65E1F8DBBEA252E34F0_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_dictionary;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_1);
		KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* L_3 = (KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
		((  void (*) (KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))(L_3, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		__this->____keys = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_3);
	}

IL_001e:
	{
		KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* L_4 = __this->____keys;
		return L_4;
	}
}
// Method Definition Index: 11205
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* ReadOnlyDictionary_2_get_Values_m8896F49C0945D79E3B09562D2CDC7582F2FD7328_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_dictionary;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_1);
		ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* L_3 = (ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
		((  void (*) (ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(L_3, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		__this->____values = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_3);
	}

IL_001e:
	{
		ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* L_4 = __this->____values;
		return L_4;
	}
}
// Method Definition Index: 11206
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_ContainsKey_mE23701A23F87A60B1BCF98D9292D94BB14ADE64C_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___0_key : &___0_key), SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
// Method Definition Index: 11207
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mBEBC84C1F5E1B11D0450837253B41C389D74FABF_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* L_0;
		L_0 = ((  KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* (*) (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_TryGetValue_m1E53DEAAC0A4FA6EA9A62FD6CAE08C28094D206B_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___0_key : &___0_key), SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
		Il2CppFullySharedGenericAny* L_2 = ___1_value;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(7, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_1: *(void**)L_1), L_2);
		return L_3;
	}
}
// Method Definition Index: 11209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m48CD0FA2868BA87C697AA1271790FCFD0D38ED69_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* L_0;
		L_0 = ((  ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* (*) (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11210
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_get_Item_m7C1B738861802341266E872538431A816B1507A2_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const uint32_t SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___0_key : &___0_key), SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1);
		return;
	}
}
// Method Definition Index: 11211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_m760232769BCF4D542ADC3675CDFB72C49999896D_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_mD8EBB6AFBE0B504354FA2AD3C925191E6609F731_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11213
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Item_m9574ECF6ECDBFB0B78285A7C8AFF03FD2B4013D6_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const uint32_t SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___0_key : &___0_key), SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1);
		return;
	}
}
// Method Definition Index: 11214
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_set_Item_m04BE92540AEBDD07DF1A30D6736F68317A8086B1_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyDictionary_2_get_Count_m570BC218FBF8EE3D7E5551E874DF20638F397CA7_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 11216
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1911E89A7546D2C7F1DD67B61404C8B3D00A36EE_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		il2cpp_codegen_memcpy(L_1, ___0_item, SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1Invoker< bool, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 11217
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mF57A320EF60929F01E8B81CEA0B003EFF819CB79_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 11218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m95064FB8DE29991E11D317B1112868234B687EB6_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)1;
	}
}
// Method Definition Index: 11219
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE36881BC770002B4BFB810CDD84B88FE8500A55F_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Clear_mFB7C727CCCA77F742773A4537B99A5042C48DBF3_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11221
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mD21C9806294C21C66C48BBCC7124FF9F72753A08_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11222
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_GetEnumerator_m3FFC97D7546675C2514644991A7E196D5039E5AB_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 19), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 11223
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_IEnumerable_GetEnumerator_mE28E564A8649570EA9A1CE7107DF7E5FE7A21EFD_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 11224
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_IsCompatibleKey_m4D74774D18B06ACA450E3D355EF8398353B677EE_fshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 11225
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_IDictionary_Add_mFD7ED5C86355FB8D05C1209AFBB8A79B6E0BA797_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11226
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_IDictionary_Clear_mFAE5622F79BFAADCDA0C21C758D1B6AA49D32017_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11227
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_System_Collections_IDictionary_Contains_m24123A7F88C2C800C9037836C4773B3A18A54275_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11228
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_IDictionary_GetEnumerator_m0285CEE9474EAA483097CF2480942BC24E6E3BF7_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___m_dictionary;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_0016:
	{
		RuntimeObject* L_4 = __this->___m_dictionary;
		DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77 L_5;
		memset((&L_5), 0, sizeof(L_5));
		DictionaryEnumerator__ctor_mA1A62AF5ED8AB1B514BBAAAEA9BB3D081C3AA4ED((&L_5), L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		DictionaryEnumerator_tA07B53C91CCF243B3DDF48825CD4F71A6835CD77 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 24), &L_6);
		return (RuntimeObject*)L_7;
	}
}
// Method Definition Index: 11229
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_System_Collections_IDictionary_get_IsFixedSize_mADA2A7D8798B25E2D5AA76D0DB7B68F18BB4FF70_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)1;
	}
}
// Method Definition Index: 11230
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_System_Collections_IDictionary_get_IsReadOnly_mCADBA490FFA90323B8FEDC38CD78141C54CC10DF_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)1;
	}
}
// Method Definition Index: 11231
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_IDictionary_get_Keys_m203F3078EE234F53D90604EFDC9609D2B90B219B_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* L_0;
		L_0 = ((  KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* (*) (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11232
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_IDictionary_Remove_mCC94C51FD44D29ACE9EBBA8BF55A9BED1EE617D8_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11233
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_IDictionary_get_Values_m4592B94799170DC13E0F5BDD221769C548BCD680_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* L_0;
		L_0 = ((  ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* (*) (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11234
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_IDictionary_get_Item_m5EB78E7B173088D4B73585597F8C1AA9A61E2720_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
	const uint32_t SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_3);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), (Il2CppFullySharedGenericAny*)L_5);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13), L_5);
		return L_6;
	}

IL_001a:
	{
		return NULL;
	}
}
// Method Definition Index: 11235
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_IDictionary_set_Item_mCFEB082FB514C3C58C6C908B833CC7FF5B5A6D6A_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 11236
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2_System_Collections_ICollection_CopyTo_mB747FA5969557062AD3E00EF54BC5185C08504E7_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16));
	const uint32_t SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const uint32_t SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13));
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
	const Il2CppFullySharedGenericAny L_53 = L_34;
	const Il2CppFullySharedGenericAny L_55 = alloca(SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3);
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1);
	const Il2CppFullySharedGenericAny L_54 = L_36;
	const Il2CppFullySharedGenericAny L_56 = alloca(SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_30 = alloca(SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_49 = L_30;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_57 = alloca(SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_3 = alloca(SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
	memset(V_3, 0, SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_5 = alloca(SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
	memset(V_5, 0, SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0036:
	{
		int32_t L_8 = ___1_index;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_9 = ___1_index;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = il2cpp_codegen_array_get_length(L_10);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0053;
		}
	}

IL_0043:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0053:
	{
		RuntimeArray* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = il2cpp_codegen_array_get_length(L_13);
		int32_t L_15 = ___1_index;
		int32_t L_16;
		L_16 = ((  int32_t (*) (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_15))) >= ((int32_t)L_16)))
		{
			goto IL_006e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_006e:
	{
		RuntimeArray* L_18 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)IsInstSealed((RuntimeObject*)L_18, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_19 = V_0;
		if (!L_19)
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_20 = __this->___m_dictionary;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_21 = V_0;
		int32_t L_22 = ___1_index;
		NullCheck((RuntimeObject*)L_20);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), (RuntimeObject*)L_20, L_21, L_22);
		return;
	}

IL_0086:
	{
		RuntimeArray* L_23 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_23, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_24 = V_1;
		if (!L_24)
		{
			goto IL_00e2;
		}
	}
	{
		RuntimeObject* L_25 = __this->___m_dictionary;
		NullCheck((RuntimeObject*)L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 19), (RuntimeObject*)L_25);
		V_2 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d8:
			{
				{
					RuntimeObject* L_27 = V_2;
					if (!L_27)
					{
						goto IL_00e1;
					}
				}
				{
					RuntimeObject* L_28 = V_2;
					NullCheck((RuntimeObject*)L_28);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				}

IL_00e1:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00ce_1;
			}

IL_009e_1:
			{
				RuntimeObject* L_29 = V_2;
				NullCheck(L_29);
				InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_29, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_30);
				il2cpp_codegen_memcpy(V_3, L_30, SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
				DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_31 = V_1;
				int32_t L_32 = ___1_index;
				int32_t L_33 = L_32;
				___1_index = ((int32_t)il2cpp_codegen_add(L_33, 1));
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_3, (Il2CppFullySharedGenericAny*)L_34);
				RuntimeObject* L_35 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_34);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_3, (Il2CppFullySharedGenericAny*)L_36);
				RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13), L_36);
				DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_38;
				memset((&L_38), 0, sizeof(L_38));
				DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_38), L_35, L_37, NULL);
				NullCheck(L_31);
				(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_38);
			}

IL_00ce_1:
			{
				RuntimeObject* L_39 = V_2;
				NullCheck((RuntimeObject*)L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_39);
				if (L_40)
				{
					goto IL_009e_1;
				}
			}
			{
				goto IL_0153;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e2:
	{
		RuntimeArray* L_41 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_41, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = V_4;
		if (L_42)
		{
			goto IL_00f9;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_43 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_43, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, method);
	}

IL_00f9:
	{
	}
	try
	{
		{
			RuntimeObject* L_44 = __this->___m_dictionary;
			NullCheck((RuntimeObject*)L_44);
			RuntimeObject* L_45;
			L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 19), (RuntimeObject*)L_44);
			V_2 = L_45;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_013b_1:
				{
					{
						RuntimeObject* L_46 = V_2;
						if (!L_46)
						{
							goto IL_0144_1;
						}
					}
					{
						RuntimeObject* L_47 = V_2;
						NullCheck((RuntimeObject*)L_47);
						InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_47);
					}

IL_0144_1:
					{
						return;
					}
				}
			});
			try
			{
				{
					goto IL_0131_2;
				}

IL_0108_2:
				{
					RuntimeObject* L_48 = V_2;
					NullCheck(L_48);
					InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 28), L_48, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_49);
					il2cpp_codegen_memcpy(V_5, L_49, SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = V_4;
					int32_t L_51 = ___1_index;
					int32_t L_52 = L_51;
					___1_index = ((int32_t)il2cpp_codegen_add(L_52, 1));
					InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_5, (Il2CppFullySharedGenericAny*)L_53);
					InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_5, (Il2CppFullySharedGenericAny*)L_54);
					memset(L_57, 0, SizeOf_KeyValuePair_2_t0239F3881F4C8BE84CFABF0F90DFD19A583B6C95);
					KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_57, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? il2cpp_codegen_memcpy(L_55, L_53, SizeOf_TKey_t6CF24411882409C9C594E33E1DFE77DBD6BBA1B3): *(void**)L_53), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13)) ? il2cpp_codegen_memcpy(L_56, L_54, SizeOf_TValue_t43EDFC56FE2495E1ED9690FFC4BE75C460E759B1): *(void**)L_54), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
					RuntimeObject* L_58 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16), L_57);
					NullCheck(L_50);
					ArrayElementTypeCheck (L_50, L_58);
					(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (RuntimeObject*)L_58);
				}

IL_0131_2:
				{
					RuntimeObject* L_59 = V_2;
					NullCheck((RuntimeObject*)L_59);
					bool L_60;
					L_60 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_59);
					if (L_60)
					{
						goto IL_0108_2;
					}
				}
				{
					goto IL_0145_1;
				}
			}
			catch(Il2CppNativeThreadAbortException&)
			{
				__finallyBlock.SetNativeThreadAbortOccurred();
			}
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0145_1:
		{
			goto IL_0153;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0147;
		}
		throw e;
	}

CATCH_0147:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_62 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_62, method);
	}

IL_0153:
	{
		return;
	}
}
// Method Definition Index: 11237
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyDictionary_2_System_Collections_ICollection_get_IsSynchronized_m775918D51697D5404B898ACB89208A1498A46CB3_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 11238
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_ICollection_get_SyncRoot_mE06D92F6EEC7E9C3245A31B7B75DE348212F59F7_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_dictionary;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_3);
		__this->____syncRoot = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syncRoot), (void*)L_4);
		goto IL_0037;
	}

IL_0025:
	{
		RuntimeObject** L_5 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_6 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_6, NULL);
		RuntimeObject* L_7;
		L_7 = il2cpp_intrinsic_interlocked_compare_exchange(L_5, L_6, NULL);
	}

IL_0037:
	{
		RuntimeObject* L_8 = __this->____syncRoot;
		return L_8;
	}
}
// Method Definition Index: 11239
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m5517F5B43EFB878E6A1DB24A9DA5C2B0A6C2FB65_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* L_0;
		L_0 = ((  KeyCollection_t77347D5E6080A99487985EFA49C429DAC62A4221* (*) (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11240
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mFD4DE52E42982BE1C72AB6314736968DEA611E37_fshared (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* L_0;
		L_0 = ((  ValueCollection_tBD303C20E55147B0A354B6AD8C7779ABBC77D849* (*) (ReadOnlyDictionary_2_tC043257AB947D9A94D4AF6916DD67B7C30D3F734*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return (RuntimeObject*)L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
