#include "il2cpp_precompiled_header.h"

extern TypeInfo NeutralResourcesLanguageAttribute_t2742_il2cpp_TypeInfo;
extern MethodInfo NeutralResourcesLanguageAttribute__ctor_m6052_MethodInfo;
extern TypeInfo CLSCompliantAttribute_t2741_il2cpp_TypeInfo;
extern MethodInfo CLSCompliantAttribute__ctor_m6051_MethodInfo;
extern TypeInfo AssemblyInformationalVersionAttribute_t2736_il2cpp_TypeInfo;
extern MethodInfo AssemblyInformationalVersionAttribute__ctor_m6045_MethodInfo;
extern TypeInfo SatelliteContractVersionAttribute_t2737_il2cpp_TypeInfo;
extern MethodInfo SatelliteContractVersionAttribute__ctor_m6046_MethodInfo;
extern TypeInfo AssemblyCopyrightAttribute_t419_il2cpp_TypeInfo;
extern MethodInfo AssemblyCopyrightAttribute__ctor_m2091_MethodInfo;
extern TypeInfo AssemblyProductAttribute_t418_il2cpp_TypeInfo;
extern MethodInfo AssemblyProductAttribute__ctor_m2090_MethodInfo;
extern TypeInfo AssemblyCompanyAttribute_t417_il2cpp_TypeInfo;
extern MethodInfo AssemblyCompanyAttribute__ctor_m2089_MethodInfo;
extern TypeInfo AssemblyDefaultAliasAttribute_t2738_il2cpp_TypeInfo;
extern MethodInfo AssemblyDefaultAliasAttribute__ctor_m6047_MethodInfo;
extern TypeInfo AssemblyDescriptionAttribute_t415_il2cpp_TypeInfo;
extern MethodInfo AssemblyDescriptionAttribute__ctor_m2087_MethodInfo;
extern TypeInfo ComVisibleAttribute_t422_il2cpp_TypeInfo;
extern MethodInfo ComVisibleAttribute__ctor_m2094_MethodInfo;
extern TypeInfo AssemblyTitleAttribute_t414_il2cpp_TypeInfo;
extern MethodInfo AssemblyTitleAttribute__ctor_m2086_MethodInfo;
extern TypeInfo RuntimeCompatibilityAttribute_t43_il2cpp_TypeInfo;
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m105_MethodInfo;
extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m106_MethodInfo;
extern TypeInfo CompilationRelaxationsAttribute_t2003_il2cpp_TypeInfo;
extern MethodInfo CompilationRelaxationsAttribute__ctor_m6048_MethodInfo;
extern TypeInfo DebuggableAttribute_t2002_il2cpp_TypeInfo;
extern MethodInfo DebuggableAttribute__ctor_m4345_MethodInfo;
extern TypeInfo AssemblyDelaySignAttribute_t2740_il2cpp_TypeInfo;
extern MethodInfo AssemblyDelaySignAttribute__ctor_m6050_MethodInfo;
extern TypeInfo AssemblyKeyFileAttribute_t2739_il2cpp_TypeInfo;
extern MethodInfo AssemblyKeyFileAttribute__ctor_m6049_MethodInfo;
extern TypeInfo InternalsVisibleToAttribute_t2001_il2cpp_TypeInfo;
extern MethodInfo InternalsVisibleToAttribute__ctor_m4344_MethodInfo;
extern TypeInfo AssemblyFileVersionAttribute_t420_il2cpp_TypeInfo;
extern MethodInfo AssemblyFileVersionAttribute__ctor_m2092_MethodInfo;
void g_System_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		NeutralResourcesLanguageAttribute_t2742 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t2742 *)il2cpp_codegen_object_new (&NeutralResourcesLanguageAttribute_t2742_il2cpp_TypeInfo);
		NeutralResourcesLanguageAttribute__ctor_m6052(tmp, il2cpp_codegen_string_new_wrapper("en-US"), &NeutralResourcesLanguageAttribute__ctor_m6052_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t2741 * tmp;
		tmp = (CLSCompliantAttribute_t2741 *)il2cpp_codegen_object_new (&CLSCompliantAttribute_t2741_il2cpp_TypeInfo);
		CLSCompliantAttribute__ctor_m6051(tmp, true, &CLSCompliantAttribute__ctor_m6051_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyInformationalVersionAttribute_t2736 * tmp;
		tmp = (AssemblyInformationalVersionAttribute_t2736 *)il2cpp_codegen_object_new (&AssemblyInformationalVersionAttribute_t2736_il2cpp_TypeInfo);
		AssemblyInformationalVersionAttribute__ctor_m6045(tmp, il2cpp_codegen_string_new_wrapper("3.0.40818.0"), &AssemblyInformationalVersionAttribute__ctor_m6045_MethodInfo);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		SatelliteContractVersionAttribute_t2737 * tmp;
		tmp = (SatelliteContractVersionAttribute_t2737 *)il2cpp_codegen_object_new (&SatelliteContractVersionAttribute_t2737_il2cpp_TypeInfo);
		SatelliteContractVersionAttribute__ctor_m6046(tmp, il2cpp_codegen_string_new_wrapper("2.0.5.0"), &SatelliteContractVersionAttribute__ctor_m6046_MethodInfo);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCopyrightAttribute_t419 * tmp;
		tmp = (AssemblyCopyrightAttribute_t419 *)il2cpp_codegen_object_new (&AssemblyCopyrightAttribute_t419_il2cpp_TypeInfo);
		AssemblyCopyrightAttribute__ctor_m2091(tmp, il2cpp_codegen_string_new_wrapper("(c) various MONO Authors"), &AssemblyCopyrightAttribute__ctor_m2091_MethodInfo);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t418 * tmp;
		tmp = (AssemblyProductAttribute_t418 *)il2cpp_codegen_object_new (&AssemblyProductAttribute_t418_il2cpp_TypeInfo);
		AssemblyProductAttribute__ctor_m2090(tmp, il2cpp_codegen_string_new_wrapper("MONO Common language infrastructure"), &AssemblyProductAttribute__ctor_m2090_MethodInfo);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t417 * tmp;
		tmp = (AssemblyCompanyAttribute_t417 *)il2cpp_codegen_object_new (&AssemblyCompanyAttribute_t417_il2cpp_TypeInfo);
		AssemblyCompanyAttribute__ctor_m2089(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), &AssemblyCompanyAttribute__ctor_m2089_MethodInfo);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDefaultAliasAttribute_t2738 * tmp;
		tmp = (AssemblyDefaultAliasAttribute_t2738 *)il2cpp_codegen_object_new (&AssemblyDefaultAliasAttribute_t2738_il2cpp_TypeInfo);
		AssemblyDefaultAliasAttribute__ctor_m6047(tmp, il2cpp_codegen_string_new_wrapper("System.dll"), &AssemblyDefaultAliasAttribute__ctor_m6047_MethodInfo);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t415 * tmp;
		tmp = (AssemblyDescriptionAttribute_t415 *)il2cpp_codegen_object_new (&AssemblyDescriptionAttribute_t415_il2cpp_TypeInfo);
		AssemblyDescriptionAttribute__ctor_m2087(tmp, il2cpp_codegen_string_new_wrapper("System.dll"), &AssemblyDescriptionAttribute__ctor_m2087_MethodInfo);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t422 * tmp;
		tmp = (ComVisibleAttribute_t422 *)il2cpp_codegen_object_new (&ComVisibleAttribute_t422_il2cpp_TypeInfo);
		ComVisibleAttribute__ctor_m2094(tmp, false, &ComVisibleAttribute__ctor_m2094_MethodInfo);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t414 * tmp;
		tmp = (AssemblyTitleAttribute_t414 *)il2cpp_codegen_object_new (&AssemblyTitleAttribute_t414_il2cpp_TypeInfo);
		AssemblyTitleAttribute__ctor_m2086(tmp, il2cpp_codegen_string_new_wrapper("System.dll"), &AssemblyTitleAttribute__ctor_m2086_MethodInfo);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t43 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t43 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t43_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m105(tmp, &RuntimeCompatibilityAttribute__ctor_m105_MethodInfo);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m106(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m106_MethodInfo);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		CompilationRelaxationsAttribute_t2003 * tmp;
		tmp = (CompilationRelaxationsAttribute_t2003 *)il2cpp_codegen_object_new (&CompilationRelaxationsAttribute_t2003_il2cpp_TypeInfo);
		CompilationRelaxationsAttribute__ctor_m6048(tmp, 8, &CompilationRelaxationsAttribute__ctor_m6048_MethodInfo);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		DebuggableAttribute_t2002 * tmp;
		tmp = (DebuggableAttribute_t2002 *)il2cpp_codegen_object_new (&DebuggableAttribute_t2002_il2cpp_TypeInfo);
		DebuggableAttribute__ctor_m4345(tmp, 2, &DebuggableAttribute__ctor_m4345_MethodInfo);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t2740 * tmp;
		tmp = (AssemblyDelaySignAttribute_t2740 *)il2cpp_codegen_object_new (&AssemblyDelaySignAttribute_t2740_il2cpp_TypeInfo);
		AssemblyDelaySignAttribute__ctor_m6050(tmp, true, &AssemblyDelaySignAttribute__ctor_m6050_MethodInfo);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t2739 * tmp;
		tmp = (AssemblyKeyFileAttribute_t2739 *)il2cpp_codegen_object_new (&AssemblyKeyFileAttribute_t2739_il2cpp_TypeInfo);
		AssemblyKeyFileAttribute__ctor_m6049(tmp, il2cpp_codegen_string_new_wrapper("../silverlight.pub"), &AssemblyKeyFileAttribute__ctor_m6049_MethodInfo);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2001 * tmp;
		tmp = (InternalsVisibleToAttribute_t2001 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t2001_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m4344(tmp, il2cpp_codegen_string_new_wrapper("System.Net, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), &InternalsVisibleToAttribute__ctor_m4344_MethodInfo);
		cache->attributes[16] = (Il2CppObject*)tmp;
	}
	{
		AssemblyFileVersionAttribute_t420 * tmp;
		tmp = (AssemblyFileVersionAttribute_t420 *)il2cpp_codegen_object_new (&AssemblyFileVersionAttribute_t420_il2cpp_TypeInfo);
		AssemblyFileVersionAttribute__ctor_m2092(tmp, il2cpp_codegen_string_new_wrapper("3.0.40818.0"), &AssemblyFileVersionAttribute__ctor_m2092_MethodInfo);
		cache->attributes[17] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_System_Assembly__CustomAttributeCache = {
18,
NULL,
&g_System_Assembly_CustomAttributesCacheGenerator
};
