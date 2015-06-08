#include "il2cpp_precompiled_header.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t11083_il2cpp_TypeInfo;

extern TypeInfo PrincipalPolicy_t3573_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t826_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m79257_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m3120_MethodInfo;
extern MethodInfo Array_get_Length_m7045_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPrincipalPolicy_t3573_m92870_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Principal.PrincipalPolicy>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Principal.PrincipalPolicy>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPrincipalPolicy_t3573_m92870 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.PrincipalPolicy>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m79252_MethodInfo;
 void InternalEnumerator_1__ctor_m79252 (InternalEnumerator_1_t11083 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.PrincipalPolicy>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79253_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79253 (InternalEnumerator_1_t11083 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Principal.PrincipalPolicy>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79254_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79254 (InternalEnumerator_1_t11083 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m79257(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m79257_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PrincipalPolicy_t3573_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.PrincipalPolicy>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m79255_MethodInfo;
 void InternalEnumerator_1_Dispose_m79255 (InternalEnumerator_1_t11083 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Principal.PrincipalPolicy>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m79256_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m79256 (InternalEnumerator_1_t11083 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Principal.PrincipalPolicy>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m79257 (InternalEnumerator_1_t11083 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisPrincipalPolicy_t3573_m92870(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPrincipalPolicy_t3573_m92870_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Principal.PrincipalPolicy>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t11083____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t11083_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11083, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t11083____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t11083_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11083, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t11083_FieldInfos[] =
{
	&InternalEnumerator_1_t11083____array_0_FieldInfo,
	&InternalEnumerator_1_t11083____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t11083____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11083_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79254_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t11083____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11083_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m79257_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t11083_PropertyInfos[] =
{
	&InternalEnumerator_1_t11083____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t11083____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t11083_InternalEnumerator_1__ctor_m79252_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m79252_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.PrincipalPolicy>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m79252_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m79252/* method */
	, &InternalEnumerator_1_t11083_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t11083_InternalEnumerator_1__ctor_m79252_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m79252_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79253_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.PrincipalPolicy>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79253_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79253/* method */
	, &InternalEnumerator_1_t11083_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79253_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79254_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Principal.PrincipalPolicy>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79254_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79254/* method */
	, &InternalEnumerator_1_t11083_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79254_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m79255_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.PrincipalPolicy>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m79255_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m79255/* method */
	, &InternalEnumerator_1_t11083_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m79255_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m79256_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Principal.PrincipalPolicy>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m79256_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m79256/* method */
	, &InternalEnumerator_1_t11083_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m79256_GenericMethod/* genericMethod */

};
extern Il2CppType PrincipalPolicy_t3573_0_0_0;
extern void* RuntimeInvoker_PrincipalPolicy_t3573 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m79257_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Principal.PrincipalPolicy>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m79257_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m79257/* method */
	, &InternalEnumerator_1_t11083_il2cpp_TypeInfo/* declaring_type */
	, &PrincipalPolicy_t3573_0_0_0/* return_type */
	, RuntimeInvoker_PrincipalPolicy_t3573/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m79257_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t11083_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m79252_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79253_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79254_MethodInfo,
	&InternalEnumerator_1_Dispose_m79255_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79256_MethodInfo,
	&InternalEnumerator_1_get_Current_m79257_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m59_MethodInfo;
extern MethodInfo Object_Finalize_m50_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m60_MethodInfo;
extern MethodInfo ValueType_ToString_m61_MethodInfo;
static MethodInfo* InternalEnumerator_1_t11083_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79254_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79256_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79253_MethodInfo,
	&InternalEnumerator_1_Dispose_m79255_MethodInfo,
	&InternalEnumerator_1_get_Current_m79257_MethodInfo,
};
extern TypeInfo IEnumerator_t30_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t31_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13372_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t11083_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13372_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t11083_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13372_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t11083_0_0_0;
extern Il2CppType InternalEnumerator_1_t11083_1_0_0;
extern TypeInfo ValueType_t26_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t11083_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t11083_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t11083_MethodInfos/* methods */
	, InternalEnumerator_1_t11083_PropertyInfos/* properties */
	, InternalEnumerator_1_t11083_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t11083_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t11083_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t11083_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t11083_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t11083_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t11083_1_0_0/* this_arg */
	, InternalEnumerator_1_t11083_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t11083_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t11083)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t15063_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>
extern MethodInfo ICollection_1_get_Count_m105756_MethodInfo;
static PropertyInfo ICollection_1_t15063____Count_PropertyInfo = 
{
	&ICollection_1_t15063_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m105756_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m105757_MethodInfo;
static PropertyInfo ICollection_1_t15063____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t15063_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m105757_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t15063_PropertyInfos[] =
{
	&ICollection_1_t15063____Count_PropertyInfo,
	&ICollection_1_t15063____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m105756_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>::get_Count()
MethodInfo ICollection_1_get_Count_m105756_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t15063_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m105756_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m105757_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m105757_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t15063_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m105757_GenericMethod/* genericMethod */

};
extern Il2CppType PrincipalPolicy_t3573_0_0_0;
extern Il2CppType PrincipalPolicy_t3573_0_0_0;
static ParameterInfo ICollection_1_t15063_ICollection_1_Add_m105758_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PrincipalPolicy_t3573_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m105758_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>::Add(T)
MethodInfo ICollection_1_Add_m105758_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t15063_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t15063_ICollection_1_Add_m105758_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m105758_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m105759_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>::Clear()
MethodInfo ICollection_1_Clear_m105759_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t15063_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m105759_GenericMethod/* genericMethod */

};
extern Il2CppType PrincipalPolicy_t3573_0_0_0;
static ParameterInfo ICollection_1_t15063_ICollection_1_Contains_m105760_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PrincipalPolicy_t3573_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m105760_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>::Contains(T)
MethodInfo ICollection_1_Contains_m105760_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t15063_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15063_ICollection_1_Contains_m105760_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m105760_GenericMethod/* genericMethod */

};
extern Il2CppType PrincipalPolicyU5BU5D_t11321_0_0_0;
extern Il2CppType PrincipalPolicyU5BU5D_t11321_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t15063_ICollection_1_CopyTo_m105761_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PrincipalPolicyU5BU5D_t11321_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m105761_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m105761_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t15063_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t15063_ICollection_1_CopyTo_m105761_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m105761_GenericMethod/* genericMethod */

};
extern Il2CppType PrincipalPolicy_t3573_0_0_0;
static ParameterInfo ICollection_1_t15063_ICollection_1_Remove_m105762_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PrincipalPolicy_t3573_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m105762_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.PrincipalPolicy>::Remove(T)
MethodInfo ICollection_1_Remove_m105762_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t15063_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15063_ICollection_1_Remove_m105762_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m105762_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t15063_MethodInfos[] =
{
	&ICollection_1_get_Count_m105756_MethodInfo,
	&ICollection_1_get_IsReadOnly_m105757_MethodInfo,
	&ICollection_1_Add_m105758_MethodInfo,
	&ICollection_1_Clear_m105759_MethodInfo,
	&ICollection_1_Contains_m105760_MethodInfo,
	&ICollection_1_CopyTo_m105761_MethodInfo,
	&ICollection_1_Remove_m105762_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t545_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t15065_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t15063_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t15065_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t15063_0_0_0;
extern Il2CppType ICollection_1_t15063_1_0_0;
struct ICollection_1_t15063;
extern Il2CppGenericClass ICollection_1_t15063_GenericClass;
TypeInfo ICollection_1_t15063_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t15063_MethodInfos/* methods */
	, ICollection_1_t15063_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t15063_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t15063_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t15063_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t15063_0_0_0/* byval_arg */
	, &ICollection_1_t15063_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t15063_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Principal.PrincipalPolicy>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Principal.PrincipalPolicy>
extern Il2CppType IEnumerator_1_t13372_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m105763_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Principal.PrincipalPolicy>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m105763_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t15065_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13372_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m105763_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t15065_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m105763_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t15065_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t15065_0_0_0;
extern Il2CppType IEnumerable_1_t15065_1_0_0;
struct IEnumerable_1_t15065;
extern Il2CppGenericClass IEnumerable_1_t15065_GenericClass;
TypeInfo IEnumerable_1_t15065_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t15065_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t15065_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t15065_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t15065_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t15065_0_0_0/* byval_arg */
	, &IEnumerable_1_t15065_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t15065_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t15064_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Principal.PrincipalPolicy>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.PrincipalPolicy>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.PrincipalPolicy>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Principal.PrincipalPolicy>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.PrincipalPolicy>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Principal.PrincipalPolicy>
extern MethodInfo IList_1_get_Item_m105764_MethodInfo;
extern MethodInfo IList_1_set_Item_m105765_MethodInfo;
static PropertyInfo IList_1_t15064____Item_PropertyInfo = 
{
	&IList_1_t15064_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m105764_MethodInfo/* get */
	, &IList_1_set_Item_m105765_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t15064_PropertyInfos[] =
{
	&IList_1_t15064____Item_PropertyInfo,
	NULL
};
extern Il2CppType PrincipalPolicy_t3573_0_0_0;
static ParameterInfo IList_1_t15064_IList_1_IndexOf_m105766_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PrincipalPolicy_t3573_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m105766_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Principal.PrincipalPolicy>::IndexOf(T)
MethodInfo IList_1_IndexOf_m105766_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t15064_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15064_IList_1_IndexOf_m105766_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m105766_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType PrincipalPolicy_t3573_0_0_0;
static ParameterInfo IList_1_t15064_IList_1_Insert_m105767_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PrincipalPolicy_t3573_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m105767_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.PrincipalPolicy>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m105767_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t15064_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15064_IList_1_Insert_m105767_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m105767_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15064_IList_1_RemoveAt_m105768_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m105768_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.PrincipalPolicy>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m105768_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t15064_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t15064_IList_1_RemoveAt_m105768_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m105768_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15064_IList_1_get_Item_m105764_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType PrincipalPolicy_t3573_0_0_0;
extern void* RuntimeInvoker_PrincipalPolicy_t3573_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m105764_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Principal.PrincipalPolicy>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m105764_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t15064_il2cpp_TypeInfo/* declaring_type */
	, &PrincipalPolicy_t3573_0_0_0/* return_type */
	, RuntimeInvoker_PrincipalPolicy_t3573_Int32_t23/* invoker_method */
	, IList_1_t15064_IList_1_get_Item_m105764_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m105764_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType PrincipalPolicy_t3573_0_0_0;
static ParameterInfo IList_1_t15064_IList_1_set_Item_m105765_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PrincipalPolicy_t3573_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m105765_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.PrincipalPolicy>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m105765_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t15064_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15064_IList_1_set_Item_m105765_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m105765_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t15064_MethodInfos[] =
{
	&IList_1_IndexOf_m105766_MethodInfo,
	&IList_1_Insert_m105767_MethodInfo,
	&IList_1_RemoveAt_m105768_MethodInfo,
	&IList_1_get_Item_m105764_MethodInfo,
	&IList_1_set_Item_m105765_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t15064_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t15063_il2cpp_TypeInfo,
	&IEnumerable_1_t15065_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t15064_0_0_0;
extern Il2CppType IList_1_t15064_1_0_0;
struct IList_1_t15064;
extern Il2CppGenericClass IList_1_t15064_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t15064_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t15064_MethodInfos/* methods */
	, IList_1_t15064_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t15064_il2cpp_TypeInfo/* element_class */
	, IList_1_t15064_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t15064_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t15064_0_0_0/* byval_arg */
	, &IList_1_t15064_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t15064_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13374_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Principal.WindowsAccountType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Principal.WindowsAccountType>
extern MethodInfo IEnumerator_1_get_Current_m105769_MethodInfo;
static PropertyInfo IEnumerator_1_t13374____Current_PropertyInfo = 
{
	&IEnumerator_1_t13374_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m105769_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13374_PropertyInfos[] =
{
	&IEnumerator_1_t13374____Current_PropertyInfo,
	NULL
};
extern Il2CppType WindowsAccountType_t3574_0_0_0;
extern void* RuntimeInvoker_WindowsAccountType_t3574 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m105769_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Principal.WindowsAccountType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m105769_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13374_il2cpp_TypeInfo/* declaring_type */
	, &WindowsAccountType_t3574_0_0_0/* return_type */
	, RuntimeInvoker_WindowsAccountType_t3574/* invoker_method */
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
	, &IEnumerator_1_get_Current_m105769_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13374_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m105769_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13374_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13374_0_0_0;
extern Il2CppType IEnumerator_1_t13374_1_0_0;
struct IEnumerator_1_t13374;
extern Il2CppGenericClass IEnumerator_1_t13374_GenericClass;
TypeInfo IEnumerator_1_t13374_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13374_MethodInfos/* methods */
	, IEnumerator_1_t13374_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13374_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13374_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13374_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13374_0_0_0/* byval_arg */
	, &IEnumerator_1_t13374_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13374_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t11084_il2cpp_TypeInfo;

extern TypeInfo WindowsAccountType_t3574_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m79263_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWindowsAccountType_t3574_m92881_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Principal.WindowsAccountType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Principal.WindowsAccountType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisWindowsAccountType_t3574_m92881 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m79258_MethodInfo;
 void InternalEnumerator_1__ctor_m79258 (InternalEnumerator_1_t11084 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79259_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79259 (InternalEnumerator_1_t11084 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79260_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79260 (InternalEnumerator_1_t11084 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m79263(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m79263_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&WindowsAccountType_t3574_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m79261_MethodInfo;
 void InternalEnumerator_1_Dispose_m79261 (InternalEnumerator_1_t11084 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m79262_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m79262 (InternalEnumerator_1_t11084 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m79263 (InternalEnumerator_1_t11084 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisWindowsAccountType_t3574_m92881(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisWindowsAccountType_t3574_m92881_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t11084____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t11084_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11084, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t11084____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t11084_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11084, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t11084_FieldInfos[] =
{
	&InternalEnumerator_1_t11084____array_0_FieldInfo,
	&InternalEnumerator_1_t11084____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t11084____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11084_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79260_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t11084____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11084_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m79263_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t11084_PropertyInfos[] =
{
	&InternalEnumerator_1_t11084____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t11084____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t11084_InternalEnumerator_1__ctor_m79258_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m79258_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m79258_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m79258/* method */
	, &InternalEnumerator_1_t11084_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t11084_InternalEnumerator_1__ctor_m79258_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m79258_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79259_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79259_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79259/* method */
	, &InternalEnumerator_1_t11084_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79259_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79260_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79260_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79260/* method */
	, &InternalEnumerator_1_t11084_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79260_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m79261_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m79261_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m79261/* method */
	, &InternalEnumerator_1_t11084_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m79261_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m79262_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m79262_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m79262/* method */
	, &InternalEnumerator_1_t11084_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m79262_GenericMethod/* genericMethod */

};
extern Il2CppType WindowsAccountType_t3574_0_0_0;
extern void* RuntimeInvoker_WindowsAccountType_t3574 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m79263_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m79263_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m79263/* method */
	, &InternalEnumerator_1_t11084_il2cpp_TypeInfo/* declaring_type */
	, &WindowsAccountType_t3574_0_0_0/* return_type */
	, RuntimeInvoker_WindowsAccountType_t3574/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m79263_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t11084_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m79258_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79259_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79260_MethodInfo,
	&InternalEnumerator_1_Dispose_m79261_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79262_MethodInfo,
	&InternalEnumerator_1_get_Current_m79263_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t11084_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79260_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79262_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79259_MethodInfo,
	&InternalEnumerator_1_Dispose_m79261_MethodInfo,
	&InternalEnumerator_1_get_Current_m79263_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t11084_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13374_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t11084_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13374_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t11084_0_0_0;
extern Il2CppType InternalEnumerator_1_t11084_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t11084_GenericClass;
TypeInfo InternalEnumerator_1_t11084_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t11084_MethodInfos/* methods */
	, InternalEnumerator_1_t11084_PropertyInfos/* properties */
	, InternalEnumerator_1_t11084_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t11084_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t11084_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t11084_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t11084_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t11084_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t11084_1_0_0/* this_arg */
	, InternalEnumerator_1_t11084_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t11084_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t11084)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t15066_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>
extern MethodInfo ICollection_1_get_Count_m105770_MethodInfo;
static PropertyInfo ICollection_1_t15066____Count_PropertyInfo = 
{
	&ICollection_1_t15066_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m105770_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m105771_MethodInfo;
static PropertyInfo ICollection_1_t15066____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t15066_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m105771_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t15066_PropertyInfos[] =
{
	&ICollection_1_t15066____Count_PropertyInfo,
	&ICollection_1_t15066____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m105770_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::get_Count()
MethodInfo ICollection_1_get_Count_m105770_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t15066_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m105770_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m105771_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m105771_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t15066_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m105771_GenericMethod/* genericMethod */

};
extern Il2CppType WindowsAccountType_t3574_0_0_0;
extern Il2CppType WindowsAccountType_t3574_0_0_0;
static ParameterInfo ICollection_1_t15066_ICollection_1_Add_m105772_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WindowsAccountType_t3574_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m105772_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::Add(T)
MethodInfo ICollection_1_Add_m105772_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t15066_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t15066_ICollection_1_Add_m105772_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m105772_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m105773_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::Clear()
MethodInfo ICollection_1_Clear_m105773_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t15066_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m105773_GenericMethod/* genericMethod */

};
extern Il2CppType WindowsAccountType_t3574_0_0_0;
static ParameterInfo ICollection_1_t15066_ICollection_1_Contains_m105774_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WindowsAccountType_t3574_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m105774_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::Contains(T)
MethodInfo ICollection_1_Contains_m105774_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t15066_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15066_ICollection_1_Contains_m105774_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m105774_GenericMethod/* genericMethod */

};
extern Il2CppType WindowsAccountTypeU5BU5D_t11322_0_0_0;
extern Il2CppType WindowsAccountTypeU5BU5D_t11322_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t15066_ICollection_1_CopyTo_m105775_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &WindowsAccountTypeU5BU5D_t11322_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m105775_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m105775_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t15066_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t15066_ICollection_1_CopyTo_m105775_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m105775_GenericMethod/* genericMethod */

};
extern Il2CppType WindowsAccountType_t3574_0_0_0;
static ParameterInfo ICollection_1_t15066_ICollection_1_Remove_m105776_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WindowsAccountType_t3574_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m105776_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::Remove(T)
MethodInfo ICollection_1_Remove_m105776_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t15066_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15066_ICollection_1_Remove_m105776_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m105776_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t15066_MethodInfos[] =
{
	&ICollection_1_get_Count_m105770_MethodInfo,
	&ICollection_1_get_IsReadOnly_m105771_MethodInfo,
	&ICollection_1_Add_m105772_MethodInfo,
	&ICollection_1_Clear_m105773_MethodInfo,
	&ICollection_1_Contains_m105774_MethodInfo,
	&ICollection_1_CopyTo_m105775_MethodInfo,
	&ICollection_1_Remove_m105776_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t15068_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t15066_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t15068_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t15066_0_0_0;
extern Il2CppType ICollection_1_t15066_1_0_0;
struct ICollection_1_t15066;
extern Il2CppGenericClass ICollection_1_t15066_GenericClass;
TypeInfo ICollection_1_t15066_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t15066_MethodInfos/* methods */
	, ICollection_1_t15066_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t15066_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t15066_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t15066_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t15066_0_0_0/* byval_arg */
	, &ICollection_1_t15066_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t15066_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Principal.WindowsAccountType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Principal.WindowsAccountType>
extern Il2CppType IEnumerator_1_t13374_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m105777_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Principal.WindowsAccountType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m105777_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t15068_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13374_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m105777_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t15068_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m105777_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t15068_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t15068_0_0_0;
extern Il2CppType IEnumerable_1_t15068_1_0_0;
struct IEnumerable_1_t15068;
extern Il2CppGenericClass IEnumerable_1_t15068_GenericClass;
TypeInfo IEnumerable_1_t15068_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t15068_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t15068_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t15068_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t15068_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t15068_0_0_0/* byval_arg */
	, &IEnumerable_1_t15068_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t15068_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t15067_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>
extern MethodInfo IList_1_get_Item_m105778_MethodInfo;
extern MethodInfo IList_1_set_Item_m105779_MethodInfo;
static PropertyInfo IList_1_t15067____Item_PropertyInfo = 
{
	&IList_1_t15067_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m105778_MethodInfo/* get */
	, &IList_1_set_Item_m105779_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t15067_PropertyInfos[] =
{
	&IList_1_t15067____Item_PropertyInfo,
	NULL
};
extern Il2CppType WindowsAccountType_t3574_0_0_0;
static ParameterInfo IList_1_t15067_IList_1_IndexOf_m105780_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WindowsAccountType_t3574_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m105780_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m105780_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t15067_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15067_IList_1_IndexOf_m105780_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m105780_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType WindowsAccountType_t3574_0_0_0;
static ParameterInfo IList_1_t15067_IList_1_Insert_m105781_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &WindowsAccountType_t3574_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m105781_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m105781_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t15067_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15067_IList_1_Insert_m105781_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m105781_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15067_IList_1_RemoveAt_m105782_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m105782_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m105782_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t15067_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t15067_IList_1_RemoveAt_m105782_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m105782_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15067_IList_1_get_Item_m105778_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType WindowsAccountType_t3574_0_0_0;
extern void* RuntimeInvoker_WindowsAccountType_t3574_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m105778_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m105778_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t15067_il2cpp_TypeInfo/* declaring_type */
	, &WindowsAccountType_t3574_0_0_0/* return_type */
	, RuntimeInvoker_WindowsAccountType_t3574_Int32_t23/* invoker_method */
	, IList_1_t15067_IList_1_get_Item_m105778_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m105778_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType WindowsAccountType_t3574_0_0_0;
static ParameterInfo IList_1_t15067_IList_1_set_Item_m105779_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &WindowsAccountType_t3574_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m105779_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m105779_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t15067_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15067_IList_1_set_Item_m105779_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m105779_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t15067_MethodInfos[] =
{
	&IList_1_IndexOf_m105780_MethodInfo,
	&IList_1_Insert_m105781_MethodInfo,
	&IList_1_RemoveAt_m105782_MethodInfo,
	&IList_1_get_Item_m105778_MethodInfo,
	&IList_1_set_Item_m105779_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t15067_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t15066_il2cpp_TypeInfo,
	&IEnumerable_1_t15068_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t15067_0_0_0;
extern Il2CppType IList_1_t15067_1_0_0;
struct IList_1_t15067;
extern Il2CppGenericClass IList_1_t15067_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t15067_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t15067_MethodInfos/* methods */
	, IList_1_t15067_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t15067_il2cpp_TypeInfo/* element_class */
	, IList_1_t15067_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t15067_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t15067_0_0_0/* byval_arg */
	, &IList_1_t15067_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t15067_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13376_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.SecurityCriticalAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.SecurityCriticalAttribute>
extern MethodInfo IEnumerator_1_get_Current_m105783_MethodInfo;
static PropertyInfo IEnumerator_1_t13376____Current_PropertyInfo = 
{
	&IEnumerator_1_t13376_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m105783_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13376_PropertyInfos[] =
{
	&IEnumerator_1_t13376____Current_PropertyInfo,
	NULL
};
extern Il2CppType SecurityCriticalAttribute_t2231_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m105783_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.SecurityCriticalAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m105783_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13376_il2cpp_TypeInfo/* declaring_type */
	, &SecurityCriticalAttribute_t2231_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m105783_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13376_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m105783_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13376_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13376_0_0_0;
extern Il2CppType IEnumerator_1_t13376_1_0_0;
struct IEnumerator_1_t13376;
extern Il2CppGenericClass IEnumerator_1_t13376_GenericClass;
TypeInfo IEnumerator_1_t13376_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13376_MethodInfos/* methods */
	, IEnumerator_1_t13376_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13376_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13376_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13376_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13376_0_0_0/* byval_arg */
	, &IEnumerator_1_t13376_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13376_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t11085_il2cpp_TypeInfo;

extern TypeInfo SecurityCriticalAttribute_t2231_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m79269_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSecurityCriticalAttribute_t2231_m92892_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m79431_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m79431(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.SecurityCriticalAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.SecurityCriticalAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisSecurityCriticalAttribute_t2231_m92892(__this, p0, method) (SecurityCriticalAttribute_t2231 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t11085____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t11085_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11085, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t11085____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t11085_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11085, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t11085_FieldInfos[] =
{
	&InternalEnumerator_1_t11085____array_0_FieldInfo,
	&InternalEnumerator_1_t11085____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79266_MethodInfo;
static PropertyInfo InternalEnumerator_1_t11085____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11085_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79266_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t11085____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11085_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m79269_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t11085_PropertyInfos[] =
{
	&InternalEnumerator_1_t11085____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t11085____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t11085_InternalEnumerator_1__ctor_m79264_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m79264_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m79264_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t11085_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t11085_InternalEnumerator_1__ctor_m79264_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m79264_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79265_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79265_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t11085_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79265_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79266_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79266_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t11085_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79266_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m79267_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m79267_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t11085_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m79267_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m79268_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m79268_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t11085_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m79268_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityCriticalAttribute_t2231_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m79269_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m79269_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t11085_il2cpp_TypeInfo/* declaring_type */
	, &SecurityCriticalAttribute_t2231_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m79269_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t11085_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m79264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79265_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79266_MethodInfo,
	&InternalEnumerator_1_Dispose_m79267_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79268_MethodInfo,
	&InternalEnumerator_1_get_Current_m79269_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m79268_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79265_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m79267_MethodInfo;
static MethodInfo* InternalEnumerator_1_t11085_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79266_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79268_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79265_MethodInfo,
	&InternalEnumerator_1_Dispose_m79267_MethodInfo,
	&InternalEnumerator_1_get_Current_m79269_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t11085_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13376_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t11085_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13376_il2cpp_TypeInfo, 8},
};
extern TypeInfo SecurityCriticalAttribute_t2231_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t11085_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m79269_MethodInfo/* Method Usage */,
	&SecurityCriticalAttribute_t2231_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisSecurityCriticalAttribute_t2231_m92892_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t11085_0_0_0;
extern Il2CppType InternalEnumerator_1_t11085_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t11085_GenericClass;
TypeInfo InternalEnumerator_1_t11085_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t11085_MethodInfos/* methods */
	, InternalEnumerator_1_t11085_PropertyInfos/* properties */
	, InternalEnumerator_1_t11085_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t11085_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t11085_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t11085_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t11085_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t11085_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t11085_1_0_0/* this_arg */
	, InternalEnumerator_1_t11085_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t11085_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t11085_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t11085)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t15069_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>
extern MethodInfo ICollection_1_get_Count_m105784_MethodInfo;
static PropertyInfo ICollection_1_t15069____Count_PropertyInfo = 
{
	&ICollection_1_t15069_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m105784_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m105785_MethodInfo;
static PropertyInfo ICollection_1_t15069____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t15069_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m105785_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t15069_PropertyInfos[] =
{
	&ICollection_1_t15069____Count_PropertyInfo,
	&ICollection_1_t15069____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m105784_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m105784_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t15069_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m105784_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m105785_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m105785_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t15069_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m105785_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityCriticalAttribute_t2231_0_0_0;
extern Il2CppType SecurityCriticalAttribute_t2231_0_0_0;
static ParameterInfo ICollection_1_t15069_ICollection_1_Add_m105786_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCriticalAttribute_t2231_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m105786_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::Add(T)
MethodInfo ICollection_1_Add_m105786_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t15069_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t15069_ICollection_1_Add_m105786_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m105786_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m105787_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::Clear()
MethodInfo ICollection_1_Clear_m105787_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t15069_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m105787_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityCriticalAttribute_t2231_0_0_0;
static ParameterInfo ICollection_1_t15069_ICollection_1_Contains_m105788_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCriticalAttribute_t2231_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m105788_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m105788_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t15069_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t15069_ICollection_1_Contains_m105788_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m105788_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityCriticalAttributeU5BU5D_t11323_0_0_0;
extern Il2CppType SecurityCriticalAttributeU5BU5D_t11323_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t15069_ICollection_1_CopyTo_m105789_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCriticalAttributeU5BU5D_t11323_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m105789_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m105789_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t15069_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t15069_ICollection_1_CopyTo_m105789_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m105789_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityCriticalAttribute_t2231_0_0_0;
static ParameterInfo ICollection_1_t15069_ICollection_1_Remove_m105790_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCriticalAttribute_t2231_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m105790_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m105790_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t15069_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t15069_ICollection_1_Remove_m105790_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m105790_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t15069_MethodInfos[] =
{
	&ICollection_1_get_Count_m105784_MethodInfo,
	&ICollection_1_get_IsReadOnly_m105785_MethodInfo,
	&ICollection_1_Add_m105786_MethodInfo,
	&ICollection_1_Clear_m105787_MethodInfo,
	&ICollection_1_Contains_m105788_MethodInfo,
	&ICollection_1_CopyTo_m105789_MethodInfo,
	&ICollection_1_Remove_m105790_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t15071_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t15069_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t15071_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t15069_0_0_0;
extern Il2CppType ICollection_1_t15069_1_0_0;
struct ICollection_1_t15069;
extern Il2CppGenericClass ICollection_1_t15069_GenericClass;
TypeInfo ICollection_1_t15069_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t15069_MethodInfos/* methods */
	, ICollection_1_t15069_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t15069_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t15069_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t15069_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t15069_0_0_0/* byval_arg */
	, &ICollection_1_t15069_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t15069_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.SecurityCriticalAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.SecurityCriticalAttribute>
extern Il2CppType IEnumerator_1_t13376_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m105791_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.SecurityCriticalAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m105791_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t15071_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13376_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m105791_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t15071_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m105791_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t15071_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t15071_0_0_0;
extern Il2CppType IEnumerable_1_t15071_1_0_0;
struct IEnumerable_1_t15071;
extern Il2CppGenericClass IEnumerable_1_t15071_GenericClass;
TypeInfo IEnumerable_1_t15071_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t15071_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t15071_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t15071_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t15071_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t15071_0_0_0/* byval_arg */
	, &IEnumerable_1_t15071_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t15071_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t15070_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>
extern MethodInfo IList_1_get_Item_m105792_MethodInfo;
extern MethodInfo IList_1_set_Item_m105793_MethodInfo;
static PropertyInfo IList_1_t15070____Item_PropertyInfo = 
{
	&IList_1_t15070_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m105792_MethodInfo/* get */
	, &IList_1_set_Item_m105793_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t15070_PropertyInfos[] =
{
	&IList_1_t15070____Item_PropertyInfo,
	NULL
};
extern Il2CppType SecurityCriticalAttribute_t2231_0_0_0;
static ParameterInfo IList_1_t15070_IList_1_IndexOf_m105794_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCriticalAttribute_t2231_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m105794_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m105794_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t15070_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t15070_IList_1_IndexOf_m105794_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m105794_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType SecurityCriticalAttribute_t2231_0_0_0;
static ParameterInfo IList_1_t15070_IList_1_Insert_m105795_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SecurityCriticalAttribute_t2231_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m105795_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m105795_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t15070_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t15070_IList_1_Insert_m105795_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m105795_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15070_IList_1_RemoveAt_m105796_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m105796_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m105796_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t15070_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t15070_IList_1_RemoveAt_m105796_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m105796_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15070_IList_1_get_Item_m105792_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType SecurityCriticalAttribute_t2231_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m105792_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m105792_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t15070_il2cpp_TypeInfo/* declaring_type */
	, &SecurityCriticalAttribute_t2231_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t15070_IList_1_get_Item_m105792_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m105792_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType SecurityCriticalAttribute_t2231_0_0_0;
static ParameterInfo IList_1_t15070_IList_1_set_Item_m105793_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SecurityCriticalAttribute_t2231_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m105793_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m105793_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t15070_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t15070_IList_1_set_Item_m105793_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m105793_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t15070_MethodInfos[] =
{
	&IList_1_IndexOf_m105794_MethodInfo,
	&IList_1_Insert_m105795_MethodInfo,
	&IList_1_RemoveAt_m105796_MethodInfo,
	&IList_1_get_Item_m105792_MethodInfo,
	&IList_1_set_Item_m105793_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t15070_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t15069_il2cpp_TypeInfo,
	&IEnumerable_1_t15071_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t15070_0_0_0;
extern Il2CppType IList_1_t15070_1_0_0;
struct IList_1_t15070;
extern Il2CppGenericClass IList_1_t15070_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t15070_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t15070_MethodInfos/* methods */
	, IList_1_t15070_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t15070_il2cpp_TypeInfo/* element_class */
	, IList_1_t15070_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t15070_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t15070_0_0_0/* byval_arg */
	, &IList_1_t15070_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t15070_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13378_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.SecuritySafeCriticalAttribute>
extern MethodInfo IEnumerator_1_get_Current_m105797_MethodInfo;
static PropertyInfo IEnumerator_1_t13378____Current_PropertyInfo = 
{
	&IEnumerator_1_t13378_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m105797_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13378_PropertyInfos[] =
{
	&IEnumerator_1_t13378____Current_PropertyInfo,
	NULL
};
extern Il2CppType SecuritySafeCriticalAttribute_t2240_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m105797_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m105797_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13378_il2cpp_TypeInfo/* declaring_type */
	, &SecuritySafeCriticalAttribute_t2240_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m105797_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13378_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m105797_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13378_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13378_0_0_0;
extern Il2CppType IEnumerator_1_t13378_1_0_0;
struct IEnumerator_1_t13378;
extern Il2CppGenericClass IEnumerator_1_t13378_GenericClass;
TypeInfo IEnumerator_1_t13378_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13378_MethodInfos/* methods */
	, IEnumerator_1_t13378_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13378_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13378_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13378_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13378_0_0_0/* byval_arg */
	, &IEnumerator_1_t13378_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13378_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t11086_il2cpp_TypeInfo;

extern TypeInfo SecuritySafeCriticalAttribute_t2240_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m79275_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSecuritySafeCriticalAttribute_t2240_m92903_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.SecuritySafeCriticalAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.SecuritySafeCriticalAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisSecuritySafeCriticalAttribute_t2240_m92903(__this, p0, method) (SecuritySafeCriticalAttribute_t2240 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t11086____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t11086_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11086, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t11086____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t11086_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11086, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t11086_FieldInfos[] =
{
	&InternalEnumerator_1_t11086____array_0_FieldInfo,
	&InternalEnumerator_1_t11086____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79272_MethodInfo;
static PropertyInfo InternalEnumerator_1_t11086____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11086_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79272_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t11086____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11086_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m79275_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t11086_PropertyInfos[] =
{
	&InternalEnumerator_1_t11086____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t11086____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t11086_InternalEnumerator_1__ctor_m79270_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m79270_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m79270_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t11086_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t11086_InternalEnumerator_1__ctor_m79270_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m79270_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79271_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79271_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t11086_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79271_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79272_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79272_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t11086_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79272_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m79273_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m79273_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t11086_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m79273_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m79274_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m79274_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t11086_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m79274_GenericMethod/* genericMethod */

};
extern Il2CppType SecuritySafeCriticalAttribute_t2240_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m79275_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m79275_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t11086_il2cpp_TypeInfo/* declaring_type */
	, &SecuritySafeCriticalAttribute_t2240_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m79275_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t11086_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m79270_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79271_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79272_MethodInfo,
	&InternalEnumerator_1_Dispose_m79273_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79274_MethodInfo,
	&InternalEnumerator_1_get_Current_m79275_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m79274_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79271_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m79273_MethodInfo;
static MethodInfo* InternalEnumerator_1_t11086_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79272_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79274_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79271_MethodInfo,
	&InternalEnumerator_1_Dispose_m79273_MethodInfo,
	&InternalEnumerator_1_get_Current_m79275_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t11086_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13378_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t11086_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13378_il2cpp_TypeInfo, 8},
};
extern TypeInfo SecuritySafeCriticalAttribute_t2240_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t11086_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m79275_MethodInfo/* Method Usage */,
	&SecuritySafeCriticalAttribute_t2240_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisSecuritySafeCriticalAttribute_t2240_m92903_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t11086_0_0_0;
extern Il2CppType InternalEnumerator_1_t11086_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t11086_GenericClass;
TypeInfo InternalEnumerator_1_t11086_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t11086_MethodInfos/* methods */
	, InternalEnumerator_1_t11086_PropertyInfos/* properties */
	, InternalEnumerator_1_t11086_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t11086_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t11086_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t11086_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t11086_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t11086_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t11086_1_0_0/* this_arg */
	, InternalEnumerator_1_t11086_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t11086_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t11086_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t11086)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t15072_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>
extern MethodInfo ICollection_1_get_Count_m105798_MethodInfo;
static PropertyInfo ICollection_1_t15072____Count_PropertyInfo = 
{
	&ICollection_1_t15072_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m105798_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m105799_MethodInfo;
static PropertyInfo ICollection_1_t15072____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t15072_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m105799_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t15072_PropertyInfos[] =
{
	&ICollection_1_t15072____Count_PropertyInfo,
	&ICollection_1_t15072____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m105798_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m105798_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t15072_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m105798_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m105799_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m105799_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t15072_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m105799_GenericMethod/* genericMethod */

};
extern Il2CppType SecuritySafeCriticalAttribute_t2240_0_0_0;
extern Il2CppType SecuritySafeCriticalAttribute_t2240_0_0_0;
static ParameterInfo ICollection_1_t15072_ICollection_1_Add_m105800_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecuritySafeCriticalAttribute_t2240_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m105800_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::Add(T)
MethodInfo ICollection_1_Add_m105800_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t15072_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t15072_ICollection_1_Add_m105800_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m105800_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m105801_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::Clear()
MethodInfo ICollection_1_Clear_m105801_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t15072_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m105801_GenericMethod/* genericMethod */

};
extern Il2CppType SecuritySafeCriticalAttribute_t2240_0_0_0;
static ParameterInfo ICollection_1_t15072_ICollection_1_Contains_m105802_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecuritySafeCriticalAttribute_t2240_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m105802_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m105802_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t15072_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t15072_ICollection_1_Contains_m105802_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m105802_GenericMethod/* genericMethod */

};
extern Il2CppType SecuritySafeCriticalAttributeU5BU5D_t11324_0_0_0;
extern Il2CppType SecuritySafeCriticalAttributeU5BU5D_t11324_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t15072_ICollection_1_CopyTo_m105803_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SecuritySafeCriticalAttributeU5BU5D_t11324_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m105803_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m105803_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t15072_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t15072_ICollection_1_CopyTo_m105803_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m105803_GenericMethod/* genericMethod */

};
extern Il2CppType SecuritySafeCriticalAttribute_t2240_0_0_0;
static ParameterInfo ICollection_1_t15072_ICollection_1_Remove_m105804_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecuritySafeCriticalAttribute_t2240_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m105804_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m105804_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t15072_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t15072_ICollection_1_Remove_m105804_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m105804_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t15072_MethodInfos[] =
{
	&ICollection_1_get_Count_m105798_MethodInfo,
	&ICollection_1_get_IsReadOnly_m105799_MethodInfo,
	&ICollection_1_Add_m105800_MethodInfo,
	&ICollection_1_Clear_m105801_MethodInfo,
	&ICollection_1_Contains_m105802_MethodInfo,
	&ICollection_1_CopyTo_m105803_MethodInfo,
	&ICollection_1_Remove_m105804_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t15074_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t15072_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t15074_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t15072_0_0_0;
extern Il2CppType ICollection_1_t15072_1_0_0;
struct ICollection_1_t15072;
extern Il2CppGenericClass ICollection_1_t15072_GenericClass;
TypeInfo ICollection_1_t15072_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t15072_MethodInfos/* methods */
	, ICollection_1_t15072_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t15072_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t15072_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t15072_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t15072_0_0_0/* byval_arg */
	, &ICollection_1_t15072_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t15072_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.SecuritySafeCriticalAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.SecuritySafeCriticalAttribute>
extern Il2CppType IEnumerator_1_t13378_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m105805_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.SecuritySafeCriticalAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m105805_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t15074_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13378_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m105805_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t15074_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m105805_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t15074_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t15074_0_0_0;
extern Il2CppType IEnumerable_1_t15074_1_0_0;
struct IEnumerable_1_t15074;
extern Il2CppGenericClass IEnumerable_1_t15074_GenericClass;
TypeInfo IEnumerable_1_t15074_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t15074_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t15074_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t15074_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t15074_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t15074_0_0_0/* byval_arg */
	, &IEnumerable_1_t15074_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t15074_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t15073_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>
extern MethodInfo IList_1_get_Item_m105806_MethodInfo;
extern MethodInfo IList_1_set_Item_m105807_MethodInfo;
static PropertyInfo IList_1_t15073____Item_PropertyInfo = 
{
	&IList_1_t15073_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m105806_MethodInfo/* get */
	, &IList_1_set_Item_m105807_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t15073_PropertyInfos[] =
{
	&IList_1_t15073____Item_PropertyInfo,
	NULL
};
extern Il2CppType SecuritySafeCriticalAttribute_t2240_0_0_0;
static ParameterInfo IList_1_t15073_IList_1_IndexOf_m105808_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecuritySafeCriticalAttribute_t2240_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m105808_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m105808_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t15073_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t15073_IList_1_IndexOf_m105808_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m105808_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType SecuritySafeCriticalAttribute_t2240_0_0_0;
static ParameterInfo IList_1_t15073_IList_1_Insert_m105809_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SecuritySafeCriticalAttribute_t2240_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m105809_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m105809_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t15073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t15073_IList_1_Insert_m105809_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m105809_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15073_IList_1_RemoveAt_m105810_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m105810_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m105810_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t15073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t15073_IList_1_RemoveAt_m105810_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m105810_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15073_IList_1_get_Item_m105806_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType SecuritySafeCriticalAttribute_t2240_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m105806_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m105806_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t15073_il2cpp_TypeInfo/* declaring_type */
	, &SecuritySafeCriticalAttribute_t2240_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t15073_IList_1_get_Item_m105806_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m105806_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType SecuritySafeCriticalAttribute_t2240_0_0_0;
static ParameterInfo IList_1_t15073_IList_1_set_Item_m105807_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SecuritySafeCriticalAttribute_t2240_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m105807_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m105807_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t15073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t15073_IList_1_set_Item_m105807_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m105807_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t15073_MethodInfos[] =
{
	&IList_1_IndexOf_m105808_MethodInfo,
	&IList_1_Insert_m105809_MethodInfo,
	&IList_1_RemoveAt_m105810_MethodInfo,
	&IList_1_get_Item_m105806_MethodInfo,
	&IList_1_set_Item_m105807_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t15073_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t15072_il2cpp_TypeInfo,
	&IEnumerable_1_t15074_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t15073_0_0_0;
extern Il2CppType IList_1_t15073_1_0_0;
struct IList_1_t15073;
extern Il2CppGenericClass IList_1_t15073_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t15073_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t15073_MethodInfos/* methods */
	, IList_1_t15073_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t15073_il2cpp_TypeInfo/* element_class */
	, IList_1_t15073_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t15073_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t15073_0_0_0/* byval_arg */
	, &IList_1_t15073_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t15073_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13380_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern MethodInfo IEnumerator_1_get_Current_m105811_MethodInfo;
static PropertyInfo IEnumerator_1_t13380____Current_PropertyInfo = 
{
	&IEnumerator_1_t13380_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m105811_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13380_PropertyInfos[] =
{
	&IEnumerator_1_t13380____Current_PropertyInfo,
	NULL
};
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m105811_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m105811_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13380_il2cpp_TypeInfo/* declaring_type */
	, &SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m105811_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13380_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m105811_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13380_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13380_0_0_0;
extern Il2CppType IEnumerator_1_t13380_1_0_0;
struct IEnumerator_1_t13380;
extern Il2CppGenericClass IEnumerator_1_t13380_GenericClass;
TypeInfo IEnumerator_1_t13380_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13380_MethodInfos/* methods */
	, IEnumerator_1_t13380_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13380_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13380_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13380_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13380_0_0_0/* byval_arg */
	, &IEnumerator_1_t13380_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13380_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t11087_il2cpp_TypeInfo;

extern TypeInfo SuppressUnmanagedCodeSecurityAttribute_t3584_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m79281_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSuppressUnmanagedCodeSecurityAttribute_t3584_m92914_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.SuppressUnmanagedCodeSecurityAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.SuppressUnmanagedCodeSecurityAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisSuppressUnmanagedCodeSecurityAttribute_t3584_m92914(__this, p0, method) (SuppressUnmanagedCodeSecurityAttribute_t3584 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t11087____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t11087_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11087, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t11087____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t11087_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11087, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t11087_FieldInfos[] =
{
	&InternalEnumerator_1_t11087____array_0_FieldInfo,
	&InternalEnumerator_1_t11087____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79278_MethodInfo;
static PropertyInfo InternalEnumerator_1_t11087____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11087_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79278_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t11087____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11087_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m79281_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t11087_PropertyInfos[] =
{
	&InternalEnumerator_1_t11087____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t11087____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t11087_InternalEnumerator_1__ctor_m79276_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m79276_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m79276_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t11087_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t11087_InternalEnumerator_1__ctor_m79276_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m79276_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79277_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79277_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t11087_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79277_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79278_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79278_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t11087_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79278_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m79279_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m79279_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t11087_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m79279_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m79280_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m79280_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t11087_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m79280_GenericMethod/* genericMethod */

};
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m79281_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m79281_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t11087_il2cpp_TypeInfo/* declaring_type */
	, &SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m79281_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t11087_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m79276_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79277_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79278_MethodInfo,
	&InternalEnumerator_1_Dispose_m79279_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79280_MethodInfo,
	&InternalEnumerator_1_get_Current_m79281_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m79280_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79277_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m79279_MethodInfo;
static MethodInfo* InternalEnumerator_1_t11087_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79278_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79280_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79277_MethodInfo,
	&InternalEnumerator_1_Dispose_m79279_MethodInfo,
	&InternalEnumerator_1_get_Current_m79281_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t11087_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13380_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t11087_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13380_il2cpp_TypeInfo, 8},
};
extern TypeInfo SuppressUnmanagedCodeSecurityAttribute_t3584_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t11087_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m79281_MethodInfo/* Method Usage */,
	&SuppressUnmanagedCodeSecurityAttribute_t3584_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisSuppressUnmanagedCodeSecurityAttribute_t3584_m92914_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t11087_0_0_0;
extern Il2CppType InternalEnumerator_1_t11087_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t11087_GenericClass;
TypeInfo InternalEnumerator_1_t11087_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t11087_MethodInfos/* methods */
	, InternalEnumerator_1_t11087_PropertyInfos/* properties */
	, InternalEnumerator_1_t11087_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t11087_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t11087_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t11087_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t11087_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t11087_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t11087_1_0_0/* this_arg */
	, InternalEnumerator_1_t11087_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t11087_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t11087_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t11087)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t15075_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern MethodInfo ICollection_1_get_Count_m105812_MethodInfo;
static PropertyInfo ICollection_1_t15075____Count_PropertyInfo = 
{
	&ICollection_1_t15075_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m105812_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m105813_MethodInfo;
static PropertyInfo ICollection_1_t15075____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t15075_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m105813_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t15075_PropertyInfos[] =
{
	&ICollection_1_t15075____Count_PropertyInfo,
	&ICollection_1_t15075____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m105812_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m105812_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t15075_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m105812_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m105813_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m105813_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t15075_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m105813_GenericMethod/* genericMethod */

};
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0;
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0;
static ParameterInfo ICollection_1_t15075_ICollection_1_Add_m105814_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m105814_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Add(T)
MethodInfo ICollection_1_Add_m105814_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t15075_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t15075_ICollection_1_Add_m105814_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m105814_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m105815_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Clear()
MethodInfo ICollection_1_Clear_m105815_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t15075_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m105815_GenericMethod/* genericMethod */

};
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0;
static ParameterInfo ICollection_1_t15075_ICollection_1_Contains_m105816_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m105816_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m105816_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t15075_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t15075_ICollection_1_Contains_m105816_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m105816_GenericMethod/* genericMethod */

};
extern Il2CppType SuppressUnmanagedCodeSecurityAttributeU5BU5D_t11325_0_0_0;
extern Il2CppType SuppressUnmanagedCodeSecurityAttributeU5BU5D_t11325_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t15075_ICollection_1_CopyTo_m105817_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SuppressUnmanagedCodeSecurityAttributeU5BU5D_t11325_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m105817_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m105817_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t15075_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t15075_ICollection_1_CopyTo_m105817_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m105817_GenericMethod/* genericMethod */

};
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0;
static ParameterInfo ICollection_1_t15075_ICollection_1_Remove_m105818_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m105818_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m105818_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t15075_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t15075_ICollection_1_Remove_m105818_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m105818_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t15075_MethodInfos[] =
{
	&ICollection_1_get_Count_m105812_MethodInfo,
	&ICollection_1_get_IsReadOnly_m105813_MethodInfo,
	&ICollection_1_Add_m105814_MethodInfo,
	&ICollection_1_Clear_m105815_MethodInfo,
	&ICollection_1_Contains_m105816_MethodInfo,
	&ICollection_1_CopyTo_m105817_MethodInfo,
	&ICollection_1_Remove_m105818_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t15077_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t15075_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t15077_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t15075_0_0_0;
extern Il2CppType ICollection_1_t15075_1_0_0;
struct ICollection_1_t15075;
extern Il2CppGenericClass ICollection_1_t15075_GenericClass;
TypeInfo ICollection_1_t15075_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t15075_MethodInfos/* methods */
	, ICollection_1_t15075_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t15075_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t15075_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t15075_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t15075_0_0_0/* byval_arg */
	, &ICollection_1_t15075_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t15075_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern Il2CppType IEnumerator_1_t13380_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m105819_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m105819_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t15077_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13380_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m105819_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t15077_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m105819_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t15077_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t15077_0_0_0;
extern Il2CppType IEnumerable_1_t15077_1_0_0;
struct IEnumerable_1_t15077;
extern Il2CppGenericClass IEnumerable_1_t15077_GenericClass;
TypeInfo IEnumerable_1_t15077_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t15077_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t15077_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t15077_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t15077_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t15077_0_0_0/* byval_arg */
	, &IEnumerable_1_t15077_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t15077_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t15076_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern MethodInfo IList_1_get_Item_m105820_MethodInfo;
extern MethodInfo IList_1_set_Item_m105821_MethodInfo;
static PropertyInfo IList_1_t15076____Item_PropertyInfo = 
{
	&IList_1_t15076_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m105820_MethodInfo/* get */
	, &IList_1_set_Item_m105821_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t15076_PropertyInfos[] =
{
	&IList_1_t15076____Item_PropertyInfo,
	NULL
};
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0;
static ParameterInfo IList_1_t15076_IList_1_IndexOf_m105822_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m105822_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m105822_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t15076_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t15076_IList_1_IndexOf_m105822_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m105822_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0;
static ParameterInfo IList_1_t15076_IList_1_Insert_m105823_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m105823_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m105823_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t15076_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t15076_IList_1_Insert_m105823_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m105823_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15076_IList_1_RemoveAt_m105824_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m105824_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m105824_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t15076_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t15076_IList_1_RemoveAt_m105824_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m105824_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15076_IList_1_get_Item_m105820_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m105820_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m105820_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t15076_il2cpp_TypeInfo/* declaring_type */
	, &SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t15076_IList_1_get_Item_m105820_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m105820_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0;
static ParameterInfo IList_1_t15076_IList_1_set_Item_m105821_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SuppressUnmanagedCodeSecurityAttribute_t3584_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m105821_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m105821_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t15076_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t15076_IList_1_set_Item_m105821_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m105821_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t15076_MethodInfos[] =
{
	&IList_1_IndexOf_m105822_MethodInfo,
	&IList_1_Insert_m105823_MethodInfo,
	&IList_1_RemoveAt_m105824_MethodInfo,
	&IList_1_get_Item_m105820_MethodInfo,
	&IList_1_set_Item_m105821_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t15076_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t15075_il2cpp_TypeInfo,
	&IEnumerable_1_t15077_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t15076_0_0_0;
extern Il2CppType IList_1_t15076_1_0_0;
struct IList_1_t15076;
extern Il2CppGenericClass IList_1_t15076_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t15076_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t15076_MethodInfos/* methods */
	, IList_1_t15076_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t15076_il2cpp_TypeInfo/* element_class */
	, IList_1_t15076_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t15076_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t15076_0_0_0/* byval_arg */
	, &IList_1_t15076_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t15076_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13382_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.UnverifiableCodeAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.UnverifiableCodeAttribute>
extern MethodInfo IEnumerator_1_get_Current_m105825_MethodInfo;
static PropertyInfo IEnumerator_1_t13382____Current_PropertyInfo = 
{
	&IEnumerator_1_t13382_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m105825_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13382_PropertyInfos[] =
{
	&IEnumerator_1_t13382____Current_PropertyInfo,
	NULL
};
extern Il2CppType UnverifiableCodeAttribute_t3585_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m105825_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.UnverifiableCodeAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m105825_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13382_il2cpp_TypeInfo/* declaring_type */
	, &UnverifiableCodeAttribute_t3585_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m105825_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13382_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m105825_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13382_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13382_0_0_0;
extern Il2CppType IEnumerator_1_t13382_1_0_0;
struct IEnumerator_1_t13382;
extern Il2CppGenericClass IEnumerator_1_t13382_GenericClass;
TypeInfo IEnumerator_1_t13382_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13382_MethodInfos/* methods */
	, IEnumerator_1_t13382_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13382_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13382_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13382_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13382_0_0_0/* byval_arg */
	, &IEnumerator_1_t13382_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13382_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t11088_il2cpp_TypeInfo;

extern TypeInfo UnverifiableCodeAttribute_t3585_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m79287_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUnverifiableCodeAttribute_t3585_m92925_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.UnverifiableCodeAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.UnverifiableCodeAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisUnverifiableCodeAttribute_t3585_m92925(__this, p0, method) (UnverifiableCodeAttribute_t3585 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t11088____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t11088_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11088, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t11088____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t11088_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11088, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t11088_FieldInfos[] =
{
	&InternalEnumerator_1_t11088____array_0_FieldInfo,
	&InternalEnumerator_1_t11088____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79284_MethodInfo;
static PropertyInfo InternalEnumerator_1_t11088____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11088_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79284_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t11088____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11088_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m79287_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t11088_PropertyInfos[] =
{
	&InternalEnumerator_1_t11088____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t11088____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t11088_InternalEnumerator_1__ctor_m79282_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m79282_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m79282_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t11088_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t11088_InternalEnumerator_1__ctor_m79282_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m79282_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79283_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79283_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t11088_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79283_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79284_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79284_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t11088_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79284_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m79285_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m79285_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t11088_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m79285_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m79286_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m79286_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t11088_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m79286_GenericMethod/* genericMethod */

};
extern Il2CppType UnverifiableCodeAttribute_t3585_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m79287_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m79287_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t11088_il2cpp_TypeInfo/* declaring_type */
	, &UnverifiableCodeAttribute_t3585_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m79287_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t11088_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m79282_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79283_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79284_MethodInfo,
	&InternalEnumerator_1_Dispose_m79285_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79286_MethodInfo,
	&InternalEnumerator_1_get_Current_m79287_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m79286_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79283_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m79285_MethodInfo;
static MethodInfo* InternalEnumerator_1_t11088_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79284_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79286_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79283_MethodInfo,
	&InternalEnumerator_1_Dispose_m79285_MethodInfo,
	&InternalEnumerator_1_get_Current_m79287_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t11088_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13382_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t11088_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13382_il2cpp_TypeInfo, 8},
};
extern TypeInfo UnverifiableCodeAttribute_t3585_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t11088_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m79287_MethodInfo/* Method Usage */,
	&UnverifiableCodeAttribute_t3585_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisUnverifiableCodeAttribute_t3585_m92925_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t11088_0_0_0;
extern Il2CppType InternalEnumerator_1_t11088_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t11088_GenericClass;
TypeInfo InternalEnumerator_1_t11088_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t11088_MethodInfos/* methods */
	, InternalEnumerator_1_t11088_PropertyInfos/* properties */
	, InternalEnumerator_1_t11088_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t11088_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t11088_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t11088_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t11088_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t11088_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t11088_1_0_0/* this_arg */
	, InternalEnumerator_1_t11088_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t11088_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t11088_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t11088)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t15078_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>
extern MethodInfo ICollection_1_get_Count_m105826_MethodInfo;
static PropertyInfo ICollection_1_t15078____Count_PropertyInfo = 
{
	&ICollection_1_t15078_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m105826_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m105827_MethodInfo;
static PropertyInfo ICollection_1_t15078____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t15078_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m105827_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t15078_PropertyInfos[] =
{
	&ICollection_1_t15078____Count_PropertyInfo,
	&ICollection_1_t15078____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m105826_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m105826_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t15078_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m105826_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m105827_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m105827_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t15078_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m105827_GenericMethod/* genericMethod */

};
extern Il2CppType UnverifiableCodeAttribute_t3585_0_0_0;
extern Il2CppType UnverifiableCodeAttribute_t3585_0_0_0;
static ParameterInfo ICollection_1_t15078_ICollection_1_Add_m105828_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnverifiableCodeAttribute_t3585_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m105828_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::Add(T)
MethodInfo ICollection_1_Add_m105828_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t15078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t15078_ICollection_1_Add_m105828_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m105828_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m105829_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::Clear()
MethodInfo ICollection_1_Clear_m105829_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t15078_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m105829_GenericMethod/* genericMethod */

};
extern Il2CppType UnverifiableCodeAttribute_t3585_0_0_0;
static ParameterInfo ICollection_1_t15078_ICollection_1_Contains_m105830_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnverifiableCodeAttribute_t3585_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m105830_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m105830_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t15078_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t15078_ICollection_1_Contains_m105830_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m105830_GenericMethod/* genericMethod */

};
extern Il2CppType UnverifiableCodeAttributeU5BU5D_t11326_0_0_0;
extern Il2CppType UnverifiableCodeAttributeU5BU5D_t11326_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t15078_ICollection_1_CopyTo_m105831_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UnverifiableCodeAttributeU5BU5D_t11326_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m105831_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m105831_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t15078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t15078_ICollection_1_CopyTo_m105831_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m105831_GenericMethod/* genericMethod */

};
extern Il2CppType UnverifiableCodeAttribute_t3585_0_0_0;
static ParameterInfo ICollection_1_t15078_ICollection_1_Remove_m105832_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnverifiableCodeAttribute_t3585_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m105832_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m105832_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t15078_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t15078_ICollection_1_Remove_m105832_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m105832_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t15078_MethodInfos[] =
{
	&ICollection_1_get_Count_m105826_MethodInfo,
	&ICollection_1_get_IsReadOnly_m105827_MethodInfo,
	&ICollection_1_Add_m105828_MethodInfo,
	&ICollection_1_Clear_m105829_MethodInfo,
	&ICollection_1_Contains_m105830_MethodInfo,
	&ICollection_1_CopyTo_m105831_MethodInfo,
	&ICollection_1_Remove_m105832_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t15080_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t15078_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t15080_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t15078_0_0_0;
extern Il2CppType ICollection_1_t15078_1_0_0;
struct ICollection_1_t15078;
extern Il2CppGenericClass ICollection_1_t15078_GenericClass;
TypeInfo ICollection_1_t15078_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t15078_MethodInfos/* methods */
	, ICollection_1_t15078_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t15078_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t15078_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t15078_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t15078_0_0_0/* byval_arg */
	, &ICollection_1_t15078_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t15078_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.UnverifiableCodeAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.UnverifiableCodeAttribute>
extern Il2CppType IEnumerator_1_t13382_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m105833_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.UnverifiableCodeAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m105833_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t15080_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13382_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m105833_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t15080_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m105833_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t15080_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t15080_0_0_0;
extern Il2CppType IEnumerable_1_t15080_1_0_0;
struct IEnumerable_1_t15080;
extern Il2CppGenericClass IEnumerable_1_t15080_GenericClass;
TypeInfo IEnumerable_1_t15080_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t15080_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t15080_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t15080_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t15080_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t15080_0_0_0/* byval_arg */
	, &IEnumerable_1_t15080_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t15080_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t15079_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>
extern MethodInfo IList_1_get_Item_m105834_MethodInfo;
extern MethodInfo IList_1_set_Item_m105835_MethodInfo;
static PropertyInfo IList_1_t15079____Item_PropertyInfo = 
{
	&IList_1_t15079_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m105834_MethodInfo/* get */
	, &IList_1_set_Item_m105835_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t15079_PropertyInfos[] =
{
	&IList_1_t15079____Item_PropertyInfo,
	NULL
};
extern Il2CppType UnverifiableCodeAttribute_t3585_0_0_0;
static ParameterInfo IList_1_t15079_IList_1_IndexOf_m105836_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnverifiableCodeAttribute_t3585_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m105836_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m105836_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t15079_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t15079_IList_1_IndexOf_m105836_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m105836_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType UnverifiableCodeAttribute_t3585_0_0_0;
static ParameterInfo IList_1_t15079_IList_1_Insert_m105837_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UnverifiableCodeAttribute_t3585_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m105837_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m105837_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t15079_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t15079_IList_1_Insert_m105837_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m105837_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15079_IList_1_RemoveAt_m105838_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m105838_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m105838_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t15079_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t15079_IList_1_RemoveAt_m105838_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m105838_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15079_IList_1_get_Item_m105834_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType UnverifiableCodeAttribute_t3585_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m105834_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m105834_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t15079_il2cpp_TypeInfo/* declaring_type */
	, &UnverifiableCodeAttribute_t3585_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t15079_IList_1_get_Item_m105834_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m105834_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType UnverifiableCodeAttribute_t3585_0_0_0;
static ParameterInfo IList_1_t15079_IList_1_set_Item_m105835_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UnverifiableCodeAttribute_t3585_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m105835_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m105835_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t15079_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t15079_IList_1_set_Item_m105835_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m105835_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t15079_MethodInfos[] =
{
	&IList_1_IndexOf_m105836_MethodInfo,
	&IList_1_Insert_m105837_MethodInfo,
	&IList_1_RemoveAt_m105838_MethodInfo,
	&IList_1_get_Item_m105834_MethodInfo,
	&IList_1_set_Item_m105835_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t15079_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t15078_il2cpp_TypeInfo,
	&IEnumerable_1_t15080_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t15079_0_0_0;
extern Il2CppType IList_1_t15079_1_0_0;
struct IList_1_t15079;
extern Il2CppGenericClass IList_1_t15079_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t15079_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t15079_MethodInfos/* methods */
	, IList_1_t15079_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t15079_il2cpp_TypeInfo/* element_class */
	, IList_1_t15079_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t15079_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t15079_0_0_0/* byval_arg */
	, &IList_1_t15079_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t15079_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13384_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Threading.EventResetMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Threading.EventResetMode>
extern MethodInfo IEnumerator_1_get_Current_m105839_MethodInfo;
static PropertyInfo IEnumerator_1_t13384____Current_PropertyInfo = 
{
	&IEnumerator_1_t13384_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m105839_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13384_PropertyInfos[] =
{
	&IEnumerator_1_t13384____Current_PropertyInfo,
	NULL
};
extern Il2CppType EventResetMode_t3612_0_0_0;
extern void* RuntimeInvoker_EventResetMode_t3612 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m105839_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Threading.EventResetMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m105839_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13384_il2cpp_TypeInfo/* declaring_type */
	, &EventResetMode_t3612_0_0_0/* return_type */
	, RuntimeInvoker_EventResetMode_t3612/* invoker_method */
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
	, &IEnumerator_1_get_Current_m105839_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13384_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m105839_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13384_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13384_0_0_0;
extern Il2CppType IEnumerator_1_t13384_1_0_0;
struct IEnumerator_1_t13384;
extern Il2CppGenericClass IEnumerator_1_t13384_GenericClass;
TypeInfo IEnumerator_1_t13384_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13384_MethodInfos/* methods */
	, IEnumerator_1_t13384_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13384_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13384_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13384_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13384_0_0_0/* byval_arg */
	, &IEnumerator_1_t13384_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13384_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t11089_il2cpp_TypeInfo;

extern TypeInfo EventResetMode_t3612_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m79293_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEventResetMode_t3612_m92936_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Threading.EventResetMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Threading.EventResetMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisEventResetMode_t3612_m92936 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m79288_MethodInfo;
 void InternalEnumerator_1__ctor_m79288 (InternalEnumerator_1_t11089 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79289_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79289 (InternalEnumerator_1_t11089 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79290_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79290 (InternalEnumerator_1_t11089 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m79293(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m79293_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&EventResetMode_t3612_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m79291_MethodInfo;
 void InternalEnumerator_1_Dispose_m79291 (InternalEnumerator_1_t11089 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m79292_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m79292 (InternalEnumerator_1_t11089 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m79293 (InternalEnumerator_1_t11089 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisEventResetMode_t3612_m92936(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisEventResetMode_t3612_m92936_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Threading.EventResetMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t11089____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t11089_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11089, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t11089____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t11089_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11089, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t11089_FieldInfos[] =
{
	&InternalEnumerator_1_t11089____array_0_FieldInfo,
	&InternalEnumerator_1_t11089____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t11089____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11089_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79290_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t11089____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11089_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m79293_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t11089_PropertyInfos[] =
{
	&InternalEnumerator_1_t11089____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t11089____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t11089_InternalEnumerator_1__ctor_m79288_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m79288_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m79288_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m79288/* method */
	, &InternalEnumerator_1_t11089_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t11089_InternalEnumerator_1__ctor_m79288_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m79288_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79289_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79289_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79289/* method */
	, &InternalEnumerator_1_t11089_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79289_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79290_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79290_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79290/* method */
	, &InternalEnumerator_1_t11089_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79290_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m79291_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m79291_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m79291/* method */
	, &InternalEnumerator_1_t11089_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m79291_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m79292_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m79292_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m79292/* method */
	, &InternalEnumerator_1_t11089_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m79292_GenericMethod/* genericMethod */

};
extern Il2CppType EventResetMode_t3612_0_0_0;
extern void* RuntimeInvoker_EventResetMode_t3612 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m79293_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m79293_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m79293/* method */
	, &InternalEnumerator_1_t11089_il2cpp_TypeInfo/* declaring_type */
	, &EventResetMode_t3612_0_0_0/* return_type */
	, RuntimeInvoker_EventResetMode_t3612/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m79293_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t11089_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m79288_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79289_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79290_MethodInfo,
	&InternalEnumerator_1_Dispose_m79291_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79292_MethodInfo,
	&InternalEnumerator_1_get_Current_m79293_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t11089_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79290_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79292_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79289_MethodInfo,
	&InternalEnumerator_1_Dispose_m79291_MethodInfo,
	&InternalEnumerator_1_get_Current_m79293_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t11089_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13384_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t11089_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13384_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t11089_0_0_0;
extern Il2CppType InternalEnumerator_1_t11089_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t11089_GenericClass;
TypeInfo InternalEnumerator_1_t11089_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t11089_MethodInfos/* methods */
	, InternalEnumerator_1_t11089_PropertyInfos/* properties */
	, InternalEnumerator_1_t11089_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t11089_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t11089_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t11089_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t11089_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t11089_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t11089_1_0_0/* this_arg */
	, InternalEnumerator_1_t11089_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t11089_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t11089)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t15081_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>
extern MethodInfo ICollection_1_get_Count_m105840_MethodInfo;
static PropertyInfo ICollection_1_t15081____Count_PropertyInfo = 
{
	&ICollection_1_t15081_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m105840_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m105841_MethodInfo;
static PropertyInfo ICollection_1_t15081____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t15081_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m105841_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t15081_PropertyInfos[] =
{
	&ICollection_1_t15081____Count_PropertyInfo,
	&ICollection_1_t15081____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m105840_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::get_Count()
MethodInfo ICollection_1_get_Count_m105840_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t15081_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m105840_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m105841_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m105841_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t15081_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m105841_GenericMethod/* genericMethod */

};
extern Il2CppType EventResetMode_t3612_0_0_0;
extern Il2CppType EventResetMode_t3612_0_0_0;
static ParameterInfo ICollection_1_t15081_ICollection_1_Add_m105842_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EventResetMode_t3612_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m105842_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::Add(T)
MethodInfo ICollection_1_Add_m105842_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t15081_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t15081_ICollection_1_Add_m105842_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m105842_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m105843_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::Clear()
MethodInfo ICollection_1_Clear_m105843_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t15081_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m105843_GenericMethod/* genericMethod */

};
extern Il2CppType EventResetMode_t3612_0_0_0;
static ParameterInfo ICollection_1_t15081_ICollection_1_Contains_m105844_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EventResetMode_t3612_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m105844_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::Contains(T)
MethodInfo ICollection_1_Contains_m105844_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t15081_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15081_ICollection_1_Contains_m105844_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m105844_GenericMethod/* genericMethod */

};
extern Il2CppType EventResetModeU5BU5D_t11327_0_0_0;
extern Il2CppType EventResetModeU5BU5D_t11327_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t15081_ICollection_1_CopyTo_m105845_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EventResetModeU5BU5D_t11327_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m105845_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m105845_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t15081_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t15081_ICollection_1_CopyTo_m105845_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m105845_GenericMethod/* genericMethod */

};
extern Il2CppType EventResetMode_t3612_0_0_0;
static ParameterInfo ICollection_1_t15081_ICollection_1_Remove_m105846_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EventResetMode_t3612_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m105846_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::Remove(T)
MethodInfo ICollection_1_Remove_m105846_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t15081_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15081_ICollection_1_Remove_m105846_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m105846_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t15081_MethodInfos[] =
{
	&ICollection_1_get_Count_m105840_MethodInfo,
	&ICollection_1_get_IsReadOnly_m105841_MethodInfo,
	&ICollection_1_Add_m105842_MethodInfo,
	&ICollection_1_Clear_m105843_MethodInfo,
	&ICollection_1_Contains_m105844_MethodInfo,
	&ICollection_1_CopyTo_m105845_MethodInfo,
	&ICollection_1_Remove_m105846_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t15083_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t15081_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t15083_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t15081_0_0_0;
extern Il2CppType ICollection_1_t15081_1_0_0;
struct ICollection_1_t15081;
extern Il2CppGenericClass ICollection_1_t15081_GenericClass;
TypeInfo ICollection_1_t15081_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t15081_MethodInfos/* methods */
	, ICollection_1_t15081_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t15081_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t15081_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t15081_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t15081_0_0_0/* byval_arg */
	, &ICollection_1_t15081_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t15081_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Threading.EventResetMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Threading.EventResetMode>
extern Il2CppType IEnumerator_1_t13384_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m105847_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Threading.EventResetMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m105847_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t15083_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13384_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m105847_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t15083_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m105847_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t15083_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t15083_0_0_0;
extern Il2CppType IEnumerable_1_t15083_1_0_0;
struct IEnumerable_1_t15083;
extern Il2CppGenericClass IEnumerable_1_t15083_GenericClass;
TypeInfo IEnumerable_1_t15083_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t15083_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t15083_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t15083_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t15083_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t15083_0_0_0/* byval_arg */
	, &IEnumerable_1_t15083_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t15083_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t15082_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Threading.EventResetMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Threading.EventResetMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Threading.EventResetMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Threading.EventResetMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Threading.EventResetMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Threading.EventResetMode>
extern MethodInfo IList_1_get_Item_m105848_MethodInfo;
extern MethodInfo IList_1_set_Item_m105849_MethodInfo;
static PropertyInfo IList_1_t15082____Item_PropertyInfo = 
{
	&IList_1_t15082_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m105848_MethodInfo/* get */
	, &IList_1_set_Item_m105849_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t15082_PropertyInfos[] =
{
	&IList_1_t15082____Item_PropertyInfo,
	NULL
};
extern Il2CppType EventResetMode_t3612_0_0_0;
static ParameterInfo IList_1_t15082_IList_1_IndexOf_m105850_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EventResetMode_t3612_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m105850_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Threading.EventResetMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m105850_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t15082_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15082_IList_1_IndexOf_m105850_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m105850_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType EventResetMode_t3612_0_0_0;
static ParameterInfo IList_1_t15082_IList_1_Insert_m105851_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &EventResetMode_t3612_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m105851_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Threading.EventResetMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m105851_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t15082_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15082_IList_1_Insert_m105851_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m105851_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15082_IList_1_RemoveAt_m105852_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m105852_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Threading.EventResetMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m105852_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t15082_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t15082_IList_1_RemoveAt_m105852_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m105852_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15082_IList_1_get_Item_m105848_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType EventResetMode_t3612_0_0_0;
extern void* RuntimeInvoker_EventResetMode_t3612_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m105848_GenericMethod;
// T System.Collections.Generic.IList`1<System.Threading.EventResetMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m105848_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t15082_il2cpp_TypeInfo/* declaring_type */
	, &EventResetMode_t3612_0_0_0/* return_type */
	, RuntimeInvoker_EventResetMode_t3612_Int32_t23/* invoker_method */
	, IList_1_t15082_IList_1_get_Item_m105848_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m105848_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType EventResetMode_t3612_0_0_0;
static ParameterInfo IList_1_t15082_IList_1_set_Item_m105849_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &EventResetMode_t3612_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m105849_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Threading.EventResetMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m105849_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t15082_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15082_IList_1_set_Item_m105849_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m105849_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t15082_MethodInfos[] =
{
	&IList_1_IndexOf_m105850_MethodInfo,
	&IList_1_Insert_m105851_MethodInfo,
	&IList_1_RemoveAt_m105852_MethodInfo,
	&IList_1_get_Item_m105848_MethodInfo,
	&IList_1_set_Item_m105849_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t15082_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t15081_il2cpp_TypeInfo,
	&IEnumerable_1_t15083_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t15082_0_0_0;
extern Il2CppType IList_1_t15082_1_0_0;
struct IList_1_t15082;
extern Il2CppGenericClass IList_1_t15082_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t15082_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t15082_MethodInfos/* methods */
	, IList_1_t15082_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t15082_il2cpp_TypeInfo/* element_class */
	, IList_1_t15082_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t15082_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t15082_0_0_0/* byval_arg */
	, &IList_1_t15082_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t15082_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13386_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Threading.ThreadState>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Threading.ThreadState>
extern MethodInfo IEnumerator_1_get_Current_m105853_MethodInfo;
static PropertyInfo IEnumerator_1_t13386____Current_PropertyInfo = 
{
	&IEnumerator_1_t13386_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m105853_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13386_PropertyInfos[] =
{
	&IEnumerator_1_t13386____Current_PropertyInfo,
	NULL
};
extern Il2CppType ThreadState_t3620_0_0_0;
extern void* RuntimeInvoker_ThreadState_t3620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m105853_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Threading.ThreadState>::get_Current()
MethodInfo IEnumerator_1_get_Current_m105853_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13386_il2cpp_TypeInfo/* declaring_type */
	, &ThreadState_t3620_0_0_0/* return_type */
	, RuntimeInvoker_ThreadState_t3620/* invoker_method */
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
	, &IEnumerator_1_get_Current_m105853_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13386_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m105853_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13386_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13386_0_0_0;
extern Il2CppType IEnumerator_1_t13386_1_0_0;
struct IEnumerator_1_t13386;
extern Il2CppGenericClass IEnumerator_1_t13386_GenericClass;
TypeInfo IEnumerator_1_t13386_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13386_MethodInfos/* methods */
	, IEnumerator_1_t13386_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13386_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13386_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13386_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13386_0_0_0/* byval_arg */
	, &IEnumerator_1_t13386_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13386_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t11090_il2cpp_TypeInfo;

extern TypeInfo ThreadState_t3620_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m79299_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisThreadState_t3620_m92947_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Threading.ThreadState>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Threading.ThreadState>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisThreadState_t3620_m92947 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Threading.ThreadState>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m79294_MethodInfo;
 void InternalEnumerator_1__ctor_m79294 (InternalEnumerator_1_t11090 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Threading.ThreadState>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79295_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79295 (InternalEnumerator_1_t11090 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Threading.ThreadState>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79296_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79296 (InternalEnumerator_1_t11090 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m79299(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m79299_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ThreadState_t3620_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Threading.ThreadState>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m79297_MethodInfo;
 void InternalEnumerator_1_Dispose_m79297 (InternalEnumerator_1_t11090 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Threading.ThreadState>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m79298_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m79298 (InternalEnumerator_1_t11090 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Threading.ThreadState>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m79299 (InternalEnumerator_1_t11090 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisThreadState_t3620_m92947(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisThreadState_t3620_m92947_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Threading.ThreadState>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t11090____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t11090_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11090, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t11090____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t11090_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11090, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t11090_FieldInfos[] =
{
	&InternalEnumerator_1_t11090____array_0_FieldInfo,
	&InternalEnumerator_1_t11090____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t11090____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11090_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79296_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t11090____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11090_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m79299_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t11090_PropertyInfos[] =
{
	&InternalEnumerator_1_t11090____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t11090____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t11090_InternalEnumerator_1__ctor_m79294_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m79294_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Threading.ThreadState>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m79294_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m79294/* method */
	, &InternalEnumerator_1_t11090_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t11090_InternalEnumerator_1__ctor_m79294_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m79294_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79295_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Threading.ThreadState>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79295_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79295/* method */
	, &InternalEnumerator_1_t11090_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79295_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79296_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Threading.ThreadState>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79296_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79296/* method */
	, &InternalEnumerator_1_t11090_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79296_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m79297_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Threading.ThreadState>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m79297_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m79297/* method */
	, &InternalEnumerator_1_t11090_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m79297_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m79298_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Threading.ThreadState>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m79298_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m79298/* method */
	, &InternalEnumerator_1_t11090_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m79298_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadState_t3620_0_0_0;
extern void* RuntimeInvoker_ThreadState_t3620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m79299_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Threading.ThreadState>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m79299_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m79299/* method */
	, &InternalEnumerator_1_t11090_il2cpp_TypeInfo/* declaring_type */
	, &ThreadState_t3620_0_0_0/* return_type */
	, RuntimeInvoker_ThreadState_t3620/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m79299_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t11090_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m79294_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79295_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79296_MethodInfo,
	&InternalEnumerator_1_Dispose_m79297_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79298_MethodInfo,
	&InternalEnumerator_1_get_Current_m79299_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t11090_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79296_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79298_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79295_MethodInfo,
	&InternalEnumerator_1_Dispose_m79297_MethodInfo,
	&InternalEnumerator_1_get_Current_m79299_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t11090_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13386_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t11090_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13386_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t11090_0_0_0;
extern Il2CppType InternalEnumerator_1_t11090_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t11090_GenericClass;
TypeInfo InternalEnumerator_1_t11090_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t11090_MethodInfos/* methods */
	, InternalEnumerator_1_t11090_PropertyInfos/* properties */
	, InternalEnumerator_1_t11090_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t11090_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t11090_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t11090_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t11090_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t11090_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t11090_1_0_0/* this_arg */
	, InternalEnumerator_1_t11090_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t11090_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t11090)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t15084_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Threading.ThreadState>
extern MethodInfo ICollection_1_get_Count_m105854_MethodInfo;
static PropertyInfo ICollection_1_t15084____Count_PropertyInfo = 
{
	&ICollection_1_t15084_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m105854_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m105855_MethodInfo;
static PropertyInfo ICollection_1_t15084____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t15084_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m105855_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t15084_PropertyInfos[] =
{
	&ICollection_1_t15084____Count_PropertyInfo,
	&ICollection_1_t15084____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m105854_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::get_Count()
MethodInfo ICollection_1_get_Count_m105854_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t15084_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m105854_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m105855_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m105855_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t15084_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m105855_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadState_t3620_0_0_0;
extern Il2CppType ThreadState_t3620_0_0_0;
static ParameterInfo ICollection_1_t15084_ICollection_1_Add_m105856_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadState_t3620_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m105856_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::Add(T)
MethodInfo ICollection_1_Add_m105856_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t15084_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t15084_ICollection_1_Add_m105856_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m105856_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m105857_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::Clear()
MethodInfo ICollection_1_Clear_m105857_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t15084_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m105857_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadState_t3620_0_0_0;
static ParameterInfo ICollection_1_t15084_ICollection_1_Contains_m105858_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadState_t3620_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m105858_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::Contains(T)
MethodInfo ICollection_1_Contains_m105858_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t15084_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15084_ICollection_1_Contains_m105858_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m105858_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadStateU5BU5D_t11328_0_0_0;
extern Il2CppType ThreadStateU5BU5D_t11328_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t15084_ICollection_1_CopyTo_m105859_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStateU5BU5D_t11328_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m105859_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m105859_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t15084_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t15084_ICollection_1_CopyTo_m105859_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m105859_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadState_t3620_0_0_0;
static ParameterInfo ICollection_1_t15084_ICollection_1_Remove_m105860_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadState_t3620_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m105860_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::Remove(T)
MethodInfo ICollection_1_Remove_m105860_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t15084_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15084_ICollection_1_Remove_m105860_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m105860_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t15084_MethodInfos[] =
{
	&ICollection_1_get_Count_m105854_MethodInfo,
	&ICollection_1_get_IsReadOnly_m105855_MethodInfo,
	&ICollection_1_Add_m105856_MethodInfo,
	&ICollection_1_Clear_m105857_MethodInfo,
	&ICollection_1_Contains_m105858_MethodInfo,
	&ICollection_1_CopyTo_m105859_MethodInfo,
	&ICollection_1_Remove_m105860_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t15086_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t15084_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t15086_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t15084_0_0_0;
extern Il2CppType ICollection_1_t15084_1_0_0;
struct ICollection_1_t15084;
extern Il2CppGenericClass ICollection_1_t15084_GenericClass;
TypeInfo ICollection_1_t15084_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t15084_MethodInfos/* methods */
	, ICollection_1_t15084_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t15084_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t15084_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t15084_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t15084_0_0_0/* byval_arg */
	, &ICollection_1_t15084_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t15084_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Threading.ThreadState>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Threading.ThreadState>
extern Il2CppType IEnumerator_1_t13386_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m105861_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Threading.ThreadState>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m105861_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t15086_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13386_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m105861_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t15086_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m105861_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t15086_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t15086_0_0_0;
extern Il2CppType IEnumerable_1_t15086_1_0_0;
struct IEnumerable_1_t15086;
extern Il2CppGenericClass IEnumerable_1_t15086_GenericClass;
TypeInfo IEnumerable_1_t15086_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t15086_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t15086_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t15086_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t15086_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t15086_0_0_0/* byval_arg */
	, &IEnumerable_1_t15086_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t15086_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t15085_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Threading.ThreadState>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Threading.ThreadState>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Threading.ThreadState>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Threading.ThreadState>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Threading.ThreadState>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Threading.ThreadState>
extern MethodInfo IList_1_get_Item_m105862_MethodInfo;
extern MethodInfo IList_1_set_Item_m105863_MethodInfo;
static PropertyInfo IList_1_t15085____Item_PropertyInfo = 
{
	&IList_1_t15085_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m105862_MethodInfo/* get */
	, &IList_1_set_Item_m105863_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t15085_PropertyInfos[] =
{
	&IList_1_t15085____Item_PropertyInfo,
	NULL
};
extern Il2CppType ThreadState_t3620_0_0_0;
static ParameterInfo IList_1_t15085_IList_1_IndexOf_m105864_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadState_t3620_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m105864_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Threading.ThreadState>::IndexOf(T)
MethodInfo IList_1_IndexOf_m105864_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t15085_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15085_IList_1_IndexOf_m105864_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m105864_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ThreadState_t3620_0_0_0;
static ParameterInfo IList_1_t15085_IList_1_Insert_m105865_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ThreadState_t3620_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m105865_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Threading.ThreadState>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m105865_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t15085_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15085_IList_1_Insert_m105865_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m105865_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15085_IList_1_RemoveAt_m105866_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m105866_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Threading.ThreadState>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m105866_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t15085_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t15085_IList_1_RemoveAt_m105866_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m105866_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15085_IList_1_get_Item_m105862_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType ThreadState_t3620_0_0_0;
extern void* RuntimeInvoker_ThreadState_t3620_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m105862_GenericMethod;
// T System.Collections.Generic.IList`1<System.Threading.ThreadState>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m105862_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t15085_il2cpp_TypeInfo/* declaring_type */
	, &ThreadState_t3620_0_0_0/* return_type */
	, RuntimeInvoker_ThreadState_t3620_Int32_t23/* invoker_method */
	, IList_1_t15085_IList_1_get_Item_m105862_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m105862_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ThreadState_t3620_0_0_0;
static ParameterInfo IList_1_t15085_IList_1_set_Item_m105863_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ThreadState_t3620_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m105863_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Threading.ThreadState>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m105863_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t15085_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15085_IList_1_set_Item_m105863_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m105863_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t15085_MethodInfos[] =
{
	&IList_1_IndexOf_m105864_MethodInfo,
	&IList_1_Insert_m105865_MethodInfo,
	&IList_1_RemoveAt_m105866_MethodInfo,
	&IList_1_get_Item_m105862_MethodInfo,
	&IList_1_set_Item_m105863_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t15085_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t15084_il2cpp_TypeInfo,
	&IEnumerable_1_t15086_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t15085_0_0_0;
extern Il2CppType IList_1_t15085_1_0_0;
struct IList_1_t15085;
extern Il2CppGenericClass IList_1_t15085_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t15085_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t15085_MethodInfos/* methods */
	, IList_1_t15085_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t15085_il2cpp_TypeInfo/* element_class */
	, IList_1_t15085_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t15085_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t15085_0_0_0/* byval_arg */
	, &IList_1_t15085_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t15085_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13388_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.AttributeTargets>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.AttributeTargets>
extern MethodInfo IEnumerator_1_get_Current_m105867_MethodInfo;
static PropertyInfo IEnumerator_1_t13388____Current_PropertyInfo = 
{
	&IEnumerator_1_t13388_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m105867_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13388_PropertyInfos[] =
{
	&IEnumerator_1_t13388____Current_PropertyInfo,
	NULL
};
extern Il2CppType AttributeTargets_t3637_0_0_0;
extern void* RuntimeInvoker_AttributeTargets_t3637 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m105867_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.AttributeTargets>::get_Current()
MethodInfo IEnumerator_1_get_Current_m105867_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13388_il2cpp_TypeInfo/* declaring_type */
	, &AttributeTargets_t3637_0_0_0/* return_type */
	, RuntimeInvoker_AttributeTargets_t3637/* invoker_method */
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
	, &IEnumerator_1_get_Current_m105867_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13388_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m105867_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13388_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13388_0_0_0;
extern Il2CppType IEnumerator_1_t13388_1_0_0;
struct IEnumerator_1_t13388;
extern Il2CppGenericClass IEnumerator_1_t13388_GenericClass;
TypeInfo IEnumerator_1_t13388_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13388_MethodInfos/* methods */
	, IEnumerator_1_t13388_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13388_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13388_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13388_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13388_0_0_0/* byval_arg */
	, &IEnumerator_1_t13388_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13388_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t11091_il2cpp_TypeInfo;

extern TypeInfo AttributeTargets_t3637_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m79305_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAttributeTargets_t3637_m92958_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.AttributeTargets>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.AttributeTargets>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisAttributeTargets_t3637_m92958 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.AttributeTargets>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m79300_MethodInfo;
 void InternalEnumerator_1__ctor_m79300 (InternalEnumerator_1_t11091 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.AttributeTargets>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79301_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79301 (InternalEnumerator_1_t11091 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.AttributeTargets>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79302_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79302 (InternalEnumerator_1_t11091 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m79305(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m79305_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AttributeTargets_t3637_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.AttributeTargets>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m79303_MethodInfo;
 void InternalEnumerator_1_Dispose_m79303 (InternalEnumerator_1_t11091 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.AttributeTargets>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m79304_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m79304 (InternalEnumerator_1_t11091 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.AttributeTargets>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m79305 (InternalEnumerator_1_t11091 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisAttributeTargets_t3637_m92958(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAttributeTargets_t3637_m92958_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.AttributeTargets>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t11091____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t11091_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11091, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t11091____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t11091_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11091, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t11091_FieldInfos[] =
{
	&InternalEnumerator_1_t11091____array_0_FieldInfo,
	&InternalEnumerator_1_t11091____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t11091____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11091_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79302_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t11091____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11091_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m79305_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t11091_PropertyInfos[] =
{
	&InternalEnumerator_1_t11091____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t11091____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t11091_InternalEnumerator_1__ctor_m79300_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m79300_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.AttributeTargets>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m79300_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m79300/* method */
	, &InternalEnumerator_1_t11091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t11091_InternalEnumerator_1__ctor_m79300_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m79300_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79301_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.AttributeTargets>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79301_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79301/* method */
	, &InternalEnumerator_1_t11091_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79301_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79302_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.AttributeTargets>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79302_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79302/* method */
	, &InternalEnumerator_1_t11091_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79302_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m79303_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.AttributeTargets>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m79303_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m79303/* method */
	, &InternalEnumerator_1_t11091_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m79303_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m79304_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.AttributeTargets>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m79304_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m79304/* method */
	, &InternalEnumerator_1_t11091_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m79304_GenericMethod/* genericMethod */

};
extern Il2CppType AttributeTargets_t3637_0_0_0;
extern void* RuntimeInvoker_AttributeTargets_t3637 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m79305_GenericMethod;
// T System.Array/InternalEnumerator`1<System.AttributeTargets>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m79305_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m79305/* method */
	, &InternalEnumerator_1_t11091_il2cpp_TypeInfo/* declaring_type */
	, &AttributeTargets_t3637_0_0_0/* return_type */
	, RuntimeInvoker_AttributeTargets_t3637/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m79305_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t11091_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m79300_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79301_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79302_MethodInfo,
	&InternalEnumerator_1_Dispose_m79303_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79304_MethodInfo,
	&InternalEnumerator_1_get_Current_m79305_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t11091_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79302_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79304_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79301_MethodInfo,
	&InternalEnumerator_1_Dispose_m79303_MethodInfo,
	&InternalEnumerator_1_get_Current_m79305_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t11091_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13388_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t11091_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13388_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t11091_0_0_0;
extern Il2CppType InternalEnumerator_1_t11091_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t11091_GenericClass;
TypeInfo InternalEnumerator_1_t11091_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t11091_MethodInfos/* methods */
	, InternalEnumerator_1_t11091_PropertyInfos/* properties */
	, InternalEnumerator_1_t11091_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t11091_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t11091_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t11091_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t11091_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t11091_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t11091_1_0_0/* this_arg */
	, InternalEnumerator_1_t11091_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t11091_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t11091)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t15087_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.AttributeTargets>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeTargets>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.AttributeTargets>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.AttributeTargets>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeTargets>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.AttributeTargets>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeTargets>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.AttributeTargets>
extern MethodInfo ICollection_1_get_Count_m105868_MethodInfo;
static PropertyInfo ICollection_1_t15087____Count_PropertyInfo = 
{
	&ICollection_1_t15087_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m105868_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m105869_MethodInfo;
static PropertyInfo ICollection_1_t15087____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t15087_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m105869_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t15087_PropertyInfos[] =
{
	&ICollection_1_t15087____Count_PropertyInfo,
	&ICollection_1_t15087____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m105868_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.AttributeTargets>::get_Count()
MethodInfo ICollection_1_get_Count_m105868_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t15087_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m105868_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m105869_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeTargets>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m105869_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t15087_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m105869_GenericMethod/* genericMethod */

};
extern Il2CppType AttributeTargets_t3637_0_0_0;
extern Il2CppType AttributeTargets_t3637_0_0_0;
static ParameterInfo ICollection_1_t15087_ICollection_1_Add_m105870_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeTargets_t3637_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m105870_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.AttributeTargets>::Add(T)
MethodInfo ICollection_1_Add_m105870_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t15087_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t15087_ICollection_1_Add_m105870_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m105870_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m105871_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.AttributeTargets>::Clear()
MethodInfo ICollection_1_Clear_m105871_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t15087_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m105871_GenericMethod/* genericMethod */

};
extern Il2CppType AttributeTargets_t3637_0_0_0;
static ParameterInfo ICollection_1_t15087_ICollection_1_Contains_m105872_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeTargets_t3637_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m105872_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeTargets>::Contains(T)
MethodInfo ICollection_1_Contains_m105872_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t15087_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15087_ICollection_1_Contains_m105872_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m105872_GenericMethod/* genericMethod */

};
extern Il2CppType AttributeTargetsU5BU5D_t11329_0_0_0;
extern Il2CppType AttributeTargetsU5BU5D_t11329_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t15087_ICollection_1_CopyTo_m105873_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AttributeTargetsU5BU5D_t11329_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m105873_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.AttributeTargets>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m105873_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t15087_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t15087_ICollection_1_CopyTo_m105873_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m105873_GenericMethod/* genericMethod */

};
extern Il2CppType AttributeTargets_t3637_0_0_0;
static ParameterInfo ICollection_1_t15087_ICollection_1_Remove_m105874_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeTargets_t3637_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m105874_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeTargets>::Remove(T)
MethodInfo ICollection_1_Remove_m105874_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t15087_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15087_ICollection_1_Remove_m105874_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m105874_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t15087_MethodInfos[] =
{
	&ICollection_1_get_Count_m105868_MethodInfo,
	&ICollection_1_get_IsReadOnly_m105869_MethodInfo,
	&ICollection_1_Add_m105870_MethodInfo,
	&ICollection_1_Clear_m105871_MethodInfo,
	&ICollection_1_Contains_m105872_MethodInfo,
	&ICollection_1_CopyTo_m105873_MethodInfo,
	&ICollection_1_Remove_m105874_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t15089_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t15087_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t15089_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t15087_0_0_0;
extern Il2CppType ICollection_1_t15087_1_0_0;
struct ICollection_1_t15087;
extern Il2CppGenericClass ICollection_1_t15087_GenericClass;
TypeInfo ICollection_1_t15087_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t15087_MethodInfos/* methods */
	, ICollection_1_t15087_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t15087_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t15087_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t15087_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t15087_0_0_0/* byval_arg */
	, &ICollection_1_t15087_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t15087_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.AttributeTargets>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.AttributeTargets>
extern Il2CppType IEnumerator_1_t13388_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m105875_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.AttributeTargets>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m105875_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t15089_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13388_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m105875_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t15089_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m105875_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t15089_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t15089_0_0_0;
extern Il2CppType IEnumerable_1_t15089_1_0_0;
struct IEnumerable_1_t15089;
extern Il2CppGenericClass IEnumerable_1_t15089_GenericClass;
TypeInfo IEnumerable_1_t15089_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t15089_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t15089_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t15089_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t15089_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t15089_0_0_0/* byval_arg */
	, &IEnumerable_1_t15089_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t15089_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t15088_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.AttributeTargets>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.AttributeTargets>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.AttributeTargets>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.AttributeTargets>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.AttributeTargets>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.AttributeTargets>
extern MethodInfo IList_1_get_Item_m105876_MethodInfo;
extern MethodInfo IList_1_set_Item_m105877_MethodInfo;
static PropertyInfo IList_1_t15088____Item_PropertyInfo = 
{
	&IList_1_t15088_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m105876_MethodInfo/* get */
	, &IList_1_set_Item_m105877_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t15088_PropertyInfos[] =
{
	&IList_1_t15088____Item_PropertyInfo,
	NULL
};
extern Il2CppType AttributeTargets_t3637_0_0_0;
static ParameterInfo IList_1_t15088_IList_1_IndexOf_m105878_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeTargets_t3637_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m105878_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.AttributeTargets>::IndexOf(T)
MethodInfo IList_1_IndexOf_m105878_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t15088_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15088_IList_1_IndexOf_m105878_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m105878_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType AttributeTargets_t3637_0_0_0;
static ParameterInfo IList_1_t15088_IList_1_Insert_m105879_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AttributeTargets_t3637_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m105879_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.AttributeTargets>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m105879_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t15088_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15088_IList_1_Insert_m105879_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m105879_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15088_IList_1_RemoveAt_m105880_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m105880_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.AttributeTargets>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m105880_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t15088_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t15088_IList_1_RemoveAt_m105880_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m105880_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15088_IList_1_get_Item_m105876_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType AttributeTargets_t3637_0_0_0;
extern void* RuntimeInvoker_AttributeTargets_t3637_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m105876_GenericMethod;
// T System.Collections.Generic.IList`1<System.AttributeTargets>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m105876_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t15088_il2cpp_TypeInfo/* declaring_type */
	, &AttributeTargets_t3637_0_0_0/* return_type */
	, RuntimeInvoker_AttributeTargets_t3637_Int32_t23/* invoker_method */
	, IList_1_t15088_IList_1_get_Item_m105876_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m105876_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType AttributeTargets_t3637_0_0_0;
static ParameterInfo IList_1_t15088_IList_1_set_Item_m105877_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AttributeTargets_t3637_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m105877_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.AttributeTargets>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m105877_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t15088_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15088_IList_1_set_Item_m105877_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m105877_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t15088_MethodInfos[] =
{
	&IList_1_IndexOf_m105878_MethodInfo,
	&IList_1_Insert_m105879_MethodInfo,
	&IList_1_RemoveAt_m105880_MethodInfo,
	&IList_1_get_Item_m105876_MethodInfo,
	&IList_1_set_Item_m105877_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t15088_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t15087_il2cpp_TypeInfo,
	&IEnumerable_1_t15089_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t15088_0_0_0;
extern Il2CppType IList_1_t15088_1_0_0;
struct IList_1_t15088;
extern Il2CppGenericClass IList_1_t15088_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t15088_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t15088_MethodInfos/* methods */
	, IList_1_t15088_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t15088_il2cpp_TypeInfo/* element_class */
	, IList_1_t15088_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t15088_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t15088_0_0_0/* byval_arg */
	, &IList_1_t15088_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t15088_GenericClass/* generic_class */
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
extern TypeInfo GenericComparer_1_t4110_il2cpp_TypeInfo;

extern TypeInfo DateTime_t459_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t4114_il2cpp_TypeInfo;
extern TypeInfo Int32_t23_il2cpp_TypeInfo;
extern MethodInfo Comparer_1__ctor_m36203_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m84365_MethodInfo;


// System.Void System.Collections.Generic.GenericComparer`1<System.DateTime>::.ctor()
extern MethodInfo GenericComparer_1__ctor_m13496_MethodInfo;
 void GenericComparer_1__ctor_m13496 (GenericComparer_1_t4110 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m36203(__this, /*hidden argument*/&Comparer_1__ctor_m36203_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTime>::Compare(T,T)
extern MethodInfo GenericComparer_1_Compare_m79306_MethodInfo;
 int32_t GenericComparer_1_Compare_m79306 (GenericComparer_1_t4110 * __this, DateTime_t459  ___x, DateTime_t459  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		DateTime_t459  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTime_t459_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		DateTime_t459  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTime_t459_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		DateTime_t459  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&DateTime_t459_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTime_t459_il2cpp_TypeInfo), &(*(&___x))));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTime_t459  >::Invoke(&IComparable_1_CompareTo_m84365_MethodInfo, Box(InitializedTypeInfo(&DateTime_t459_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.DateTime>
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1__ctor_m13496_GenericMethod;
// System.Void System.Collections.Generic.GenericComparer`1<System.DateTime>::.ctor()
MethodInfo GenericComparer_1__ctor_m13496_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericComparer_1__ctor_m13496/* method */
	, &GenericComparer_1_t4110_il2cpp_TypeInfo/* declaring_type */
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
	, &GenericComparer_1__ctor_m13496_GenericMethod/* genericMethod */

};
extern Il2CppType DateTime_t459_0_0_0;
extern Il2CppType DateTime_t459_0_0_0;
extern Il2CppType DateTime_t459_0_0_0;
static ParameterInfo GenericComparer_1_t4110_GenericComparer_1_Compare_m79306_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t459_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTime_t459_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_DateTime_t459_DateTime_t459 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1_Compare_m79306_GenericMethod;
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTime>::Compare(T,T)
MethodInfo GenericComparer_1_Compare_m79306_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&GenericComparer_1_Compare_m79306/* method */
	, &GenericComparer_1_t4110_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_DateTime_t459_DateTime_t459/* invoker_method */
	, GenericComparer_1_t4110_GenericComparer_1_Compare_m79306_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericComparer_1_Compare_m79306_GenericMethod/* genericMethod */

};
static MethodInfo* GenericComparer_1_t4110_MethodInfos[] =
{
	&GenericComparer_1__ctor_m13496_MethodInfo,
	&GenericComparer_1_Compare_m79306_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m1356_MethodInfo;
extern MethodInfo Object_GetHashCode_m1357_MethodInfo;
extern MethodInfo Object_ToString_m1367_MethodInfo;
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m36205_MethodInfo;
static MethodInfo* GenericComparer_1_t4110_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&GenericComparer_1_Compare_m79306_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m36205_MethodInfo,
	&GenericComparer_1_Compare_m79306_MethodInfo,
};
extern TypeInfo IComparer_1_t12173_il2cpp_TypeInfo;
extern TypeInfo IComparer_t2759_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericComparer_1_t4110_InterfacesOffsets[] = 
{
	{ &IComparer_1_t12173_il2cpp_TypeInfo, 4},
	{ &IComparer_t2759_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericComparer_1_t4110_0_0_0;
extern Il2CppType GenericComparer_1_t4110_1_0_0;
extern TypeInfo Comparer_1_t6716_il2cpp_TypeInfo;
struct GenericComparer_1_t4110;
extern Il2CppGenericClass GenericComparer_1_t4110_GenericClass;
TypeInfo GenericComparer_1_t4110_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericComparer_1_t4110_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t6716_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericComparer_1_t4110_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericComparer_1_t4110_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericComparer_1_t4110_il2cpp_TypeInfo/* cast_class */
	, &GenericComparer_1_t4110_0_0_0/* byval_arg */
	, &GenericComparer_1_t4110_1_0_0/* this_arg */
	, GenericComparer_1_t4110_InterfacesOffsets/* interface_offsets */
	, &GenericComparer_1_t4110_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericComparer_1_t4110)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13390_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.DateTime/Which>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DateTime/Which>
extern MethodInfo IEnumerator_1_get_Current_m105881_MethodInfo;
static PropertyInfo IEnumerator_1_t13390____Current_PropertyInfo = 
{
	&IEnumerator_1_t13390_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m105881_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13390_PropertyInfos[] =
{
	&IEnumerator_1_t13390____Current_PropertyInfo,
	NULL
};
extern Il2CppType Which_t3642_0_0_0;
extern void* RuntimeInvoker_Which_t3642 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m105881_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.DateTime/Which>::get_Current()
MethodInfo IEnumerator_1_get_Current_m105881_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13390_il2cpp_TypeInfo/* declaring_type */
	, &Which_t3642_0_0_0/* return_type */
	, RuntimeInvoker_Which_t3642/* invoker_method */
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
	, &IEnumerator_1_get_Current_m105881_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13390_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m105881_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13390_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13390_0_0_0;
extern Il2CppType IEnumerator_1_t13390_1_0_0;
struct IEnumerator_1_t13390;
extern Il2CppGenericClass IEnumerator_1_t13390_GenericClass;
TypeInfo IEnumerator_1_t13390_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13390_MethodInfos/* methods */
	, IEnumerator_1_t13390_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13390_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13390_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13390_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13390_0_0_0/* byval_arg */
	, &IEnumerator_1_t13390_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13390_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t11092_il2cpp_TypeInfo;

extern TypeInfo Which_t3642_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m79312_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWhich_t3642_m92969_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.DateTime/Which>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.DateTime/Which>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisWhich_t3642_m92969 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.DateTime/Which>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m79307_MethodInfo;
 void InternalEnumerator_1__ctor_m79307 (InternalEnumerator_1_t11092 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DateTime/Which>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79308_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79308 (InternalEnumerator_1_t11092 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.DateTime/Which>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79309_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79309 (InternalEnumerator_1_t11092 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m79312(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m79312_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Which_t3642_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DateTime/Which>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m79310_MethodInfo;
 void InternalEnumerator_1_Dispose_m79310 (InternalEnumerator_1_t11092 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime/Which>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m79311_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m79311 (InternalEnumerator_1_t11092 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.DateTime/Which>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m79312 (InternalEnumerator_1_t11092 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisWhich_t3642_m92969(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisWhich_t3642_m92969_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTime/Which>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t11092____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t11092_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11092, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t11092____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t11092_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11092, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t11092_FieldInfos[] =
{
	&InternalEnumerator_1_t11092____array_0_FieldInfo,
	&InternalEnumerator_1_t11092____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t11092____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11092_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79309_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t11092____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11092_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m79312_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t11092_PropertyInfos[] =
{
	&InternalEnumerator_1_t11092____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t11092____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t11092_InternalEnumerator_1__ctor_m79307_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m79307_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DateTime/Which>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m79307_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m79307/* method */
	, &InternalEnumerator_1_t11092_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t11092_InternalEnumerator_1__ctor_m79307_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m79307_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79308_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DateTime/Which>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79308_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79308/* method */
	, &InternalEnumerator_1_t11092_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79308_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79309_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.DateTime/Which>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79309_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79309/* method */
	, &InternalEnumerator_1_t11092_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79309_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m79310_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DateTime/Which>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m79310_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m79310/* method */
	, &InternalEnumerator_1_t11092_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m79310_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m79311_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime/Which>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m79311_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m79311/* method */
	, &InternalEnumerator_1_t11092_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m79311_GenericMethod/* genericMethod */

};
extern Il2CppType Which_t3642_0_0_0;
extern void* RuntimeInvoker_Which_t3642 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m79312_GenericMethod;
// T System.Array/InternalEnumerator`1<System.DateTime/Which>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m79312_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m79312/* method */
	, &InternalEnumerator_1_t11092_il2cpp_TypeInfo/* declaring_type */
	, &Which_t3642_0_0_0/* return_type */
	, RuntimeInvoker_Which_t3642/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m79312_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t11092_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m79307_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79308_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79309_MethodInfo,
	&InternalEnumerator_1_Dispose_m79310_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79311_MethodInfo,
	&InternalEnumerator_1_get_Current_m79312_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t11092_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79309_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79311_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79308_MethodInfo,
	&InternalEnumerator_1_Dispose_m79310_MethodInfo,
	&InternalEnumerator_1_get_Current_m79312_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t11092_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13390_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t11092_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13390_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t11092_0_0_0;
extern Il2CppType InternalEnumerator_1_t11092_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t11092_GenericClass;
TypeInfo InternalEnumerator_1_t11092_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t11092_MethodInfos/* methods */
	, InternalEnumerator_1_t11092_PropertyInfos/* properties */
	, InternalEnumerator_1_t11092_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t11092_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t11092_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t11092_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t11092_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t11092_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t11092_1_0_0/* this_arg */
	, InternalEnumerator_1_t11092_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t11092_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t11092)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t15090_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.DateTime/Which>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTime/Which>
extern MethodInfo ICollection_1_get_Count_m105882_MethodInfo;
static PropertyInfo ICollection_1_t15090____Count_PropertyInfo = 
{
	&ICollection_1_t15090_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m105882_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m105883_MethodInfo;
static PropertyInfo ICollection_1_t15090____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t15090_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m105883_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t15090_PropertyInfos[] =
{
	&ICollection_1_t15090____Count_PropertyInfo,
	&ICollection_1_t15090____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m105882_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.DateTime/Which>::get_Count()
MethodInfo ICollection_1_get_Count_m105882_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t15090_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m105882_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m105883_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m105883_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t15090_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m105883_GenericMethod/* genericMethod */

};
extern Il2CppType Which_t3642_0_0_0;
extern Il2CppType Which_t3642_0_0_0;
static ParameterInfo ICollection_1_t15090_ICollection_1_Add_m105884_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Which_t3642_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m105884_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::Add(T)
MethodInfo ICollection_1_Add_m105884_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t15090_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t15090_ICollection_1_Add_m105884_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m105884_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m105885_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::Clear()
MethodInfo ICollection_1_Clear_m105885_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t15090_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m105885_GenericMethod/* genericMethod */

};
extern Il2CppType Which_t3642_0_0_0;
static ParameterInfo ICollection_1_t15090_ICollection_1_Contains_m105886_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Which_t3642_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m105886_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::Contains(T)
MethodInfo ICollection_1_Contains_m105886_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t15090_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15090_ICollection_1_Contains_m105886_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m105886_GenericMethod/* genericMethod */

};
extern Il2CppType WhichU5BU5D_t11330_0_0_0;
extern Il2CppType WhichU5BU5D_t11330_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t15090_ICollection_1_CopyTo_m105887_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &WhichU5BU5D_t11330_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m105887_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m105887_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t15090_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t15090_ICollection_1_CopyTo_m105887_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m105887_GenericMethod/* genericMethod */

};
extern Il2CppType Which_t3642_0_0_0;
static ParameterInfo ICollection_1_t15090_ICollection_1_Remove_m105888_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Which_t3642_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m105888_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::Remove(T)
MethodInfo ICollection_1_Remove_m105888_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t15090_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15090_ICollection_1_Remove_m105888_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m105888_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t15090_MethodInfos[] =
{
	&ICollection_1_get_Count_m105882_MethodInfo,
	&ICollection_1_get_IsReadOnly_m105883_MethodInfo,
	&ICollection_1_Add_m105884_MethodInfo,
	&ICollection_1_Clear_m105885_MethodInfo,
	&ICollection_1_Contains_m105886_MethodInfo,
	&ICollection_1_CopyTo_m105887_MethodInfo,
	&ICollection_1_Remove_m105888_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t15092_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t15090_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t15092_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t15090_0_0_0;
extern Il2CppType ICollection_1_t15090_1_0_0;
struct ICollection_1_t15090;
extern Il2CppGenericClass ICollection_1_t15090_GenericClass;
TypeInfo ICollection_1_t15090_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t15090_MethodInfos/* methods */
	, ICollection_1_t15090_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t15090_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t15090_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t15090_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t15090_0_0_0/* byval_arg */
	, &ICollection_1_t15090_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t15090_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTime/Which>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTime/Which>
extern Il2CppType IEnumerator_1_t13390_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m105889_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTime/Which>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m105889_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t15092_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13390_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m105889_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t15092_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m105889_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t15092_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t15092_0_0_0;
extern Il2CppType IEnumerable_1_t15092_1_0_0;
struct IEnumerable_1_t15092;
extern Il2CppGenericClass IEnumerable_1_t15092_GenericClass;
TypeInfo IEnumerable_1_t15092_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t15092_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t15092_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t15092_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t15092_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t15092_0_0_0/* byval_arg */
	, &IEnumerable_1_t15092_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t15092_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t15091_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.DateTime/Which>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.DateTime/Which>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.DateTime/Which>
extern MethodInfo IList_1_get_Item_m105890_MethodInfo;
extern MethodInfo IList_1_set_Item_m105891_MethodInfo;
static PropertyInfo IList_1_t15091____Item_PropertyInfo = 
{
	&IList_1_t15091_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m105890_MethodInfo/* get */
	, &IList_1_set_Item_m105891_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t15091_PropertyInfos[] =
{
	&IList_1_t15091____Item_PropertyInfo,
	NULL
};
extern Il2CppType Which_t3642_0_0_0;
static ParameterInfo IList_1_t15091_IList_1_IndexOf_m105892_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Which_t3642_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m105892_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.DateTime/Which>::IndexOf(T)
MethodInfo IList_1_IndexOf_m105892_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t15091_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15091_IList_1_IndexOf_m105892_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m105892_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Which_t3642_0_0_0;
static ParameterInfo IList_1_t15091_IList_1_Insert_m105893_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Which_t3642_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m105893_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m105893_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t15091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15091_IList_1_Insert_m105893_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m105893_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15091_IList_1_RemoveAt_m105894_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m105894_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m105894_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t15091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t15091_IList_1_RemoveAt_m105894_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m105894_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15091_IList_1_get_Item_m105890_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Which_t3642_0_0_0;
extern void* RuntimeInvoker_Which_t3642_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m105890_GenericMethod;
// T System.Collections.Generic.IList`1<System.DateTime/Which>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m105890_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t15091_il2cpp_TypeInfo/* declaring_type */
	, &Which_t3642_0_0_0/* return_type */
	, RuntimeInvoker_Which_t3642_Int32_t23/* invoker_method */
	, IList_1_t15091_IList_1_get_Item_m105890_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m105890_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Which_t3642_0_0_0;
static ParameterInfo IList_1_t15091_IList_1_set_Item_m105891_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Which_t3642_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m105891_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m105891_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t15091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15091_IList_1_set_Item_m105891_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m105891_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t15091_MethodInfos[] =
{
	&IList_1_IndexOf_m105892_MethodInfo,
	&IList_1_Insert_m105893_MethodInfo,
	&IList_1_RemoveAt_m105894_MethodInfo,
	&IList_1_get_Item_m105890_MethodInfo,
	&IList_1_set_Item_m105891_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t15091_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t15090_il2cpp_TypeInfo,
	&IEnumerable_1_t15092_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t15091_0_0_0;
extern Il2CppType IList_1_t15091_1_0_0;
struct IList_1_t15091;
extern Il2CppGenericClass IList_1_t15091_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t15091_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t15091_MethodInfos/* methods */
	, IList_1_t15091_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t15091_il2cpp_TypeInfo/* element_class */
	, IList_1_t15091_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t15091_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t15091_0_0_0/* byval_arg */
	, &IList_1_t15091_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t15091_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13392_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.DateTimeKind>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DateTimeKind>
extern MethodInfo IEnumerator_1_get_Current_m105895_MethodInfo;
static PropertyInfo IEnumerator_1_t13392____Current_PropertyInfo = 
{
	&IEnumerator_1_t13392_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m105895_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13392_PropertyInfos[] =
{
	&IEnumerator_1_t13392____Current_PropertyInfo,
	NULL
};
extern Il2CppType DateTimeKind_t3644_0_0_0;
extern void* RuntimeInvoker_DateTimeKind_t3644 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m105895_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.DateTimeKind>::get_Current()
MethodInfo IEnumerator_1_get_Current_m105895_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13392_il2cpp_TypeInfo/* declaring_type */
	, &DateTimeKind_t3644_0_0_0/* return_type */
	, RuntimeInvoker_DateTimeKind_t3644/* invoker_method */
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
	, &IEnumerator_1_get_Current_m105895_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13392_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m105895_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13392_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13392_0_0_0;
extern Il2CppType IEnumerator_1_t13392_1_0_0;
struct IEnumerator_1_t13392;
extern Il2CppGenericClass IEnumerator_1_t13392_GenericClass;
TypeInfo IEnumerator_1_t13392_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13392_MethodInfos/* methods */
	, IEnumerator_1_t13392_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13392_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13392_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13392_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13392_0_0_0/* byval_arg */
	, &IEnumerator_1_t13392_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13392_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t11093_il2cpp_TypeInfo;

extern TypeInfo DateTimeKind_t3644_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m79318_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDateTimeKind_t3644_m92980_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.DateTimeKind>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.DateTimeKind>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDateTimeKind_t3644_m92980 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.DateTimeKind>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m79313_MethodInfo;
 void InternalEnumerator_1__ctor_m79313 (InternalEnumerator_1_t11093 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DateTimeKind>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79314_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79314 (InternalEnumerator_1_t11093 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.DateTimeKind>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79315_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79315 (InternalEnumerator_1_t11093 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m79318(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m79318_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DateTimeKind_t3644_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DateTimeKind>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m79316_MethodInfo;
 void InternalEnumerator_1_Dispose_m79316 (InternalEnumerator_1_t11093 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.DateTimeKind>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m79317_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m79317 (InternalEnumerator_1_t11093 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.DateTimeKind>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m79318 (InternalEnumerator_1_t11093 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDateTimeKind_t3644_m92980(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDateTimeKind_t3644_m92980_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTimeKind>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t11093____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t11093_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11093, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t11093____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t11093_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11093, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t11093_FieldInfos[] =
{
	&InternalEnumerator_1_t11093____array_0_FieldInfo,
	&InternalEnumerator_1_t11093____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t11093____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11093_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79315_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t11093____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11093_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m79318_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t11093_PropertyInfos[] =
{
	&InternalEnumerator_1_t11093____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t11093____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t11093_InternalEnumerator_1__ctor_m79313_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m79313_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DateTimeKind>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m79313_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m79313/* method */
	, &InternalEnumerator_1_t11093_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t11093_InternalEnumerator_1__ctor_m79313_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m79313_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79314_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DateTimeKind>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79314_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79314/* method */
	, &InternalEnumerator_1_t11093_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79314_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79315_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.DateTimeKind>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79315_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79315/* method */
	, &InternalEnumerator_1_t11093_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79315_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m79316_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DateTimeKind>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m79316_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m79316/* method */
	, &InternalEnumerator_1_t11093_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m79316_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m79317_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.DateTimeKind>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m79317_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m79317/* method */
	, &InternalEnumerator_1_t11093_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m79317_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeKind_t3644_0_0_0;
extern void* RuntimeInvoker_DateTimeKind_t3644 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m79318_GenericMethod;
// T System.Array/InternalEnumerator`1<System.DateTimeKind>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m79318_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m79318/* method */
	, &InternalEnumerator_1_t11093_il2cpp_TypeInfo/* declaring_type */
	, &DateTimeKind_t3644_0_0_0/* return_type */
	, RuntimeInvoker_DateTimeKind_t3644/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m79318_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t11093_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m79313_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79314_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79315_MethodInfo,
	&InternalEnumerator_1_Dispose_m79316_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79317_MethodInfo,
	&InternalEnumerator_1_get_Current_m79318_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t11093_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79315_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79317_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79314_MethodInfo,
	&InternalEnumerator_1_Dispose_m79316_MethodInfo,
	&InternalEnumerator_1_get_Current_m79318_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t11093_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13392_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t11093_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13392_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t11093_0_0_0;
extern Il2CppType InternalEnumerator_1_t11093_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t11093_GenericClass;
TypeInfo InternalEnumerator_1_t11093_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t11093_MethodInfos/* methods */
	, InternalEnumerator_1_t11093_PropertyInfos/* properties */
	, InternalEnumerator_1_t11093_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t11093_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t11093_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t11093_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t11093_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t11093_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t11093_1_0_0/* this_arg */
	, InternalEnumerator_1_t11093_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t11093_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t11093)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t15093_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.DateTimeKind>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTimeKind>
extern MethodInfo ICollection_1_get_Count_m105896_MethodInfo;
static PropertyInfo ICollection_1_t15093____Count_PropertyInfo = 
{
	&ICollection_1_t15093_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m105896_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m105897_MethodInfo;
static PropertyInfo ICollection_1_t15093____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t15093_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m105897_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t15093_PropertyInfos[] =
{
	&ICollection_1_t15093____Count_PropertyInfo,
	&ICollection_1_t15093____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m105896_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.DateTimeKind>::get_Count()
MethodInfo ICollection_1_get_Count_m105896_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t15093_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m105896_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m105897_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m105897_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t15093_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m105897_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeKind_t3644_0_0_0;
extern Il2CppType DateTimeKind_t3644_0_0_0;
static ParameterInfo ICollection_1_t15093_ICollection_1_Add_m105898_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t3644_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m105898_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::Add(T)
MethodInfo ICollection_1_Add_m105898_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t15093_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t15093_ICollection_1_Add_m105898_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m105898_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m105899_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::Clear()
MethodInfo ICollection_1_Clear_m105899_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t15093_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m105899_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeKind_t3644_0_0_0;
static ParameterInfo ICollection_1_t15093_ICollection_1_Contains_m105900_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t3644_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m105900_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::Contains(T)
MethodInfo ICollection_1_Contains_m105900_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t15093_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15093_ICollection_1_Contains_m105900_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m105900_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeKindU5BU5D_t11331_0_0_0;
extern Il2CppType DateTimeKindU5BU5D_t11331_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t15093_ICollection_1_CopyTo_m105901_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeKindU5BU5D_t11331_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m105901_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m105901_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t15093_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t15093_ICollection_1_CopyTo_m105901_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m105901_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeKind_t3644_0_0_0;
static ParameterInfo ICollection_1_t15093_ICollection_1_Remove_m105902_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t3644_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m105902_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::Remove(T)
MethodInfo ICollection_1_Remove_m105902_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t15093_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15093_ICollection_1_Remove_m105902_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m105902_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t15093_MethodInfos[] =
{
	&ICollection_1_get_Count_m105896_MethodInfo,
	&ICollection_1_get_IsReadOnly_m105897_MethodInfo,
	&ICollection_1_Add_m105898_MethodInfo,
	&ICollection_1_Clear_m105899_MethodInfo,
	&ICollection_1_Contains_m105900_MethodInfo,
	&ICollection_1_CopyTo_m105901_MethodInfo,
	&ICollection_1_Remove_m105902_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t15095_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t15093_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t15095_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t15093_0_0_0;
extern Il2CppType ICollection_1_t15093_1_0_0;
struct ICollection_1_t15093;
extern Il2CppGenericClass ICollection_1_t15093_GenericClass;
TypeInfo ICollection_1_t15093_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t15093_MethodInfos/* methods */
	, ICollection_1_t15093_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t15093_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t15093_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t15093_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t15093_0_0_0/* byval_arg */
	, &ICollection_1_t15093_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t15093_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTimeKind>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTimeKind>
extern Il2CppType IEnumerator_1_t13392_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m105903_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTimeKind>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m105903_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t15095_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13392_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m105903_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t15095_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m105903_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t15095_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t15095_0_0_0;
extern Il2CppType IEnumerable_1_t15095_1_0_0;
struct IEnumerable_1_t15095;
extern Il2CppGenericClass IEnumerable_1_t15095_GenericClass;
TypeInfo IEnumerable_1_t15095_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t15095_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t15095_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t15095_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t15095_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t15095_0_0_0/* byval_arg */
	, &IEnumerable_1_t15095_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t15095_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t15094_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.DateTimeKind>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.DateTimeKind>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.DateTimeKind>
extern MethodInfo IList_1_get_Item_m105904_MethodInfo;
extern MethodInfo IList_1_set_Item_m105905_MethodInfo;
static PropertyInfo IList_1_t15094____Item_PropertyInfo = 
{
	&IList_1_t15094_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m105904_MethodInfo/* get */
	, &IList_1_set_Item_m105905_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t15094_PropertyInfos[] =
{
	&IList_1_t15094____Item_PropertyInfo,
	NULL
};
extern Il2CppType DateTimeKind_t3644_0_0_0;
static ParameterInfo IList_1_t15094_IList_1_IndexOf_m105906_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t3644_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m105906_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.DateTimeKind>::IndexOf(T)
MethodInfo IList_1_IndexOf_m105906_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t15094_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15094_IList_1_IndexOf_m105906_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m105906_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DateTimeKind_t3644_0_0_0;
static ParameterInfo IList_1_t15094_IList_1_Insert_m105907_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t3644_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m105907_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m105907_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t15094_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15094_IList_1_Insert_m105907_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m105907_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15094_IList_1_RemoveAt_m105908_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m105908_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m105908_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t15094_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t15094_IList_1_RemoveAt_m105908_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m105908_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15094_IList_1_get_Item_m105904_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType DateTimeKind_t3644_0_0_0;
extern void* RuntimeInvoker_DateTimeKind_t3644_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m105904_GenericMethod;
// T System.Collections.Generic.IList`1<System.DateTimeKind>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m105904_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t15094_il2cpp_TypeInfo/* declaring_type */
	, &DateTimeKind_t3644_0_0_0/* return_type */
	, RuntimeInvoker_DateTimeKind_t3644_Int32_t23/* invoker_method */
	, IList_1_t15094_IList_1_get_Item_m105904_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m105904_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DateTimeKind_t3644_0_0_0;
static ParameterInfo IList_1_t15094_IList_1_set_Item_m105905_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t3644_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m105905_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m105905_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t15094_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15094_IList_1_set_Item_m105905_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m105905_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t15094_MethodInfos[] =
{
	&IList_1_IndexOf_m105906_MethodInfo,
	&IList_1_Insert_m105907_MethodInfo,
	&IList_1_RemoveAt_m105908_MethodInfo,
	&IList_1_get_Item_m105904_MethodInfo,
	&IList_1_set_Item_m105905_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t15094_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t15093_il2cpp_TypeInfo,
	&IEnumerable_1_t15095_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t15094_0_0_0;
extern Il2CppType IList_1_t15094_1_0_0;
struct IList_1_t15094;
extern Il2CppGenericClass IList_1_t15094_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t15094_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t15094_MethodInfos/* methods */
	, IList_1_t15094_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t15094_il2cpp_TypeInfo/* element_class */
	, IList_1_t15094_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t15094_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t15094_0_0_0/* byval_arg */
	, &IList_1_t15094_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t15094_GenericClass/* generic_class */
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
extern TypeInfo IComparable_1_t4118_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.DateTimeOffset>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.DateTimeOffset>
extern Il2CppType DateTimeOffset_t3643_0_0_0;
extern Il2CppType DateTimeOffset_t3643_0_0_0;
static ParameterInfo IComparable_1_t4118_IComparable_1_CompareTo_m105909_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_DateTimeOffset_t3643 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m105909_GenericMethod;
// System.Int32 System.IComparable`1<System.DateTimeOffset>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m105909_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t4118_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_DateTimeOffset_t3643/* invoker_method */
	, IComparable_1_t4118_IComparable_1_CompareTo_m105909_ParameterInfos/* parameters */
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
	, &IComparable_1_CompareTo_m105909_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t4118_MethodInfos[] =
{
	&IComparable_1_CompareTo_m105909_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t4118_0_0_0;
extern Il2CppType IComparable_1_t4118_1_0_0;
struct IComparable_1_t4118;
extern Il2CppGenericClass IComparable_1_t4118_GenericClass;
TypeInfo IComparable_1_t4118_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t4118_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t4118_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t4118_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t4118_0_0_0/* byval_arg */
	, &IComparable_1_t4118_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t4118_GenericClass/* generic_class */
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
extern TypeInfo IEquatable_1_t4119_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.DateTimeOffset>::Equals(T)
// Metadata Definition System.IEquatable`1<System.DateTimeOffset>
extern Il2CppType DateTimeOffset_t3643_0_0_0;
static ParameterInfo IEquatable_1_t4119_IEquatable_1_Equals_m105910_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_DateTimeOffset_t3643 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m105910_GenericMethod;
// System.Boolean System.IEquatable`1<System.DateTimeOffset>::Equals(T)
MethodInfo IEquatable_1_Equals_m105910_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t4119_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_DateTimeOffset_t3643/* invoker_method */
	, IEquatable_1_t4119_IEquatable_1_Equals_m105910_ParameterInfos/* parameters */
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
	, &IEquatable_1_Equals_m105910_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t4119_MethodInfos[] =
{
	&IEquatable_1_Equals_m105910_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t4119_0_0_0;
extern Il2CppType IEquatable_1_t4119_1_0_0;
struct IEquatable_1_t4119;
extern Il2CppGenericClass IEquatable_1_t4119_GenericClass;
TypeInfo IEquatable_1_t4119_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t4119_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t4119_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t4119_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t4119_0_0_0/* byval_arg */
	, &IEquatable_1_t4119_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t4119_GenericClass/* generic_class */
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
extern TypeInfo GenericComparer_1_t4116_il2cpp_TypeInfo;

extern TypeInfo DateTimeOffset_t3643_il2cpp_TypeInfo;
extern MethodInfo Comparer_1__ctor_m79320_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m105909_MethodInfo;


// System.Void System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::.ctor()
extern MethodInfo GenericComparer_1__ctor_m13499_MethodInfo;
 void GenericComparer_1__ctor_m13499 (GenericComparer_1_t4116 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m79320(__this, /*hidden argument*/&Comparer_1__ctor_m79320_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::Compare(T,T)
extern MethodInfo GenericComparer_1_Compare_m79319_MethodInfo;
 int32_t GenericComparer_1_Compare_m79319 (GenericComparer_1_t4116 * __this, DateTimeOffset_t3643  ___x, DateTimeOffset_t3643  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		DateTimeOffset_t3643  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		DateTimeOffset_t3643  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		DateTimeOffset_t3643  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &(*(&___x))));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTimeOffset_t3643  >::Invoke(&IComparable_1_CompareTo_m105909_MethodInfo, Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1__ctor_m13499_GenericMethod;
// System.Void System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::.ctor()
MethodInfo GenericComparer_1__ctor_m13499_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericComparer_1__ctor_m13499/* method */
	, &GenericComparer_1_t4116_il2cpp_TypeInfo/* declaring_type */
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
	, &GenericComparer_1__ctor_m13499_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t3643_0_0_0;
extern Il2CppType DateTimeOffset_t3643_0_0_0;
static ParameterInfo GenericComparer_1_t4116_GenericComparer_1_Compare_m79319_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_DateTimeOffset_t3643_DateTimeOffset_t3643 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1_Compare_m79319_GenericMethod;
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::Compare(T,T)
MethodInfo GenericComparer_1_Compare_m79319_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&GenericComparer_1_Compare_m79319/* method */
	, &GenericComparer_1_t4116_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_DateTimeOffset_t3643_DateTimeOffset_t3643/* invoker_method */
	, GenericComparer_1_t4116_GenericComparer_1_Compare_m79319_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericComparer_1_Compare_m79319_GenericMethod/* genericMethod */

};
static MethodInfo* GenericComparer_1_t4116_MethodInfos[] =
{
	&GenericComparer_1__ctor_m13499_MethodInfo,
	&GenericComparer_1_Compare_m79319_MethodInfo,
	NULL
};
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m79322_MethodInfo;
static MethodInfo* GenericComparer_1_t4116_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&GenericComparer_1_Compare_m79319_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m79322_MethodInfo,
	&GenericComparer_1_Compare_m79319_MethodInfo,
};
extern TypeInfo IComparer_1_t15967_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericComparer_1_t4116_InterfacesOffsets[] = 
{
	{ &IComparer_1_t15967_il2cpp_TypeInfo, 4},
	{ &IComparer_t2759_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericComparer_1_t4116_0_0_0;
extern Il2CppType GenericComparer_1_t4116_1_0_0;
extern TypeInfo Comparer_1_t11094_il2cpp_TypeInfo;
struct GenericComparer_1_t4116;
extern Il2CppGenericClass GenericComparer_1_t4116_GenericClass;
TypeInfo GenericComparer_1_t4116_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericComparer_1_t4116_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t11094_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericComparer_1_t4116_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericComparer_1_t4116_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericComparer_1_t4116_il2cpp_TypeInfo/* cast_class */
	, &GenericComparer_1_t4116_0_0_0/* byval_arg */
	, &GenericComparer_1_t4116_1_0_0/* this_arg */
	, GenericComparer_1_t4116_InterfacesOffsets/* interface_offsets */
	, &GenericComparer_1_t4116_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericComparer_1_t4116)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t24_il2cpp_TypeInfo;
extern TypeInfo GenericComparer_1_t3237_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t508_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t11095_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t392_il2cpp_TypeInfo;
extern Il2CppType GenericComparer_1_t3237_0_0_0;
extern MethodInfo Object__ctor_m1366_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1586_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m5442_MethodInfo;
extern MethodInfo Type_MakeGenericType_m5440_MethodInfo;
extern MethodInfo Activator_CreateInstance_m3435_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m79324_MethodInfo;
extern MethodInfo Comparer_1_Compare_m105911_MethodInfo;
extern MethodInfo ArgumentException__ctor_m5657_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.ctor()
 void Comparer_1__ctor_m79320 (Comparer_1_t11094 * __this, MethodInfo* method){
	{
		Object__ctor_m1366(__this, /*hidden argument*/&Object__ctor_m1366_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.cctor()
extern MethodInfo Comparer_1__cctor_m79321_MethodInfo;
 void Comparer_1__cctor_m79321 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t11095 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t11095 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t11095_il2cpp_TypeInfo));
	DefaultComparer__ctor_m79324(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m79324_MethodInfo);
	((Comparer_1_t11094_StaticFields*)InitializedTypeInfo(&Comparer_1_t11094_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::System.Collections.IComparer.Compare(System.Object,System.Object)
 int32_t Comparer_1_System_Collections_IComparer_Compare_m79322 (Comparer_1_t11094 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if (___x)
		{
			goto IL_000b;
		}
	}
	{
		if (___y)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (___y)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((Object_t *)IsInst(___x, InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((Object_t *)IsInst(___y, InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, DateTimeOffset_t3643 , DateTimeOffset_t3643  >::Invoke(&Comparer_1_Compare_m105911_MethodInfo, __this, ((*(DateTimeOffset_t3643 *)((DateTimeOffset_t3643 *)UnBox (___x, InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo))))), ((*(DateTimeOffset_t3643 *)((DateTimeOffset_t3643 *)UnBox (___y, InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo))))));
		return L_0;
	}

IL_0033:
	{
		ArgumentException_t392 * L_1 = (ArgumentException_t392 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t392_il2cpp_TypeInfo));
		ArgumentException__ctor_m5657(L_1, /*hidden argument*/&ArgumentException__ctor_m5657_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTimeOffset>::get_Default()
extern MethodInfo Comparer_1_get_Default_m79323_MethodInfo;
 Comparer_1_t11094 * Comparer_1_get_Default_m79323 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Comparer_1_t11094_il2cpp_TypeInfo));
		return (((Comparer_1_t11094_StaticFields*)InitializedTypeInfo(&Comparer_1_t11094_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.DateTimeOffset>
extern Il2CppType Comparer_1_t11094_0_0_49;
FieldInfo Comparer_1_t11094_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &Comparer_1_t11094_0_0_49/* type */
	, &Comparer_1_t11094_il2cpp_TypeInfo/* parent */
	, offsetof(Comparer_1_t11094_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Comparer_1_t11094_FieldInfos[] =
{
	&Comparer_1_t11094_____default_0_FieldInfo,
	NULL
};
static PropertyInfo Comparer_1_t11094____Default_PropertyInfo = 
{
	&Comparer_1_t11094_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &Comparer_1_get_Default_m79323_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Comparer_1_t11094_PropertyInfos[] =
{
	&Comparer_1_t11094____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__ctor_m79320_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.ctor()
MethodInfo Comparer_1__ctor_m79320_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Comparer_1__ctor_m79320/* method */
	, &Comparer_1_t11094_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1__ctor_m79320_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__cctor_m79321_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.cctor()
MethodInfo Comparer_1__cctor_m79321_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Comparer_1__cctor_m79321/* method */
	, &Comparer_1_t11094_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1__cctor_m79321_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Comparer_1_t11094_Comparer_1_System_Collections_IComparer_Compare_m79322_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m79322_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::System.Collections.IComparer.Compare(System.Object,System.Object)
MethodInfo Comparer_1_System_Collections_IComparer_Compare_m79322_MethodInfo = 
{
	"System.Collections.IComparer.Compare"/* name */
	, (methodPointerType)&Comparer_1_System_Collections_IComparer_Compare_m79322/* method */
	, &Comparer_1_t11094_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t_Object_t/* invoker_method */
	, Comparer_1_t11094_Comparer_1_System_Collections_IComparer_Compare_m79322_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_System_Collections_IComparer_Compare_m79322_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t3643_0_0_0;
extern Il2CppType DateTimeOffset_t3643_0_0_0;
static ParameterInfo Comparer_1_t11094_Comparer_1_Compare_m105911_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_DateTimeOffset_t3643_DateTimeOffset_t3643 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_Compare_m105911_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::Compare(T,T)
MethodInfo Comparer_1_Compare_m105911_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &Comparer_1_t11094_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_DateTimeOffset_t3643_DateTimeOffset_t3643/* invoker_method */
	, Comparer_1_t11094_Comparer_1_Compare_m105911_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_Compare_m105911_GenericMethod/* genericMethod */

};
extern Il2CppType Comparer_1_t11094_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_get_Default_m79323_GenericMethod;
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTimeOffset>::get_Default()
MethodInfo Comparer_1_get_Default_m79323_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&Comparer_1_get_Default_m79323/* method */
	, &Comparer_1_t11094_il2cpp_TypeInfo/* declaring_type */
	, &Comparer_1_t11094_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_get_Default_m79323_GenericMethod/* genericMethod */

};
static MethodInfo* Comparer_1_t11094_MethodInfos[] =
{
	&Comparer_1__ctor_m79320_MethodInfo,
	&Comparer_1__cctor_m79321_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m79322_MethodInfo,
	&Comparer_1_Compare_m105911_MethodInfo,
	&Comparer_1_get_Default_m79323_MethodInfo,
	NULL
};
static MethodInfo* Comparer_1_t11094_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&Comparer_1_Compare_m105911_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m79322_MethodInfo,
	NULL,
};
static TypeInfo* Comparer_1_t11094_InterfacesTypeInfos[] = 
{
	&IComparer_1_t15967_il2cpp_TypeInfo,
	&IComparer_t2759_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair Comparer_1_t11094_InterfacesOffsets[] = 
{
	{ &IComparer_1_t15967_il2cpp_TypeInfo, 4},
	{ &IComparer_t2759_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Comparer_1_t11094_0_0_0;
extern Il2CppType Comparer_1_t11094_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct Comparer_1_t11094;
extern Il2CppGenericClass Comparer_1_t11094_GenericClass;
TypeInfo Comparer_1_t11094_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, Comparer_1_t11094_MethodInfos/* methods */
	, Comparer_1_t11094_PropertyInfos/* properties */
	, Comparer_1_t11094_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Comparer_1_t11094_il2cpp_TypeInfo/* element_class */
	, Comparer_1_t11094_InterfacesTypeInfos/* implemented_interfaces */
	, Comparer_1_t11094_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Comparer_1_t11094_il2cpp_TypeInfo/* cast_class */
	, &Comparer_1_t11094_0_0_0/* byval_arg */
	, &Comparer_1_t11094_1_0_0/* this_arg */
	, Comparer_1_t11094_InterfacesOffsets/* interface_offsets */
	, &Comparer_1_t11094_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Comparer_1_t11094)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Comparer_1_t11094_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.DateTimeOffset>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.DateTimeOffset>
extern Il2CppType DateTimeOffset_t3643_0_0_0;
extern Il2CppType DateTimeOffset_t3643_0_0_0;
static ParameterInfo IComparer_1_t15967_IComparer_1_Compare_m105912_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_DateTimeOffset_t3643_DateTimeOffset_t3643 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparer_1_Compare_m105912_GenericMethod;
// System.Int32 System.Collections.Generic.IComparer`1<System.DateTimeOffset>::Compare(T,T)
MethodInfo IComparer_1_Compare_m105912_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t15967_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_DateTimeOffset_t3643_DateTimeOffset_t3643/* invoker_method */
	, IComparer_1_t15967_IComparer_1_Compare_m105912_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparer_1_Compare_m105912_GenericMethod/* genericMethod */

};
static MethodInfo* IComparer_1_t15967_MethodInfos[] =
{
	&IComparer_1_Compare_m105912_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t15967_0_0_0;
extern Il2CppType IComparer_1_t15967_1_0_0;
struct IComparer_1_t15967;
extern Il2CppGenericClass IComparer_1_t15967_GenericClass;
TypeInfo IComparer_1_t15967_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t15967_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t15967_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t15967_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t15967_0_0_0/* byval_arg */
	, &IComparer_1_t15967_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t15967_GenericClass/* generic_class */
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

extern TypeInfo IComparable_t291_il2cpp_TypeInfo;
extern MethodInfo IComparable_CompareTo_m12865_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1974_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
 void DefaultComparer__ctor_m79324 (DefaultComparer_t11095 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m79320(__this, /*hidden argument*/&Comparer_1__ctor_m79320_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern MethodInfo DefaultComparer_Compare_m79325_MethodInfo;
 int32_t DefaultComparer_Compare_m79325 (DefaultComparer_t11095 * __this, DateTimeOffset_t3643  ___x, DateTimeOffset_t3643  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		DateTimeOffset_t3643  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		DateTimeOffset_t3643  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		DateTimeOffset_t3643  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		DateTimeOffset_t3643  L_6 = ___x;
		Object_t * L_7 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_6);
		if (!((Object_t*)IsInst(L_7, InitializedTypeInfo(&IComparable_1_t4118_il2cpp_TypeInfo))))
		{
			goto IL_003e;
		}
	}
	{
		DateTimeOffset_t3643  L_8 = ___x;
		Object_t * L_9 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_8);
		NullCheck(((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t4118_il2cpp_TypeInfo))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTimeOffset_t3643  >::Invoke(&IComparable_1_CompareTo_m105909_MethodInfo, ((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t4118_il2cpp_TypeInfo))), ___y);
		return L_10;
	}

IL_003e:
	{
		DateTimeOffset_t3643  L_11 = ___x;
		Object_t * L_12 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_11);
		if (!((Object_t *)IsInst(L_12, InitializedTypeInfo(&IComparable_t291_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		DateTimeOffset_t3643  L_13 = ___x;
		Object_t * L_14 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_13);
		DateTimeOffset_t3643  L_15 = ___y;
		Object_t * L_16 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_15);
		NullCheck(((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t291_il2cpp_TypeInfo))));
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m12865_MethodInfo, ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t291_il2cpp_TypeInfo))), L_16);
		return L_17;
	}

IL_0062:
	{
		ArgumentException_t392 * L_18 = (ArgumentException_t392 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t392_il2cpp_TypeInfo));
		ArgumentException__ctor_m1974(L_18, (String_t*) &_stringLiteral2143, /*hidden argument*/&ArgumentException__ctor_m1974_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m79324_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
MethodInfo DefaultComparer__ctor_m79324_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m79324/* method */
	, &DefaultComparer_t11095_il2cpp_TypeInfo/* declaring_type */
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
	, &DefaultComparer__ctor_m79324_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t3643_0_0_0;
extern Il2CppType DateTimeOffset_t3643_0_0_0;
static ParameterInfo DefaultComparer_t11095_DefaultComparer_Compare_m79325_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_DateTimeOffset_t3643_DateTimeOffset_t3643 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Compare_m79325_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
MethodInfo DefaultComparer_Compare_m79325_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&DefaultComparer_Compare_m79325/* method */
	, &DefaultComparer_t11095_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_DateTimeOffset_t3643_DateTimeOffset_t3643/* invoker_method */
	, DefaultComparer_t11095_DefaultComparer_Compare_m79325_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Compare_m79325_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t11095_MethodInfos[] =
{
	&DefaultComparer__ctor_m79324_MethodInfo,
	&DefaultComparer_Compare_m79325_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t11095_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&DefaultComparer_Compare_m79325_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m79322_MethodInfo,
	&DefaultComparer_Compare_m79325_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t11095_InterfacesOffsets[] = 
{
	{ &IComparer_1_t15967_il2cpp_TypeInfo, 4},
	{ &IComparer_t2759_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t11095_0_0_0;
extern Il2CppType DefaultComparer_t11095_1_0_0;
struct DefaultComparer_t11095;
extern Il2CppGenericClass DefaultComparer_t11095_GenericClass;
extern TypeInfo Comparer_1_t3236_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t11095_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t11095_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t11094_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Comparer_1_t3236_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t11095_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t11095_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t11095_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t11095_0_0_0/* byval_arg */
	, &DefaultComparer_t11095_1_0_0/* this_arg */
	, DefaultComparer_t11095_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t11095_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t11095)/* instance_size */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t4117_il2cpp_TypeInfo;

extern MethodInfo EqualityComparer_1__ctor_m79328_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m105910_MethodInfo;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::.ctor()
extern MethodInfo GenericEqualityComparer_1__ctor_m13500_MethodInfo;
 void GenericEqualityComparer_1__ctor_m13500 (GenericEqualityComparer_1_t4117 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m79328(__this, /*hidden argument*/&EqualityComparer_1__ctor_m79328_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m79326_MethodInfo;
 int32_t GenericEqualityComparer_1_GetHashCode_m79326 (GenericEqualityComparer_1_t4117 * __this, DateTimeOffset_t3643  ___obj, MethodInfo* method){
	{
		DateTimeOffset_t3643  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1357_MethodInfo, Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
extern MethodInfo GenericEqualityComparer_1_Equals_m79327_MethodInfo;
 bool GenericEqualityComparer_1_Equals_m79327 (GenericEqualityComparer_1_t4117 * __this, DateTimeOffset_t3643  ___x, DateTimeOffset_t3643  ___y, MethodInfo* method){
	{
		DateTimeOffset_t3643  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		DateTimeOffset_t3643  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &(*(&___x))));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, DateTimeOffset_t3643  >::Invoke(&IEquatable_1_Equals_m105910_MethodInfo, Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m13500_GenericMethod;
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::.ctor()
MethodInfo GenericEqualityComparer_1__ctor_m13500_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericEqualityComparer_1__ctor_m13500/* method */
	, &GenericEqualityComparer_1_t4117_il2cpp_TypeInfo/* declaring_type */
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
	, &GenericEqualityComparer_1__ctor_m13500_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t3643_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t4117_GenericEqualityComparer_1_GetHashCode_m79326_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_DateTimeOffset_t3643 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m79326_GenericMethod;
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
MethodInfo GenericEqualityComparer_1_GetHashCode_m79326_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_GetHashCode_m79326/* method */
	, &GenericEqualityComparer_1_t4117_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_DateTimeOffset_t3643/* invoker_method */
	, GenericEqualityComparer_1_t4117_GenericEqualityComparer_1_GetHashCode_m79326_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1_GetHashCode_m79326_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t3643_0_0_0;
extern Il2CppType DateTimeOffset_t3643_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t4117_GenericEqualityComparer_1_Equals_m79327_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_DateTimeOffset_t3643_DateTimeOffset_t3643 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m79327_GenericMethod;
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
MethodInfo GenericEqualityComparer_1_Equals_m79327_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_Equals_m79327/* method */
	, &GenericEqualityComparer_1_t4117_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_DateTimeOffset_t3643_DateTimeOffset_t3643/* invoker_method */
	, GenericEqualityComparer_1_t4117_GenericEqualityComparer_1_Equals_m79327_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1_Equals_m79327_GenericMethod/* genericMethod */

};
static MethodInfo* GenericEqualityComparer_1_t4117_MethodInfos[] =
{
	&GenericEqualityComparer_1__ctor_m13500_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m79326_MethodInfo,
	&GenericEqualityComparer_1_Equals_m79327_MethodInfo,
	NULL
};
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79331_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79330_MethodInfo;
static MethodInfo* GenericEqualityComparer_1_t4117_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&GenericEqualityComparer_1_Equals_m79327_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m79326_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79331_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79330_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m79326_MethodInfo,
	&GenericEqualityComparer_1_Equals_m79327_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t15968_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t2766_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericEqualityComparer_1_t4117_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t15968_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t2766_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericEqualityComparer_1_t4117_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t4117_1_0_0;
extern TypeInfo EqualityComparer_1_t11096_il2cpp_TypeInfo;
struct GenericEqualityComparer_1_t4117;
extern Il2CppGenericClass GenericEqualityComparer_1_t4117_GenericClass;
TypeInfo GenericEqualityComparer_1_t4117_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericEqualityComparer_1_t4117_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t11096_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericEqualityComparer_1_t4117_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericEqualityComparer_1_t4117_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericEqualityComparer_1_t4117_il2cpp_TypeInfo/* cast_class */
	, &GenericEqualityComparer_1_t4117_0_0_0/* byval_arg */
	, &GenericEqualityComparer_1_t4117_1_0_0/* this_arg */
	, GenericEqualityComparer_1_t4117_InterfacesOffsets/* interface_offsets */
	, &GenericEqualityComparer_1_t4117_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericEqualityComparer_1_t4117)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo GenericEqualityComparer_1_t3249_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t11097_il2cpp_TypeInfo;
extern Il2CppType GenericEqualityComparer_1_t3249_0_0_0;
extern MethodInfo DefaultComparer__ctor_m79333_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m105913_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m105914_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.ctor()
 void EqualityComparer_1__ctor_m79328 (EqualityComparer_1_t11096 * __this, MethodInfo* method){
	{
		Object__ctor_m1366(__this, /*hidden argument*/&Object__ctor_m1366_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.cctor()
extern MethodInfo EqualityComparer_1__cctor_m79329_MethodInfo;
 void EqualityComparer_1__cctor_m79329 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t11097 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t11097 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t11097_il2cpp_TypeInfo));
	DefaultComparer__ctor_m79333(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m79333_MethodInfo);
	((EqualityComparer_1_t11096_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t11096_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
 int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79330 (EqualityComparer_1_t11096 * __this, Object_t * ___obj, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, DateTimeOffset_t3643  >::Invoke(&EqualityComparer_1_GetHashCode_m105913_MethodInfo, __this, ((*(DateTimeOffset_t3643 *)((DateTimeOffset_t3643 *)UnBox (___obj, InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
 bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79331 (EqualityComparer_1_t11096 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, DateTimeOffset_t3643 , DateTimeOffset_t3643  >::Invoke(&EqualityComparer_1_Equals_m105914_MethodInfo, __this, ((*(DateTimeOffset_t3643 *)((DateTimeOffset_t3643 *)UnBox (___x, InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo))))), ((*(DateTimeOffset_t3643 *)((DateTimeOffset_t3643 *)UnBox (___y, InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::get_Default()
extern MethodInfo EqualityComparer_1_get_Default_m79332_MethodInfo;
 EqualityComparer_1_t11096 * EqualityComparer_1_get_Default_m79332 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&EqualityComparer_1_t11096_il2cpp_TypeInfo));
		return (((EqualityComparer_1_t11096_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t11096_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
extern Il2CppType EqualityComparer_1_t11096_0_0_49;
FieldInfo EqualityComparer_1_t11096_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &EqualityComparer_1_t11096_0_0_49/* type */
	, &EqualityComparer_1_t11096_il2cpp_TypeInfo/* parent */
	, offsetof(EqualityComparer_1_t11096_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* EqualityComparer_1_t11096_FieldInfos[] =
{
	&EqualityComparer_1_t11096_____default_0_FieldInfo,
	NULL
};
static PropertyInfo EqualityComparer_1_t11096____Default_PropertyInfo = 
{
	&EqualityComparer_1_t11096_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &EqualityComparer_1_get_Default_m79332_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* EqualityComparer_1_t11096_PropertyInfos[] =
{
	&EqualityComparer_1_t11096____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__ctor_m79328_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.ctor()
MethodInfo EqualityComparer_1__ctor_m79328_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EqualityComparer_1__ctor_m79328/* method */
	, &EqualityComparer_1_t11096_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1__ctor_m79328_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__cctor_m79329_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.cctor()
MethodInfo EqualityComparer_1__cctor_m79329_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&EqualityComparer_1__cctor_m79329/* method */
	, &EqualityComparer_1_t11096_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1__cctor_m79329_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t11096_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79330_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79330_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79330_MethodInfo = 
{
	"System.Collections.IEqualityComparer.GetHashCode"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79330/* method */
	, &EqualityComparer_1_t11096_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, EqualityComparer_1_t11096_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79330_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79330_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t11096_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79331_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79331_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79331_MethodInfo = 
{
	"System.Collections.IEqualityComparer.Equals"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79331/* method */
	, &EqualityComparer_1_t11096_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t_Object_t/* invoker_method */
	, EqualityComparer_1_t11096_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79331_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79331_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t3643_0_0_0;
static ParameterInfo EqualityComparer_1_t11096_EqualityComparer_1_GetHashCode_m105913_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_DateTimeOffset_t3643 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m105913_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
MethodInfo EqualityComparer_1_GetHashCode_m105913_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t11096_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_DateTimeOffset_t3643/* invoker_method */
	, EqualityComparer_1_t11096_EqualityComparer_1_GetHashCode_m105913_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_GetHashCode_m105913_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t3643_0_0_0;
extern Il2CppType DateTimeOffset_t3643_0_0_0;
static ParameterInfo EqualityComparer_1_t11096_EqualityComparer_1_Equals_m105914_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_DateTimeOffset_t3643_DateTimeOffset_t3643 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_Equals_m105914_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
MethodInfo EqualityComparer_1_Equals_m105914_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t11096_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_DateTimeOffset_t3643_DateTimeOffset_t3643/* invoker_method */
	, EqualityComparer_1_t11096_EqualityComparer_1_Equals_m105914_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_Equals_m105914_GenericMethod/* genericMethod */

};
extern Il2CppType EqualityComparer_1_t11096_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m79332_GenericMethod;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::get_Default()
MethodInfo EqualityComparer_1_get_Default_m79332_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&EqualityComparer_1_get_Default_m79332/* method */
	, &EqualityComparer_1_t11096_il2cpp_TypeInfo/* declaring_type */
	, &EqualityComparer_1_t11096_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_get_Default_m79332_GenericMethod/* genericMethod */

};
static MethodInfo* EqualityComparer_1_t11096_MethodInfos[] =
{
	&EqualityComparer_1__ctor_m79328_MethodInfo,
	&EqualityComparer_1__cctor_m79329_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79330_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79331_MethodInfo,
	&EqualityComparer_1_GetHashCode_m105913_MethodInfo,
	&EqualityComparer_1_Equals_m105914_MethodInfo,
	&EqualityComparer_1_get_Default_m79332_MethodInfo,
	NULL
};
static MethodInfo* EqualityComparer_1_t11096_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&EqualityComparer_1_Equals_m105914_MethodInfo,
	&EqualityComparer_1_GetHashCode_m105913_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79331_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79330_MethodInfo,
	NULL,
	NULL,
};
static TypeInfo* EqualityComparer_1_t11096_InterfacesTypeInfos[] = 
{
	&IEqualityComparer_1_t15968_il2cpp_TypeInfo,
	&IEqualityComparer_t2766_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair EqualityComparer_1_t11096_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t15968_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t2766_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType EqualityComparer_1_t11096_0_0_0;
extern Il2CppType EqualityComparer_1_t11096_1_0_0;
struct EqualityComparer_1_t11096;
extern Il2CppGenericClass EqualityComparer_1_t11096_GenericClass;
TypeInfo EqualityComparer_1_t11096_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, EqualityComparer_1_t11096_MethodInfos/* methods */
	, EqualityComparer_1_t11096_PropertyInfos/* properties */
	, EqualityComparer_1_t11096_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &EqualityComparer_1_t11096_il2cpp_TypeInfo/* element_class */
	, EqualityComparer_1_t11096_InterfacesTypeInfos/* implemented_interfaces */
	, EqualityComparer_1_t11096_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &EqualityComparer_1_t11096_il2cpp_TypeInfo/* cast_class */
	, &EqualityComparer_1_t11096_0_0_0/* byval_arg */
	, &EqualityComparer_1_t11096_1_0_0/* this_arg */
	, EqualityComparer_1_t11096_InterfacesOffsets/* interface_offsets */
	, &EqualityComparer_1_t11096_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EqualityComparer_1_t11096)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(EqualityComparer_1_t11096_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>
extern Il2CppType DateTimeOffset_t3643_0_0_0;
extern Il2CppType DateTimeOffset_t3643_0_0_0;
static ParameterInfo IEqualityComparer_1_t15968_IEqualityComparer_1_Equals_m105915_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_DateTimeOffset_t3643_DateTimeOffset_t3643 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m105915_GenericMethod;
// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
MethodInfo IEqualityComparer_1_Equals_m105915_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t15968_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_DateTimeOffset_t3643_DateTimeOffset_t3643/* invoker_method */
	, IEqualityComparer_1_t15968_IEqualityComparer_1_Equals_m105915_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_Equals_m105915_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t3643_0_0_0;
static ParameterInfo IEqualityComparer_1_t15968_IEqualityComparer_1_GetHashCode_m105916_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_DateTimeOffset_t3643 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m105916_GenericMethod;
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
MethodInfo IEqualityComparer_1_GetHashCode_m105916_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t15968_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_DateTimeOffset_t3643/* invoker_method */
	, IEqualityComparer_1_t15968_IEqualityComparer_1_GetHashCode_m105916_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_GetHashCode_m105916_GenericMethod/* genericMethod */

};
static MethodInfo* IEqualityComparer_1_t15968_MethodInfos[] =
{
	&IEqualityComparer_1_Equals_m105915_MethodInfo,
	&IEqualityComparer_1_GetHashCode_m105916_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEqualityComparer_1_t15968_0_0_0;
extern Il2CppType IEqualityComparer_1_t15968_1_0_0;
struct IEqualityComparer_1_t15968;
extern Il2CppGenericClass IEqualityComparer_1_t15968_GenericClass;
TypeInfo IEqualityComparer_1_t15968_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEqualityComparer_1_t15968_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEqualityComparer_1_t15968_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEqualityComparer_1_t15968_il2cpp_TypeInfo/* cast_class */
	, &IEqualityComparer_1_t15968_0_0_0/* byval_arg */
	, &IEqualityComparer_1_t15968_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEqualityComparer_1_t15968_GenericClass/* generic_class */
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
	, 2/* method_count */
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



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
 void DefaultComparer__ctor_m79333 (DefaultComparer_t11097 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m79328(__this, /*hidden argument*/&EqualityComparer_1__ctor_m79328_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern MethodInfo DefaultComparer_GetHashCode_m79334_MethodInfo;
 int32_t DefaultComparer_GetHashCode_m79334 (DefaultComparer_t11097 * __this, DateTimeOffset_t3643  ___obj, MethodInfo* method){
	{
		DateTimeOffset_t3643  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1357_MethodInfo, Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern MethodInfo DefaultComparer_Equals_m79335_MethodInfo;
 bool DefaultComparer_Equals_m79335 (DefaultComparer_t11097 * __this, DateTimeOffset_t3643  ___x, DateTimeOffset_t3643  ___y, MethodInfo* method){
	{
		DateTimeOffset_t3643  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		DateTimeOffset_t3643  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		DateTimeOffset_t3643  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &L_4);
		NullCheck(Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &(*(&___x))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1356_MethodInfo, Box(InitializedTypeInfo(&DateTimeOffset_t3643_il2cpp_TypeInfo), &(*(&___x))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m79333_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
MethodInfo DefaultComparer__ctor_m79333_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m79333/* method */
	, &DefaultComparer_t11097_il2cpp_TypeInfo/* declaring_type */
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
	, &DefaultComparer__ctor_m79333_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t3643_0_0_0;
static ParameterInfo DefaultComparer_t11097_DefaultComparer_GetHashCode_m79334_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_DateTimeOffset_t3643 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m79334_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
MethodInfo DefaultComparer_GetHashCode_m79334_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&DefaultComparer_GetHashCode_m79334/* method */
	, &DefaultComparer_t11097_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_DateTimeOffset_t3643/* invoker_method */
	, DefaultComparer_t11097_DefaultComparer_GetHashCode_m79334_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_GetHashCode_m79334_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t3643_0_0_0;
extern Il2CppType DateTimeOffset_t3643_0_0_0;
static ParameterInfo DefaultComparer_t11097_DefaultComparer_Equals_m79335_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t3643_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_DateTimeOffset_t3643_DateTimeOffset_t3643 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Equals_m79335_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
MethodInfo DefaultComparer_Equals_m79335_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&DefaultComparer_Equals_m79335/* method */
	, &DefaultComparer_t11097_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_DateTimeOffset_t3643_DateTimeOffset_t3643/* invoker_method */
	, DefaultComparer_t11097_DefaultComparer_Equals_m79335_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Equals_m79335_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t11097_MethodInfos[] =
{
	&DefaultComparer__ctor_m79333_MethodInfo,
	&DefaultComparer_GetHashCode_m79334_MethodInfo,
	&DefaultComparer_Equals_m79335_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t11097_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&DefaultComparer_Equals_m79335_MethodInfo,
	&DefaultComparer_GetHashCode_m79334_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79331_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79330_MethodInfo,
	&DefaultComparer_GetHashCode_m79334_MethodInfo,
	&DefaultComparer_Equals_m79335_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t11097_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t15968_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t2766_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t11097_0_0_0;
extern Il2CppType DefaultComparer_t11097_1_0_0;
struct DefaultComparer_t11097;
extern Il2CppGenericClass DefaultComparer_t11097_GenericClass;
extern TypeInfo EqualityComparer_1_t3248_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t11097_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t11097_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t11096_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &EqualityComparer_1_t3248_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t11097_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t11097_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t11097_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t11097_0_0_0/* byval_arg */
	, &DefaultComparer_t11097_1_0_0/* this_arg */
	, DefaultComparer_t11097_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t11097_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t11097)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057027/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13394_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.DayOfWeek>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DayOfWeek>
extern MethodInfo IEnumerator_1_get_Current_m105917_MethodInfo;
static PropertyInfo IEnumerator_1_t13394____Current_PropertyInfo = 
{
	&IEnumerator_1_t13394_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m105917_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13394_PropertyInfos[] =
{
	&IEnumerator_1_t13394____Current_PropertyInfo,
	NULL
};
extern Il2CppType DayOfWeek_t3646_0_0_0;
extern void* RuntimeInvoker_DayOfWeek_t3646 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m105917_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.DayOfWeek>::get_Current()
MethodInfo IEnumerator_1_get_Current_m105917_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13394_il2cpp_TypeInfo/* declaring_type */
	, &DayOfWeek_t3646_0_0_0/* return_type */
	, RuntimeInvoker_DayOfWeek_t3646/* invoker_method */
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
	, &IEnumerator_1_get_Current_m105917_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13394_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m105917_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13394_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13394_0_0_0;
extern Il2CppType IEnumerator_1_t13394_1_0_0;
struct IEnumerator_1_t13394;
extern Il2CppGenericClass IEnumerator_1_t13394_GenericClass;
TypeInfo IEnumerator_1_t13394_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13394_MethodInfos/* methods */
	, IEnumerator_1_t13394_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13394_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13394_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13394_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13394_0_0_0/* byval_arg */
	, &IEnumerator_1_t13394_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13394_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t11098_il2cpp_TypeInfo;

extern TypeInfo DayOfWeek_t3646_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m79341_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDayOfWeek_t3646_m92991_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.DayOfWeek>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.DayOfWeek>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDayOfWeek_t3646_m92991 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.DayOfWeek>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m79336_MethodInfo;
 void InternalEnumerator_1__ctor_m79336 (InternalEnumerator_1_t11098 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DayOfWeek>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79337_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79337 (InternalEnumerator_1_t11098 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.DayOfWeek>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79338_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79338 (InternalEnumerator_1_t11098 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m79341(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m79341_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DayOfWeek_t3646_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DayOfWeek>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m79339_MethodInfo;
 void InternalEnumerator_1_Dispose_m79339 (InternalEnumerator_1_t11098 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.DayOfWeek>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m79340_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m79340 (InternalEnumerator_1_t11098 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.DayOfWeek>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m79341 (InternalEnumerator_1_t11098 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDayOfWeek_t3646_m92991(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDayOfWeek_t3646_m92991_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DayOfWeek>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t11098____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t11098_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11098, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t11098____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t11098_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11098, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t11098_FieldInfos[] =
{
	&InternalEnumerator_1_t11098____array_0_FieldInfo,
	&InternalEnumerator_1_t11098____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t11098____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11098_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79338_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t11098____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11098_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m79341_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t11098_PropertyInfos[] =
{
	&InternalEnumerator_1_t11098____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t11098____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t11098_InternalEnumerator_1__ctor_m79336_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m79336_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DayOfWeek>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m79336_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m79336/* method */
	, &InternalEnumerator_1_t11098_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t11098_InternalEnumerator_1__ctor_m79336_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m79336_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79337_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DayOfWeek>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79337_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79337/* method */
	, &InternalEnumerator_1_t11098_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79337_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79338_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.DayOfWeek>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79338_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79338/* method */
	, &InternalEnumerator_1_t11098_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79338_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m79339_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DayOfWeek>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m79339_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m79339/* method */
	, &InternalEnumerator_1_t11098_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m79339_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m79340_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.DayOfWeek>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m79340_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m79340/* method */
	, &InternalEnumerator_1_t11098_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m79340_GenericMethod/* genericMethod */

};
extern Il2CppType DayOfWeek_t3646_0_0_0;
extern void* RuntimeInvoker_DayOfWeek_t3646 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m79341_GenericMethod;
// T System.Array/InternalEnumerator`1<System.DayOfWeek>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m79341_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m79341/* method */
	, &InternalEnumerator_1_t11098_il2cpp_TypeInfo/* declaring_type */
	, &DayOfWeek_t3646_0_0_0/* return_type */
	, RuntimeInvoker_DayOfWeek_t3646/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m79341_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t11098_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m79336_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79337_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79338_MethodInfo,
	&InternalEnumerator_1_Dispose_m79339_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79340_MethodInfo,
	&InternalEnumerator_1_get_Current_m79341_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t11098_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79338_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79340_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79337_MethodInfo,
	&InternalEnumerator_1_Dispose_m79339_MethodInfo,
	&InternalEnumerator_1_get_Current_m79341_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t11098_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13394_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t11098_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13394_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t11098_0_0_0;
extern Il2CppType InternalEnumerator_1_t11098_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t11098_GenericClass;
TypeInfo InternalEnumerator_1_t11098_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t11098_MethodInfos/* methods */
	, InternalEnumerator_1_t11098_PropertyInfos/* properties */
	, InternalEnumerator_1_t11098_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t11098_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t11098_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t11098_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t11098_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t11098_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t11098_1_0_0/* this_arg */
	, InternalEnumerator_1_t11098_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t11098_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t11098)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t15096_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.DayOfWeek>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.DayOfWeek>
extern MethodInfo ICollection_1_get_Count_m105918_MethodInfo;
static PropertyInfo ICollection_1_t15096____Count_PropertyInfo = 
{
	&ICollection_1_t15096_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m105918_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m105919_MethodInfo;
static PropertyInfo ICollection_1_t15096____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t15096_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m105919_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t15096_PropertyInfos[] =
{
	&ICollection_1_t15096____Count_PropertyInfo,
	&ICollection_1_t15096____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m105918_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.DayOfWeek>::get_Count()
MethodInfo ICollection_1_get_Count_m105918_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t15096_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m105918_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m105919_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m105919_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t15096_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m105919_GenericMethod/* genericMethod */

};
extern Il2CppType DayOfWeek_t3646_0_0_0;
extern Il2CppType DayOfWeek_t3646_0_0_0;
static ParameterInfo ICollection_1_t15096_ICollection_1_Add_m105920_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t3646_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m105920_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::Add(T)
MethodInfo ICollection_1_Add_m105920_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t15096_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t15096_ICollection_1_Add_m105920_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m105920_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m105921_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::Clear()
MethodInfo ICollection_1_Clear_m105921_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t15096_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m105921_GenericMethod/* genericMethod */

};
extern Il2CppType DayOfWeek_t3646_0_0_0;
static ParameterInfo ICollection_1_t15096_ICollection_1_Contains_m105922_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t3646_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m105922_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::Contains(T)
MethodInfo ICollection_1_Contains_m105922_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t15096_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15096_ICollection_1_Contains_m105922_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m105922_GenericMethod/* genericMethod */

};
extern Il2CppType DayOfWeekU5BU5D_t11332_0_0_0;
extern Il2CppType DayOfWeekU5BU5D_t11332_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t15096_ICollection_1_CopyTo_m105923_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DayOfWeekU5BU5D_t11332_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m105923_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m105923_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t15096_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t15096_ICollection_1_CopyTo_m105923_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m105923_GenericMethod/* genericMethod */

};
extern Il2CppType DayOfWeek_t3646_0_0_0;
static ParameterInfo ICollection_1_t15096_ICollection_1_Remove_m105924_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t3646_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m105924_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::Remove(T)
MethodInfo ICollection_1_Remove_m105924_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t15096_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15096_ICollection_1_Remove_m105924_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m105924_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t15096_MethodInfos[] =
{
	&ICollection_1_get_Count_m105918_MethodInfo,
	&ICollection_1_get_IsReadOnly_m105919_MethodInfo,
	&ICollection_1_Add_m105920_MethodInfo,
	&ICollection_1_Clear_m105921_MethodInfo,
	&ICollection_1_Contains_m105922_MethodInfo,
	&ICollection_1_CopyTo_m105923_MethodInfo,
	&ICollection_1_Remove_m105924_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t15098_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t15096_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t15098_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t15096_0_0_0;
extern Il2CppType ICollection_1_t15096_1_0_0;
struct ICollection_1_t15096;
extern Il2CppGenericClass ICollection_1_t15096_GenericClass;
TypeInfo ICollection_1_t15096_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t15096_MethodInfos/* methods */
	, ICollection_1_t15096_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t15096_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t15096_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t15096_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t15096_0_0_0/* byval_arg */
	, &ICollection_1_t15096_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t15096_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DayOfWeek>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DayOfWeek>
extern Il2CppType IEnumerator_1_t13394_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m105925_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DayOfWeek>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m105925_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t15098_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13394_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m105925_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t15098_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m105925_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t15098_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t15098_0_0_0;
extern Il2CppType IEnumerable_1_t15098_1_0_0;
struct IEnumerable_1_t15098;
extern Il2CppGenericClass IEnumerable_1_t15098_GenericClass;
TypeInfo IEnumerable_1_t15098_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t15098_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t15098_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t15098_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t15098_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t15098_0_0_0/* byval_arg */
	, &IEnumerable_1_t15098_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t15098_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t15097_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.DayOfWeek>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.DayOfWeek>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.DayOfWeek>
extern MethodInfo IList_1_get_Item_m105926_MethodInfo;
extern MethodInfo IList_1_set_Item_m105927_MethodInfo;
static PropertyInfo IList_1_t15097____Item_PropertyInfo = 
{
	&IList_1_t15097_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m105926_MethodInfo/* get */
	, &IList_1_set_Item_m105927_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t15097_PropertyInfos[] =
{
	&IList_1_t15097____Item_PropertyInfo,
	NULL
};
extern Il2CppType DayOfWeek_t3646_0_0_0;
static ParameterInfo IList_1_t15097_IList_1_IndexOf_m105928_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t3646_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m105928_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.DayOfWeek>::IndexOf(T)
MethodInfo IList_1_IndexOf_m105928_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t15097_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15097_IList_1_IndexOf_m105928_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m105928_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DayOfWeek_t3646_0_0_0;
static ParameterInfo IList_1_t15097_IList_1_Insert_m105929_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t3646_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m105929_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m105929_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t15097_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15097_IList_1_Insert_m105929_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m105929_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15097_IList_1_RemoveAt_m105930_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m105930_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m105930_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t15097_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t15097_IList_1_RemoveAt_m105930_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m105930_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15097_IList_1_get_Item_m105926_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType DayOfWeek_t3646_0_0_0;
extern void* RuntimeInvoker_DayOfWeek_t3646_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m105926_GenericMethod;
// T System.Collections.Generic.IList`1<System.DayOfWeek>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m105926_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t15097_il2cpp_TypeInfo/* declaring_type */
	, &DayOfWeek_t3646_0_0_0/* return_type */
	, RuntimeInvoker_DayOfWeek_t3646_Int32_t23/* invoker_method */
	, IList_1_t15097_IList_1_get_Item_m105926_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m105926_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DayOfWeek_t3646_0_0_0;
static ParameterInfo IList_1_t15097_IList_1_set_Item_m105927_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t3646_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m105927_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m105927_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t15097_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15097_IList_1_set_Item_m105927_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m105927_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t15097_MethodInfos[] =
{
	&IList_1_IndexOf_m105928_MethodInfo,
	&IList_1_Insert_m105929_MethodInfo,
	&IList_1_RemoveAt_m105930_MethodInfo,
	&IList_1_get_Item_m105926_MethodInfo,
	&IList_1_set_Item_m105927_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t15097_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t15096_il2cpp_TypeInfo,
	&IEnumerable_1_t15098_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t15097_0_0_0;
extern Il2CppType IList_1_t15097_1_0_0;
struct IList_1_t15097;
extern Il2CppGenericClass IList_1_t15097_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t15097_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t15097_MethodInfos/* methods */
	, IList_1_t15097_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t15097_il2cpp_TypeInfo/* element_class */
	, IList_1_t15097_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t15097_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t15097_0_0_0/* byval_arg */
	, &IList_1_t15097_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t15097_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13396_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Environment/SpecialFolder>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Environment/SpecialFolder>
extern MethodInfo IEnumerator_1_get_Current_m105931_MethodInfo;
static PropertyInfo IEnumerator_1_t13396____Current_PropertyInfo = 
{
	&IEnumerator_1_t13396_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m105931_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13396_PropertyInfos[] =
{
	&IEnumerator_1_t13396____Current_PropertyInfo,
	NULL
};
extern Il2CppType SpecialFolder_t3658_0_0_0;
extern void* RuntimeInvoker_SpecialFolder_t3658 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m105931_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Environment/SpecialFolder>::get_Current()
MethodInfo IEnumerator_1_get_Current_m105931_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13396_il2cpp_TypeInfo/* declaring_type */
	, &SpecialFolder_t3658_0_0_0/* return_type */
	, RuntimeInvoker_SpecialFolder_t3658/* invoker_method */
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
	, &IEnumerator_1_get_Current_m105931_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13396_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m105931_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13396_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13396_0_0_0;
extern Il2CppType IEnumerator_1_t13396_1_0_0;
struct IEnumerator_1_t13396;
extern Il2CppGenericClass IEnumerator_1_t13396_GenericClass;
TypeInfo IEnumerator_1_t13396_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13396_MethodInfos/* methods */
	, IEnumerator_1_t13396_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13396_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13396_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13396_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13396_0_0_0/* byval_arg */
	, &IEnumerator_1_t13396_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13396_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t11099_il2cpp_TypeInfo;

extern TypeInfo SpecialFolder_t3658_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m79347_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSpecialFolder_t3658_m93002_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Environment/SpecialFolder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Environment/SpecialFolder>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSpecialFolder_t3658_m93002 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m79342_MethodInfo;
 void InternalEnumerator_1__ctor_m79342 (InternalEnumerator_1_t11099 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79343_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79343 (InternalEnumerator_1_t11099 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79344_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79344 (InternalEnumerator_1_t11099 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m79347(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m79347_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SpecialFolder_t3658_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m79345_MethodInfo;
 void InternalEnumerator_1_Dispose_m79345 (InternalEnumerator_1_t11099 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m79346_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m79346 (InternalEnumerator_1_t11099 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m79347 (InternalEnumerator_1_t11099 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSpecialFolder_t3658_m93002(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSpecialFolder_t3658_m93002_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t11099____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t11099_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11099, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t11099____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t11099_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11099, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t11099_FieldInfos[] =
{
	&InternalEnumerator_1_t11099____array_0_FieldInfo,
	&InternalEnumerator_1_t11099____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t11099____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11099_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79344_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t11099____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11099_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m79347_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t11099_PropertyInfos[] =
{
	&InternalEnumerator_1_t11099____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t11099____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t11099_InternalEnumerator_1__ctor_m79342_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m79342_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m79342_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m79342/* method */
	, &InternalEnumerator_1_t11099_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t11099_InternalEnumerator_1__ctor_m79342_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m79342_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79343_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79343_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79343/* method */
	, &InternalEnumerator_1_t11099_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79343_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79344_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79344_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79344/* method */
	, &InternalEnumerator_1_t11099_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79344_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m79345_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m79345_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m79345/* method */
	, &InternalEnumerator_1_t11099_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m79345_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m79346_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m79346_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m79346/* method */
	, &InternalEnumerator_1_t11099_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m79346_GenericMethod/* genericMethod */

};
extern Il2CppType SpecialFolder_t3658_0_0_0;
extern void* RuntimeInvoker_SpecialFolder_t3658 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m79347_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m79347_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m79347/* method */
	, &InternalEnumerator_1_t11099_il2cpp_TypeInfo/* declaring_type */
	, &SpecialFolder_t3658_0_0_0/* return_type */
	, RuntimeInvoker_SpecialFolder_t3658/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m79347_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t11099_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m79342_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79344_MethodInfo,
	&InternalEnumerator_1_Dispose_m79345_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79346_MethodInfo,
	&InternalEnumerator_1_get_Current_m79347_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t11099_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79344_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79346_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79343_MethodInfo,
	&InternalEnumerator_1_Dispose_m79345_MethodInfo,
	&InternalEnumerator_1_get_Current_m79347_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t11099_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13396_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t11099_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13396_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t11099_0_0_0;
extern Il2CppType InternalEnumerator_1_t11099_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t11099_GenericClass;
TypeInfo InternalEnumerator_1_t11099_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t11099_MethodInfos/* methods */
	, InternalEnumerator_1_t11099_PropertyInfos/* properties */
	, InternalEnumerator_1_t11099_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t11099_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t11099_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t11099_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t11099_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t11099_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t11099_1_0_0/* this_arg */
	, InternalEnumerator_1_t11099_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t11099_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t11099)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t15099_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>
extern MethodInfo ICollection_1_get_Count_m105932_MethodInfo;
static PropertyInfo ICollection_1_t15099____Count_PropertyInfo = 
{
	&ICollection_1_t15099_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m105932_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m105933_MethodInfo;
static PropertyInfo ICollection_1_t15099____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t15099_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m105933_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t15099_PropertyInfos[] =
{
	&ICollection_1_t15099____Count_PropertyInfo,
	&ICollection_1_t15099____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m105932_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::get_Count()
MethodInfo ICollection_1_get_Count_m105932_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t15099_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m105932_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m105933_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m105933_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t15099_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m105933_GenericMethod/* genericMethod */

};
extern Il2CppType SpecialFolder_t3658_0_0_0;
extern Il2CppType SpecialFolder_t3658_0_0_0;
static ParameterInfo ICollection_1_t15099_ICollection_1_Add_m105934_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t3658_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m105934_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Add(T)
MethodInfo ICollection_1_Add_m105934_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t15099_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t15099_ICollection_1_Add_m105934_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m105934_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m105935_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Clear()
MethodInfo ICollection_1_Clear_m105935_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t15099_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m105935_GenericMethod/* genericMethod */

};
extern Il2CppType SpecialFolder_t3658_0_0_0;
static ParameterInfo ICollection_1_t15099_ICollection_1_Contains_m105936_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t3658_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m105936_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Contains(T)
MethodInfo ICollection_1_Contains_m105936_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t15099_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15099_ICollection_1_Contains_m105936_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m105936_GenericMethod/* genericMethod */

};
extern Il2CppType SpecialFolderU5BU5D_t11333_0_0_0;
extern Il2CppType SpecialFolderU5BU5D_t11333_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t15099_ICollection_1_CopyTo_m105937_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolderU5BU5D_t11333_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m105937_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m105937_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t15099_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t15099_ICollection_1_CopyTo_m105937_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m105937_GenericMethod/* genericMethod */

};
extern Il2CppType SpecialFolder_t3658_0_0_0;
static ParameterInfo ICollection_1_t15099_ICollection_1_Remove_m105938_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t3658_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m105938_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Remove(T)
MethodInfo ICollection_1_Remove_m105938_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t15099_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15099_ICollection_1_Remove_m105938_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m105938_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t15099_MethodInfos[] =
{
	&ICollection_1_get_Count_m105932_MethodInfo,
	&ICollection_1_get_IsReadOnly_m105933_MethodInfo,
	&ICollection_1_Add_m105934_MethodInfo,
	&ICollection_1_Clear_m105935_MethodInfo,
	&ICollection_1_Contains_m105936_MethodInfo,
	&ICollection_1_CopyTo_m105937_MethodInfo,
	&ICollection_1_Remove_m105938_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t15101_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t15099_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t15101_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t15099_0_0_0;
extern Il2CppType ICollection_1_t15099_1_0_0;
struct ICollection_1_t15099;
extern Il2CppGenericClass ICollection_1_t15099_GenericClass;
TypeInfo ICollection_1_t15099_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t15099_MethodInfos/* methods */
	, ICollection_1_t15099_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t15099_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t15099_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t15099_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t15099_0_0_0/* byval_arg */
	, &ICollection_1_t15099_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t15099_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Environment/SpecialFolder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Environment/SpecialFolder>
extern Il2CppType IEnumerator_1_t13396_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m105939_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Environment/SpecialFolder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m105939_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t15101_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13396_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m105939_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t15101_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m105939_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t15101_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t15101_0_0_0;
extern Il2CppType IEnumerable_1_t15101_1_0_0;
struct IEnumerable_1_t15101;
extern Il2CppGenericClass IEnumerable_1_t15101_GenericClass;
TypeInfo IEnumerable_1_t15101_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t15101_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t15101_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t15101_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t15101_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t15101_0_0_0/* byval_arg */
	, &IEnumerable_1_t15101_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t15101_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t15100_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Environment/SpecialFolder>
extern MethodInfo IList_1_get_Item_m105940_MethodInfo;
extern MethodInfo IList_1_set_Item_m105941_MethodInfo;
static PropertyInfo IList_1_t15100____Item_PropertyInfo = 
{
	&IList_1_t15100_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m105940_MethodInfo/* get */
	, &IList_1_set_Item_m105941_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t15100_PropertyInfos[] =
{
	&IList_1_t15100____Item_PropertyInfo,
	NULL
};
extern Il2CppType SpecialFolder_t3658_0_0_0;
static ParameterInfo IList_1_t15100_IList_1_IndexOf_m105942_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t3658_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m105942_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m105942_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t15100_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15100_IList_1_IndexOf_m105942_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m105942_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType SpecialFolder_t3658_0_0_0;
static ParameterInfo IList_1_t15100_IList_1_Insert_m105943_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t3658_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m105943_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m105943_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t15100_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15100_IList_1_Insert_m105943_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m105943_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15100_IList_1_RemoveAt_m105944_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m105944_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m105944_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t15100_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t15100_IList_1_RemoveAt_m105944_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m105944_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15100_IList_1_get_Item_m105940_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType SpecialFolder_t3658_0_0_0;
extern void* RuntimeInvoker_SpecialFolder_t3658_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m105940_GenericMethod;
// T System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m105940_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t15100_il2cpp_TypeInfo/* declaring_type */
	, &SpecialFolder_t3658_0_0_0/* return_type */
	, RuntimeInvoker_SpecialFolder_t3658_Int32_t23/* invoker_method */
	, IList_1_t15100_IList_1_get_Item_m105940_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m105940_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType SpecialFolder_t3658_0_0_0;
static ParameterInfo IList_1_t15100_IList_1_set_Item_m105941_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t3658_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m105941_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m105941_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t15100_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15100_IList_1_set_Item_m105941_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m105941_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t15100_MethodInfos[] =
{
	&IList_1_IndexOf_m105942_MethodInfo,
	&IList_1_Insert_m105943_MethodInfo,
	&IList_1_RemoveAt_m105944_MethodInfo,
	&IList_1_get_Item_m105940_MethodInfo,
	&IList_1_set_Item_m105941_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t15100_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t15099_il2cpp_TypeInfo,
	&IEnumerable_1_t15101_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t15100_0_0_0;
extern Il2CppType IList_1_t15100_1_0_0;
struct IList_1_t15100;
extern Il2CppGenericClass IList_1_t15100_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t15100_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t15100_MethodInfos/* methods */
	, IList_1_t15100_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t15100_il2cpp_TypeInfo/* element_class */
	, IList_1_t15100_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t15100_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t15100_0_0_0/* byval_arg */
	, &IList_1_t15100_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t15100_GenericClass/* generic_class */
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
extern TypeInfo IComparable_1_t4127_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Guid>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.Guid>
extern Il2CppType Guid_t641_0_0_0;
extern Il2CppType Guid_t641_0_0_0;
static ParameterInfo IComparable_1_t4127_IComparable_1_CompareTo_m105945_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Guid_t641 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m105945_GenericMethod;
// System.Int32 System.IComparable`1<System.Guid>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m105945_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t4127_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Guid_t641/* invoker_method */
	, IComparable_1_t4127_IComparable_1_CompareTo_m105945_ParameterInfos/* parameters */
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
	, &IComparable_1_CompareTo_m105945_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t4127_MethodInfos[] =
{
	&IComparable_1_CompareTo_m105945_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t4127_0_0_0;
extern Il2CppType IComparable_1_t4127_1_0_0;
struct IComparable_1_t4127;
extern Il2CppGenericClass IComparable_1_t4127_GenericClass;
TypeInfo IComparable_1_t4127_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t4127_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t4127_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t4127_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t4127_0_0_0/* byval_arg */
	, &IComparable_1_t4127_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t4127_GenericClass/* generic_class */
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
extern TypeInfo IEquatable_1_t4128_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Guid>::Equals(T)
// Metadata Definition System.IEquatable`1<System.Guid>
extern Il2CppType Guid_t641_0_0_0;
static ParameterInfo IEquatable_1_t4128_IEquatable_1_Equals_m105946_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Guid_t641 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m105946_GenericMethod;
// System.Boolean System.IEquatable`1<System.Guid>::Equals(T)
MethodInfo IEquatable_1_Equals_m105946_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t4128_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Guid_t641/* invoker_method */
	, IEquatable_1_t4128_IEquatable_1_Equals_m105946_ParameterInfos/* parameters */
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
	, &IEquatable_1_Equals_m105946_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t4128_MethodInfos[] =
{
	&IEquatable_1_Equals_m105946_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t4128_0_0_0;
extern Il2CppType IEquatable_1_t4128_1_0_0;
struct IEquatable_1_t4128;
extern Il2CppGenericClass IEquatable_1_t4128_GenericClass;
TypeInfo IEquatable_1_t4128_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t4128_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t4128_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t4128_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t4128_0_0_0/* byval_arg */
	, &IEquatable_1_t4128_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t4128_GenericClass/* generic_class */
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
extern TypeInfo GenericComparer_1_t4125_il2cpp_TypeInfo;

extern TypeInfo Guid_t641_il2cpp_TypeInfo;
extern MethodInfo Comparer_1__ctor_m79349_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m105945_MethodInfo;


// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern MethodInfo GenericComparer_1__ctor_m13502_MethodInfo;
 void GenericComparer_1__ctor_m13502 (GenericComparer_1_t4125 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m79349(__this, /*hidden argument*/&Comparer_1__ctor_m79349_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern MethodInfo GenericComparer_1_Compare_m79348_MethodInfo;
 int32_t GenericComparer_1_Compare_m79348 (GenericComparer_1_t4125 * __this, Guid_t641  ___x, Guid_t641  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		Guid_t641  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Guid_t641  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		Guid_t641  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &(*(&___x))));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, Guid_t641  >::Invoke(&IComparable_1_CompareTo_m105945_MethodInfo, Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.Guid>
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1__ctor_m13502_GenericMethod;
// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
MethodInfo GenericComparer_1__ctor_m13502_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericComparer_1__ctor_m13502/* method */
	, &GenericComparer_1_t4125_il2cpp_TypeInfo/* declaring_type */
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
	, &GenericComparer_1__ctor_m13502_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t641_0_0_0;
extern Il2CppType Guid_t641_0_0_0;
static ParameterInfo GenericComparer_1_t4125_GenericComparer_1_Compare_m79348_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Guid_t641_Guid_t641 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1_Compare_m79348_GenericMethod;
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
MethodInfo GenericComparer_1_Compare_m79348_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&GenericComparer_1_Compare_m79348/* method */
	, &GenericComparer_1_t4125_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Guid_t641_Guid_t641/* invoker_method */
	, GenericComparer_1_t4125_GenericComparer_1_Compare_m79348_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericComparer_1_Compare_m79348_GenericMethod/* genericMethod */

};
static MethodInfo* GenericComparer_1_t4125_MethodInfos[] =
{
	&GenericComparer_1__ctor_m13502_MethodInfo,
	&GenericComparer_1_Compare_m79348_MethodInfo,
	NULL
};
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m79351_MethodInfo;
static MethodInfo* GenericComparer_1_t4125_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&GenericComparer_1_Compare_m79348_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m79351_MethodInfo,
	&GenericComparer_1_Compare_m79348_MethodInfo,
};
extern TypeInfo IComparer_1_t15969_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericComparer_1_t4125_InterfacesOffsets[] = 
{
	{ &IComparer_1_t15969_il2cpp_TypeInfo, 4},
	{ &IComparer_t2759_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericComparer_1_t4125_0_0_0;
extern Il2CppType GenericComparer_1_t4125_1_0_0;
extern TypeInfo Comparer_1_t11100_il2cpp_TypeInfo;
struct GenericComparer_1_t4125;
extern Il2CppGenericClass GenericComparer_1_t4125_GenericClass;
TypeInfo GenericComparer_1_t4125_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericComparer_1_t4125_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t11100_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericComparer_1_t4125_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericComparer_1_t4125_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericComparer_1_t4125_il2cpp_TypeInfo/* cast_class */
	, &GenericComparer_1_t4125_0_0_0/* byval_arg */
	, &GenericComparer_1_t4125_1_0_0/* this_arg */
	, GenericComparer_1_t4125_InterfacesOffsets/* interface_offsets */
	, &GenericComparer_1_t4125_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericComparer_1_t4125)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo DefaultComparer_t11101_il2cpp_TypeInfo;
extern MethodInfo DefaultComparer__ctor_m79353_MethodInfo;
extern MethodInfo Comparer_1_Compare_m105947_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.ctor()
 void Comparer_1__ctor_m79349 (Comparer_1_t11100 * __this, MethodInfo* method){
	{
		Object__ctor_m1366(__this, /*hidden argument*/&Object__ctor_m1366_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.cctor()
extern MethodInfo Comparer_1__cctor_m79350_MethodInfo;
 void Comparer_1__cctor_m79350 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t11101 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t11101 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t11101_il2cpp_TypeInfo));
	DefaultComparer__ctor_m79353(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m79353_MethodInfo);
	((Comparer_1_t11100_StaticFields*)InitializedTypeInfo(&Comparer_1_t11100_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::System.Collections.IComparer.Compare(System.Object,System.Object)
 int32_t Comparer_1_System_Collections_IComparer_Compare_m79351 (Comparer_1_t11100 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if (___x)
		{
			goto IL_000b;
		}
	}
	{
		if (___y)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (___y)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((Object_t *)IsInst(___x, InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((Object_t *)IsInst(___y, InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, Guid_t641 , Guid_t641  >::Invoke(&Comparer_1_Compare_m105947_MethodInfo, __this, ((*(Guid_t641 *)((Guid_t641 *)UnBox (___x, InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo))))), ((*(Guid_t641 *)((Guid_t641 *)UnBox (___y, InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo))))));
		return L_0;
	}

IL_0033:
	{
		ArgumentException_t392 * L_1 = (ArgumentException_t392 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t392_il2cpp_TypeInfo));
		ArgumentException__ctor_m5657(L_1, /*hidden argument*/&ArgumentException__ctor_m5657_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Guid>::get_Default()
extern MethodInfo Comparer_1_get_Default_m79352_MethodInfo;
 Comparer_1_t11100 * Comparer_1_get_Default_m79352 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Comparer_1_t11100_il2cpp_TypeInfo));
		return (((Comparer_1_t11100_StaticFields*)InitializedTypeInfo(&Comparer_1_t11100_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.Guid>
extern Il2CppType Comparer_1_t11100_0_0_49;
FieldInfo Comparer_1_t11100_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &Comparer_1_t11100_0_0_49/* type */
	, &Comparer_1_t11100_il2cpp_TypeInfo/* parent */
	, offsetof(Comparer_1_t11100_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Comparer_1_t11100_FieldInfos[] =
{
	&Comparer_1_t11100_____default_0_FieldInfo,
	NULL
};
static PropertyInfo Comparer_1_t11100____Default_PropertyInfo = 
{
	&Comparer_1_t11100_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &Comparer_1_get_Default_m79352_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Comparer_1_t11100_PropertyInfos[] =
{
	&Comparer_1_t11100____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__ctor_m79349_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.ctor()
MethodInfo Comparer_1__ctor_m79349_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Comparer_1__ctor_m79349/* method */
	, &Comparer_1_t11100_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1__ctor_m79349_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__cctor_m79350_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.cctor()
MethodInfo Comparer_1__cctor_m79350_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Comparer_1__cctor_m79350/* method */
	, &Comparer_1_t11100_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1__cctor_m79350_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Comparer_1_t11100_Comparer_1_System_Collections_IComparer_Compare_m79351_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m79351_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::System.Collections.IComparer.Compare(System.Object,System.Object)
MethodInfo Comparer_1_System_Collections_IComparer_Compare_m79351_MethodInfo = 
{
	"System.Collections.IComparer.Compare"/* name */
	, (methodPointerType)&Comparer_1_System_Collections_IComparer_Compare_m79351/* method */
	, &Comparer_1_t11100_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t_Object_t/* invoker_method */
	, Comparer_1_t11100_Comparer_1_System_Collections_IComparer_Compare_m79351_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_System_Collections_IComparer_Compare_m79351_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t641_0_0_0;
extern Il2CppType Guid_t641_0_0_0;
static ParameterInfo Comparer_1_t11100_Comparer_1_Compare_m105947_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Guid_t641_Guid_t641 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_Compare_m105947_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T)
MethodInfo Comparer_1_Compare_m105947_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &Comparer_1_t11100_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Guid_t641_Guid_t641/* invoker_method */
	, Comparer_1_t11100_Comparer_1_Compare_m105947_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_Compare_m105947_GenericMethod/* genericMethod */

};
extern Il2CppType Comparer_1_t11100_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_get_Default_m79352_GenericMethod;
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Guid>::get_Default()
MethodInfo Comparer_1_get_Default_m79352_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&Comparer_1_get_Default_m79352/* method */
	, &Comparer_1_t11100_il2cpp_TypeInfo/* declaring_type */
	, &Comparer_1_t11100_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_get_Default_m79352_GenericMethod/* genericMethod */

};
static MethodInfo* Comparer_1_t11100_MethodInfos[] =
{
	&Comparer_1__ctor_m79349_MethodInfo,
	&Comparer_1__cctor_m79350_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m79351_MethodInfo,
	&Comparer_1_Compare_m105947_MethodInfo,
	&Comparer_1_get_Default_m79352_MethodInfo,
	NULL
};
static MethodInfo* Comparer_1_t11100_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&Comparer_1_Compare_m105947_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m79351_MethodInfo,
	NULL,
};
static TypeInfo* Comparer_1_t11100_InterfacesTypeInfos[] = 
{
	&IComparer_1_t15969_il2cpp_TypeInfo,
	&IComparer_t2759_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair Comparer_1_t11100_InterfacesOffsets[] = 
{
	{ &IComparer_1_t15969_il2cpp_TypeInfo, 4},
	{ &IComparer_t2759_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Comparer_1_t11100_0_0_0;
extern Il2CppType Comparer_1_t11100_1_0_0;
struct Comparer_1_t11100;
extern Il2CppGenericClass Comparer_1_t11100_GenericClass;
TypeInfo Comparer_1_t11100_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, Comparer_1_t11100_MethodInfos/* methods */
	, Comparer_1_t11100_PropertyInfos/* properties */
	, Comparer_1_t11100_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Comparer_1_t11100_il2cpp_TypeInfo/* element_class */
	, Comparer_1_t11100_InterfacesTypeInfos/* implemented_interfaces */
	, Comparer_1_t11100_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Comparer_1_t11100_il2cpp_TypeInfo/* cast_class */
	, &Comparer_1_t11100_0_0_0/* byval_arg */
	, &Comparer_1_t11100_1_0_0/* this_arg */
	, Comparer_1_t11100_InterfacesOffsets/* interface_offsets */
	, &Comparer_1_t11100_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Comparer_1_t11100)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Comparer_1_t11100_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.Guid>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.Guid>
extern Il2CppType Guid_t641_0_0_0;
extern Il2CppType Guid_t641_0_0_0;
static ParameterInfo IComparer_1_t15969_IComparer_1_Compare_m105948_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Guid_t641_Guid_t641 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparer_1_Compare_m105948_GenericMethod;
// System.Int32 System.Collections.Generic.IComparer`1<System.Guid>::Compare(T,T)
MethodInfo IComparer_1_Compare_m105948_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t15969_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Guid_t641_Guid_t641/* invoker_method */
	, IComparer_1_t15969_IComparer_1_Compare_m105948_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparer_1_Compare_m105948_GenericMethod/* genericMethod */

};
static MethodInfo* IComparer_1_t15969_MethodInfos[] =
{
	&IComparer_1_Compare_m105948_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t15969_0_0_0;
extern Il2CppType IComparer_1_t15969_1_0_0;
struct IComparer_1_t15969;
extern Il2CppGenericClass IComparer_1_t15969_GenericClass;
TypeInfo IComparer_1_t15969_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t15969_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t15969_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t15969_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t15969_0_0_0/* byval_arg */
	, &IComparer_1_t15969_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t15969_GenericClass/* generic_class */
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



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
 void DefaultComparer__ctor_m79353 (DefaultComparer_t11101 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m79349(__this, /*hidden argument*/&Comparer_1__ctor_m79349_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern MethodInfo DefaultComparer_Compare_m79354_MethodInfo;
 int32_t DefaultComparer_Compare_m79354 (DefaultComparer_t11101 * __this, Guid_t641  ___x, Guid_t641  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		Guid_t641  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Guid_t641  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		Guid_t641  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		Guid_t641  L_6 = ___x;
		Object_t * L_7 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_6);
		if (!((Object_t*)IsInst(L_7, InitializedTypeInfo(&IComparable_1_t4127_il2cpp_TypeInfo))))
		{
			goto IL_003e;
		}
	}
	{
		Guid_t641  L_8 = ___x;
		Object_t * L_9 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_8);
		NullCheck(((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t4127_il2cpp_TypeInfo))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, Guid_t641  >::Invoke(&IComparable_1_CompareTo_m105945_MethodInfo, ((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t4127_il2cpp_TypeInfo))), ___y);
		return L_10;
	}

IL_003e:
	{
		Guid_t641  L_11 = ___x;
		Object_t * L_12 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_11);
		if (!((Object_t *)IsInst(L_12, InitializedTypeInfo(&IComparable_t291_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		Guid_t641  L_13 = ___x;
		Object_t * L_14 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_13);
		Guid_t641  L_15 = ___y;
		Object_t * L_16 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_15);
		NullCheck(((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t291_il2cpp_TypeInfo))));
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m12865_MethodInfo, ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t291_il2cpp_TypeInfo))), L_16);
		return L_17;
	}

IL_0062:
	{
		ArgumentException_t392 * L_18 = (ArgumentException_t392 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t392_il2cpp_TypeInfo));
		ArgumentException__ctor_m1974(L_18, (String_t*) &_stringLiteral2143, /*hidden argument*/&ArgumentException__ctor_m1974_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m79353_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
MethodInfo DefaultComparer__ctor_m79353_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m79353/* method */
	, &DefaultComparer_t11101_il2cpp_TypeInfo/* declaring_type */
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
	, &DefaultComparer__ctor_m79353_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t641_0_0_0;
extern Il2CppType Guid_t641_0_0_0;
static ParameterInfo DefaultComparer_t11101_DefaultComparer_Compare_m79354_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Guid_t641_Guid_t641 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Compare_m79354_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
MethodInfo DefaultComparer_Compare_m79354_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&DefaultComparer_Compare_m79354/* method */
	, &DefaultComparer_t11101_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Guid_t641_Guid_t641/* invoker_method */
	, DefaultComparer_t11101_DefaultComparer_Compare_m79354_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Compare_m79354_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t11101_MethodInfos[] =
{
	&DefaultComparer__ctor_m79353_MethodInfo,
	&DefaultComparer_Compare_m79354_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t11101_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&DefaultComparer_Compare_m79354_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m79351_MethodInfo,
	&DefaultComparer_Compare_m79354_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t11101_InterfacesOffsets[] = 
{
	{ &IComparer_1_t15969_il2cpp_TypeInfo, 4},
	{ &IComparer_t2759_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t11101_0_0_0;
extern Il2CppType DefaultComparer_t11101_1_0_0;
struct DefaultComparer_t11101;
extern Il2CppGenericClass DefaultComparer_t11101_GenericClass;
TypeInfo DefaultComparer_t11101_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t11101_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t11100_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Comparer_1_t3236_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t11101_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t11101_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t11101_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t11101_0_0_0/* byval_arg */
	, &DefaultComparer_t11101_1_0_0/* this_arg */
	, DefaultComparer_t11101_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t11101_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t11101)/* instance_size */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t4126_il2cpp_TypeInfo;

extern MethodInfo EqualityComparer_1__ctor_m79357_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m105946_MethodInfo;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern MethodInfo GenericEqualityComparer_1__ctor_m13503_MethodInfo;
 void GenericEqualityComparer_1__ctor_m13503 (GenericEqualityComparer_1_t4126 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m79357(__this, /*hidden argument*/&EqualityComparer_1__ctor_m79357_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m79355_MethodInfo;
 int32_t GenericEqualityComparer_1_GetHashCode_m79355 (GenericEqualityComparer_1_t4126 * __this, Guid_t641  ___obj, MethodInfo* method){
	{
		Guid_t641  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1357_MethodInfo, Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern MethodInfo GenericEqualityComparer_1_Equals_m79356_MethodInfo;
 bool GenericEqualityComparer_1_Equals_m79356 (GenericEqualityComparer_1_t4126 * __this, Guid_t641  ___x, Guid_t641  ___y, MethodInfo* method){
	{
		Guid_t641  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Guid_t641  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &(*(&___x))));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Guid_t641  >::Invoke(&IEquatable_1_Equals_m105946_MethodInfo, Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m13503_GenericMethod;
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
MethodInfo GenericEqualityComparer_1__ctor_m13503_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericEqualityComparer_1__ctor_m13503/* method */
	, &GenericEqualityComparer_1_t4126_il2cpp_TypeInfo/* declaring_type */
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
	, &GenericEqualityComparer_1__ctor_m13503_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t641_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t4126_GenericEqualityComparer_1_GetHashCode_m79355_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Guid_t641 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m79355_GenericMethod;
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
MethodInfo GenericEqualityComparer_1_GetHashCode_m79355_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_GetHashCode_m79355/* method */
	, &GenericEqualityComparer_1_t4126_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Guid_t641/* invoker_method */
	, GenericEqualityComparer_1_t4126_GenericEqualityComparer_1_GetHashCode_m79355_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1_GetHashCode_m79355_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t641_0_0_0;
extern Il2CppType Guid_t641_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t4126_GenericEqualityComparer_1_Equals_m79356_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Guid_t641_Guid_t641 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m79356_GenericMethod;
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
MethodInfo GenericEqualityComparer_1_Equals_m79356_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_Equals_m79356/* method */
	, &GenericEqualityComparer_1_t4126_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Guid_t641_Guid_t641/* invoker_method */
	, GenericEqualityComparer_1_t4126_GenericEqualityComparer_1_Equals_m79356_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1_Equals_m79356_GenericMethod/* genericMethod */

};
static MethodInfo* GenericEqualityComparer_1_t4126_MethodInfos[] =
{
	&GenericEqualityComparer_1__ctor_m13503_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m79355_MethodInfo,
	&GenericEqualityComparer_1_Equals_m79356_MethodInfo,
	NULL
};
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79360_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79359_MethodInfo;
static MethodInfo* GenericEqualityComparer_1_t4126_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&GenericEqualityComparer_1_Equals_m79356_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m79355_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79360_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79359_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m79355_MethodInfo,
	&GenericEqualityComparer_1_Equals_m79356_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t15970_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericEqualityComparer_1_t4126_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t15970_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t2766_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericEqualityComparer_1_t4126_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t4126_1_0_0;
extern TypeInfo EqualityComparer_1_t11102_il2cpp_TypeInfo;
struct GenericEqualityComparer_1_t4126;
extern Il2CppGenericClass GenericEqualityComparer_1_t4126_GenericClass;
TypeInfo GenericEqualityComparer_1_t4126_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericEqualityComparer_1_t4126_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t11102_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericEqualityComparer_1_t4126_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericEqualityComparer_1_t4126_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericEqualityComparer_1_t4126_il2cpp_TypeInfo/* cast_class */
	, &GenericEqualityComparer_1_t4126_0_0_0/* byval_arg */
	, &GenericEqualityComparer_1_t4126_1_0_0/* this_arg */
	, GenericEqualityComparer_1_t4126_InterfacesOffsets/* interface_offsets */
	, &GenericEqualityComparer_1_t4126_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericEqualityComparer_1_t4126)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo DefaultComparer_t11103_il2cpp_TypeInfo;
extern MethodInfo DefaultComparer__ctor_m79362_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m105949_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m105950_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.ctor()
 void EqualityComparer_1__ctor_m79357 (EqualityComparer_1_t11102 * __this, MethodInfo* method){
	{
		Object__ctor_m1366(__this, /*hidden argument*/&Object__ctor_m1366_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.cctor()
extern MethodInfo EqualityComparer_1__cctor_m79358_MethodInfo;
 void EqualityComparer_1__cctor_m79358 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t11103 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t11103 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t11103_il2cpp_TypeInfo));
	DefaultComparer__ctor_m79362(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m79362_MethodInfo);
	((EqualityComparer_1_t11102_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t11102_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
 int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79359 (EqualityComparer_1_t11102 * __this, Object_t * ___obj, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, Guid_t641  >::Invoke(&EqualityComparer_1_GetHashCode_m105949_MethodInfo, __this, ((*(Guid_t641 *)((Guid_t641 *)UnBox (___obj, InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
 bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79360 (EqualityComparer_1_t11102 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, Guid_t641 , Guid_t641  >::Invoke(&EqualityComparer_1_Equals_m105950_MethodInfo, __this, ((*(Guid_t641 *)((Guid_t641 *)UnBox (___x, InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo))))), ((*(Guid_t641 *)((Guid_t641 *)UnBox (___y, InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Guid>::get_Default()
extern MethodInfo EqualityComparer_1_get_Default_m79361_MethodInfo;
 EqualityComparer_1_t11102 * EqualityComparer_1_get_Default_m79361 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&EqualityComparer_1_t11102_il2cpp_TypeInfo));
		return (((EqualityComparer_1_t11102_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t11102_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Guid>
extern Il2CppType EqualityComparer_1_t11102_0_0_49;
FieldInfo EqualityComparer_1_t11102_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &EqualityComparer_1_t11102_0_0_49/* type */
	, &EqualityComparer_1_t11102_il2cpp_TypeInfo/* parent */
	, offsetof(EqualityComparer_1_t11102_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* EqualityComparer_1_t11102_FieldInfos[] =
{
	&EqualityComparer_1_t11102_____default_0_FieldInfo,
	NULL
};
static PropertyInfo EqualityComparer_1_t11102____Default_PropertyInfo = 
{
	&EqualityComparer_1_t11102_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &EqualityComparer_1_get_Default_m79361_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* EqualityComparer_1_t11102_PropertyInfos[] =
{
	&EqualityComparer_1_t11102____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__ctor_m79357_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.ctor()
MethodInfo EqualityComparer_1__ctor_m79357_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EqualityComparer_1__ctor_m79357/* method */
	, &EqualityComparer_1_t11102_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1__ctor_m79357_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__cctor_m79358_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.cctor()
MethodInfo EqualityComparer_1__cctor_m79358_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&EqualityComparer_1__cctor_m79358/* method */
	, &EqualityComparer_1_t11102_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1__cctor_m79358_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t11102_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79359_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79359_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79359_MethodInfo = 
{
	"System.Collections.IEqualityComparer.GetHashCode"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79359/* method */
	, &EqualityComparer_1_t11102_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, EqualityComparer_1_t11102_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79359_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79359_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t11102_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79360_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79360_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79360_MethodInfo = 
{
	"System.Collections.IEqualityComparer.Equals"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79360/* method */
	, &EqualityComparer_1_t11102_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t_Object_t/* invoker_method */
	, EqualityComparer_1_t11102_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79360_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79360_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t641_0_0_0;
static ParameterInfo EqualityComparer_1_t11102_EqualityComparer_1_GetHashCode_m105949_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Guid_t641 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m105949_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T)
MethodInfo EqualityComparer_1_GetHashCode_m105949_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t11102_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Guid_t641/* invoker_method */
	, EqualityComparer_1_t11102_EqualityComparer_1_GetHashCode_m105949_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_GetHashCode_m105949_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t641_0_0_0;
extern Il2CppType Guid_t641_0_0_0;
static ParameterInfo EqualityComparer_1_t11102_EqualityComparer_1_Equals_m105950_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Guid_t641_Guid_t641 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_Equals_m105950_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T)
MethodInfo EqualityComparer_1_Equals_m105950_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t11102_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Guid_t641_Guid_t641/* invoker_method */
	, EqualityComparer_1_t11102_EqualityComparer_1_Equals_m105950_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_Equals_m105950_GenericMethod/* genericMethod */

};
extern Il2CppType EqualityComparer_1_t11102_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m79361_GenericMethod;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Guid>::get_Default()
MethodInfo EqualityComparer_1_get_Default_m79361_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&EqualityComparer_1_get_Default_m79361/* method */
	, &EqualityComparer_1_t11102_il2cpp_TypeInfo/* declaring_type */
	, &EqualityComparer_1_t11102_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_get_Default_m79361_GenericMethod/* genericMethod */

};
static MethodInfo* EqualityComparer_1_t11102_MethodInfos[] =
{
	&EqualityComparer_1__ctor_m79357_MethodInfo,
	&EqualityComparer_1__cctor_m79358_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79359_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79360_MethodInfo,
	&EqualityComparer_1_GetHashCode_m105949_MethodInfo,
	&EqualityComparer_1_Equals_m105950_MethodInfo,
	&EqualityComparer_1_get_Default_m79361_MethodInfo,
	NULL
};
static MethodInfo* EqualityComparer_1_t11102_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&EqualityComparer_1_Equals_m105950_MethodInfo,
	&EqualityComparer_1_GetHashCode_m105949_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79360_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79359_MethodInfo,
	NULL,
	NULL,
};
static TypeInfo* EqualityComparer_1_t11102_InterfacesTypeInfos[] = 
{
	&IEqualityComparer_1_t15970_il2cpp_TypeInfo,
	&IEqualityComparer_t2766_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair EqualityComparer_1_t11102_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t15970_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t2766_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType EqualityComparer_1_t11102_0_0_0;
extern Il2CppType EqualityComparer_1_t11102_1_0_0;
struct EqualityComparer_1_t11102;
extern Il2CppGenericClass EqualityComparer_1_t11102_GenericClass;
TypeInfo EqualityComparer_1_t11102_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, EqualityComparer_1_t11102_MethodInfos/* methods */
	, EqualityComparer_1_t11102_PropertyInfos/* properties */
	, EqualityComparer_1_t11102_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &EqualityComparer_1_t11102_il2cpp_TypeInfo/* element_class */
	, EqualityComparer_1_t11102_InterfacesTypeInfos/* implemented_interfaces */
	, EqualityComparer_1_t11102_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &EqualityComparer_1_t11102_il2cpp_TypeInfo/* cast_class */
	, &EqualityComparer_1_t11102_0_0_0/* byval_arg */
	, &EqualityComparer_1_t11102_1_0_0/* this_arg */
	, EqualityComparer_1_t11102_InterfacesOffsets/* interface_offsets */
	, &EqualityComparer_1_t11102_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EqualityComparer_1_t11102)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(EqualityComparer_1_t11102_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T)
// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Guid>
extern Il2CppType Guid_t641_0_0_0;
extern Il2CppType Guid_t641_0_0_0;
static ParameterInfo IEqualityComparer_1_t15970_IEqualityComparer_1_Equals_m105951_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Guid_t641_Guid_t641 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m105951_GenericMethod;
// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T)
MethodInfo IEqualityComparer_1_Equals_m105951_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t15970_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Guid_t641_Guid_t641/* invoker_method */
	, IEqualityComparer_1_t15970_IEqualityComparer_1_Equals_m105951_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_Equals_m105951_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t641_0_0_0;
static ParameterInfo IEqualityComparer_1_t15970_IEqualityComparer_1_GetHashCode_m105952_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Guid_t641 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m105952_GenericMethod;
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T)
MethodInfo IEqualityComparer_1_GetHashCode_m105952_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t15970_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Guid_t641/* invoker_method */
	, IEqualityComparer_1_t15970_IEqualityComparer_1_GetHashCode_m105952_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_GetHashCode_m105952_GenericMethod/* genericMethod */

};
static MethodInfo* IEqualityComparer_1_t15970_MethodInfos[] =
{
	&IEqualityComparer_1_Equals_m105951_MethodInfo,
	&IEqualityComparer_1_GetHashCode_m105952_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEqualityComparer_1_t15970_0_0_0;
extern Il2CppType IEqualityComparer_1_t15970_1_0_0;
struct IEqualityComparer_1_t15970;
extern Il2CppGenericClass IEqualityComparer_1_t15970_GenericClass;
TypeInfo IEqualityComparer_1_t15970_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEqualityComparer_1_t15970_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEqualityComparer_1_t15970_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEqualityComparer_1_t15970_il2cpp_TypeInfo/* cast_class */
	, &IEqualityComparer_1_t15970_0_0_0/* byval_arg */
	, &IEqualityComparer_1_t15970_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEqualityComparer_1_t15970_GenericClass/* generic_class */
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
	, 2/* method_count */
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



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
 void DefaultComparer__ctor_m79362 (DefaultComparer_t11103 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m79357(__this, /*hidden argument*/&EqualityComparer_1__ctor_m79357_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern MethodInfo DefaultComparer_GetHashCode_m79363_MethodInfo;
 int32_t DefaultComparer_GetHashCode_m79363 (DefaultComparer_t11103 * __this, Guid_t641  ___obj, MethodInfo* method){
	{
		Guid_t641  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1357_MethodInfo, Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern MethodInfo DefaultComparer_Equals_m79364_MethodInfo;
 bool DefaultComparer_Equals_m79364 (DefaultComparer_t11103 * __this, Guid_t641  ___x, Guid_t641  ___y, MethodInfo* method){
	{
		Guid_t641  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Guid_t641  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Guid_t641  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &L_4);
		NullCheck(Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &(*(&___x))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1356_MethodInfo, Box(InitializedTypeInfo(&Guid_t641_il2cpp_TypeInfo), &(*(&___x))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m79362_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
MethodInfo DefaultComparer__ctor_m79362_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m79362/* method */
	, &DefaultComparer_t11103_il2cpp_TypeInfo/* declaring_type */
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
	, &DefaultComparer__ctor_m79362_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t641_0_0_0;
static ParameterInfo DefaultComparer_t11103_DefaultComparer_GetHashCode_m79363_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Guid_t641 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m79363_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
MethodInfo DefaultComparer_GetHashCode_m79363_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&DefaultComparer_GetHashCode_m79363/* method */
	, &DefaultComparer_t11103_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Guid_t641/* invoker_method */
	, DefaultComparer_t11103_DefaultComparer_GetHashCode_m79363_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_GetHashCode_m79363_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t641_0_0_0;
extern Il2CppType Guid_t641_0_0_0;
static ParameterInfo DefaultComparer_t11103_DefaultComparer_Equals_m79364_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t641_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Guid_t641_Guid_t641 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Equals_m79364_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
MethodInfo DefaultComparer_Equals_m79364_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&DefaultComparer_Equals_m79364/* method */
	, &DefaultComparer_t11103_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Guid_t641_Guid_t641/* invoker_method */
	, DefaultComparer_t11103_DefaultComparer_Equals_m79364_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Equals_m79364_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t11103_MethodInfos[] =
{
	&DefaultComparer__ctor_m79362_MethodInfo,
	&DefaultComparer_GetHashCode_m79363_MethodInfo,
	&DefaultComparer_Equals_m79364_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t11103_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&DefaultComparer_Equals_m79364_MethodInfo,
	&DefaultComparer_GetHashCode_m79363_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m79360_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m79359_MethodInfo,
	&DefaultComparer_GetHashCode_m79363_MethodInfo,
	&DefaultComparer_Equals_m79364_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t11103_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t15970_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t2766_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t11103_0_0_0;
extern Il2CppType DefaultComparer_t11103_1_0_0;
struct DefaultComparer_t11103;
extern Il2CppGenericClass DefaultComparer_t11103_GenericClass;
TypeInfo DefaultComparer_t11103_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t11103_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t11102_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &EqualityComparer_1_t3248_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t11103_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t11103_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t11103_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t11103_0_0_0/* byval_arg */
	, &DefaultComparer_t11103_1_0_0/* this_arg */
	, DefaultComparer_t11103_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t11103_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t11103)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057027/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13398_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>
extern MethodInfo IEnumerator_1_get_Current_m105953_MethodInfo;
static PropertyInfo IEnumerator_1_t13398____Current_PropertyInfo = 
{
	&IEnumerator_1_t13398_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m105953_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13398_PropertyInfos[] =
{
	&IEnumerator_1_t13398____Current_PropertyInfo,
	NULL
};
extern Il2CppType LoaderOptimization_t3666_0_0_0;
extern void* RuntimeInvoker_LoaderOptimization_t3666 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m105953_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>::get_Current()
MethodInfo IEnumerator_1_get_Current_m105953_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13398_il2cpp_TypeInfo/* declaring_type */
	, &LoaderOptimization_t3666_0_0_0/* return_type */
	, RuntimeInvoker_LoaderOptimization_t3666/* invoker_method */
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
	, &IEnumerator_1_get_Current_m105953_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13398_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m105953_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13398_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13398_0_0_0;
extern Il2CppType IEnumerator_1_t13398_1_0_0;
struct IEnumerator_1_t13398;
extern Il2CppGenericClass IEnumerator_1_t13398_GenericClass;
TypeInfo IEnumerator_1_t13398_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13398_MethodInfos/* methods */
	, IEnumerator_1_t13398_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13398_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13398_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13398_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13398_0_0_0/* byval_arg */
	, &IEnumerator_1_t13398_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13398_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t11104_il2cpp_TypeInfo;

extern TypeInfo LoaderOptimization_t3666_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m79370_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisLoaderOptimization_t3666_m93013_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.LoaderOptimization>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.LoaderOptimization>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisLoaderOptimization_t3666_m93013 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m79365_MethodInfo;
 void InternalEnumerator_1__ctor_m79365 (InternalEnumerator_1_t11104 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79366_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79366 (InternalEnumerator_1_t11104 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.LoaderOptimization>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79367_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79367 (InternalEnumerator_1_t11104 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m79370(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m79370_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&LoaderOptimization_t3666_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m79368_MethodInfo;
 void InternalEnumerator_1_Dispose_m79368 (InternalEnumerator_1_t11104 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.LoaderOptimization>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m79369_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m79369 (InternalEnumerator_1_t11104 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.LoaderOptimization>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m79370 (InternalEnumerator_1_t11104 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisLoaderOptimization_t3666_m93013(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisLoaderOptimization_t3666_m93013_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.LoaderOptimization>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t11104____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t11104_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11104, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t11104____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t11104_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11104, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t11104_FieldInfos[] =
{
	&InternalEnumerator_1_t11104____array_0_FieldInfo,
	&InternalEnumerator_1_t11104____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t11104____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11104_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79367_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t11104____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11104_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m79370_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t11104_PropertyInfos[] =
{
	&InternalEnumerator_1_t11104____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t11104____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t11104_InternalEnumerator_1__ctor_m79365_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m79365_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m79365_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m79365/* method */
	, &InternalEnumerator_1_t11104_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t11104_InternalEnumerator_1__ctor_m79365_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m79365_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79366_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79366_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79366/* method */
	, &InternalEnumerator_1_t11104_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79366_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79367_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.LoaderOptimization>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79367_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79367/* method */
	, &InternalEnumerator_1_t11104_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79367_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m79368_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m79368_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m79368/* method */
	, &InternalEnumerator_1_t11104_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m79368_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m79369_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.LoaderOptimization>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m79369_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m79369/* method */
	, &InternalEnumerator_1_t11104_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m79369_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimization_t3666_0_0_0;
extern void* RuntimeInvoker_LoaderOptimization_t3666 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m79370_GenericMethod;
// T System.Array/InternalEnumerator`1<System.LoaderOptimization>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m79370_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m79370/* method */
	, &InternalEnumerator_1_t11104_il2cpp_TypeInfo/* declaring_type */
	, &LoaderOptimization_t3666_0_0_0/* return_type */
	, RuntimeInvoker_LoaderOptimization_t3666/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m79370_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t11104_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m79365_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79366_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79367_MethodInfo,
	&InternalEnumerator_1_Dispose_m79368_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79369_MethodInfo,
	&InternalEnumerator_1_get_Current_m79370_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t11104_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79367_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79366_MethodInfo,
	&InternalEnumerator_1_Dispose_m79368_MethodInfo,
	&InternalEnumerator_1_get_Current_m79370_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t11104_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13398_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t11104_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13398_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t11104_0_0_0;
extern Il2CppType InternalEnumerator_1_t11104_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t11104_GenericClass;
TypeInfo InternalEnumerator_1_t11104_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t11104_MethodInfos/* methods */
	, InternalEnumerator_1_t11104_PropertyInfos/* properties */
	, InternalEnumerator_1_t11104_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t11104_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t11104_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t11104_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t11104_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t11104_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t11104_1_0_0/* this_arg */
	, InternalEnumerator_1_t11104_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t11104_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t11104)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t15102_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.LoaderOptimization>
extern MethodInfo ICollection_1_get_Count_m105954_MethodInfo;
static PropertyInfo ICollection_1_t15102____Count_PropertyInfo = 
{
	&ICollection_1_t15102_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m105954_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m105955_MethodInfo;
static PropertyInfo ICollection_1_t15102____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t15102_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m105955_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t15102_PropertyInfos[] =
{
	&ICollection_1_t15102____Count_PropertyInfo,
	&ICollection_1_t15102____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m105954_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_Count()
MethodInfo ICollection_1_get_Count_m105954_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t15102_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m105954_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m105955_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m105955_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t15102_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m105955_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimization_t3666_0_0_0;
extern Il2CppType LoaderOptimization_t3666_0_0_0;
static ParameterInfo ICollection_1_t15102_ICollection_1_Add_m105956_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t3666_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m105956_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Add(T)
MethodInfo ICollection_1_Add_m105956_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t15102_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t15102_ICollection_1_Add_m105956_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m105956_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m105957_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Clear()
MethodInfo ICollection_1_Clear_m105957_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t15102_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m105957_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimization_t3666_0_0_0;
static ParameterInfo ICollection_1_t15102_ICollection_1_Contains_m105958_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t3666_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m105958_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Contains(T)
MethodInfo ICollection_1_Contains_m105958_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t15102_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15102_ICollection_1_Contains_m105958_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m105958_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimizationU5BU5D_t11334_0_0_0;
extern Il2CppType LoaderOptimizationU5BU5D_t11334_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t15102_ICollection_1_CopyTo_m105959_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimizationU5BU5D_t11334_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m105959_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m105959_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t15102_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t15102_ICollection_1_CopyTo_m105959_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m105959_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimization_t3666_0_0_0;
static ParameterInfo ICollection_1_t15102_ICollection_1_Remove_m105960_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t3666_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m105960_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Remove(T)
MethodInfo ICollection_1_Remove_m105960_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t15102_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15102_ICollection_1_Remove_m105960_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m105960_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t15102_MethodInfos[] =
{
	&ICollection_1_get_Count_m105954_MethodInfo,
	&ICollection_1_get_IsReadOnly_m105955_MethodInfo,
	&ICollection_1_Add_m105956_MethodInfo,
	&ICollection_1_Clear_m105957_MethodInfo,
	&ICollection_1_Contains_m105958_MethodInfo,
	&ICollection_1_CopyTo_m105959_MethodInfo,
	&ICollection_1_Remove_m105960_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t15104_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t15102_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t15104_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t15102_0_0_0;
extern Il2CppType ICollection_1_t15102_1_0_0;
struct ICollection_1_t15102;
extern Il2CppGenericClass ICollection_1_t15102_GenericClass;
TypeInfo ICollection_1_t15102_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t15102_MethodInfos/* methods */
	, ICollection_1_t15102_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t15102_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t15102_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t15102_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t15102_0_0_0/* byval_arg */
	, &ICollection_1_t15102_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t15102_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>
extern Il2CppType IEnumerator_1_t13398_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m105961_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m105961_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t15104_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13398_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m105961_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t15104_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m105961_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t15104_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t15104_0_0_0;
extern Il2CppType IEnumerable_1_t15104_1_0_0;
struct IEnumerable_1_t15104;
extern Il2CppGenericClass IEnumerable_1_t15104_GenericClass;
TypeInfo IEnumerable_1_t15104_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t15104_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t15104_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t15104_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t15104_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t15104_0_0_0/* byval_arg */
	, &IEnumerable_1_t15104_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t15104_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t15103_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.LoaderOptimization>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.LoaderOptimization>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.LoaderOptimization>
extern MethodInfo IList_1_get_Item_m105962_MethodInfo;
extern MethodInfo IList_1_set_Item_m105963_MethodInfo;
static PropertyInfo IList_1_t15103____Item_PropertyInfo = 
{
	&IList_1_t15103_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m105962_MethodInfo/* get */
	, &IList_1_set_Item_m105963_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t15103_PropertyInfos[] =
{
	&IList_1_t15103____Item_PropertyInfo,
	NULL
};
extern Il2CppType LoaderOptimization_t3666_0_0_0;
static ParameterInfo IList_1_t15103_IList_1_IndexOf_m105964_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t3666_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m105964_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.LoaderOptimization>::IndexOf(T)
MethodInfo IList_1_IndexOf_m105964_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t15103_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15103_IList_1_IndexOf_m105964_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m105964_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType LoaderOptimization_t3666_0_0_0;
static ParameterInfo IList_1_t15103_IList_1_Insert_m105965_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t3666_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m105965_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m105965_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t15103_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15103_IList_1_Insert_m105965_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m105965_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15103_IList_1_RemoveAt_m105966_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m105966_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m105966_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t15103_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t15103_IList_1_RemoveAt_m105966_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m105966_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15103_IList_1_get_Item_m105962_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType LoaderOptimization_t3666_0_0_0;
extern void* RuntimeInvoker_LoaderOptimization_t3666_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m105962_GenericMethod;
// T System.Collections.Generic.IList`1<System.LoaderOptimization>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m105962_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t15103_il2cpp_TypeInfo/* declaring_type */
	, &LoaderOptimization_t3666_0_0_0/* return_type */
	, RuntimeInvoker_LoaderOptimization_t3666_Int32_t23/* invoker_method */
	, IList_1_t15103_IList_1_get_Item_m105962_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m105962_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType LoaderOptimization_t3666_0_0_0;
static ParameterInfo IList_1_t15103_IList_1_set_Item_m105963_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t3666_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m105963_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m105963_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t15103_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15103_IList_1_set_Item_m105963_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m105963_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t15103_MethodInfos[] =
{
	&IList_1_IndexOf_m105964_MethodInfo,
	&IList_1_Insert_m105965_MethodInfo,
	&IList_1_RemoveAt_m105966_MethodInfo,
	&IList_1_get_Item_m105962_MethodInfo,
	&IList_1_set_Item_m105963_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t15103_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t15102_il2cpp_TypeInfo,
	&IEnumerable_1_t15104_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t15103_0_0_0;
extern Il2CppType IList_1_t15103_1_0_0;
struct IList_1_t15103;
extern Il2CppGenericClass IList_1_t15103_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t15103_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t15103_MethodInfos/* methods */
	, IList_1_t15103_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t15103_il2cpp_TypeInfo/* element_class */
	, IList_1_t15103_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t15103_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t15103_0_0_0/* byval_arg */
	, &IList_1_t15103_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t15103_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13400_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>
extern MethodInfo IEnumerator_1_get_Current_m105967_MethodInfo;
static PropertyInfo IEnumerator_1_t13400____Current_PropertyInfo = 
{
	&IEnumerator_1_t13400_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m105967_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13400_PropertyInfos[] =
{
	&IEnumerator_1_t13400____Current_PropertyInfo,
	NULL
};
extern Il2CppType NonSerializedAttribute_t3680_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m105967_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m105967_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13400_il2cpp_TypeInfo/* declaring_type */
	, &NonSerializedAttribute_t3680_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m105967_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13400_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m105967_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13400_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13400_0_0_0;
extern Il2CppType IEnumerator_1_t13400_1_0_0;
struct IEnumerator_1_t13400;
extern Il2CppGenericClass IEnumerator_1_t13400_GenericClass;
TypeInfo IEnumerator_1_t13400_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13400_MethodInfos/* methods */
	, IEnumerator_1_t13400_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13400_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13400_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13400_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13400_0_0_0/* byval_arg */
	, &IEnumerator_1_t13400_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13400_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t11105_il2cpp_TypeInfo;

extern TypeInfo NonSerializedAttribute_t3680_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m79376_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNonSerializedAttribute_t3680_m93024_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.NonSerializedAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.NonSerializedAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisNonSerializedAttribute_t3680_m93024(__this, p0, method) (NonSerializedAttribute_t3680 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.NonSerializedAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t11105____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t11105_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11105, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t11105____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t11105_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11105, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t11105_FieldInfos[] =
{
	&InternalEnumerator_1_t11105____array_0_FieldInfo,
	&InternalEnumerator_1_t11105____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79373_MethodInfo;
static PropertyInfo InternalEnumerator_1_t11105____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11105_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79373_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t11105____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11105_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m79376_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t11105_PropertyInfos[] =
{
	&InternalEnumerator_1_t11105____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t11105____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t11105_InternalEnumerator_1__ctor_m79371_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m79371_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m79371_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t11105_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t11105_InternalEnumerator_1__ctor_m79371_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m79371_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79372_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79372_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t11105_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79372_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79373_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79373_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t11105_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79373_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m79374_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m79374_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t11105_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m79374_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m79375_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m79375_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t11105_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m79375_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttribute_t3680_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m79376_GenericMethod;
// T System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m79376_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t11105_il2cpp_TypeInfo/* declaring_type */
	, &NonSerializedAttribute_t3680_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m79376_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t11105_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m79371_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79372_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79373_MethodInfo,
	&InternalEnumerator_1_Dispose_m79374_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79375_MethodInfo,
	&InternalEnumerator_1_get_Current_m79376_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m79375_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79372_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m79374_MethodInfo;
static MethodInfo* InternalEnumerator_1_t11105_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79373_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79375_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79372_MethodInfo,
	&InternalEnumerator_1_Dispose_m79374_MethodInfo,
	&InternalEnumerator_1_get_Current_m79376_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t11105_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13400_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t11105_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13400_il2cpp_TypeInfo, 8},
};
extern TypeInfo NonSerializedAttribute_t3680_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t11105_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m79376_MethodInfo/* Method Usage */,
	&NonSerializedAttribute_t3680_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisNonSerializedAttribute_t3680_m93024_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t11105_0_0_0;
extern Il2CppType InternalEnumerator_1_t11105_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t11105_GenericClass;
TypeInfo InternalEnumerator_1_t11105_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t11105_MethodInfos/* methods */
	, InternalEnumerator_1_t11105_PropertyInfos/* properties */
	, InternalEnumerator_1_t11105_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t11105_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t11105_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t11105_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t11105_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t11105_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t11105_1_0_0/* this_arg */
	, InternalEnumerator_1_t11105_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t11105_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t11105_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t11105)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t15105_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>
extern MethodInfo ICollection_1_get_Count_m105968_MethodInfo;
static PropertyInfo ICollection_1_t15105____Count_PropertyInfo = 
{
	&ICollection_1_t15105_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m105968_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m105969_MethodInfo;
static PropertyInfo ICollection_1_t15105____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t15105_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m105969_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t15105_PropertyInfos[] =
{
	&ICollection_1_t15105____Count_PropertyInfo,
	&ICollection_1_t15105____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m105968_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m105968_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t15105_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m105968_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m105969_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m105969_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t15105_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m105969_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttribute_t3680_0_0_0;
extern Il2CppType NonSerializedAttribute_t3680_0_0_0;
static ParameterInfo ICollection_1_t15105_ICollection_1_Add_m105970_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t3680_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m105970_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Add(T)
MethodInfo ICollection_1_Add_m105970_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t15105_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t15105_ICollection_1_Add_m105970_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m105970_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m105971_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Clear()
MethodInfo ICollection_1_Clear_m105971_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t15105_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m105971_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttribute_t3680_0_0_0;
static ParameterInfo ICollection_1_t15105_ICollection_1_Contains_m105972_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t3680_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m105972_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m105972_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t15105_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t15105_ICollection_1_Contains_m105972_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m105972_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttributeU5BU5D_t11335_0_0_0;
extern Il2CppType NonSerializedAttributeU5BU5D_t11335_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t15105_ICollection_1_CopyTo_m105973_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttributeU5BU5D_t11335_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m105973_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m105973_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t15105_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t15105_ICollection_1_CopyTo_m105973_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m105973_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttribute_t3680_0_0_0;
static ParameterInfo ICollection_1_t15105_ICollection_1_Remove_m105974_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t3680_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m105974_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m105974_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t15105_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t15105_ICollection_1_Remove_m105974_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m105974_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t15105_MethodInfos[] =
{
	&ICollection_1_get_Count_m105968_MethodInfo,
	&ICollection_1_get_IsReadOnly_m105969_MethodInfo,
	&ICollection_1_Add_m105970_MethodInfo,
	&ICollection_1_Clear_m105971_MethodInfo,
	&ICollection_1_Contains_m105972_MethodInfo,
	&ICollection_1_CopyTo_m105973_MethodInfo,
	&ICollection_1_Remove_m105974_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t15107_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t15105_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t15107_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t15105_0_0_0;
extern Il2CppType ICollection_1_t15105_1_0_0;
struct ICollection_1_t15105;
extern Il2CppGenericClass ICollection_1_t15105_GenericClass;
TypeInfo ICollection_1_t15105_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t15105_MethodInfos/* methods */
	, ICollection_1_t15105_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t15105_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t15105_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t15105_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t15105_0_0_0/* byval_arg */
	, &ICollection_1_t15105_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t15105_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>
extern Il2CppType IEnumerator_1_t13400_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m105975_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m105975_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t15107_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13400_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m105975_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t15107_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m105975_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t15107_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t15107_0_0_0;
extern Il2CppType IEnumerable_1_t15107_1_0_0;
struct IEnumerable_1_t15107;
extern Il2CppGenericClass IEnumerable_1_t15107_GenericClass;
TypeInfo IEnumerable_1_t15107_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t15107_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t15107_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t15107_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t15107_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t15107_0_0_0/* byval_arg */
	, &IEnumerable_1_t15107_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t15107_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t15106_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.NonSerializedAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.NonSerializedAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.NonSerializedAttribute>
extern MethodInfo IList_1_get_Item_m105976_MethodInfo;
extern MethodInfo IList_1_set_Item_m105977_MethodInfo;
static PropertyInfo IList_1_t15106____Item_PropertyInfo = 
{
	&IList_1_t15106_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m105976_MethodInfo/* get */
	, &IList_1_set_Item_m105977_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t15106_PropertyInfos[] =
{
	&IList_1_t15106____Item_PropertyInfo,
	NULL
};
extern Il2CppType NonSerializedAttribute_t3680_0_0_0;
static ParameterInfo IList_1_t15106_IList_1_IndexOf_m105978_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t3680_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m105978_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.NonSerializedAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m105978_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t15106_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t15106_IList_1_IndexOf_m105978_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m105978_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType NonSerializedAttribute_t3680_0_0_0;
static ParameterInfo IList_1_t15106_IList_1_Insert_m105979_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t3680_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m105979_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m105979_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t15106_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t15106_IList_1_Insert_m105979_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m105979_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15106_IList_1_RemoveAt_m105980_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m105980_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m105980_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t15106_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t15106_IList_1_RemoveAt_m105980_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m105980_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15106_IList_1_get_Item_m105976_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType NonSerializedAttribute_t3680_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m105976_GenericMethod;
// T System.Collections.Generic.IList`1<System.NonSerializedAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m105976_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t15106_il2cpp_TypeInfo/* declaring_type */
	, &NonSerializedAttribute_t3680_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t15106_IList_1_get_Item_m105976_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m105976_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType NonSerializedAttribute_t3680_0_0_0;
static ParameterInfo IList_1_t15106_IList_1_set_Item_m105977_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t3680_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m105977_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m105977_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t15106_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t15106_IList_1_set_Item_m105977_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m105977_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t15106_MethodInfos[] =
{
	&IList_1_IndexOf_m105978_MethodInfo,
	&IList_1_Insert_m105979_MethodInfo,
	&IList_1_RemoveAt_m105980_MethodInfo,
	&IList_1_get_Item_m105976_MethodInfo,
	&IList_1_set_Item_m105977_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t15106_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t15105_il2cpp_TypeInfo,
	&IEnumerable_1_t15107_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t15106_0_0_0;
extern Il2CppType IList_1_t15106_1_0_0;
struct IList_1_t15106;
extern Il2CppGenericClass IList_1_t15106_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t15106_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t15106_MethodInfos/* methods */
	, IList_1_t15106_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t15106_il2cpp_TypeInfo/* element_class */
	, IList_1_t15106_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t15106_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t15106_0_0_0/* byval_arg */
	, &IList_1_t15106_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t15106_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13402_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.PlatformID>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.PlatformID>
extern MethodInfo IEnumerator_1_get_Current_m105981_MethodInfo;
static PropertyInfo IEnumerator_1_t13402____Current_PropertyInfo = 
{
	&IEnumerator_1_t13402_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m105981_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13402_PropertyInfos[] =
{
	&IEnumerator_1_t13402____Current_PropertyInfo,
	NULL
};
extern Il2CppType PlatformID_t3685_0_0_0;
extern void* RuntimeInvoker_PlatformID_t3685 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m105981_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.PlatformID>::get_Current()
MethodInfo IEnumerator_1_get_Current_m105981_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13402_il2cpp_TypeInfo/* declaring_type */
	, &PlatformID_t3685_0_0_0/* return_type */
	, RuntimeInvoker_PlatformID_t3685/* invoker_method */
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
	, &IEnumerator_1_get_Current_m105981_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13402_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m105981_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13402_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13402_0_0_0;
extern Il2CppType IEnumerator_1_t13402_1_0_0;
struct IEnumerator_1_t13402;
extern Il2CppGenericClass IEnumerator_1_t13402_GenericClass;
TypeInfo IEnumerator_1_t13402_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13402_MethodInfos/* methods */
	, IEnumerator_1_t13402_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13402_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13402_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13402_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13402_0_0_0/* byval_arg */
	, &IEnumerator_1_t13402_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13402_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t11106_il2cpp_TypeInfo;

extern TypeInfo PlatformID_t3685_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m79382_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPlatformID_t3685_m93035_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.PlatformID>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.PlatformID>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPlatformID_t3685_m93035 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m79377_MethodInfo;
 void InternalEnumerator_1__ctor_m79377 (InternalEnumerator_1_t11106 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79378_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79378 (InternalEnumerator_1_t11106 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.PlatformID>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79379_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79379 (InternalEnumerator_1_t11106 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m79382(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m79382_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PlatformID_t3685_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m79380_MethodInfo;
 void InternalEnumerator_1_Dispose_m79380 (InternalEnumerator_1_t11106 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.PlatformID>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m79381_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m79381 (InternalEnumerator_1_t11106 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.PlatformID>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m79382 (InternalEnumerator_1_t11106 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisPlatformID_t3685_m93035(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPlatformID_t3685_m93035_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.PlatformID>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t11106____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t11106_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11106, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t11106____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t11106_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t11106, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t11106_FieldInfos[] =
{
	&InternalEnumerator_1_t11106____array_0_FieldInfo,
	&InternalEnumerator_1_t11106____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t11106____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11106_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79379_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t11106____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t11106_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m79382_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t11106_PropertyInfos[] =
{
	&InternalEnumerator_1_t11106____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t11106____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t11106_InternalEnumerator_1__ctor_m79377_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m79377_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m79377_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m79377/* method */
	, &InternalEnumerator_1_t11106_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t11106_InternalEnumerator_1__ctor_m79377_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m79377_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79378_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79378_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79378/* method */
	, &InternalEnumerator_1_t11106_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79378_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79379_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.PlatformID>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79379_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79379/* method */
	, &InternalEnumerator_1_t11106_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79379_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m79380_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m79380_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m79380/* method */
	, &InternalEnumerator_1_t11106_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m79380_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m79381_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.PlatformID>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m79381_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m79381/* method */
	, &InternalEnumerator_1_t11106_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m79381_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformID_t3685_0_0_0;
extern void* RuntimeInvoker_PlatformID_t3685 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m79382_GenericMethod;
// T System.Array/InternalEnumerator`1<System.PlatformID>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m79382_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m79382/* method */
	, &InternalEnumerator_1_t11106_il2cpp_TypeInfo/* declaring_type */
	, &PlatformID_t3685_0_0_0/* return_type */
	, RuntimeInvoker_PlatformID_t3685/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m79382_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t11106_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m79377_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79378_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79379_MethodInfo,
	&InternalEnumerator_1_Dispose_m79380_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79381_MethodInfo,
	&InternalEnumerator_1_get_Current_m79382_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t11106_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m79379_MethodInfo,
	&InternalEnumerator_1_MoveNext_m79381_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m79378_MethodInfo,
	&InternalEnumerator_1_Dispose_m79380_MethodInfo,
	&InternalEnumerator_1_get_Current_m79382_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t11106_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13402_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t11106_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13402_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t11106_0_0_0;
extern Il2CppType InternalEnumerator_1_t11106_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t11106_GenericClass;
TypeInfo InternalEnumerator_1_t11106_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t11106_MethodInfos/* methods */
	, InternalEnumerator_1_t11106_PropertyInfos/* properties */
	, InternalEnumerator_1_t11106_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t11106_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t11106_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t11106_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t11106_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t11106_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t11106_1_0_0/* this_arg */
	, InternalEnumerator_1_t11106_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t11106_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t11106)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t15108_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.PlatformID>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.PlatformID>
extern MethodInfo ICollection_1_get_Count_m105982_MethodInfo;
static PropertyInfo ICollection_1_t15108____Count_PropertyInfo = 
{
	&ICollection_1_t15108_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m105982_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m105983_MethodInfo;
static PropertyInfo ICollection_1_t15108____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t15108_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m105983_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t15108_PropertyInfos[] =
{
	&ICollection_1_t15108____Count_PropertyInfo,
	&ICollection_1_t15108____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m105982_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.PlatformID>::get_Count()
MethodInfo ICollection_1_get_Count_m105982_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t15108_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m105982_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m105983_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m105983_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t15108_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m105983_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformID_t3685_0_0_0;
extern Il2CppType PlatformID_t3685_0_0_0;
static ParameterInfo ICollection_1_t15108_ICollection_1_Add_m105984_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PlatformID_t3685_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m105984_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::Add(T)
MethodInfo ICollection_1_Add_m105984_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t15108_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t15108_ICollection_1_Add_m105984_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m105984_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m105985_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::Clear()
MethodInfo ICollection_1_Clear_m105985_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t15108_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m105985_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformID_t3685_0_0_0;
static ParameterInfo ICollection_1_t15108_ICollection_1_Contains_m105986_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PlatformID_t3685_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m105986_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::Contains(T)
MethodInfo ICollection_1_Contains_m105986_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t15108_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15108_ICollection_1_Contains_m105986_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m105986_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformIDU5BU5D_t11336_0_0_0;
extern Il2CppType PlatformIDU5BU5D_t11336_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t15108_ICollection_1_CopyTo_m105987_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PlatformIDU5BU5D_t11336_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m105987_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m105987_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t15108_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t15108_ICollection_1_CopyTo_m105987_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m105987_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformID_t3685_0_0_0;
static ParameterInfo ICollection_1_t15108_ICollection_1_Remove_m105988_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PlatformID_t3685_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m105988_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::Remove(T)
MethodInfo ICollection_1_Remove_m105988_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t15108_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t15108_ICollection_1_Remove_m105988_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m105988_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t15108_MethodInfos[] =
{
	&ICollection_1_get_Count_m105982_MethodInfo,
	&ICollection_1_get_IsReadOnly_m105983_MethodInfo,
	&ICollection_1_Add_m105984_MethodInfo,
	&ICollection_1_Clear_m105985_MethodInfo,
	&ICollection_1_Contains_m105986_MethodInfo,
	&ICollection_1_CopyTo_m105987_MethodInfo,
	&ICollection_1_Remove_m105988_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t15110_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t15108_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t15110_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t15108_0_0_0;
extern Il2CppType ICollection_1_t15108_1_0_0;
struct ICollection_1_t15108;
extern Il2CppGenericClass ICollection_1_t15108_GenericClass;
TypeInfo ICollection_1_t15108_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t15108_MethodInfos/* methods */
	, ICollection_1_t15108_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t15108_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t15108_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t15108_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t15108_0_0_0/* byval_arg */
	, &ICollection_1_t15108_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t15108_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.PlatformID>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.PlatformID>
extern Il2CppType IEnumerator_1_t13402_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m105989_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.PlatformID>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m105989_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t15110_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13402_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m105989_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t15110_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m105989_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t15110_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t15110_0_0_0;
extern Il2CppType IEnumerable_1_t15110_1_0_0;
struct IEnumerable_1_t15110;
extern Il2CppGenericClass IEnumerable_1_t15110_GenericClass;
TypeInfo IEnumerable_1_t15110_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t15110_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t15110_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t15110_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t15110_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t15110_0_0_0/* byval_arg */
	, &IEnumerable_1_t15110_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t15110_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t15109_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.PlatformID>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.PlatformID>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.PlatformID>
extern MethodInfo IList_1_get_Item_m105990_MethodInfo;
extern MethodInfo IList_1_set_Item_m105991_MethodInfo;
static PropertyInfo IList_1_t15109____Item_PropertyInfo = 
{
	&IList_1_t15109_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m105990_MethodInfo/* get */
	, &IList_1_set_Item_m105991_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t15109_PropertyInfos[] =
{
	&IList_1_t15109____Item_PropertyInfo,
	NULL
};
extern Il2CppType PlatformID_t3685_0_0_0;
static ParameterInfo IList_1_t15109_IList_1_IndexOf_m105992_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PlatformID_t3685_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m105992_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.PlatformID>::IndexOf(T)
MethodInfo IList_1_IndexOf_m105992_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t15109_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15109_IList_1_IndexOf_m105992_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m105992_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType PlatformID_t3685_0_0_0;
static ParameterInfo IList_1_t15109_IList_1_Insert_m105993_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PlatformID_t3685_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m105993_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m105993_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t15109_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15109_IList_1_Insert_m105993_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m105993_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15109_IList_1_RemoveAt_m105994_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m105994_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m105994_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t15109_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t15109_IList_1_RemoveAt_m105994_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m105994_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t15109_IList_1_get_Item_m105990_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType PlatformID_t3685_0_0_0;
extern void* RuntimeInvoker_PlatformID_t3685_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m105990_GenericMethod;
// T System.Collections.Generic.IList`1<System.PlatformID>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m105990_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t15109_il2cpp_TypeInfo/* declaring_type */
	, &PlatformID_t3685_0_0_0/* return_type */
	, RuntimeInvoker_PlatformID_t3685_Int32_t23/* invoker_method */
	, IList_1_t15109_IList_1_get_Item_m105990_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m105990_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType PlatformID_t3685_0_0_0;
static ParameterInfo IList_1_t15109_IList_1_set_Item_m105991_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PlatformID_t3685_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m105991_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m105991_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t15109_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t15109_IList_1_set_Item_m105991_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m105991_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t15109_MethodInfos[] =
{
	&IList_1_IndexOf_m105992_MethodInfo,
	&IList_1_Insert_m105993_MethodInfo,
	&IList_1_RemoveAt_m105994_MethodInfo,
	&IList_1_get_Item_m105990_MethodInfo,
	&IList_1_set_Item_m105991_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t15109_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t15108_il2cpp_TypeInfo,
	&IEnumerable_1_t15110_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t15109_0_0_0;
extern Il2CppType IList_1_t15109_1_0_0;
struct IList_1_t15109;
extern Il2CppGenericClass IList_1_t15109_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t15109_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t15109_MethodInfos/* methods */
	, IList_1_t15109_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t15109_il2cpp_TypeInfo/* element_class */
	, IList_1_t15109_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t15109_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t15109_0_0_0/* byval_arg */
	, &IList_1_t15109_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t15109_GenericClass/* generic_class */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
