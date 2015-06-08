#include "il2cpp_precompiled_header.h"

extern TypeInfo RuntimeCompatibilityAttribute_t43_il2cpp_TypeInfo;
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m105_MethodInfo;
extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m106_MethodInfo;
void g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RuntimeCompatibilityAttribute_t43 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t43 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t43_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m105(tmp, &RuntimeCompatibilityAttribute__ctor_m105_MethodInfo);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m106(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m106_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_AssemblyU2DCSharp_Assembly__CustomAttributeCache = {
1,
NULL,
&g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator
};
