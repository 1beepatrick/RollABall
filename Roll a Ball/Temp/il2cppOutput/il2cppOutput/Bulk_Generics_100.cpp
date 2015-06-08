#include "il2cpp_precompiled_header.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10930_il2cpp_TypeInfo;

extern TypeInfo ExtenderType_t3180_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t826_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78282_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m3120_MethodInfo;
extern MethodInfo Array_get_Length_m7045_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisExtenderType_t3180_m91357_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisExtenderType_t3180_m91357 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78277_MethodInfo;
 void InternalEnumerator_1__ctor_m78277 (InternalEnumerator_1_t10930 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78278_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78278 (InternalEnumerator_1_t10930 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78279_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78279 (InternalEnumerator_1_t10930 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78282(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78282_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ExtenderType_t3180_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78280_MethodInfo;
 void InternalEnumerator_1_Dispose_m78280 (InternalEnumerator_1_t10930 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78281_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78281 (InternalEnumerator_1_t10930 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78282 (InternalEnumerator_1_t10930 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisExtenderType_t3180_m91357(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisExtenderType_t3180_m91357_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10930____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10930_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10930, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10930____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10930_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10930, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10930_FieldInfos[] =
{
	&InternalEnumerator_1_t10930____array_0_FieldInfo,
	&InternalEnumerator_1_t10930____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10930____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10930_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78279_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10930____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10930_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78282_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10930_PropertyInfos[] =
{
	&InternalEnumerator_1_t10930____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10930____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10930_InternalEnumerator_1__ctor_m78277_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78277_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78277_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78277/* method */
	, &InternalEnumerator_1_t10930_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10930_InternalEnumerator_1__ctor_m78277_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78277_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78278_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78278_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78278/* method */
	, &InternalEnumerator_1_t10930_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78278_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78279_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78279_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78279/* method */
	, &InternalEnumerator_1_t10930_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78279_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78280_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78280_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78280/* method */
	, &InternalEnumerator_1_t10930_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78280_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78281_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78281_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78281/* method */
	, &InternalEnumerator_1_t10930_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78281_GenericMethod/* genericMethod */

};
extern Il2CppType ExtenderType_t3180_0_0_0;
extern void* RuntimeInvoker_ExtenderType_t3180 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78282_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78282_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78282/* method */
	, &InternalEnumerator_1_t10930_il2cpp_TypeInfo/* declaring_type */
	, &ExtenderType_t3180_0_0_0/* return_type */
	, RuntimeInvoker_ExtenderType_t3180/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m78282_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10930_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78277_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78278_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78279_MethodInfo,
	&InternalEnumerator_1_Dispose_m78280_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78281_MethodInfo,
	&InternalEnumerator_1_get_Current_m78282_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m59_MethodInfo;
extern MethodInfo Object_Finalize_m50_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m60_MethodInfo;
extern MethodInfo ValueType_ToString_m61_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10930_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78279_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78281_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78278_MethodInfo,
	&InternalEnumerator_1_Dispose_m78280_MethodInfo,
	&InternalEnumerator_1_get_Current_m78282_MethodInfo,
};
extern TypeInfo IEnumerator_t30_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t31_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t13101_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t10930_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13101_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10930_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13101_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10930_0_0_0;
extern Il2CppType InternalEnumerator_1_t10930_1_0_0;
extern TypeInfo ValueType_t26_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t10930_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t10930_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10930_MethodInfos/* methods */
	, InternalEnumerator_1_t10930_PropertyInfos/* properties */
	, InternalEnumerator_1_t10930_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10930_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10930_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10930_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10930_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10930_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10930_1_0_0/* this_arg */
	, InternalEnumerator_1_t10930_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10930_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10930)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14658_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern MethodInfo ICollection_1_get_Count_m103845_MethodInfo;
static PropertyInfo ICollection_1_t14658____Count_PropertyInfo = 
{
	&ICollection_1_t14658_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103845_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103846_MethodInfo;
static PropertyInfo ICollection_1_t14658____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14658_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103846_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14658_PropertyInfos[] =
{
	&ICollection_1_t14658____Count_PropertyInfo,
	&ICollection_1_t14658____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103845_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Count()
MethodInfo ICollection_1_get_Count_m103845_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14658_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103845_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103846_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103846_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14658_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103846_GenericMethod/* genericMethod */

};
extern Il2CppType ExtenderType_t3180_0_0_0;
extern Il2CppType ExtenderType_t3180_0_0_0;
static ParameterInfo ICollection_1_t14658_ICollection_1_Add_m103847_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t3180_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103847_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Add(T)
MethodInfo ICollection_1_Add_m103847_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14658_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14658_ICollection_1_Add_m103847_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103847_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103848_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Clear()
MethodInfo ICollection_1_Clear_m103848_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14658_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103848_GenericMethod/* genericMethod */

};
extern Il2CppType ExtenderType_t3180_0_0_0;
static ParameterInfo ICollection_1_t14658_ICollection_1_Contains_m103849_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t3180_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103849_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Contains(T)
MethodInfo ICollection_1_Contains_m103849_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14658_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14658_ICollection_1_Contains_m103849_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103849_GenericMethod/* genericMethod */

};
extern Il2CppType ExtenderTypeU5BU5D_t11205_0_0_0;
extern Il2CppType ExtenderTypeU5BU5D_t11205_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14658_ICollection_1_CopyTo_m103850_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderTypeU5BU5D_t11205_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103850_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103850_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14658_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14658_ICollection_1_CopyTo_m103850_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103850_GenericMethod/* genericMethod */

};
extern Il2CppType ExtenderType_t3180_0_0_0;
static ParameterInfo ICollection_1_t14658_ICollection_1_Remove_m103851_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t3180_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103851_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Remove(T)
MethodInfo ICollection_1_Remove_m103851_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14658_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14658_ICollection_1_Remove_m103851_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103851_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14658_MethodInfos[] =
{
	&ICollection_1_get_Count_m103845_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103846_MethodInfo,
	&ICollection_1_Add_m103847_MethodInfo,
	&ICollection_1_Clear_m103848_MethodInfo,
	&ICollection_1_Contains_m103849_MethodInfo,
	&ICollection_1_CopyTo_m103850_MethodInfo,
	&ICollection_1_Remove_m103851_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t545_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14660_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14658_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14660_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14658_0_0_0;
extern Il2CppType ICollection_1_t14658_1_0_0;
struct ICollection_1_t14658;
extern Il2CppGenericClass ICollection_1_t14658_GenericClass;
TypeInfo ICollection_1_t14658_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14658_MethodInfos/* methods */
	, ICollection_1_t14658_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14658_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14658_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14658_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14658_0_0_0/* byval_arg */
	, &ICollection_1_t14658_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14658_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern Il2CppType IEnumerator_1_t13101_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103852_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103852_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14660_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13101_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103852_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14660_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103852_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14660_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14660_0_0_0;
extern Il2CppType IEnumerable_1_t14660_1_0_0;
struct IEnumerable_1_t14660;
extern Il2CppGenericClass IEnumerable_1_t14660_GenericClass;
TypeInfo IEnumerable_1_t14660_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14660_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14660_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14660_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14660_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14660_0_0_0/* byval_arg */
	, &IEnumerable_1_t14660_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14660_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14659_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern MethodInfo IList_1_get_Item_m103853_MethodInfo;
extern MethodInfo IList_1_set_Item_m103854_MethodInfo;
static PropertyInfo IList_1_t14659____Item_PropertyInfo = 
{
	&IList_1_t14659_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103853_MethodInfo/* get */
	, &IList_1_set_Item_m103854_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14659_PropertyInfos[] =
{
	&IList_1_t14659____Item_PropertyInfo,
	NULL
};
extern Il2CppType ExtenderType_t3180_0_0_0;
static ParameterInfo IList_1_t14659_IList_1_IndexOf_m103855_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t3180_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103855_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103855_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14659_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14659_IList_1_IndexOf_m103855_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103855_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ExtenderType_t3180_0_0_0;
static ParameterInfo IList_1_t14659_IList_1_Insert_m103856_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t3180_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103856_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103856_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14659_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14659_IList_1_Insert_m103856_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103856_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14659_IList_1_RemoveAt_m103857_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103857_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103857_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14659_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14659_IList_1_RemoveAt_m103857_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103857_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14659_IList_1_get_Item_m103853_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType ExtenderType_t3180_0_0_0;
extern void* RuntimeInvoker_ExtenderType_t3180_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103853_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103853_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14659_il2cpp_TypeInfo/* declaring_type */
	, &ExtenderType_t3180_0_0_0/* return_type */
	, RuntimeInvoker_ExtenderType_t3180_Int32_t23/* invoker_method */
	, IList_1_t14659_IList_1_get_Item_m103853_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103853_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ExtenderType_t3180_0_0_0;
static ParameterInfo IList_1_t14659_IList_1_set_Item_m103854_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t3180_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103854_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103854_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14659_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14659_IList_1_set_Item_m103854_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103854_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14659_MethodInfos[] =
{
	&IList_1_IndexOf_m103855_MethodInfo,
	&IList_1_Insert_m103856_MethodInfo,
	&IList_1_RemoveAt_m103857_MethodInfo,
	&IList_1_get_Item_m103853_MethodInfo,
	&IList_1_set_Item_m103854_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14659_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14658_il2cpp_TypeInfo,
	&IEnumerable_1_t14660_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14659_0_0_0;
extern Il2CppType IList_1_t14659_1_0_0;
struct IList_1_t14659;
extern Il2CppGenericClass IList_1_t14659_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14659_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14659_MethodInfos/* methods */
	, IList_1_t14659_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14659_il2cpp_TypeInfo/* element_class */
	, IList_1_t14659_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14659_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14659_0_0_0/* byval_arg */
	, &IList_1_t14659_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14659_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13103_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo IEnumerator_1_get_Current_m103858_MethodInfo;
static PropertyInfo IEnumerator_1_t13103____Current_PropertyInfo = 
{
	&IEnumerator_1_t13103_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103858_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13103_PropertyInfos[] =
{
	&IEnumerator_1_t13103____Current_PropertyInfo,
	NULL
};
extern Il2CppType ConfidenceFactor_t3189_0_0_0;
extern void* RuntimeInvoker_ConfidenceFactor_t3189 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103858_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103858_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13103_il2cpp_TypeInfo/* declaring_type */
	, &ConfidenceFactor_t3189_0_0_0/* return_type */
	, RuntimeInvoker_ConfidenceFactor_t3189/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103858_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13103_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103858_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13103_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13103_0_0_0;
extern Il2CppType IEnumerator_1_t13103_1_0_0;
struct IEnumerator_1_t13103;
extern Il2CppGenericClass IEnumerator_1_t13103_GenericClass;
TypeInfo IEnumerator_1_t13103_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13103_MethodInfos/* methods */
	, IEnumerator_1_t13103_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13103_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13103_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13103_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13103_0_0_0/* byval_arg */
	, &IEnumerator_1_t13103_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13103_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10931_il2cpp_TypeInfo;

extern TypeInfo ConfidenceFactor_t3189_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78288_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisConfidenceFactor_t3189_m91368_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.Prime.ConfidenceFactor>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.Prime.ConfidenceFactor>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisConfidenceFactor_t3189_m91368 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78283_MethodInfo;
 void InternalEnumerator_1__ctor_m78283 (InternalEnumerator_1_t10931 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78284_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78284 (InternalEnumerator_1_t10931 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78285_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78285 (InternalEnumerator_1_t10931 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78288(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78288_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ConfidenceFactor_t3189_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78286_MethodInfo;
 void InternalEnumerator_1_Dispose_m78286 (InternalEnumerator_1_t10931 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78287_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78287 (InternalEnumerator_1_t10931 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78288 (InternalEnumerator_1_t10931 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisConfidenceFactor_t3189_m91368(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisConfidenceFactor_t3189_m91368_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10931____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10931_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10931, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10931____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10931_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10931, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10931_FieldInfos[] =
{
	&InternalEnumerator_1_t10931____array_0_FieldInfo,
	&InternalEnumerator_1_t10931____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10931____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10931_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78285_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10931____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10931_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78288_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10931_PropertyInfos[] =
{
	&InternalEnumerator_1_t10931____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10931____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10931_InternalEnumerator_1__ctor_m78283_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78283_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78283_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78283/* method */
	, &InternalEnumerator_1_t10931_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10931_InternalEnumerator_1__ctor_m78283_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78283_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78284_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78284_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78284/* method */
	, &InternalEnumerator_1_t10931_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78284_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78285_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78285_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78285/* method */
	, &InternalEnumerator_1_t10931_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78285_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78286_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78286_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78286/* method */
	, &InternalEnumerator_1_t10931_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78286_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78287_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78287_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78287/* method */
	, &InternalEnumerator_1_t10931_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78287_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactor_t3189_0_0_0;
extern void* RuntimeInvoker_ConfidenceFactor_t3189 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78288_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78288_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78288/* method */
	, &InternalEnumerator_1_t10931_il2cpp_TypeInfo/* declaring_type */
	, &ConfidenceFactor_t3189_0_0_0/* return_type */
	, RuntimeInvoker_ConfidenceFactor_t3189/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m78288_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10931_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78283_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78284_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78285_MethodInfo,
	&InternalEnumerator_1_Dispose_m78286_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78287_MethodInfo,
	&InternalEnumerator_1_get_Current_m78288_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10931_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78285_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78287_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78284_MethodInfo,
	&InternalEnumerator_1_Dispose_m78286_MethodInfo,
	&InternalEnumerator_1_get_Current_m78288_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10931_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13103_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10931_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13103_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10931_0_0_0;
extern Il2CppType InternalEnumerator_1_t10931_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10931_GenericClass;
TypeInfo InternalEnumerator_1_t10931_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10931_MethodInfos/* methods */
	, InternalEnumerator_1_t10931_PropertyInfos/* properties */
	, InternalEnumerator_1_t10931_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10931_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10931_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10931_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10931_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10931_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10931_1_0_0/* this_arg */
	, InternalEnumerator_1_t10931_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10931_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10931)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14661_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo ICollection_1_get_Count_m103859_MethodInfo;
static PropertyInfo ICollection_1_t14661____Count_PropertyInfo = 
{
	&ICollection_1_t14661_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103859_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103860_MethodInfo;
static PropertyInfo ICollection_1_t14661____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14661_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103860_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14661_PropertyInfos[] =
{
	&ICollection_1_t14661____Count_PropertyInfo,
	&ICollection_1_t14661____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103859_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_Count()
MethodInfo ICollection_1_get_Count_m103859_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14661_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103859_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103860_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103860_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14661_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103860_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactor_t3189_0_0_0;
extern Il2CppType ConfidenceFactor_t3189_0_0_0;
static ParameterInfo ICollection_1_t14661_ICollection_1_Add_m103861_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t3189_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103861_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Add(T)
MethodInfo ICollection_1_Add_m103861_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14661_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14661_ICollection_1_Add_m103861_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103861_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103862_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Clear()
MethodInfo ICollection_1_Clear_m103862_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14661_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103862_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactor_t3189_0_0_0;
static ParameterInfo ICollection_1_t14661_ICollection_1_Contains_m103863_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t3189_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103863_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Contains(T)
MethodInfo ICollection_1_Contains_m103863_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14661_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14661_ICollection_1_Contains_m103863_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103863_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactorU5BU5D_t11206_0_0_0;
extern Il2CppType ConfidenceFactorU5BU5D_t11206_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14661_ICollection_1_CopyTo_m103864_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactorU5BU5D_t11206_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103864_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103864_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14661_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14661_ICollection_1_CopyTo_m103864_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103864_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactor_t3189_0_0_0;
static ParameterInfo ICollection_1_t14661_ICollection_1_Remove_m103865_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t3189_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103865_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Remove(T)
MethodInfo ICollection_1_Remove_m103865_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14661_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14661_ICollection_1_Remove_m103865_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103865_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14661_MethodInfos[] =
{
	&ICollection_1_get_Count_m103859_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103860_MethodInfo,
	&ICollection_1_Add_m103861_MethodInfo,
	&ICollection_1_Clear_m103862_MethodInfo,
	&ICollection_1_Contains_m103863_MethodInfo,
	&ICollection_1_CopyTo_m103864_MethodInfo,
	&ICollection_1_Remove_m103865_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14663_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14661_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14663_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14661_0_0_0;
extern Il2CppType ICollection_1_t14661_1_0_0;
struct ICollection_1_t14661;
extern Il2CppGenericClass ICollection_1_t14661_GenericClass;
TypeInfo ICollection_1_t14661_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14661_MethodInfos/* methods */
	, ICollection_1_t14661_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14661_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14661_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14661_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14661_0_0_0/* byval_arg */
	, &ICollection_1_t14661_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14661_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.Prime.ConfidenceFactor>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Math.Prime.ConfidenceFactor>
extern Il2CppType IEnumerator_1_t13103_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103866_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.Prime.ConfidenceFactor>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103866_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14663_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13103_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103866_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14663_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103866_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14663_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14663_0_0_0;
extern Il2CppType IEnumerable_1_t14663_1_0_0;
struct IEnumerable_1_t14663;
extern Il2CppGenericClass IEnumerable_1_t14663_GenericClass;
TypeInfo IEnumerable_1_t14663_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14663_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14663_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14663_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14663_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14663_0_0_0/* byval_arg */
	, &IEnumerable_1_t14663_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14663_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14662_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo IList_1_get_Item_m103867_MethodInfo;
extern MethodInfo IList_1_set_Item_m103868_MethodInfo;
static PropertyInfo IList_1_t14662____Item_PropertyInfo = 
{
	&IList_1_t14662_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103867_MethodInfo/* get */
	, &IList_1_set_Item_m103868_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14662_PropertyInfos[] =
{
	&IList_1_t14662____Item_PropertyInfo,
	NULL
};
extern Il2CppType ConfidenceFactor_t3189_0_0_0;
static ParameterInfo IList_1_t14662_IList_1_IndexOf_m103869_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t3189_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103869_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103869_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14662_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14662_IList_1_IndexOf_m103869_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103869_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ConfidenceFactor_t3189_0_0_0;
static ParameterInfo IList_1_t14662_IList_1_Insert_m103870_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t3189_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103870_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103870_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14662_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14662_IList_1_Insert_m103870_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103870_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14662_IList_1_RemoveAt_m103871_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103871_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103871_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14662_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14662_IList_1_RemoveAt_m103871_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103871_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14662_IList_1_get_Item_m103867_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType ConfidenceFactor_t3189_0_0_0;
extern void* RuntimeInvoker_ConfidenceFactor_t3189_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103867_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103867_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14662_il2cpp_TypeInfo/* declaring_type */
	, &ConfidenceFactor_t3189_0_0_0/* return_type */
	, RuntimeInvoker_ConfidenceFactor_t3189_Int32_t23/* invoker_method */
	, IList_1_t14662_IList_1_get_Item_m103867_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103867_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ConfidenceFactor_t3189_0_0_0;
static ParameterInfo IList_1_t14662_IList_1_set_Item_m103868_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t3189_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103868_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103868_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14662_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14662_IList_1_set_Item_m103868_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103868_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14662_MethodInfos[] =
{
	&IList_1_IndexOf_m103869_MethodInfo,
	&IList_1_Insert_m103870_MethodInfo,
	&IList_1_RemoveAt_m103871_MethodInfo,
	&IList_1_get_Item_m103867_MethodInfo,
	&IList_1_set_Item_m103868_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14662_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14661_il2cpp_TypeInfo,
	&IEnumerable_1_t14663_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14662_0_0_0;
extern Il2CppType IList_1_t14662_1_0_0;
struct IList_1_t14662;
extern Il2CppGenericClass IList_1_t14662_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14662_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14662_MethodInfos/* methods */
	, IList_1_t14662_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14662_il2cpp_TypeInfo/* element_class */
	, IList_1_t14662_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14662_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14662_0_0_0/* byval_arg */
	, &IList_1_t14662_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14662_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13105_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>
extern MethodInfo IEnumerator_1_get_Current_m103872_MethodInfo;
static PropertyInfo IEnumerator_1_t13105____Current_PropertyInfo = 
{
	&IEnumerator_1_t13105_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103872_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13105_PropertyInfos[] =
{
	&IEnumerator_1_t13105____Current_PropertyInfo,
	NULL
};
extern Il2CppType BigInteger_t3187_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103872_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103872_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13105_il2cpp_TypeInfo/* declaring_type */
	, &BigInteger_t3187_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m103872_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13105_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103872_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13105_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13105_0_0_0;
extern Il2CppType IEnumerator_1_t13105_1_0_0;
struct IEnumerator_1_t13105;
extern Il2CppGenericClass IEnumerator_1_t13105_GenericClass;
TypeInfo IEnumerator_1_t13105_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13105_MethodInfos/* methods */
	, IEnumerator_1_t13105_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13105_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13105_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13105_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13105_0_0_0/* byval_arg */
	, &IEnumerator_1_t13105_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13105_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10932_il2cpp_TypeInfo;

extern TypeInfo BigInteger_t3187_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78294_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBigInteger_t3187_m91379_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m79431_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m79431(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
#define Array_InternalArray__get_Item_TisBigInteger_t3187_m91379(__this, p0, method) (BigInteger_t3187 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10932____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10932_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10932, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10932____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10932_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10932, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10932_FieldInfos[] =
{
	&InternalEnumerator_1_t10932____array_0_FieldInfo,
	&InternalEnumerator_1_t10932____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78291_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10932____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10932_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78291_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10932____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10932_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78294_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10932_PropertyInfos[] =
{
	&InternalEnumerator_1_t10932____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10932____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10932_InternalEnumerator_1__ctor_m78289_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78289_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78289_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10932_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10932_InternalEnumerator_1__ctor_m78289_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78289_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78290_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78290_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10932_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78290_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78291_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78291_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10932_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78291_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78292_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78292_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10932_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78292_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78293_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78293_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10932_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78293_GenericMethod/* genericMethod */

};
extern Il2CppType BigInteger_t3187_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78294_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78294_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10932_il2cpp_TypeInfo/* declaring_type */
	, &BigInteger_t3187_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m78294_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10932_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78289_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78290_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78291_MethodInfo,
	&InternalEnumerator_1_Dispose_m78292_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78293_MethodInfo,
	&InternalEnumerator_1_get_Current_m78294_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78293_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78290_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78292_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10932_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78291_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78293_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78290_MethodInfo,
	&InternalEnumerator_1_Dispose_m78292_MethodInfo,
	&InternalEnumerator_1_get_Current_m78294_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10932_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13105_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10932_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13105_il2cpp_TypeInfo, 8},
};
extern TypeInfo BigInteger_t3187_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10932_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78294_MethodInfo/* Method Usage */,
	&BigInteger_t3187_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisBigInteger_t3187_m91379_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10932_0_0_0;
extern Il2CppType InternalEnumerator_1_t10932_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10932_GenericClass;
TypeInfo InternalEnumerator_1_t10932_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10932_MethodInfos/* methods */
	, InternalEnumerator_1_t10932_PropertyInfos/* properties */
	, InternalEnumerator_1_t10932_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10932_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10932_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10932_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10932_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10932_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10932_1_0_0/* this_arg */
	, InternalEnumerator_1_t10932_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10932_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10932_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10932)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14664_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>
extern MethodInfo ICollection_1_get_Count_m103873_MethodInfo;
static PropertyInfo ICollection_1_t14664____Count_PropertyInfo = 
{
	&ICollection_1_t14664_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103873_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103874_MethodInfo;
static PropertyInfo ICollection_1_t14664____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14664_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103874_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14664_PropertyInfos[] =
{
	&ICollection_1_t14664____Count_PropertyInfo,
	&ICollection_1_t14664____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103873_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_Count()
MethodInfo ICollection_1_get_Count_m103873_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14664_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103873_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103874_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103874_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14664_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103874_GenericMethod/* genericMethod */

};
extern Il2CppType BigInteger_t3187_0_0_0;
extern Il2CppType BigInteger_t3187_0_0_0;
static ParameterInfo ICollection_1_t14664_ICollection_1_Add_m103875_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t3187_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103875_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Add(T)
MethodInfo ICollection_1_Add_m103875_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14664_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14664_ICollection_1_Add_m103875_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103875_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103876_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Clear()
MethodInfo ICollection_1_Clear_m103876_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14664_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103876_GenericMethod/* genericMethod */

};
extern Il2CppType BigInteger_t3187_0_0_0;
static ParameterInfo ICollection_1_t14664_ICollection_1_Contains_m103877_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t3187_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103877_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Contains(T)
MethodInfo ICollection_1_Contains_m103877_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14664_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14664_ICollection_1_Contains_m103877_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103877_GenericMethod/* genericMethod */

};
extern Il2CppType BigIntegerU5BU5D_t3194_0_0_0;
extern Il2CppType BigIntegerU5BU5D_t3194_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14664_ICollection_1_CopyTo_m103878_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BigIntegerU5BU5D_t3194_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103878_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103878_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14664_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14664_ICollection_1_CopyTo_m103878_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103878_GenericMethod/* genericMethod */

};
extern Il2CppType BigInteger_t3187_0_0_0;
static ParameterInfo ICollection_1_t14664_ICollection_1_Remove_m103879_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t3187_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103879_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Remove(T)
MethodInfo ICollection_1_Remove_m103879_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14664_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14664_ICollection_1_Remove_m103879_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103879_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14664_MethodInfos[] =
{
	&ICollection_1_get_Count_m103873_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103874_MethodInfo,
	&ICollection_1_Add_m103875_MethodInfo,
	&ICollection_1_Clear_m103876_MethodInfo,
	&ICollection_1_Contains_m103877_MethodInfo,
	&ICollection_1_CopyTo_m103878_MethodInfo,
	&ICollection_1_Remove_m103879_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14666_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14664_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14666_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14664_0_0_0;
extern Il2CppType ICollection_1_t14664_1_0_0;
struct ICollection_1_t14664;
extern Il2CppGenericClass ICollection_1_t14664_GenericClass;
TypeInfo ICollection_1_t14664_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14664_MethodInfos/* methods */
	, ICollection_1_t14664_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14664_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14664_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14664_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14664_0_0_0/* byval_arg */
	, &ICollection_1_t14664_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14664_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>
extern Il2CppType IEnumerator_1_t13105_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103880_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103880_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14666_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13105_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103880_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14666_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103880_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14666_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14666_0_0_0;
extern Il2CppType IEnumerable_1_t14666_1_0_0;
struct IEnumerable_1_t14666;
extern Il2CppGenericClass IEnumerable_1_t14666_GenericClass;
TypeInfo IEnumerable_1_t14666_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14666_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14666_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14666_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14666_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14666_0_0_0/* byval_arg */
	, &IEnumerable_1_t14666_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14666_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14665_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.BigInteger>
extern MethodInfo IList_1_get_Item_m103881_MethodInfo;
extern MethodInfo IList_1_set_Item_m103882_MethodInfo;
static PropertyInfo IList_1_t14665____Item_PropertyInfo = 
{
	&IList_1_t14665_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103881_MethodInfo/* get */
	, &IList_1_set_Item_m103882_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14665_PropertyInfos[] =
{
	&IList_1_t14665____Item_PropertyInfo,
	NULL
};
extern Il2CppType BigInteger_t3187_0_0_0;
static ParameterInfo IList_1_t14665_IList_1_IndexOf_m103883_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t3187_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103883_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103883_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14665_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14665_IList_1_IndexOf_m103883_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103883_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType BigInteger_t3187_0_0_0;
static ParameterInfo IList_1_t14665_IList_1_Insert_m103884_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &BigInteger_t3187_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103884_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103884_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14665_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14665_IList_1_Insert_m103884_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103884_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14665_IList_1_RemoveAt_m103885_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103885_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103885_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14665_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14665_IList_1_RemoveAt_m103885_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103885_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14665_IList_1_get_Item_m103881_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType BigInteger_t3187_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103881_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103881_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14665_il2cpp_TypeInfo/* declaring_type */
	, &BigInteger_t3187_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14665_IList_1_get_Item_m103881_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103881_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType BigInteger_t3187_0_0_0;
static ParameterInfo IList_1_t14665_IList_1_set_Item_m103882_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &BigInteger_t3187_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103882_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103882_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14665_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14665_IList_1_set_Item_m103882_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103882_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14665_MethodInfos[] =
{
	&IList_1_IndexOf_m103883_MethodInfo,
	&IList_1_Insert_m103884_MethodInfo,
	&IList_1_RemoveAt_m103885_MethodInfo,
	&IList_1_get_Item_m103881_MethodInfo,
	&IList_1_set_Item_m103882_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14665_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14664_il2cpp_TypeInfo,
	&IEnumerable_1_t14666_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14665_0_0_0;
extern Il2CppType IList_1_t14665_1_0_0;
struct IList_1_t14665;
extern Il2CppGenericClass IList_1_t14665_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14665_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14665_MethodInfos/* methods */
	, IList_1_t14665_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14665_il2cpp_TypeInfo/* element_class */
	, IList_1_t14665_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14665_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14665_0_0_0/* byval_arg */
	, &IList_1_t14665_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14665_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13107_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger/Sign>
extern MethodInfo IEnumerator_1_get_Current_m103886_MethodInfo;
static PropertyInfo IEnumerator_1_t13107____Current_PropertyInfo = 
{
	&IEnumerator_1_t13107_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103886_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13107_PropertyInfos[] =
{
	&IEnumerator_1_t13107____Current_PropertyInfo,
	NULL
};
extern Il2CppType Sign_t3191_0_0_0;
extern void* RuntimeInvoker_Sign_t3191 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103886_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103886_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13107_il2cpp_TypeInfo/* declaring_type */
	, &Sign_t3191_0_0_0/* return_type */
	, RuntimeInvoker_Sign_t3191/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103886_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13107_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103886_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13107_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13107_0_0_0;
extern Il2CppType IEnumerator_1_t13107_1_0_0;
struct IEnumerator_1_t13107;
extern Il2CppGenericClass IEnumerator_1_t13107_GenericClass;
TypeInfo IEnumerator_1_t13107_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13107_MethodInfos/* methods */
	, IEnumerator_1_t13107_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13107_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13107_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13107_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13107_0_0_0/* byval_arg */
	, &IEnumerator_1_t13107_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13107_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10933_il2cpp_TypeInfo;

extern TypeInfo Sign_t3191_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78300_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSign_t3191_m91390_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger/Sign>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger/Sign>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSign_t3191_m91390 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78295_MethodInfo;
 void InternalEnumerator_1__ctor_m78295 (InternalEnumerator_1_t10933 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78296_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78296 (InternalEnumerator_1_t10933 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78297_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78297 (InternalEnumerator_1_t10933 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78300(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78300_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Sign_t3191_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78298_MethodInfo;
 void InternalEnumerator_1_Dispose_m78298 (InternalEnumerator_1_t10933 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78299_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78299 (InternalEnumerator_1_t10933 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78300 (InternalEnumerator_1_t10933 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSign_t3191_m91390(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSign_t3191_m91390_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10933____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10933_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10933, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10933____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10933_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10933, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10933_FieldInfos[] =
{
	&InternalEnumerator_1_t10933____array_0_FieldInfo,
	&InternalEnumerator_1_t10933____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10933____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10933_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78297_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10933____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10933_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78300_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10933_PropertyInfos[] =
{
	&InternalEnumerator_1_t10933____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10933____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10933_InternalEnumerator_1__ctor_m78295_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78295_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78295_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78295/* method */
	, &InternalEnumerator_1_t10933_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10933_InternalEnumerator_1__ctor_m78295_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78295_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78296_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78296_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78296/* method */
	, &InternalEnumerator_1_t10933_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78296_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78297_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78297_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78297/* method */
	, &InternalEnumerator_1_t10933_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78297_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78298_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78298_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78298/* method */
	, &InternalEnumerator_1_t10933_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78298_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78299_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78299_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78299/* method */
	, &InternalEnumerator_1_t10933_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78299_GenericMethod/* genericMethod */

};
extern Il2CppType Sign_t3191_0_0_0;
extern void* RuntimeInvoker_Sign_t3191 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78300_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78300_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78300/* method */
	, &InternalEnumerator_1_t10933_il2cpp_TypeInfo/* declaring_type */
	, &Sign_t3191_0_0_0/* return_type */
	, RuntimeInvoker_Sign_t3191/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m78300_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10933_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78295_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78296_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78297_MethodInfo,
	&InternalEnumerator_1_Dispose_m78298_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78299_MethodInfo,
	&InternalEnumerator_1_get_Current_m78300_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10933_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78297_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78299_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78296_MethodInfo,
	&InternalEnumerator_1_Dispose_m78298_MethodInfo,
	&InternalEnumerator_1_get_Current_m78300_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10933_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13107_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10933_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13107_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10933_0_0_0;
extern Il2CppType InternalEnumerator_1_t10933_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10933_GenericClass;
TypeInfo InternalEnumerator_1_t10933_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10933_MethodInfos/* methods */
	, InternalEnumerator_1_t10933_PropertyInfos/* properties */
	, InternalEnumerator_1_t10933_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10933_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10933_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10933_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10933_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10933_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10933_1_0_0/* this_arg */
	, InternalEnumerator_1_t10933_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10933_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10933)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14667_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>
extern MethodInfo ICollection_1_get_Count_m103887_MethodInfo;
static PropertyInfo ICollection_1_t14667____Count_PropertyInfo = 
{
	&ICollection_1_t14667_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103887_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103888_MethodInfo;
static PropertyInfo ICollection_1_t14667____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14667_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103888_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14667_PropertyInfos[] =
{
	&ICollection_1_t14667____Count_PropertyInfo,
	&ICollection_1_t14667____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103887_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_Count()
MethodInfo ICollection_1_get_Count_m103887_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14667_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103887_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103888_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103888_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14667_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103888_GenericMethod/* genericMethod */

};
extern Il2CppType Sign_t3191_0_0_0;
extern Il2CppType Sign_t3191_0_0_0;
static ParameterInfo ICollection_1_t14667_ICollection_1_Add_m103889_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t3191_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103889_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Add(T)
MethodInfo ICollection_1_Add_m103889_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14667_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14667_ICollection_1_Add_m103889_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103889_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103890_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Clear()
MethodInfo ICollection_1_Clear_m103890_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14667_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103890_GenericMethod/* genericMethod */

};
extern Il2CppType Sign_t3191_0_0_0;
static ParameterInfo ICollection_1_t14667_ICollection_1_Contains_m103891_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t3191_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103891_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Contains(T)
MethodInfo ICollection_1_Contains_m103891_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14667_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14667_ICollection_1_Contains_m103891_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103891_GenericMethod/* genericMethod */

};
extern Il2CppType SignU5BU5D_t11207_0_0_0;
extern Il2CppType SignU5BU5D_t11207_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14667_ICollection_1_CopyTo_m103892_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SignU5BU5D_t11207_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103892_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103892_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14667_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14667_ICollection_1_CopyTo_m103892_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103892_GenericMethod/* genericMethod */

};
extern Il2CppType Sign_t3191_0_0_0;
static ParameterInfo ICollection_1_t14667_ICollection_1_Remove_m103893_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t3191_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103893_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Remove(T)
MethodInfo ICollection_1_Remove_m103893_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14667_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14667_ICollection_1_Remove_m103893_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103893_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14667_MethodInfos[] =
{
	&ICollection_1_get_Count_m103887_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103888_MethodInfo,
	&ICollection_1_Add_m103889_MethodInfo,
	&ICollection_1_Clear_m103890_MethodInfo,
	&ICollection_1_Contains_m103891_MethodInfo,
	&ICollection_1_CopyTo_m103892_MethodInfo,
	&ICollection_1_Remove_m103893_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14669_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14667_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14669_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14667_0_0_0;
extern Il2CppType ICollection_1_t14667_1_0_0;
struct ICollection_1_t14667;
extern Il2CppGenericClass ICollection_1_t14667_GenericClass;
TypeInfo ICollection_1_t14667_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14667_MethodInfos/* methods */
	, ICollection_1_t14667_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14667_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14667_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14667_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14667_0_0_0/* byval_arg */
	, &ICollection_1_t14667_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14667_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger/Sign>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger/Sign>
extern Il2CppType IEnumerator_1_t13107_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103894_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger/Sign>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103894_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14669_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13107_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103894_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14669_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103894_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14669_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14669_0_0_0;
extern Il2CppType IEnumerable_1_t14669_1_0_0;
struct IEnumerable_1_t14669;
extern Il2CppGenericClass IEnumerable_1_t14669_GenericClass;
TypeInfo IEnumerable_1_t14669_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14669_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14669_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14669_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14669_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14669_0_0_0/* byval_arg */
	, &IEnumerable_1_t14669_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14669_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14668_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>
extern MethodInfo IList_1_get_Item_m103895_MethodInfo;
extern MethodInfo IList_1_set_Item_m103896_MethodInfo;
static PropertyInfo IList_1_t14668____Item_PropertyInfo = 
{
	&IList_1_t14668_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103895_MethodInfo/* get */
	, &IList_1_set_Item_m103896_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14668_PropertyInfos[] =
{
	&IList_1_t14668____Item_PropertyInfo,
	NULL
};
extern Il2CppType Sign_t3191_0_0_0;
static ParameterInfo IList_1_t14668_IList_1_IndexOf_m103897_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t3191_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103897_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103897_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14668_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14668_IList_1_IndexOf_m103897_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103897_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Sign_t3191_0_0_0;
static ParameterInfo IList_1_t14668_IList_1_Insert_m103898_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Sign_t3191_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103898_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103898_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14668_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14668_IList_1_Insert_m103898_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103898_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14668_IList_1_RemoveAt_m103899_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103899_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103899_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14668_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14668_IList_1_RemoveAt_m103899_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103899_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14668_IList_1_get_Item_m103895_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Sign_t3191_0_0_0;
extern void* RuntimeInvoker_Sign_t3191_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103895_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103895_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14668_il2cpp_TypeInfo/* declaring_type */
	, &Sign_t3191_0_0_0/* return_type */
	, RuntimeInvoker_Sign_t3191_Int32_t23/* invoker_method */
	, IList_1_t14668_IList_1_get_Item_m103895_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103895_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Sign_t3191_0_0_0;
static ParameterInfo IList_1_t14668_IList_1_set_Item_m103896_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Sign_t3191_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103896_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103896_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14668_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14668_IList_1_set_Item_m103896_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103896_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14668_MethodInfos[] =
{
	&IList_1_IndexOf_m103897_MethodInfo,
	&IList_1_Insert_m103898_MethodInfo,
	&IList_1_RemoveAt_m103899_MethodInfo,
	&IList_1_get_Item_m103895_MethodInfo,
	&IList_1_set_Item_m103896_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14668_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14667_il2cpp_TypeInfo,
	&IEnumerable_1_t14669_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14668_0_0_0;
extern Il2CppType IList_1_t14668_1_0_0;
struct IList_1_t14668;
extern Il2CppGenericClass IList_1_t14668_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14668_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14668_MethodInfos/* methods */
	, IList_1_t14668_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14668_il2cpp_TypeInfo/* element_class */
	, IList_1_t14668_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14668_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14668_0_0_0/* byval_arg */
	, &IList_1_t14668_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14668_GenericClass/* generic_class */
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
extern TypeInfo CollectionDebuggerView_1_t10934_il2cpp_TypeInfo;



// Metadata Definition System.Collections.Generic.CollectionDebuggerView`1<System.Object>
static MethodInfo* CollectionDebuggerView_1_t10934_MethodInfos[] =
{
	NULL
};
extern MethodInfo Object_Equals_m1356_MethodInfo;
extern MethodInfo Object_GetHashCode_m1357_MethodInfo;
extern MethodInfo Object_ToString_m1367_MethodInfo;
static MethodInfo* CollectionDebuggerView_1_t10934_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType CollectionDebuggerView_1_t10934_0_0_0;
extern Il2CppType CollectionDebuggerView_1_t10934_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CollectionDebuggerView_1_t10934;
extern Il2CppGenericClass CollectionDebuggerView_1_t10934_GenericClass;
TypeInfo CollectionDebuggerView_1_t10934_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "CollectionDebuggerView`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, CollectionDebuggerView_1_t10934_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CollectionDebuggerView_1_t10934_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CollectionDebuggerView_1_t10934_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CollectionDebuggerView_1_t10934_il2cpp_TypeInfo/* cast_class */
	, &CollectionDebuggerView_1_t10934_0_0_0/* byval_arg */
	, &CollectionDebuggerView_1_t10934_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CollectionDebuggerView_1_t10934_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CollectionDebuggerView_1_t10934)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048832/* flags */
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
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CollectionDebuggerView_2_t10935_il2cpp_TypeInfo;



// Metadata Definition System.Collections.Generic.CollectionDebuggerView`2<System.Object,System.Object>
static MethodInfo* CollectionDebuggerView_2_t10935_MethodInfos[] =
{
	NULL
};
static MethodInfo* CollectionDebuggerView_2_t10935_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType CollectionDebuggerView_2_t10935_0_0_0;
extern Il2CppType CollectionDebuggerView_2_t10935_1_0_0;
struct CollectionDebuggerView_2_t10935;
extern Il2CppGenericClass CollectionDebuggerView_2_t10935_GenericClass;
TypeInfo CollectionDebuggerView_2_t10935_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "CollectionDebuggerView`2"/* name */
	, "System.Collections.Generic"/* namespaze */
	, CollectionDebuggerView_2_t10935_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CollectionDebuggerView_2_t10935_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CollectionDebuggerView_2_t10935_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CollectionDebuggerView_2_t10935_il2cpp_TypeInfo/* cast_class */
	, &CollectionDebuggerView_2_t10935_0_0_0/* byval_arg */
	, &CollectionDebuggerView_2_t10935_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CollectionDebuggerView_2_t10935_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CollectionDebuggerView_2_t10935)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048832/* flags */
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
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t13109_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/Slot>
extern MethodInfo IEnumerator_1_get_Current_m103900_MethodInfo;
static PropertyInfo IEnumerator_1_t13109____Current_PropertyInfo = 
{
	&IEnumerator_1_t13109_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103900_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13109_PropertyInfos[] =
{
	&IEnumerator_1_t13109____Current_PropertyInfo,
	NULL
};
extern Il2CppType Slot_t3264_0_0_0;
extern void* RuntimeInvoker_Slot_t3264 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103900_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103900_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13109_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t3264_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t3264/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103900_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13109_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103900_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13109_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13109_0_0_0;
extern Il2CppType IEnumerator_1_t13109_1_0_0;
struct IEnumerator_1_t13109;
extern Il2CppGenericClass IEnumerator_1_t13109_GenericClass;
TypeInfo IEnumerator_1_t13109_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13109_MethodInfos/* methods */
	, IEnumerator_1_t13109_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13109_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13109_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13109_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13109_0_0_0/* byval_arg */
	, &IEnumerator_1_t13109_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13109_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10936_il2cpp_TypeInfo;

extern TypeInfo Slot_t3264_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78306_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSlot_t3264_m91401_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
 Slot_t3264  Array_InternalArray__get_Item_TisSlot_t3264_m91401 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78301_MethodInfo;
 void InternalEnumerator_1__ctor_m78301 (InternalEnumerator_1_t10936 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78302_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78302 (InternalEnumerator_1_t10936 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78303_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78303 (InternalEnumerator_1_t10936 * __this, MethodInfo* method){
	{
		Slot_t3264  L_0 = InternalEnumerator_1_get_Current_m78306(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78306_MethodInfo);
		Slot_t3264  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Slot_t3264_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78304_MethodInfo;
 void InternalEnumerator_1_Dispose_m78304 (InternalEnumerator_1_t10936 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78305_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78305 (InternalEnumerator_1_t10936 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
 Slot_t3264  InternalEnumerator_1_get_Current_m78306 (InternalEnumerator_1_t10936 * __this, MethodInfo* method){
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
		Slot_t3264  L_8 = Array_InternalArray__get_Item_TisSlot_t3264_m91401(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSlot_t3264_m91401_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10936____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10936_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10936, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10936____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10936_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10936, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10936_FieldInfos[] =
{
	&InternalEnumerator_1_t10936____array_0_FieldInfo,
	&InternalEnumerator_1_t10936____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10936____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10936_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78303_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10936____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10936_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78306_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10936_PropertyInfos[] =
{
	&InternalEnumerator_1_t10936____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10936____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10936_InternalEnumerator_1__ctor_m78301_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78301_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78301_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78301/* method */
	, &InternalEnumerator_1_t10936_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10936_InternalEnumerator_1__ctor_m78301_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78301_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78302_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78302_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78302/* method */
	, &InternalEnumerator_1_t10936_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78302_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78303_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78303_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78303/* method */
	, &InternalEnumerator_1_t10936_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78303_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78304_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78304_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78304/* method */
	, &InternalEnumerator_1_t10936_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78304_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78305_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78305_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78305/* method */
	, &InternalEnumerator_1_t10936_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78305_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t3264_0_0_0;
extern void* RuntimeInvoker_Slot_t3264 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78306_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78306_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78306/* method */
	, &InternalEnumerator_1_t10936_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t3264_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t3264/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m78306_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10936_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78301_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78302_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78303_MethodInfo,
	&InternalEnumerator_1_Dispose_m78304_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78305_MethodInfo,
	&InternalEnumerator_1_get_Current_m78306_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10936_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78303_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78305_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78302_MethodInfo,
	&InternalEnumerator_1_Dispose_m78304_MethodInfo,
	&InternalEnumerator_1_get_Current_m78306_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10936_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13109_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10936_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13109_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10936_0_0_0;
extern Il2CppType InternalEnumerator_1_t10936_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10936_GenericClass;
TypeInfo InternalEnumerator_1_t10936_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10936_MethodInfos/* methods */
	, InternalEnumerator_1_t10936_PropertyInfos/* properties */
	, InternalEnumerator_1_t10936_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10936_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10936_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10936_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10936_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10936_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10936_1_0_0/* this_arg */
	, InternalEnumerator_1_t10936_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10936_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10936)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14670_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>
extern MethodInfo ICollection_1_get_Count_m103901_MethodInfo;
static PropertyInfo ICollection_1_t14670____Count_PropertyInfo = 
{
	&ICollection_1_t14670_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103901_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103902_MethodInfo;
static PropertyInfo ICollection_1_t14670____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14670_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103902_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14670_PropertyInfos[] =
{
	&ICollection_1_t14670____Count_PropertyInfo,
	&ICollection_1_t14670____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103901_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_Count()
MethodInfo ICollection_1_get_Count_m103901_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14670_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103901_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103902_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103902_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14670_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103902_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t3264_0_0_0;
extern Il2CppType Slot_t3264_0_0_0;
static ParameterInfo ICollection_1_t14670_ICollection_1_Add_m103903_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t3264_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Slot_t3264 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103903_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Add(T)
MethodInfo ICollection_1_Add_m103903_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14670_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Slot_t3264/* invoker_method */
	, ICollection_1_t14670_ICollection_1_Add_m103903_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103903_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103904_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Clear()
MethodInfo ICollection_1_Clear_m103904_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14670_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103904_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t3264_0_0_0;
static ParameterInfo ICollection_1_t14670_ICollection_1_Contains_m103905_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t3264_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Slot_t3264 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103905_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Contains(T)
MethodInfo ICollection_1_Contains_m103905_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14670_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Slot_t3264/* invoker_method */
	, ICollection_1_t14670_ICollection_1_Contains_m103905_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103905_GenericMethod/* genericMethod */

};
extern Il2CppType SlotU5BU5D_t3270_0_0_0;
extern Il2CppType SlotU5BU5D_t3270_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14670_ICollection_1_CopyTo_m103906_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SlotU5BU5D_t3270_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103906_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103906_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14670_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14670_ICollection_1_CopyTo_m103906_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103906_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t3264_0_0_0;
static ParameterInfo ICollection_1_t14670_ICollection_1_Remove_m103907_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t3264_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Slot_t3264 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103907_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Remove(T)
MethodInfo ICollection_1_Remove_m103907_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14670_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Slot_t3264/* invoker_method */
	, ICollection_1_t14670_ICollection_1_Remove_m103907_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103907_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14670_MethodInfos[] =
{
	&ICollection_1_get_Count_m103901_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103902_MethodInfo,
	&ICollection_1_Add_m103903_MethodInfo,
	&ICollection_1_Clear_m103904_MethodInfo,
	&ICollection_1_Contains_m103905_MethodInfo,
	&ICollection_1_CopyTo_m103906_MethodInfo,
	&ICollection_1_Remove_m103907_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14672_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14670_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14672_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14670_0_0_0;
extern Il2CppType ICollection_1_t14670_1_0_0;
struct ICollection_1_t14670;
extern Il2CppGenericClass ICollection_1_t14670_GenericClass;
TypeInfo ICollection_1_t14670_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14670_MethodInfos/* methods */
	, ICollection_1_t14670_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14670_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14670_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14670_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14670_0_0_0/* byval_arg */
	, &ICollection_1_t14670_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14670_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/Slot>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/Slot>
extern Il2CppType IEnumerator_1_t13109_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103908_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/Slot>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103908_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14672_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13109_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103908_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14672_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103908_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14672_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14672_0_0_0;
extern Il2CppType IEnumerable_1_t14672_1_0_0;
struct IEnumerable_1_t14672;
extern Il2CppGenericClass IEnumerable_1_t14672_GenericClass;
TypeInfo IEnumerable_1_t14672_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14672_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14672_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14672_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14672_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14672_0_0_0/* byval_arg */
	, &IEnumerable_1_t14672_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14672_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14671_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>
extern MethodInfo IList_1_get_Item_m103909_MethodInfo;
extern MethodInfo IList_1_set_Item_m103910_MethodInfo;
static PropertyInfo IList_1_t14671____Item_PropertyInfo = 
{
	&IList_1_t14671_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103909_MethodInfo/* get */
	, &IList_1_set_Item_m103910_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14671_PropertyInfos[] =
{
	&IList_1_t14671____Item_PropertyInfo,
	NULL
};
extern Il2CppType Slot_t3264_0_0_0;
static ParameterInfo IList_1_t14671_IList_1_IndexOf_m103911_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t3264_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Slot_t3264 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103911_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103911_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14671_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Slot_t3264/* invoker_method */
	, IList_1_t14671_IList_1_IndexOf_m103911_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103911_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Slot_t3264_0_0_0;
static ParameterInfo IList_1_t14671_IList_1_Insert_m103912_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Slot_t3264_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Slot_t3264 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103912_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103912_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14671_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Slot_t3264/* invoker_method */
	, IList_1_t14671_IList_1_Insert_m103912_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103912_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14671_IList_1_RemoveAt_m103913_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103913_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103913_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14671_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14671_IList_1_RemoveAt_m103913_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103913_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14671_IList_1_get_Item_m103909_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Slot_t3264_0_0_0;
extern void* RuntimeInvoker_Slot_t3264_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103909_GenericMethod;
// T System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103909_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14671_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t3264_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t3264_Int32_t23/* invoker_method */
	, IList_1_t14671_IList_1_get_Item_m103909_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103909_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Slot_t3264_0_0_0;
static ParameterInfo IList_1_t14671_IList_1_set_Item_m103910_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Slot_t3264_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Slot_t3264 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103910_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103910_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14671_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Slot_t3264/* invoker_method */
	, IList_1_t14671_IList_1_set_Item_m103910_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103910_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14671_MethodInfos[] =
{
	&IList_1_IndexOf_m103911_MethodInfo,
	&IList_1_Insert_m103912_MethodInfo,
	&IList_1_RemoveAt_m103913_MethodInfo,
	&IList_1_get_Item_m103909_MethodInfo,
	&IList_1_set_Item_m103910_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14671_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14670_il2cpp_TypeInfo,
	&IEnumerable_1_t14672_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14671_0_0_0;
extern Il2CppType IList_1_t14671_1_0_0;
struct IList_1_t14671;
extern Il2CppGenericClass IList_1_t14671_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14671_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14671_MethodInfos/* methods */
	, IList_1_t14671_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14671_il2cpp_TypeInfo/* element_class */
	, IList_1_t14671_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14671_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14671_0_0_0/* byval_arg */
	, &IList_1_t14671_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14671_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13111_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/EnumeratorMode>
extern MethodInfo IEnumerator_1_get_Current_m103914_MethodInfo;
static PropertyInfo IEnumerator_1_t13111____Current_PropertyInfo = 
{
	&IEnumerator_1_t13111_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103914_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13111_PropertyInfos[] =
{
	&IEnumerator_1_t13111____Current_PropertyInfo,
	NULL
};
extern Il2CppType EnumeratorMode_t3266_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t3266 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103914_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103914_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13111_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t3266_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t3266/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103914_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13111_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103914_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13111_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13111_0_0_0;
extern Il2CppType IEnumerator_1_t13111_1_0_0;
struct IEnumerator_1_t13111;
extern Il2CppGenericClass IEnumerator_1_t13111_GenericClass;
TypeInfo IEnumerator_1_t13111_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13111_MethodInfos/* methods */
	, IEnumerator_1_t13111_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13111_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13111_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13111_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13111_0_0_0/* byval_arg */
	, &IEnumerator_1_t13111_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13111_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10937_il2cpp_TypeInfo;

extern TypeInfo EnumeratorMode_t3266_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78312_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEnumeratorMode_t3266_m91412_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/EnumeratorMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/EnumeratorMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisEnumeratorMode_t3266_m91412 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78307_MethodInfo;
 void InternalEnumerator_1__ctor_m78307 (InternalEnumerator_1_t10937 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78308_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78308 (InternalEnumerator_1_t10937 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78309_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78309 (InternalEnumerator_1_t10937 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78312(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78312_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&EnumeratorMode_t3266_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78310_MethodInfo;
 void InternalEnumerator_1_Dispose_m78310 (InternalEnumerator_1_t10937 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78311_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78311 (InternalEnumerator_1_t10937 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78312 (InternalEnumerator_1_t10937 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisEnumeratorMode_t3266_m91412(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisEnumeratorMode_t3266_m91412_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10937____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10937_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10937, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10937____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10937_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10937, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10937_FieldInfos[] =
{
	&InternalEnumerator_1_t10937____array_0_FieldInfo,
	&InternalEnumerator_1_t10937____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10937____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10937_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78309_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10937____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10937_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78312_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10937_PropertyInfos[] =
{
	&InternalEnumerator_1_t10937____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10937____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10937_InternalEnumerator_1__ctor_m78307_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78307_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78307_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78307/* method */
	, &InternalEnumerator_1_t10937_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10937_InternalEnumerator_1__ctor_m78307_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78307_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78308_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78308_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78308/* method */
	, &InternalEnumerator_1_t10937_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78308_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78309_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78309_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78309/* method */
	, &InternalEnumerator_1_t10937_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78309_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78310_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78310_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78310/* method */
	, &InternalEnumerator_1_t10937_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78310_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78311_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78311_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78311/* method */
	, &InternalEnumerator_1_t10937_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78311_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t3266_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t3266 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78312_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78312_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78312/* method */
	, &InternalEnumerator_1_t10937_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t3266_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t3266/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m78312_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10937_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78307_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78308_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78309_MethodInfo,
	&InternalEnumerator_1_Dispose_m78310_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78311_MethodInfo,
	&InternalEnumerator_1_get_Current_m78312_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10937_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78309_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78311_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78308_MethodInfo,
	&InternalEnumerator_1_Dispose_m78310_MethodInfo,
	&InternalEnumerator_1_get_Current_m78312_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10937_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13111_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10937_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13111_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10937_0_0_0;
extern Il2CppType InternalEnumerator_1_t10937_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10937_GenericClass;
TypeInfo InternalEnumerator_1_t10937_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10937_MethodInfos/* methods */
	, InternalEnumerator_1_t10937_PropertyInfos/* properties */
	, InternalEnumerator_1_t10937_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10937_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10937_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10937_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10937_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10937_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10937_1_0_0/* this_arg */
	, InternalEnumerator_1_t10937_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10937_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10937)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14673_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>
extern MethodInfo ICollection_1_get_Count_m103915_MethodInfo;
static PropertyInfo ICollection_1_t14673____Count_PropertyInfo = 
{
	&ICollection_1_t14673_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103915_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103916_MethodInfo;
static PropertyInfo ICollection_1_t14673____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14673_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103916_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14673_PropertyInfos[] =
{
	&ICollection_1_t14673____Count_PropertyInfo,
	&ICollection_1_t14673____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103915_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::get_Count()
MethodInfo ICollection_1_get_Count_m103915_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14673_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103915_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103916_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103916_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14673_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103916_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t3266_0_0_0;
extern Il2CppType EnumeratorMode_t3266_0_0_0;
static ParameterInfo ICollection_1_t14673_ICollection_1_Add_m103917_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t3266_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103917_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Add(T)
MethodInfo ICollection_1_Add_m103917_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14673_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14673_ICollection_1_Add_m103917_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103917_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103918_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Clear()
MethodInfo ICollection_1_Clear_m103918_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14673_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103918_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t3266_0_0_0;
static ParameterInfo ICollection_1_t14673_ICollection_1_Contains_m103919_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t3266_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103919_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Contains(T)
MethodInfo ICollection_1_Contains_m103919_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14673_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14673_ICollection_1_Contains_m103919_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103919_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorModeU5BU5D_t11208_0_0_0;
extern Il2CppType EnumeratorModeU5BU5D_t11208_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14673_ICollection_1_CopyTo_m103920_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorModeU5BU5D_t11208_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103920_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103920_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14673_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14673_ICollection_1_CopyTo_m103920_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103920_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t3266_0_0_0;
static ParameterInfo ICollection_1_t14673_ICollection_1_Remove_m103921_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t3266_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103921_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Remove(T)
MethodInfo ICollection_1_Remove_m103921_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14673_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14673_ICollection_1_Remove_m103921_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103921_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14673_MethodInfos[] =
{
	&ICollection_1_get_Count_m103915_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103916_MethodInfo,
	&ICollection_1_Add_m103917_MethodInfo,
	&ICollection_1_Clear_m103918_MethodInfo,
	&ICollection_1_Contains_m103919_MethodInfo,
	&ICollection_1_CopyTo_m103920_MethodInfo,
	&ICollection_1_Remove_m103921_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14675_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14673_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14675_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14673_0_0_0;
extern Il2CppType ICollection_1_t14673_1_0_0;
struct ICollection_1_t14673;
extern Il2CppGenericClass ICollection_1_t14673_GenericClass;
TypeInfo ICollection_1_t14673_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14673_MethodInfos/* methods */
	, ICollection_1_t14673_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14673_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14673_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14673_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14673_0_0_0/* byval_arg */
	, &ICollection_1_t14673_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14673_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/EnumeratorMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/EnumeratorMode>
extern Il2CppType IEnumerator_1_t13111_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103922_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/EnumeratorMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103922_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14675_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13111_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103922_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14675_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103922_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14675_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14675_0_0_0;
extern Il2CppType IEnumerable_1_t14675_1_0_0;
struct IEnumerable_1_t14675;
extern Il2CppGenericClass IEnumerable_1_t14675_GenericClass;
TypeInfo IEnumerable_1_t14675_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14675_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14675_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14675_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14675_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14675_0_0_0/* byval_arg */
	, &IEnumerable_1_t14675_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14675_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14674_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>
extern MethodInfo IList_1_get_Item_m103923_MethodInfo;
extern MethodInfo IList_1_set_Item_m103924_MethodInfo;
static PropertyInfo IList_1_t14674____Item_PropertyInfo = 
{
	&IList_1_t14674_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103923_MethodInfo/* get */
	, &IList_1_set_Item_m103924_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14674_PropertyInfos[] =
{
	&IList_1_t14674____Item_PropertyInfo,
	NULL
};
extern Il2CppType EnumeratorMode_t3266_0_0_0;
static ParameterInfo IList_1_t14674_IList_1_IndexOf_m103925_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t3266_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103925_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103925_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14674_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14674_IList_1_IndexOf_m103925_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103925_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType EnumeratorMode_t3266_0_0_0;
static ParameterInfo IList_1_t14674_IList_1_Insert_m103926_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t3266_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103926_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103926_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14674_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14674_IList_1_Insert_m103926_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103926_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14674_IList_1_RemoveAt_m103927_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103927_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103927_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14674_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14674_IList_1_RemoveAt_m103927_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103927_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14674_IList_1_get_Item_m103923_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType EnumeratorMode_t3266_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t3266_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103923_GenericMethod;
// T System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103923_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14674_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t3266_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t3266_Int32_t23/* invoker_method */
	, IList_1_t14674_IList_1_get_Item_m103923_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103923_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType EnumeratorMode_t3266_0_0_0;
static ParameterInfo IList_1_t14674_IList_1_set_Item_m103924_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t3266_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103924_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103924_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14674_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14674_IList_1_set_Item_m103924_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103924_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14674_MethodInfos[] =
{
	&IList_1_IndexOf_m103925_MethodInfo,
	&IList_1_Insert_m103926_MethodInfo,
	&IList_1_RemoveAt_m103927_MethodInfo,
	&IList_1_get_Item_m103923_MethodInfo,
	&IList_1_set_Item_m103924_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14674_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14673_il2cpp_TypeInfo,
	&IEnumerable_1_t14675_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14674_0_0_0;
extern Il2CppType IList_1_t14674_1_0_0;
struct IList_1_t14674;
extern Il2CppGenericClass IList_1_t14674_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14674_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14674_MethodInfos/* methods */
	, IList_1_t14674_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14674_il2cpp_TypeInfo/* element_class */
	, IList_1_t14674_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14674_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14674_0_0_0/* byval_arg */
	, &IList_1_t14674_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14674_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13113_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/Slot>
extern MethodInfo IEnumerator_1_get_Current_m103928_MethodInfo;
static PropertyInfo IEnumerator_1_t13113____Current_PropertyInfo = 
{
	&IEnumerator_1_t13113_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103928_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13113_PropertyInfos[] =
{
	&IEnumerator_1_t13113____Current_PropertyInfo,
	NULL
};
extern Il2CppType Slot_t3271_0_0_0;
extern void* RuntimeInvoker_Slot_t3271 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103928_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103928_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13113_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t3271_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t3271/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103928_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13113_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103928_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13113_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13113_0_0_0;
extern Il2CppType IEnumerator_1_t13113_1_0_0;
struct IEnumerator_1_t13113;
extern Il2CppGenericClass IEnumerator_1_t13113_GenericClass;
TypeInfo IEnumerator_1_t13113_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13113_MethodInfos/* methods */
	, IEnumerator_1_t13113_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13113_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13113_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13113_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13113_0_0_0/* byval_arg */
	, &IEnumerator_1_t13113_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13113_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10938_il2cpp_TypeInfo;

extern TypeInfo Slot_t3271_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78318_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSlot_t3271_m91423_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
 Slot_t3271  Array_InternalArray__get_Item_TisSlot_t3271_m91423 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78313_MethodInfo;
 void InternalEnumerator_1__ctor_m78313 (InternalEnumerator_1_t10938 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78314_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78314 (InternalEnumerator_1_t10938 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78315_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78315 (InternalEnumerator_1_t10938 * __this, MethodInfo* method){
	{
		Slot_t3271  L_0 = InternalEnumerator_1_get_Current_m78318(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78318_MethodInfo);
		Slot_t3271  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Slot_t3271_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78316_MethodInfo;
 void InternalEnumerator_1_Dispose_m78316 (InternalEnumerator_1_t10938 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78317_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78317 (InternalEnumerator_1_t10938 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
 Slot_t3271  InternalEnumerator_1_get_Current_m78318 (InternalEnumerator_1_t10938 * __this, MethodInfo* method){
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
		Slot_t3271  L_8 = Array_InternalArray__get_Item_TisSlot_t3271_m91423(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSlot_t3271_m91423_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10938____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10938_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10938, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10938____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10938_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10938, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10938_FieldInfos[] =
{
	&InternalEnumerator_1_t10938____array_0_FieldInfo,
	&InternalEnumerator_1_t10938____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10938____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10938_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78315_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10938____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10938_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78318_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10938_PropertyInfos[] =
{
	&InternalEnumerator_1_t10938____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10938____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10938_InternalEnumerator_1__ctor_m78313_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78313_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78313_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78313/* method */
	, &InternalEnumerator_1_t10938_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10938_InternalEnumerator_1__ctor_m78313_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78313_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78314_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78314_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78314/* method */
	, &InternalEnumerator_1_t10938_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78314_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78315_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78315_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78315/* method */
	, &InternalEnumerator_1_t10938_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78315_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78316_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78316_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78316/* method */
	, &InternalEnumerator_1_t10938_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78316_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78317_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78317_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78317/* method */
	, &InternalEnumerator_1_t10938_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78317_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t3271_0_0_0;
extern void* RuntimeInvoker_Slot_t3271 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78318_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78318_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78318/* method */
	, &InternalEnumerator_1_t10938_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t3271_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t3271/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m78318_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10938_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78313_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78314_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78315_MethodInfo,
	&InternalEnumerator_1_Dispose_m78316_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78317_MethodInfo,
	&InternalEnumerator_1_get_Current_m78318_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10938_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78315_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78317_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78314_MethodInfo,
	&InternalEnumerator_1_Dispose_m78316_MethodInfo,
	&InternalEnumerator_1_get_Current_m78318_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10938_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13113_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10938_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13113_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10938_0_0_0;
extern Il2CppType InternalEnumerator_1_t10938_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10938_GenericClass;
TypeInfo InternalEnumerator_1_t10938_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10938_MethodInfos/* methods */
	, InternalEnumerator_1_t10938_PropertyInfos/* properties */
	, InternalEnumerator_1_t10938_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10938_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10938_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10938_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10938_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10938_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10938_1_0_0/* this_arg */
	, InternalEnumerator_1_t10938_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10938_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10938)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14676_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>
extern MethodInfo ICollection_1_get_Count_m103929_MethodInfo;
static PropertyInfo ICollection_1_t14676____Count_PropertyInfo = 
{
	&ICollection_1_t14676_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103929_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103930_MethodInfo;
static PropertyInfo ICollection_1_t14676____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14676_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103930_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14676_PropertyInfos[] =
{
	&ICollection_1_t14676____Count_PropertyInfo,
	&ICollection_1_t14676____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103929_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::get_Count()
MethodInfo ICollection_1_get_Count_m103929_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14676_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103929_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103930_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103930_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14676_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103930_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t3271_0_0_0;
extern Il2CppType Slot_t3271_0_0_0;
static ParameterInfo ICollection_1_t14676_ICollection_1_Add_m103931_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t3271_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Slot_t3271 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103931_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Add(T)
MethodInfo ICollection_1_Add_m103931_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14676_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Slot_t3271/* invoker_method */
	, ICollection_1_t14676_ICollection_1_Add_m103931_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103931_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103932_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Clear()
MethodInfo ICollection_1_Clear_m103932_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14676_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103932_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t3271_0_0_0;
static ParameterInfo ICollection_1_t14676_ICollection_1_Contains_m103933_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t3271_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Slot_t3271 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103933_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Contains(T)
MethodInfo ICollection_1_Contains_m103933_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14676_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Slot_t3271/* invoker_method */
	, ICollection_1_t14676_ICollection_1_Contains_m103933_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103933_GenericMethod/* genericMethod */

};
extern Il2CppType SlotU5BU5D_t3275_0_0_0;
extern Il2CppType SlotU5BU5D_t3275_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14676_ICollection_1_CopyTo_m103934_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SlotU5BU5D_t3275_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103934_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103934_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14676_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14676_ICollection_1_CopyTo_m103934_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103934_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t3271_0_0_0;
static ParameterInfo ICollection_1_t14676_ICollection_1_Remove_m103935_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t3271_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Slot_t3271 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103935_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Remove(T)
MethodInfo ICollection_1_Remove_m103935_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14676_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Slot_t3271/* invoker_method */
	, ICollection_1_t14676_ICollection_1_Remove_m103935_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103935_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14676_MethodInfos[] =
{
	&ICollection_1_get_Count_m103929_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103930_MethodInfo,
	&ICollection_1_Add_m103931_MethodInfo,
	&ICollection_1_Clear_m103932_MethodInfo,
	&ICollection_1_Contains_m103933_MethodInfo,
	&ICollection_1_CopyTo_m103934_MethodInfo,
	&ICollection_1_Remove_m103935_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14678_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14676_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14678_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14676_0_0_0;
extern Il2CppType ICollection_1_t14676_1_0_0;
struct ICollection_1_t14676;
extern Il2CppGenericClass ICollection_1_t14676_GenericClass;
TypeInfo ICollection_1_t14676_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14676_MethodInfos/* methods */
	, ICollection_1_t14676_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14676_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14676_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14676_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14676_0_0_0/* byval_arg */
	, &ICollection_1_t14676_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14676_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/Slot>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/Slot>
extern Il2CppType IEnumerator_1_t13113_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103936_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/Slot>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103936_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14678_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13113_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103936_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14678_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103936_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14678_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14678_0_0_0;
extern Il2CppType IEnumerable_1_t14678_1_0_0;
struct IEnumerable_1_t14678;
extern Il2CppGenericClass IEnumerable_1_t14678_GenericClass;
TypeInfo IEnumerable_1_t14678_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14678_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14678_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14678_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14678_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14678_0_0_0/* byval_arg */
	, &IEnumerable_1_t14678_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14678_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14677_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>
extern MethodInfo IList_1_get_Item_m103937_MethodInfo;
extern MethodInfo IList_1_set_Item_m103938_MethodInfo;
static PropertyInfo IList_1_t14677____Item_PropertyInfo = 
{
	&IList_1_t14677_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103937_MethodInfo/* get */
	, &IList_1_set_Item_m103938_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14677_PropertyInfos[] =
{
	&IList_1_t14677____Item_PropertyInfo,
	NULL
};
extern Il2CppType Slot_t3271_0_0_0;
static ParameterInfo IList_1_t14677_IList_1_IndexOf_m103939_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t3271_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Slot_t3271 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103939_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103939_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14677_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Slot_t3271/* invoker_method */
	, IList_1_t14677_IList_1_IndexOf_m103939_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103939_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Slot_t3271_0_0_0;
static ParameterInfo IList_1_t14677_IList_1_Insert_m103940_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Slot_t3271_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Slot_t3271 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103940_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103940_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14677_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Slot_t3271/* invoker_method */
	, IList_1_t14677_IList_1_Insert_m103940_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103940_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14677_IList_1_RemoveAt_m103941_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103941_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103941_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14677_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14677_IList_1_RemoveAt_m103941_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103941_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14677_IList_1_get_Item_m103937_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Slot_t3271_0_0_0;
extern void* RuntimeInvoker_Slot_t3271_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103937_GenericMethod;
// T System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103937_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14677_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t3271_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t3271_Int32_t23/* invoker_method */
	, IList_1_t14677_IList_1_get_Item_m103937_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103937_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Slot_t3271_0_0_0;
static ParameterInfo IList_1_t14677_IList_1_set_Item_m103938_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Slot_t3271_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Slot_t3271 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103938_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103938_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14677_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Slot_t3271/* invoker_method */
	, IList_1_t14677_IList_1_set_Item_m103938_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103938_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14677_MethodInfos[] =
{
	&IList_1_IndexOf_m103939_MethodInfo,
	&IList_1_Insert_m103940_MethodInfo,
	&IList_1_RemoveAt_m103941_MethodInfo,
	&IList_1_get_Item_m103937_MethodInfo,
	&IList_1_set_Item_m103938_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14677_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14676_il2cpp_TypeInfo,
	&IEnumerable_1_t14678_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14677_0_0_0;
extern Il2CppType IList_1_t14677_1_0_0;
struct IList_1_t14677;
extern Il2CppGenericClass IList_1_t14677_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14677_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14677_MethodInfos/* methods */
	, IList_1_t14677_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14677_il2cpp_TypeInfo/* element_class */
	, IList_1_t14677_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14677_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14677_0_0_0/* byval_arg */
	, &IList_1_t14677_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14677_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13115_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/EnumeratorMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/EnumeratorMode>
extern MethodInfo IEnumerator_1_get_Current_m103942_MethodInfo;
static PropertyInfo IEnumerator_1_t13115____Current_PropertyInfo = 
{
	&IEnumerator_1_t13115_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103942_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13115_PropertyInfos[] =
{
	&IEnumerator_1_t13115____Current_PropertyInfo,
	NULL
};
extern Il2CppType EnumeratorMode_t3272_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t3272 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103942_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/EnumeratorMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103942_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13115_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t3272_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t3272/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103942_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13115_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103942_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13115_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13115_0_0_0;
extern Il2CppType IEnumerator_1_t13115_1_0_0;
struct IEnumerator_1_t13115;
extern Il2CppGenericClass IEnumerator_1_t13115_GenericClass;
TypeInfo IEnumerator_1_t13115_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13115_MethodInfos/* methods */
	, IEnumerator_1_t13115_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13115_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13115_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13115_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13115_0_0_0/* byval_arg */
	, &IEnumerator_1_t13115_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13115_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10939_il2cpp_TypeInfo;

extern TypeInfo EnumeratorMode_t3272_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78324_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEnumeratorMode_t3272_m91434_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/EnumeratorMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/EnumeratorMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisEnumeratorMode_t3272_m91434 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78319_MethodInfo;
 void InternalEnumerator_1__ctor_m78319 (InternalEnumerator_1_t10939 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78320_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78320 (InternalEnumerator_1_t10939 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78321_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78321 (InternalEnumerator_1_t10939 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78324(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78324_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&EnumeratorMode_t3272_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78322_MethodInfo;
 void InternalEnumerator_1_Dispose_m78322 (InternalEnumerator_1_t10939 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78323_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78323 (InternalEnumerator_1_t10939 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78324 (InternalEnumerator_1_t10939 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisEnumeratorMode_t3272_m91434(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisEnumeratorMode_t3272_m91434_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10939____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10939_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10939, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10939____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10939_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10939, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10939_FieldInfos[] =
{
	&InternalEnumerator_1_t10939____array_0_FieldInfo,
	&InternalEnumerator_1_t10939____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10939____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10939_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78321_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10939____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10939_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78324_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10939_PropertyInfos[] =
{
	&InternalEnumerator_1_t10939____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10939____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10939_InternalEnumerator_1__ctor_m78319_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78319_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78319_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78319/* method */
	, &InternalEnumerator_1_t10939_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10939_InternalEnumerator_1__ctor_m78319_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78319_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78320_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78320_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78320/* method */
	, &InternalEnumerator_1_t10939_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78320_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78321_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78321_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78321/* method */
	, &InternalEnumerator_1_t10939_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78321_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78322_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78322_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78322/* method */
	, &InternalEnumerator_1_t10939_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78322_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78323_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78323_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78323/* method */
	, &InternalEnumerator_1_t10939_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78323_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t3272_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t3272 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78324_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78324_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78324/* method */
	, &InternalEnumerator_1_t10939_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t3272_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t3272/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m78324_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10939_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78319_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78320_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78321_MethodInfo,
	&InternalEnumerator_1_Dispose_m78322_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78323_MethodInfo,
	&InternalEnumerator_1_get_Current_m78324_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10939_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78321_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78323_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78320_MethodInfo,
	&InternalEnumerator_1_Dispose_m78322_MethodInfo,
	&InternalEnumerator_1_get_Current_m78324_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10939_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13115_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10939_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13115_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10939_0_0_0;
extern Il2CppType InternalEnumerator_1_t10939_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10939_GenericClass;
TypeInfo InternalEnumerator_1_t10939_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10939_MethodInfos/* methods */
	, InternalEnumerator_1_t10939_PropertyInfos/* properties */
	, InternalEnumerator_1_t10939_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10939_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10939_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10939_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10939_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10939_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10939_1_0_0/* this_arg */
	, InternalEnumerator_1_t10939_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10939_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10939)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14679_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>
extern MethodInfo ICollection_1_get_Count_m103943_MethodInfo;
static PropertyInfo ICollection_1_t14679____Count_PropertyInfo = 
{
	&ICollection_1_t14679_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103943_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103944_MethodInfo;
static PropertyInfo ICollection_1_t14679____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14679_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103944_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14679_PropertyInfos[] =
{
	&ICollection_1_t14679____Count_PropertyInfo,
	&ICollection_1_t14679____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103943_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::get_Count()
MethodInfo ICollection_1_get_Count_m103943_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14679_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103943_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103944_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103944_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14679_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103944_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t3272_0_0_0;
extern Il2CppType EnumeratorMode_t3272_0_0_0;
static ParameterInfo ICollection_1_t14679_ICollection_1_Add_m103945_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t3272_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103945_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Add(T)
MethodInfo ICollection_1_Add_m103945_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14679_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14679_ICollection_1_Add_m103945_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103945_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103946_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Clear()
MethodInfo ICollection_1_Clear_m103946_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14679_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103946_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t3272_0_0_0;
static ParameterInfo ICollection_1_t14679_ICollection_1_Contains_m103947_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t3272_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103947_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Contains(T)
MethodInfo ICollection_1_Contains_m103947_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14679_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14679_ICollection_1_Contains_m103947_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103947_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorModeU5BU5D_t11209_0_0_0;
extern Il2CppType EnumeratorModeU5BU5D_t11209_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14679_ICollection_1_CopyTo_m103948_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorModeU5BU5D_t11209_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103948_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103948_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14679_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14679_ICollection_1_CopyTo_m103948_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103948_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t3272_0_0_0;
static ParameterInfo ICollection_1_t14679_ICollection_1_Remove_m103949_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t3272_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103949_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Remove(T)
MethodInfo ICollection_1_Remove_m103949_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14679_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14679_ICollection_1_Remove_m103949_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103949_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14679_MethodInfos[] =
{
	&ICollection_1_get_Count_m103943_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103944_MethodInfo,
	&ICollection_1_Add_m103945_MethodInfo,
	&ICollection_1_Clear_m103946_MethodInfo,
	&ICollection_1_Contains_m103947_MethodInfo,
	&ICollection_1_CopyTo_m103948_MethodInfo,
	&ICollection_1_Remove_m103949_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14681_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14679_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14681_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14679_0_0_0;
extern Il2CppType ICollection_1_t14679_1_0_0;
struct ICollection_1_t14679;
extern Il2CppGenericClass ICollection_1_t14679_GenericClass;
TypeInfo ICollection_1_t14679_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14679_MethodInfos/* methods */
	, ICollection_1_t14679_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14679_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14679_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14679_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14679_0_0_0/* byval_arg */
	, &ICollection_1_t14679_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14679_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/EnumeratorMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/EnumeratorMode>
extern Il2CppType IEnumerator_1_t13115_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103950_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/EnumeratorMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103950_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14681_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13115_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103950_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14681_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103950_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14681_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14681_0_0_0;
extern Il2CppType IEnumerable_1_t14681_1_0_0;
struct IEnumerable_1_t14681;
extern Il2CppGenericClass IEnumerable_1_t14681_GenericClass;
TypeInfo IEnumerable_1_t14681_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14681_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14681_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14681_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14681_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14681_0_0_0/* byval_arg */
	, &IEnumerable_1_t14681_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14681_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14680_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>
extern MethodInfo IList_1_get_Item_m103951_MethodInfo;
extern MethodInfo IList_1_set_Item_m103952_MethodInfo;
static PropertyInfo IList_1_t14680____Item_PropertyInfo = 
{
	&IList_1_t14680_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103951_MethodInfo/* get */
	, &IList_1_set_Item_m103952_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14680_PropertyInfos[] =
{
	&IList_1_t14680____Item_PropertyInfo,
	NULL
};
extern Il2CppType EnumeratorMode_t3272_0_0_0;
static ParameterInfo IList_1_t14680_IList_1_IndexOf_m103953_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t3272_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103953_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103953_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14680_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14680_IList_1_IndexOf_m103953_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103953_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType EnumeratorMode_t3272_0_0_0;
static ParameterInfo IList_1_t14680_IList_1_Insert_m103954_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t3272_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103954_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103954_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14680_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14680_IList_1_Insert_m103954_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103954_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14680_IList_1_RemoveAt_m103955_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103955_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103955_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14680_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14680_IList_1_RemoveAt_m103955_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103955_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14680_IList_1_get_Item_m103951_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType EnumeratorMode_t3272_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t3272_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103951_GenericMethod;
// T System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103951_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14680_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t3272_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t3272_Int32_t23/* invoker_method */
	, IList_1_t14680_IList_1_get_Item_m103951_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103951_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType EnumeratorMode_t3272_0_0_0;
static ParameterInfo IList_1_t14680_IList_1_set_Item_m103952_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t3272_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103952_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103952_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14680_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14680_IList_1_set_Item_m103952_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103952_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14680_MethodInfos[] =
{
	&IList_1_IndexOf_m103953_MethodInfo,
	&IList_1_Insert_m103954_MethodInfo,
	&IList_1_RemoveAt_m103955_MethodInfo,
	&IList_1_get_Item_m103951_MethodInfo,
	&IList_1_set_Item_m103952_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14680_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14679_il2cpp_TypeInfo,
	&IEnumerable_1_t14681_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14680_0_0_0;
extern Il2CppType IList_1_t14680_1_0_0;
struct IList_1_t14680;
extern Il2CppGenericClass IList_1_t14680_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14680_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14680_MethodInfos/* methods */
	, IList_1_t14680_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14680_il2cpp_TypeInfo/* element_class */
	, IList_1_t14680_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14680_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14680_0_0_0/* byval_arg */
	, &IList_1_t14680_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14680_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13117_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern MethodInfo IEnumerator_1_get_Current_m103956_MethodInfo;
static PropertyInfo IEnumerator_1_t13117____Current_PropertyInfo = 
{
	&IEnumerator_1_t13117_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103956_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13117_PropertyInfos[] =
{
	&IEnumerator_1_t13117____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyHashAlgorithm_t3277_0_0_0;
extern void* RuntimeInvoker_AssemblyHashAlgorithm_t3277 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103956_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103956_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13117_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyHashAlgorithm_t3277_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyHashAlgorithm_t3277/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103956_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13117_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103956_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13117_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13117_0_0_0;
extern Il2CppType IEnumerator_1_t13117_1_0_0;
struct IEnumerator_1_t13117;
extern Il2CppGenericClass IEnumerator_1_t13117_GenericClass;
TypeInfo IEnumerator_1_t13117_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13117_MethodInfos/* methods */
	, IEnumerator_1_t13117_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13117_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13117_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13117_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13117_0_0_0/* byval_arg */
	, &IEnumerator_1_t13117_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13117_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10940_il2cpp_TypeInfo;

extern TypeInfo AssemblyHashAlgorithm_t3277_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78330_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyHashAlgorithm_t3277_m91445_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Configuration.Assemblies.AssemblyHashAlgorithm>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Configuration.Assemblies.AssemblyHashAlgorithm>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisAssemblyHashAlgorithm_t3277_m91445 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78325_MethodInfo;
 void InternalEnumerator_1__ctor_m78325 (InternalEnumerator_1_t10940 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78326_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78326 (InternalEnumerator_1_t10940 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78327_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78327 (InternalEnumerator_1_t10940 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78330(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78330_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AssemblyHashAlgorithm_t3277_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78328_MethodInfo;
 void InternalEnumerator_1_Dispose_m78328 (InternalEnumerator_1_t10940 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78329_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78329 (InternalEnumerator_1_t10940 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78330 (InternalEnumerator_1_t10940 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisAssemblyHashAlgorithm_t3277_m91445(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAssemblyHashAlgorithm_t3277_m91445_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10940____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10940_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10940, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10940____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10940_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10940, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10940_FieldInfos[] =
{
	&InternalEnumerator_1_t10940____array_0_FieldInfo,
	&InternalEnumerator_1_t10940____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10940____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10940_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78327_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10940____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10940_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78330_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10940_PropertyInfos[] =
{
	&InternalEnumerator_1_t10940____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10940____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10940_InternalEnumerator_1__ctor_m78325_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78325_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78325_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78325/* method */
	, &InternalEnumerator_1_t10940_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10940_InternalEnumerator_1__ctor_m78325_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78325_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78326_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78326_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78326/* method */
	, &InternalEnumerator_1_t10940_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78326_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78327_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78327_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78327/* method */
	, &InternalEnumerator_1_t10940_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78327_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78328_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78328_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78328/* method */
	, &InternalEnumerator_1_t10940_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78328_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78329_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78329_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78329/* method */
	, &InternalEnumerator_1_t10940_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78329_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyHashAlgorithm_t3277_0_0_0;
extern void* RuntimeInvoker_AssemblyHashAlgorithm_t3277 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78330_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78330_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78330/* method */
	, &InternalEnumerator_1_t10940_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyHashAlgorithm_t3277_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyHashAlgorithm_t3277/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m78330_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10940_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78325_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78326_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78327_MethodInfo,
	&InternalEnumerator_1_Dispose_m78328_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78329_MethodInfo,
	&InternalEnumerator_1_get_Current_m78330_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10940_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78327_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78329_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78326_MethodInfo,
	&InternalEnumerator_1_Dispose_m78328_MethodInfo,
	&InternalEnumerator_1_get_Current_m78330_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10940_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13117_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10940_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13117_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10940_0_0_0;
extern Il2CppType InternalEnumerator_1_t10940_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10940_GenericClass;
TypeInfo InternalEnumerator_1_t10940_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10940_MethodInfos/* methods */
	, InternalEnumerator_1_t10940_PropertyInfos/* properties */
	, InternalEnumerator_1_t10940_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10940_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10940_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10940_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10940_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10940_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10940_1_0_0/* this_arg */
	, InternalEnumerator_1_t10940_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10940_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10940)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14682_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern MethodInfo ICollection_1_get_Count_m103957_MethodInfo;
static PropertyInfo ICollection_1_t14682____Count_PropertyInfo = 
{
	&ICollection_1_t14682_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103957_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103958_MethodInfo;
static PropertyInfo ICollection_1_t14682____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14682_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103958_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14682_PropertyInfos[] =
{
	&ICollection_1_t14682____Count_PropertyInfo,
	&ICollection_1_t14682____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103957_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Count()
MethodInfo ICollection_1_get_Count_m103957_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14682_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103957_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103958_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103958_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14682_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103958_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyHashAlgorithm_t3277_0_0_0;
extern Il2CppType AssemblyHashAlgorithm_t3277_0_0_0;
static ParameterInfo ICollection_1_t14682_ICollection_1_Add_m103959_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithm_t3277_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103959_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Add(T)
MethodInfo ICollection_1_Add_m103959_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14682_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14682_ICollection_1_Add_m103959_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103959_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103960_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Clear()
MethodInfo ICollection_1_Clear_m103960_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14682_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103960_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyHashAlgorithm_t3277_0_0_0;
static ParameterInfo ICollection_1_t14682_ICollection_1_Contains_m103961_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithm_t3277_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103961_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Contains(T)
MethodInfo ICollection_1_Contains_m103961_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14682_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14682_ICollection_1_Contains_m103961_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103961_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyHashAlgorithmU5BU5D_t11210_0_0_0;
extern Il2CppType AssemblyHashAlgorithmU5BU5D_t11210_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14682_ICollection_1_CopyTo_m103962_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithmU5BU5D_t11210_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103962_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103962_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14682_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14682_ICollection_1_CopyTo_m103962_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103962_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyHashAlgorithm_t3277_0_0_0;
static ParameterInfo ICollection_1_t14682_ICollection_1_Remove_m103963_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithm_t3277_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103963_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Remove(T)
MethodInfo ICollection_1_Remove_m103963_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14682_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14682_ICollection_1_Remove_m103963_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103963_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14682_MethodInfos[] =
{
	&ICollection_1_get_Count_m103957_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103958_MethodInfo,
	&ICollection_1_Add_m103959_MethodInfo,
	&ICollection_1_Clear_m103960_MethodInfo,
	&ICollection_1_Contains_m103961_MethodInfo,
	&ICollection_1_CopyTo_m103962_MethodInfo,
	&ICollection_1_Remove_m103963_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14684_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14682_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14684_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14682_0_0_0;
extern Il2CppType ICollection_1_t14682_1_0_0;
struct ICollection_1_t14682;
extern Il2CppGenericClass ICollection_1_t14682_GenericClass;
TypeInfo ICollection_1_t14682_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14682_MethodInfos/* methods */
	, ICollection_1_t14682_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14682_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14682_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14682_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14682_0_0_0/* byval_arg */
	, &ICollection_1_t14682_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14682_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern Il2CppType IEnumerator_1_t13117_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103964_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103964_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14684_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13117_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103964_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14684_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103964_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14684_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14684_0_0_0;
extern Il2CppType IEnumerable_1_t14684_1_0_0;
struct IEnumerable_1_t14684;
extern Il2CppGenericClass IEnumerable_1_t14684_GenericClass;
TypeInfo IEnumerable_1_t14684_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14684_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14684_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14684_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14684_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14684_0_0_0/* byval_arg */
	, &IEnumerable_1_t14684_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14684_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14683_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern MethodInfo IList_1_get_Item_m103965_MethodInfo;
extern MethodInfo IList_1_set_Item_m103966_MethodInfo;
static PropertyInfo IList_1_t14683____Item_PropertyInfo = 
{
	&IList_1_t14683_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103965_MethodInfo/* get */
	, &IList_1_set_Item_m103966_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14683_PropertyInfos[] =
{
	&IList_1_t14683____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyHashAlgorithm_t3277_0_0_0;
static ParameterInfo IList_1_t14683_IList_1_IndexOf_m103967_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithm_t3277_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103967_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103967_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14683_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14683_IList_1_IndexOf_m103967_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103967_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType AssemblyHashAlgorithm_t3277_0_0_0;
static ParameterInfo IList_1_t14683_IList_1_Insert_m103968_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithm_t3277_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103968_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103968_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14683_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14683_IList_1_Insert_m103968_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103968_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14683_IList_1_RemoveAt_m103969_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103969_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103969_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14683_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14683_IList_1_RemoveAt_m103969_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103969_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14683_IList_1_get_Item_m103965_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType AssemblyHashAlgorithm_t3277_0_0_0;
extern void* RuntimeInvoker_AssemblyHashAlgorithm_t3277_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103965_GenericMethod;
// T System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103965_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14683_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyHashAlgorithm_t3277_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyHashAlgorithm_t3277_Int32_t23/* invoker_method */
	, IList_1_t14683_IList_1_get_Item_m103965_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103965_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType AssemblyHashAlgorithm_t3277_0_0_0;
static ParameterInfo IList_1_t14683_IList_1_set_Item_m103966_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithm_t3277_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103966_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103966_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14683_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14683_IList_1_set_Item_m103966_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103966_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14683_MethodInfos[] =
{
	&IList_1_IndexOf_m103967_MethodInfo,
	&IList_1_Insert_m103968_MethodInfo,
	&IList_1_RemoveAt_m103969_MethodInfo,
	&IList_1_get_Item_m103965_MethodInfo,
	&IList_1_set_Item_m103966_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14683_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14682_il2cpp_TypeInfo,
	&IEnumerable_1_t14684_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14683_0_0_0;
extern Il2CppType IList_1_t14683_1_0_0;
struct IList_1_t14683;
extern Il2CppGenericClass IList_1_t14683_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14683_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14683_MethodInfos/* methods */
	, IList_1_t14683_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14683_il2cpp_TypeInfo/* element_class */
	, IList_1_t14683_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14683_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14683_0_0_0/* byval_arg */
	, &IList_1_t14683_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14683_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13119_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
extern MethodInfo IEnumerator_1_get_Current_m103970_MethodInfo;
static PropertyInfo IEnumerator_1_t13119____Current_PropertyInfo = 
{
	&IEnumerator_1_t13119_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103970_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13119_PropertyInfos[] =
{
	&IEnumerator_1_t13119____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyVersionCompatibility_t3278_0_0_0;
extern void* RuntimeInvoker_AssemblyVersionCompatibility_t3278 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103970_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103970_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13119_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyVersionCompatibility_t3278_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyVersionCompatibility_t3278/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103970_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13119_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103970_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13119_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13119_0_0_0;
extern Il2CppType IEnumerator_1_t13119_1_0_0;
struct IEnumerator_1_t13119;
extern Il2CppGenericClass IEnumerator_1_t13119_GenericClass;
TypeInfo IEnumerator_1_t13119_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13119_MethodInfos/* methods */
	, IEnumerator_1_t13119_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13119_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13119_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13119_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13119_0_0_0/* byval_arg */
	, &IEnumerator_1_t13119_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13119_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10941_il2cpp_TypeInfo;

extern TypeInfo AssemblyVersionCompatibility_t3278_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78336_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyVersionCompatibility_t3278_m91456_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Configuration.Assemblies.AssemblyVersionCompatibility>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Configuration.Assemblies.AssemblyVersionCompatibility>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisAssemblyVersionCompatibility_t3278_m91456 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78331_MethodInfo;
 void InternalEnumerator_1__ctor_m78331 (InternalEnumerator_1_t10941 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78332_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78332 (InternalEnumerator_1_t10941 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78333_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78333 (InternalEnumerator_1_t10941 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78336(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78336_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AssemblyVersionCompatibility_t3278_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78334_MethodInfo;
 void InternalEnumerator_1_Dispose_m78334 (InternalEnumerator_1_t10941 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78335_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78335 (InternalEnumerator_1_t10941 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78336 (InternalEnumerator_1_t10941 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisAssemblyVersionCompatibility_t3278_m91456(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAssemblyVersionCompatibility_t3278_m91456_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10941____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10941_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10941, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10941____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10941_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10941, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10941_FieldInfos[] =
{
	&InternalEnumerator_1_t10941____array_0_FieldInfo,
	&InternalEnumerator_1_t10941____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10941____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10941_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78333_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10941____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10941_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78336_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10941_PropertyInfos[] =
{
	&InternalEnumerator_1_t10941____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10941____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10941_InternalEnumerator_1__ctor_m78331_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78331_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78331_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78331/* method */
	, &InternalEnumerator_1_t10941_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10941_InternalEnumerator_1__ctor_m78331_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78331_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78332_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78332_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78332/* method */
	, &InternalEnumerator_1_t10941_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78332_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78333_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78333_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78333/* method */
	, &InternalEnumerator_1_t10941_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78333_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78334_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78334_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78334/* method */
	, &InternalEnumerator_1_t10941_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78334_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78335_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78335_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78335/* method */
	, &InternalEnumerator_1_t10941_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78335_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyVersionCompatibility_t3278_0_0_0;
extern void* RuntimeInvoker_AssemblyVersionCompatibility_t3278 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78336_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78336_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78336/* method */
	, &InternalEnumerator_1_t10941_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyVersionCompatibility_t3278_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyVersionCompatibility_t3278/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m78336_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10941_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78331_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78332_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78333_MethodInfo,
	&InternalEnumerator_1_Dispose_m78334_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78335_MethodInfo,
	&InternalEnumerator_1_get_Current_m78336_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10941_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78333_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78335_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78332_MethodInfo,
	&InternalEnumerator_1_Dispose_m78334_MethodInfo,
	&InternalEnumerator_1_get_Current_m78336_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10941_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13119_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10941_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13119_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10941_0_0_0;
extern Il2CppType InternalEnumerator_1_t10941_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10941_GenericClass;
TypeInfo InternalEnumerator_1_t10941_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10941_MethodInfos/* methods */
	, InternalEnumerator_1_t10941_PropertyInfos/* properties */
	, InternalEnumerator_1_t10941_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10941_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10941_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10941_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10941_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10941_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10941_1_0_0/* this_arg */
	, InternalEnumerator_1_t10941_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10941_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10941)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14685_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
extern MethodInfo ICollection_1_get_Count_m103971_MethodInfo;
static PropertyInfo ICollection_1_t14685____Count_PropertyInfo = 
{
	&ICollection_1_t14685_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103971_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103972_MethodInfo;
static PropertyInfo ICollection_1_t14685____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14685_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103972_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14685_PropertyInfos[] =
{
	&ICollection_1_t14685____Count_PropertyInfo,
	&ICollection_1_t14685____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103971_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_Count()
MethodInfo ICollection_1_get_Count_m103971_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14685_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103971_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103972_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103972_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14685_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103972_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyVersionCompatibility_t3278_0_0_0;
extern Il2CppType AssemblyVersionCompatibility_t3278_0_0_0;
static ParameterInfo ICollection_1_t14685_ICollection_1_Add_m103973_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionCompatibility_t3278_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103973_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Add(T)
MethodInfo ICollection_1_Add_m103973_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14685_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14685_ICollection_1_Add_m103973_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103973_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103974_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Clear()
MethodInfo ICollection_1_Clear_m103974_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14685_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103974_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyVersionCompatibility_t3278_0_0_0;
static ParameterInfo ICollection_1_t14685_ICollection_1_Contains_m103975_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionCompatibility_t3278_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103975_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Contains(T)
MethodInfo ICollection_1_Contains_m103975_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14685_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14685_ICollection_1_Contains_m103975_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103975_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyVersionCompatibilityU5BU5D_t11211_0_0_0;
extern Il2CppType AssemblyVersionCompatibilityU5BU5D_t11211_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14685_ICollection_1_CopyTo_m103976_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionCompatibilityU5BU5D_t11211_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103976_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103976_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14685_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14685_ICollection_1_CopyTo_m103976_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103976_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyVersionCompatibility_t3278_0_0_0;
static ParameterInfo ICollection_1_t14685_ICollection_1_Remove_m103977_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionCompatibility_t3278_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103977_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Remove(T)
MethodInfo ICollection_1_Remove_m103977_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14685_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14685_ICollection_1_Remove_m103977_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103977_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14685_MethodInfos[] =
{
	&ICollection_1_get_Count_m103971_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103972_MethodInfo,
	&ICollection_1_Add_m103973_MethodInfo,
	&ICollection_1_Clear_m103974_MethodInfo,
	&ICollection_1_Contains_m103975_MethodInfo,
	&ICollection_1_CopyTo_m103976_MethodInfo,
	&ICollection_1_Remove_m103977_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14687_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14685_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14687_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14685_0_0_0;
extern Il2CppType ICollection_1_t14685_1_0_0;
struct ICollection_1_t14685;
extern Il2CppGenericClass ICollection_1_t14685_GenericClass;
TypeInfo ICollection_1_t14685_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14685_MethodInfos/* methods */
	, ICollection_1_t14685_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14685_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14685_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14685_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14685_0_0_0/* byval_arg */
	, &ICollection_1_t14685_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14685_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
extern Il2CppType IEnumerator_1_t13119_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103978_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103978_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14687_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13119_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103978_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14687_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103978_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14687_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14687_0_0_0;
extern Il2CppType IEnumerable_1_t14687_1_0_0;
struct IEnumerable_1_t14687;
extern Il2CppGenericClass IEnumerable_1_t14687_GenericClass;
TypeInfo IEnumerable_1_t14687_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14687_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14687_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14687_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14687_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14687_0_0_0/* byval_arg */
	, &IEnumerable_1_t14687_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14687_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14686_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
extern MethodInfo IList_1_get_Item_m103979_MethodInfo;
extern MethodInfo IList_1_set_Item_m103980_MethodInfo;
static PropertyInfo IList_1_t14686____Item_PropertyInfo = 
{
	&IList_1_t14686_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103979_MethodInfo/* get */
	, &IList_1_set_Item_m103980_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14686_PropertyInfos[] =
{
	&IList_1_t14686____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyVersionCompatibility_t3278_0_0_0;
static ParameterInfo IList_1_t14686_IList_1_IndexOf_m103981_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionCompatibility_t3278_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103981_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103981_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14686_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14686_IList_1_IndexOf_m103981_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103981_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType AssemblyVersionCompatibility_t3278_0_0_0;
static ParameterInfo IList_1_t14686_IList_1_Insert_m103982_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionCompatibility_t3278_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103982_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103982_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14686_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14686_IList_1_Insert_m103982_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103982_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14686_IList_1_RemoveAt_m103983_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103983_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103983_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14686_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14686_IList_1_RemoveAt_m103983_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103983_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14686_IList_1_get_Item_m103979_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType AssemblyVersionCompatibility_t3278_0_0_0;
extern void* RuntimeInvoker_AssemblyVersionCompatibility_t3278_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103979_GenericMethod;
// T System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103979_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14686_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyVersionCompatibility_t3278_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyVersionCompatibility_t3278_Int32_t23/* invoker_method */
	, IList_1_t14686_IList_1_get_Item_m103979_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103979_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType AssemblyVersionCompatibility_t3278_0_0_0;
static ParameterInfo IList_1_t14686_IList_1_set_Item_m103980_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionCompatibility_t3278_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103980_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103980_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14686_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14686_IList_1_set_Item_m103980_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103980_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14686_MethodInfos[] =
{
	&IList_1_IndexOf_m103981_MethodInfo,
	&IList_1_Insert_m103982_MethodInfo,
	&IList_1_RemoveAt_m103983_MethodInfo,
	&IList_1_get_Item_m103979_MethodInfo,
	&IList_1_set_Item_m103980_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14686_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14685_il2cpp_TypeInfo,
	&IEnumerable_1_t14687_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14686_0_0_0;
extern Il2CppType IList_1_t14686_1_0_0;
struct IList_1_t14686;
extern Il2CppGenericClass IList_1_t14686_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14686_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14686_MethodInfos/* methods */
	, IList_1_t14686_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14686_il2cpp_TypeInfo/* element_class */
	, IList_1_t14686_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14686_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14686_0_0_0/* byval_arg */
	, &IList_1_t14686_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14686_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13121_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggableAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggableAttribute>
extern MethodInfo IEnumerator_1_get_Current_m103984_MethodInfo;
static PropertyInfo IEnumerator_1_t13121____Current_PropertyInfo = 
{
	&IEnumerator_1_t13121_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103984_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13121_PropertyInfos[] =
{
	&IEnumerator_1_t13121____Current_PropertyInfo,
	NULL
};
extern Il2CppType DebuggableAttribute_t2002_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103984_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggableAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103984_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13121_il2cpp_TypeInfo/* declaring_type */
	, &DebuggableAttribute_t2002_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m103984_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13121_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103984_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13121_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13121_0_0_0;
extern Il2CppType IEnumerator_1_t13121_1_0_0;
struct IEnumerator_1_t13121;
extern Il2CppGenericClass IEnumerator_1_t13121_GenericClass;
TypeInfo IEnumerator_1_t13121_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13121_MethodInfos/* methods */
	, IEnumerator_1_t13121_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13121_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13121_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13121_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13121_0_0_0/* byval_arg */
	, &IEnumerator_1_t13121_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13121_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10942_il2cpp_TypeInfo;

extern TypeInfo DebuggableAttribute_t2002_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78342_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDebuggableAttribute_t2002_m91467_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggableAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggableAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDebuggableAttribute_t2002_m91467(__this, p0, method) (DebuggableAttribute_t2002 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10942____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10942_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10942, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10942____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10942_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10942, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10942_FieldInfos[] =
{
	&InternalEnumerator_1_t10942____array_0_FieldInfo,
	&InternalEnumerator_1_t10942____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78339_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10942____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10942_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78339_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10942____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10942_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78342_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10942_PropertyInfos[] =
{
	&InternalEnumerator_1_t10942____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10942____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10942_InternalEnumerator_1__ctor_m78337_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78337_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78337_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10942_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10942_InternalEnumerator_1__ctor_m78337_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78337_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78338_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78338_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10942_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78338_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78339_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78339_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10942_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78339_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78340_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78340_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10942_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78340_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78341_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78341_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10942_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78341_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggableAttribute_t2002_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78342_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78342_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10942_il2cpp_TypeInfo/* declaring_type */
	, &DebuggableAttribute_t2002_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m78342_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10942_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78337_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78338_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78339_MethodInfo,
	&InternalEnumerator_1_Dispose_m78340_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78341_MethodInfo,
	&InternalEnumerator_1_get_Current_m78342_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78341_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78338_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78340_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10942_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78339_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78341_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78338_MethodInfo,
	&InternalEnumerator_1_Dispose_m78340_MethodInfo,
	&InternalEnumerator_1_get_Current_m78342_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10942_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13121_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10942_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13121_il2cpp_TypeInfo, 8},
};
extern TypeInfo DebuggableAttribute_t2002_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10942_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78342_MethodInfo/* Method Usage */,
	&DebuggableAttribute_t2002_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDebuggableAttribute_t2002_m91467_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10942_0_0_0;
extern Il2CppType InternalEnumerator_1_t10942_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10942_GenericClass;
TypeInfo InternalEnumerator_1_t10942_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10942_MethodInfos/* methods */
	, InternalEnumerator_1_t10942_PropertyInfos/* properties */
	, InternalEnumerator_1_t10942_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10942_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10942_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10942_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10942_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10942_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10942_1_0_0/* this_arg */
	, InternalEnumerator_1_t10942_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10942_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10942_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10942)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14688_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>
extern MethodInfo ICollection_1_get_Count_m103985_MethodInfo;
static PropertyInfo ICollection_1_t14688____Count_PropertyInfo = 
{
	&ICollection_1_t14688_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103985_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103986_MethodInfo;
static PropertyInfo ICollection_1_t14688____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14688_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103986_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14688_PropertyInfos[] =
{
	&ICollection_1_t14688____Count_PropertyInfo,
	&ICollection_1_t14688____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103985_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m103985_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14688_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103985_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103986_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103986_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14688_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103986_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggableAttribute_t2002_0_0_0;
extern Il2CppType DebuggableAttribute_t2002_0_0_0;
static ParameterInfo ICollection_1_t14688_ICollection_1_Add_m103987_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggableAttribute_t2002_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103987_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::Add(T)
MethodInfo ICollection_1_Add_m103987_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14688_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14688_ICollection_1_Add_m103987_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103987_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103988_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::Clear()
MethodInfo ICollection_1_Clear_m103988_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14688_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103988_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggableAttribute_t2002_0_0_0;
static ParameterInfo ICollection_1_t14688_ICollection_1_Contains_m103989_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggableAttribute_t2002_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103989_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m103989_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14688_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14688_ICollection_1_Contains_m103989_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103989_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggableAttributeU5BU5D_t11212_0_0_0;
extern Il2CppType DebuggableAttributeU5BU5D_t11212_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14688_ICollection_1_CopyTo_m103990_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DebuggableAttributeU5BU5D_t11212_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103990_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103990_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14688_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14688_ICollection_1_CopyTo_m103990_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103990_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggableAttribute_t2002_0_0_0;
static ParameterInfo ICollection_1_t14688_ICollection_1_Remove_m103991_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggableAttribute_t2002_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103991_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m103991_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14688_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14688_ICollection_1_Remove_m103991_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103991_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14688_MethodInfos[] =
{
	&ICollection_1_get_Count_m103985_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103986_MethodInfo,
	&ICollection_1_Add_m103987_MethodInfo,
	&ICollection_1_Clear_m103988_MethodInfo,
	&ICollection_1_Contains_m103989_MethodInfo,
	&ICollection_1_CopyTo_m103990_MethodInfo,
	&ICollection_1_Remove_m103991_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14690_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14688_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14690_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14688_0_0_0;
extern Il2CppType ICollection_1_t14688_1_0_0;
struct ICollection_1_t14688;
extern Il2CppGenericClass ICollection_1_t14688_GenericClass;
TypeInfo ICollection_1_t14688_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14688_MethodInfos/* methods */
	, ICollection_1_t14688_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14688_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14688_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14688_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14688_0_0_0/* byval_arg */
	, &ICollection_1_t14688_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14688_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggableAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggableAttribute>
extern Il2CppType IEnumerator_1_t13121_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103992_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggableAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103992_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14690_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13121_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103992_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14690_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103992_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14690_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14690_0_0_0;
extern Il2CppType IEnumerable_1_t14690_1_0_0;
struct IEnumerable_1_t14690;
extern Il2CppGenericClass IEnumerable_1_t14690_GenericClass;
TypeInfo IEnumerable_1_t14690_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14690_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14690_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14690_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14690_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14690_0_0_0/* byval_arg */
	, &IEnumerable_1_t14690_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14690_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14689_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>
extern MethodInfo IList_1_get_Item_m103993_MethodInfo;
extern MethodInfo IList_1_set_Item_m103994_MethodInfo;
static PropertyInfo IList_1_t14689____Item_PropertyInfo = 
{
	&IList_1_t14689_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103993_MethodInfo/* get */
	, &IList_1_set_Item_m103994_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14689_PropertyInfos[] =
{
	&IList_1_t14689____Item_PropertyInfo,
	NULL
};
extern Il2CppType DebuggableAttribute_t2002_0_0_0;
static ParameterInfo IList_1_t14689_IList_1_IndexOf_m103995_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggableAttribute_t2002_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103995_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103995_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14689_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14689_IList_1_IndexOf_m103995_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103995_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DebuggableAttribute_t2002_0_0_0;
static ParameterInfo IList_1_t14689_IList_1_Insert_m103996_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DebuggableAttribute_t2002_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103996_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103996_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14689_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14689_IList_1_Insert_m103996_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103996_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14689_IList_1_RemoveAt_m103997_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103997_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103997_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14689_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14689_IList_1_RemoveAt_m103997_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103997_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14689_IList_1_get_Item_m103993_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType DebuggableAttribute_t2002_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103993_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103993_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14689_il2cpp_TypeInfo/* declaring_type */
	, &DebuggableAttribute_t2002_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14689_IList_1_get_Item_m103993_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103993_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DebuggableAttribute_t2002_0_0_0;
static ParameterInfo IList_1_t14689_IList_1_set_Item_m103994_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DebuggableAttribute_t2002_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103994_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103994_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14689_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14689_IList_1_set_Item_m103994_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103994_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14689_MethodInfos[] =
{
	&IList_1_IndexOf_m103995_MethodInfo,
	&IList_1_Insert_m103996_MethodInfo,
	&IList_1_RemoveAt_m103997_MethodInfo,
	&IList_1_get_Item_m103993_MethodInfo,
	&IList_1_set_Item_m103994_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14689_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14688_il2cpp_TypeInfo,
	&IEnumerable_1_t14690_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14689_0_0_0;
extern Il2CppType IList_1_t14689_1_0_0;
struct IList_1_t14689;
extern Il2CppGenericClass IList_1_t14689_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14689_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14689_MethodInfos/* methods */
	, IList_1_t14689_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14689_il2cpp_TypeInfo/* element_class */
	, IList_1_t14689_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14689_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14689_0_0_0/* byval_arg */
	, &IList_1_t14689_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14689_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13123_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
extern MethodInfo IEnumerator_1_get_Current_m103998_MethodInfo;
static PropertyInfo IEnumerator_1_t13123____Current_PropertyInfo = 
{
	&IEnumerator_1_t13123_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103998_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13123_PropertyInfos[] =
{
	&IEnumerator_1_t13123____Current_PropertyInfo,
	NULL
};
extern Il2CppType DebuggingModes_t3279_0_0_0;
extern void* RuntimeInvoker_DebuggingModes_t3279 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103998_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103998_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13123_il2cpp_TypeInfo/* declaring_type */
	, &DebuggingModes_t3279_0_0_0/* return_type */
	, RuntimeInvoker_DebuggingModes_t3279/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103998_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13123_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103998_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13123_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13123_0_0_0;
extern Il2CppType IEnumerator_1_t13123_1_0_0;
struct IEnumerator_1_t13123;
extern Il2CppGenericClass IEnumerator_1_t13123_GenericClass;
TypeInfo IEnumerator_1_t13123_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13123_MethodInfos/* methods */
	, IEnumerator_1_t13123_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13123_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13123_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13123_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13123_0_0_0/* byval_arg */
	, &IEnumerator_1_t13123_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13123_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10943_il2cpp_TypeInfo;

extern TypeInfo DebuggingModes_t3279_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78348_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDebuggingModes_t3279_m91478_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggableAttribute/DebuggingModes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggableAttribute/DebuggingModes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDebuggingModes_t3279_m91478 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78343_MethodInfo;
 void InternalEnumerator_1__ctor_m78343 (InternalEnumerator_1_t10943 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78344_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78344 (InternalEnumerator_1_t10943 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78345_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78345 (InternalEnumerator_1_t10943 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78348(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78348_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DebuggingModes_t3279_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78346_MethodInfo;
 void InternalEnumerator_1_Dispose_m78346 (InternalEnumerator_1_t10943 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78347_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78347 (InternalEnumerator_1_t10943 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78348 (InternalEnumerator_1_t10943 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDebuggingModes_t3279_m91478(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDebuggingModes_t3279_m91478_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10943____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10943_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10943, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10943____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10943_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10943, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10943_FieldInfos[] =
{
	&InternalEnumerator_1_t10943____array_0_FieldInfo,
	&InternalEnumerator_1_t10943____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10943____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10943_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78345_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10943____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10943_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78348_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10943_PropertyInfos[] =
{
	&InternalEnumerator_1_t10943____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10943____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10943_InternalEnumerator_1__ctor_m78343_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78343_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78343_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78343/* method */
	, &InternalEnumerator_1_t10943_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10943_InternalEnumerator_1__ctor_m78343_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78343_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78344_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78344_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78344/* method */
	, &InternalEnumerator_1_t10943_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78344_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78345_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78345_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78345/* method */
	, &InternalEnumerator_1_t10943_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78345_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78346_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78346_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78346/* method */
	, &InternalEnumerator_1_t10943_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78346_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78347_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78347_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78347/* method */
	, &InternalEnumerator_1_t10943_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78347_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggingModes_t3279_0_0_0;
extern void* RuntimeInvoker_DebuggingModes_t3279 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78348_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78348_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78348/* method */
	, &InternalEnumerator_1_t10943_il2cpp_TypeInfo/* declaring_type */
	, &DebuggingModes_t3279_0_0_0/* return_type */
	, RuntimeInvoker_DebuggingModes_t3279/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m78348_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10943_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78344_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78345_MethodInfo,
	&InternalEnumerator_1_Dispose_m78346_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78347_MethodInfo,
	&InternalEnumerator_1_get_Current_m78348_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10943_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78345_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78347_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78344_MethodInfo,
	&InternalEnumerator_1_Dispose_m78346_MethodInfo,
	&InternalEnumerator_1_get_Current_m78348_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10943_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13123_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10943_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13123_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10943_0_0_0;
extern Il2CppType InternalEnumerator_1_t10943_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10943_GenericClass;
TypeInfo InternalEnumerator_1_t10943_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10943_MethodInfos/* methods */
	, InternalEnumerator_1_t10943_PropertyInfos/* properties */
	, InternalEnumerator_1_t10943_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10943_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10943_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10943_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10943_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10943_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10943_1_0_0/* this_arg */
	, InternalEnumerator_1_t10943_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10943_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10943)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14691_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
extern MethodInfo ICollection_1_get_Count_m103999_MethodInfo;
static PropertyInfo ICollection_1_t14691____Count_PropertyInfo = 
{
	&ICollection_1_t14691_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103999_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m104000_MethodInfo;
static PropertyInfo ICollection_1_t14691____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14691_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m104000_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14691_PropertyInfos[] =
{
	&ICollection_1_t14691____Count_PropertyInfo,
	&ICollection_1_t14691____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103999_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_Count()
MethodInfo ICollection_1_get_Count_m103999_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14691_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103999_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m104000_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m104000_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14691_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m104000_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggingModes_t3279_0_0_0;
extern Il2CppType DebuggingModes_t3279_0_0_0;
static ParameterInfo ICollection_1_t14691_ICollection_1_Add_m104001_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggingModes_t3279_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m104001_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Add(T)
MethodInfo ICollection_1_Add_m104001_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14691_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14691_ICollection_1_Add_m104001_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m104001_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m104002_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Clear()
MethodInfo ICollection_1_Clear_m104002_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14691_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m104002_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggingModes_t3279_0_0_0;
static ParameterInfo ICollection_1_t14691_ICollection_1_Contains_m104003_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggingModes_t3279_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m104003_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Contains(T)
MethodInfo ICollection_1_Contains_m104003_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14691_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14691_ICollection_1_Contains_m104003_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m104003_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggingModesU5BU5D_t11213_0_0_0;
extern Il2CppType DebuggingModesU5BU5D_t11213_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14691_ICollection_1_CopyTo_m104004_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DebuggingModesU5BU5D_t11213_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m104004_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m104004_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14691_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14691_ICollection_1_CopyTo_m104004_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m104004_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggingModes_t3279_0_0_0;
static ParameterInfo ICollection_1_t14691_ICollection_1_Remove_m104005_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggingModes_t3279_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m104005_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Remove(T)
MethodInfo ICollection_1_Remove_m104005_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14691_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14691_ICollection_1_Remove_m104005_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m104005_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14691_MethodInfos[] =
{
	&ICollection_1_get_Count_m103999_MethodInfo,
	&ICollection_1_get_IsReadOnly_m104000_MethodInfo,
	&ICollection_1_Add_m104001_MethodInfo,
	&ICollection_1_Clear_m104002_MethodInfo,
	&ICollection_1_Contains_m104003_MethodInfo,
	&ICollection_1_CopyTo_m104004_MethodInfo,
	&ICollection_1_Remove_m104005_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14693_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14691_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14693_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14691_0_0_0;
extern Il2CppType ICollection_1_t14691_1_0_0;
struct ICollection_1_t14691;
extern Il2CppGenericClass ICollection_1_t14691_GenericClass;
TypeInfo ICollection_1_t14691_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14691_MethodInfos/* methods */
	, ICollection_1_t14691_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14691_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14691_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14691_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14691_0_0_0/* byval_arg */
	, &ICollection_1_t14691_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14691_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
extern Il2CppType IEnumerator_1_t13123_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m104006_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m104006_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14693_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13123_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m104006_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14693_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m104006_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14693_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14693_0_0_0;
extern Il2CppType IEnumerable_1_t14693_1_0_0;
struct IEnumerable_1_t14693;
extern Il2CppGenericClass IEnumerable_1_t14693_GenericClass;
TypeInfo IEnumerable_1_t14693_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14693_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14693_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14693_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14693_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14693_0_0_0/* byval_arg */
	, &IEnumerable_1_t14693_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14693_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14692_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
extern MethodInfo IList_1_get_Item_m104007_MethodInfo;
extern MethodInfo IList_1_set_Item_m104008_MethodInfo;
static PropertyInfo IList_1_t14692____Item_PropertyInfo = 
{
	&IList_1_t14692_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m104007_MethodInfo/* get */
	, &IList_1_set_Item_m104008_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14692_PropertyInfos[] =
{
	&IList_1_t14692____Item_PropertyInfo,
	NULL
};
extern Il2CppType DebuggingModes_t3279_0_0_0;
static ParameterInfo IList_1_t14692_IList_1_IndexOf_m104009_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggingModes_t3279_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m104009_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m104009_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14692_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14692_IList_1_IndexOf_m104009_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m104009_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DebuggingModes_t3279_0_0_0;
static ParameterInfo IList_1_t14692_IList_1_Insert_m104010_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DebuggingModes_t3279_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m104010_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m104010_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14692_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14692_IList_1_Insert_m104010_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m104010_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14692_IList_1_RemoveAt_m104011_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m104011_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m104011_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14692_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14692_IList_1_RemoveAt_m104011_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m104011_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14692_IList_1_get_Item_m104007_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType DebuggingModes_t3279_0_0_0;
extern void* RuntimeInvoker_DebuggingModes_t3279_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m104007_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m104007_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14692_il2cpp_TypeInfo/* declaring_type */
	, &DebuggingModes_t3279_0_0_0/* return_type */
	, RuntimeInvoker_DebuggingModes_t3279_Int32_t23/* invoker_method */
	, IList_1_t14692_IList_1_get_Item_m104007_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m104007_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DebuggingModes_t3279_0_0_0;
static ParameterInfo IList_1_t14692_IList_1_set_Item_m104008_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DebuggingModes_t3279_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m104008_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m104008_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14692_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14692_IList_1_set_Item_m104008_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m104008_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14692_MethodInfos[] =
{
	&IList_1_IndexOf_m104009_MethodInfo,
	&IList_1_Insert_m104010_MethodInfo,
	&IList_1_RemoveAt_m104011_MethodInfo,
	&IList_1_get_Item_m104007_MethodInfo,
	&IList_1_set_Item_m104008_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14692_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14691_il2cpp_TypeInfo,
	&IEnumerable_1_t14693_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14692_0_0_0;
extern Il2CppType IList_1_t14692_1_0_0;
struct IList_1_t14692;
extern Il2CppGenericClass IList_1_t14692_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14692_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14692_MethodInfos/* methods */
	, IList_1_t14692_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14692_il2cpp_TypeInfo/* element_class */
	, IList_1_t14692_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14692_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14692_0_0_0/* byval_arg */
	, &IList_1_t14692_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14692_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13125_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerBrowsableAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerBrowsableAttribute>
extern MethodInfo IEnumerator_1_get_Current_m104012_MethodInfo;
static PropertyInfo IEnumerator_1_t13125____Current_PropertyInfo = 
{
	&IEnumerator_1_t13125_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m104012_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13125_PropertyInfos[] =
{
	&IEnumerator_1_t13125____Current_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerBrowsableAttribute_t1987_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m104012_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerBrowsableAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m104012_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13125_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerBrowsableAttribute_t1987_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m104012_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13125_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m104012_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13125_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13125_0_0_0;
extern Il2CppType IEnumerator_1_t13125_1_0_0;
struct IEnumerator_1_t13125;
extern Il2CppGenericClass IEnumerator_1_t13125_GenericClass;
TypeInfo IEnumerator_1_t13125_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13125_MethodInfos/* methods */
	, IEnumerator_1_t13125_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13125_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13125_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13125_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13125_0_0_0/* byval_arg */
	, &IEnumerator_1_t13125_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13125_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10944_il2cpp_TypeInfo;

extern TypeInfo DebuggerBrowsableAttribute_t1987_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78354_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDebuggerBrowsableAttribute_t1987_m91489_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerBrowsableAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerBrowsableAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDebuggerBrowsableAttribute_t1987_m91489(__this, p0, method) (DebuggerBrowsableAttribute_t1987 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10944____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10944_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10944, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10944____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10944_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10944, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10944_FieldInfos[] =
{
	&InternalEnumerator_1_t10944____array_0_FieldInfo,
	&InternalEnumerator_1_t10944____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78351_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10944____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10944_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78351_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10944____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10944_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78354_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10944_PropertyInfos[] =
{
	&InternalEnumerator_1_t10944____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10944____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10944_InternalEnumerator_1__ctor_m78349_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78349_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78349_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10944_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10944_InternalEnumerator_1__ctor_m78349_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78349_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78350_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78350_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10944_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78350_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78351_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78351_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10944_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78351_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78352_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78352_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10944_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78352_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78353_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78353_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10944_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78353_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerBrowsableAttribute_t1987_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78354_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78354_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10944_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerBrowsableAttribute_t1987_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m78354_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10944_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78349_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78350_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78351_MethodInfo,
	&InternalEnumerator_1_Dispose_m78352_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78353_MethodInfo,
	&InternalEnumerator_1_get_Current_m78354_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78353_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78350_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78352_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10944_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78351_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78353_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78350_MethodInfo,
	&InternalEnumerator_1_Dispose_m78352_MethodInfo,
	&InternalEnumerator_1_get_Current_m78354_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10944_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13125_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10944_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13125_il2cpp_TypeInfo, 8},
};
extern TypeInfo DebuggerBrowsableAttribute_t1987_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10944_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78354_MethodInfo/* Method Usage */,
	&DebuggerBrowsableAttribute_t1987_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDebuggerBrowsableAttribute_t1987_m91489_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10944_0_0_0;
extern Il2CppType InternalEnumerator_1_t10944_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10944_GenericClass;
TypeInfo InternalEnumerator_1_t10944_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10944_MethodInfos/* methods */
	, InternalEnumerator_1_t10944_PropertyInfos/* properties */
	, InternalEnumerator_1_t10944_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10944_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10944_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10944_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10944_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10944_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10944_1_0_0/* this_arg */
	, InternalEnumerator_1_t10944_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10944_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10944_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10944)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14694_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableAttribute>
extern MethodInfo ICollection_1_get_Count_m104013_MethodInfo;
static PropertyInfo ICollection_1_t14694____Count_PropertyInfo = 
{
	&ICollection_1_t14694_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m104013_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m104014_MethodInfo;
static PropertyInfo ICollection_1_t14694____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14694_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m104014_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14694_PropertyInfos[] =
{
	&ICollection_1_t14694____Count_PropertyInfo,
	&ICollection_1_t14694____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m104013_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m104013_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14694_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m104013_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m104014_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m104014_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14694_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m104014_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerBrowsableAttribute_t1987_0_0_0;
extern Il2CppType DebuggerBrowsableAttribute_t1987_0_0_0;
static ParameterInfo ICollection_1_t14694_ICollection_1_Add_m104015_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerBrowsableAttribute_t1987_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m104015_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableAttribute>::Add(T)
MethodInfo ICollection_1_Add_m104015_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14694_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14694_ICollection_1_Add_m104015_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m104015_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m104016_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableAttribute>::Clear()
MethodInfo ICollection_1_Clear_m104016_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14694_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m104016_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerBrowsableAttribute_t1987_0_0_0;
static ParameterInfo ICollection_1_t14694_ICollection_1_Contains_m104017_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerBrowsableAttribute_t1987_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m104017_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m104017_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14694_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14694_ICollection_1_Contains_m104017_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m104017_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerBrowsableAttributeU5BU5D_t11214_0_0_0;
extern Il2CppType DebuggerBrowsableAttributeU5BU5D_t11214_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14694_ICollection_1_CopyTo_m104018_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerBrowsableAttributeU5BU5D_t11214_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m104018_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m104018_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14694_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14694_ICollection_1_CopyTo_m104018_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m104018_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerBrowsableAttribute_t1987_0_0_0;
static ParameterInfo ICollection_1_t14694_ICollection_1_Remove_m104019_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerBrowsableAttribute_t1987_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m104019_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m104019_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14694_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14694_ICollection_1_Remove_m104019_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m104019_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14694_MethodInfos[] =
{
	&ICollection_1_get_Count_m104013_MethodInfo,
	&ICollection_1_get_IsReadOnly_m104014_MethodInfo,
	&ICollection_1_Add_m104015_MethodInfo,
	&ICollection_1_Clear_m104016_MethodInfo,
	&ICollection_1_Contains_m104017_MethodInfo,
	&ICollection_1_CopyTo_m104018_MethodInfo,
	&ICollection_1_Remove_m104019_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14696_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14694_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14696_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14694_0_0_0;
extern Il2CppType ICollection_1_t14694_1_0_0;
struct ICollection_1_t14694;
extern Il2CppGenericClass ICollection_1_t14694_GenericClass;
TypeInfo ICollection_1_t14694_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14694_MethodInfos/* methods */
	, ICollection_1_t14694_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14694_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14694_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14694_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14694_0_0_0/* byval_arg */
	, &ICollection_1_t14694_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14694_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerBrowsableAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerBrowsableAttribute>
extern Il2CppType IEnumerator_1_t13125_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m104020_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerBrowsableAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m104020_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14696_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13125_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m104020_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14696_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m104020_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14696_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14696_0_0_0;
extern Il2CppType IEnumerable_1_t14696_1_0_0;
struct IEnumerable_1_t14696;
extern Il2CppGenericClass IEnumerable_1_t14696_GenericClass;
TypeInfo IEnumerable_1_t14696_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14696_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14696_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14696_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14696_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14696_0_0_0/* byval_arg */
	, &IEnumerable_1_t14696_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14696_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14695_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableAttribute>
extern MethodInfo IList_1_get_Item_m104021_MethodInfo;
extern MethodInfo IList_1_set_Item_m104022_MethodInfo;
static PropertyInfo IList_1_t14695____Item_PropertyInfo = 
{
	&IList_1_t14695_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m104021_MethodInfo/* get */
	, &IList_1_set_Item_m104022_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14695_PropertyInfos[] =
{
	&IList_1_t14695____Item_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerBrowsableAttribute_t1987_0_0_0;
static ParameterInfo IList_1_t14695_IList_1_IndexOf_m104023_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerBrowsableAttribute_t1987_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m104023_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m104023_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14695_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14695_IList_1_IndexOf_m104023_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m104023_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DebuggerBrowsableAttribute_t1987_0_0_0;
static ParameterInfo IList_1_t14695_IList_1_Insert_m104024_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerBrowsableAttribute_t1987_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m104024_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m104024_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14695_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14695_IList_1_Insert_m104024_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m104024_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14695_IList_1_RemoveAt_m104025_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m104025_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m104025_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14695_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14695_IList_1_RemoveAt_m104025_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m104025_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14695_IList_1_get_Item_m104021_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType DebuggerBrowsableAttribute_t1987_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m104021_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m104021_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14695_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerBrowsableAttribute_t1987_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14695_IList_1_get_Item_m104021_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m104021_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DebuggerBrowsableAttribute_t1987_0_0_0;
static ParameterInfo IList_1_t14695_IList_1_set_Item_m104022_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerBrowsableAttribute_t1987_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m104022_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m104022_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14695_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14695_IList_1_set_Item_m104022_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m104022_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14695_MethodInfos[] =
{
	&IList_1_IndexOf_m104023_MethodInfo,
	&IList_1_Insert_m104024_MethodInfo,
	&IList_1_RemoveAt_m104025_MethodInfo,
	&IList_1_get_Item_m104021_MethodInfo,
	&IList_1_set_Item_m104022_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14695_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14694_il2cpp_TypeInfo,
	&IEnumerable_1_t14696_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14695_0_0_0;
extern Il2CppType IList_1_t14695_1_0_0;
struct IList_1_t14695;
extern Il2CppGenericClass IList_1_t14695_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14695_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14695_MethodInfos/* methods */
	, IList_1_t14695_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14695_il2cpp_TypeInfo/* element_class */
	, IList_1_t14695_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14695_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14695_0_0_0/* byval_arg */
	, &IList_1_t14695_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14695_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13127_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerBrowsableState>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerBrowsableState>
extern MethodInfo IEnumerator_1_get_Current_m104026_MethodInfo;
static PropertyInfo IEnumerator_1_t13127____Current_PropertyInfo = 
{
	&IEnumerator_1_t13127_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m104026_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13127_PropertyInfos[] =
{
	&IEnumerator_1_t13127____Current_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerBrowsableState_t3280_0_0_0;
extern void* RuntimeInvoker_DebuggerBrowsableState_t3280 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m104026_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerBrowsableState>::get_Current()
MethodInfo IEnumerator_1_get_Current_m104026_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13127_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerBrowsableState_t3280_0_0_0/* return_type */
	, RuntimeInvoker_DebuggerBrowsableState_t3280/* invoker_method */
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
	, &IEnumerator_1_get_Current_m104026_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13127_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m104026_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13127_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13127_0_0_0;
extern Il2CppType IEnumerator_1_t13127_1_0_0;
struct IEnumerator_1_t13127;
extern Il2CppGenericClass IEnumerator_1_t13127_GenericClass;
TypeInfo IEnumerator_1_t13127_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13127_MethodInfos/* methods */
	, IEnumerator_1_t13127_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13127_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13127_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13127_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13127_0_0_0/* byval_arg */
	, &IEnumerator_1_t13127_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13127_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10945_il2cpp_TypeInfo;

extern TypeInfo DebuggerBrowsableState_t3280_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78360_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDebuggerBrowsableState_t3280_m91500_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerBrowsableState>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerBrowsableState>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDebuggerBrowsableState_t3280_m91500 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableState>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78355_MethodInfo;
 void InternalEnumerator_1__ctor_m78355 (InternalEnumerator_1_t10945 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableState>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78356_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78356 (InternalEnumerator_1_t10945 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableState>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78357_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78357 (InternalEnumerator_1_t10945 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78360(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78360_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DebuggerBrowsableState_t3280_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableState>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78358_MethodInfo;
 void InternalEnumerator_1_Dispose_m78358 (InternalEnumerator_1_t10945 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableState>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78359_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78359 (InternalEnumerator_1_t10945 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableState>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78360 (InternalEnumerator_1_t10945 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDebuggerBrowsableState_t3280_m91500(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDebuggerBrowsableState_t3280_m91500_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableState>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10945____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10945_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10945, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10945____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10945_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10945, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10945_FieldInfos[] =
{
	&InternalEnumerator_1_t10945____array_0_FieldInfo,
	&InternalEnumerator_1_t10945____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10945____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10945_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78357_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10945____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10945_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78360_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10945_PropertyInfos[] =
{
	&InternalEnumerator_1_t10945____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10945____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10945_InternalEnumerator_1__ctor_m78355_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78355_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableState>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78355_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78355/* method */
	, &InternalEnumerator_1_t10945_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10945_InternalEnumerator_1__ctor_m78355_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78355_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78356_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableState>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78356_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78356/* method */
	, &InternalEnumerator_1_t10945_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78356_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78357_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableState>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78357_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78357/* method */
	, &InternalEnumerator_1_t10945_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78357_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78358_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableState>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78358_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78358/* method */
	, &InternalEnumerator_1_t10945_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78358_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78359_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableState>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78359_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78359/* method */
	, &InternalEnumerator_1_t10945_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78359_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerBrowsableState_t3280_0_0_0;
extern void* RuntimeInvoker_DebuggerBrowsableState_t3280 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78360_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerBrowsableState>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78360_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78360/* method */
	, &InternalEnumerator_1_t10945_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerBrowsableState_t3280_0_0_0/* return_type */
	, RuntimeInvoker_DebuggerBrowsableState_t3280/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m78360_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10945_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78355_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78356_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78357_MethodInfo,
	&InternalEnumerator_1_Dispose_m78358_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78359_MethodInfo,
	&InternalEnumerator_1_get_Current_m78360_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10945_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78357_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78359_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78356_MethodInfo,
	&InternalEnumerator_1_Dispose_m78358_MethodInfo,
	&InternalEnumerator_1_get_Current_m78360_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10945_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13127_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10945_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13127_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10945_0_0_0;
extern Il2CppType InternalEnumerator_1_t10945_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10945_GenericClass;
TypeInfo InternalEnumerator_1_t10945_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10945_MethodInfos/* methods */
	, InternalEnumerator_1_t10945_PropertyInfos/* properties */
	, InternalEnumerator_1_t10945_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10945_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10945_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10945_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10945_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10945_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10945_1_0_0/* this_arg */
	, InternalEnumerator_1_t10945_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10945_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10945)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14697_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableState>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableState>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableState>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableState>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableState>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableState>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableState>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableState>
extern MethodInfo ICollection_1_get_Count_m104027_MethodInfo;
static PropertyInfo ICollection_1_t14697____Count_PropertyInfo = 
{
	&ICollection_1_t14697_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m104027_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m104028_MethodInfo;
static PropertyInfo ICollection_1_t14697____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14697_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m104028_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14697_PropertyInfos[] =
{
	&ICollection_1_t14697____Count_PropertyInfo,
	&ICollection_1_t14697____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m104027_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableState>::get_Count()
MethodInfo ICollection_1_get_Count_m104027_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14697_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m104027_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m104028_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableState>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m104028_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14697_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m104028_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerBrowsableState_t3280_0_0_0;
extern Il2CppType DebuggerBrowsableState_t3280_0_0_0;
static ParameterInfo ICollection_1_t14697_ICollection_1_Add_m104029_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerBrowsableState_t3280_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m104029_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableState>::Add(T)
MethodInfo ICollection_1_Add_m104029_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14697_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14697_ICollection_1_Add_m104029_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m104029_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m104030_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableState>::Clear()
MethodInfo ICollection_1_Clear_m104030_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14697_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m104030_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerBrowsableState_t3280_0_0_0;
static ParameterInfo ICollection_1_t14697_ICollection_1_Contains_m104031_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerBrowsableState_t3280_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m104031_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableState>::Contains(T)
MethodInfo ICollection_1_Contains_m104031_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14697_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14697_ICollection_1_Contains_m104031_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m104031_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerBrowsableStateU5BU5D_t11215_0_0_0;
extern Il2CppType DebuggerBrowsableStateU5BU5D_t11215_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14697_ICollection_1_CopyTo_m104032_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerBrowsableStateU5BU5D_t11215_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m104032_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableState>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m104032_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14697_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14697_ICollection_1_CopyTo_m104032_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m104032_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerBrowsableState_t3280_0_0_0;
static ParameterInfo ICollection_1_t14697_ICollection_1_Remove_m104033_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerBrowsableState_t3280_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m104033_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerBrowsableState>::Remove(T)
MethodInfo ICollection_1_Remove_m104033_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14697_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14697_ICollection_1_Remove_m104033_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m104033_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14697_MethodInfos[] =
{
	&ICollection_1_get_Count_m104027_MethodInfo,
	&ICollection_1_get_IsReadOnly_m104028_MethodInfo,
	&ICollection_1_Add_m104029_MethodInfo,
	&ICollection_1_Clear_m104030_MethodInfo,
	&ICollection_1_Contains_m104031_MethodInfo,
	&ICollection_1_CopyTo_m104032_MethodInfo,
	&ICollection_1_Remove_m104033_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14699_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14697_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14699_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14697_0_0_0;
extern Il2CppType ICollection_1_t14697_1_0_0;
struct ICollection_1_t14697;
extern Il2CppGenericClass ICollection_1_t14697_GenericClass;
TypeInfo ICollection_1_t14697_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14697_MethodInfos/* methods */
	, ICollection_1_t14697_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14697_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14697_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14697_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14697_0_0_0/* byval_arg */
	, &ICollection_1_t14697_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14697_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerBrowsableState>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerBrowsableState>
extern Il2CppType IEnumerator_1_t13127_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m104034_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerBrowsableState>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m104034_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14699_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13127_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m104034_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14699_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m104034_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14699_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14699_0_0_0;
extern Il2CppType IEnumerable_1_t14699_1_0_0;
struct IEnumerable_1_t14699;
extern Il2CppGenericClass IEnumerable_1_t14699_GenericClass;
TypeInfo IEnumerable_1_t14699_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14699_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14699_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14699_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14699_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14699_0_0_0/* byval_arg */
	, &IEnumerable_1_t14699_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14699_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14698_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableState>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableState>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableState>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableState>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableState>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableState>
extern MethodInfo IList_1_get_Item_m104035_MethodInfo;
extern MethodInfo IList_1_set_Item_m104036_MethodInfo;
static PropertyInfo IList_1_t14698____Item_PropertyInfo = 
{
	&IList_1_t14698_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m104035_MethodInfo/* get */
	, &IList_1_set_Item_m104036_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14698_PropertyInfos[] =
{
	&IList_1_t14698____Item_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerBrowsableState_t3280_0_0_0;
static ParameterInfo IList_1_t14698_IList_1_IndexOf_m104037_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerBrowsableState_t3280_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m104037_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableState>::IndexOf(T)
MethodInfo IList_1_IndexOf_m104037_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14698_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14698_IList_1_IndexOf_m104037_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m104037_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DebuggerBrowsableState_t3280_0_0_0;
static ParameterInfo IList_1_t14698_IList_1_Insert_m104038_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerBrowsableState_t3280_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m104038_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableState>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m104038_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14698_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14698_IList_1_Insert_m104038_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m104038_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14698_IList_1_RemoveAt_m104039_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m104039_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableState>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m104039_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14698_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14698_IList_1_RemoveAt_m104039_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m104039_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14698_IList_1_get_Item_m104035_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType DebuggerBrowsableState_t3280_0_0_0;
extern void* RuntimeInvoker_DebuggerBrowsableState_t3280_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m104035_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableState>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m104035_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14698_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerBrowsableState_t3280_0_0_0/* return_type */
	, RuntimeInvoker_DebuggerBrowsableState_t3280_Int32_t23/* invoker_method */
	, IList_1_t14698_IList_1_get_Item_m104035_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m104035_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DebuggerBrowsableState_t3280_0_0_0;
static ParameterInfo IList_1_t14698_IList_1_set_Item_m104036_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerBrowsableState_t3280_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m104036_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerBrowsableState>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m104036_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14698_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14698_IList_1_set_Item_m104036_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m104036_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14698_MethodInfos[] =
{
	&IList_1_IndexOf_m104037_MethodInfo,
	&IList_1_Insert_m104038_MethodInfo,
	&IList_1_RemoveAt_m104039_MethodInfo,
	&IList_1_get_Item_m104035_MethodInfo,
	&IList_1_set_Item_m104036_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14698_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14697_il2cpp_TypeInfo,
	&IEnumerable_1_t14699_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14698_0_0_0;
extern Il2CppType IList_1_t14698_1_0_0;
struct IList_1_t14698;
extern Il2CppGenericClass IList_1_t14698_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14698_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14698_MethodInfos/* methods */
	, IList_1_t14698_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14698_il2cpp_TypeInfo/* element_class */
	, IList_1_t14698_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14698_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14698_0_0_0/* byval_arg */
	, &IList_1_t14698_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14698_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13129_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>
extern MethodInfo IEnumerator_1_get_Current_m104040_MethodInfo;
static PropertyInfo IEnumerator_1_t13129____Current_PropertyInfo = 
{
	&IEnumerator_1_t13129_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m104040_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13129_PropertyInfos[] =
{
	&IEnumerator_1_t13129____Current_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerDisplayAttribute_t3281_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m104040_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m104040_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13129_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerDisplayAttribute_t3281_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m104040_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13129_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m104040_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13129_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13129_0_0_0;
extern Il2CppType IEnumerator_1_t13129_1_0_0;
struct IEnumerator_1_t13129;
extern Il2CppGenericClass IEnumerator_1_t13129_GenericClass;
TypeInfo IEnumerator_1_t13129_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13129_MethodInfos/* methods */
	, IEnumerator_1_t13129_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13129_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13129_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13129_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13129_0_0_0/* byval_arg */
	, &IEnumerator_1_t13129_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13129_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10946_il2cpp_TypeInfo;

extern TypeInfo DebuggerDisplayAttribute_t3281_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78366_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDebuggerDisplayAttribute_t3281_m91511_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerDisplayAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerDisplayAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDebuggerDisplayAttribute_t3281_m91511(__this, p0, method) (DebuggerDisplayAttribute_t3281 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10946____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10946_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10946, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10946____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10946_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10946, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10946_FieldInfos[] =
{
	&InternalEnumerator_1_t10946____array_0_FieldInfo,
	&InternalEnumerator_1_t10946____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78363_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10946____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10946_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78363_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10946____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10946_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78366_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10946_PropertyInfos[] =
{
	&InternalEnumerator_1_t10946____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10946____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10946_InternalEnumerator_1__ctor_m78361_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78361_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78361_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10946_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10946_InternalEnumerator_1__ctor_m78361_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78361_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78362_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78362_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10946_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78362_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78363_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78363_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10946_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78363_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78364_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78364_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10946_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78364_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78365_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78365_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10946_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78365_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerDisplayAttribute_t3281_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78366_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78366_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10946_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerDisplayAttribute_t3281_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m78366_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10946_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78361_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78362_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78363_MethodInfo,
	&InternalEnumerator_1_Dispose_m78364_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78365_MethodInfo,
	&InternalEnumerator_1_get_Current_m78366_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78365_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78362_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78364_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10946_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78363_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78365_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78362_MethodInfo,
	&InternalEnumerator_1_Dispose_m78364_MethodInfo,
	&InternalEnumerator_1_get_Current_m78366_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10946_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13129_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10946_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13129_il2cpp_TypeInfo, 8},
};
extern TypeInfo DebuggerDisplayAttribute_t3281_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10946_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78366_MethodInfo/* Method Usage */,
	&DebuggerDisplayAttribute_t3281_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDebuggerDisplayAttribute_t3281_m91511_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10946_0_0_0;
extern Il2CppType InternalEnumerator_1_t10946_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10946_GenericClass;
TypeInfo InternalEnumerator_1_t10946_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10946_MethodInfos/* methods */
	, InternalEnumerator_1_t10946_PropertyInfos/* properties */
	, InternalEnumerator_1_t10946_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10946_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10946_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10946_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10946_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10946_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10946_1_0_0/* this_arg */
	, InternalEnumerator_1_t10946_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10946_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10946_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10946)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14700_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>
extern MethodInfo ICollection_1_get_Count_m104041_MethodInfo;
static PropertyInfo ICollection_1_t14700____Count_PropertyInfo = 
{
	&ICollection_1_t14700_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m104041_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m104042_MethodInfo;
static PropertyInfo ICollection_1_t14700____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14700_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m104042_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14700_PropertyInfos[] =
{
	&ICollection_1_t14700____Count_PropertyInfo,
	&ICollection_1_t14700____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m104041_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m104041_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14700_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m104041_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m104042_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m104042_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14700_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m104042_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerDisplayAttribute_t3281_0_0_0;
extern Il2CppType DebuggerDisplayAttribute_t3281_0_0_0;
static ParameterInfo ICollection_1_t14700_ICollection_1_Add_m104043_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerDisplayAttribute_t3281_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m104043_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::Add(T)
MethodInfo ICollection_1_Add_m104043_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14700_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14700_ICollection_1_Add_m104043_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m104043_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m104044_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::Clear()
MethodInfo ICollection_1_Clear_m104044_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14700_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m104044_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerDisplayAttribute_t3281_0_0_0;
static ParameterInfo ICollection_1_t14700_ICollection_1_Contains_m104045_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerDisplayAttribute_t3281_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m104045_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m104045_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14700_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14700_ICollection_1_Contains_m104045_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m104045_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerDisplayAttributeU5BU5D_t11216_0_0_0;
extern Il2CppType DebuggerDisplayAttributeU5BU5D_t11216_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14700_ICollection_1_CopyTo_m104046_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerDisplayAttributeU5BU5D_t11216_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m104046_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m104046_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14700_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14700_ICollection_1_CopyTo_m104046_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m104046_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerDisplayAttribute_t3281_0_0_0;
static ParameterInfo ICollection_1_t14700_ICollection_1_Remove_m104047_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerDisplayAttribute_t3281_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m104047_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m104047_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14700_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14700_ICollection_1_Remove_m104047_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m104047_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14700_MethodInfos[] =
{
	&ICollection_1_get_Count_m104041_MethodInfo,
	&ICollection_1_get_IsReadOnly_m104042_MethodInfo,
	&ICollection_1_Add_m104043_MethodInfo,
	&ICollection_1_Clear_m104044_MethodInfo,
	&ICollection_1_Contains_m104045_MethodInfo,
	&ICollection_1_CopyTo_m104046_MethodInfo,
	&ICollection_1_Remove_m104047_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14702_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14700_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14702_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14700_0_0_0;
extern Il2CppType ICollection_1_t14700_1_0_0;
struct ICollection_1_t14700;
extern Il2CppGenericClass ICollection_1_t14700_GenericClass;
TypeInfo ICollection_1_t14700_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14700_MethodInfos/* methods */
	, ICollection_1_t14700_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14700_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14700_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14700_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14700_0_0_0/* byval_arg */
	, &ICollection_1_t14700_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14700_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerDisplayAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerDisplayAttribute>
extern Il2CppType IEnumerator_1_t13129_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m104048_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerDisplayAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m104048_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14702_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13129_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m104048_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14702_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m104048_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14702_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14702_0_0_0;
extern Il2CppType IEnumerable_1_t14702_1_0_0;
struct IEnumerable_1_t14702;
extern Il2CppGenericClass IEnumerable_1_t14702_GenericClass;
TypeInfo IEnumerable_1_t14702_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14702_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14702_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14702_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14702_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14702_0_0_0/* byval_arg */
	, &IEnumerable_1_t14702_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14702_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14701_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>
extern MethodInfo IList_1_get_Item_m104049_MethodInfo;
extern MethodInfo IList_1_set_Item_m104050_MethodInfo;
static PropertyInfo IList_1_t14701____Item_PropertyInfo = 
{
	&IList_1_t14701_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m104049_MethodInfo/* get */
	, &IList_1_set_Item_m104050_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14701_PropertyInfos[] =
{
	&IList_1_t14701____Item_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerDisplayAttribute_t3281_0_0_0;
static ParameterInfo IList_1_t14701_IList_1_IndexOf_m104051_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerDisplayAttribute_t3281_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m104051_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m104051_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14701_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14701_IList_1_IndexOf_m104051_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m104051_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DebuggerDisplayAttribute_t3281_0_0_0;
static ParameterInfo IList_1_t14701_IList_1_Insert_m104052_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerDisplayAttribute_t3281_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m104052_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m104052_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14701_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14701_IList_1_Insert_m104052_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m104052_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14701_IList_1_RemoveAt_m104053_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m104053_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m104053_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14701_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14701_IList_1_RemoveAt_m104053_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m104053_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14701_IList_1_get_Item_m104049_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType DebuggerDisplayAttribute_t3281_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m104049_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m104049_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14701_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerDisplayAttribute_t3281_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14701_IList_1_get_Item_m104049_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m104049_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DebuggerDisplayAttribute_t3281_0_0_0;
static ParameterInfo IList_1_t14701_IList_1_set_Item_m104050_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerDisplayAttribute_t3281_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m104050_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m104050_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14701_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14701_IList_1_set_Item_m104050_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m104050_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14701_MethodInfos[] =
{
	&IList_1_IndexOf_m104051_MethodInfo,
	&IList_1_Insert_m104052_MethodInfo,
	&IList_1_RemoveAt_m104053_MethodInfo,
	&IList_1_get_Item_m104049_MethodInfo,
	&IList_1_set_Item_m104050_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14701_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14700_il2cpp_TypeInfo,
	&IEnumerable_1_t14702_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14701_0_0_0;
extern Il2CppType IList_1_t14701_1_0_0;
struct IList_1_t14701;
extern Il2CppGenericClass IList_1_t14701_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14701_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14701_MethodInfos/* methods */
	, IList_1_t14701_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14701_il2cpp_TypeInfo/* element_class */
	, IList_1_t14701_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14701_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14701_0_0_0/* byval_arg */
	, &IList_1_t14701_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14701_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13131_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>
extern MethodInfo IEnumerator_1_get_Current_m104054_MethodInfo;
static PropertyInfo IEnumerator_1_t13131____Current_PropertyInfo = 
{
	&IEnumerator_1_t13131_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m104054_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13131_PropertyInfos[] =
{
	&IEnumerator_1_t13131____Current_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerStepThroughAttribute_t3282_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m104054_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m104054_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13131_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerStepThroughAttribute_t3282_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m104054_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13131_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m104054_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13131_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13131_0_0_0;
extern Il2CppType IEnumerator_1_t13131_1_0_0;
struct IEnumerator_1_t13131;
extern Il2CppGenericClass IEnumerator_1_t13131_GenericClass;
TypeInfo IEnumerator_1_t13131_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13131_MethodInfos/* methods */
	, IEnumerator_1_t13131_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13131_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13131_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13131_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13131_0_0_0/* byval_arg */
	, &IEnumerator_1_t13131_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13131_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10947_il2cpp_TypeInfo;

extern TypeInfo DebuggerStepThroughAttribute_t3282_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78372_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDebuggerStepThroughAttribute_t3282_m91522_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerStepThroughAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerStepThroughAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDebuggerStepThroughAttribute_t3282_m91522(__this, p0, method) (DebuggerStepThroughAttribute_t3282 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10947____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10947_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10947, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10947____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10947_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10947, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10947_FieldInfos[] =
{
	&InternalEnumerator_1_t10947____array_0_FieldInfo,
	&InternalEnumerator_1_t10947____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78369_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10947____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10947_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78369_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10947____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10947_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78372_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10947_PropertyInfos[] =
{
	&InternalEnumerator_1_t10947____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10947____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10947_InternalEnumerator_1__ctor_m78367_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78367_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78367_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10947_InternalEnumerator_1__ctor_m78367_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78367_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78368_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78368_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10947_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78368_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78369_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78369_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10947_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78369_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78370_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78370_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10947_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78370_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78371_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78371_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10947_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78371_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerStepThroughAttribute_t3282_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78372_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78372_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10947_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerStepThroughAttribute_t3282_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m78372_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10947_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78367_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78368_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78369_MethodInfo,
	&InternalEnumerator_1_Dispose_m78370_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78371_MethodInfo,
	&InternalEnumerator_1_get_Current_m78372_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78371_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78368_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78370_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10947_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78369_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78371_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78368_MethodInfo,
	&InternalEnumerator_1_Dispose_m78370_MethodInfo,
	&InternalEnumerator_1_get_Current_m78372_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10947_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13131_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10947_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13131_il2cpp_TypeInfo, 8},
};
extern TypeInfo DebuggerStepThroughAttribute_t3282_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10947_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78372_MethodInfo/* Method Usage */,
	&DebuggerStepThroughAttribute_t3282_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDebuggerStepThroughAttribute_t3282_m91522_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10947_0_0_0;
extern Il2CppType InternalEnumerator_1_t10947_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10947_GenericClass;
TypeInfo InternalEnumerator_1_t10947_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10947_MethodInfos/* methods */
	, InternalEnumerator_1_t10947_PropertyInfos/* properties */
	, InternalEnumerator_1_t10947_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10947_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10947_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10947_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10947_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10947_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10947_1_0_0/* this_arg */
	, InternalEnumerator_1_t10947_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10947_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10947_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10947)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14703_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>
extern MethodInfo ICollection_1_get_Count_m104055_MethodInfo;
static PropertyInfo ICollection_1_t14703____Count_PropertyInfo = 
{
	&ICollection_1_t14703_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m104055_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m104056_MethodInfo;
static PropertyInfo ICollection_1_t14703____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14703_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m104056_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14703_PropertyInfos[] =
{
	&ICollection_1_t14703____Count_PropertyInfo,
	&ICollection_1_t14703____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m104055_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m104055_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14703_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m104055_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m104056_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m104056_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14703_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m104056_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerStepThroughAttribute_t3282_0_0_0;
extern Il2CppType DebuggerStepThroughAttribute_t3282_0_0_0;
static ParameterInfo ICollection_1_t14703_ICollection_1_Add_m104057_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerStepThroughAttribute_t3282_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m104057_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::Add(T)
MethodInfo ICollection_1_Add_m104057_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14703_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14703_ICollection_1_Add_m104057_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m104057_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m104058_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::Clear()
MethodInfo ICollection_1_Clear_m104058_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14703_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m104058_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerStepThroughAttribute_t3282_0_0_0;
static ParameterInfo ICollection_1_t14703_ICollection_1_Contains_m104059_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerStepThroughAttribute_t3282_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m104059_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m104059_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14703_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14703_ICollection_1_Contains_m104059_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m104059_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerStepThroughAttributeU5BU5D_t11217_0_0_0;
extern Il2CppType DebuggerStepThroughAttributeU5BU5D_t11217_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14703_ICollection_1_CopyTo_m104060_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerStepThroughAttributeU5BU5D_t11217_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m104060_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m104060_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14703_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14703_ICollection_1_CopyTo_m104060_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m104060_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerStepThroughAttribute_t3282_0_0_0;
static ParameterInfo ICollection_1_t14703_ICollection_1_Remove_m104061_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerStepThroughAttribute_t3282_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m104061_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m104061_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14703_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14703_ICollection_1_Remove_m104061_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m104061_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14703_MethodInfos[] =
{
	&ICollection_1_get_Count_m104055_MethodInfo,
	&ICollection_1_get_IsReadOnly_m104056_MethodInfo,
	&ICollection_1_Add_m104057_MethodInfo,
	&ICollection_1_Clear_m104058_MethodInfo,
	&ICollection_1_Contains_m104059_MethodInfo,
	&ICollection_1_CopyTo_m104060_MethodInfo,
	&ICollection_1_Remove_m104061_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14705_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14703_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14705_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14703_0_0_0;
extern Il2CppType ICollection_1_t14703_1_0_0;
struct ICollection_1_t14703;
extern Il2CppGenericClass ICollection_1_t14703_GenericClass;
TypeInfo ICollection_1_t14703_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14703_MethodInfos/* methods */
	, ICollection_1_t14703_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14703_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14703_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14703_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14703_0_0_0/* byval_arg */
	, &ICollection_1_t14703_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14703_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerStepThroughAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerStepThroughAttribute>
extern Il2CppType IEnumerator_1_t13131_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m104062_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerStepThroughAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m104062_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14705_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13131_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m104062_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14705_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m104062_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14705_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14705_0_0_0;
extern Il2CppType IEnumerable_1_t14705_1_0_0;
struct IEnumerable_1_t14705;
extern Il2CppGenericClass IEnumerable_1_t14705_GenericClass;
TypeInfo IEnumerable_1_t14705_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14705_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14705_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14705_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14705_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14705_0_0_0/* byval_arg */
	, &IEnumerable_1_t14705_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14705_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14704_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>
extern MethodInfo IList_1_get_Item_m104063_MethodInfo;
extern MethodInfo IList_1_set_Item_m104064_MethodInfo;
static PropertyInfo IList_1_t14704____Item_PropertyInfo = 
{
	&IList_1_t14704_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m104063_MethodInfo/* get */
	, &IList_1_set_Item_m104064_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14704_PropertyInfos[] =
{
	&IList_1_t14704____Item_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerStepThroughAttribute_t3282_0_0_0;
static ParameterInfo IList_1_t14704_IList_1_IndexOf_m104065_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerStepThroughAttribute_t3282_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m104065_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m104065_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14704_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14704_IList_1_IndexOf_m104065_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m104065_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DebuggerStepThroughAttribute_t3282_0_0_0;
static ParameterInfo IList_1_t14704_IList_1_Insert_m104066_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerStepThroughAttribute_t3282_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m104066_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m104066_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14704_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14704_IList_1_Insert_m104066_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m104066_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14704_IList_1_RemoveAt_m104067_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m104067_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m104067_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14704_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14704_IList_1_RemoveAt_m104067_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m104067_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14704_IList_1_get_Item_m104063_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType DebuggerStepThroughAttribute_t3282_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m104063_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m104063_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14704_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerStepThroughAttribute_t3282_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14704_IList_1_get_Item_m104063_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m104063_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DebuggerStepThroughAttribute_t3282_0_0_0;
static ParameterInfo IList_1_t14704_IList_1_set_Item_m104064_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerStepThroughAttribute_t3282_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m104064_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m104064_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14704_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14704_IList_1_set_Item_m104064_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m104064_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14704_MethodInfos[] =
{
	&IList_1_IndexOf_m104065_MethodInfo,
	&IList_1_Insert_m104066_MethodInfo,
	&IList_1_RemoveAt_m104067_MethodInfo,
	&IList_1_get_Item_m104063_MethodInfo,
	&IList_1_set_Item_m104064_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14704_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14703_il2cpp_TypeInfo,
	&IEnumerable_1_t14705_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14704_0_0_0;
extern Il2CppType IList_1_t14704_1_0_0;
struct IList_1_t14704;
extern Il2CppGenericClass IList_1_t14704_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14704_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14704_MethodInfos/* methods */
	, IList_1_t14704_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14704_il2cpp_TypeInfo/* element_class */
	, IList_1_t14704_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14704_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14704_0_0_0/* byval_arg */
	, &IList_1_t14704_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14704_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13133_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>
extern MethodInfo IEnumerator_1_get_Current_m104068_MethodInfo;
static PropertyInfo IEnumerator_1_t13133____Current_PropertyInfo = 
{
	&IEnumerator_1_t13133_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m104068_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13133_PropertyInfos[] =
{
	&IEnumerator_1_t13133____Current_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerTypeProxyAttribute_t3283_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m104068_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m104068_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13133_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerTypeProxyAttribute_t3283_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m104068_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13133_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m104068_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13133_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13133_0_0_0;
extern Il2CppType IEnumerator_1_t13133_1_0_0;
struct IEnumerator_1_t13133;
extern Il2CppGenericClass IEnumerator_1_t13133_GenericClass;
TypeInfo IEnumerator_1_t13133_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13133_MethodInfos/* methods */
	, IEnumerator_1_t13133_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13133_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13133_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13133_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13133_0_0_0/* byval_arg */
	, &IEnumerator_1_t13133_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13133_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10948_il2cpp_TypeInfo;

extern TypeInfo DebuggerTypeProxyAttribute_t3283_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78378_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDebuggerTypeProxyAttribute_t3283_m91533_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerTypeProxyAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerTypeProxyAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDebuggerTypeProxyAttribute_t3283_m91533(__this, p0, method) (DebuggerTypeProxyAttribute_t3283 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10948____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10948_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10948, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10948____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10948_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10948, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10948_FieldInfos[] =
{
	&InternalEnumerator_1_t10948____array_0_FieldInfo,
	&InternalEnumerator_1_t10948____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78375_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10948____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10948_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78375_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10948____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10948_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78378_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10948_PropertyInfos[] =
{
	&InternalEnumerator_1_t10948____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10948____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10948_InternalEnumerator_1__ctor_m78373_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78373_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78373_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10948_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10948_InternalEnumerator_1__ctor_m78373_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78373_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78374_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78374_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10948_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78374_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78375_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78375_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10948_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78375_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78376_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78376_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10948_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78376_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78377_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78377_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10948_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78377_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerTypeProxyAttribute_t3283_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78378_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78378_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10948_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerTypeProxyAttribute_t3283_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m78378_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10948_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78373_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78374_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78375_MethodInfo,
	&InternalEnumerator_1_Dispose_m78376_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78377_MethodInfo,
	&InternalEnumerator_1_get_Current_m78378_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78377_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78374_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78376_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10948_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78375_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78377_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78374_MethodInfo,
	&InternalEnumerator_1_Dispose_m78376_MethodInfo,
	&InternalEnumerator_1_get_Current_m78378_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10948_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13133_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10948_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13133_il2cpp_TypeInfo, 8},
};
extern TypeInfo DebuggerTypeProxyAttribute_t3283_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10948_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78378_MethodInfo/* Method Usage */,
	&DebuggerTypeProxyAttribute_t3283_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDebuggerTypeProxyAttribute_t3283_m91533_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10948_0_0_0;
extern Il2CppType InternalEnumerator_1_t10948_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10948_GenericClass;
TypeInfo InternalEnumerator_1_t10948_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10948_MethodInfos/* methods */
	, InternalEnumerator_1_t10948_PropertyInfos/* properties */
	, InternalEnumerator_1_t10948_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10948_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10948_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10948_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10948_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10948_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10948_1_0_0/* this_arg */
	, InternalEnumerator_1_t10948_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10948_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10948_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10948)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14706_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>
extern MethodInfo ICollection_1_get_Count_m104069_MethodInfo;
static PropertyInfo ICollection_1_t14706____Count_PropertyInfo = 
{
	&ICollection_1_t14706_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m104069_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m104070_MethodInfo;
static PropertyInfo ICollection_1_t14706____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14706_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m104070_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14706_PropertyInfos[] =
{
	&ICollection_1_t14706____Count_PropertyInfo,
	&ICollection_1_t14706____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m104069_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m104069_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14706_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m104069_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m104070_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m104070_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14706_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m104070_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerTypeProxyAttribute_t3283_0_0_0;
extern Il2CppType DebuggerTypeProxyAttribute_t3283_0_0_0;
static ParameterInfo ICollection_1_t14706_ICollection_1_Add_m104071_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerTypeProxyAttribute_t3283_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m104071_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Add(T)
MethodInfo ICollection_1_Add_m104071_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14706_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14706_ICollection_1_Add_m104071_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m104071_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m104072_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Clear()
MethodInfo ICollection_1_Clear_m104072_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14706_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m104072_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerTypeProxyAttribute_t3283_0_0_0;
static ParameterInfo ICollection_1_t14706_ICollection_1_Contains_m104073_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerTypeProxyAttribute_t3283_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m104073_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m104073_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14706_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14706_ICollection_1_Contains_m104073_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m104073_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerTypeProxyAttributeU5BU5D_t11218_0_0_0;
extern Il2CppType DebuggerTypeProxyAttributeU5BU5D_t11218_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14706_ICollection_1_CopyTo_m104074_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerTypeProxyAttributeU5BU5D_t11218_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m104074_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m104074_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14706_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14706_ICollection_1_CopyTo_m104074_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m104074_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerTypeProxyAttribute_t3283_0_0_0;
static ParameterInfo ICollection_1_t14706_ICollection_1_Remove_m104075_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerTypeProxyAttribute_t3283_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m104075_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m104075_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14706_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14706_ICollection_1_Remove_m104075_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m104075_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14706_MethodInfos[] =
{
	&ICollection_1_get_Count_m104069_MethodInfo,
	&ICollection_1_get_IsReadOnly_m104070_MethodInfo,
	&ICollection_1_Add_m104071_MethodInfo,
	&ICollection_1_Clear_m104072_MethodInfo,
	&ICollection_1_Contains_m104073_MethodInfo,
	&ICollection_1_CopyTo_m104074_MethodInfo,
	&ICollection_1_Remove_m104075_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14708_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14706_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14708_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14706_0_0_0;
extern Il2CppType ICollection_1_t14706_1_0_0;
struct ICollection_1_t14706;
extern Il2CppGenericClass ICollection_1_t14706_GenericClass;
TypeInfo ICollection_1_t14706_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14706_MethodInfos/* methods */
	, ICollection_1_t14706_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14706_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14706_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14706_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14706_0_0_0/* byval_arg */
	, &ICollection_1_t14706_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14706_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerTypeProxyAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerTypeProxyAttribute>
extern Il2CppType IEnumerator_1_t13133_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m104076_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerTypeProxyAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m104076_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14708_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13133_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m104076_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14708_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m104076_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14708_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14708_0_0_0;
extern Il2CppType IEnumerable_1_t14708_1_0_0;
struct IEnumerable_1_t14708;
extern Il2CppGenericClass IEnumerable_1_t14708_GenericClass;
TypeInfo IEnumerable_1_t14708_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14708_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14708_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14708_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14708_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14708_0_0_0/* byval_arg */
	, &IEnumerable_1_t14708_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14708_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14707_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>
extern MethodInfo IList_1_get_Item_m104077_MethodInfo;
extern MethodInfo IList_1_set_Item_m104078_MethodInfo;
static PropertyInfo IList_1_t14707____Item_PropertyInfo = 
{
	&IList_1_t14707_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m104077_MethodInfo/* get */
	, &IList_1_set_Item_m104078_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14707_PropertyInfos[] =
{
	&IList_1_t14707____Item_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerTypeProxyAttribute_t3283_0_0_0;
static ParameterInfo IList_1_t14707_IList_1_IndexOf_m104079_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerTypeProxyAttribute_t3283_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m104079_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m104079_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14707_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14707_IList_1_IndexOf_m104079_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m104079_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DebuggerTypeProxyAttribute_t3283_0_0_0;
static ParameterInfo IList_1_t14707_IList_1_Insert_m104080_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerTypeProxyAttribute_t3283_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m104080_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m104080_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14707_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14707_IList_1_Insert_m104080_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m104080_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14707_IList_1_RemoveAt_m104081_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m104081_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m104081_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14707_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14707_IList_1_RemoveAt_m104081_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m104081_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14707_IList_1_get_Item_m104077_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType DebuggerTypeProxyAttribute_t3283_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m104077_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m104077_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14707_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerTypeProxyAttribute_t3283_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14707_IList_1_get_Item_m104077_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m104077_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType DebuggerTypeProxyAttribute_t3283_0_0_0;
static ParameterInfo IList_1_t14707_IList_1_set_Item_m104078_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerTypeProxyAttribute_t3283_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m104078_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m104078_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14707_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14707_IList_1_set_Item_m104078_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m104078_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14707_MethodInfos[] =
{
	&IList_1_IndexOf_m104079_MethodInfo,
	&IList_1_Insert_m104080_MethodInfo,
	&IList_1_RemoveAt_m104081_MethodInfo,
	&IList_1_get_Item_m104077_MethodInfo,
	&IList_1_set_Item_m104078_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14707_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14706_il2cpp_TypeInfo,
	&IEnumerable_1_t14708_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14707_0_0_0;
extern Il2CppType IList_1_t14707_1_0_0;
struct IList_1_t14707;
extern Il2CppGenericClass IList_1_t14707_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14707_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14707_MethodInfos/* methods */
	, IList_1_t14707_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14707_il2cpp_TypeInfo/* element_class */
	, IList_1_t14707_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14707_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14707_0_0_0/* byval_arg */
	, &IList_1_t14707_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14707_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13135_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.StackFrame>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.StackFrame>
extern MethodInfo IEnumerator_1_get_Current_m104082_MethodInfo;
static PropertyInfo IEnumerator_1_t13135____Current_PropertyInfo = 
{
	&IEnumerator_1_t13135_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m104082_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13135_PropertyInfos[] =
{
	&IEnumerator_1_t13135____Current_PropertyInfo,
	NULL
};
extern Il2CppType StackFrame_t2258_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m104082_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.StackFrame>::get_Current()
MethodInfo IEnumerator_1_get_Current_m104082_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13135_il2cpp_TypeInfo/* declaring_type */
	, &StackFrame_t2258_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m104082_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13135_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m104082_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13135_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13135_0_0_0;
extern Il2CppType IEnumerator_1_t13135_1_0_0;
struct IEnumerator_1_t13135;
extern Il2CppGenericClass IEnumerator_1_t13135_GenericClass;
TypeInfo IEnumerator_1_t13135_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13135_MethodInfos/* methods */
	, IEnumerator_1_t13135_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13135_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13135_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13135_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13135_0_0_0/* byval_arg */
	, &IEnumerator_1_t13135_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13135_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10949_il2cpp_TypeInfo;

extern TypeInfo StackFrame_t2258_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78384_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStackFrame_t2258_m91544_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.StackFrame>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.StackFrame>(System.Int32)
#define Array_InternalArray__get_Item_TisStackFrame_t2258_m91544(__this, p0, method) (StackFrame_t2258 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10949____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10949_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10949, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10949____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10949_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10949, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10949_FieldInfos[] =
{
	&InternalEnumerator_1_t10949____array_0_FieldInfo,
	&InternalEnumerator_1_t10949____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78381_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10949____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10949_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78381_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10949____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10949_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78384_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10949_PropertyInfos[] =
{
	&InternalEnumerator_1_t10949____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10949____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10949_InternalEnumerator_1__ctor_m78379_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78379_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78379_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10949_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10949_InternalEnumerator_1__ctor_m78379_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78379_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78380_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78380_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10949_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78380_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78381_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78381_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10949_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78381_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78382_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78382_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10949_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78382_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78383_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78383_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10949_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78383_GenericMethod/* genericMethod */

};
extern Il2CppType StackFrame_t2258_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78384_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78384_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10949_il2cpp_TypeInfo/* declaring_type */
	, &StackFrame_t2258_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m78384_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10949_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78379_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78380_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78381_MethodInfo,
	&InternalEnumerator_1_Dispose_m78382_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78383_MethodInfo,
	&InternalEnumerator_1_get_Current_m78384_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78383_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78380_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78382_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10949_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78381_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78383_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78380_MethodInfo,
	&InternalEnumerator_1_Dispose_m78382_MethodInfo,
	&InternalEnumerator_1_get_Current_m78384_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10949_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13135_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10949_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13135_il2cpp_TypeInfo, 8},
};
extern TypeInfo StackFrame_t2258_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10949_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78384_MethodInfo/* Method Usage */,
	&StackFrame_t2258_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisStackFrame_t2258_m91544_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10949_0_0_0;
extern Il2CppType InternalEnumerator_1_t10949_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10949_GenericClass;
TypeInfo InternalEnumerator_1_t10949_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10949_MethodInfos/* methods */
	, InternalEnumerator_1_t10949_PropertyInfos/* properties */
	, InternalEnumerator_1_t10949_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10949_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10949_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10949_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10949_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10949_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10949_1_0_0/* this_arg */
	, InternalEnumerator_1_t10949_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10949_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10949_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10949)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14709_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>
extern MethodInfo ICollection_1_get_Count_m104083_MethodInfo;
static PropertyInfo ICollection_1_t14709____Count_PropertyInfo = 
{
	&ICollection_1_t14709_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m104083_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m104084_MethodInfo;
static PropertyInfo ICollection_1_t14709____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14709_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m104084_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14709_PropertyInfos[] =
{
	&ICollection_1_t14709____Count_PropertyInfo,
	&ICollection_1_t14709____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m104083_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::get_Count()
MethodInfo ICollection_1_get_Count_m104083_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14709_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m104083_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m104084_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m104084_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14709_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m104084_GenericMethod/* genericMethod */

};
extern Il2CppType StackFrame_t2258_0_0_0;
extern Il2CppType StackFrame_t2258_0_0_0;
static ParameterInfo ICollection_1_t14709_ICollection_1_Add_m104085_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StackFrame_t2258_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m104085_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Add(T)
MethodInfo ICollection_1_Add_m104085_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14709_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14709_ICollection_1_Add_m104085_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m104085_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m104086_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Clear()
MethodInfo ICollection_1_Clear_m104086_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14709_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m104086_GenericMethod/* genericMethod */

};
extern Il2CppType StackFrame_t2258_0_0_0;
static ParameterInfo ICollection_1_t14709_ICollection_1_Contains_m104087_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StackFrame_t2258_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m104087_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Contains(T)
MethodInfo ICollection_1_Contains_m104087_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14709_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14709_ICollection_1_Contains_m104087_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m104087_GenericMethod/* genericMethod */

};
extern Il2CppType StackFrameU5BU5D_t3284_0_0_0;
extern Il2CppType StackFrameU5BU5D_t3284_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14709_ICollection_1_CopyTo_m104088_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StackFrameU5BU5D_t3284_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m104088_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m104088_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14709_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14709_ICollection_1_CopyTo_m104088_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m104088_GenericMethod/* genericMethod */

};
extern Il2CppType StackFrame_t2258_0_0_0;
static ParameterInfo ICollection_1_t14709_ICollection_1_Remove_m104089_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StackFrame_t2258_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m104089_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Remove(T)
MethodInfo ICollection_1_Remove_m104089_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14709_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14709_ICollection_1_Remove_m104089_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m104089_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14709_MethodInfos[] =
{
	&ICollection_1_get_Count_m104083_MethodInfo,
	&ICollection_1_get_IsReadOnly_m104084_MethodInfo,
	&ICollection_1_Add_m104085_MethodInfo,
	&ICollection_1_Clear_m104086_MethodInfo,
	&ICollection_1_Contains_m104087_MethodInfo,
	&ICollection_1_CopyTo_m104088_MethodInfo,
	&ICollection_1_Remove_m104089_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14711_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14709_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14711_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14709_0_0_0;
extern Il2CppType ICollection_1_t14709_1_0_0;
struct ICollection_1_t14709;
extern Il2CppGenericClass ICollection_1_t14709_GenericClass;
TypeInfo ICollection_1_t14709_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14709_MethodInfos/* methods */
	, ICollection_1_t14709_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14709_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14709_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14709_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14709_0_0_0/* byval_arg */
	, &ICollection_1_t14709_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14709_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.StackFrame>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.StackFrame>
extern Il2CppType IEnumerator_1_t13135_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m104090_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.StackFrame>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m104090_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14711_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13135_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m104090_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14711_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m104090_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14711_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14711_0_0_0;
extern Il2CppType IEnumerable_1_t14711_1_0_0;
struct IEnumerable_1_t14711;
extern Il2CppGenericClass IEnumerable_1_t14711_GenericClass;
TypeInfo IEnumerable_1_t14711_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14711_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14711_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14711_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14711_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14711_0_0_0/* byval_arg */
	, &IEnumerable_1_t14711_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14711_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14710_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>
extern MethodInfo IList_1_get_Item_m104091_MethodInfo;
extern MethodInfo IList_1_set_Item_m104092_MethodInfo;
static PropertyInfo IList_1_t14710____Item_PropertyInfo = 
{
	&IList_1_t14710_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m104091_MethodInfo/* get */
	, &IList_1_set_Item_m104092_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14710_PropertyInfos[] =
{
	&IList_1_t14710____Item_PropertyInfo,
	NULL
};
extern Il2CppType StackFrame_t2258_0_0_0;
static ParameterInfo IList_1_t14710_IList_1_IndexOf_m104093_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StackFrame_t2258_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m104093_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::IndexOf(T)
MethodInfo IList_1_IndexOf_m104093_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14710_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14710_IList_1_IndexOf_m104093_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m104093_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType StackFrame_t2258_0_0_0;
static ParameterInfo IList_1_t14710_IList_1_Insert_m104094_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &StackFrame_t2258_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m104094_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m104094_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14710_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14710_IList_1_Insert_m104094_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m104094_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14710_IList_1_RemoveAt_m104095_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m104095_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m104095_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14710_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14710_IList_1_RemoveAt_m104095_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m104095_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14710_IList_1_get_Item_m104091_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType StackFrame_t2258_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m104091_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m104091_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14710_il2cpp_TypeInfo/* declaring_type */
	, &StackFrame_t2258_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14710_IList_1_get_Item_m104091_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m104091_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType StackFrame_t2258_0_0_0;
static ParameterInfo IList_1_t14710_IList_1_set_Item_m104092_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &StackFrame_t2258_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m104092_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m104092_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14710_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14710_IList_1_set_Item_m104092_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m104092_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14710_MethodInfos[] =
{
	&IList_1_IndexOf_m104093_MethodInfo,
	&IList_1_Insert_m104094_MethodInfo,
	&IList_1_RemoveAt_m104095_MethodInfo,
	&IList_1_get_Item_m104091_MethodInfo,
	&IList_1_set_Item_m104092_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14710_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14709_il2cpp_TypeInfo,
	&IEnumerable_1_t14711_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14710_0_0_0;
extern Il2CppType IList_1_t14710_1_0_0;
struct IList_1_t14710;
extern Il2CppGenericClass IList_1_t14710_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14710_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14710_MethodInfos/* methods */
	, IList_1_t14710_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14710_il2cpp_TypeInfo/* element_class */
	, IList_1_t14710_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14710_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14710_0_0_0/* byval_arg */
	, &IList_1_t14710_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14710_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13137_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Globalization.CompareOptions>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.CompareOptions>
extern MethodInfo IEnumerator_1_get_Current_m104096_MethodInfo;
static PropertyInfo IEnumerator_1_t13137____Current_PropertyInfo = 
{
	&IEnumerator_1_t13137_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m104096_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13137_PropertyInfos[] =
{
	&IEnumerator_1_t13137____Current_PropertyInfo,
	NULL
};
extern Il2CppType CompareOptions_t3124_0_0_0;
extern void* RuntimeInvoker_CompareOptions_t3124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m104096_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Globalization.CompareOptions>::get_Current()
MethodInfo IEnumerator_1_get_Current_m104096_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13137_il2cpp_TypeInfo/* declaring_type */
	, &CompareOptions_t3124_0_0_0/* return_type */
	, RuntimeInvoker_CompareOptions_t3124/* invoker_method */
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
	, &IEnumerator_1_get_Current_m104096_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13137_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m104096_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13137_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13137_0_0_0;
extern Il2CppType IEnumerator_1_t13137_1_0_0;
struct IEnumerator_1_t13137;
extern Il2CppGenericClass IEnumerator_1_t13137_GenericClass;
TypeInfo IEnumerator_1_t13137_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13137_MethodInfos/* methods */
	, IEnumerator_1_t13137_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13137_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13137_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13137_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13137_0_0_0/* byval_arg */
	, &IEnumerator_1_t13137_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13137_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10950_il2cpp_TypeInfo;

extern TypeInfo CompareOptions_t3124_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78390_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCompareOptions_t3124_m91555_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Globalization.CompareOptions>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Globalization.CompareOptions>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCompareOptions_t3124_m91555 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78385_MethodInfo;
 void InternalEnumerator_1__ctor_m78385 (InternalEnumerator_1_t10950 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78386_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78386 (InternalEnumerator_1_t10950 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78387_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78387 (InternalEnumerator_1_t10950 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78390(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78390_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CompareOptions_t3124_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78388_MethodInfo;
 void InternalEnumerator_1_Dispose_m78388 (InternalEnumerator_1_t10950 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78389_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78389 (InternalEnumerator_1_t10950 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78390 (InternalEnumerator_1_t10950 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCompareOptions_t3124_m91555(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCompareOptions_t3124_m91555_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10950____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10950_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10950, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10950____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10950_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10950, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10950_FieldInfos[] =
{
	&InternalEnumerator_1_t10950____array_0_FieldInfo,
	&InternalEnumerator_1_t10950____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10950____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10950_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78387_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10950____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10950_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78390_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10950_PropertyInfos[] =
{
	&InternalEnumerator_1_t10950____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10950____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10950_InternalEnumerator_1__ctor_m78385_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78385_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78385_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78385/* method */
	, &InternalEnumerator_1_t10950_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10950_InternalEnumerator_1__ctor_m78385_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78385_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78386_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78386_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78386/* method */
	, &InternalEnumerator_1_t10950_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78386_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78387_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78387_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78387/* method */
	, &InternalEnumerator_1_t10950_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78387_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78388_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78388_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78388/* method */
	, &InternalEnumerator_1_t10950_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78388_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78389_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78389_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78389/* method */
	, &InternalEnumerator_1_t10950_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78389_GenericMethod/* genericMethod */

};
extern Il2CppType CompareOptions_t3124_0_0_0;
extern void* RuntimeInvoker_CompareOptions_t3124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78390_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78390_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78390/* method */
	, &InternalEnumerator_1_t10950_il2cpp_TypeInfo/* declaring_type */
	, &CompareOptions_t3124_0_0_0/* return_type */
	, RuntimeInvoker_CompareOptions_t3124/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m78390_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10950_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78385_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78386_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78387_MethodInfo,
	&InternalEnumerator_1_Dispose_m78388_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78389_MethodInfo,
	&InternalEnumerator_1_get_Current_m78390_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10950_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78387_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78389_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78386_MethodInfo,
	&InternalEnumerator_1_Dispose_m78388_MethodInfo,
	&InternalEnumerator_1_get_Current_m78390_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10950_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13137_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10950_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13137_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10950_0_0_0;
extern Il2CppType InternalEnumerator_1_t10950_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10950_GenericClass;
TypeInfo InternalEnumerator_1_t10950_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10950_MethodInfos/* methods */
	, InternalEnumerator_1_t10950_PropertyInfos/* properties */
	, InternalEnumerator_1_t10950_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10950_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10950_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10950_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10950_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10950_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10950_1_0_0/* this_arg */
	, InternalEnumerator_1_t10950_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10950_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10950)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14712_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>
extern MethodInfo ICollection_1_get_Count_m104097_MethodInfo;
static PropertyInfo ICollection_1_t14712____Count_PropertyInfo = 
{
	&ICollection_1_t14712_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m104097_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m104098_MethodInfo;
static PropertyInfo ICollection_1_t14712____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14712_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m104098_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14712_PropertyInfos[] =
{
	&ICollection_1_t14712____Count_PropertyInfo,
	&ICollection_1_t14712____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m104097_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::get_Count()
MethodInfo ICollection_1_get_Count_m104097_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14712_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m104097_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m104098_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m104098_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14712_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m104098_GenericMethod/* genericMethod */

};
extern Il2CppType CompareOptions_t3124_0_0_0;
extern Il2CppType CompareOptions_t3124_0_0_0;
static ParameterInfo ICollection_1_t14712_ICollection_1_Add_m104099_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompareOptions_t3124_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m104099_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::Add(T)
MethodInfo ICollection_1_Add_m104099_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14712_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14712_ICollection_1_Add_m104099_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m104099_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m104100_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::Clear()
MethodInfo ICollection_1_Clear_m104100_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14712_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m104100_GenericMethod/* genericMethod */

};
extern Il2CppType CompareOptions_t3124_0_0_0;
static ParameterInfo ICollection_1_t14712_ICollection_1_Contains_m104101_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompareOptions_t3124_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m104101_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::Contains(T)
MethodInfo ICollection_1_Contains_m104101_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14712_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14712_ICollection_1_Contains_m104101_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m104101_GenericMethod/* genericMethod */

};
extern Il2CppType CompareOptionsU5BU5D_t11219_0_0_0;
extern Il2CppType CompareOptionsU5BU5D_t11219_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14712_ICollection_1_CopyTo_m104102_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CompareOptionsU5BU5D_t11219_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m104102_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m104102_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14712_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14712_ICollection_1_CopyTo_m104102_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m104102_GenericMethod/* genericMethod */

};
extern Il2CppType CompareOptions_t3124_0_0_0;
static ParameterInfo ICollection_1_t14712_ICollection_1_Remove_m104103_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompareOptions_t3124_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m104103_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::Remove(T)
MethodInfo ICollection_1_Remove_m104103_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14712_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14712_ICollection_1_Remove_m104103_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m104103_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14712_MethodInfos[] =
{
	&ICollection_1_get_Count_m104097_MethodInfo,
	&ICollection_1_get_IsReadOnly_m104098_MethodInfo,
	&ICollection_1_Add_m104099_MethodInfo,
	&ICollection_1_Clear_m104100_MethodInfo,
	&ICollection_1_Contains_m104101_MethodInfo,
	&ICollection_1_CopyTo_m104102_MethodInfo,
	&ICollection_1_Remove_m104103_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14714_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14712_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14714_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14712_0_0_0;
extern Il2CppType ICollection_1_t14712_1_0_0;
struct ICollection_1_t14712;
extern Il2CppGenericClass ICollection_1_t14712_GenericClass;
TypeInfo ICollection_1_t14712_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14712_MethodInfos/* methods */
	, ICollection_1_t14712_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14712_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14712_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14712_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14712_0_0_0/* byval_arg */
	, &ICollection_1_t14712_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14712_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.CompareOptions>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.CompareOptions>
extern Il2CppType IEnumerator_1_t13137_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m104104_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.CompareOptions>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m104104_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14714_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13137_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m104104_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14714_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m104104_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14714_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14714_0_0_0;
extern Il2CppType IEnumerable_1_t14714_1_0_0;
struct IEnumerable_1_t14714;
extern Il2CppGenericClass IEnumerable_1_t14714_GenericClass;
TypeInfo IEnumerable_1_t14714_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14714_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14714_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14714_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14714_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14714_0_0_0/* byval_arg */
	, &IEnumerable_1_t14714_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14714_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14713_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.CompareOptions>
extern MethodInfo IList_1_get_Item_m104105_MethodInfo;
extern MethodInfo IList_1_set_Item_m104106_MethodInfo;
static PropertyInfo IList_1_t14713____Item_PropertyInfo = 
{
	&IList_1_t14713_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m104105_MethodInfo/* get */
	, &IList_1_set_Item_m104106_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14713_PropertyInfos[] =
{
	&IList_1_t14713____Item_PropertyInfo,
	NULL
};
extern Il2CppType CompareOptions_t3124_0_0_0;
static ParameterInfo IList_1_t14713_IList_1_IndexOf_m104107_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompareOptions_t3124_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m104107_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::IndexOf(T)
MethodInfo IList_1_IndexOf_m104107_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14713_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14713_IList_1_IndexOf_m104107_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m104107_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType CompareOptions_t3124_0_0_0;
static ParameterInfo IList_1_t14713_IList_1_Insert_m104108_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CompareOptions_t3124_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m104108_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m104108_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14713_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14713_IList_1_Insert_m104108_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m104108_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14713_IList_1_RemoveAt_m104109_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m104109_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m104109_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14713_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14713_IList_1_RemoveAt_m104109_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m104109_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14713_IList_1_get_Item_m104105_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType CompareOptions_t3124_0_0_0;
extern void* RuntimeInvoker_CompareOptions_t3124_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m104105_GenericMethod;
// T System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m104105_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14713_il2cpp_TypeInfo/* declaring_type */
	, &CompareOptions_t3124_0_0_0/* return_type */
	, RuntimeInvoker_CompareOptions_t3124_Int32_t23/* invoker_method */
	, IList_1_t14713_IList_1_get_Item_m104105_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m104105_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType CompareOptions_t3124_0_0_0;
static ParameterInfo IList_1_t14713_IList_1_set_Item_m104106_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CompareOptions_t3124_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m104106_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m104106_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14713_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14713_IList_1_set_Item_m104106_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m104106_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14713_MethodInfos[] =
{
	&IList_1_IndexOf_m104107_MethodInfo,
	&IList_1_Insert_m104108_MethodInfo,
	&IList_1_RemoveAt_m104109_MethodInfo,
	&IList_1_get_Item_m104105_MethodInfo,
	&IList_1_set_Item_m104106_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14713_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14712_il2cpp_TypeInfo,
	&IEnumerable_1_t14714_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14713_0_0_0;
extern Il2CppType IList_1_t14713_1_0_0;
struct IList_1_t14713;
extern Il2CppGenericClass IList_1_t14713_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14713_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14713_MethodInfos/* methods */
	, IList_1_t14713_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14713_il2cpp_TypeInfo/* element_class */
	, IList_1_t14713_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14713_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14713_0_0_0/* byval_arg */
	, &IList_1_t14713_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14713_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13139_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Globalization.Calendar>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.Calendar>
extern MethodInfo IEnumerator_1_get_Current_m104110_MethodInfo;
static PropertyInfo IEnumerator_1_t13139____Current_PropertyInfo = 
{
	&IEnumerator_1_t13139_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m104110_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13139_PropertyInfos[] =
{
	&IEnumerator_1_t13139____Current_PropertyInfo,
	NULL
};
extern Il2CppType Calendar_t3285_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m104110_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Globalization.Calendar>::get_Current()
MethodInfo IEnumerator_1_get_Current_m104110_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13139_il2cpp_TypeInfo/* declaring_type */
	, &Calendar_t3285_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m104110_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13139_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m104110_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13139_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13139_0_0_0;
extern Il2CppType IEnumerator_1_t13139_1_0_0;
struct IEnumerator_1_t13139;
extern Il2CppGenericClass IEnumerator_1_t13139_GenericClass;
TypeInfo IEnumerator_1_t13139_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13139_MethodInfos/* methods */
	, IEnumerator_1_t13139_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13139_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13139_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13139_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13139_0_0_0/* byval_arg */
	, &IEnumerator_1_t13139_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13139_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10951_il2cpp_TypeInfo;

extern TypeInfo Calendar_t3285_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78396_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCalendar_t3285_m91566_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Globalization.Calendar>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Globalization.Calendar>(System.Int32)
#define Array_InternalArray__get_Item_TisCalendar_t3285_m91566(__this, p0, method) (Calendar_t3285 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Globalization.Calendar>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Globalization.Calendar>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Globalization.Calendar>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Globalization.Calendar>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.Calendar>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Globalization.Calendar>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.Calendar>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10951____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10951_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10951, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10951____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10951_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10951, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10951_FieldInfos[] =
{
	&InternalEnumerator_1_t10951____array_0_FieldInfo,
	&InternalEnumerator_1_t10951____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78393_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10951____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10951_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78393_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10951____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10951_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78396_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10951_PropertyInfos[] =
{
	&InternalEnumerator_1_t10951____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10951____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10951_InternalEnumerator_1__ctor_m78391_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78391_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.Calendar>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78391_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10951_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10951_InternalEnumerator_1__ctor_m78391_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78391_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78392_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.Calendar>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78392_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10951_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78392_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78393_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Globalization.Calendar>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78393_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10951_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78393_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78394_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.Calendar>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78394_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10951_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78394_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78395_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.Calendar>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78395_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10951_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78395_GenericMethod/* genericMethod */

};
extern Il2CppType Calendar_t3285_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78396_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Globalization.Calendar>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78396_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10951_il2cpp_TypeInfo/* declaring_type */
	, &Calendar_t3285_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m78396_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10951_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78391_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78392_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78393_MethodInfo,
	&InternalEnumerator_1_Dispose_m78394_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78395_MethodInfo,
	&InternalEnumerator_1_get_Current_m78396_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m78395_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78392_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m78394_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10951_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78393_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78395_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78392_MethodInfo,
	&InternalEnumerator_1_Dispose_m78394_MethodInfo,
	&InternalEnumerator_1_get_Current_m78396_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10951_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13139_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10951_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13139_il2cpp_TypeInfo, 8},
};
extern TypeInfo Calendar_t3285_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10951_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m78396_MethodInfo/* Method Usage */,
	&Calendar_t3285_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisCalendar_t3285_m91566_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10951_0_0_0;
extern Il2CppType InternalEnumerator_1_t10951_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10951_GenericClass;
TypeInfo InternalEnumerator_1_t10951_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10951_MethodInfos/* methods */
	, InternalEnumerator_1_t10951_PropertyInfos/* properties */
	, InternalEnumerator_1_t10951_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10951_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10951_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10951_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10951_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10951_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10951_1_0_0/* this_arg */
	, InternalEnumerator_1_t10951_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10951_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10951_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10951)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14715_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.Calendar>
extern MethodInfo ICollection_1_get_Count_m104111_MethodInfo;
static PropertyInfo ICollection_1_t14715____Count_PropertyInfo = 
{
	&ICollection_1_t14715_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m104111_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m104112_MethodInfo;
static PropertyInfo ICollection_1_t14715____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14715_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m104112_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14715_PropertyInfos[] =
{
	&ICollection_1_t14715____Count_PropertyInfo,
	&ICollection_1_t14715____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m104111_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::get_Count()
MethodInfo ICollection_1_get_Count_m104111_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14715_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m104111_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m104112_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m104112_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14715_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m104112_GenericMethod/* genericMethod */

};
extern Il2CppType Calendar_t3285_0_0_0;
extern Il2CppType Calendar_t3285_0_0_0;
static ParameterInfo ICollection_1_t14715_ICollection_1_Add_m104113_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Calendar_t3285_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m104113_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Add(T)
MethodInfo ICollection_1_Add_m104113_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14715_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14715_ICollection_1_Add_m104113_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m104113_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m104114_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Clear()
MethodInfo ICollection_1_Clear_m104114_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14715_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m104114_GenericMethod/* genericMethod */

};
extern Il2CppType Calendar_t3285_0_0_0;
static ParameterInfo ICollection_1_t14715_ICollection_1_Contains_m104115_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Calendar_t3285_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m104115_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Contains(T)
MethodInfo ICollection_1_Contains_m104115_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14715_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14715_ICollection_1_Contains_m104115_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m104115_GenericMethod/* genericMethod */

};
extern Il2CppType CalendarU5BU5D_t3290_0_0_0;
extern Il2CppType CalendarU5BU5D_t3290_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14715_ICollection_1_CopyTo_m104116_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CalendarU5BU5D_t3290_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m104116_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m104116_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14715_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14715_ICollection_1_CopyTo_m104116_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m104116_GenericMethod/* genericMethod */

};
extern Il2CppType Calendar_t3285_0_0_0;
static ParameterInfo ICollection_1_t14715_ICollection_1_Remove_m104117_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Calendar_t3285_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m104117_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Remove(T)
MethodInfo ICollection_1_Remove_m104117_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14715_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14715_ICollection_1_Remove_m104117_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m104117_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14715_MethodInfos[] =
{
	&ICollection_1_get_Count_m104111_MethodInfo,
	&ICollection_1_get_IsReadOnly_m104112_MethodInfo,
	&ICollection_1_Add_m104113_MethodInfo,
	&ICollection_1_Clear_m104114_MethodInfo,
	&ICollection_1_Contains_m104115_MethodInfo,
	&ICollection_1_CopyTo_m104116_MethodInfo,
	&ICollection_1_Remove_m104117_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14717_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14715_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14717_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14715_0_0_0;
extern Il2CppType ICollection_1_t14715_1_0_0;
struct ICollection_1_t14715;
extern Il2CppGenericClass ICollection_1_t14715_GenericClass;
TypeInfo ICollection_1_t14715_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14715_MethodInfos/* methods */
	, ICollection_1_t14715_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14715_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14715_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14715_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14715_0_0_0/* byval_arg */
	, &ICollection_1_t14715_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14715_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.Calendar>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.Calendar>
extern Il2CppType IEnumerator_1_t13139_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m104118_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.Calendar>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m104118_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14717_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13139_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m104118_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14717_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m104118_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14717_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14717_0_0_0;
extern Il2CppType IEnumerable_1_t14717_1_0_0;
struct IEnumerable_1_t14717;
extern Il2CppGenericClass IEnumerable_1_t14717_GenericClass;
TypeInfo IEnumerable_1_t14717_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14717_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14717_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14717_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14717_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14717_0_0_0/* byval_arg */
	, &IEnumerable_1_t14717_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14717_GenericClass/* generic_class */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
