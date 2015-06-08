#include "il2cpp_precompiled_header.h"

extern TypeInfo InternalsVisibleToAttribute_t2001_il2cpp_TypeInfo;
extern MethodInfo InternalsVisibleToAttribute__ctor_m4344_MethodInfo;
extern TypeInfo ComVisibleAttribute_t422_il2cpp_TypeInfo;
extern MethodInfo ComVisibleAttribute__ctor_m2094_MethodInfo;
extern TypeInfo AssemblyTrademarkAttribute_t423_il2cpp_TypeInfo;
extern MethodInfo AssemblyTrademarkAttribute__ctor_m2095_MethodInfo;
extern TypeInfo AssemblyCopyrightAttribute_t419_il2cpp_TypeInfo;
extern MethodInfo AssemblyCopyrightAttribute__ctor_m2091_MethodInfo;
extern TypeInfo AssemblyFileVersionAttribute_t420_il2cpp_TypeInfo;
extern MethodInfo AssemblyFileVersionAttribute__ctor_m2092_MethodInfo;
extern TypeInfo AssemblyDescriptionAttribute_t415_il2cpp_TypeInfo;
extern MethodInfo AssemblyDescriptionAttribute__ctor_m2087_MethodInfo;
extern TypeInfo AssemblyProductAttribute_t418_il2cpp_TypeInfo;
extern MethodInfo AssemblyProductAttribute__ctor_m2090_MethodInfo;
extern TypeInfo AssemblyCompanyAttribute_t417_il2cpp_TypeInfo;
extern MethodInfo AssemblyCompanyAttribute__ctor_m2089_MethodInfo;
extern TypeInfo AssemblyConfigurationAttribute_t416_il2cpp_TypeInfo;
extern MethodInfo AssemblyConfigurationAttribute__ctor_m2088_MethodInfo;
extern TypeInfo DebuggableAttribute_t2002_il2cpp_TypeInfo;
extern MethodInfo DebuggableAttribute__ctor_m4345_MethodInfo;
extern TypeInfo CompilationRelaxationsAttribute_t2003_il2cpp_TypeInfo;
extern MethodInfo CompilationRelaxationsAttribute__ctor_m4346_MethodInfo;
extern TypeInfo RuntimeCompatibilityAttribute_t43_il2cpp_TypeInfo;
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m105_MethodInfo;
extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m106_MethodInfo;
extern TypeInfo ExtensionAttribute_t806_il2cpp_TypeInfo;
extern MethodInfo ExtensionAttribute__ctor_m3058_MethodInfo;
extern TypeInfo AssemblyTitleAttribute_t414_il2cpp_TypeInfo;
extern MethodInfo AssemblyTitleAttribute__ctor_m2086_MethodInfo;
void g_Parse_Unity_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t2001 * tmp;
		tmp = (InternalsVisibleToAttribute_t2001 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t2001_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m4344(tmp, il2cpp_codegen_string_new_wrapper("ParsePhonePushSample,PublicKey=0024000004800000940000000602000000240000525341310004000001000100a3af0c56c9e595ff0dffb7b35b7497ada837d85d1506f35f9407db592be6f27566ef87a8fed804a7c837da6f0768643793b1c395b1837b8ee61572ad2dbaaab6b9f5e2a1225b438ba6bd80783b35fa1298fa11813c1a62172162c005b28c2c3af07e30694616bfeaa922093414dd43bf8d6734ba5af4a9a51b85b46d54498ac9"), &InternalsVisibleToAttribute__ctor_m4344_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t422 * tmp;
		tmp = (ComVisibleAttribute_t422 *)il2cpp_codegen_object_new (&ComVisibleAttribute_t422_il2cpp_TypeInfo);
		ComVisibleAttribute__ctor_m2094(tmp, true, &ComVisibleAttribute__ctor_m2094_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTrademarkAttribute_t423 * tmp;
		tmp = (AssemblyTrademarkAttribute_t423 *)il2cpp_codegen_object_new (&AssemblyTrademarkAttribute_t423_il2cpp_TypeInfo);
		AssemblyTrademarkAttribute__ctor_m2095(tmp, il2cpp_codegen_string_new_wrapper(""), &AssemblyTrademarkAttribute__ctor_m2095_MethodInfo);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCopyrightAttribute_t419 * tmp;
		tmp = (AssemblyCopyrightAttribute_t419 *)il2cpp_codegen_object_new (&AssemblyCopyrightAttribute_t419_il2cpp_TypeInfo);
		AssemblyCopyrightAttribute__ctor_m2091(tmp, il2cpp_codegen_string_new_wrapper("Copyright © Parse 2012"), &AssemblyCopyrightAttribute__ctor_m2091_MethodInfo);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2001 * tmp;
		tmp = (InternalsVisibleToAttribute_t2001 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t2001_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m4344(tmp, il2cpp_codegen_string_new_wrapper("ParseTest.Unity"), &InternalsVisibleToAttribute__ctor_m4344_MethodInfo);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2001 * tmp;
		tmp = (InternalsVisibleToAttribute_t2001 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t2001_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m4344(tmp, il2cpp_codegen_string_new_wrapper("Parse,PublicKey=0024000004800000940000000602000000240000525341310004000001000100a3af0c56c9e595ff0dffb7b35b7497ada837d85d1506f35f9407db592be6f27566ef87a8fed804a7c837da6f0768643793b1c395b1837b8ee61572ad2dbaaab6b9f5e2a1225b438ba6bd80783b35fa1298fa11813c1a62172162c005b28c2c3af07e30694616bfeaa922093414dd43bf8d6734ba5af4a9a51b85b46d54498ac9"), &InternalsVisibleToAttribute__ctor_m4344_MethodInfo);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		AssemblyFileVersionAttribute_t420 * tmp;
		tmp = (AssemblyFileVersionAttribute_t420 *)il2cpp_codegen_object_new (&AssemblyFileVersionAttribute_t420_il2cpp_TypeInfo);
		AssemblyFileVersionAttribute__ctor_m2092(tmp, il2cpp_codegen_string_new_wrapper("1.5.0.0"), &AssemblyFileVersionAttribute__ctor_m2092_MethodInfo);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t415 * tmp;
		tmp = (AssemblyDescriptionAttribute_t415 *)il2cpp_codegen_object_new (&AssemblyDescriptionAttribute_t415_il2cpp_TypeInfo);
		AssemblyDescriptionAttribute__ctor_m2087(tmp, il2cpp_codegen_string_new_wrapper("Makes accessing services from Parse native and straightforward."), &AssemblyDescriptionAttribute__ctor_m2087_MethodInfo);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t418 * tmp;
		tmp = (AssemblyProductAttribute_t418 *)il2cpp_codegen_object_new (&AssemblyProductAttribute_t418_il2cpp_TypeInfo);
		AssemblyProductAttribute__ctor_m2090(tmp, il2cpp_codegen_string_new_wrapper("Parse"), &AssemblyProductAttribute__ctor_m2090_MethodInfo);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t417 * tmp;
		tmp = (AssemblyCompanyAttribute_t417 *)il2cpp_codegen_object_new (&AssemblyCompanyAttribute_t417_il2cpp_TypeInfo);
		AssemblyCompanyAttribute__ctor_m2089(tmp, il2cpp_codegen_string_new_wrapper(""), &AssemblyCompanyAttribute__ctor_m2089_MethodInfo);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyConfigurationAttribute_t416 * tmp;
		tmp = (AssemblyConfigurationAttribute_t416 *)il2cpp_codegen_object_new (&AssemblyConfigurationAttribute_t416_il2cpp_TypeInfo);
		AssemblyConfigurationAttribute__ctor_m2088(tmp, il2cpp_codegen_string_new_wrapper(""), &AssemblyConfigurationAttribute__ctor_m2088_MethodInfo);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		DebuggableAttribute_t2002 * tmp;
		tmp = (DebuggableAttribute_t2002 *)il2cpp_codegen_object_new (&DebuggableAttribute_t2002_il2cpp_TypeInfo);
		DebuggableAttribute__ctor_m4345(tmp, 2, &DebuggableAttribute__ctor_m4345_MethodInfo);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2001 * tmp;
		tmp = (InternalsVisibleToAttribute_t2001 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t2001_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m4344(tmp, il2cpp_codegen_string_new_wrapper("ParsePushSample,PublicKey=0024000004800000940000000602000000240000525341310004000001000100a3af0c56c9e595ff0dffb7b35b7497ada837d85d1506f35f9407db592be6f27566ef87a8fed804a7c837da6f0768643793b1c395b1837b8ee61572ad2dbaaab6b9f5e2a1225b438ba6bd80783b35fa1298fa11813c1a62172162c005b28c2c3af07e30694616bfeaa922093414dd43bf8d6734ba5af4a9a51b85b46d54498ac9"), &InternalsVisibleToAttribute__ctor_m4344_MethodInfo);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2001 * tmp;
		tmp = (InternalsVisibleToAttribute_t2001 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t2001_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m4344(tmp, il2cpp_codegen_string_new_wrapper("ParseTest.Phone,PublicKey=0024000004800000940000000602000000240000525341310004000001000100a3af0c56c9e595ff0dffb7b35b7497ada837d85d1506f35f9407db592be6f27566ef87a8fed804a7c837da6f0768643793b1c395b1837b8ee61572ad2dbaaab6b9f5e2a1225b438ba6bd80783b35fa1298fa11813c1a62172162c005b28c2c3af07e30694616bfeaa922093414dd43bf8d6734ba5af4a9a51b85b46d54498ac9"), &InternalsVisibleToAttribute__ctor_m4344_MethodInfo);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2001 * tmp;
		tmp = (InternalsVisibleToAttribute_t2001 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t2001_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m4344(tmp, il2cpp_codegen_string_new_wrapper("ParseTest.NetFx45,PublicKey=0024000004800000940000000602000000240000525341310004000001000100a3af0c56c9e595ff0dffb7b35b7497ada837d85d1506f35f9407db592be6f27566ef87a8fed804a7c837da6f0768643793b1c395b1837b8ee61572ad2dbaaab6b9f5e2a1225b438ba6bd80783b35fa1298fa11813c1a62172162c005b28c2c3af07e30694616bfeaa922093414dd43bf8d6734ba5af4a9a51b85b46d54498ac9"), &InternalsVisibleToAttribute__ctor_m4344_MethodInfo);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2001 * tmp;
		tmp = (InternalsVisibleToAttribute_t2001 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t2001_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m4344(tmp, il2cpp_codegen_string_new_wrapper("ParseTest.WinRT,PublicKey=0024000004800000940000000602000000240000525341310004000001000100a3af0c56c9e595ff0dffb7b35b7497ada837d85d1506f35f9407db592be6f27566ef87a8fed804a7c837da6f0768643793b1c395b1837b8ee61572ad2dbaaab6b9f5e2a1225b438ba6bd80783b35fa1298fa11813c1a62172162c005b28c2c3af07e30694616bfeaa922093414dd43bf8d6734ba5af4a9a51b85b46d54498ac9"), &InternalsVisibleToAttribute__ctor_m4344_MethodInfo);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2001 * tmp;
		tmp = (InternalsVisibleToAttribute_t2001 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t2001_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m4344(tmp, il2cpp_codegen_string_new_wrapper("Parse.Phone,PublicKey=0024000004800000940000000602000000240000525341310004000001000100a3af0c56c9e595ff0dffb7b35b7497ada837d85d1506f35f9407db592be6f27566ef87a8fed804a7c837da6f0768643793b1c395b1837b8ee61572ad2dbaaab6b9f5e2a1225b438ba6bd80783b35fa1298fa11813c1a62172162c005b28c2c3af07e30694616bfeaa922093414dd43bf8d6734ba5af4a9a51b85b46d54498ac9"), &InternalsVisibleToAttribute__ctor_m4344_MethodInfo);
		cache->attributes[16] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2001 * tmp;
		tmp = (InternalsVisibleToAttribute_t2001 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t2001_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m4344(tmp, il2cpp_codegen_string_new_wrapper("Parse.NetFx45,PublicKey=0024000004800000940000000602000000240000525341310004000001000100a3af0c56c9e595ff0dffb7b35b7497ada837d85d1506f35f9407db592be6f27566ef87a8fed804a7c837da6f0768643793b1c395b1837b8ee61572ad2dbaaab6b9f5e2a1225b438ba6bd80783b35fa1298fa11813c1a62172162c005b28c2c3af07e30694616bfeaa922093414dd43bf8d6734ba5af4a9a51b85b46d54498ac9"), &InternalsVisibleToAttribute__ctor_m4344_MethodInfo);
		cache->attributes[17] = (Il2CppObject*)tmp;
	}
	{
		CompilationRelaxationsAttribute_t2003 * tmp;
		tmp = (CompilationRelaxationsAttribute_t2003 *)il2cpp_codegen_object_new (&CompilationRelaxationsAttribute_t2003_il2cpp_TypeInfo);
		CompilationRelaxationsAttribute__ctor_m4346(tmp, 8, &CompilationRelaxationsAttribute__ctor_m4346_MethodInfo);
		cache->attributes[18] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t43 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t43 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t43_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m105(tmp, &RuntimeCompatibilityAttribute__ctor_m105_MethodInfo);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m106(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m106_MethodInfo);
		cache->attributes[19] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t806 * tmp;
		tmp = (ExtensionAttribute_t806 *)il2cpp_codegen_object_new (&ExtensionAttribute_t806_il2cpp_TypeInfo);
		ExtensionAttribute__ctor_m3058(tmp, &ExtensionAttribute__ctor_m3058_MethodInfo);
		cache->attributes[20] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t414 * tmp;
		tmp = (AssemblyTitleAttribute_t414 *)il2cpp_codegen_object_new (&AssemblyTitleAttribute_t414_il2cpp_TypeInfo);
		AssemblyTitleAttribute__ctor_m2086(tmp, il2cpp_codegen_string_new_wrapper("Parse"), &AssemblyTitleAttribute__ctor_m2086_MethodInfo);
		cache->attributes[21] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t2001 * tmp;
		tmp = (InternalsVisibleToAttribute_t2001 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t2001_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m4344(tmp, il2cpp_codegen_string_new_wrapper("Parse.WinRT,PublicKey=0024000004800000940000000602000000240000525341310004000001000100a3af0c56c9e595ff0dffb7b35b7497ada837d85d1506f35f9407db592be6f27566ef87a8fed804a7c837da6f0768643793b1c395b1837b8ee61572ad2dbaaab6b9f5e2a1225b438ba6bd80783b35fa1298fa11813c1a62172162c005b28c2c3af07e30694616bfeaa922093414dd43bf8d6734ba5af4a9a51b85b46d54498ac9"), &InternalsVisibleToAttribute__ctor_m4344_MethodInfo);
		cache->attributes[22] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_Parse_Unity_Assembly__CustomAttributeCache = {
23,
NULL,
&g_Parse_Unity_Assembly_CustomAttributesCacheGenerator
};
