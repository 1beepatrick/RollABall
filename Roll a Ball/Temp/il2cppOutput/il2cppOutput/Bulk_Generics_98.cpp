#include "il2cpp_precompiled_header.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10888_il2cpp_TypeInfo;

extern TypeInfo CipherAlgorithmType_t3038_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t826_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78022_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m3120_MethodInfo;
extern MethodInfo Array_get_Length_m7045_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCipherAlgorithmType_t3038_m90900_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.CipherAlgorithmType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.CipherAlgorithmType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCipherAlgorithmType_t3038_m90900 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78017_MethodInfo;
 void InternalEnumerator_1__ctor_m78017 (InternalEnumerator_1_t10888 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78018_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78018 (InternalEnumerator_1_t10888 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78019_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78019 (InternalEnumerator_1_t10888 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78022(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78022_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CipherAlgorithmType_t3038_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78020_MethodInfo;
 void InternalEnumerator_1_Dispose_m78020 (InternalEnumerator_1_t10888 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78021_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78021 (InternalEnumerator_1_t10888 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7045(L_1, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78022 (InternalEnumerator_1_t10888 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t826 * L_1 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_1, (String_t*) &_stringLiteral2022, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t826 * L_3 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_3, (String_t*) &_stringLiteral2023, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7045(L_5, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisCipherAlgorithmType_t3038_m90900(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCipherAlgorithmType_t3038_m90900_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10888____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10888_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10888, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10888____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10888_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10888, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10888_FieldInfos[] =
{
	&InternalEnumerator_1_t10888____array_0_FieldInfo,
	&InternalEnumerator_1_t10888____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10888____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10888_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78019_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10888____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10888_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78022_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10888_PropertyInfos[] =
{
	&InternalEnumerator_1_t10888____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10888____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10888_InternalEnumerator_1__ctor_m78017_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78017_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78017_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78017/* method */
	, &InternalEnumerator_1_t10888_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10888_InternalEnumerator_1__ctor_m78017_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78017_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78018_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78018_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78018/* method */
	, &InternalEnumerator_1_t10888_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78018_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78019_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78019_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78019/* method */
	, &InternalEnumerator_1_t10888_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78019_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78020_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78020_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78020/* method */
	, &InternalEnumerator_1_t10888_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78020_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78021_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78021_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78021/* method */
	, &InternalEnumerator_1_t10888_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78021_GenericMethod/* genericMethod */

};
extern Il2CppType CipherAlgorithmType_t3038_0_0_0;
extern void* RuntimeInvoker_CipherAlgorithmType_t3038 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78022_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78022_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78022/* method */
	, &InternalEnumerator_1_t10888_il2cpp_TypeInfo/* declaring_type */
	, &CipherAlgorithmType_t3038_0_0_0/* return_type */
	, RuntimeInvoker_CipherAlgorithmType_t3038/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78022_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10888_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78017_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78018_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78019_MethodInfo,
	&InternalEnumerator_1_Dispose_m78020_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78021_MethodInfo,
	&InternalEnumerator_1_get_Current_m78022_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m59_MethodInfo;
extern MethodInfo Object_Finalize_m50_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m60_MethodInfo;
extern MethodInfo ValueType_ToString_m61_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10888_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78019_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78021_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78018_MethodInfo,
	&InternalEnumerator_1_Dispose_m78020_MethodInfo,
	&InternalEnumerator_1_get_Current_m78022_MethodInfo,
};
extern TypeInfo IEnumerator_t30_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t31_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13025_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t10888_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13025_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10888_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13025_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10888_0_0_0;
extern Il2CppType InternalEnumerator_1_t10888_1_0_0;
extern TypeInfo ValueType_t26_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t10888_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t10888_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10888_MethodInfos/* methods */
	, InternalEnumerator_1_t10888_PropertyInfos/* properties */
	, InternalEnumerator_1_t10888_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10888_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10888_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10888_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10888_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10888_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10888_1_0_0/* this_arg */
	, InternalEnumerator_1_t10888_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10888_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10888)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14541_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
extern MethodInfo ICollection_1_get_Count_m103297_MethodInfo;
static PropertyInfo ICollection_1_t14541____Count_PropertyInfo = 
{
	&ICollection_1_t14541_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103297_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103298_MethodInfo;
static PropertyInfo ICollection_1_t14541____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14541_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103298_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14541_PropertyInfos[] =
{
	&ICollection_1_t14541____Count_PropertyInfo,
	&ICollection_1_t14541____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103297_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_Count()
MethodInfo ICollection_1_get_Count_m103297_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14541_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103297_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103298_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103298_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14541_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103298_GenericMethod/* genericMethod */

};
extern Il2CppType CipherAlgorithmType_t3038_0_0_0;
extern Il2CppType CipherAlgorithmType_t3038_0_0_0;
static ParameterInfo ICollection_1_t14541_ICollection_1_Add_m103299_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CipherAlgorithmType_t3038_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103299_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Add(T)
MethodInfo ICollection_1_Add_m103299_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14541_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14541_ICollection_1_Add_m103299_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103299_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103300_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Clear()
MethodInfo ICollection_1_Clear_m103300_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14541_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103300_GenericMethod/* genericMethod */

};
extern Il2CppType CipherAlgorithmType_t3038_0_0_0;
static ParameterInfo ICollection_1_t14541_ICollection_1_Contains_m103301_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CipherAlgorithmType_t3038_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103301_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Contains(T)
MethodInfo ICollection_1_Contains_m103301_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14541_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14541_ICollection_1_Contains_m103301_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103301_GenericMethod/* genericMethod */

};
extern Il2CppType CipherAlgorithmTypeU5BU5D_t11568_0_0_0;
extern Il2CppType CipherAlgorithmTypeU5BU5D_t11568_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14541_ICollection_1_CopyTo_m103302_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CipherAlgorithmTypeU5BU5D_t11568_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103302_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103302_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14541_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14541_ICollection_1_CopyTo_m103302_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103302_GenericMethod/* genericMethod */

};
extern Il2CppType CipherAlgorithmType_t3038_0_0_0;
static ParameterInfo ICollection_1_t14541_ICollection_1_Remove_m103303_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CipherAlgorithmType_t3038_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103303_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Remove(T)
MethodInfo ICollection_1_Remove_m103303_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14541_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14541_ICollection_1_Remove_m103303_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103303_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14541_MethodInfos[] =
{
	&ICollection_1_get_Count_m103297_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103298_MethodInfo,
	&ICollection_1_Add_m103299_MethodInfo,
	&ICollection_1_Clear_m103300_MethodInfo,
	&ICollection_1_Contains_m103301_MethodInfo,
	&ICollection_1_CopyTo_m103302_MethodInfo,
	&ICollection_1_Remove_m103303_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t545_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14543_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14541_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14543_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14541_0_0_0;
extern Il2CppType ICollection_1_t14541_1_0_0;
struct ICollection_1_t14541;
extern Il2CppGenericClass ICollection_1_t14541_GenericClass;
TypeInfo ICollection_1_t14541_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14541_MethodInfos/* methods */
	, ICollection_1_t14541_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14541_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14541_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14541_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14541_0_0_0/* byval_arg */
	, &ICollection_1_t14541_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14541_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
extern Il2CppType IEnumerator_1_t13025_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103304_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103304_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14543_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13025_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103304_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14543_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103304_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14543_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14543_0_0_0;
extern Il2CppType IEnumerable_1_t14543_1_0_0;
struct IEnumerable_1_t14543;
extern Il2CppGenericClass IEnumerable_1_t14543_GenericClass;
TypeInfo IEnumerable_1_t14543_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14543_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14543_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14543_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14543_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14543_0_0_0/* byval_arg */
	, &IEnumerable_1_t14543_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14543_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14542_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
extern MethodInfo IList_1_get_Item_m103305_MethodInfo;
extern MethodInfo IList_1_set_Item_m103306_MethodInfo;
static PropertyInfo IList_1_t14542____Item_PropertyInfo = 
{
	&IList_1_t14542_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103305_MethodInfo/* get */
	, &IList_1_set_Item_m103306_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14542_PropertyInfos[] =
{
	&IList_1_t14542____Item_PropertyInfo,
	NULL
};
extern Il2CppType CipherAlgorithmType_t3038_0_0_0;
static ParameterInfo IList_1_t14542_IList_1_IndexOf_m103307_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CipherAlgorithmType_t3038_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103307_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103307_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14542_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14542_IList_1_IndexOf_m103307_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103307_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType CipherAlgorithmType_t3038_0_0_0;
static ParameterInfo IList_1_t14542_IList_1_Insert_m103308_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CipherAlgorithmType_t3038_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103308_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103308_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14542_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14542_IList_1_Insert_m103308_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103308_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14542_IList_1_RemoveAt_m103309_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103309_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103309_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14542_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14542_IList_1_RemoveAt_m103309_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103309_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14542_IList_1_get_Item_m103305_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType CipherAlgorithmType_t3038_0_0_0;
extern void* RuntimeInvoker_CipherAlgorithmType_t3038_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103305_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103305_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14542_il2cpp_TypeInfo/* declaring_type */
	, &CipherAlgorithmType_t3038_0_0_0/* return_type */
	, RuntimeInvoker_CipherAlgorithmType_t3038_Int32_t23/* invoker_method */
	, IList_1_t14542_IList_1_get_Item_m103305_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103305_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType CipherAlgorithmType_t3038_0_0_0;
static ParameterInfo IList_1_t14542_IList_1_set_Item_m103306_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CipherAlgorithmType_t3038_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103306_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103306_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14542_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14542_IList_1_set_Item_m103306_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103306_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14542_MethodInfos[] =
{
	&IList_1_IndexOf_m103307_MethodInfo,
	&IList_1_Insert_m103308_MethodInfo,
	&IList_1_RemoveAt_m103309_MethodInfo,
	&IList_1_get_Item_m103305_MethodInfo,
	&IList_1_set_Item_m103306_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14542_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14541_il2cpp_TypeInfo,
	&IEnumerable_1_t14543_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14542_0_0_0;
extern Il2CppType IList_1_t14542_1_0_0;
struct IList_1_t14542;
extern Il2CppGenericClass IList_1_t14542_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14542_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14542_MethodInfos/* methods */
	, IList_1_t14542_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14542_il2cpp_TypeInfo/* element_class */
	, IList_1_t14542_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14542_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14542_0_0_0/* byval_arg */
	, &IList_1_t14542_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14542_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13026_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Byte[]>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Byte[]>
extern MethodInfo IEnumerator_1_get_Current_m103310_MethodInfo;
static PropertyInfo IEnumerator_1_t13026____Current_PropertyInfo = 
{
	&IEnumerator_1_t13026_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103310_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13026_PropertyInfos[] =
{
	&IEnumerator_1_t13026____Current_PropertyInfo,
	NULL
};
extern Il2CppType ByteU5BU5D_t433_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103310_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Byte[]>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103310_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13026_il2cpp_TypeInfo/* declaring_type */
	, &ByteU5BU5D_t433_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103310_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13026_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103310_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13026_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13026_0_0_0;
extern Il2CppType IEnumerator_1_t13026_1_0_0;
struct IEnumerator_1_t13026;
extern Il2CppGenericClass IEnumerator_1_t13026_GenericClass;
TypeInfo IEnumerator_1_t13026_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13026_MethodInfos/* methods */
	, IEnumerator_1_t13026_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13026_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13026_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13026_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13026_0_0_0/* byval_arg */
	, &IEnumerator_1_t13026_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13026_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10889_il2cpp_TypeInfo;

extern TypeInfo ByteU5BU5D_t433_il2cpp_TypeInfo;
extern TypeInfo Byte_t779_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78028_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisByteU5BU5D_t433_m90911_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m79431_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m79431(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Byte[]>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Byte[]>(System.Int32)
#define Array_InternalArray__get_Item_TisByteU5BU5D_t433_m90911(__this, p0, method) (ByteU5BU5D_t433*)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Byte[]>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Byte[]>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Byte[]>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Byte[]>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Byte[]>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Byte[]>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Byte[]>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10889____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10889_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10889, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10889____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10889_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10889, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10889_FieldInfos[] =
{
	&InternalEnumerator_1_t10889____array_0_FieldInfo,
	&InternalEnumerator_1_t10889____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78025_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10889____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10889_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78025_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10889____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10889_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78028_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10889_PropertyInfos[] =
{
	&InternalEnumerator_1_t10889____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10889____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10889_InternalEnumerator_1__ctor_m78023_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78023_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Byte[]>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78023_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10889_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10889_InternalEnumerator_1__ctor_m78023_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78023_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78024_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Byte[]>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78024_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10889_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78024_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78025_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Byte[]>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78025_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10889_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78025_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78026_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Byte[]>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78026_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10889_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78026_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78027_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Byte[]>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78027_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10889_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78027_GenericMethod/* genericMethod */

};
extern Il2CppType ByteU5BU5D_t433_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78028_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Byte[]>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78028_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10889_il2cpp_TypeInfo/* declaring_type */
	, &ByteU5BU5D_t433_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78028_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10889_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78023_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78024_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78025_MethodInfo,
	&InternalEnumerator_1_Dispose_m78026_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78027_MethodInfo,
	&InternalEnumerator_1_get_Current_m78028_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78027_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78024_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78026_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10889_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78025_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78027_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78024_MethodInfo,
	&InternalEnumerator_1_Dispose_m78026_MethodInfo,
	&InternalEnumerator_1_get_Current_m78028_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10889_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13026_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10889_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13026_il2cpp_TypeInfo, 8},
};
extern TypeInfo ByteU5BU5D_t433_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10889_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78028_MethodInfo/* Method Usage */,
	&ByteU5BU5D_t433_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisByteU5BU5D_t433_m90911_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10889_0_0_0;
extern Il2CppType InternalEnumerator_1_t10889_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10889_GenericClass;
TypeInfo InternalEnumerator_1_t10889_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10889_MethodInfos/* methods */
	, InternalEnumerator_1_t10889_PropertyInfos/* properties */
	, InternalEnumerator_1_t10889_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10889_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10889_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10889_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10889_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10889_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10889_1_0_0/* this_arg */
	, InternalEnumerator_1_t10889_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10889_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10889_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10889)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14544_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Byte[]>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Byte[]>
extern MethodInfo ICollection_1_get_Count_m103311_MethodInfo;
static PropertyInfo ICollection_1_t14544____Count_PropertyInfo = 
{
	&ICollection_1_t14544_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103311_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103312_MethodInfo;
static PropertyInfo ICollection_1_t14544____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14544_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103312_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14544_PropertyInfos[] =
{
	&ICollection_1_t14544____Count_PropertyInfo,
	&ICollection_1_t14544____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103311_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Byte[]>::get_Count()
MethodInfo ICollection_1_get_Count_m103311_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14544_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103311_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103312_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103312_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14544_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103312_GenericMethod/* genericMethod */

};
extern Il2CppType ByteU5BU5D_t433_0_0_0;
extern Il2CppType ByteU5BU5D_t433_0_0_0;
static ParameterInfo ICollection_1_t14544_ICollection_1_Add_m103313_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ByteU5BU5D_t433_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103313_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::Add(T)
MethodInfo ICollection_1_Add_m103313_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14544_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14544_ICollection_1_Add_m103313_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103313_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103314_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::Clear()
MethodInfo ICollection_1_Clear_m103314_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14544_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103314_GenericMethod/* genericMethod */

};
extern Il2CppType ByteU5BU5D_t433_0_0_0;
static ParameterInfo ICollection_1_t14544_ICollection_1_Contains_m103315_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ByteU5BU5D_t433_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103315_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::Contains(T)
MethodInfo ICollection_1_Contains_m103315_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14544_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14544_ICollection_1_Contains_m103315_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103315_GenericMethod/* genericMethod */

};
extern Il2CppType ByteU5BU5DU5BU5D_t3117_0_0_0;
extern Il2CppType ByteU5BU5DU5BU5D_t3117_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14544_ICollection_1_CopyTo_m103316_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ByteU5BU5DU5BU5D_t3117_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103316_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103316_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14544_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14544_ICollection_1_CopyTo_m103316_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103316_GenericMethod/* genericMethod */

};
extern Il2CppType ByteU5BU5D_t433_0_0_0;
static ParameterInfo ICollection_1_t14544_ICollection_1_Remove_m103317_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ByteU5BU5D_t433_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103317_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::Remove(T)
MethodInfo ICollection_1_Remove_m103317_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14544_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14544_ICollection_1_Remove_m103317_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103317_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14544_MethodInfos[] =
{
	&ICollection_1_get_Count_m103311_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103312_MethodInfo,
	&ICollection_1_Add_m103313_MethodInfo,
	&ICollection_1_Clear_m103314_MethodInfo,
	&ICollection_1_Contains_m103315_MethodInfo,
	&ICollection_1_CopyTo_m103316_MethodInfo,
	&ICollection_1_Remove_m103317_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14546_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14544_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14546_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14544_0_0_0;
extern Il2CppType ICollection_1_t14544_1_0_0;
struct ICollection_1_t14544;
extern Il2CppGenericClass ICollection_1_t14544_GenericClass;
TypeInfo ICollection_1_t14544_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14544_MethodInfos/* methods */
	, ICollection_1_t14544_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14544_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14544_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14544_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14544_0_0_0/* byval_arg */
	, &ICollection_1_t14544_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14544_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Byte[]>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Byte[]>
extern Il2CppType IEnumerator_1_t13026_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103318_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Byte[]>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103318_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14546_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13026_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103318_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14546_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103318_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14546_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14546_0_0_0;
extern Il2CppType IEnumerable_1_t14546_1_0_0;
struct IEnumerable_1_t14546;
extern Il2CppGenericClass IEnumerable_1_t14546_GenericClass;
TypeInfo IEnumerable_1_t14546_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14546_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14546_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14546_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14546_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14546_0_0_0/* byval_arg */
	, &IEnumerable_1_t14546_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14546_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14545_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Byte[]>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Byte[]>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Byte[]>
extern MethodInfo IList_1_get_Item_m103319_MethodInfo;
extern MethodInfo IList_1_set_Item_m103320_MethodInfo;
static PropertyInfo IList_1_t14545____Item_PropertyInfo = 
{
	&IList_1_t14545_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103319_MethodInfo/* get */
	, &IList_1_set_Item_m103320_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14545_PropertyInfos[] =
{
	&IList_1_t14545____Item_PropertyInfo,
	NULL
};
extern Il2CppType ByteU5BU5D_t433_0_0_0;
static ParameterInfo IList_1_t14545_IList_1_IndexOf_m103321_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ByteU5BU5D_t433_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103321_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Byte[]>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103321_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14545_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14545_IList_1_IndexOf_m103321_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103321_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ByteU5BU5D_t433_0_0_0;
static ParameterInfo IList_1_t14545_IList_1_Insert_m103322_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ByteU5BU5D_t433_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103322_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103322_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14545_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14545_IList_1_Insert_m103322_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103322_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14545_IList_1_RemoveAt_m103323_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103323_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103323_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14545_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14545_IList_1_RemoveAt_m103323_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103323_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14545_IList_1_get_Item_m103319_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType ByteU5BU5D_t433_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103319_GenericMethod;
// T System.Collections.Generic.IList`1<System.Byte[]>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103319_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14545_il2cpp_TypeInfo/* declaring_type */
	, &ByteU5BU5D_t433_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14545_IList_1_get_Item_m103319_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103319_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ByteU5BU5D_t433_0_0_0;
static ParameterInfo IList_1_t14545_IList_1_set_Item_m103320_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ByteU5BU5D_t433_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103320_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103320_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14545_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14545_IList_1_set_Item_m103320_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103320_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14545_MethodInfos[] =
{
	&IList_1_IndexOf_m103321_MethodInfo,
	&IList_1_Insert_m103322_MethodInfo,
	&IList_1_RemoveAt_m103323_MethodInfo,
	&IList_1_get_Item_m103319_MethodInfo,
	&IList_1_set_Item_m103320_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14545_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14544_il2cpp_TypeInfo,
	&IEnumerable_1_t14546_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14545_0_0_0;
extern Il2CppType IList_1_t14545_1_0_0;
struct IList_1_t14545;
extern Il2CppGenericClass IList_1_t14545_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14545_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14545_MethodInfos/* methods */
	, IList_1_t14545_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14545_il2cpp_TypeInfo/* element_class */
	, IList_1_t14545_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14545_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14545_0_0_0/* byval_arg */
	, &IList_1_t14545_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14545_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13028_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.ContentType>
extern MethodInfo IEnumerator_1_get_Current_m103324_MethodInfo;
static PropertyInfo IEnumerator_1_t13028____Current_PropertyInfo = 
{
	&IEnumerator_1_t13028_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103324_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13028_PropertyInfos[] =
{
	&IEnumerator_1_t13028____Current_PropertyInfo,
	NULL
};
extern Il2CppType ContentType_t3053_0_0_0;
extern void* RuntimeInvoker_ContentType_t3053 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103324_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103324_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13028_il2cpp_TypeInfo/* declaring_type */
	, &ContentType_t3053_0_0_0/* return_type */
	, RuntimeInvoker_ContentType_t3053/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103324_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13028_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103324_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13028_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13028_0_0_0;
extern Il2CppType IEnumerator_1_t13028_1_0_0;
struct IEnumerator_1_t13028;
extern Il2CppGenericClass IEnumerator_1_t13028_GenericClass;
TypeInfo IEnumerator_1_t13028_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13028_MethodInfos/* methods */
	, IEnumerator_1_t13028_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13028_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13028_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13028_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13028_0_0_0/* byval_arg */
	, &IEnumerator_1_t13028_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13028_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10890_il2cpp_TypeInfo;

extern TypeInfo ContentType_t3053_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78034_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContentType_t3053_m90922_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.ContentType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.ContentType>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisContentType_t3053_m90922 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78029_MethodInfo;
 void InternalEnumerator_1__ctor_m78029 (InternalEnumerator_1_t10890 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78030_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78030 (InternalEnumerator_1_t10890 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78031_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78031 (InternalEnumerator_1_t10890 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m78034(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78034_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ContentType_t3053_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78032_MethodInfo;
 void InternalEnumerator_1_Dispose_m78032 (InternalEnumerator_1_t10890 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78033_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78033 (InternalEnumerator_1_t10890 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7045(L_1, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m78034 (InternalEnumerator_1_t10890 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t826 * L_1 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_1, (String_t*) &_stringLiteral2022, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t826 * L_3 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_3, (String_t*) &_stringLiteral2023, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7045(L_5, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		uint8_t L_8 = Array_InternalArray__get_Item_TisContentType_t3053_m90922(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisContentType_t3053_m90922_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10890____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10890_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10890, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10890____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10890_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10890, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10890_FieldInfos[] =
{
	&InternalEnumerator_1_t10890____array_0_FieldInfo,
	&InternalEnumerator_1_t10890____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10890____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10890_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78031_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10890____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10890_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78034_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10890_PropertyInfos[] =
{
	&InternalEnumerator_1_t10890____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10890____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10890_InternalEnumerator_1__ctor_m78029_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78029_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78029_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78029/* method */
	, &InternalEnumerator_1_t10890_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10890_InternalEnumerator_1__ctor_m78029_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78029_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78030_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78030_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78030/* method */
	, &InternalEnumerator_1_t10890_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78030_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78031_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78031_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78031/* method */
	, &InternalEnumerator_1_t10890_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78031_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78032_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78032_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78032/* method */
	, &InternalEnumerator_1_t10890_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78032_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78033_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78033_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78033/* method */
	, &InternalEnumerator_1_t10890_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78033_GenericMethod/* genericMethod */

};
extern Il2CppType ContentType_t3053_0_0_0;
extern void* RuntimeInvoker_ContentType_t3053 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78034_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78034_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78034/* method */
	, &InternalEnumerator_1_t10890_il2cpp_TypeInfo/* declaring_type */
	, &ContentType_t3053_0_0_0/* return_type */
	, RuntimeInvoker_ContentType_t3053/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78034_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10890_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78029_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78030_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78031_MethodInfo,
	&InternalEnumerator_1_Dispose_m78032_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78033_MethodInfo,
	&InternalEnumerator_1_get_Current_m78034_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10890_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78031_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78033_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78030_MethodInfo,
	&InternalEnumerator_1_Dispose_m78032_MethodInfo,
	&InternalEnumerator_1_get_Current_m78034_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10890_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13028_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10890_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13028_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10890_0_0_0;
extern Il2CppType InternalEnumerator_1_t10890_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10890_GenericClass;
TypeInfo InternalEnumerator_1_t10890_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10890_MethodInfos/* methods */
	, InternalEnumerator_1_t10890_PropertyInfos/* properties */
	, InternalEnumerator_1_t10890_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10890_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10890_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10890_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10890_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10890_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10890_1_0_0/* this_arg */
	, InternalEnumerator_1_t10890_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10890_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10890)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14547_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>
extern MethodInfo ICollection_1_get_Count_m103325_MethodInfo;
static PropertyInfo ICollection_1_t14547____Count_PropertyInfo = 
{
	&ICollection_1_t14547_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103325_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103326_MethodInfo;
static PropertyInfo ICollection_1_t14547____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14547_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103326_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14547_PropertyInfos[] =
{
	&ICollection_1_t14547____Count_PropertyInfo,
	&ICollection_1_t14547____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103325_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::get_Count()
MethodInfo ICollection_1_get_Count_m103325_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14547_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103325_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103326_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103326_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14547_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103326_GenericMethod/* genericMethod */

};
extern Il2CppType ContentType_t3053_0_0_0;
extern Il2CppType ContentType_t3053_0_0_0;
static ParameterInfo ICollection_1_t14547_ICollection_1_Add_m103327_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContentType_t3053_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103327_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::Add(T)
MethodInfo ICollection_1_Add_m103327_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Byte_t779/* invoker_method */
	, ICollection_1_t14547_ICollection_1_Add_m103327_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103327_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103328_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::Clear()
MethodInfo ICollection_1_Clear_m103328_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103328_GenericMethod/* genericMethod */

};
extern Il2CppType ContentType_t3053_0_0_0;
static ParameterInfo ICollection_1_t14547_ICollection_1_Contains_m103329_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContentType_t3053_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103329_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::Contains(T)
MethodInfo ICollection_1_Contains_m103329_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14547_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Byte_t779/* invoker_method */
	, ICollection_1_t14547_ICollection_1_Contains_m103329_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103329_GenericMethod/* genericMethod */

};
extern Il2CppType ContentTypeU5BU5D_t11569_0_0_0;
extern Il2CppType ContentTypeU5BU5D_t11569_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14547_ICollection_1_CopyTo_m103330_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContentTypeU5BU5D_t11569_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103330_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103330_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14547_ICollection_1_CopyTo_m103330_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103330_GenericMethod/* genericMethod */

};
extern Il2CppType ContentType_t3053_0_0_0;
static ParameterInfo ICollection_1_t14547_ICollection_1_Remove_m103331_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContentType_t3053_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103331_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::Remove(T)
MethodInfo ICollection_1_Remove_m103331_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14547_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Byte_t779/* invoker_method */
	, ICollection_1_t14547_ICollection_1_Remove_m103331_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103331_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14547_MethodInfos[] =
{
	&ICollection_1_get_Count_m103325_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103326_MethodInfo,
	&ICollection_1_Add_m103327_MethodInfo,
	&ICollection_1_Clear_m103328_MethodInfo,
	&ICollection_1_Contains_m103329_MethodInfo,
	&ICollection_1_CopyTo_m103330_MethodInfo,
	&ICollection_1_Remove_m103331_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14549_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14547_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14549_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14547_0_0_0;
extern Il2CppType ICollection_1_t14547_1_0_0;
struct ICollection_1_t14547;
extern Il2CppGenericClass ICollection_1_t14547_GenericClass;
TypeInfo ICollection_1_t14547_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14547_MethodInfos/* methods */
	, ICollection_1_t14547_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14547_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14547_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14547_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14547_0_0_0/* byval_arg */
	, &ICollection_1_t14547_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14547_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.ContentType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.ContentType>
extern Il2CppType IEnumerator_1_t13028_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103332_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.ContentType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103332_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14549_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13028_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103332_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14549_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103332_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14549_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14549_0_0_0;
extern Il2CppType IEnumerable_1_t14549_1_0_0;
struct IEnumerable_1_t14549;
extern Il2CppGenericClass IEnumerable_1_t14549_GenericClass;
TypeInfo IEnumerable_1_t14549_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14549_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14549_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14549_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14549_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14549_0_0_0/* byval_arg */
	, &IEnumerable_1_t14549_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14549_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14548_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>
extern MethodInfo IList_1_get_Item_m103333_MethodInfo;
extern MethodInfo IList_1_set_Item_m103334_MethodInfo;
static PropertyInfo IList_1_t14548____Item_PropertyInfo = 
{
	&IList_1_t14548_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103333_MethodInfo/* get */
	, &IList_1_set_Item_m103334_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14548_PropertyInfos[] =
{
	&IList_1_t14548____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContentType_t3053_0_0_0;
static ParameterInfo IList_1_t14548_IList_1_IndexOf_m103335_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContentType_t3053_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103335_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103335_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14548_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Byte_t779/* invoker_method */
	, IList_1_t14548_IList_1_IndexOf_m103335_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103335_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ContentType_t3053_0_0_0;
static ParameterInfo IList_1_t14548_IList_1_Insert_m103336_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContentType_t3053_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103336_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103336_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14548_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Byte_t779/* invoker_method */
	, IList_1_t14548_IList_1_Insert_m103336_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103336_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14548_IList_1_RemoveAt_m103337_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103337_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103337_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14548_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14548_IList_1_RemoveAt_m103337_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103337_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14548_IList_1_get_Item_m103333_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType ContentType_t3053_0_0_0;
extern void* RuntimeInvoker_ContentType_t3053_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103333_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103333_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14548_il2cpp_TypeInfo/* declaring_type */
	, &ContentType_t3053_0_0_0/* return_type */
	, RuntimeInvoker_ContentType_t3053_Int32_t23/* invoker_method */
	, IList_1_t14548_IList_1_get_Item_m103333_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103333_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ContentType_t3053_0_0_0;
static ParameterInfo IList_1_t14548_IList_1_set_Item_m103334_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContentType_t3053_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103334_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103334_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14548_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Byte_t779/* invoker_method */
	, IList_1_t14548_IList_1_set_Item_m103334_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103334_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14548_MethodInfos[] =
{
	&IList_1_IndexOf_m103335_MethodInfo,
	&IList_1_Insert_m103336_MethodInfo,
	&IList_1_RemoveAt_m103337_MethodInfo,
	&IList_1_get_Item_m103333_MethodInfo,
	&IList_1_set_Item_m103334_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14548_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14547_il2cpp_TypeInfo,
	&IEnumerable_1_t14549_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14548_0_0_0;
extern Il2CppType IList_1_t14548_1_0_0;
struct IList_1_t14548;
extern Il2CppGenericClass IList_1_t14548_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14548_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14548_MethodInfos/* methods */
	, IList_1_t14548_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14548_il2cpp_TypeInfo/* element_class */
	, IList_1_t14548_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14548_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14548_0_0_0/* byval_arg */
	, &IList_1_t14548_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14548_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13030_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
extern MethodInfo IEnumerator_1_get_Current_m103338_MethodInfo;
static PropertyInfo IEnumerator_1_t13030____Current_PropertyInfo = 
{
	&IEnumerator_1_t13030_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103338_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13030_PropertyInfos[] =
{
	&IEnumerator_1_t13030____Current_PropertyInfo,
	NULL
};
extern Il2CppType ExchangeAlgorithmType_t3057_0_0_0;
extern void* RuntimeInvoker_ExchangeAlgorithmType_t3057 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103338_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103338_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13030_il2cpp_TypeInfo/* declaring_type */
	, &ExchangeAlgorithmType_t3057_0_0_0/* return_type */
	, RuntimeInvoker_ExchangeAlgorithmType_t3057/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103338_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13030_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103338_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13030_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13030_0_0_0;
extern Il2CppType IEnumerator_1_t13030_1_0_0;
struct IEnumerator_1_t13030;
extern Il2CppGenericClass IEnumerator_1_t13030_GenericClass;
TypeInfo IEnumerator_1_t13030_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13030_MethodInfos/* methods */
	, IEnumerator_1_t13030_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13030_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13030_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13030_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13030_0_0_0/* byval_arg */
	, &IEnumerator_1_t13030_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13030_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10891_il2cpp_TypeInfo;

extern TypeInfo ExchangeAlgorithmType_t3057_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78040_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisExchangeAlgorithmType_t3057_m90933_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisExchangeAlgorithmType_t3057_m90933 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78035_MethodInfo;
 void InternalEnumerator_1__ctor_m78035 (InternalEnumerator_1_t10891 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78036_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78036 (InternalEnumerator_1_t10891 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78037_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78037 (InternalEnumerator_1_t10891 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78040(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78040_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ExchangeAlgorithmType_t3057_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78038_MethodInfo;
 void InternalEnumerator_1_Dispose_m78038 (InternalEnumerator_1_t10891 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78039_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78039 (InternalEnumerator_1_t10891 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7045(L_1, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78040 (InternalEnumerator_1_t10891 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t826 * L_1 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_1, (String_t*) &_stringLiteral2022, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t826 * L_3 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_3, (String_t*) &_stringLiteral2023, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7045(L_5, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisExchangeAlgorithmType_t3057_m90933(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisExchangeAlgorithmType_t3057_m90933_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10891____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10891_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10891, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10891____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10891_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10891, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10891_FieldInfos[] =
{
	&InternalEnumerator_1_t10891____array_0_FieldInfo,
	&InternalEnumerator_1_t10891____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10891____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10891_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78037_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10891____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10891_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78040_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10891_PropertyInfos[] =
{
	&InternalEnumerator_1_t10891____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10891____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10891_InternalEnumerator_1__ctor_m78035_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78035_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78035_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78035/* method */
	, &InternalEnumerator_1_t10891_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10891_InternalEnumerator_1__ctor_m78035_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78035_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78036_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78036_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78036/* method */
	, &InternalEnumerator_1_t10891_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78036_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78037_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78037_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78037/* method */
	, &InternalEnumerator_1_t10891_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78037_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78038_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78038_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78038/* method */
	, &InternalEnumerator_1_t10891_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78038_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78039_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78039_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78039/* method */
	, &InternalEnumerator_1_t10891_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78039_GenericMethod/* genericMethod */

};
extern Il2CppType ExchangeAlgorithmType_t3057_0_0_0;
extern void* RuntimeInvoker_ExchangeAlgorithmType_t3057 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78040_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78040_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78040/* method */
	, &InternalEnumerator_1_t10891_il2cpp_TypeInfo/* declaring_type */
	, &ExchangeAlgorithmType_t3057_0_0_0/* return_type */
	, RuntimeInvoker_ExchangeAlgorithmType_t3057/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78040_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10891_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78035_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78036_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78037_MethodInfo,
	&InternalEnumerator_1_Dispose_m78038_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78039_MethodInfo,
	&InternalEnumerator_1_get_Current_m78040_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10891_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78037_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78039_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78036_MethodInfo,
	&InternalEnumerator_1_Dispose_m78038_MethodInfo,
	&InternalEnumerator_1_get_Current_m78040_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10891_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13030_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10891_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13030_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10891_0_0_0;
extern Il2CppType InternalEnumerator_1_t10891_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10891_GenericClass;
TypeInfo InternalEnumerator_1_t10891_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10891_MethodInfos/* methods */
	, InternalEnumerator_1_t10891_PropertyInfos/* properties */
	, InternalEnumerator_1_t10891_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10891_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10891_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10891_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10891_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10891_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10891_1_0_0/* this_arg */
	, InternalEnumerator_1_t10891_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10891_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10891)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14550_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
extern MethodInfo ICollection_1_get_Count_m103339_MethodInfo;
static PropertyInfo ICollection_1_t14550____Count_PropertyInfo = 
{
	&ICollection_1_t14550_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103339_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103340_MethodInfo;
static PropertyInfo ICollection_1_t14550____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14550_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103340_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14550_PropertyInfos[] =
{
	&ICollection_1_t14550____Count_PropertyInfo,
	&ICollection_1_t14550____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103339_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_Count()
MethodInfo ICollection_1_get_Count_m103339_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14550_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103339_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103340_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103340_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14550_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103340_GenericMethod/* genericMethod */

};
extern Il2CppType ExchangeAlgorithmType_t3057_0_0_0;
extern Il2CppType ExchangeAlgorithmType_t3057_0_0_0;
static ParameterInfo ICollection_1_t14550_ICollection_1_Add_m103341_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExchangeAlgorithmType_t3057_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103341_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Add(T)
MethodInfo ICollection_1_Add_m103341_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14550_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14550_ICollection_1_Add_m103341_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103341_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103342_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Clear()
MethodInfo ICollection_1_Clear_m103342_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14550_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103342_GenericMethod/* genericMethod */

};
extern Il2CppType ExchangeAlgorithmType_t3057_0_0_0;
static ParameterInfo ICollection_1_t14550_ICollection_1_Contains_m103343_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExchangeAlgorithmType_t3057_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103343_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Contains(T)
MethodInfo ICollection_1_Contains_m103343_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14550_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14550_ICollection_1_Contains_m103343_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103343_GenericMethod/* genericMethod */

};
extern Il2CppType ExchangeAlgorithmTypeU5BU5D_t11570_0_0_0;
extern Il2CppType ExchangeAlgorithmTypeU5BU5D_t11570_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14550_ICollection_1_CopyTo_m103344_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ExchangeAlgorithmTypeU5BU5D_t11570_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103344_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103344_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14550_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14550_ICollection_1_CopyTo_m103344_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103344_GenericMethod/* genericMethod */

};
extern Il2CppType ExchangeAlgorithmType_t3057_0_0_0;
static ParameterInfo ICollection_1_t14550_ICollection_1_Remove_m103345_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExchangeAlgorithmType_t3057_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103345_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Remove(T)
MethodInfo ICollection_1_Remove_m103345_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14550_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14550_ICollection_1_Remove_m103345_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103345_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14550_MethodInfos[] =
{
	&ICollection_1_get_Count_m103339_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103340_MethodInfo,
	&ICollection_1_Add_m103341_MethodInfo,
	&ICollection_1_Clear_m103342_MethodInfo,
	&ICollection_1_Contains_m103343_MethodInfo,
	&ICollection_1_CopyTo_m103344_MethodInfo,
	&ICollection_1_Remove_m103345_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14552_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14550_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14552_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14550_0_0_0;
extern Il2CppType ICollection_1_t14550_1_0_0;
struct ICollection_1_t14550;
extern Il2CppGenericClass ICollection_1_t14550_GenericClass;
TypeInfo ICollection_1_t14550_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14550_MethodInfos/* methods */
	, ICollection_1_t14550_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14550_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14550_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14550_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14550_0_0_0/* byval_arg */
	, &ICollection_1_t14550_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14550_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
extern Il2CppType IEnumerator_1_t13030_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103346_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103346_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14552_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13030_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103346_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14552_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103346_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14552_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14552_0_0_0;
extern Il2CppType IEnumerable_1_t14552_1_0_0;
struct IEnumerable_1_t14552;
extern Il2CppGenericClass IEnumerable_1_t14552_GenericClass;
TypeInfo IEnumerable_1_t14552_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14552_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14552_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14552_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14552_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14552_0_0_0/* byval_arg */
	, &IEnumerable_1_t14552_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14552_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14551_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
extern MethodInfo IList_1_get_Item_m103347_MethodInfo;
extern MethodInfo IList_1_set_Item_m103348_MethodInfo;
static PropertyInfo IList_1_t14551____Item_PropertyInfo = 
{
	&IList_1_t14551_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103347_MethodInfo/* get */
	, &IList_1_set_Item_m103348_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14551_PropertyInfos[] =
{
	&IList_1_t14551____Item_PropertyInfo,
	NULL
};
extern Il2CppType ExchangeAlgorithmType_t3057_0_0_0;
static ParameterInfo IList_1_t14551_IList_1_IndexOf_m103349_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExchangeAlgorithmType_t3057_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103349_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103349_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14551_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14551_IList_1_IndexOf_m103349_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103349_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ExchangeAlgorithmType_t3057_0_0_0;
static ParameterInfo IList_1_t14551_IList_1_Insert_m103350_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ExchangeAlgorithmType_t3057_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103350_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103350_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14551_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14551_IList_1_Insert_m103350_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103350_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14551_IList_1_RemoveAt_m103351_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103351_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103351_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14551_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14551_IList_1_RemoveAt_m103351_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103351_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14551_IList_1_get_Item_m103347_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType ExchangeAlgorithmType_t3057_0_0_0;
extern void* RuntimeInvoker_ExchangeAlgorithmType_t3057_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103347_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103347_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14551_il2cpp_TypeInfo/* declaring_type */
	, &ExchangeAlgorithmType_t3057_0_0_0/* return_type */
	, RuntimeInvoker_ExchangeAlgorithmType_t3057_Int32_t23/* invoker_method */
	, IList_1_t14551_IList_1_get_Item_m103347_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103347_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ExchangeAlgorithmType_t3057_0_0_0;
static ParameterInfo IList_1_t14551_IList_1_set_Item_m103348_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ExchangeAlgorithmType_t3057_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103348_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103348_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14551_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14551_IList_1_set_Item_m103348_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103348_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14551_MethodInfos[] =
{
	&IList_1_IndexOf_m103349_MethodInfo,
	&IList_1_Insert_m103350_MethodInfo,
	&IList_1_RemoveAt_m103351_MethodInfo,
	&IList_1_get_Item_m103347_MethodInfo,
	&IList_1_set_Item_m103348_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14551_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14550_il2cpp_TypeInfo,
	&IEnumerable_1_t14552_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14551_0_0_0;
extern Il2CppType IList_1_t14551_1_0_0;
struct IList_1_t14551;
extern Il2CppGenericClass IList_1_t14551_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14551_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14551_MethodInfos/* methods */
	, IList_1_t14551_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14551_il2cpp_TypeInfo/* element_class */
	, IList_1_t14551_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14551_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14551_0_0_0/* byval_arg */
	, &IList_1_t14551_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14551_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13032_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>
extern MethodInfo IEnumerator_1_get_Current_m103352_MethodInfo;
static PropertyInfo IEnumerator_1_t13032____Current_PropertyInfo = 
{
	&IEnumerator_1_t13032_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103352_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13032_PropertyInfos[] =
{
	&IEnumerator_1_t13032____Current_PropertyInfo,
	NULL
};
extern Il2CppType HandshakeState_t3058_0_0_0;
extern void* RuntimeInvoker_HandshakeState_t3058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103352_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103352_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13032_il2cpp_TypeInfo/* declaring_type */
	, &HandshakeState_t3058_0_0_0/* return_type */
	, RuntimeInvoker_HandshakeState_t3058/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103352_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13032_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103352_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13032_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13032_0_0_0;
extern Il2CppType IEnumerator_1_t13032_1_0_0;
struct IEnumerator_1_t13032;
extern Il2CppGenericClass IEnumerator_1_t13032_GenericClass;
TypeInfo IEnumerator_1_t13032_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13032_MethodInfos/* methods */
	, IEnumerator_1_t13032_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13032_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13032_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13032_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13032_0_0_0/* byval_arg */
	, &IEnumerator_1_t13032_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13032_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10892_il2cpp_TypeInfo;

extern TypeInfo HandshakeState_t3058_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78046_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisHandshakeState_t3058_m90944_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.HandshakeState>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.HandshakeState>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisHandshakeState_t3058_m90944 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78041_MethodInfo;
 void InternalEnumerator_1__ctor_m78041 (InternalEnumerator_1_t10892 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78042_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78042 (InternalEnumerator_1_t10892 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78043_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78043 (InternalEnumerator_1_t10892 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78046(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78046_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&HandshakeState_t3058_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78044_MethodInfo;
 void InternalEnumerator_1_Dispose_m78044 (InternalEnumerator_1_t10892 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78045_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78045 (InternalEnumerator_1_t10892 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7045(L_1, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78046 (InternalEnumerator_1_t10892 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t826 * L_1 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_1, (String_t*) &_stringLiteral2022, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t826 * L_3 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_3, (String_t*) &_stringLiteral2023, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7045(L_5, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisHandshakeState_t3058_m90944(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisHandshakeState_t3058_m90944_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10892____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10892_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10892, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10892____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10892_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10892, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10892_FieldInfos[] =
{
	&InternalEnumerator_1_t10892____array_0_FieldInfo,
	&InternalEnumerator_1_t10892____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10892____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10892_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78043_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10892____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10892_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78046_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10892_PropertyInfos[] =
{
	&InternalEnumerator_1_t10892____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10892____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10892_InternalEnumerator_1__ctor_m78041_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78041_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78041_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78041/* method */
	, &InternalEnumerator_1_t10892_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10892_InternalEnumerator_1__ctor_m78041_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78041_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78042_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78042_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78042/* method */
	, &InternalEnumerator_1_t10892_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78042_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78043_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78043_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78043/* method */
	, &InternalEnumerator_1_t10892_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78043_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78044_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78044_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78044/* method */
	, &InternalEnumerator_1_t10892_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78044_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78045_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78045_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78045/* method */
	, &InternalEnumerator_1_t10892_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78045_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeState_t3058_0_0_0;
extern void* RuntimeInvoker_HandshakeState_t3058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78046_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78046_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78046/* method */
	, &InternalEnumerator_1_t10892_il2cpp_TypeInfo/* declaring_type */
	, &HandshakeState_t3058_0_0_0/* return_type */
	, RuntimeInvoker_HandshakeState_t3058/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78046_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10892_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78041_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78042_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78043_MethodInfo,
	&InternalEnumerator_1_Dispose_m78044_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78045_MethodInfo,
	&InternalEnumerator_1_get_Current_m78046_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10892_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78043_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78045_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78042_MethodInfo,
	&InternalEnumerator_1_Dispose_m78044_MethodInfo,
	&InternalEnumerator_1_get_Current_m78046_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10892_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13032_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10892_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13032_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10892_0_0_0;
extern Il2CppType InternalEnumerator_1_t10892_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10892_GenericClass;
TypeInfo InternalEnumerator_1_t10892_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10892_MethodInfos/* methods */
	, InternalEnumerator_1_t10892_PropertyInfos/* properties */
	, InternalEnumerator_1_t10892_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10892_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10892_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10892_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10892_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10892_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10892_1_0_0/* this_arg */
	, InternalEnumerator_1_t10892_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10892_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10892)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14553_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>
extern MethodInfo ICollection_1_get_Count_m103353_MethodInfo;
static PropertyInfo ICollection_1_t14553____Count_PropertyInfo = 
{
	&ICollection_1_t14553_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103353_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103354_MethodInfo;
static PropertyInfo ICollection_1_t14553____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14553_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103354_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14553_PropertyInfos[] =
{
	&ICollection_1_t14553____Count_PropertyInfo,
	&ICollection_1_t14553____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103353_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::get_Count()
MethodInfo ICollection_1_get_Count_m103353_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14553_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103353_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103354_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103354_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14553_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103354_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeState_t3058_0_0_0;
extern Il2CppType HandshakeState_t3058_0_0_0;
static ParameterInfo ICollection_1_t14553_ICollection_1_Add_m103355_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeState_t3058_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103355_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::Add(T)
MethodInfo ICollection_1_Add_m103355_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14553_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14553_ICollection_1_Add_m103355_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103355_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103356_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::Clear()
MethodInfo ICollection_1_Clear_m103356_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14553_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103356_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeState_t3058_0_0_0;
static ParameterInfo ICollection_1_t14553_ICollection_1_Contains_m103357_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeState_t3058_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103357_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::Contains(T)
MethodInfo ICollection_1_Contains_m103357_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14553_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14553_ICollection_1_Contains_m103357_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103357_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeStateU5BU5D_t11571_0_0_0;
extern Il2CppType HandshakeStateU5BU5D_t11571_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14553_ICollection_1_CopyTo_m103358_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeStateU5BU5D_t11571_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103358_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103358_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14553_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14553_ICollection_1_CopyTo_m103358_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103358_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeState_t3058_0_0_0;
static ParameterInfo ICollection_1_t14553_ICollection_1_Remove_m103359_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeState_t3058_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103359_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::Remove(T)
MethodInfo ICollection_1_Remove_m103359_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14553_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14553_ICollection_1_Remove_m103359_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103359_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14553_MethodInfos[] =
{
	&ICollection_1_get_Count_m103353_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103354_MethodInfo,
	&ICollection_1_Add_m103355_MethodInfo,
	&ICollection_1_Clear_m103356_MethodInfo,
	&ICollection_1_Contains_m103357_MethodInfo,
	&ICollection_1_CopyTo_m103358_MethodInfo,
	&ICollection_1_Remove_m103359_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14555_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14553_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14555_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14553_0_0_0;
extern Il2CppType ICollection_1_t14553_1_0_0;
struct ICollection_1_t14553;
extern Il2CppGenericClass ICollection_1_t14553_GenericClass;
TypeInfo ICollection_1_t14553_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14553_MethodInfos/* methods */
	, ICollection_1_t14553_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14553_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14553_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14553_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14553_0_0_0/* byval_arg */
	, &ICollection_1_t14553_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14553_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.HandshakeState>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.HandshakeState>
extern Il2CppType IEnumerator_1_t13032_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103360_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.HandshakeState>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103360_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14555_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13032_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103360_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14555_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103360_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14555_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14555_0_0_0;
extern Il2CppType IEnumerable_1_t14555_1_0_0;
struct IEnumerable_1_t14555;
extern Il2CppGenericClass IEnumerable_1_t14555_GenericClass;
TypeInfo IEnumerable_1_t14555_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14555_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14555_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14555_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14555_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14555_0_0_0/* byval_arg */
	, &IEnumerable_1_t14555_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14555_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14554_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>
extern MethodInfo IList_1_get_Item_m103361_MethodInfo;
extern MethodInfo IList_1_set_Item_m103362_MethodInfo;
static PropertyInfo IList_1_t14554____Item_PropertyInfo = 
{
	&IList_1_t14554_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103361_MethodInfo/* get */
	, &IList_1_set_Item_m103362_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14554_PropertyInfos[] =
{
	&IList_1_t14554____Item_PropertyInfo,
	NULL
};
extern Il2CppType HandshakeState_t3058_0_0_0;
static ParameterInfo IList_1_t14554_IList_1_IndexOf_m103363_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeState_t3058_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103363_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103363_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14554_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14554_IList_1_IndexOf_m103363_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103363_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType HandshakeState_t3058_0_0_0;
static ParameterInfo IList_1_t14554_IList_1_Insert_m103364_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &HandshakeState_t3058_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103364_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103364_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14554_IList_1_Insert_m103364_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103364_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14554_IList_1_RemoveAt_m103365_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103365_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103365_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14554_IList_1_RemoveAt_m103365_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103365_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14554_IList_1_get_Item_m103361_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType HandshakeState_t3058_0_0_0;
extern void* RuntimeInvoker_HandshakeState_t3058_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103361_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103361_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14554_il2cpp_TypeInfo/* declaring_type */
	, &HandshakeState_t3058_0_0_0/* return_type */
	, RuntimeInvoker_HandshakeState_t3058_Int32_t23/* invoker_method */
	, IList_1_t14554_IList_1_get_Item_m103361_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103361_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType HandshakeState_t3058_0_0_0;
static ParameterInfo IList_1_t14554_IList_1_set_Item_m103362_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &HandshakeState_t3058_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103362_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103362_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14554_IList_1_set_Item_m103362_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103362_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14554_MethodInfos[] =
{
	&IList_1_IndexOf_m103363_MethodInfo,
	&IList_1_Insert_m103364_MethodInfo,
	&IList_1_RemoveAt_m103365_MethodInfo,
	&IList_1_get_Item_m103361_MethodInfo,
	&IList_1_set_Item_m103362_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14554_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14553_il2cpp_TypeInfo,
	&IEnumerable_1_t14555_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14554_0_0_0;
extern Il2CppType IList_1_t14554_1_0_0;
struct IList_1_t14554;
extern Il2CppGenericClass IList_1_t14554_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14554_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14554_MethodInfos/* methods */
	, IList_1_t14554_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14554_il2cpp_TypeInfo/* element_class */
	, IList_1_t14554_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14554_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14554_0_0_0/* byval_arg */
	, &IList_1_t14554_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14554_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13034_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
extern MethodInfo IEnumerator_1_get_Current_m103366_MethodInfo;
static PropertyInfo IEnumerator_1_t13034____Current_PropertyInfo = 
{
	&IEnumerator_1_t13034_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103366_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13034_PropertyInfos[] =
{
	&IEnumerator_1_t13034____Current_PropertyInfo,
	NULL
};
extern Il2CppType HashAlgorithmType_t3059_0_0_0;
extern void* RuntimeInvoker_HashAlgorithmType_t3059 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103366_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103366_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13034_il2cpp_TypeInfo/* declaring_type */
	, &HashAlgorithmType_t3059_0_0_0/* return_type */
	, RuntimeInvoker_HashAlgorithmType_t3059/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103366_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13034_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103366_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13034_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13034_0_0_0;
extern Il2CppType IEnumerator_1_t13034_1_0_0;
struct IEnumerator_1_t13034;
extern Il2CppGenericClass IEnumerator_1_t13034_GenericClass;
TypeInfo IEnumerator_1_t13034_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13034_MethodInfos/* methods */
	, IEnumerator_1_t13034_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13034_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13034_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13034_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13034_0_0_0/* byval_arg */
	, &IEnumerator_1_t13034_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13034_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10893_il2cpp_TypeInfo;

extern TypeInfo HashAlgorithmType_t3059_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78052_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisHashAlgorithmType_t3059_m90955_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.HashAlgorithmType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.HashAlgorithmType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisHashAlgorithmType_t3059_m90955 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78047_MethodInfo;
 void InternalEnumerator_1__ctor_m78047 (InternalEnumerator_1_t10893 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78048_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78048 (InternalEnumerator_1_t10893 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78049_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78049 (InternalEnumerator_1_t10893 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78052(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78052_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&HashAlgorithmType_t3059_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78050_MethodInfo;
 void InternalEnumerator_1_Dispose_m78050 (InternalEnumerator_1_t10893 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78051_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78051 (InternalEnumerator_1_t10893 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7045(L_1, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78052 (InternalEnumerator_1_t10893 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t826 * L_1 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_1, (String_t*) &_stringLiteral2022, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t826 * L_3 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_3, (String_t*) &_stringLiteral2023, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7045(L_5, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisHashAlgorithmType_t3059_m90955(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisHashAlgorithmType_t3059_m90955_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10893____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10893_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10893, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10893____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10893_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10893, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10893_FieldInfos[] =
{
	&InternalEnumerator_1_t10893____array_0_FieldInfo,
	&InternalEnumerator_1_t10893____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10893____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10893_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78049_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10893____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10893_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78052_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10893_PropertyInfos[] =
{
	&InternalEnumerator_1_t10893____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10893____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10893_InternalEnumerator_1__ctor_m78047_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78047_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78047_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78047/* method */
	, &InternalEnumerator_1_t10893_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10893_InternalEnumerator_1__ctor_m78047_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78047_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78048_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78048_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78048/* method */
	, &InternalEnumerator_1_t10893_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78048_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78049_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78049_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78049/* method */
	, &InternalEnumerator_1_t10893_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78049_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78050_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78050_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78050/* method */
	, &InternalEnumerator_1_t10893_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78050_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78051_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78051_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78051/* method */
	, &InternalEnumerator_1_t10893_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78051_GenericMethod/* genericMethod */

};
extern Il2CppType HashAlgorithmType_t3059_0_0_0;
extern void* RuntimeInvoker_HashAlgorithmType_t3059 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78052_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78052_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78052/* method */
	, &InternalEnumerator_1_t10893_il2cpp_TypeInfo/* declaring_type */
	, &HashAlgorithmType_t3059_0_0_0/* return_type */
	, RuntimeInvoker_HashAlgorithmType_t3059/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78052_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10893_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78047_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78048_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78049_MethodInfo,
	&InternalEnumerator_1_Dispose_m78050_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78051_MethodInfo,
	&InternalEnumerator_1_get_Current_m78052_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10893_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78049_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78051_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78048_MethodInfo,
	&InternalEnumerator_1_Dispose_m78050_MethodInfo,
	&InternalEnumerator_1_get_Current_m78052_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10893_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13034_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10893_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13034_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10893_0_0_0;
extern Il2CppType InternalEnumerator_1_t10893_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10893_GenericClass;
TypeInfo InternalEnumerator_1_t10893_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10893_MethodInfos/* methods */
	, InternalEnumerator_1_t10893_PropertyInfos/* properties */
	, InternalEnumerator_1_t10893_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10893_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10893_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10893_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10893_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10893_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10893_1_0_0/* this_arg */
	, InternalEnumerator_1_t10893_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10893_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10893)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14556_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
extern MethodInfo ICollection_1_get_Count_m103367_MethodInfo;
static PropertyInfo ICollection_1_t14556____Count_PropertyInfo = 
{
	&ICollection_1_t14556_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103367_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103368_MethodInfo;
static PropertyInfo ICollection_1_t14556____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14556_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103368_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14556_PropertyInfos[] =
{
	&ICollection_1_t14556____Count_PropertyInfo,
	&ICollection_1_t14556____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103367_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_Count()
MethodInfo ICollection_1_get_Count_m103367_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14556_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103367_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103368_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103368_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14556_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103368_GenericMethod/* genericMethod */

};
extern Il2CppType HashAlgorithmType_t3059_0_0_0;
extern Il2CppType HashAlgorithmType_t3059_0_0_0;
static ParameterInfo ICollection_1_t14556_ICollection_1_Add_m103369_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HashAlgorithmType_t3059_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103369_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Add(T)
MethodInfo ICollection_1_Add_m103369_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14556_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14556_ICollection_1_Add_m103369_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103369_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103370_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Clear()
MethodInfo ICollection_1_Clear_m103370_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14556_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103370_GenericMethod/* genericMethod */

};
extern Il2CppType HashAlgorithmType_t3059_0_0_0;
static ParameterInfo ICollection_1_t14556_ICollection_1_Contains_m103371_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HashAlgorithmType_t3059_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103371_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Contains(T)
MethodInfo ICollection_1_Contains_m103371_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14556_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14556_ICollection_1_Contains_m103371_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103371_GenericMethod/* genericMethod */

};
extern Il2CppType HashAlgorithmTypeU5BU5D_t11572_0_0_0;
extern Il2CppType HashAlgorithmTypeU5BU5D_t11572_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14556_ICollection_1_CopyTo_m103372_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &HashAlgorithmTypeU5BU5D_t11572_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103372_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103372_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14556_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14556_ICollection_1_CopyTo_m103372_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103372_GenericMethod/* genericMethod */

};
extern Il2CppType HashAlgorithmType_t3059_0_0_0;
static ParameterInfo ICollection_1_t14556_ICollection_1_Remove_m103373_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HashAlgorithmType_t3059_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103373_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Remove(T)
MethodInfo ICollection_1_Remove_m103373_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14556_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14556_ICollection_1_Remove_m103373_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103373_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14556_MethodInfos[] =
{
	&ICollection_1_get_Count_m103367_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103368_MethodInfo,
	&ICollection_1_Add_m103369_MethodInfo,
	&ICollection_1_Clear_m103370_MethodInfo,
	&ICollection_1_Contains_m103371_MethodInfo,
	&ICollection_1_CopyTo_m103372_MethodInfo,
	&ICollection_1_Remove_m103373_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14558_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14556_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14558_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14556_0_0_0;
extern Il2CppType ICollection_1_t14556_1_0_0;
struct ICollection_1_t14556;
extern Il2CppGenericClass ICollection_1_t14556_GenericClass;
TypeInfo ICollection_1_t14556_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14556_MethodInfos/* methods */
	, ICollection_1_t14556_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14556_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14556_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14556_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14556_0_0_0/* byval_arg */
	, &ICollection_1_t14556_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14556_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
extern Il2CppType IEnumerator_1_t13034_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103374_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103374_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14558_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13034_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103374_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14558_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103374_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14558_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14558_0_0_0;
extern Il2CppType IEnumerable_1_t14558_1_0_0;
struct IEnumerable_1_t14558;
extern Il2CppGenericClass IEnumerable_1_t14558_GenericClass;
TypeInfo IEnumerable_1_t14558_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14558_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14558_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14558_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14558_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14558_0_0_0/* byval_arg */
	, &IEnumerable_1_t14558_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14558_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14557_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
extern MethodInfo IList_1_get_Item_m103375_MethodInfo;
extern MethodInfo IList_1_set_Item_m103376_MethodInfo;
static PropertyInfo IList_1_t14557____Item_PropertyInfo = 
{
	&IList_1_t14557_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103375_MethodInfo/* get */
	, &IList_1_set_Item_m103376_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14557_PropertyInfos[] =
{
	&IList_1_t14557____Item_PropertyInfo,
	NULL
};
extern Il2CppType HashAlgorithmType_t3059_0_0_0;
static ParameterInfo IList_1_t14557_IList_1_IndexOf_m103377_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HashAlgorithmType_t3059_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103377_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103377_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14557_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14557_IList_1_IndexOf_m103377_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103377_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType HashAlgorithmType_t3059_0_0_0;
static ParameterInfo IList_1_t14557_IList_1_Insert_m103378_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &HashAlgorithmType_t3059_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103378_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103378_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14557_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14557_IList_1_Insert_m103378_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103378_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14557_IList_1_RemoveAt_m103379_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103379_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103379_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14557_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14557_IList_1_RemoveAt_m103379_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103379_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14557_IList_1_get_Item_m103375_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType HashAlgorithmType_t3059_0_0_0;
extern void* RuntimeInvoker_HashAlgorithmType_t3059_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103375_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103375_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14557_il2cpp_TypeInfo/* declaring_type */
	, &HashAlgorithmType_t3059_0_0_0/* return_type */
	, RuntimeInvoker_HashAlgorithmType_t3059_Int32_t23/* invoker_method */
	, IList_1_t14557_IList_1_get_Item_m103375_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103375_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType HashAlgorithmType_t3059_0_0_0;
static ParameterInfo IList_1_t14557_IList_1_set_Item_m103376_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &HashAlgorithmType_t3059_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103376_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103376_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14557_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14557_IList_1_set_Item_m103376_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103376_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14557_MethodInfos[] =
{
	&IList_1_IndexOf_m103377_MethodInfo,
	&IList_1_Insert_m103378_MethodInfo,
	&IList_1_RemoveAt_m103379_MethodInfo,
	&IList_1_get_Item_m103375_MethodInfo,
	&IList_1_set_Item_m103376_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14557_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14556_il2cpp_TypeInfo,
	&IEnumerable_1_t14558_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14557_0_0_0;
extern Il2CppType IList_1_t14557_1_0_0;
struct IList_1_t14557;
extern Il2CppGenericClass IList_1_t14557_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14557_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14557_MethodInfos/* methods */
	, IList_1_t14557_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14557_il2cpp_TypeInfo/* element_class */
	, IList_1_t14557_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14557_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14557_0_0_0/* byval_arg */
	, &IList_1_t14557_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14557_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13036_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
extern MethodInfo IEnumerator_1_get_Current_m103380_MethodInfo;
static PropertyInfo IEnumerator_1_t13036____Current_PropertyInfo = 
{
	&IEnumerator_1_t13036_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103380_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13036_PropertyInfos[] =
{
	&IEnumerator_1_t13036____Current_PropertyInfo,
	NULL
};
extern Il2CppType SecurityCompressionType_t3069_0_0_0;
extern void* RuntimeInvoker_SecurityCompressionType_t3069 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103380_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103380_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13036_il2cpp_TypeInfo/* declaring_type */
	, &SecurityCompressionType_t3069_0_0_0/* return_type */
	, RuntimeInvoker_SecurityCompressionType_t3069/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103380_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13036_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103380_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13036_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13036_0_0_0;
extern Il2CppType IEnumerator_1_t13036_1_0_0;
struct IEnumerator_1_t13036;
extern Il2CppGenericClass IEnumerator_1_t13036_GenericClass;
TypeInfo IEnumerator_1_t13036_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13036_MethodInfos/* methods */
	, IEnumerator_1_t13036_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13036_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13036_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13036_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13036_0_0_0/* byval_arg */
	, &IEnumerator_1_t13036_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13036_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10894_il2cpp_TypeInfo;

extern TypeInfo SecurityCompressionType_t3069_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78058_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSecurityCompressionType_t3069_m90966_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.SecurityCompressionType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.SecurityCompressionType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSecurityCompressionType_t3069_m90966 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78053_MethodInfo;
 void InternalEnumerator_1__ctor_m78053 (InternalEnumerator_1_t10894 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78054_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78054 (InternalEnumerator_1_t10894 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78055_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78055 (InternalEnumerator_1_t10894 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78058(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78058_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SecurityCompressionType_t3069_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78056_MethodInfo;
 void InternalEnumerator_1_Dispose_m78056 (InternalEnumerator_1_t10894 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78057_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78057 (InternalEnumerator_1_t10894 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7045(L_1, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78058 (InternalEnumerator_1_t10894 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t826 * L_1 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_1, (String_t*) &_stringLiteral2022, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t826 * L_3 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_3, (String_t*) &_stringLiteral2023, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7045(L_5, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisSecurityCompressionType_t3069_m90966(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSecurityCompressionType_t3069_m90966_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10894____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10894_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10894, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10894____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10894_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10894, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10894_FieldInfos[] =
{
	&InternalEnumerator_1_t10894____array_0_FieldInfo,
	&InternalEnumerator_1_t10894____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10894____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10894_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78055_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10894____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10894_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78058_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10894_PropertyInfos[] =
{
	&InternalEnumerator_1_t10894____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10894____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10894_InternalEnumerator_1__ctor_m78053_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78053_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78053_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78053/* method */
	, &InternalEnumerator_1_t10894_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10894_InternalEnumerator_1__ctor_m78053_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78053_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78054_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78054_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78054/* method */
	, &InternalEnumerator_1_t10894_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78054_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78055_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78055_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78055/* method */
	, &InternalEnumerator_1_t10894_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78055_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78056_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78056_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78056/* method */
	, &InternalEnumerator_1_t10894_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78056_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78057_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78057_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78057/* method */
	, &InternalEnumerator_1_t10894_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78057_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityCompressionType_t3069_0_0_0;
extern void* RuntimeInvoker_SecurityCompressionType_t3069 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78058_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78058_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78058/* method */
	, &InternalEnumerator_1_t10894_il2cpp_TypeInfo/* declaring_type */
	, &SecurityCompressionType_t3069_0_0_0/* return_type */
	, RuntimeInvoker_SecurityCompressionType_t3069/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78058_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10894_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78053_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78054_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78055_MethodInfo,
	&InternalEnumerator_1_Dispose_m78056_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78057_MethodInfo,
	&InternalEnumerator_1_get_Current_m78058_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10894_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78055_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78057_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78054_MethodInfo,
	&InternalEnumerator_1_Dispose_m78056_MethodInfo,
	&InternalEnumerator_1_get_Current_m78058_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10894_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13036_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10894_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13036_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10894_0_0_0;
extern Il2CppType InternalEnumerator_1_t10894_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10894_GenericClass;
TypeInfo InternalEnumerator_1_t10894_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10894_MethodInfos/* methods */
	, InternalEnumerator_1_t10894_PropertyInfos/* properties */
	, InternalEnumerator_1_t10894_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10894_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10894_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10894_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10894_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10894_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10894_1_0_0/* this_arg */
	, InternalEnumerator_1_t10894_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10894_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10894)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14559_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
extern MethodInfo ICollection_1_get_Count_m103381_MethodInfo;
static PropertyInfo ICollection_1_t14559____Count_PropertyInfo = 
{
	&ICollection_1_t14559_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103381_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103382_MethodInfo;
static PropertyInfo ICollection_1_t14559____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14559_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103382_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14559_PropertyInfos[] =
{
	&ICollection_1_t14559____Count_PropertyInfo,
	&ICollection_1_t14559____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103381_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_Count()
MethodInfo ICollection_1_get_Count_m103381_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14559_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103381_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103382_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103382_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14559_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103382_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityCompressionType_t3069_0_0_0;
extern Il2CppType SecurityCompressionType_t3069_0_0_0;
static ParameterInfo ICollection_1_t14559_ICollection_1_Add_m103383_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCompressionType_t3069_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103383_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Add(T)
MethodInfo ICollection_1_Add_m103383_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14559_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14559_ICollection_1_Add_m103383_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103383_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103384_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Clear()
MethodInfo ICollection_1_Clear_m103384_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14559_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103384_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityCompressionType_t3069_0_0_0;
static ParameterInfo ICollection_1_t14559_ICollection_1_Contains_m103385_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCompressionType_t3069_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103385_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Contains(T)
MethodInfo ICollection_1_Contains_m103385_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14559_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14559_ICollection_1_Contains_m103385_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103385_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityCompressionTypeU5BU5D_t11573_0_0_0;
extern Il2CppType SecurityCompressionTypeU5BU5D_t11573_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14559_ICollection_1_CopyTo_m103386_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCompressionTypeU5BU5D_t11573_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103386_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103386_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14559_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14559_ICollection_1_CopyTo_m103386_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103386_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityCompressionType_t3069_0_0_0;
static ParameterInfo ICollection_1_t14559_ICollection_1_Remove_m103387_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCompressionType_t3069_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103387_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Remove(T)
MethodInfo ICollection_1_Remove_m103387_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14559_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14559_ICollection_1_Remove_m103387_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103387_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14559_MethodInfos[] =
{
	&ICollection_1_get_Count_m103381_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103382_MethodInfo,
	&ICollection_1_Add_m103383_MethodInfo,
	&ICollection_1_Clear_m103384_MethodInfo,
	&ICollection_1_Contains_m103385_MethodInfo,
	&ICollection_1_CopyTo_m103386_MethodInfo,
	&ICollection_1_Remove_m103387_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14561_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14559_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14561_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14559_0_0_0;
extern Il2CppType ICollection_1_t14559_1_0_0;
struct ICollection_1_t14559;
extern Il2CppGenericClass ICollection_1_t14559_GenericClass;
TypeInfo ICollection_1_t14559_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14559_MethodInfos/* methods */
	, ICollection_1_t14559_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14559_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14559_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14559_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14559_0_0_0/* byval_arg */
	, &ICollection_1_t14559_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14559_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
extern Il2CppType IEnumerator_1_t13036_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103388_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103388_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14561_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13036_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103388_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14561_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103388_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14561_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14561_0_0_0;
extern Il2CppType IEnumerable_1_t14561_1_0_0;
struct IEnumerable_1_t14561;
extern Il2CppGenericClass IEnumerable_1_t14561_GenericClass;
TypeInfo IEnumerable_1_t14561_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14561_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14561_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14561_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14561_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14561_0_0_0/* byval_arg */
	, &IEnumerable_1_t14561_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14561_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14560_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
extern MethodInfo IList_1_get_Item_m103389_MethodInfo;
extern MethodInfo IList_1_set_Item_m103390_MethodInfo;
static PropertyInfo IList_1_t14560____Item_PropertyInfo = 
{
	&IList_1_t14560_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103389_MethodInfo/* get */
	, &IList_1_set_Item_m103390_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14560_PropertyInfos[] =
{
	&IList_1_t14560____Item_PropertyInfo,
	NULL
};
extern Il2CppType SecurityCompressionType_t3069_0_0_0;
static ParameterInfo IList_1_t14560_IList_1_IndexOf_m103391_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCompressionType_t3069_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103391_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103391_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14560_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14560_IList_1_IndexOf_m103391_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103391_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType SecurityCompressionType_t3069_0_0_0;
static ParameterInfo IList_1_t14560_IList_1_Insert_m103392_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SecurityCompressionType_t3069_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103392_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103392_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14560_IList_1_Insert_m103392_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103392_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14560_IList_1_RemoveAt_m103393_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103393_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103393_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14560_IList_1_RemoveAt_m103393_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103393_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14560_IList_1_get_Item_m103389_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType SecurityCompressionType_t3069_0_0_0;
extern void* RuntimeInvoker_SecurityCompressionType_t3069_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103389_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103389_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14560_il2cpp_TypeInfo/* declaring_type */
	, &SecurityCompressionType_t3069_0_0_0/* return_type */
	, RuntimeInvoker_SecurityCompressionType_t3069_Int32_t23/* invoker_method */
	, IList_1_t14560_IList_1_get_Item_m103389_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103389_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType SecurityCompressionType_t3069_0_0_0;
static ParameterInfo IList_1_t14560_IList_1_set_Item_m103390_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SecurityCompressionType_t3069_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103390_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103390_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14560_IList_1_set_Item_m103390_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103390_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14560_MethodInfos[] =
{
	&IList_1_IndexOf_m103391_MethodInfo,
	&IList_1_Insert_m103392_MethodInfo,
	&IList_1_RemoveAt_m103393_MethodInfo,
	&IList_1_get_Item_m103389_MethodInfo,
	&IList_1_set_Item_m103390_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14560_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14559_il2cpp_TypeInfo,
	&IEnumerable_1_t14561_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14560_0_0_0;
extern Il2CppType IList_1_t14560_1_0_0;
struct IList_1_t14560;
extern Il2CppGenericClass IList_1_t14560_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14560_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14560_MethodInfos/* methods */
	, IList_1_t14560_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14560_il2cpp_TypeInfo/* element_class */
	, IList_1_t14560_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14560_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14560_0_0_0/* byval_arg */
	, &IList_1_t14560_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14560_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13038_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
extern MethodInfo IEnumerator_1_get_Current_m103394_MethodInfo;
static PropertyInfo IEnumerator_1_t13038____Current_PropertyInfo = 
{
	&IEnumerator_1_t13038_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103394_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13038_PropertyInfos[] =
{
	&IEnumerator_1_t13038____Current_PropertyInfo,
	NULL
};
extern Il2CppType SecurityProtocolType_t3070_0_0_0;
extern void* RuntimeInvoker_SecurityProtocolType_t3070 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103394_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103394_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13038_il2cpp_TypeInfo/* declaring_type */
	, &SecurityProtocolType_t3070_0_0_0/* return_type */
	, RuntimeInvoker_SecurityProtocolType_t3070/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103394_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13038_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103394_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13038_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13038_0_0_0;
extern Il2CppType IEnumerator_1_t13038_1_0_0;
struct IEnumerator_1_t13038;
extern Il2CppGenericClass IEnumerator_1_t13038_GenericClass;
TypeInfo IEnumerator_1_t13038_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13038_MethodInfos/* methods */
	, IEnumerator_1_t13038_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13038_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13038_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13038_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13038_0_0_0/* byval_arg */
	, &IEnumerator_1_t13038_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13038_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10895_il2cpp_TypeInfo;

extern TypeInfo SecurityProtocolType_t3070_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78064_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSecurityProtocolType_t3070_m90977_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.SecurityProtocolType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.SecurityProtocolType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSecurityProtocolType_t3070_m90977 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78059_MethodInfo;
 void InternalEnumerator_1__ctor_m78059 (InternalEnumerator_1_t10895 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78060_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78060 (InternalEnumerator_1_t10895 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78061_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78061 (InternalEnumerator_1_t10895 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78064(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78064_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SecurityProtocolType_t3070_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78062_MethodInfo;
 void InternalEnumerator_1_Dispose_m78062 (InternalEnumerator_1_t10895 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78063_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78063 (InternalEnumerator_1_t10895 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7045(L_1, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78064 (InternalEnumerator_1_t10895 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t826 * L_1 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_1, (String_t*) &_stringLiteral2022, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t826 * L_3 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_3, (String_t*) &_stringLiteral2023, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7045(L_5, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisSecurityProtocolType_t3070_m90977(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSecurityProtocolType_t3070_m90977_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10895____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10895_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10895, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10895____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10895_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10895, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10895_FieldInfos[] =
{
	&InternalEnumerator_1_t10895____array_0_FieldInfo,
	&InternalEnumerator_1_t10895____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10895____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10895_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78061_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10895____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10895_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78064_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10895_PropertyInfos[] =
{
	&InternalEnumerator_1_t10895____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10895____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10895_InternalEnumerator_1__ctor_m78059_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78059_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78059_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78059/* method */
	, &InternalEnumerator_1_t10895_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10895_InternalEnumerator_1__ctor_m78059_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78059_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78060_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78060_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78060/* method */
	, &InternalEnumerator_1_t10895_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78060_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78061_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78061_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78061/* method */
	, &InternalEnumerator_1_t10895_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78061_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78062_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78062_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78062/* method */
	, &InternalEnumerator_1_t10895_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78062_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78063_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78063_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78063/* method */
	, &InternalEnumerator_1_t10895_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78063_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityProtocolType_t3070_0_0_0;
extern void* RuntimeInvoker_SecurityProtocolType_t3070 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78064_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78064_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78064/* method */
	, &InternalEnumerator_1_t10895_il2cpp_TypeInfo/* declaring_type */
	, &SecurityProtocolType_t3070_0_0_0/* return_type */
	, RuntimeInvoker_SecurityProtocolType_t3070/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78064_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10895_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78059_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78060_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78061_MethodInfo,
	&InternalEnumerator_1_Dispose_m78062_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78063_MethodInfo,
	&InternalEnumerator_1_get_Current_m78064_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10895_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78061_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78063_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78060_MethodInfo,
	&InternalEnumerator_1_Dispose_m78062_MethodInfo,
	&InternalEnumerator_1_get_Current_m78064_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10895_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13038_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10895_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13038_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10895_0_0_0;
extern Il2CppType InternalEnumerator_1_t10895_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10895_GenericClass;
TypeInfo InternalEnumerator_1_t10895_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10895_MethodInfos/* methods */
	, InternalEnumerator_1_t10895_PropertyInfos/* properties */
	, InternalEnumerator_1_t10895_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10895_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10895_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10895_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10895_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10895_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10895_1_0_0/* this_arg */
	, InternalEnumerator_1_t10895_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10895_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10895)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14562_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
extern MethodInfo ICollection_1_get_Count_m103395_MethodInfo;
static PropertyInfo ICollection_1_t14562____Count_PropertyInfo = 
{
	&ICollection_1_t14562_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103395_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103396_MethodInfo;
static PropertyInfo ICollection_1_t14562____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14562_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103396_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14562_PropertyInfos[] =
{
	&ICollection_1_t14562____Count_PropertyInfo,
	&ICollection_1_t14562____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103395_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_Count()
MethodInfo ICollection_1_get_Count_m103395_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14562_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103395_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103396_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103396_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14562_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103396_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityProtocolType_t3070_0_0_0;
extern Il2CppType SecurityProtocolType_t3070_0_0_0;
static ParameterInfo ICollection_1_t14562_ICollection_1_Add_m103397_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t3070_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103397_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Add(T)
MethodInfo ICollection_1_Add_m103397_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14562_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14562_ICollection_1_Add_m103397_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103397_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103398_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Clear()
MethodInfo ICollection_1_Clear_m103398_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14562_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103398_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityProtocolType_t3070_0_0_0;
static ParameterInfo ICollection_1_t14562_ICollection_1_Contains_m103399_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t3070_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103399_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Contains(T)
MethodInfo ICollection_1_Contains_m103399_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14562_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14562_ICollection_1_Contains_m103399_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103399_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityProtocolTypeU5BU5D_t11574_0_0_0;
extern Il2CppType SecurityProtocolTypeU5BU5D_t11574_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14562_ICollection_1_CopyTo_m103400_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolTypeU5BU5D_t11574_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103400_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103400_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14562_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14562_ICollection_1_CopyTo_m103400_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103400_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityProtocolType_t3070_0_0_0;
static ParameterInfo ICollection_1_t14562_ICollection_1_Remove_m103401_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t3070_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103401_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Remove(T)
MethodInfo ICollection_1_Remove_m103401_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14562_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14562_ICollection_1_Remove_m103401_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103401_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14562_MethodInfos[] =
{
	&ICollection_1_get_Count_m103395_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103396_MethodInfo,
	&ICollection_1_Add_m103397_MethodInfo,
	&ICollection_1_Clear_m103398_MethodInfo,
	&ICollection_1_Contains_m103399_MethodInfo,
	&ICollection_1_CopyTo_m103400_MethodInfo,
	&ICollection_1_Remove_m103401_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14564_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14562_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14564_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14562_0_0_0;
extern Il2CppType ICollection_1_t14562_1_0_0;
struct ICollection_1_t14562;
extern Il2CppGenericClass ICollection_1_t14562_GenericClass;
TypeInfo ICollection_1_t14562_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14562_MethodInfos/* methods */
	, ICollection_1_t14562_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14562_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14562_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14562_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14562_0_0_0/* byval_arg */
	, &ICollection_1_t14562_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14562_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
extern Il2CppType IEnumerator_1_t13038_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103402_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103402_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14564_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13038_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103402_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14564_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103402_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14564_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14564_0_0_0;
extern Il2CppType IEnumerable_1_t14564_1_0_0;
struct IEnumerable_1_t14564;
extern Il2CppGenericClass IEnumerable_1_t14564_GenericClass;
TypeInfo IEnumerable_1_t14564_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14564_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14564_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14564_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14564_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14564_0_0_0/* byval_arg */
	, &IEnumerable_1_t14564_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14564_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14563_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
extern MethodInfo IList_1_get_Item_m103403_MethodInfo;
extern MethodInfo IList_1_set_Item_m103404_MethodInfo;
static PropertyInfo IList_1_t14563____Item_PropertyInfo = 
{
	&IList_1_t14563_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103403_MethodInfo/* get */
	, &IList_1_set_Item_m103404_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14563_PropertyInfos[] =
{
	&IList_1_t14563____Item_PropertyInfo,
	NULL
};
extern Il2CppType SecurityProtocolType_t3070_0_0_0;
static ParameterInfo IList_1_t14563_IList_1_IndexOf_m103405_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t3070_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103405_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103405_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14563_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14563_IList_1_IndexOf_m103405_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103405_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType SecurityProtocolType_t3070_0_0_0;
static ParameterInfo IList_1_t14563_IList_1_Insert_m103406_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t3070_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103406_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103406_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14563_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14563_IList_1_Insert_m103406_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103406_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14563_IList_1_RemoveAt_m103407_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103407_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103407_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14563_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14563_IList_1_RemoveAt_m103407_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103407_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14563_IList_1_get_Item_m103403_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType SecurityProtocolType_t3070_0_0_0;
extern void* RuntimeInvoker_SecurityProtocolType_t3070_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103403_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103403_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14563_il2cpp_TypeInfo/* declaring_type */
	, &SecurityProtocolType_t3070_0_0_0/* return_type */
	, RuntimeInvoker_SecurityProtocolType_t3070_Int32_t23/* invoker_method */
	, IList_1_t14563_IList_1_get_Item_m103403_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103403_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType SecurityProtocolType_t3070_0_0_0;
static ParameterInfo IList_1_t14563_IList_1_set_Item_m103404_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t3070_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103404_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103404_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14563_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14563_IList_1_set_Item_m103404_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103404_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14563_MethodInfos[] =
{
	&IList_1_IndexOf_m103405_MethodInfo,
	&IList_1_Insert_m103406_MethodInfo,
	&IList_1_RemoveAt_m103407_MethodInfo,
	&IList_1_get_Item_m103403_MethodInfo,
	&IList_1_set_Item_m103404_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14563_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14562_il2cpp_TypeInfo,
	&IEnumerable_1_t14564_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14563_0_0_0;
extern Il2CppType IList_1_t14563_1_0_0;
struct IList_1_t14563;
extern Il2CppGenericClass IList_1_t14563_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14563_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14563_MethodInfos/* methods */
	, IList_1_t14563_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14563_il2cpp_TypeInfo/* element_class */
	, IList_1_t14563_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14563_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14563_0_0_0/* byval_arg */
	, &IList_1_t14563_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14563_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13040_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
extern MethodInfo IEnumerator_1_get_Current_m103408_MethodInfo;
static PropertyInfo IEnumerator_1_t13040____Current_PropertyInfo = 
{
	&IEnumerator_1_t13040_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103408_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13040_PropertyInfos[] =
{
	&IEnumerator_1_t13040____Current_PropertyInfo,
	NULL
};
extern Il2CppType ClientCertificateType_t3080_0_0_0;
extern void* RuntimeInvoker_ClientCertificateType_t3080 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103408_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103408_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13040_il2cpp_TypeInfo/* declaring_type */
	, &ClientCertificateType_t3080_0_0_0/* return_type */
	, RuntimeInvoker_ClientCertificateType_t3080/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103408_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13040_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103408_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13040_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13040_0_0_0;
extern Il2CppType IEnumerator_1_t13040_1_0_0;
struct IEnumerator_1_t13040;
extern Il2CppGenericClass IEnumerator_1_t13040_GenericClass;
TypeInfo IEnumerator_1_t13040_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13040_MethodInfos/* methods */
	, IEnumerator_1_t13040_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13040_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13040_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13040_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13040_0_0_0/* byval_arg */
	, &IEnumerator_1_t13040_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13040_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10896_il2cpp_TypeInfo;

extern TypeInfo ClientCertificateType_t3080_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78070_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisClientCertificateType_t3080_m90988_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisClientCertificateType_t3080_m90988 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78065_MethodInfo;
 void InternalEnumerator_1__ctor_m78065 (InternalEnumerator_1_t10896 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78066_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78066 (InternalEnumerator_1_t10896 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78067_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78067 (InternalEnumerator_1_t10896 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78070(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78070_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ClientCertificateType_t3080_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78068_MethodInfo;
 void InternalEnumerator_1_Dispose_m78068 (InternalEnumerator_1_t10896 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78069_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78069 (InternalEnumerator_1_t10896 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7045(L_1, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78070 (InternalEnumerator_1_t10896 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t826 * L_1 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_1, (String_t*) &_stringLiteral2022, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t826 * L_3 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_3, (String_t*) &_stringLiteral2023, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7045(L_5, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisClientCertificateType_t3080_m90988(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisClientCertificateType_t3080_m90988_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10896____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10896_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10896, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10896____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10896_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10896, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10896_FieldInfos[] =
{
	&InternalEnumerator_1_t10896____array_0_FieldInfo,
	&InternalEnumerator_1_t10896____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10896____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10896_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78067_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10896____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10896_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78070_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10896_PropertyInfos[] =
{
	&InternalEnumerator_1_t10896____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10896____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10896_InternalEnumerator_1__ctor_m78065_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78065_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78065_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78065/* method */
	, &InternalEnumerator_1_t10896_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10896_InternalEnumerator_1__ctor_m78065_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78065_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78066_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78066_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78066/* method */
	, &InternalEnumerator_1_t10896_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78066_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78067_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78067_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78067/* method */
	, &InternalEnumerator_1_t10896_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78067_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78068_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78068_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78068/* method */
	, &InternalEnumerator_1_t10896_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78068_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78069_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78069_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78069/* method */
	, &InternalEnumerator_1_t10896_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78069_GenericMethod/* genericMethod */

};
extern Il2CppType ClientCertificateType_t3080_0_0_0;
extern void* RuntimeInvoker_ClientCertificateType_t3080 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78070_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78070_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78070/* method */
	, &InternalEnumerator_1_t10896_il2cpp_TypeInfo/* declaring_type */
	, &ClientCertificateType_t3080_0_0_0/* return_type */
	, RuntimeInvoker_ClientCertificateType_t3080/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78070_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10896_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78065_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78066_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78067_MethodInfo,
	&InternalEnumerator_1_Dispose_m78068_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78069_MethodInfo,
	&InternalEnumerator_1_get_Current_m78070_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10896_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78067_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78069_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78066_MethodInfo,
	&InternalEnumerator_1_Dispose_m78068_MethodInfo,
	&InternalEnumerator_1_get_Current_m78070_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10896_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13040_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10896_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13040_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10896_0_0_0;
extern Il2CppType InternalEnumerator_1_t10896_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10896_GenericClass;
TypeInfo InternalEnumerator_1_t10896_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10896_MethodInfos/* methods */
	, InternalEnumerator_1_t10896_PropertyInfos/* properties */
	, InternalEnumerator_1_t10896_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10896_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10896_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10896_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10896_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10896_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10896_1_0_0/* this_arg */
	, InternalEnumerator_1_t10896_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10896_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10896)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14565_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
extern MethodInfo ICollection_1_get_Count_m103409_MethodInfo;
static PropertyInfo ICollection_1_t14565____Count_PropertyInfo = 
{
	&ICollection_1_t14565_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103409_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103410_MethodInfo;
static PropertyInfo ICollection_1_t14565____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14565_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103410_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14565_PropertyInfos[] =
{
	&ICollection_1_t14565____Count_PropertyInfo,
	&ICollection_1_t14565____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103409_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Count()
MethodInfo ICollection_1_get_Count_m103409_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14565_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103409_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103410_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103410_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14565_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103410_GenericMethod/* genericMethod */

};
extern Il2CppType ClientCertificateType_t3080_0_0_0;
extern Il2CppType ClientCertificateType_t3080_0_0_0;
static ParameterInfo ICollection_1_t14565_ICollection_1_Add_m103411_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClientCertificateType_t3080_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103411_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Add(T)
MethodInfo ICollection_1_Add_m103411_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14565_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14565_ICollection_1_Add_m103411_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103411_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103412_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Clear()
MethodInfo ICollection_1_Clear_m103412_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14565_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103412_GenericMethod/* genericMethod */

};
extern Il2CppType ClientCertificateType_t3080_0_0_0;
static ParameterInfo ICollection_1_t14565_ICollection_1_Contains_m103413_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClientCertificateType_t3080_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103413_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Contains(T)
MethodInfo ICollection_1_Contains_m103413_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14565_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14565_ICollection_1_Contains_m103413_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103413_GenericMethod/* genericMethod */

};
extern Il2CppType ClientCertificateTypeU5BU5D_t3079_0_0_0;
extern Il2CppType ClientCertificateTypeU5BU5D_t3079_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14565_ICollection_1_CopyTo_m103414_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ClientCertificateTypeU5BU5D_t3079_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103414_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103414_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14565_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14565_ICollection_1_CopyTo_m103414_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103414_GenericMethod/* genericMethod */

};
extern Il2CppType ClientCertificateType_t3080_0_0_0;
static ParameterInfo ICollection_1_t14565_ICollection_1_Remove_m103415_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClientCertificateType_t3080_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103415_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Remove(T)
MethodInfo ICollection_1_Remove_m103415_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14565_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14565_ICollection_1_Remove_m103415_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103415_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14565_MethodInfos[] =
{
	&ICollection_1_get_Count_m103409_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103410_MethodInfo,
	&ICollection_1_Add_m103411_MethodInfo,
	&ICollection_1_Clear_m103412_MethodInfo,
	&ICollection_1_Contains_m103413_MethodInfo,
	&ICollection_1_CopyTo_m103414_MethodInfo,
	&ICollection_1_Remove_m103415_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14567_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14565_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14567_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14565_0_0_0;
extern Il2CppType ICollection_1_t14565_1_0_0;
struct ICollection_1_t14565;
extern Il2CppGenericClass ICollection_1_t14565_GenericClass;
TypeInfo ICollection_1_t14565_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14565_MethodInfos/* methods */
	, ICollection_1_t14565_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14565_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14565_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14565_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14565_0_0_0/* byval_arg */
	, &ICollection_1_t14565_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14565_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
extern Il2CppType IEnumerator_1_t13040_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103416_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103416_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14567_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13040_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103416_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14567_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103416_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14567_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14567_0_0_0;
extern Il2CppType IEnumerable_1_t14567_1_0_0;
struct IEnumerable_1_t14567;
extern Il2CppGenericClass IEnumerable_1_t14567_GenericClass;
TypeInfo IEnumerable_1_t14567_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14567_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14567_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14567_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14567_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14567_0_0_0/* byval_arg */
	, &IEnumerable_1_t14567_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14567_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14566_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
extern MethodInfo IList_1_get_Item_m103417_MethodInfo;
extern MethodInfo IList_1_set_Item_m103418_MethodInfo;
static PropertyInfo IList_1_t14566____Item_PropertyInfo = 
{
	&IList_1_t14566_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103417_MethodInfo/* get */
	, &IList_1_set_Item_m103418_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14566_PropertyInfos[] =
{
	&IList_1_t14566____Item_PropertyInfo,
	NULL
};
extern Il2CppType ClientCertificateType_t3080_0_0_0;
static ParameterInfo IList_1_t14566_IList_1_IndexOf_m103419_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClientCertificateType_t3080_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103419_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103419_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14566_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14566_IList_1_IndexOf_m103419_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103419_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ClientCertificateType_t3080_0_0_0;
static ParameterInfo IList_1_t14566_IList_1_Insert_m103420_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ClientCertificateType_t3080_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103420_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103420_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14566_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14566_IList_1_Insert_m103420_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103420_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14566_IList_1_RemoveAt_m103421_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103421_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103421_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14566_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14566_IList_1_RemoveAt_m103421_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103421_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14566_IList_1_get_Item_m103417_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType ClientCertificateType_t3080_0_0_0;
extern void* RuntimeInvoker_ClientCertificateType_t3080_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103417_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103417_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14566_il2cpp_TypeInfo/* declaring_type */
	, &ClientCertificateType_t3080_0_0_0/* return_type */
	, RuntimeInvoker_ClientCertificateType_t3080_Int32_t23/* invoker_method */
	, IList_1_t14566_IList_1_get_Item_m103417_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103417_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ClientCertificateType_t3080_0_0_0;
static ParameterInfo IList_1_t14566_IList_1_set_Item_m103418_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ClientCertificateType_t3080_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103418_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103418_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14566_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14566_IList_1_set_Item_m103418_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103418_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14566_MethodInfos[] =
{
	&IList_1_IndexOf_m103419_MethodInfo,
	&IList_1_Insert_m103420_MethodInfo,
	&IList_1_RemoveAt_m103421_MethodInfo,
	&IList_1_get_Item_m103417_MethodInfo,
	&IList_1_set_Item_m103418_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14566_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14565_il2cpp_TypeInfo,
	&IEnumerable_1_t14567_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14566_0_0_0;
extern Il2CppType IList_1_t14566_1_0_0;
struct IList_1_t14566;
extern Il2CppGenericClass IList_1_t14566_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14566_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14566_MethodInfos/* methods */
	, IList_1_t14566_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14566_il2cpp_TypeInfo/* element_class */
	, IList_1_t14566_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14566_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14566_0_0_0/* byval_arg */
	, &IList_1_t14566_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14566_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13042_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
extern MethodInfo IEnumerator_1_get_Current_m103422_MethodInfo;
static PropertyInfo IEnumerator_1_t13042____Current_PropertyInfo = 
{
	&IEnumerator_1_t13042_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103422_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13042_PropertyInfos[] =
{
	&IEnumerator_1_t13042____Current_PropertyInfo,
	NULL
};
extern Il2CppType HandshakeType_t3081_0_0_0;
extern void* RuntimeInvoker_HandshakeType_t3081 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103422_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103422_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13042_il2cpp_TypeInfo/* declaring_type */
	, &HandshakeType_t3081_0_0_0/* return_type */
	, RuntimeInvoker_HandshakeType_t3081/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103422_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13042_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103422_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13042_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13042_0_0_0;
extern Il2CppType IEnumerator_1_t13042_1_0_0;
struct IEnumerator_1_t13042;
extern Il2CppGenericClass IEnumerator_1_t13042_GenericClass;
TypeInfo IEnumerator_1_t13042_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13042_MethodInfos/* methods */
	, IEnumerator_1_t13042_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13042_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13042_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13042_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13042_0_0_0/* byval_arg */
	, &IEnumerator_1_t13042_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13042_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10897_il2cpp_TypeInfo;

extern TypeInfo HandshakeType_t3081_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78076_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisHandshakeType_t3081_m90999_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.HandshakeType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.HandshakeType>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisHandshakeType_t3081_m90999 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78071_MethodInfo;
 void InternalEnumerator_1__ctor_m78071 (InternalEnumerator_1_t10897 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78072_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78072 (InternalEnumerator_1_t10897 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78073_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78073 (InternalEnumerator_1_t10897 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m78076(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78076_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&HandshakeType_t3081_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78074_MethodInfo;
 void InternalEnumerator_1_Dispose_m78074 (InternalEnumerator_1_t10897 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78075_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78075 (InternalEnumerator_1_t10897 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7045(L_1, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m78076 (InternalEnumerator_1_t10897 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t826 * L_1 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_1, (String_t*) &_stringLiteral2022, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t826 * L_3 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_3, (String_t*) &_stringLiteral2023, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7045(L_5, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		uint8_t L_8 = Array_InternalArray__get_Item_TisHandshakeType_t3081_m90999(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisHandshakeType_t3081_m90999_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10897____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10897_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10897, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10897____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10897_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10897, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10897_FieldInfos[] =
{
	&InternalEnumerator_1_t10897____array_0_FieldInfo,
	&InternalEnumerator_1_t10897____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10897____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10897_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78073_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10897____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10897_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78076_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10897_PropertyInfos[] =
{
	&InternalEnumerator_1_t10897____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10897____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10897_InternalEnumerator_1__ctor_m78071_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78071_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78071_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78071/* method */
	, &InternalEnumerator_1_t10897_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10897_InternalEnumerator_1__ctor_m78071_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78071_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78072_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78072_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78072/* method */
	, &InternalEnumerator_1_t10897_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78072_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78073_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78073_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78073/* method */
	, &InternalEnumerator_1_t10897_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78073_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78074_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78074_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78074/* method */
	, &InternalEnumerator_1_t10897_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78074_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78075_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78075_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78075/* method */
	, &InternalEnumerator_1_t10897_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78075_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeType_t3081_0_0_0;
extern void* RuntimeInvoker_HandshakeType_t3081 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78076_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78076_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78076/* method */
	, &InternalEnumerator_1_t10897_il2cpp_TypeInfo/* declaring_type */
	, &HandshakeType_t3081_0_0_0/* return_type */
	, RuntimeInvoker_HandshakeType_t3081/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78076_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10897_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78071_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78072_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78073_MethodInfo,
	&InternalEnumerator_1_Dispose_m78074_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78075_MethodInfo,
	&InternalEnumerator_1_get_Current_m78076_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10897_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78073_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78075_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78072_MethodInfo,
	&InternalEnumerator_1_Dispose_m78074_MethodInfo,
	&InternalEnumerator_1_get_Current_m78076_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10897_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13042_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10897_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13042_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10897_0_0_0;
extern Il2CppType InternalEnumerator_1_t10897_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10897_GenericClass;
TypeInfo InternalEnumerator_1_t10897_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10897_MethodInfos/* methods */
	, InternalEnumerator_1_t10897_PropertyInfos/* properties */
	, InternalEnumerator_1_t10897_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10897_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10897_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10897_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10897_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10897_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10897_1_0_0/* this_arg */
	, InternalEnumerator_1_t10897_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10897_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10897)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14568_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
extern MethodInfo ICollection_1_get_Count_m103423_MethodInfo;
static PropertyInfo ICollection_1_t14568____Count_PropertyInfo = 
{
	&ICollection_1_t14568_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103423_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103424_MethodInfo;
static PropertyInfo ICollection_1_t14568____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14568_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103424_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14568_PropertyInfos[] =
{
	&ICollection_1_t14568____Count_PropertyInfo,
	&ICollection_1_t14568____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103423_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_Count()
MethodInfo ICollection_1_get_Count_m103423_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14568_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103423_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103424_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103424_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14568_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103424_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeType_t3081_0_0_0;
extern Il2CppType HandshakeType_t3081_0_0_0;
static ParameterInfo ICollection_1_t14568_ICollection_1_Add_m103425_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeType_t3081_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103425_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Add(T)
MethodInfo ICollection_1_Add_m103425_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14568_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Byte_t779/* invoker_method */
	, ICollection_1_t14568_ICollection_1_Add_m103425_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103425_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103426_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Clear()
MethodInfo ICollection_1_Clear_m103426_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14568_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103426_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeType_t3081_0_0_0;
static ParameterInfo ICollection_1_t14568_ICollection_1_Contains_m103427_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeType_t3081_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103427_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Contains(T)
MethodInfo ICollection_1_Contains_m103427_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14568_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Byte_t779/* invoker_method */
	, ICollection_1_t14568_ICollection_1_Contains_m103427_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103427_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeTypeU5BU5D_t11575_0_0_0;
extern Il2CppType HandshakeTypeU5BU5D_t11575_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14568_ICollection_1_CopyTo_m103428_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeTypeU5BU5D_t11575_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103428_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103428_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14568_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14568_ICollection_1_CopyTo_m103428_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103428_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeType_t3081_0_0_0;
static ParameterInfo ICollection_1_t14568_ICollection_1_Remove_m103429_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeType_t3081_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103429_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Remove(T)
MethodInfo ICollection_1_Remove_m103429_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14568_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Byte_t779/* invoker_method */
	, ICollection_1_t14568_ICollection_1_Remove_m103429_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103429_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14568_MethodInfos[] =
{
	&ICollection_1_get_Count_m103423_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103424_MethodInfo,
	&ICollection_1_Add_m103425_MethodInfo,
	&ICollection_1_Clear_m103426_MethodInfo,
	&ICollection_1_Contains_m103427_MethodInfo,
	&ICollection_1_CopyTo_m103428_MethodInfo,
	&ICollection_1_Remove_m103429_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14570_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14568_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14570_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14568_0_0_0;
extern Il2CppType ICollection_1_t14568_1_0_0;
struct ICollection_1_t14568;
extern Il2CppGenericClass ICollection_1_t14568_GenericClass;
TypeInfo ICollection_1_t14568_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14568_MethodInfos/* methods */
	, ICollection_1_t14568_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14568_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14568_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14568_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14568_0_0_0/* byval_arg */
	, &ICollection_1_t14568_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14568_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
extern Il2CppType IEnumerator_1_t13042_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103430_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103430_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14570_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13042_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103430_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14570_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103430_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14570_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14570_0_0_0;
extern Il2CppType IEnumerable_1_t14570_1_0_0;
struct IEnumerable_1_t14570;
extern Il2CppGenericClass IEnumerable_1_t14570_GenericClass;
TypeInfo IEnumerable_1_t14570_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14570_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14570_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14570_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14570_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14570_0_0_0/* byval_arg */
	, &IEnumerable_1_t14570_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14570_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14569_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
extern MethodInfo IList_1_get_Item_m103431_MethodInfo;
extern MethodInfo IList_1_set_Item_m103432_MethodInfo;
static PropertyInfo IList_1_t14569____Item_PropertyInfo = 
{
	&IList_1_t14569_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103431_MethodInfo/* get */
	, &IList_1_set_Item_m103432_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14569_PropertyInfos[] =
{
	&IList_1_t14569____Item_PropertyInfo,
	NULL
};
extern Il2CppType HandshakeType_t3081_0_0_0;
static ParameterInfo IList_1_t14569_IList_1_IndexOf_m103433_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeType_t3081_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103433_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103433_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14569_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Byte_t779/* invoker_method */
	, IList_1_t14569_IList_1_IndexOf_m103433_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103433_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType HandshakeType_t3081_0_0_0;
static ParameterInfo IList_1_t14569_IList_1_Insert_m103434_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &HandshakeType_t3081_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103434_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103434_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14569_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Byte_t779/* invoker_method */
	, IList_1_t14569_IList_1_Insert_m103434_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103434_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14569_IList_1_RemoveAt_m103435_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103435_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103435_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14569_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14569_IList_1_RemoveAt_m103435_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103435_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14569_IList_1_get_Item_m103431_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType HandshakeType_t3081_0_0_0;
extern void* RuntimeInvoker_HandshakeType_t3081_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103431_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103431_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14569_il2cpp_TypeInfo/* declaring_type */
	, &HandshakeType_t3081_0_0_0/* return_type */
	, RuntimeInvoker_HandshakeType_t3081_Int32_t23/* invoker_method */
	, IList_1_t14569_IList_1_get_Item_m103431_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103431_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType HandshakeType_t3081_0_0_0;
static ParameterInfo IList_1_t14569_IList_1_set_Item_m103432_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &HandshakeType_t3081_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103432_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103432_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14569_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Byte_t779/* invoker_method */
	, IList_1_t14569_IList_1_set_Item_m103432_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103432_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14569_MethodInfos[] =
{
	&IList_1_IndexOf_m103433_MethodInfo,
	&IList_1_Insert_m103434_MethodInfo,
	&IList_1_RemoveAt_m103435_MethodInfo,
	&IList_1_get_Item_m103431_MethodInfo,
	&IList_1_set_Item_m103432_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14569_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14568_il2cpp_TypeInfo,
	&IEnumerable_1_t14570_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14569_0_0_0;
extern Il2CppType IList_1_t14569_1_0_0;
struct IList_1_t14569;
extern Il2CppGenericClass IList_1_t14569_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14569_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14569_MethodInfos/* methods */
	, IList_1_t14569_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14569_il2cpp_TypeInfo/* element_class */
	, IList_1_t14569_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14569_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14569_0_0_0/* byval_arg */
	, &IList_1_t14569_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14569_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13044_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.SerializableAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.SerializableAttribute>
extern MethodInfo IEnumerator_1_get_Current_m103436_MethodInfo;
static PropertyInfo IEnumerator_1_t13044____Current_PropertyInfo = 
{
	&IEnumerator_1_t13044_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103436_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13044_PropertyInfos[] =
{
	&IEnumerator_1_t13044____Current_PropertyInfo,
	NULL
};
extern Il2CppType SerializableAttribute_t3129_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103436_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.SerializableAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103436_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13044_il2cpp_TypeInfo/* declaring_type */
	, &SerializableAttribute_t3129_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103436_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13044_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103436_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13044_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13044_0_0_0;
extern Il2CppType IEnumerator_1_t13044_1_0_0;
struct IEnumerator_1_t13044;
extern Il2CppGenericClass IEnumerator_1_t13044_GenericClass;
TypeInfo IEnumerator_1_t13044_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13044_MethodInfos/* methods */
	, IEnumerator_1_t13044_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13044_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13044_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13044_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13044_0_0_0/* byval_arg */
	, &IEnumerator_1_t13044_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13044_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10898_il2cpp_TypeInfo;

extern TypeInfo SerializableAttribute_t3129_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78082_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSerializableAttribute_t3129_m91010_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.SerializableAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.SerializableAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisSerializableAttribute_t3129_m91010(__this, p0, method) (SerializableAttribute_t3129 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.SerializableAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.SerializableAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.SerializableAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.SerializableAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.SerializableAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.SerializableAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.SerializableAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10898____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10898_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10898, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10898____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10898_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10898, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10898_FieldInfos[] =
{
	&InternalEnumerator_1_t10898____array_0_FieldInfo,
	&InternalEnumerator_1_t10898____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78079_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10898____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10898_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78079_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10898____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10898_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78082_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10898_PropertyInfos[] =
{
	&InternalEnumerator_1_t10898____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10898____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10898_InternalEnumerator_1__ctor_m78077_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78077_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.SerializableAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78077_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10898_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10898_InternalEnumerator_1__ctor_m78077_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78077_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78078_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.SerializableAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78078_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10898_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78078_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78079_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.SerializableAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78079_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10898_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78079_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78080_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.SerializableAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78080_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10898_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78080_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78081_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.SerializableAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78081_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10898_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78081_GenericMethod/* genericMethod */

};
extern Il2CppType SerializableAttribute_t3129_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78082_GenericMethod;
// T System.Array/InternalEnumerator`1<System.SerializableAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78082_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10898_il2cpp_TypeInfo/* declaring_type */
	, &SerializableAttribute_t3129_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78082_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10898_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78077_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78078_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78079_MethodInfo,
	&InternalEnumerator_1_Dispose_m78080_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78081_MethodInfo,
	&InternalEnumerator_1_get_Current_m78082_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78081_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78078_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78080_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10898_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78079_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78081_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78078_MethodInfo,
	&InternalEnumerator_1_Dispose_m78080_MethodInfo,
	&InternalEnumerator_1_get_Current_m78082_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10898_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13044_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10898_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13044_il2cpp_TypeInfo, 8},
};
extern TypeInfo SerializableAttribute_t3129_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10898_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78082_MethodInfo/* Method Usage */,
	&SerializableAttribute_t3129_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisSerializableAttribute_t3129_m91010_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10898_0_0_0;
extern Il2CppType InternalEnumerator_1_t10898_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10898_GenericClass;
TypeInfo InternalEnumerator_1_t10898_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10898_MethodInfos/* methods */
	, InternalEnumerator_1_t10898_PropertyInfos/* properties */
	, InternalEnumerator_1_t10898_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10898_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10898_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10898_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10898_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10898_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10898_1_0_0/* this_arg */
	, InternalEnumerator_1_t10898_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10898_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10898_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10898)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14571_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.SerializableAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.SerializableAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.SerializableAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.SerializableAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.SerializableAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.SerializableAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.SerializableAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.SerializableAttribute>
extern MethodInfo ICollection_1_get_Count_m103437_MethodInfo;
static PropertyInfo ICollection_1_t14571____Count_PropertyInfo = 
{
	&ICollection_1_t14571_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103437_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103438_MethodInfo;
static PropertyInfo ICollection_1_t14571____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14571_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103438_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14571_PropertyInfos[] =
{
	&ICollection_1_t14571____Count_PropertyInfo,
	&ICollection_1_t14571____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103437_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.SerializableAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m103437_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14571_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103437_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103438_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.SerializableAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103438_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14571_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103438_GenericMethod/* genericMethod */

};
extern Il2CppType SerializableAttribute_t3129_0_0_0;
extern Il2CppType SerializableAttribute_t3129_0_0_0;
static ParameterInfo ICollection_1_t14571_ICollection_1_Add_m103439_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SerializableAttribute_t3129_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103439_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.SerializableAttribute>::Add(T)
MethodInfo ICollection_1_Add_m103439_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14571_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14571_ICollection_1_Add_m103439_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103439_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103440_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.SerializableAttribute>::Clear()
MethodInfo ICollection_1_Clear_m103440_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14571_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103440_GenericMethod/* genericMethod */

};
extern Il2CppType SerializableAttribute_t3129_0_0_0;
static ParameterInfo ICollection_1_t14571_ICollection_1_Contains_m103441_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SerializableAttribute_t3129_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103441_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.SerializableAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m103441_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14571_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14571_ICollection_1_Contains_m103441_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103441_GenericMethod/* genericMethod */

};
extern Il2CppType SerializableAttributeU5BU5D_t11180_0_0_0;
extern Il2CppType SerializableAttributeU5BU5D_t11180_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14571_ICollection_1_CopyTo_m103442_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SerializableAttributeU5BU5D_t11180_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103442_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.SerializableAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103442_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14571_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14571_ICollection_1_CopyTo_m103442_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103442_GenericMethod/* genericMethod */

};
extern Il2CppType SerializableAttribute_t3129_0_0_0;
static ParameterInfo ICollection_1_t14571_ICollection_1_Remove_m103443_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SerializableAttribute_t3129_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103443_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.SerializableAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m103443_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14571_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14571_ICollection_1_Remove_m103443_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103443_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14571_MethodInfos[] =
{
	&ICollection_1_get_Count_m103437_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103438_MethodInfo,
	&ICollection_1_Add_m103439_MethodInfo,
	&ICollection_1_Clear_m103440_MethodInfo,
	&ICollection_1_Contains_m103441_MethodInfo,
	&ICollection_1_CopyTo_m103442_MethodInfo,
	&ICollection_1_Remove_m103443_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14573_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14571_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14573_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14571_0_0_0;
extern Il2CppType ICollection_1_t14571_1_0_0;
struct ICollection_1_t14571;
extern Il2CppGenericClass ICollection_1_t14571_GenericClass;
TypeInfo ICollection_1_t14571_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14571_MethodInfos/* methods */
	, ICollection_1_t14571_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14571_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14571_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14571_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14571_0_0_0/* byval_arg */
	, &ICollection_1_t14571_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14571_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.SerializableAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.SerializableAttribute>
extern Il2CppType IEnumerator_1_t13044_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103444_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.SerializableAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103444_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14573_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13044_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103444_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14573_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103444_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14573_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14573_0_0_0;
extern Il2CppType IEnumerable_1_t14573_1_0_0;
struct IEnumerable_1_t14573;
extern Il2CppGenericClass IEnumerable_1_t14573_GenericClass;
TypeInfo IEnumerable_1_t14573_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14573_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14573_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14573_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14573_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14573_0_0_0/* byval_arg */
	, &IEnumerable_1_t14573_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14573_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14572_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.SerializableAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.SerializableAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.SerializableAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.SerializableAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.SerializableAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.SerializableAttribute>
extern MethodInfo IList_1_get_Item_m103445_MethodInfo;
extern MethodInfo IList_1_set_Item_m103446_MethodInfo;
static PropertyInfo IList_1_t14572____Item_PropertyInfo = 
{
	&IList_1_t14572_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103445_MethodInfo/* get */
	, &IList_1_set_Item_m103446_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14572_PropertyInfos[] =
{
	&IList_1_t14572____Item_PropertyInfo,
	NULL
};
extern Il2CppType SerializableAttribute_t3129_0_0_0;
static ParameterInfo IList_1_t14572_IList_1_IndexOf_m103447_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SerializableAttribute_t3129_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103447_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.SerializableAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103447_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14572_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14572_IList_1_IndexOf_m103447_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103447_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType SerializableAttribute_t3129_0_0_0;
static ParameterInfo IList_1_t14572_IList_1_Insert_m103448_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SerializableAttribute_t3129_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103448_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.SerializableAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103448_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14572_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14572_IList_1_Insert_m103448_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103448_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14572_IList_1_RemoveAt_m103449_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103449_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.SerializableAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103449_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14572_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14572_IList_1_RemoveAt_m103449_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103449_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14572_IList_1_get_Item_m103445_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType SerializableAttribute_t3129_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103445_GenericMethod;
// T System.Collections.Generic.IList`1<System.SerializableAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103445_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14572_il2cpp_TypeInfo/* declaring_type */
	, &SerializableAttribute_t3129_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14572_IList_1_get_Item_m103445_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103445_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType SerializableAttribute_t3129_0_0_0;
static ParameterInfo IList_1_t14572_IList_1_set_Item_m103446_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SerializableAttribute_t3129_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103446_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.SerializableAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103446_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14572_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14572_IList_1_set_Item_m103446_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103446_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14572_MethodInfos[] =
{
	&IList_1_IndexOf_m103447_MethodInfo,
	&IList_1_Insert_m103448_MethodInfo,
	&IList_1_RemoveAt_m103449_MethodInfo,
	&IList_1_get_Item_m103445_MethodInfo,
	&IList_1_set_Item_m103446_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14572_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14571_il2cpp_TypeInfo,
	&IEnumerable_1_t14573_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14572_0_0_0;
extern Il2CppType IList_1_t14572_1_0_0;
struct IList_1_t14572;
extern Il2CppGenericClass IList_1_t14572_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14572_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14572_MethodInfos/* methods */
	, IList_1_t14572_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14572_il2cpp_TypeInfo/* element_class */
	, IList_1_t14572_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14572_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14572_0_0_0/* byval_arg */
	, &IList_1_t14572_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14572_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13046_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.AttributeUsageAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.AttributeUsageAttribute>
extern MethodInfo IEnumerator_1_get_Current_m103450_MethodInfo;
static PropertyInfo IEnumerator_1_t13046____Current_PropertyInfo = 
{
	&IEnumerator_1_t13046_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103450_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13046_PropertyInfos[] =
{
	&IEnumerator_1_t13046____Current_PropertyInfo,
	NULL
};
extern Il2CppType AttributeUsageAttribute_t946_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103450_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.AttributeUsageAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103450_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13046_il2cpp_TypeInfo/* declaring_type */
	, &AttributeUsageAttribute_t946_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103450_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13046_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103450_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13046_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13046_0_0_0;
extern Il2CppType IEnumerator_1_t13046_1_0_0;
struct IEnumerator_1_t13046;
extern Il2CppGenericClass IEnumerator_1_t13046_GenericClass;
TypeInfo IEnumerator_1_t13046_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13046_MethodInfos/* methods */
	, IEnumerator_1_t13046_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13046_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13046_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13046_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13046_0_0_0/* byval_arg */
	, &IEnumerator_1_t13046_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13046_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10899_il2cpp_TypeInfo;

extern TypeInfo AttributeUsageAttribute_t946_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78088_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAttributeUsageAttribute_t946_m91021_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.AttributeUsageAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.AttributeUsageAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAttributeUsageAttribute_t946_m91021(__this, p0, method) (AttributeUsageAttribute_t946 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10899____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10899_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10899, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10899____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10899_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10899, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10899_FieldInfos[] =
{
	&InternalEnumerator_1_t10899____array_0_FieldInfo,
	&InternalEnumerator_1_t10899____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78085_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10899____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10899_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78085_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10899____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10899_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78088_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10899_PropertyInfos[] =
{
	&InternalEnumerator_1_t10899____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10899____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10899_InternalEnumerator_1__ctor_m78083_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78083_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78083_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10899_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10899_InternalEnumerator_1__ctor_m78083_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78083_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78084_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78084_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10899_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78084_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78085_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78085_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10899_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78085_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78086_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78086_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10899_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78086_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78087_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78087_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10899_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78087_GenericMethod/* genericMethod */

};
extern Il2CppType AttributeUsageAttribute_t946_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78088_GenericMethod;
// T System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78088_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10899_il2cpp_TypeInfo/* declaring_type */
	, &AttributeUsageAttribute_t946_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78088_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10899_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78083_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78084_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78085_MethodInfo,
	&InternalEnumerator_1_Dispose_m78086_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78087_MethodInfo,
	&InternalEnumerator_1_get_Current_m78088_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78087_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78084_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78086_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10899_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78085_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78087_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78084_MethodInfo,
	&InternalEnumerator_1_Dispose_m78086_MethodInfo,
	&InternalEnumerator_1_get_Current_m78088_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10899_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13046_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10899_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13046_il2cpp_TypeInfo, 8},
};
extern TypeInfo AttributeUsageAttribute_t946_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10899_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78088_MethodInfo/* Method Usage */,
	&AttributeUsageAttribute_t946_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAttributeUsageAttribute_t946_m91021_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10899_0_0_0;
extern Il2CppType InternalEnumerator_1_t10899_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10899_GenericClass;
TypeInfo InternalEnumerator_1_t10899_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10899_MethodInfos/* methods */
	, InternalEnumerator_1_t10899_PropertyInfos/* properties */
	, InternalEnumerator_1_t10899_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10899_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10899_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10899_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10899_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10899_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10899_1_0_0/* this_arg */
	, InternalEnumerator_1_t10899_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10899_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10899_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10899)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14574_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>
extern MethodInfo ICollection_1_get_Count_m103451_MethodInfo;
static PropertyInfo ICollection_1_t14574____Count_PropertyInfo = 
{
	&ICollection_1_t14574_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103451_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103452_MethodInfo;
static PropertyInfo ICollection_1_t14574____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14574_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103452_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14574_PropertyInfos[] =
{
	&ICollection_1_t14574____Count_PropertyInfo,
	&ICollection_1_t14574____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103451_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m103451_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14574_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103451_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103452_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103452_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14574_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103452_GenericMethod/* genericMethod */

};
extern Il2CppType AttributeUsageAttribute_t946_0_0_0;
extern Il2CppType AttributeUsageAttribute_t946_0_0_0;
static ParameterInfo ICollection_1_t14574_ICollection_1_Add_m103453_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeUsageAttribute_t946_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103453_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::Add(T)
MethodInfo ICollection_1_Add_m103453_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14574_ICollection_1_Add_m103453_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103453_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103454_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::Clear()
MethodInfo ICollection_1_Clear_m103454_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103454_GenericMethod/* genericMethod */

};
extern Il2CppType AttributeUsageAttribute_t946_0_0_0;
static ParameterInfo ICollection_1_t14574_ICollection_1_Contains_m103455_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeUsageAttribute_t946_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103455_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m103455_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14574_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14574_ICollection_1_Contains_m103455_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103455_GenericMethod/* genericMethod */

};
extern Il2CppType AttributeUsageAttributeU5BU5D_t11181_0_0_0;
extern Il2CppType AttributeUsageAttributeU5BU5D_t11181_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14574_ICollection_1_CopyTo_m103456_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AttributeUsageAttributeU5BU5D_t11181_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103456_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103456_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14574_ICollection_1_CopyTo_m103456_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103456_GenericMethod/* genericMethod */

};
extern Il2CppType AttributeUsageAttribute_t946_0_0_0;
static ParameterInfo ICollection_1_t14574_ICollection_1_Remove_m103457_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeUsageAttribute_t946_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103457_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m103457_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14574_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14574_ICollection_1_Remove_m103457_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103457_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14574_MethodInfos[] =
{
	&ICollection_1_get_Count_m103451_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103452_MethodInfo,
	&ICollection_1_Add_m103453_MethodInfo,
	&ICollection_1_Clear_m103454_MethodInfo,
	&ICollection_1_Contains_m103455_MethodInfo,
	&ICollection_1_CopyTo_m103456_MethodInfo,
	&ICollection_1_Remove_m103457_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14576_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14574_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14576_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14574_0_0_0;
extern Il2CppType ICollection_1_t14574_1_0_0;
struct ICollection_1_t14574;
extern Il2CppGenericClass ICollection_1_t14574_GenericClass;
TypeInfo ICollection_1_t14574_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14574_MethodInfos/* methods */
	, ICollection_1_t14574_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14574_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14574_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14574_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14574_0_0_0/* byval_arg */
	, &ICollection_1_t14574_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14574_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.AttributeUsageAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.AttributeUsageAttribute>
extern Il2CppType IEnumerator_1_t13046_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103458_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.AttributeUsageAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103458_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14576_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13046_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103458_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14576_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103458_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14576_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14576_0_0_0;
extern Il2CppType IEnumerable_1_t14576_1_0_0;
struct IEnumerable_1_t14576;
extern Il2CppGenericClass IEnumerable_1_t14576_GenericClass;
TypeInfo IEnumerable_1_t14576_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14576_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14576_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14576_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14576_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14576_0_0_0/* byval_arg */
	, &IEnumerable_1_t14576_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14576_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14575_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.AttributeUsageAttribute>
extern MethodInfo IList_1_get_Item_m103459_MethodInfo;
extern MethodInfo IList_1_set_Item_m103460_MethodInfo;
static PropertyInfo IList_1_t14575____Item_PropertyInfo = 
{
	&IList_1_t14575_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103459_MethodInfo/* get */
	, &IList_1_set_Item_m103460_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14575_PropertyInfos[] =
{
	&IList_1_t14575____Item_PropertyInfo,
	NULL
};
extern Il2CppType AttributeUsageAttribute_t946_0_0_0;
static ParameterInfo IList_1_t14575_IList_1_IndexOf_m103461_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeUsageAttribute_t946_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103461_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103461_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14575_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14575_IList_1_IndexOf_m103461_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103461_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType AttributeUsageAttribute_t946_0_0_0;
static ParameterInfo IList_1_t14575_IList_1_Insert_m103462_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AttributeUsageAttribute_t946_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103462_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103462_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14575_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14575_IList_1_Insert_m103462_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103462_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14575_IList_1_RemoveAt_m103463_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103463_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103463_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14575_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14575_IList_1_RemoveAt_m103463_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103463_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14575_IList_1_get_Item_m103459_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType AttributeUsageAttribute_t946_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103459_GenericMethod;
// T System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103459_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14575_il2cpp_TypeInfo/* declaring_type */
	, &AttributeUsageAttribute_t946_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14575_IList_1_get_Item_m103459_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103459_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType AttributeUsageAttribute_t946_0_0_0;
static ParameterInfo IList_1_t14575_IList_1_set_Item_m103460_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AttributeUsageAttribute_t946_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103460_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103460_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14575_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14575_IList_1_set_Item_m103460_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103460_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14575_MethodInfos[] =
{
	&IList_1_IndexOf_m103461_MethodInfo,
	&IList_1_Insert_m103462_MethodInfo,
	&IList_1_RemoveAt_m103463_MethodInfo,
	&IList_1_get_Item_m103459_MethodInfo,
	&IList_1_set_Item_m103460_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14575_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14574_il2cpp_TypeInfo,
	&IEnumerable_1_t14576_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14575_0_0_0;
extern Il2CppType IList_1_t14575_1_0_0;
struct IList_1_t14575;
extern Il2CppGenericClass IList_1_t14575_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14575_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14575_MethodInfos/* methods */
	, IList_1_t14575_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14575_il2cpp_TypeInfo/* element_class */
	, IList_1_t14575_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14575_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14575_0_0_0/* byval_arg */
	, &IList_1_t14575_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14575_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13048_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>
extern MethodInfo IEnumerator_1_get_Current_m103464_MethodInfo;
static PropertyInfo IEnumerator_1_t13048____Current_PropertyInfo = 
{
	&IEnumerator_1_t13048_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103464_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13048_PropertyInfos[] =
{
	&IEnumerator_1_t13048____Current_PropertyInfo,
	NULL
};
extern Il2CppType ComVisibleAttribute_t422_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103464_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103464_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13048_il2cpp_TypeInfo/* declaring_type */
	, &ComVisibleAttribute_t422_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103464_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13048_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103464_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13048_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13048_0_0_0;
extern Il2CppType IEnumerator_1_t13048_1_0_0;
struct IEnumerator_1_t13048;
extern Il2CppGenericClass IEnumerator_1_t13048_GenericClass;
TypeInfo IEnumerator_1_t13048_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13048_MethodInfos/* methods */
	, IEnumerator_1_t13048_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13048_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13048_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13048_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13048_0_0_0/* byval_arg */
	, &IEnumerator_1_t13048_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13048_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10900_il2cpp_TypeInfo;

extern TypeInfo ComVisibleAttribute_t422_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78094_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisComVisibleAttribute_t422_m91032_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComVisibleAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComVisibleAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisComVisibleAttribute_t422_m91032(__this, p0, method) (ComVisibleAttribute_t422 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10900____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10900_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10900, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10900____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10900_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10900, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10900_FieldInfos[] =
{
	&InternalEnumerator_1_t10900____array_0_FieldInfo,
	&InternalEnumerator_1_t10900____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78091_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10900____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10900_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78091_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10900____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10900_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78094_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10900_PropertyInfos[] =
{
	&InternalEnumerator_1_t10900____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10900____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10900_InternalEnumerator_1__ctor_m78089_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78089_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78089_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10900_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10900_InternalEnumerator_1__ctor_m78089_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78089_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78090_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78090_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10900_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78090_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78091_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78091_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10900_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78091_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78092_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78092_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10900_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78092_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78093_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78093_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10900_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78093_GenericMethod/* genericMethod */

};
extern Il2CppType ComVisibleAttribute_t422_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78094_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78094_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10900_il2cpp_TypeInfo/* declaring_type */
	, &ComVisibleAttribute_t422_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78094_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10900_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78089_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78090_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78091_MethodInfo,
	&InternalEnumerator_1_Dispose_m78092_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78093_MethodInfo,
	&InternalEnumerator_1_get_Current_m78094_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78093_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78090_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78092_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10900_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78091_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78093_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78090_MethodInfo,
	&InternalEnumerator_1_Dispose_m78092_MethodInfo,
	&InternalEnumerator_1_get_Current_m78094_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10900_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13048_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10900_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13048_il2cpp_TypeInfo, 8},
};
extern TypeInfo ComVisibleAttribute_t422_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10900_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78094_MethodInfo/* Method Usage */,
	&ComVisibleAttribute_t422_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisComVisibleAttribute_t422_m91032_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10900_0_0_0;
extern Il2CppType InternalEnumerator_1_t10900_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10900_GenericClass;
TypeInfo InternalEnumerator_1_t10900_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10900_MethodInfos/* methods */
	, InternalEnumerator_1_t10900_PropertyInfos/* properties */
	, InternalEnumerator_1_t10900_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10900_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10900_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10900_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10900_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10900_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10900_1_0_0/* this_arg */
	, InternalEnumerator_1_t10900_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10900_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10900_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10900)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14577_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>
extern MethodInfo ICollection_1_get_Count_m103465_MethodInfo;
static PropertyInfo ICollection_1_t14577____Count_PropertyInfo = 
{
	&ICollection_1_t14577_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103465_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103466_MethodInfo;
static PropertyInfo ICollection_1_t14577____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14577_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103466_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14577_PropertyInfos[] =
{
	&ICollection_1_t14577____Count_PropertyInfo,
	&ICollection_1_t14577____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103465_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m103465_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14577_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103465_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103466_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103466_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14577_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103466_GenericMethod/* genericMethod */

};
extern Il2CppType ComVisibleAttribute_t422_0_0_0;
extern Il2CppType ComVisibleAttribute_t422_0_0_0;
static ParameterInfo ICollection_1_t14577_ICollection_1_Add_m103467_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComVisibleAttribute_t422_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103467_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::Add(T)
MethodInfo ICollection_1_Add_m103467_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14577_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14577_ICollection_1_Add_m103467_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103467_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103468_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::Clear()
MethodInfo ICollection_1_Clear_m103468_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14577_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103468_GenericMethod/* genericMethod */

};
extern Il2CppType ComVisibleAttribute_t422_0_0_0;
static ParameterInfo ICollection_1_t14577_ICollection_1_Contains_m103469_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComVisibleAttribute_t422_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103469_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m103469_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14577_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14577_ICollection_1_Contains_m103469_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103469_GenericMethod/* genericMethod */

};
extern Il2CppType ComVisibleAttributeU5BU5D_t11182_0_0_0;
extern Il2CppType ComVisibleAttributeU5BU5D_t11182_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14577_ICollection_1_CopyTo_m103470_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ComVisibleAttributeU5BU5D_t11182_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103470_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103470_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14577_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14577_ICollection_1_CopyTo_m103470_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103470_GenericMethod/* genericMethod */

};
extern Il2CppType ComVisibleAttribute_t422_0_0_0;
static ParameterInfo ICollection_1_t14577_ICollection_1_Remove_m103471_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComVisibleAttribute_t422_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103471_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m103471_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14577_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14577_ICollection_1_Remove_m103471_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103471_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14577_MethodInfos[] =
{
	&ICollection_1_get_Count_m103465_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103466_MethodInfo,
	&ICollection_1_Add_m103467_MethodInfo,
	&ICollection_1_Clear_m103468_MethodInfo,
	&ICollection_1_Contains_m103469_MethodInfo,
	&ICollection_1_CopyTo_m103470_MethodInfo,
	&ICollection_1_Remove_m103471_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14579_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14577_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14579_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14577_0_0_0;
extern Il2CppType ICollection_1_t14577_1_0_0;
struct ICollection_1_t14577;
extern Il2CppGenericClass ICollection_1_t14577_GenericClass;
TypeInfo ICollection_1_t14577_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14577_MethodInfos/* methods */
	, ICollection_1_t14577_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14577_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14577_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14577_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14577_0_0_0/* byval_arg */
	, &ICollection_1_t14577_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14577_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComVisibleAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComVisibleAttribute>
extern Il2CppType IEnumerator_1_t13048_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103472_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComVisibleAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103472_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14579_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13048_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103472_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14579_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103472_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14579_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14579_0_0_0;
extern Il2CppType IEnumerable_1_t14579_1_0_0;
struct IEnumerable_1_t14579;
extern Il2CppGenericClass IEnumerable_1_t14579_GenericClass;
TypeInfo IEnumerable_1_t14579_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14579_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14579_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14579_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14579_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14579_0_0_0/* byval_arg */
	, &IEnumerable_1_t14579_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14579_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14578_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>
extern MethodInfo IList_1_get_Item_m103473_MethodInfo;
extern MethodInfo IList_1_set_Item_m103474_MethodInfo;
static PropertyInfo IList_1_t14578____Item_PropertyInfo = 
{
	&IList_1_t14578_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103473_MethodInfo/* get */
	, &IList_1_set_Item_m103474_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14578_PropertyInfos[] =
{
	&IList_1_t14578____Item_PropertyInfo,
	NULL
};
extern Il2CppType ComVisibleAttribute_t422_0_0_0;
static ParameterInfo IList_1_t14578_IList_1_IndexOf_m103475_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComVisibleAttribute_t422_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103475_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103475_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14578_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14578_IList_1_IndexOf_m103475_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103475_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ComVisibleAttribute_t422_0_0_0;
static ParameterInfo IList_1_t14578_IList_1_Insert_m103476_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ComVisibleAttribute_t422_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103476_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103476_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14578_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14578_IList_1_Insert_m103476_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103476_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14578_IList_1_RemoveAt_m103477_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103477_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103477_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14578_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14578_IList_1_RemoveAt_m103477_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103477_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14578_IList_1_get_Item_m103473_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType ComVisibleAttribute_t422_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103473_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103473_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14578_il2cpp_TypeInfo/* declaring_type */
	, &ComVisibleAttribute_t422_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14578_IList_1_get_Item_m103473_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103473_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ComVisibleAttribute_t422_0_0_0;
static ParameterInfo IList_1_t14578_IList_1_set_Item_m103474_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ComVisibleAttribute_t422_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103474_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103474_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14578_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14578_IList_1_set_Item_m103474_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103474_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14578_MethodInfos[] =
{
	&IList_1_IndexOf_m103475_MethodInfo,
	&IList_1_Insert_m103476_MethodInfo,
	&IList_1_RemoveAt_m103477_MethodInfo,
	&IList_1_get_Item_m103473_MethodInfo,
	&IList_1_set_Item_m103474_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14578_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14577_il2cpp_TypeInfo,
	&IEnumerable_1_t14579_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14578_0_0_0;
extern Il2CppType IList_1_t14578_1_0_0;
struct IList_1_t14578;
extern Il2CppGenericClass IList_1_t14578_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14578_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14578_MethodInfos/* methods */
	, IList_1_t14578_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14578_il2cpp_TypeInfo/* element_class */
	, IList_1_t14578_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14578_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14578_0_0_0/* byval_arg */
	, &IList_1_t14578_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14578_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13050_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.CLSCompliantAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.CLSCompliantAttribute>
extern MethodInfo IEnumerator_1_get_Current_m103478_MethodInfo;
static PropertyInfo IEnumerator_1_t13050____Current_PropertyInfo = 
{
	&IEnumerator_1_t13050_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103478_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13050_PropertyInfos[] =
{
	&IEnumerator_1_t13050____Current_PropertyInfo,
	NULL
};
extern Il2CppType CLSCompliantAttribute_t2741_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103478_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.CLSCompliantAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103478_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13050_il2cpp_TypeInfo/* declaring_type */
	, &CLSCompliantAttribute_t2741_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103478_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13050_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103478_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13050_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13050_0_0_0;
extern Il2CppType IEnumerator_1_t13050_1_0_0;
struct IEnumerator_1_t13050;
extern Il2CppGenericClass IEnumerator_1_t13050_GenericClass;
TypeInfo IEnumerator_1_t13050_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13050_MethodInfos/* methods */
	, IEnumerator_1_t13050_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13050_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13050_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13050_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13050_0_0_0/* byval_arg */
	, &IEnumerator_1_t13050_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13050_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10901_il2cpp_TypeInfo;

extern TypeInfo CLSCompliantAttribute_t2741_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78100_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCLSCompliantAttribute_t2741_m91043_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.CLSCompliantAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.CLSCompliantAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisCLSCompliantAttribute_t2741_m91043(__this, p0, method) (CLSCompliantAttribute_t2741 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10901____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10901_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10901, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10901____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10901_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10901, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10901_FieldInfos[] =
{
	&InternalEnumerator_1_t10901____array_0_FieldInfo,
	&InternalEnumerator_1_t10901____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78097_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10901____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10901_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78097_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10901____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10901_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78100_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10901_PropertyInfos[] =
{
	&InternalEnumerator_1_t10901____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10901____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10901_InternalEnumerator_1__ctor_m78095_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78095_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78095_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10901_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10901_InternalEnumerator_1__ctor_m78095_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78095_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78096_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78096_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10901_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78096_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78097_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78097_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10901_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78097_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78098_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78098_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10901_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78098_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78099_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78099_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10901_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78099_GenericMethod/* genericMethod */

};
extern Il2CppType CLSCompliantAttribute_t2741_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78100_GenericMethod;
// T System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78100_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10901_il2cpp_TypeInfo/* declaring_type */
	, &CLSCompliantAttribute_t2741_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78100_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10901_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78095_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78096_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78097_MethodInfo,
	&InternalEnumerator_1_Dispose_m78098_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78099_MethodInfo,
	&InternalEnumerator_1_get_Current_m78100_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78099_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78096_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78098_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10901_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78097_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78099_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78096_MethodInfo,
	&InternalEnumerator_1_Dispose_m78098_MethodInfo,
	&InternalEnumerator_1_get_Current_m78100_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10901_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13050_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10901_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13050_il2cpp_TypeInfo, 8},
};
extern TypeInfo CLSCompliantAttribute_t2741_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10901_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78100_MethodInfo/* Method Usage */,
	&CLSCompliantAttribute_t2741_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisCLSCompliantAttribute_t2741_m91043_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10901_0_0_0;
extern Il2CppType InternalEnumerator_1_t10901_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10901_GenericClass;
TypeInfo InternalEnumerator_1_t10901_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10901_MethodInfos/* methods */
	, InternalEnumerator_1_t10901_PropertyInfos/* properties */
	, InternalEnumerator_1_t10901_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10901_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10901_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10901_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10901_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10901_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10901_1_0_0/* this_arg */
	, InternalEnumerator_1_t10901_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10901_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10901_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10901)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14580_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>
extern MethodInfo ICollection_1_get_Count_m103479_MethodInfo;
static PropertyInfo ICollection_1_t14580____Count_PropertyInfo = 
{
	&ICollection_1_t14580_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103479_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103480_MethodInfo;
static PropertyInfo ICollection_1_t14580____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14580_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103480_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14580_PropertyInfos[] =
{
	&ICollection_1_t14580____Count_PropertyInfo,
	&ICollection_1_t14580____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103479_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m103479_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14580_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103479_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103480_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103480_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14580_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103480_GenericMethod/* genericMethod */

};
extern Il2CppType CLSCompliantAttribute_t2741_0_0_0;
extern Il2CppType CLSCompliantAttribute_t2741_0_0_0;
static ParameterInfo ICollection_1_t14580_ICollection_1_Add_m103481_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CLSCompliantAttribute_t2741_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103481_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::Add(T)
MethodInfo ICollection_1_Add_m103481_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14580_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14580_ICollection_1_Add_m103481_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103481_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103482_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::Clear()
MethodInfo ICollection_1_Clear_m103482_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14580_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103482_GenericMethod/* genericMethod */

};
extern Il2CppType CLSCompliantAttribute_t2741_0_0_0;
static ParameterInfo ICollection_1_t14580_ICollection_1_Contains_m103483_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CLSCompliantAttribute_t2741_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103483_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m103483_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14580_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14580_ICollection_1_Contains_m103483_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103483_GenericMethod/* genericMethod */

};
extern Il2CppType CLSCompliantAttributeU5BU5D_t11183_0_0_0;
extern Il2CppType CLSCompliantAttributeU5BU5D_t11183_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14580_ICollection_1_CopyTo_m103484_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CLSCompliantAttributeU5BU5D_t11183_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103484_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103484_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14580_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14580_ICollection_1_CopyTo_m103484_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103484_GenericMethod/* genericMethod */

};
extern Il2CppType CLSCompliantAttribute_t2741_0_0_0;
static ParameterInfo ICollection_1_t14580_ICollection_1_Remove_m103485_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CLSCompliantAttribute_t2741_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103485_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m103485_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14580_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14580_ICollection_1_Remove_m103485_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103485_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14580_MethodInfos[] =
{
	&ICollection_1_get_Count_m103479_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103480_MethodInfo,
	&ICollection_1_Add_m103481_MethodInfo,
	&ICollection_1_Clear_m103482_MethodInfo,
	&ICollection_1_Contains_m103483_MethodInfo,
	&ICollection_1_CopyTo_m103484_MethodInfo,
	&ICollection_1_Remove_m103485_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14582_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14580_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14582_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14580_0_0_0;
extern Il2CppType ICollection_1_t14580_1_0_0;
struct ICollection_1_t14580;
extern Il2CppGenericClass ICollection_1_t14580_GenericClass;
TypeInfo ICollection_1_t14580_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14580_MethodInfos/* methods */
	, ICollection_1_t14580_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14580_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14580_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14580_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14580_0_0_0/* byval_arg */
	, &ICollection_1_t14580_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14580_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.CLSCompliantAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.CLSCompliantAttribute>
extern Il2CppType IEnumerator_1_t13050_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103486_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.CLSCompliantAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103486_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14582_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13050_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103486_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14582_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103486_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14582_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14582_0_0_0;
extern Il2CppType IEnumerable_1_t14582_1_0_0;
struct IEnumerable_1_t14582;
extern Il2CppGenericClass IEnumerable_1_t14582_GenericClass;
TypeInfo IEnumerable_1_t14582_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14582_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14582_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14582_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14582_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14582_0_0_0/* byval_arg */
	, &IEnumerable_1_t14582_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14582_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14581_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.CLSCompliantAttribute>
extern MethodInfo IList_1_get_Item_m103487_MethodInfo;
extern MethodInfo IList_1_set_Item_m103488_MethodInfo;
static PropertyInfo IList_1_t14581____Item_PropertyInfo = 
{
	&IList_1_t14581_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103487_MethodInfo/* get */
	, &IList_1_set_Item_m103488_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14581_PropertyInfos[] =
{
	&IList_1_t14581____Item_PropertyInfo,
	NULL
};
extern Il2CppType CLSCompliantAttribute_t2741_0_0_0;
static ParameterInfo IList_1_t14581_IList_1_IndexOf_m103489_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CLSCompliantAttribute_t2741_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103489_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103489_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14581_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14581_IList_1_IndexOf_m103489_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103489_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType CLSCompliantAttribute_t2741_0_0_0;
static ParameterInfo IList_1_t14581_IList_1_Insert_m103490_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CLSCompliantAttribute_t2741_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103490_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103490_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14581_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14581_IList_1_Insert_m103490_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103490_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14581_IList_1_RemoveAt_m103491_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103491_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103491_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14581_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14581_IList_1_RemoveAt_m103491_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103491_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14581_IList_1_get_Item_m103487_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType CLSCompliantAttribute_t2741_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103487_GenericMethod;
// T System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103487_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14581_il2cpp_TypeInfo/* declaring_type */
	, &CLSCompliantAttribute_t2741_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14581_IList_1_get_Item_m103487_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103487_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType CLSCompliantAttribute_t2741_0_0_0;
static ParameterInfo IList_1_t14581_IList_1_set_Item_m103488_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CLSCompliantAttribute_t2741_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103488_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103488_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14581_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14581_IList_1_set_Item_m103488_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103488_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14581_MethodInfos[] =
{
	&IList_1_IndexOf_m103489_MethodInfo,
	&IList_1_Insert_m103490_MethodInfo,
	&IList_1_RemoveAt_m103491_MethodInfo,
	&IList_1_get_Item_m103487_MethodInfo,
	&IList_1_set_Item_m103488_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14581_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14580_il2cpp_TypeInfo,
	&IEnumerable_1_t14582_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14581_0_0_0;
extern Il2CppType IList_1_t14581_1_0_0;
struct IList_1_t14581;
extern Il2CppGenericClass IList_1_t14581_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14581_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14581_MethodInfos/* methods */
	, IList_1_t14581_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14581_il2cpp_TypeInfo/* element_class */
	, IList_1_t14581_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14581_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14581_0_0_0/* byval_arg */
	, &IList_1_t14581_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14581_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3776_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Decimal>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.Decimal>
extern Il2CppType Decimal_t917_0_0_0;
extern Il2CppType Decimal_t917_0_0_0;
static ParameterInfo IComparable_1_t3776_IComparable_1_CompareTo_m103492_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Decimal_t917_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Decimal_t917 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m103492_GenericMethod;
// System.Int32 System.IComparable`1<System.Decimal>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m103492_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t3776_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Decimal_t917/* invoker_method */
	, IComparable_1_t3776_IComparable_1_CompareTo_m103492_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparable_1_CompareTo_m103492_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t3776_MethodInfos[] =
{
	&IComparable_1_CompareTo_m103492_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t3776_0_0_0;
extern Il2CppType IComparable_1_t3776_1_0_0;
struct IComparable_1_t3776;
extern Il2CppGenericClass IComparable_1_t3776_GenericClass;
TypeInfo IComparable_1_t3776_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t3776_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t3776_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t3776_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t3776_0_0_0/* byval_arg */
	, &IComparable_1_t3776_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t3776_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3777_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Decimal>::Equals(T)
// Metadata Definition System.IEquatable`1<System.Decimal>
extern Il2CppType Decimal_t917_0_0_0;
static ParameterInfo IEquatable_1_t3777_IEquatable_1_Equals_m103493_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Decimal_t917_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Decimal_t917 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m103493_GenericMethod;
// System.Boolean System.IEquatable`1<System.Decimal>::Equals(T)
MethodInfo IEquatable_1_Equals_m103493_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t3777_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Decimal_t917/* invoker_method */
	, IEquatable_1_t3777_IEquatable_1_Equals_m103493_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEquatable_1_Equals_m103493_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t3777_MethodInfos[] =
{
	&IEquatable_1_Equals_m103493_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t3777_0_0_0;
extern Il2CppType IEquatable_1_t3777_1_0_0;
struct IEquatable_1_t3777;
extern Il2CppGenericClass IEquatable_1_t3777_GenericClass;
TypeInfo IEquatable_1_t3777_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t3777_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t3777_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t3777_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t3777_0_0_0/* byval_arg */
	, &IEquatable_1_t3777_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t3777_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13052_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.UIntPtr>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UIntPtr>
extern MethodInfo IEnumerator_1_get_Current_m103494_MethodInfo;
static PropertyInfo IEnumerator_1_t13052____Current_PropertyInfo = 
{
	&IEnumerator_1_t13052_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103494_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13052_PropertyInfos[] =
{
	&IEnumerator_1_t13052____Current_PropertyInfo,
	NULL
};
extern Il2CppType UIntPtr_t3131_0_0_0;
extern void* RuntimeInvoker_UIntPtr_t3131 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103494_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.UIntPtr>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103494_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13052_il2cpp_TypeInfo/* declaring_type */
	, &UIntPtr_t3131_0_0_0/* return_type */
	, RuntimeInvoker_UIntPtr_t3131/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103494_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13052_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103494_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13052_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13052_0_0_0;
extern Il2CppType IEnumerator_1_t13052_1_0_0;
struct IEnumerator_1_t13052;
extern Il2CppGenericClass IEnumerator_1_t13052_GenericClass;
TypeInfo IEnumerator_1_t13052_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13052_MethodInfos/* methods */
	, IEnumerator_1_t13052_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13052_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13052_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13052_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13052_0_0_0/* byval_arg */
	, &IEnumerator_1_t13052_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13052_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10902_il2cpp_TypeInfo;

extern TypeInfo UIntPtr_t3131_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78106_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUIntPtr_t3131_m91054_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UIntPtr>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UIntPtr>(System.Int32)
 UIntPtr_t3131  Array_InternalArray__get_Item_TisUIntPtr_t3131_m91054 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.UIntPtr>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78101_MethodInfo;
 void InternalEnumerator_1__ctor_m78101 (InternalEnumerator_1_t10902 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UIntPtr>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78102_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78102 (InternalEnumerator_1_t10902 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UIntPtr>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78103_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78103 (InternalEnumerator_1_t10902 * __this, MethodInfo* method){
	{
		UIntPtr_t3131  L_0 = InternalEnumerator_1_get_Current_m78106(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78106_MethodInfo);
		UIntPtr_t3131  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UIntPtr_t3131_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UIntPtr>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78104_MethodInfo;
 void InternalEnumerator_1_Dispose_m78104 (InternalEnumerator_1_t10902 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UIntPtr>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78105_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78105 (InternalEnumerator_1_t10902 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m7045(L_1, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.UIntPtr>::get_Current()
 UIntPtr_t3131  InternalEnumerator_1_get_Current_m78106 (InternalEnumerator_1_t10902 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t826 * L_1 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_1, (String_t*) &_stringLiteral2022, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t826 * L_3 = (InvalidOperationException_t826 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t826_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m3120(L_3, (String_t*) &_stringLiteral2023, /*hidden argument*/&InvalidOperationException__ctor_m3120_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m7045(L_5, /*hidden argument*/&Array_get_Length_m7045_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		UIntPtr_t3131  L_8 = Array_InternalArray__get_Item_TisUIntPtr_t3131_m91054(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUIntPtr_t3131_m91054_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UIntPtr>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10902____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10902_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10902, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10902____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10902_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10902, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10902_FieldInfos[] =
{
	&InternalEnumerator_1_t10902____array_0_FieldInfo,
	&InternalEnumerator_1_t10902____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10902____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10902_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78103_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10902____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10902_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78106_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10902_PropertyInfos[] =
{
	&InternalEnumerator_1_t10902____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10902____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10902_InternalEnumerator_1__ctor_m78101_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78101_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UIntPtr>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78101_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78101/* method */
	, &InternalEnumerator_1_t10902_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10902_InternalEnumerator_1__ctor_m78101_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78101_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78102_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UIntPtr>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78102_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78102/* method */
	, &InternalEnumerator_1_t10902_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78102_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78103_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.UIntPtr>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78103_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78103/* method */
	, &InternalEnumerator_1_t10902_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78103_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78104_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UIntPtr>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78104_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78104/* method */
	, &InternalEnumerator_1_t10902_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78104_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78105_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.UIntPtr>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78105_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78105/* method */
	, &InternalEnumerator_1_t10902_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78105_GenericMethod/* genericMethod */

};
extern Il2CppType UIntPtr_t3131_0_0_0;
extern void* RuntimeInvoker_UIntPtr_t3131 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78106_GenericMethod;
// T System.Array/InternalEnumerator`1<System.UIntPtr>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78106_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78106/* method */
	, &InternalEnumerator_1_t10902_il2cpp_TypeInfo/* declaring_type */
	, &UIntPtr_t3131_0_0_0/* return_type */
	, RuntimeInvoker_UIntPtr_t3131/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78106_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10902_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78101_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78102_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78103_MethodInfo,
	&InternalEnumerator_1_Dispose_m78104_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78105_MethodInfo,
	&InternalEnumerator_1_get_Current_m78106_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10902_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78103_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78105_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78102_MethodInfo,
	&InternalEnumerator_1_Dispose_m78104_MethodInfo,
	&InternalEnumerator_1_get_Current_m78106_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10902_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13052_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10902_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13052_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10902_0_0_0;
extern Il2CppType InternalEnumerator_1_t10902_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10902_GenericClass;
TypeInfo InternalEnumerator_1_t10902_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10902_MethodInfos/* methods */
	, InternalEnumerator_1_t10902_PropertyInfos/* properties */
	, InternalEnumerator_1_t10902_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10902_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10902_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10902_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10902_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10902_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10902_1_0_0/* this_arg */
	, InternalEnumerator_1_t10902_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10902_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10902)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14583_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UIntPtr>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.UIntPtr>
extern MethodInfo ICollection_1_get_Count_m103495_MethodInfo;
static PropertyInfo ICollection_1_t14583____Count_PropertyInfo = 
{
	&ICollection_1_t14583_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103495_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103496_MethodInfo;
static PropertyInfo ICollection_1_t14583____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14583_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103496_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14583_PropertyInfos[] =
{
	&ICollection_1_t14583____Count_PropertyInfo,
	&ICollection_1_t14583____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103495_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.UIntPtr>::get_Count()
MethodInfo ICollection_1_get_Count_m103495_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14583_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103495_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103496_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103496_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14583_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103496_GenericMethod/* genericMethod */

};
extern Il2CppType UIntPtr_t3131_0_0_0;
extern Il2CppType UIntPtr_t3131_0_0_0;
static ParameterInfo ICollection_1_t14583_ICollection_1_Add_m103497_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t3131_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_IntPtr_t34 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103497_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::Add(T)
MethodInfo ICollection_1_Add_m103497_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14583_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_IntPtr_t34/* invoker_method */
	, ICollection_1_t14583_ICollection_1_Add_m103497_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103497_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103498_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::Clear()
MethodInfo ICollection_1_Clear_m103498_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14583_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103498_GenericMethod/* genericMethod */

};
extern Il2CppType UIntPtr_t3131_0_0_0;
static ParameterInfo ICollection_1_t14583_ICollection_1_Contains_m103499_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t3131_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_IntPtr_t34 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103499_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::Contains(T)
MethodInfo ICollection_1_Contains_m103499_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14583_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_IntPtr_t34/* invoker_method */
	, ICollection_1_t14583_ICollection_1_Contains_m103499_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103499_GenericMethod/* genericMethod */

};
extern Il2CppType UIntPtrU5BU5D_t11185_0_0_0;
extern Il2CppType UIntPtrU5BU5D_t11185_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14583_ICollection_1_CopyTo_m103500_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UIntPtrU5BU5D_t11185_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103500_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103500_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14583_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14583_ICollection_1_CopyTo_m103500_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103500_GenericMethod/* genericMethod */

};
extern Il2CppType UIntPtr_t3131_0_0_0;
static ParameterInfo ICollection_1_t14583_ICollection_1_Remove_m103501_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t3131_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_IntPtr_t34 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103501_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::Remove(T)
MethodInfo ICollection_1_Remove_m103501_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14583_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_IntPtr_t34/* invoker_method */
	, ICollection_1_t14583_ICollection_1_Remove_m103501_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103501_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14583_MethodInfos[] =
{
	&ICollection_1_get_Count_m103495_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103496_MethodInfo,
	&ICollection_1_Add_m103497_MethodInfo,
	&ICollection_1_Clear_m103498_MethodInfo,
	&ICollection_1_Contains_m103499_MethodInfo,
	&ICollection_1_CopyTo_m103500_MethodInfo,
	&ICollection_1_Remove_m103501_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14585_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14583_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14585_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14583_0_0_0;
extern Il2CppType ICollection_1_t14583_1_0_0;
struct ICollection_1_t14583;
extern Il2CppGenericClass ICollection_1_t14583_GenericClass;
TypeInfo ICollection_1_t14583_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14583_MethodInfos/* methods */
	, ICollection_1_t14583_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14583_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14583_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14583_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14583_0_0_0/* byval_arg */
	, &ICollection_1_t14583_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14583_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UIntPtr>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UIntPtr>
extern Il2CppType IEnumerator_1_t13052_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103502_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UIntPtr>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103502_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14585_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13052_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103502_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14585_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103502_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14585_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14585_0_0_0;
extern Il2CppType IEnumerable_1_t14585_1_0_0;
struct IEnumerable_1_t14585;
extern Il2CppGenericClass IEnumerable_1_t14585_GenericClass;
TypeInfo IEnumerable_1_t14585_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14585_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14585_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14585_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14585_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14585_0_0_0/* byval_arg */
	, &IEnumerable_1_t14585_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14585_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14584_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UIntPtr>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UIntPtr>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.UIntPtr>
extern MethodInfo IList_1_get_Item_m103503_MethodInfo;
extern MethodInfo IList_1_set_Item_m103504_MethodInfo;
static PropertyInfo IList_1_t14584____Item_PropertyInfo = 
{
	&IList_1_t14584_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103503_MethodInfo/* get */
	, &IList_1_set_Item_m103504_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14584_PropertyInfos[] =
{
	&IList_1_t14584____Item_PropertyInfo,
	NULL
};
extern Il2CppType UIntPtr_t3131_0_0_0;
static ParameterInfo IList_1_t14584_IList_1_IndexOf_m103505_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t3131_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_IntPtr_t34 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103505_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.UIntPtr>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103505_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14584_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_IntPtr_t34/* invoker_method */
	, IList_1_t14584_IList_1_IndexOf_m103505_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103505_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType UIntPtr_t3131_0_0_0;
static ParameterInfo IList_1_t14584_IList_1_Insert_m103506_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t3131_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_IntPtr_t34 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103506_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103506_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14584_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_IntPtr_t34/* invoker_method */
	, IList_1_t14584_IList_1_Insert_m103506_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103506_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14584_IList_1_RemoveAt_m103507_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103507_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103507_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14584_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14584_IList_1_RemoveAt_m103507_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103507_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14584_IList_1_get_Item_m103503_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType UIntPtr_t3131_0_0_0;
extern void* RuntimeInvoker_UIntPtr_t3131_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103503_GenericMethod;
// T System.Collections.Generic.IList`1<System.UIntPtr>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103503_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14584_il2cpp_TypeInfo/* declaring_type */
	, &UIntPtr_t3131_0_0_0/* return_type */
	, RuntimeInvoker_UIntPtr_t3131_Int32_t23/* invoker_method */
	, IList_1_t14584_IList_1_get_Item_m103503_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103503_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType UIntPtr_t3131_0_0_0;
static ParameterInfo IList_1_t14584_IList_1_set_Item_m103504_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t3131_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_IntPtr_t34 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103504_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103504_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14584_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_IntPtr_t34/* invoker_method */
	, IList_1_t14584_IList_1_set_Item_m103504_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103504_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14584_MethodInfos[] =
{
	&IList_1_IndexOf_m103505_MethodInfo,
	&IList_1_Insert_m103506_MethodInfo,
	&IList_1_RemoveAt_m103507_MethodInfo,
	&IList_1_get_Item_m103503_MethodInfo,
	&IList_1_set_Item_m103504_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14584_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14583_il2cpp_TypeInfo,
	&IEnumerable_1_t14585_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14584_0_0_0;
extern Il2CppType IList_1_t14584_1_0_0;
struct IList_1_t14584;
extern Il2CppGenericClass IList_1_t14584_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14584_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14584_MethodInfos/* methods */
	, IList_1_t14584_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14584_il2cpp_TypeInfo/* element_class */
	, IList_1_t14584_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14584_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14584_0_0_0/* byval_arg */
	, &IList_1_t14584_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14584_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13054_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.FlagsAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.FlagsAttribute>
extern MethodInfo IEnumerator_1_get_Current_m103508_MethodInfo;
static PropertyInfo IEnumerator_1_t13054____Current_PropertyInfo = 
{
	&IEnumerator_1_t13054_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103508_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13054_PropertyInfos[] =
{
	&IEnumerator_1_t13054____Current_PropertyInfo,
	NULL
};
extern Il2CppType FlagsAttribute_t292_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103508_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.FlagsAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103508_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13054_il2cpp_TypeInfo/* declaring_type */
	, &FlagsAttribute_t292_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103508_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13054_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103508_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13054_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13054_0_0_0;
extern Il2CppType IEnumerator_1_t13054_1_0_0;
struct IEnumerator_1_t13054;
extern Il2CppGenericClass IEnumerator_1_t13054_GenericClass;
TypeInfo IEnumerator_1_t13054_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13054_MethodInfos/* methods */
	, IEnumerator_1_t13054_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13054_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13054_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13054_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13054_0_0_0/* byval_arg */
	, &IEnumerator_1_t13054_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13054_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10903_il2cpp_TypeInfo;

extern TypeInfo FlagsAttribute_t292_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78112_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFlagsAttribute_t292_m91065_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.FlagsAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.FlagsAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisFlagsAttribute_t292_m91065(__this, p0, method) (FlagsAttribute_t292 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.FlagsAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.FlagsAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.FlagsAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.FlagsAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10903____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10903_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10903, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10903____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10903_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10903, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10903_FieldInfos[] =
{
	&InternalEnumerator_1_t10903____array_0_FieldInfo,
	&InternalEnumerator_1_t10903____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78109_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10903____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10903_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78109_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10903____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10903_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78112_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10903_PropertyInfos[] =
{
	&InternalEnumerator_1_t10903____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10903____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10903_InternalEnumerator_1__ctor_m78107_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78107_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78107_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10903_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10903_InternalEnumerator_1__ctor_m78107_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78107_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78108_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78108_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10903_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78108_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78109_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.FlagsAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78109_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10903_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78109_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78110_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78110_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10903_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78110_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78111_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.FlagsAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78111_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10903_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78111_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttribute_t292_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78112_GenericMethod;
// T System.Array/InternalEnumerator`1<System.FlagsAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78112_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10903_il2cpp_TypeInfo/* declaring_type */
	, &FlagsAttribute_t292_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78112_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10903_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78107_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78108_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78109_MethodInfo,
	&InternalEnumerator_1_Dispose_m78110_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78111_MethodInfo,
	&InternalEnumerator_1_get_Current_m78112_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78111_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78108_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78110_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10903_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78109_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78111_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78108_MethodInfo,
	&InternalEnumerator_1_Dispose_m78110_MethodInfo,
	&InternalEnumerator_1_get_Current_m78112_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10903_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13054_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10903_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13054_il2cpp_TypeInfo, 8},
};
extern TypeInfo FlagsAttribute_t292_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10903_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78112_MethodInfo/* Method Usage */,
	&FlagsAttribute_t292_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisFlagsAttribute_t292_m91065_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10903_0_0_0;
extern Il2CppType InternalEnumerator_1_t10903_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10903_GenericClass;
TypeInfo InternalEnumerator_1_t10903_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10903_MethodInfos/* methods */
	, InternalEnumerator_1_t10903_PropertyInfos/* properties */
	, InternalEnumerator_1_t10903_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10903_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10903_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10903_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10903_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10903_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10903_1_0_0/* this_arg */
	, InternalEnumerator_1_t10903_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10903_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10903_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10903)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14586_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.FlagsAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.FlagsAttribute>
extern MethodInfo ICollection_1_get_Count_m103509_MethodInfo;
static PropertyInfo ICollection_1_t14586____Count_PropertyInfo = 
{
	&ICollection_1_t14586_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103509_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103510_MethodInfo;
static PropertyInfo ICollection_1_t14586____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14586_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103510_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14586_PropertyInfos[] =
{
	&ICollection_1_t14586____Count_PropertyInfo,
	&ICollection_1_t14586____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103509_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.FlagsAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m103509_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14586_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103509_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103510_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103510_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14586_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103510_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttribute_t292_0_0_0;
extern Il2CppType FlagsAttribute_t292_0_0_0;
static ParameterInfo ICollection_1_t14586_ICollection_1_Add_m103511_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t292_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103511_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Add(T)
MethodInfo ICollection_1_Add_m103511_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14586_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14586_ICollection_1_Add_m103511_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103511_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103512_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Clear()
MethodInfo ICollection_1_Clear_m103512_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14586_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103512_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttribute_t292_0_0_0;
static ParameterInfo ICollection_1_t14586_ICollection_1_Contains_m103513_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t292_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103513_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m103513_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14586_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14586_ICollection_1_Contains_m103513_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103513_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttributeU5BU5D_t11186_0_0_0;
extern Il2CppType FlagsAttributeU5BU5D_t11186_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14586_ICollection_1_CopyTo_m103514_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttributeU5BU5D_t11186_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103514_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103514_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14586_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14586_ICollection_1_CopyTo_m103514_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103514_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttribute_t292_0_0_0;
static ParameterInfo ICollection_1_t14586_ICollection_1_Remove_m103515_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t292_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103515_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m103515_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14586_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14586_ICollection_1_Remove_m103515_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103515_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14586_MethodInfos[] =
{
	&ICollection_1_get_Count_m103509_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103510_MethodInfo,
	&ICollection_1_Add_m103511_MethodInfo,
	&ICollection_1_Clear_m103512_MethodInfo,
	&ICollection_1_Contains_m103513_MethodInfo,
	&ICollection_1_CopyTo_m103514_MethodInfo,
	&ICollection_1_Remove_m103515_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14588_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14586_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14588_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14586_0_0_0;
extern Il2CppType ICollection_1_t14586_1_0_0;
struct ICollection_1_t14586;
extern Il2CppGenericClass ICollection_1_t14586_GenericClass;
TypeInfo ICollection_1_t14586_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14586_MethodInfos/* methods */
	, ICollection_1_t14586_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14586_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14586_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14586_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14586_0_0_0/* byval_arg */
	, &ICollection_1_t14586_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14586_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.FlagsAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.FlagsAttribute>
extern Il2CppType IEnumerator_1_t13054_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103516_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.FlagsAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103516_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14588_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13054_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103516_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14588_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103516_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14588_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14588_0_0_0;
extern Il2CppType IEnumerable_1_t14588_1_0_0;
struct IEnumerable_1_t14588;
extern Il2CppGenericClass IEnumerable_1_t14588_GenericClass;
TypeInfo IEnumerable_1_t14588_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14588_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14588_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14588_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14588_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14588_0_0_0/* byval_arg */
	, &IEnumerable_1_t14588_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14588_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14587_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.FlagsAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.FlagsAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.FlagsAttribute>
extern MethodInfo IList_1_get_Item_m103517_MethodInfo;
extern MethodInfo IList_1_set_Item_m103518_MethodInfo;
static PropertyInfo IList_1_t14587____Item_PropertyInfo = 
{
	&IList_1_t14587_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103517_MethodInfo/* get */
	, &IList_1_set_Item_m103518_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14587_PropertyInfos[] =
{
	&IList_1_t14587____Item_PropertyInfo,
	NULL
};
extern Il2CppType FlagsAttribute_t292_0_0_0;
static ParameterInfo IList_1_t14587_IList_1_IndexOf_m103519_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t292_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103519_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.FlagsAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103519_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14587_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14587_IList_1_IndexOf_m103519_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103519_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType FlagsAttribute_t292_0_0_0;
static ParameterInfo IList_1_t14587_IList_1_Insert_m103520_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t292_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103520_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103520_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14587_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14587_IList_1_Insert_m103520_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103520_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14587_IList_1_RemoveAt_m103521_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103521_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103521_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14587_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14587_IList_1_RemoveAt_m103521_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103521_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14587_IList_1_get_Item_m103517_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType FlagsAttribute_t292_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103517_GenericMethod;
// T System.Collections.Generic.IList`1<System.FlagsAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103517_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14587_il2cpp_TypeInfo/* declaring_type */
	, &FlagsAttribute_t292_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14587_IList_1_get_Item_m103517_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103517_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType FlagsAttribute_t292_0_0_0;
static ParameterInfo IList_1_t14587_IList_1_set_Item_m103518_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t292_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103518_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103518_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14587_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14587_IList_1_set_Item_m103518_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103518_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14587_MethodInfos[] =
{
	&IList_1_IndexOf_m103519_MethodInfo,
	&IList_1_Insert_m103520_MethodInfo,
	&IList_1_RemoveAt_m103521_MethodInfo,
	&IList_1_get_Item_m103517_MethodInfo,
	&IList_1_set_Item_m103518_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14587_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14586_il2cpp_TypeInfo,
	&IEnumerable_1_t14588_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14587_0_0_0;
extern Il2CppType IList_1_t14587_1_0_0;
struct IList_1_t14587;
extern Il2CppGenericClass IList_1_t14587_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14587_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14587_MethodInfos/* methods */
	, IList_1_t14587_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14587_il2cpp_TypeInfo/* element_class */
	, IList_1_t14587_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14587_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14587_0_0_0/* byval_arg */
	, &IList_1_t14587_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14587_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Converter_2_t10904_il2cpp_TypeInfo;



// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern MethodInfo Converter_2__ctor_m78113_MethodInfo;
 void Converter_2__ctor_m78113_gshared (Converter_2_t10904 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern MethodInfo Converter_2_Invoke_m78114_MethodInfo;
 Object_t * Converter_2_Invoke_m78114_gshared (Converter_2_t10904 * __this, Object_t * ___input, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Converter_2_Invoke_m78114((Converter_2_t10904 *)__this->___prev_9,___input, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___input, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___input, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern MethodInfo Converter_2_BeginInvoke_m78115_MethodInfo;
 Object_t * Converter_2_BeginInvoke_m78115_gshared (Converter_2_t10904 * __this, Object_t * ___input, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern MethodInfo Converter_2_EndInvoke_m78116_MethodInfo;
 Object_t * Converter_2_EndInvoke_m78116_gshared (Converter_2_t10904 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// Metadata Definition System.Converter`2<System.Object,System.Object>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t34_0_0_0;
extern Il2CppType IntPtr_t34_0_0_0;
static ParameterInfo Converter_2_t10904_Converter_2__ctor_m78113_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t34_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_IntPtr_t34 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Converter_2__ctor_m78113_GenericMethod;
// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
MethodInfo Converter_2__ctor_m78113_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Converter_2__ctor_m78113_gshared/* method */
	, &Converter_2_t10904_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_IntPtr_t34/* invoker_method */
	, Converter_2_t10904_Converter_2__ctor_m78113_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Converter_2__ctor_m78113_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Converter_2_t10904_Converter_2_Invoke_m78114_ParameterInfos[] = 
{
	{"input", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Converter_2_Invoke_m78114_GenericMethod;
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
MethodInfo Converter_2_Invoke_m78114_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&Converter_2_Invoke_m78114_gshared/* method */
	, &Converter_2_t10904_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Converter_2_t10904_Converter_2_Invoke_m78114_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Converter_2_Invoke_m78114_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType AsyncCallback_t64_0_0_0;
extern Il2CppType AsyncCallback_t64_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Converter_2_t10904_Converter_2_BeginInvoke_m78115_ParameterInfos[] = 
{
	{"input", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t64_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t63_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Converter_2_BeginInvoke_m78115_GenericMethod;
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
MethodInfo Converter_2_BeginInvoke_m78115_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&Converter_2_BeginInvoke_m78115_gshared/* method */
	, &Converter_2_t10904_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t63_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, Converter_2_t10904_Converter_2_BeginInvoke_m78115_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Converter_2_BeginInvoke_m78115_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t63_0_0_0;
extern Il2CppType IAsyncResult_t63_0_0_0;
static ParameterInfo Converter_2_t10904_Converter_2_EndInvoke_m78116_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t63_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Converter_2_EndInvoke_m78116_GenericMethod;
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
MethodInfo Converter_2_EndInvoke_m78116_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&Converter_2_EndInvoke_m78116_gshared/* method */
	, &Converter_2_t10904_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Converter_2_t10904_Converter_2_EndInvoke_m78116_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Converter_2_EndInvoke_m78116_GenericMethod/* genericMethod */

};
static MethodInfo* Converter_2_t10904_MethodInfos[] =
{
	&Converter_2__ctor_m78113_MethodInfo,
	&Converter_2_Invoke_m78114_MethodInfo,
	&Converter_2_BeginInvoke_m78115_MethodInfo,
	&Converter_2_EndInvoke_m78116_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m1732_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m1733_MethodInfo;
extern MethodInfo Object_ToString_m1367_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m1734_MethodInfo;
extern MethodInfo MulticastDelegate_DynamicInvokeImpl_m1735_MethodInfo;
extern MethodInfo Delegate_Clone_m1736_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m1737_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m1738_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m1739_MethodInfo;
static MethodInfo* Converter_2_t10904_VTable[] =
{
	&MulticastDelegate_Equals_m1732_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&MulticastDelegate_GetHashCode_m1733_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&MulticastDelegate_GetObjectData_m1734_MethodInfo,
	&MulticastDelegate_DynamicInvokeImpl_m1735_MethodInfo,
	&Delegate_Clone_m1736_MethodInfo,
	&MulticastDelegate_GetObjectData_m1734_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1737_MethodInfo,
	&MulticastDelegate_CombineImpl_m1738_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1739_MethodInfo,
	&Converter_2_Invoke_m78114_MethodInfo,
	&Converter_2_BeginInvoke_m78115_MethodInfo,
	&Converter_2_EndInvoke_m78116_MethodInfo,
};
extern TypeInfo ICloneable_t365_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t366_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Converter_2_t10904_InterfacesOffsets[] = 
{
	{ &ICloneable_t365_il2cpp_TypeInfo, 4},
	{ &ISerializable_t366_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Converter_2_t10904_0_0_0;
extern Il2CppType Converter_2_t10904_1_0_0;
extern TypeInfo MulticastDelegate_t195_il2cpp_TypeInfo;
struct Converter_2_t10904;
extern Il2CppGenericClass Converter_2_t10904_GenericClass;
TypeInfo Converter_2_t10904_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Converter`2"/* name */
	, "System"/* namespaze */
	, Converter_2_t10904_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t195_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Converter_2_t10904_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Converter_2_t10904_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Converter_2_t10904_il2cpp_TypeInfo/* cast_class */
	, &Converter_2_t10904_0_0_0/* byval_arg */
	, &Converter_2_t10904_1_0_0/* this_arg */
	, Converter_2_t10904_InterfacesOffsets/* interface_offsets */
	, &Converter_2_t10904_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Converter_2_t10904)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo;

extern TypeInfo ArgumentOutOfRangeException_t1009_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t337_il2cpp_TypeInfo;
extern TypeInfo Void_t22_il2cpp_TypeInfo;
extern TypeInfo Int32_t23_il2cpp_TypeInfo;
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t336_il2cpp_TypeInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m5830_MethodInfo;
extern MethodInfo ArrayReadOnlyList_1_ReadOnlyError_m78132_MethodInfo;
extern MethodInfo Object__ctor_m1366_MethodInfo;
extern MethodInfo ArrayReadOnlyList_1_GetEnumerator_m78127_MethodInfo;
extern MethodInfo Array_IndexOf_TisObject_t_m13385_MethodInfo;
extern MethodInfo Array_CopyTo_m7259_MethodInfo;
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0__ctor_m78133_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m7061_MethodInfo;
struct Array_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
 int32_t Array_IndexOf_TisObject_t_m13385_gshared (Object_t * __this/* static, unused */, ObjectU5BU5D_t315* p0, Object_t * p1, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m13385(__this/* static, unused */, p0, p1, method) (int32_t)Array_IndexOf_TisObject_t_m13385_gshared((Object_t *)__this/* static, unused */, (ObjectU5BU5D_t315*)p0, (Object_t *)p1, method)


// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::.ctor(T[])
extern MethodInfo ArrayReadOnlyList_1__ctor_m78117_MethodInfo;
 void ArrayReadOnlyList_1__ctor_m78117_gshared (ArrayReadOnlyList_1_t10905 * __this, ObjectU5BU5D_t315* ___array, MethodInfo* method)
{
	{
		Object__ctor_m1366(__this, /*hidden argument*/&Object__ctor_m1366_MethodInfo);
		__this->___array_0 = ___array;
		return;
	}
}
// System.Collections.IEnumerator System.Array/ArrayReadOnlyList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern MethodInfo ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m78118_MethodInfo;
 Object_t * ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m78118_gshared (ArrayReadOnlyList_1_t10905 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this);
		return L_0;
	}
}
// T System.Array/ArrayReadOnlyList`1<System.Object>::get_Item(System.Int32)
extern MethodInfo ArrayReadOnlyList_1_get_Item_m78119_MethodInfo;
 Object_t * ArrayReadOnlyList_1_get_Item_m78119_gshared (ArrayReadOnlyList_1_t10905 * __this, int32_t ___index, MethodInfo* method)
{
	{
		ObjectU5BU5D_t315* L_0 = (__this->___array_0);
		NullCheck(L_0);
		if ((((uint32_t)___index) < ((uint32_t)(((int32_t)(((Array_t *)L_0)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_t1009 * L_1 = (ArgumentOutOfRangeException_t1009 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1009_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5830(L_1, (String_t*) &_stringLiteral1134, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5830_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		ObjectU5BU5D_t315* L_2 = (__this->___array_0);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ___index);
		int32_t L_3 = ___index;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3));
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::set_Item(System.Int32,T)
extern MethodInfo ArrayReadOnlyList_1_set_Item_m78120_MethodInfo;
 void ArrayReadOnlyList_1_set_Item_m78120_gshared (ArrayReadOnlyList_1_t10905 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		Exception_t35 * L_0 = (( Exception_t35 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::get_Count()
extern MethodInfo ArrayReadOnlyList_1_get_Count_m78121_MethodInfo;
 int32_t ArrayReadOnlyList_1_get_Count_m78121_gshared (ArrayReadOnlyList_1_t10905 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t315* L_0 = (__this->___array_0);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::get_IsReadOnly()
extern MethodInfo ArrayReadOnlyList_1_get_IsReadOnly_m78122_MethodInfo;
 bool ArrayReadOnlyList_1_get_IsReadOnly_m78122_gshared (ArrayReadOnlyList_1_t10905 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Add(T)
extern MethodInfo ArrayReadOnlyList_1_Add_m78123_MethodInfo;
 void ArrayReadOnlyList_1_Add_m78123_gshared (ArrayReadOnlyList_1_t10905 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t35 * L_0 = (( Exception_t35 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Clear()
extern MethodInfo ArrayReadOnlyList_1_Clear_m78124_MethodInfo;
 void ArrayReadOnlyList_1_Clear_m78124_gshared (ArrayReadOnlyList_1_t10905 * __this, MethodInfo* method)
{
	{
		Exception_t35 * L_0 = (( Exception_t35 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Contains(T)
extern MethodInfo ArrayReadOnlyList_1_Contains_m78125_MethodInfo;
 bool ArrayReadOnlyList_1_Contains_m78125_gshared (ArrayReadOnlyList_1_t10905 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		ObjectU5BU5D_t315* L_0 = (__this->___array_0);
		int32_t L_1 = (( int32_t (*) (Object_t * __this/* static, unused */, ObjectU5BU5D_t315* p0, Object_t * p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, L_0, ___item, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return ((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::CopyTo(T[],System.Int32)
extern MethodInfo ArrayReadOnlyList_1_CopyTo_m78126_MethodInfo;
 void ArrayReadOnlyList_1_CopyTo_m78126_gshared (ArrayReadOnlyList_1_t10905 * __this, ObjectU5BU5D_t315* ___array, int32_t ___index, MethodInfo* method)
{
	{
		ObjectU5BU5D_t315* L_0 = (__this->___array_0);
		NullCheck(L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m7259_MethodInfo, L_0, (Array_t *)(Array_t *)___array, ___index);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator()
 Object_t* ArrayReadOnlyList_1_GetEnumerator_m78127_gshared (ArrayReadOnlyList_1_t10905 * __this, MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator0_t10906 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator0_t10906 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t10906 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator0_t10906 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___U3CU3Ef__this_3 = __this;
		return V_0;
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::IndexOf(T)
extern MethodInfo ArrayReadOnlyList_1_IndexOf_m78128_MethodInfo;
 int32_t ArrayReadOnlyList_1_IndexOf_m78128_gshared (ArrayReadOnlyList_1_t10905 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		ObjectU5BU5D_t315* L_0 = (__this->___array_0);
		int32_t L_1 = (( int32_t (*) (Object_t * __this/* static, unused */, ObjectU5BU5D_t315* p0, Object_t * p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, L_0, ___item, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Insert(System.Int32,T)
extern MethodInfo ArrayReadOnlyList_1_Insert_m78129_MethodInfo;
 void ArrayReadOnlyList_1_Insert_m78129_gshared (ArrayReadOnlyList_1_t10905 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t35 * L_0 = (( Exception_t35 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Remove(T)
extern MethodInfo ArrayReadOnlyList_1_Remove_m78130_MethodInfo;
 bool ArrayReadOnlyList_1_Remove_m78130_gshared (ArrayReadOnlyList_1_t10905 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t35 * L_0 = (( Exception_t35 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::RemoveAt(System.Int32)
extern MethodInfo ArrayReadOnlyList_1_RemoveAt_m78131_MethodInfo;
 void ArrayReadOnlyList_1_RemoveAt_m78131_gshared (ArrayReadOnlyList_1_t10905 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Exception_t35 * L_0 = (( Exception_t35 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Exception System.Array/ArrayReadOnlyList`1<System.Object>::ReadOnlyError()
 Exception_t35 * ArrayReadOnlyList_1_ReadOnlyError_m78132_gshared (Object_t * __this/* static, unused */, MethodInfo* method)
{
	{
		NotSupportedException_t336 * L_0 = (NotSupportedException_t336 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t336_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7061(L_0, (String_t*) &_stringLiteral2026, /*hidden argument*/&NotSupportedException__ctor_m7061_MethodInfo);
		return L_0;
	}
}
// Metadata Definition System.Array/ArrayReadOnlyList`1<System.Object>
extern Il2CppType ObjectU5BU5D_t315_0_0_1;
FieldInfo ArrayReadOnlyList_1_t10905____array_0_FieldInfo = 
{
	"array"/* name */
	, &ObjectU5BU5D_t315_0_0_1/* type */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* parent */
	, offsetof(ArrayReadOnlyList_1_t10905, ___array_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ArrayReadOnlyList_1_t10905_FieldInfos[] =
{
	&ArrayReadOnlyList_1_t10905____array_0_FieldInfo,
	NULL
};
static PropertyInfo ArrayReadOnlyList_1_t10905____Item_PropertyInfo = 
{
	&ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &ArrayReadOnlyList_1_get_Item_m78119_MethodInfo/* get */
	, &ArrayReadOnlyList_1_set_Item_m78120_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArrayReadOnlyList_1_t10905____Count_PropertyInfo = 
{
	&ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ArrayReadOnlyList_1_get_Count_m78121_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArrayReadOnlyList_1_t10905____IsReadOnly_PropertyInfo = 
{
	&ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ArrayReadOnlyList_1_get_IsReadOnly_m78122_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ArrayReadOnlyList_1_t10905_PropertyInfos[] =
{
	&ArrayReadOnlyList_1_t10905____Item_PropertyInfo,
	&ArrayReadOnlyList_1_t10905____Count_PropertyInfo,
	&ArrayReadOnlyList_1_t10905____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType ObjectU5BU5D_t315_0_0_0;
extern Il2CppType ObjectU5BU5D_t315_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1__ctor_m78117_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t315_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1__ctor_m78117_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::.ctor(T[])
MethodInfo ArrayReadOnlyList_1__ctor_m78117_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1__ctor_m78117_gshared/* method */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1__ctor_m78117_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1__ctor_m78117_GenericMethod/* genericMethod */

};
extern Il2CppType IEnumerator_t30_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m78118_GenericMethod;
// System.Collections.IEnumerator System.Array/ArrayReadOnlyList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
MethodInfo ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m78118_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m78118_gshared/* method */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t30_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m78118_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_get_Item_m78119_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_Item_m78119_GenericMethod;
// T System.Array/ArrayReadOnlyList`1<System.Object>::get_Item(System.Int32)
MethodInfo ArrayReadOnlyList_1_get_Item_m78119_MethodInfo = 
{
	"get_Item"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_get_Item_m78119_gshared/* method */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_get_Item_m78119_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_get_Item_m78119_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_set_Item_m78120_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_set_Item_m78120_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::set_Item(System.Int32,T)
MethodInfo ArrayReadOnlyList_1_set_Item_m78120_MethodInfo = 
{
	"set_Item"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_set_Item_m78120_gshared/* method */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_set_Item_m78120_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_set_Item_m78120_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_Count_m78121_GenericMethod;
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::get_Count()
MethodInfo ArrayReadOnlyList_1_get_Count_m78121_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_get_Count_m78121_gshared/* method */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_get_Count_m78121_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_IsReadOnly_m78122_GenericMethod;
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::get_IsReadOnly()
MethodInfo ArrayReadOnlyList_1_get_IsReadOnly_m78122_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_get_IsReadOnly_m78122_gshared/* method */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_get_IsReadOnly_m78122_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_Add_m78123_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Add_m78123_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Add(T)
MethodInfo ArrayReadOnlyList_1_Add_m78123_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Add_m78123_gshared/* method */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_Add_m78123_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Add_m78123_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Clear_m78124_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Clear()
MethodInfo ArrayReadOnlyList_1_Clear_m78124_MethodInfo = 
{
	"Clear"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Clear_m78124_gshared/* method */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Clear_m78124_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_Contains_m78125_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Contains_m78125_GenericMethod;
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Contains(T)
MethodInfo ArrayReadOnlyList_1_Contains_m78125_MethodInfo = 
{
	"Contains"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Contains_m78125_gshared/* method */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_Contains_m78125_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Contains_m78125_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t315_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_CopyTo_m78126_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t315_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_CopyTo_m78126_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::CopyTo(T[],System.Int32)
MethodInfo ArrayReadOnlyList_1_CopyTo_m78126_MethodInfo = 
{
	"CopyTo"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_CopyTo_m78126_gshared/* method */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_CopyTo_m78126_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_CopyTo_m78126_GenericMethod/* genericMethod */

};
extern Il2CppType IEnumerator_1_t337_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache ArrayReadOnlyList_1_t3136__CustomAttributeCache_ArrayReadOnlyList_1_GetEnumerator_m12896;
extern Il2CppGenericMethod ArrayReadOnlyList_1_GetEnumerator_m78127_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator()
MethodInfo ArrayReadOnlyList_1_GetEnumerator_m78127_MethodInfo = 
{
	"GetEnumerator"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_GetEnumerator_m78127_gshared/* method */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t337_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &ArrayReadOnlyList_1_t3136__CustomAttributeCache_ArrayReadOnlyList_1_GetEnumerator_m12896/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_GetEnumerator_m78127_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_IndexOf_m78128_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_IndexOf_m78128_GenericMethod;
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::IndexOf(T)
MethodInfo ArrayReadOnlyList_1_IndexOf_m78128_MethodInfo = 
{
	"IndexOf"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_IndexOf_m78128_gshared/* method */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_IndexOf_m78128_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_IndexOf_m78128_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_Insert_m78129_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Insert_m78129_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Insert(System.Int32,T)
MethodInfo ArrayReadOnlyList_1_Insert_m78129_MethodInfo = 
{
	"Insert"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Insert_m78129_gshared/* method */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_Insert_m78129_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Insert_m78129_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_Remove_m78130_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Remove_m78130_GenericMethod;
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Remove(T)
MethodInfo ArrayReadOnlyList_1_Remove_m78130_MethodInfo = 
{
	"Remove"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Remove_m78130_gshared/* method */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_Remove_m78130_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Remove_m78130_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_RemoveAt_m78131_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_RemoveAt_m78131_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::RemoveAt(System.Int32)
MethodInfo ArrayReadOnlyList_1_RemoveAt_m78131_MethodInfo = 
{
	"RemoveAt"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_RemoveAt_m78131_gshared/* method */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ArrayReadOnlyList_1_t10905_ArrayReadOnlyList_1_RemoveAt_m78131_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_RemoveAt_m78131_GenericMethod/* genericMethod */

};
extern Il2CppType Exception_t35_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_ReadOnlyError_m78132_GenericMethod;
// System.Exception System.Array/ArrayReadOnlyList`1<System.Object>::ReadOnlyError()
MethodInfo ArrayReadOnlyList_1_ReadOnlyError_m78132_MethodInfo = 
{
	"ReadOnlyError"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_ReadOnlyError_m78132_gshared/* method */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* declaring_type */
	, &Exception_t35_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_ReadOnlyError_m78132_GenericMethod/* genericMethod */

};
static MethodInfo* ArrayReadOnlyList_1_t10905_MethodInfos[] =
{
	&ArrayReadOnlyList_1__ctor_m78117_MethodInfo,
	&ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m78118_MethodInfo,
	&ArrayReadOnlyList_1_get_Item_m78119_MethodInfo,
	&ArrayReadOnlyList_1_set_Item_m78120_MethodInfo,
	&ArrayReadOnlyList_1_get_Count_m78121_MethodInfo,
	&ArrayReadOnlyList_1_get_IsReadOnly_m78122_MethodInfo,
	&ArrayReadOnlyList_1_Add_m78123_MethodInfo,
	&ArrayReadOnlyList_1_Clear_m78124_MethodInfo,
	&ArrayReadOnlyList_1_Contains_m78125_MethodInfo,
	&ArrayReadOnlyList_1_CopyTo_m78126_MethodInfo,
	&ArrayReadOnlyList_1_GetEnumerator_m78127_MethodInfo,
	&ArrayReadOnlyList_1_IndexOf_m78128_MethodInfo,
	&ArrayReadOnlyList_1_Insert_m78129_MethodInfo,
	&ArrayReadOnlyList_1_Remove_m78130_MethodInfo,
	&ArrayReadOnlyList_1_RemoveAt_m78131_MethodInfo,
	&ArrayReadOnlyList_1_ReadOnlyError_m78132_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m1356_MethodInfo;
extern MethodInfo Object_GetHashCode_m1357_MethodInfo;
static MethodInfo* ArrayReadOnlyList_1_t10905_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m78118_MethodInfo,
	&ArrayReadOnlyList_1_IndexOf_m78128_MethodInfo,
	&ArrayReadOnlyList_1_Insert_m78129_MethodInfo,
	&ArrayReadOnlyList_1_RemoveAt_m78131_MethodInfo,
	&ArrayReadOnlyList_1_get_Item_m78119_MethodInfo,
	&ArrayReadOnlyList_1_set_Item_m78120_MethodInfo,
	&ArrayReadOnlyList_1_get_Count_m78121_MethodInfo,
	&ArrayReadOnlyList_1_get_IsReadOnly_m78122_MethodInfo,
	&ArrayReadOnlyList_1_Add_m78123_MethodInfo,
	&ArrayReadOnlyList_1_Clear_m78124_MethodInfo,
	&ArrayReadOnlyList_1_Contains_m78125_MethodInfo,
	&ArrayReadOnlyList_1_CopyTo_m78126_MethodInfo,
	&ArrayReadOnlyList_1_Remove_m78130_MethodInfo,
	&ArrayReadOnlyList_1_GetEnumerator_m78127_MethodInfo,
};
extern TypeInfo IList_1_t482_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t544_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t484_il2cpp_TypeInfo;
static TypeInfo* ArrayReadOnlyList_1_t10905_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IList_1_t482_il2cpp_TypeInfo,
	&ICollection_1_t544_il2cpp_TypeInfo,
	&IEnumerable_1_t484_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair ArrayReadOnlyList_1_t10905_InterfacesOffsets[] = 
{
	{ &IEnumerable_t545_il2cpp_TypeInfo, 4},
	{ &IList_1_t482_il2cpp_TypeInfo, 5},
	{ &ICollection_1_t544_il2cpp_TypeInfo, 10},
	{ &IEnumerable_1_t484_il2cpp_TypeInfo, 17},
};
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo;
static Il2CppRGCTXData ArrayReadOnlyList_1_t10905_RGCTXData[5] = 
{
	&ArrayReadOnlyList_1_GetEnumerator_m78127_MethodInfo/* Method Usage */,
	&ArrayReadOnlyList_1_ReadOnlyError_m78132_MethodInfo/* Method Usage */,
	&Array_IndexOf_TisObject_t_m13385_MethodInfo/* Method Usage */,
	&U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo/* Class Usage */,
	&U3CGetEnumeratorU3Ec__Iterator0__ctor_m78133_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ArrayReadOnlyList_1_t10905_0_0_0;
extern Il2CppType ArrayReadOnlyList_1_t10905_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct ArrayReadOnlyList_1_t10905;
extern Il2CppGenericClass ArrayReadOnlyList_1_t10905_GenericClass;
extern CustomAttributesCache ArrayReadOnlyList_1_t3136__CustomAttributeCache;
extern CustomAttributesCache ArrayReadOnlyList_1_t3136__CustomAttributeCache_ArrayReadOnlyList_1_GetEnumerator_m12896;
TypeInfo ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ArrayReadOnlyList`1"/* name */
	, ""/* namespaze */
	, ArrayReadOnlyList_1_t10905_MethodInfos/* methods */
	, ArrayReadOnlyList_1_t10905_PropertyInfos/* properties */
	, ArrayReadOnlyList_1_t10905_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* element_class */
	, ArrayReadOnlyList_1_t10905_InterfacesTypeInfos/* implemented_interfaces */
	, ArrayReadOnlyList_1_t10905_VTable/* vtable */
	, &ArrayReadOnlyList_1_t3136__CustomAttributeCache/* custom_attributes_cache */
	, &ArrayReadOnlyList_1_t10905_il2cpp_TypeInfo/* cast_class */
	, &ArrayReadOnlyList_1_t10905_0_0_0/* byval_arg */
	, &ArrayReadOnlyList_1_t10905_1_0_0/* this_arg */
	, ArrayReadOnlyList_1_t10905_InterfacesOffsets/* interface_offsets */
	, &ArrayReadOnlyList_1_t10905_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, ArrayReadOnlyList_1_t10905_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ArrayReadOnlyList_1_t10905)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 16/* method_count */
	, 3/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 18/* vtable_count */
	, 4/* interfaces_count */
	, 4/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo NotSupportedException__ctor_m1547_MethodInfo;


// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::.ctor()
 void U3CGetEnumeratorU3Ec__Iterator0__ctor_m78133_gshared (U3CGetEnumeratorU3Ec__Iterator0_t10906 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1366(__this, /*hidden argument*/&Object__ctor_m1366_MethodInfo);
		return;
	}
}
// T System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m78134_MethodInfo;
 Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m78134_gshared (U3CGetEnumeratorU3Ec__Iterator0_t10906 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m78135_MethodInfo;
 Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m78135_gshared (U3CGetEnumeratorU3Ec__Iterator0_t10906 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::MoveNext()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m78136_MethodInfo;
 bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m78136_gshared (U3CGetEnumeratorU3Ec__Iterator0_t10906 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		if (V_0 == 0)
		{
			goto IL_001e;
		}
		if (V_0 == 1)
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0076;
	}

IL_001e:
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_005a;
	}

IL_0027:
	{
		ArrayReadOnlyList_1_t10905 * L_1 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_1);
		ObjectU5BU5D_t315* L_2 = (L_1->___array_0);
		int32_t L_3 = (__this->___U3CiU3E__0_0);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		__this->___$current_2 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_4));
		__this->___$PC_1 = 1;
		goto IL_0078;
	}

IL_004c:
	{
		int32_t L_5 = (__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)(L_5+1));
	}

IL_005a:
	{
		int32_t L_6 = (__this->___U3CiU3E__0_0);
		ArrayReadOnlyList_1_t10905 * L_7 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_7);
		ObjectU5BU5D_t315* L_8 = (L_7->___array_0);
		NullCheck(L_8);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___$PC_1 = (-1);
	}

IL_0076:
	{
		return 0;
	}

IL_0078:
	{
		return 1;
	}
	// Dead block : IL_007a: ldloc.1
}
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Dispose()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_Dispose_m78137_MethodInfo;
 void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m78137_gshared (U3CGetEnumeratorU3Ec__Iterator0_t10906 * __this, MethodInfo* method)
{
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Reset()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_Reset_m78138_MethodInfo;
 void U3CGetEnumeratorU3Ec__Iterator0_Reset_m78138_gshared (U3CGetEnumeratorU3Ec__Iterator0_t10906 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t336 * L_0 = (NotSupportedException_t336 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t336_il2cpp_TypeInfo));
		NotSupportedException__ctor_m1547(L_0, /*hidden argument*/&NotSupportedException__ctor_m1547_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
extern Il2CppType Int32_t23_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator0_t10906____U3CiU3E__0_0_FieldInfo = 
{
	"<i>__0"/* name */
	, &Int32_t23_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetEnumeratorU3Ec__Iterator0_t10906, ___U3CiU3E__0_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator0_t10906____$PC_1_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t23_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetEnumeratorU3Ec__Iterator0_t10906, ___$PC_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator0_t10906____$current_2_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetEnumeratorU3Ec__Iterator0_t10906, ___$current_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ArrayReadOnlyList_1_t10905_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator0_t10906____U3CU3Ef__this_3_FieldInfo = 
{
	"<>f__this"/* name */
	, &ArrayReadOnlyList_1_t10905_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetEnumeratorU3Ec__Iterator0_t10906, ___U3CU3Ef__this_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CGetEnumeratorU3Ec__Iterator0_t10906_FieldInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator0_t10906____U3CiU3E__0_0_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_t10906____$PC_1_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_t10906____$current_2_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_t10906____U3CU3Ef__this_3_FieldInfo,
	NULL
};
static PropertyInfo U3CGetEnumeratorU3Ec__Iterator0_t10906____System_Collections_Generic_IEnumeratorU3CTU3E_Current_PropertyInfo = 
{
	&U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<T>.Current"/* name */
	, &U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m78134_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CGetEnumeratorU3Ec__Iterator0_t10906____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m78135_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CGetEnumeratorU3Ec__Iterator0_t10906_PropertyInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator0_t10906____System_Collections_Generic_IEnumeratorU3CTU3E_Current_PropertyInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_t10906____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0__ctor_m78133_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::.ctor()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0__ctor_m78133_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0__ctor_m78133_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0__ctor_m78133_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3135__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m12881;
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m78134_GenericMethod;
// T System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m78134_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<T>.get_Current"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m78134_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3135__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m12881/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m78134_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3135__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m12882;
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m78135_GenericMethod;
// System.Object System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.IEnumerator.get_Current()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m78135_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m78135_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3135__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m12882/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m78135_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m78136_GenericMethod;
// System.Boolean System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::MoveNext()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m78136_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m78136_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m78136_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3135__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Dispose_m12884;
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_Dispose_m78137_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Dispose()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_Dispose_m78137_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_Dispose_m78137_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3135__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Dispose_m12884/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_Dispose_m78137_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3135__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Reset_m12885;
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_Reset_m78138_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Reset()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_Reset_m78138_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_Reset_m78138_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3135__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Reset_m12885/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_Reset_m78138_GenericMethod/* genericMethod */

};
static MethodInfo* U3CGetEnumeratorU3Ec__Iterator0_t10906_MethodInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator0__ctor_m78133_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m78134_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m78135_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m78136_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_Dispose_m78137_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_Reset_m78138_MethodInfo,
	NULL
};
static MethodInfo* U3CGetEnumeratorU3Ec__Iterator0_t10906_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m78135_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m78136_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_Reset_m78138_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_Dispose_m78137_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m78134_MethodInfo,
};
static TypeInfo* U3CGetEnumeratorU3Ec__Iterator0_t10906_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t337_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CGetEnumeratorU3Ec__Iterator0_t10906_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t337_il2cpp_TypeInfo, 8},
};
extern TypeInfo Object_t_il2cpp_TypeInfo;
static Il2CppRGCTXData U3CGetEnumeratorU3Ec__Iterator0_t10906_RGCTXData[1] = 
{
	&Object_t_il2cpp_TypeInfo/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator0_t10906_0_0_0;
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator0_t10906_1_0_0;
struct U3CGetEnumeratorU3Ec__Iterator0_t10906;
extern Il2CppGenericClass U3CGetEnumeratorU3Ec__Iterator0_t10906_GenericClass;
extern TypeInfo ArrayReadOnlyList_1_t3136_il2cpp_TypeInfo;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3135__CustomAttributeCache;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3135__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m12881;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3135__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m12882;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3135__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Dispose_m12884;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3135__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Reset_m12885;
TypeInfo U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetEnumerator>c__Iterator0"/* name */
	, ""/* namespaze */
	, U3CGetEnumeratorU3Ec__Iterator0_t10906_MethodInfos/* methods */
	, U3CGetEnumeratorU3Ec__Iterator0_t10906_PropertyInfos/* properties */
	, U3CGetEnumeratorU3Ec__Iterator0_t10906_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &ArrayReadOnlyList_1_t3136_il2cpp_TypeInfo/* nested_in */
	, &U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo/* element_class */
	, U3CGetEnumeratorU3Ec__Iterator0_t10906_InterfacesTypeInfos/* implemented_interfaces */
	, U3CGetEnumeratorU3Ec__Iterator0_t10906_VTable/* vtable */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3135__CustomAttributeCache/* custom_attributes_cache */
	, &U3CGetEnumeratorU3Ec__Iterator0_t10906_il2cpp_TypeInfo/* cast_class */
	, &U3CGetEnumeratorU3Ec__Iterator0_t10906_0_0_0/* byval_arg */
	, &U3CGetEnumeratorU3Ec__Iterator0_t10906_1_0_0/* this_arg */
	, U3CGetEnumeratorU3Ec__Iterator0_t10906_InterfacesOffsets/* interface_offsets */
	, &U3CGetEnumeratorU3Ec__Iterator0_t10906_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, U3CGetEnumeratorU3Ec__Iterator0_t10906_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CGetEnumeratorU3Ec__Iterator0_t10906)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13056_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.MonoType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MonoType>
extern MethodInfo IEnumerator_1_get_Current_m103522_MethodInfo;
static PropertyInfo IEnumerator_1_t13056____Current_PropertyInfo = 
{
	&IEnumerator_1_t13056_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103522_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13056_PropertyInfos[] =
{
	&IEnumerator_1_t13056____Current_PropertyInfo,
	NULL
};
extern Il2CppType MonoType_t3678_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103522_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.MonoType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103522_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13056_il2cpp_TypeInfo/* declaring_type */
	, &MonoType_t3678_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103522_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13056_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103522_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13056_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13056_0_0_0;
extern Il2CppType IEnumerator_1_t13056_1_0_0;
struct IEnumerator_1_t13056;
extern Il2CppGenericClass IEnumerator_1_t13056_GenericClass;
TypeInfo IEnumerator_1_t13056_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13056_MethodInfos/* methods */
	, IEnumerator_1_t13056_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13056_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13056_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13056_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13056_0_0_0/* byval_arg */
	, &IEnumerator_1_t13056_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13056_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10907_il2cpp_TypeInfo;

extern TypeInfo MonoType_t3678_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78144_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMonoType_t3678_m91104_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.MonoType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.MonoType>(System.Int32)
#define Array_InternalArray__get_Item_TisMonoType_t3678_m91104(__this, p0, method) (MonoType_t3678 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.MonoType>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.MonoType>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.MonoType>::MoveNext()
// T System.Array/InternalEnumerator`1<System.MonoType>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.MonoType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10907____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10907_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10907, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10907____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10907_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10907, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10907_FieldInfos[] =
{
	&InternalEnumerator_1_t10907____array_0_FieldInfo,
	&InternalEnumerator_1_t10907____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78141_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10907____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10907_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78141_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10907____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10907_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78144_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10907_PropertyInfos[] =
{
	&InternalEnumerator_1_t10907____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10907____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10907_InternalEnumerator_1__ctor_m78139_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78139_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78139_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10907_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10907_InternalEnumerator_1__ctor_m78139_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78139_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78140_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78140_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10907_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78140_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78141_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.MonoType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78141_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10907_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78141_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78142_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78142_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10907_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78142_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78143_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.MonoType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78143_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10907_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78143_GenericMethod/* genericMethod */

};
extern Il2CppType MonoType_t3678_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78144_GenericMethod;
// T System.Array/InternalEnumerator`1<System.MonoType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78144_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10907_il2cpp_TypeInfo/* declaring_type */
	, &MonoType_t3678_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78144_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10907_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78139_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78140_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78141_MethodInfo,
	&InternalEnumerator_1_Dispose_m78142_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78143_MethodInfo,
	&InternalEnumerator_1_get_Current_m78144_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78143_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78140_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78142_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10907_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78141_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78143_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78140_MethodInfo,
	&InternalEnumerator_1_Dispose_m78142_MethodInfo,
	&InternalEnumerator_1_get_Current_m78144_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10907_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13056_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10907_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13056_il2cpp_TypeInfo, 8},
};
extern TypeInfo MonoType_t3678_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10907_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78144_MethodInfo/* Method Usage */,
	&MonoType_t3678_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMonoType_t3678_m91104_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10907_0_0_0;
extern Il2CppType InternalEnumerator_1_t10907_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10907_GenericClass;
TypeInfo InternalEnumerator_1_t10907_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10907_MethodInfos/* methods */
	, InternalEnumerator_1_t10907_PropertyInfos/* properties */
	, InternalEnumerator_1_t10907_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10907_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10907_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10907_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10907_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10907_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10907_1_0_0/* this_arg */
	, InternalEnumerator_1_t10907_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10907_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10907_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10907)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14589_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.MonoType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.MonoType>
extern MethodInfo ICollection_1_get_Count_m103523_MethodInfo;
static PropertyInfo ICollection_1_t14589____Count_PropertyInfo = 
{
	&ICollection_1_t14589_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103523_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103524_MethodInfo;
static PropertyInfo ICollection_1_t14589____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14589_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103524_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14589_PropertyInfos[] =
{
	&ICollection_1_t14589____Count_PropertyInfo,
	&ICollection_1_t14589____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103523_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.MonoType>::get_Count()
MethodInfo ICollection_1_get_Count_m103523_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14589_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103523_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103524_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103524_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14589_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103524_GenericMethod/* genericMethod */

};
extern Il2CppType MonoType_t3678_0_0_0;
extern Il2CppType MonoType_t3678_0_0_0;
static ParameterInfo ICollection_1_t14589_ICollection_1_Add_m103525_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoType_t3678_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103525_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Add(T)
MethodInfo ICollection_1_Add_m103525_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14589_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14589_ICollection_1_Add_m103525_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103525_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103526_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Clear()
MethodInfo ICollection_1_Clear_m103526_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14589_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103526_GenericMethod/* genericMethod */

};
extern Il2CppType MonoType_t3678_0_0_0;
static ParameterInfo ICollection_1_t14589_ICollection_1_Contains_m103527_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoType_t3678_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103527_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Contains(T)
MethodInfo ICollection_1_Contains_m103527_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14589_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14589_ICollection_1_Contains_m103527_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103527_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTypeU5BU5D_t4092_0_0_0;
extern Il2CppType MonoTypeU5BU5D_t4092_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14589_ICollection_1_CopyTo_m103528_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MonoTypeU5BU5D_t4092_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103528_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103528_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14589_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14589_ICollection_1_CopyTo_m103528_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103528_GenericMethod/* genericMethod */

};
extern Il2CppType MonoType_t3678_0_0_0;
static ParameterInfo ICollection_1_t14589_ICollection_1_Remove_m103529_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoType_t3678_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103529_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Remove(T)
MethodInfo ICollection_1_Remove_m103529_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14589_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14589_ICollection_1_Remove_m103529_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103529_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14589_MethodInfos[] =
{
	&ICollection_1_get_Count_m103523_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103524_MethodInfo,
	&ICollection_1_Add_m103525_MethodInfo,
	&ICollection_1_Clear_m103526_MethodInfo,
	&ICollection_1_Contains_m103527_MethodInfo,
	&ICollection_1_CopyTo_m103528_MethodInfo,
	&ICollection_1_Remove_m103529_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14591_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14589_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14591_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14589_0_0_0;
extern Il2CppType ICollection_1_t14589_1_0_0;
struct ICollection_1_t14589;
extern Il2CppGenericClass ICollection_1_t14589_GenericClass;
TypeInfo ICollection_1_t14589_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14589_MethodInfos/* methods */
	, ICollection_1_t14589_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14589_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14589_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14589_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14589_0_0_0/* byval_arg */
	, &ICollection_1_t14589_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14589_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.MonoType>
extern Il2CppType IEnumerator_1_t13056_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103530_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103530_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14591_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13056_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103530_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14591_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103530_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14591_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14591_0_0_0;
extern Il2CppType IEnumerable_1_t14591_1_0_0;
struct IEnumerable_1_t14591;
extern Il2CppGenericClass IEnumerable_1_t14591_GenericClass;
TypeInfo IEnumerable_1_t14591_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14591_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14591_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14591_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14591_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14591_0_0_0/* byval_arg */
	, &IEnumerable_1_t14591_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14591_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14590_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.MonoType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.MonoType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.MonoType>
extern MethodInfo IList_1_get_Item_m103531_MethodInfo;
extern MethodInfo IList_1_set_Item_m103532_MethodInfo;
static PropertyInfo IList_1_t14590____Item_PropertyInfo = 
{
	&IList_1_t14590_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103531_MethodInfo/* get */
	, &IList_1_set_Item_m103532_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14590_PropertyInfos[] =
{
	&IList_1_t14590____Item_PropertyInfo,
	NULL
};
extern Il2CppType MonoType_t3678_0_0_0;
static ParameterInfo IList_1_t14590_IList_1_IndexOf_m103533_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoType_t3678_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103533_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.MonoType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103533_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14590_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14590_IList_1_IndexOf_m103533_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103533_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType MonoType_t3678_0_0_0;
static ParameterInfo IList_1_t14590_IList_1_Insert_m103534_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MonoType_t3678_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103534_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103534_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14590_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14590_IList_1_Insert_m103534_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103534_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14590_IList_1_RemoveAt_m103535_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103535_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103535_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14590_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14590_IList_1_RemoveAt_m103535_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103535_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14590_IList_1_get_Item_m103531_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType MonoType_t3678_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103531_GenericMethod;
// T System.Collections.Generic.IList`1<System.MonoType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103531_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14590_il2cpp_TypeInfo/* declaring_type */
	, &MonoType_t3678_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14590_IList_1_get_Item_m103531_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103531_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType MonoType_t3678_0_0_0;
static ParameterInfo IList_1_t14590_IList_1_set_Item_m103532_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MonoType_t3678_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103532_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103532_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14590_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14590_IList_1_set_Item_m103532_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103532_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14590_MethodInfos[] =
{
	&IList_1_IndexOf_m103533_MethodInfo,
	&IList_1_Insert_m103534_MethodInfo,
	&IList_1_RemoveAt_m103535_MethodInfo,
	&IList_1_get_Item_m103531_MethodInfo,
	&IList_1_set_Item_m103532_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14590_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14589_il2cpp_TypeInfo,
	&IEnumerable_1_t14591_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14590_0_0_0;
extern Il2CppType IList_1_t14590_1_0_0;
struct IList_1_t14590;
extern Il2CppGenericClass IList_1_t14590_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14590_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14590_MethodInfos/* methods */
	, IList_1_t14590_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14590_il2cpp_TypeInfo/* element_class */
	, IList_1_t14590_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14590_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14590_0_0_0/* byval_arg */
	, &IList_1_t14590_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14590_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13058_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.ParamArrayAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ParamArrayAttribute>
extern MethodInfo IEnumerator_1_get_Current_m103536_MethodInfo;
static PropertyInfo IEnumerator_1_t13058____Current_PropertyInfo = 
{
	&IEnumerator_1_t13058_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103536_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13058_PropertyInfos[] =
{
	&IEnumerator_1_t13058____Current_PropertyInfo,
	NULL
};
extern Il2CppType ParamArrayAttribute_t378_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103536_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.ParamArrayAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103536_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13058_il2cpp_TypeInfo/* declaring_type */
	, &ParamArrayAttribute_t378_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103536_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13058_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103536_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13058_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13058_0_0_0;
extern Il2CppType IEnumerator_1_t13058_1_0_0;
struct IEnumerator_1_t13058;
extern Il2CppGenericClass IEnumerator_1_t13058_GenericClass;
TypeInfo IEnumerator_1_t13058_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13058_MethodInfos/* methods */
	, IEnumerator_1_t13058_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13058_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13058_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13058_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13058_0_0_0/* byval_arg */
	, &IEnumerator_1_t13058_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13058_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10908_il2cpp_TypeInfo;

extern TypeInfo ParamArrayAttribute_t378_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78150_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisParamArrayAttribute_t378_m91115_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ParamArrayAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ParamArrayAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisParamArrayAttribute_t378_m91115(__this, p0, method) (ParamArrayAttribute_t378 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.ParamArrayAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10908____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10908_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10908, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10908____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10908_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10908, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10908_FieldInfos[] =
{
	&InternalEnumerator_1_t10908____array_0_FieldInfo,
	&InternalEnumerator_1_t10908____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78147_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10908____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10908_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78147_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10908____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10908_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78150_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10908_PropertyInfos[] =
{
	&InternalEnumerator_1_t10908____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10908____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10908_InternalEnumerator_1__ctor_m78145_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78145_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78145_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10908_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10908_InternalEnumerator_1__ctor_m78145_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78145_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78146_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78146_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10908_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78146_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78147_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78147_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10908_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78147_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78148_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78148_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10908_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78148_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78149_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78149_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10908_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78149_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttribute_t378_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78150_GenericMethod;
// T System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78150_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10908_il2cpp_TypeInfo/* declaring_type */
	, &ParamArrayAttribute_t378_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78150_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10908_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78145_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78146_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78147_MethodInfo,
	&InternalEnumerator_1_Dispose_m78148_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78149_MethodInfo,
	&InternalEnumerator_1_get_Current_m78150_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78149_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78146_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78148_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10908_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78147_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78149_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78146_MethodInfo,
	&InternalEnumerator_1_Dispose_m78148_MethodInfo,
	&InternalEnumerator_1_get_Current_m78150_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10908_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13058_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10908_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13058_il2cpp_TypeInfo, 8},
};
extern TypeInfo ParamArrayAttribute_t378_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10908_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78150_MethodInfo/* Method Usage */,
	&ParamArrayAttribute_t378_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisParamArrayAttribute_t378_m91115_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10908_0_0_0;
extern Il2CppType InternalEnumerator_1_t10908_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10908_GenericClass;
TypeInfo InternalEnumerator_1_t10908_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10908_MethodInfos/* methods */
	, InternalEnumerator_1_t10908_PropertyInfos/* properties */
	, InternalEnumerator_1_t10908_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10908_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10908_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10908_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10908_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10908_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10908_1_0_0/* this_arg */
	, InternalEnumerator_1_t10908_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10908_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10908_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10908)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14592_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>
extern MethodInfo ICollection_1_get_Count_m103537_MethodInfo;
static PropertyInfo ICollection_1_t14592____Count_PropertyInfo = 
{
	&ICollection_1_t14592_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103537_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103538_MethodInfo;
static PropertyInfo ICollection_1_t14592____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14592_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103538_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14592_PropertyInfos[] =
{
	&ICollection_1_t14592____Count_PropertyInfo,
	&ICollection_1_t14592____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103537_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m103537_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14592_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103537_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103538_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103538_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14592_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103538_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttribute_t378_0_0_0;
extern Il2CppType ParamArrayAttribute_t378_0_0_0;
static ParameterInfo ICollection_1_t14592_ICollection_1_Add_m103539_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t378_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103539_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Add(T)
MethodInfo ICollection_1_Add_m103539_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14592_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14592_ICollection_1_Add_m103539_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103539_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103540_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Clear()
MethodInfo ICollection_1_Clear_m103540_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14592_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103540_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttribute_t378_0_0_0;
static ParameterInfo ICollection_1_t14592_ICollection_1_Contains_m103541_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t378_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103541_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m103541_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14592_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14592_ICollection_1_Contains_m103541_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103541_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttributeU5BU5D_t11187_0_0_0;
extern Il2CppType ParamArrayAttributeU5BU5D_t11187_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14592_ICollection_1_CopyTo_m103542_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttributeU5BU5D_t11187_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103542_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103542_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14592_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14592_ICollection_1_CopyTo_m103542_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103542_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttribute_t378_0_0_0;
static ParameterInfo ICollection_1_t14592_ICollection_1_Remove_m103543_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t378_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103543_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m103543_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14592_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14592_ICollection_1_Remove_m103543_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103543_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14592_MethodInfos[] =
{
	&ICollection_1_get_Count_m103537_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103538_MethodInfo,
	&ICollection_1_Add_m103539_MethodInfo,
	&ICollection_1_Clear_m103540_MethodInfo,
	&ICollection_1_Contains_m103541_MethodInfo,
	&ICollection_1_CopyTo_m103542_MethodInfo,
	&ICollection_1_Remove_m103543_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14594_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14592_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14594_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14592_0_0_0;
extern Il2CppType ICollection_1_t14592_1_0_0;
struct ICollection_1_t14592;
extern Il2CppGenericClass ICollection_1_t14592_GenericClass;
TypeInfo ICollection_1_t14592_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14592_MethodInfos/* methods */
	, ICollection_1_t14592_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14592_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14592_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14592_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14592_0_0_0/* byval_arg */
	, &ICollection_1_t14592_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14592_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ParamArrayAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ParamArrayAttribute>
extern Il2CppType IEnumerator_1_t13058_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103544_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ParamArrayAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103544_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14594_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13058_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103544_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14594_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103544_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14594_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14594_0_0_0;
extern Il2CppType IEnumerable_1_t14594_1_0_0;
struct IEnumerable_1_t14594;
extern Il2CppGenericClass IEnumerable_1_t14594_GenericClass;
TypeInfo IEnumerable_1_t14594_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14594_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14594_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14594_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14594_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14594_0_0_0/* byval_arg */
	, &IEnumerable_1_t14594_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14594_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14593_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ParamArrayAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ParamArrayAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.ParamArrayAttribute>
extern MethodInfo IList_1_get_Item_m103545_MethodInfo;
extern MethodInfo IList_1_set_Item_m103546_MethodInfo;
static PropertyInfo IList_1_t14593____Item_PropertyInfo = 
{
	&IList_1_t14593_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103545_MethodInfo/* get */
	, &IList_1_set_Item_m103546_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14593_PropertyInfos[] =
{
	&IList_1_t14593____Item_PropertyInfo,
	NULL
};
extern Il2CppType ParamArrayAttribute_t378_0_0_0;
static ParameterInfo IList_1_t14593_IList_1_IndexOf_m103547_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t378_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103547_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.ParamArrayAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103547_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14593_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14593_IList_1_IndexOf_m103547_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103547_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ParamArrayAttribute_t378_0_0_0;
static ParameterInfo IList_1_t14593_IList_1_Insert_m103548_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t378_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103548_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103548_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14593_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14593_IList_1_Insert_m103548_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103548_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14593_IList_1_RemoveAt_m103549_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103549_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103549_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14593_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14593_IList_1_RemoveAt_m103549_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103549_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14593_IList_1_get_Item_m103545_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType ParamArrayAttribute_t378_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103545_GenericMethod;
// T System.Collections.Generic.IList`1<System.ParamArrayAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103545_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14593_il2cpp_TypeInfo/* declaring_type */
	, &ParamArrayAttribute_t378_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14593_IList_1_get_Item_m103545_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103545_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ParamArrayAttribute_t378_0_0_0;
static ParameterInfo IList_1_t14593_IList_1_set_Item_m103546_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t378_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103546_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103546_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14593_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14593_IList_1_set_Item_m103546_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103546_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14593_MethodInfos[] =
{
	&IList_1_IndexOf_m103547_MethodInfo,
	&IList_1_Insert_m103548_MethodInfo,
	&IList_1_RemoveAt_m103549_MethodInfo,
	&IList_1_get_Item_m103545_MethodInfo,
	&IList_1_set_Item_m103546_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14593_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14592_il2cpp_TypeInfo,
	&IEnumerable_1_t14594_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14593_0_0_0;
extern Il2CppType IList_1_t14593_1_0_0;
struct IList_1_t14593;
extern Il2CppGenericClass IList_1_t14593_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14593_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14593_MethodInfos/* methods */
	, IList_1_t14593_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14593_il2cpp_TypeInfo/* element_class */
	, IList_1_t14593_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14593_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14593_0_0_0/* byval_arg */
	, &IList_1_t14593_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14593_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13060_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OutAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo IEnumerator_1_get_Current_m103550_MethodInfo;
static PropertyInfo IEnumerator_1_t13060____Current_PropertyInfo = 
{
	&IEnumerator_1_t13060_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103550_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13060_PropertyInfos[] =
{
	&IEnumerator_1_t13060____Current_PropertyInfo,
	NULL
};
extern Il2CppType OutAttribute_t3145_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103550_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OutAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103550_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13060_il2cpp_TypeInfo/* declaring_type */
	, &OutAttribute_t3145_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103550_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13060_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103550_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13060_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13060_0_0_0;
extern Il2CppType IEnumerator_1_t13060_1_0_0;
struct IEnumerator_1_t13060;
extern Il2CppGenericClass IEnumerator_1_t13060_GenericClass;
TypeInfo IEnumerator_1_t13060_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13060_MethodInfos/* methods */
	, IEnumerator_1_t13060_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13060_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13060_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13060_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13060_0_0_0/* byval_arg */
	, &IEnumerator_1_t13060_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13060_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10909_il2cpp_TypeInfo;

extern TypeInfo OutAttribute_t3145_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78156_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOutAttribute_t3145_m91126_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.OutAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.OutAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisOutAttribute_t3145_m91126(__this, p0, method) (OutAttribute_t3145 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10909____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10909_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10909, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10909____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10909_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10909, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10909_FieldInfos[] =
{
	&InternalEnumerator_1_t10909____array_0_FieldInfo,
	&InternalEnumerator_1_t10909____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78153_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10909____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10909_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78153_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10909____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10909_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78156_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10909_PropertyInfos[] =
{
	&InternalEnumerator_1_t10909____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10909____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10909_InternalEnumerator_1__ctor_m78151_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78151_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78151_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10909_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10909_InternalEnumerator_1__ctor_m78151_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m78151_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78152_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78152_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10909_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78152_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78153_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78153_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10909_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78153_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78154_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78154_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10909_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m78154_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78155_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78155_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10909_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m78155_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttribute_t3145_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78156_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78156_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10909_il2cpp_TypeInfo/* declaring_type */
	, &OutAttribute_t3145_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m78156_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10909_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78151_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78152_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78153_MethodInfo,
	&InternalEnumerator_1_Dispose_m78154_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78155_MethodInfo,
	&InternalEnumerator_1_get_Current_m78156_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78155_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78152_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78154_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10909_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78153_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78155_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78152_MethodInfo,
	&InternalEnumerator_1_Dispose_m78154_MethodInfo,
	&InternalEnumerator_1_get_Current_m78156_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10909_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13060_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10909_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13060_il2cpp_TypeInfo, 8},
};
extern TypeInfo OutAttribute_t3145_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10909_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78156_MethodInfo/* Method Usage */,
	&OutAttribute_t3145_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisOutAttribute_t3145_m91126_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10909_0_0_0;
extern Il2CppType InternalEnumerator_1_t10909_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10909_GenericClass;
TypeInfo InternalEnumerator_1_t10909_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10909_MethodInfos/* methods */
	, InternalEnumerator_1_t10909_PropertyInfos/* properties */
	, InternalEnumerator_1_t10909_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10909_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10909_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10909_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10909_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10909_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10909_1_0_0/* this_arg */
	, InternalEnumerator_1_t10909_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10909_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10909_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10909)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t14595_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo ICollection_1_get_Count_m103551_MethodInfo;
static PropertyInfo ICollection_1_t14595____Count_PropertyInfo = 
{
	&ICollection_1_t14595_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103551_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103552_MethodInfo;
static PropertyInfo ICollection_1_t14595____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14595_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103552_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14595_PropertyInfos[] =
{
	&ICollection_1_t14595____Count_PropertyInfo,
	&ICollection_1_t14595____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103551_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m103551_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14595_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m103551_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103552_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103552_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14595_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m103552_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttribute_t3145_0_0_0;
extern Il2CppType OutAttribute_t3145_0_0_0;
static ParameterInfo ICollection_1_t14595_ICollection_1_Add_m103553_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t3145_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103553_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Add(T)
MethodInfo ICollection_1_Add_m103553_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14595_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14595_ICollection_1_Add_m103553_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m103553_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103554_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Clear()
MethodInfo ICollection_1_Clear_m103554_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14595_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m103554_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttribute_t3145_0_0_0;
static ParameterInfo ICollection_1_t14595_ICollection_1_Contains_m103555_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t3145_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103555_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m103555_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14595_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14595_ICollection_1_Contains_m103555_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m103555_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttributeU5BU5D_t11188_0_0_0;
extern Il2CppType OutAttributeU5BU5D_t11188_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14595_ICollection_1_CopyTo_m103556_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OutAttributeU5BU5D_t11188_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103556_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103556_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14595_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14595_ICollection_1_CopyTo_m103556_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m103556_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttribute_t3145_0_0_0;
static ParameterInfo ICollection_1_t14595_ICollection_1_Remove_m103557_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t3145_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103557_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m103557_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14595_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14595_ICollection_1_Remove_m103557_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m103557_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14595_MethodInfos[] =
{
	&ICollection_1_get_Count_m103551_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103552_MethodInfo,
	&ICollection_1_Add_m103553_MethodInfo,
	&ICollection_1_Clear_m103554_MethodInfo,
	&ICollection_1_Contains_m103555_MethodInfo,
	&ICollection_1_CopyTo_m103556_MethodInfo,
	&ICollection_1_Remove_m103557_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14597_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14595_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14597_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14595_0_0_0;
extern Il2CppType ICollection_1_t14595_1_0_0;
struct ICollection_1_t14595;
extern Il2CppGenericClass ICollection_1_t14595_GenericClass;
TypeInfo ICollection_1_t14595_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14595_MethodInfos/* methods */
	, ICollection_1_t14595_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14595_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14595_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14595_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14595_0_0_0/* byval_arg */
	, &ICollection_1_t14595_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14595_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OutAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OutAttribute>
extern Il2CppType IEnumerator_1_t13060_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103558_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OutAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103558_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14597_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13060_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m103558_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14597_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103558_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14597_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14597_0_0_0;
extern Il2CppType IEnumerable_1_t14597_1_0_0;
struct IEnumerable_1_t14597;
extern Il2CppGenericClass IEnumerable_1_t14597_GenericClass;
TypeInfo IEnumerable_1_t14597_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14597_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14597_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14597_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14597_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14597_0_0_0/* byval_arg */
	, &IEnumerable_1_t14597_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14597_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t14596_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo IList_1_get_Item_m103559_MethodInfo;
extern MethodInfo IList_1_set_Item_m103560_MethodInfo;
static PropertyInfo IList_1_t14596____Item_PropertyInfo = 
{
	&IList_1_t14596_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103559_MethodInfo/* get */
	, &IList_1_set_Item_m103560_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14596_PropertyInfos[] =
{
	&IList_1_t14596____Item_PropertyInfo,
	NULL
};
extern Il2CppType OutAttribute_t3145_0_0_0;
static ParameterInfo IList_1_t14596_IList_1_IndexOf_m103561_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t3145_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103561_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103561_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14596_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14596_IList_1_IndexOf_m103561_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m103561_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType OutAttribute_t3145_0_0_0;
static ParameterInfo IList_1_t14596_IList_1_Insert_m103562_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t3145_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103562_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103562_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14596_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14596_IList_1_Insert_m103562_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m103562_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14596_IList_1_RemoveAt_m103563_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103563_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103563_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14596_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14596_IList_1_RemoveAt_m103563_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m103563_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14596_IList_1_get_Item_m103559_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType OutAttribute_t3145_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103559_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103559_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14596_il2cpp_TypeInfo/* declaring_type */
	, &OutAttribute_t3145_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14596_IList_1_get_Item_m103559_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m103559_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType OutAttribute_t3145_0_0_0;
static ParameterInfo IList_1_t14596_IList_1_set_Item_m103560_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t3145_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103560_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103560_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14596_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14596_IList_1_set_Item_m103560_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m103560_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14596_MethodInfos[] =
{
	&IList_1_IndexOf_m103561_MethodInfo,
	&IList_1_Insert_m103562_MethodInfo,
	&IList_1_RemoveAt_m103563_MethodInfo,
	&IList_1_get_Item_m103559_MethodInfo,
	&IList_1_set_Item_m103560_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14596_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14595_il2cpp_TypeInfo,
	&IEnumerable_1_t14597_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14596_0_0_0;
extern Il2CppType IList_1_t14596_1_0_0;
struct IList_1_t14596;
extern Il2CppGenericClass IList_1_t14596_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14596_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14596_MethodInfos/* methods */
	, IList_1_t14596_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14596_il2cpp_TypeInfo/* element_class */
	, IList_1_t14596_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14596_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14596_0_0_0/* byval_arg */
	, &IList_1_t14596_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14596_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13062_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.ObsoleteAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ObsoleteAttribute>
extern MethodInfo IEnumerator_1_get_Current_m103564_MethodInfo;
static PropertyInfo IEnumerator_1_t13062____Current_PropertyInfo = 
{
	&IEnumerator_1_t13062_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103564_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13062_PropertyInfos[] =
{
	&IEnumerator_1_t13062____Current_PropertyInfo,
	NULL
};
extern Il2CppType ObsoleteAttribute_t324_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103564_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.ObsoleteAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103564_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13062_il2cpp_TypeInfo/* declaring_type */
	, &ObsoleteAttribute_t324_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m103564_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13062_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103564_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13062_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13062_0_0_0;
extern Il2CppType IEnumerator_1_t13062_1_0_0;
struct IEnumerator_1_t13062;
extern Il2CppGenericClass IEnumerator_1_t13062_GenericClass;
TypeInfo IEnumerator_1_t13062_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13062_MethodInfos/* methods */
	, IEnumerator_1_t13062_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13062_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13062_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13062_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13062_0_0_0/* byval_arg */
	, &IEnumerator_1_t13062_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13062_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
