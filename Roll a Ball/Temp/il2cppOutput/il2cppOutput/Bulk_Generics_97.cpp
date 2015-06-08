#include "il2cpp_precompiled_header.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10868_il2cpp_TypeInfo;

extern TypeInfo RegexOptions_t2861_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t826_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77902_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m3120_MethodInfo;
extern MethodInfo Array_get_Length_m7045_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRegexOptions_t2861_m90679_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.RegexOptions>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.RegexOptions>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisRegexOptions_t2861_m90679 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77897_MethodInfo;
 void InternalEnumerator_1__ctor_m77897 (InternalEnumerator_1_t10868 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77898_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77898 (InternalEnumerator_1_t10868 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77899_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77899 (InternalEnumerator_1_t10868 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77902(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77902_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&RegexOptions_t2861_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77900_MethodInfo;
 void InternalEnumerator_1_Dispose_m77900 (InternalEnumerator_1_t10868 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77901_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77901 (InternalEnumerator_1_t10868 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77902 (InternalEnumerator_1_t10868 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisRegexOptions_t2861_m90679(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisRegexOptions_t2861_m90679_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10868____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10868_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10868, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10868____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10868_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10868, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10868_FieldInfos[] =
{
	&InternalEnumerator_1_t10868____array_0_FieldInfo,
	&InternalEnumerator_1_t10868____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10868____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10868_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77899_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10868____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10868_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77902_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10868_PropertyInfos[] =
{
	&InternalEnumerator_1_t10868____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10868____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10868_InternalEnumerator_1__ctor_m77897_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77897_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77897_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77897/* method */
	, &InternalEnumerator_1_t10868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10868_InternalEnumerator_1__ctor_m77897_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77897_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77898_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77898_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77898/* method */
	, &InternalEnumerator_1_t10868_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77898_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77899_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77899_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77899/* method */
	, &InternalEnumerator_1_t10868_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77899_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77900_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77900_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77900/* method */
	, &InternalEnumerator_1_t10868_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77900_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77901_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77901_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77901/* method */
	, &InternalEnumerator_1_t10868_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77901_GenericMethod/* genericMethod */

};
extern Il2CppType RegexOptions_t2861_0_0_0;
extern void* RuntimeInvoker_RegexOptions_t2861 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77902_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77902_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77902/* method */
	, &InternalEnumerator_1_t10868_il2cpp_TypeInfo/* declaring_type */
	, &RegexOptions_t2861_0_0_0/* return_type */
	, RuntimeInvoker_RegexOptions_t2861/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77902_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10868_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77897_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77898_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77899_MethodInfo,
	&InternalEnumerator_1_Dispose_m77900_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77901_MethodInfo,
	&InternalEnumerator_1_get_Current_m77902_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m59_MethodInfo;
extern MethodInfo Object_Finalize_m50_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m60_MethodInfo;
extern MethodInfo ValueType_ToString_m61_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10868_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77899_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77901_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77898_MethodInfo,
	&InternalEnumerator_1_Dispose_m77900_MethodInfo,
	&InternalEnumerator_1_get_Current_m77902_MethodInfo,
};
extern TypeInfo IEnumerator_t30_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t31_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t12985_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t10868_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12985_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10868_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12985_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10868_0_0_0;
extern Il2CppType InternalEnumerator_1_t10868_1_0_0;
extern TypeInfo ValueType_t26_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t10868_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t10868_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10868_MethodInfos/* methods */
	, InternalEnumerator_1_t10868_PropertyInfos/* properties */
	, InternalEnumerator_1_t10868_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10868_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10868_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10868_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10868_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10868_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10868_1_0_0/* this_arg */
	, InternalEnumerator_1_t10868_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10868_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10868)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14481_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>
extern MethodInfo ICollection_1_get_Count_m103017_MethodInfo;
static PropertyInfo ICollection_1_t14481____Count_PropertyInfo = 
{
	&ICollection_1_t14481_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103017_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103018_MethodInfo;
static PropertyInfo ICollection_1_t14481____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14481_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103018_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14481_PropertyInfos[] =
{
	&ICollection_1_t14481____Count_PropertyInfo,
	&ICollection_1_t14481____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103017_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::get_Count()
MethodInfo ICollection_1_get_Count_m103017_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14481_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103017_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103018_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103018_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14481_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103018_GenericMethod/* genericMethod */

};
extern Il2CppType RegexOptions_t2861_0_0_0;
extern Il2CppType RegexOptions_t2861_0_0_0;
static ParameterInfo ICollection_1_t14481_ICollection_1_Add_m103019_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RegexOptions_t2861_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103019_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::Add(T)
MethodInfo ICollection_1_Add_m103019_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14481_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14481_ICollection_1_Add_m103019_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103019_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103020_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::Clear()
MethodInfo ICollection_1_Clear_m103020_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14481_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103020_GenericMethod/* genericMethod */

};
extern Il2CppType RegexOptions_t2861_0_0_0;
static ParameterInfo ICollection_1_t14481_ICollection_1_Contains_m103021_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RegexOptions_t2861_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103021_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::Contains(T)
MethodInfo ICollection_1_Contains_m103021_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14481_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14481_ICollection_1_Contains_m103021_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103021_GenericMethod/* genericMethod */

};
extern Il2CppType RegexOptionsU5BU5D_t11455_0_0_0;
extern Il2CppType RegexOptionsU5BU5D_t11455_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14481_ICollection_1_CopyTo_m103022_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &RegexOptionsU5BU5D_t11455_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103022_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103022_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14481_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14481_ICollection_1_CopyTo_m103022_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103022_GenericMethod/* genericMethod */

};
extern Il2CppType RegexOptions_t2861_0_0_0;
static ParameterInfo ICollection_1_t14481_ICollection_1_Remove_m103023_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RegexOptions_t2861_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103023_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::Remove(T)
MethodInfo ICollection_1_Remove_m103023_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14481_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14481_ICollection_1_Remove_m103023_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103023_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14481_MethodInfos[] =
{
	&ICollection_1_get_Count_m103017_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103018_MethodInfo,
	&ICollection_1_Add_m103019_MethodInfo,
	&ICollection_1_Clear_m103020_MethodInfo,
	&ICollection_1_Contains_m103021_MethodInfo,
	&ICollection_1_CopyTo_m103022_MethodInfo,
	&ICollection_1_Remove_m103023_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t545_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14483_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14481_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14483_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14481_0_0_0;
extern Il2CppType ICollection_1_t14481_1_0_0;
struct ICollection_1_t14481;
extern Il2CppGenericClass ICollection_1_t14481_GenericClass;
TypeInfo ICollection_1_t14481_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14481_MethodInfos/* methods */
	, ICollection_1_t14481_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14481_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14481_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14481_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14481_0_0_0/* byval_arg */
	, &ICollection_1_t14481_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14481_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.RegexOptions>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.RegexOptions>
extern Il2CppType IEnumerator_1_t12985_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103024_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.RegexOptions>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103024_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14483_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12985_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103024_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14483_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103024_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14483_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14483_0_0_0;
extern Il2CppType IEnumerable_1_t14483_1_0_0;
struct IEnumerable_1_t14483;
extern Il2CppGenericClass IEnumerable_1_t14483_GenericClass;
TypeInfo IEnumerable_1_t14483_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14483_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14483_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14483_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14483_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14483_0_0_0/* byval_arg */
	, &IEnumerable_1_t14483_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14483_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14482_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>
extern MethodInfo IList_1_get_Item_m103025_MethodInfo;
extern MethodInfo IList_1_set_Item_m103026_MethodInfo;
static PropertyInfo IList_1_t14482____Item_PropertyInfo = 
{
	&IList_1_t14482_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103025_MethodInfo/* get */
	, &IList_1_set_Item_m103026_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14482_PropertyInfos[] =
{
	&IList_1_t14482____Item_PropertyInfo,
	NULL
};
extern Il2CppType RegexOptions_t2861_0_0_0;
static ParameterInfo IList_1_t14482_IList_1_IndexOf_m103027_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RegexOptions_t2861_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103027_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103027_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14482_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14482_IList_1_IndexOf_m103027_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103027_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType RegexOptions_t2861_0_0_0;
static ParameterInfo IList_1_t14482_IList_1_Insert_m103028_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &RegexOptions_t2861_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103028_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103028_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14482_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14482_IList_1_Insert_m103028_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103028_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14482_IList_1_RemoveAt_m103029_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103029_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103029_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14482_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14482_IList_1_RemoveAt_m103029_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103029_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14482_IList_1_get_Item_m103025_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType RegexOptions_t2861_0_0_0;
extern void* RuntimeInvoker_RegexOptions_t2861_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103025_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103025_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14482_il2cpp_TypeInfo/* declaring_type */
	, &RegexOptions_t2861_0_0_0/* return_type */
	, RuntimeInvoker_RegexOptions_t2861_Int32_t23/* invoker_method */
	, IList_1_t14482_IList_1_get_Item_m103025_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103025_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType RegexOptions_t2861_0_0_0;
static ParameterInfo IList_1_t14482_IList_1_set_Item_m103026_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &RegexOptions_t2861_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103026_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103026_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14482_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14482_IList_1_set_Item_m103026_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103026_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14482_MethodInfos[] =
{
	&IList_1_IndexOf_m103027_MethodInfo,
	&IList_1_Insert_m103028_MethodInfo,
	&IList_1_RemoveAt_m103029_MethodInfo,
	&IList_1_get_Item_m103025_MethodInfo,
	&IList_1_set_Item_m103026_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14482_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14481_il2cpp_TypeInfo,
	&IEnumerable_1_t14483_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14482_0_0_0;
extern Il2CppType IList_1_t14482_1_0_0;
struct IList_1_t14482;
extern Il2CppGenericClass IList_1_t14482_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14482_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14482_MethodInfos/* methods */
	, IList_1_t14482_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14482_il2cpp_TypeInfo/* element_class */
	, IList_1_t14482_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14482_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14482_0_0_0/* byval_arg */
	, &IList_1_t14482_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14482_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t12987_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.OpCode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.OpCode>
extern MethodInfo IEnumerator_1_get_Current_m103030_MethodInfo;
static PropertyInfo IEnumerator_1_t12987____Current_PropertyInfo = 
{
	&IEnumerator_1_t12987_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103030_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12987_PropertyInfos[] =
{
	&IEnumerator_1_t12987____Current_PropertyInfo,
	NULL
};
extern Il2CppType OpCode_t2862_0_0_0;
extern void* RuntimeInvoker_OpCode_t2862 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103030_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.OpCode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103030_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12987_il2cpp_TypeInfo/* declaring_type */
	, &OpCode_t2862_0_0_0/* return_type */
	, RuntimeInvoker_OpCode_t2862/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103030_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12987_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103030_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12987_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12987_0_0_0;
extern Il2CppType IEnumerator_1_t12987_1_0_0;
struct IEnumerator_1_t12987;
extern Il2CppGenericClass IEnumerator_1_t12987_GenericClass;
TypeInfo IEnumerator_1_t12987_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12987_MethodInfos/* methods */
	, IEnumerator_1_t12987_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12987_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12987_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12987_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12987_0_0_0/* byval_arg */
	, &IEnumerator_1_t12987_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12987_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10869_il2cpp_TypeInfo;

extern TypeInfo OpCode_t2862_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77908_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOpCode_t2862_m90691_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.OpCode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.OpCode>(System.Int32)
 uint16_t Array_InternalArray__get_Item_TisOpCode_t2862_m90691 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77903_MethodInfo;
 void InternalEnumerator_1__ctor_m77903 (InternalEnumerator_1_t10869 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77904_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77904 (InternalEnumerator_1_t10869 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77905_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77905 (InternalEnumerator_1_t10869 * __this, MethodInfo* method){
	{
		uint16_t L_0 = InternalEnumerator_1_get_Current_m77908(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77908_MethodInfo);
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&OpCode_t2862_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77906_MethodInfo;
 void InternalEnumerator_1_Dispose_m77906 (InternalEnumerator_1_t10869 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77907_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77907 (InternalEnumerator_1_t10869 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::get_Current()
 uint16_t InternalEnumerator_1_get_Current_m77908 (InternalEnumerator_1_t10869 * __this, MethodInfo* method){
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
		uint16_t L_8 = Array_InternalArray__get_Item_TisOpCode_t2862_m90691(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOpCode_t2862_m90691_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10869____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10869_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10869, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10869____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10869_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10869, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10869_FieldInfos[] =
{
	&InternalEnumerator_1_t10869____array_0_FieldInfo,
	&InternalEnumerator_1_t10869____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10869____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10869_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77905_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10869____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10869_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77908_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10869_PropertyInfos[] =
{
	&InternalEnumerator_1_t10869____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10869____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10869_InternalEnumerator_1__ctor_m77903_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77903_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77903_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77903/* method */
	, &InternalEnumerator_1_t10869_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10869_InternalEnumerator_1__ctor_m77903_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77903_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77904_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77904_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77904/* method */
	, &InternalEnumerator_1_t10869_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77904_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77905_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77905_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77905/* method */
	, &InternalEnumerator_1_t10869_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77905_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77906_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77906_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77906/* method */
	, &InternalEnumerator_1_t10869_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77906_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77907_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77907_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77907/* method */
	, &InternalEnumerator_1_t10869_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77907_GenericMethod/* genericMethod */

};
extern Il2CppType OpCode_t2862_0_0_0;
extern void* RuntimeInvoker_OpCode_t2862 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77908_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77908_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77908/* method */
	, &InternalEnumerator_1_t10869_il2cpp_TypeInfo/* declaring_type */
	, &OpCode_t2862_0_0_0/* return_type */
	, RuntimeInvoker_OpCode_t2862/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77908_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10869_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77903_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77904_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77905_MethodInfo,
	&InternalEnumerator_1_Dispose_m77906_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77907_MethodInfo,
	&InternalEnumerator_1_get_Current_m77908_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10869_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77905_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77907_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77904_MethodInfo,
	&InternalEnumerator_1_Dispose_m77906_MethodInfo,
	&InternalEnumerator_1_get_Current_m77908_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10869_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12987_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10869_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12987_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10869_0_0_0;
extern Il2CppType InternalEnumerator_1_t10869_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10869_GenericClass;
TypeInfo InternalEnumerator_1_t10869_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10869_MethodInfos/* methods */
	, InternalEnumerator_1_t10869_PropertyInfos/* properties */
	, InternalEnumerator_1_t10869_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10869_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10869_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10869_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10869_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10869_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10869_1_0_0/* this_arg */
	, InternalEnumerator_1_t10869_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10869_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10869)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14484_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>
extern MethodInfo ICollection_1_get_Count_m103031_MethodInfo;
static PropertyInfo ICollection_1_t14484____Count_PropertyInfo = 
{
	&ICollection_1_t14484_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103031_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103032_MethodInfo;
static PropertyInfo ICollection_1_t14484____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14484_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103032_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14484_PropertyInfos[] =
{
	&ICollection_1_t14484____Count_PropertyInfo,
	&ICollection_1_t14484____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103031_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::get_Count()
MethodInfo ICollection_1_get_Count_m103031_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14484_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103031_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103032_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103032_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14484_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103032_GenericMethod/* genericMethod */

};
extern Il2CppType OpCode_t2862_0_0_0;
extern Il2CppType OpCode_t2862_0_0_0;
static ParameterInfo ICollection_1_t14484_ICollection_1_Add_m103033_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpCode_t2862_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103033_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::Add(T)
MethodInfo ICollection_1_Add_m103033_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14484_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_UInt16_t918/* invoker_method */
	, ICollection_1_t14484_ICollection_1_Add_m103033_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103033_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103034_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::Clear()
MethodInfo ICollection_1_Clear_m103034_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14484_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103034_GenericMethod/* genericMethod */

};
extern Il2CppType OpCode_t2862_0_0_0;
static ParameterInfo ICollection_1_t14484_ICollection_1_Contains_m103035_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpCode_t2862_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103035_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::Contains(T)
MethodInfo ICollection_1_Contains_m103035_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14484_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_UInt16_t918/* invoker_method */
	, ICollection_1_t14484_ICollection_1_Contains_m103035_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103035_GenericMethod/* genericMethod */

};
extern Il2CppType OpCodeU5BU5D_t11456_0_0_0;
extern Il2CppType OpCodeU5BU5D_t11456_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14484_ICollection_1_CopyTo_m103036_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OpCodeU5BU5D_t11456_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103036_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103036_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14484_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14484_ICollection_1_CopyTo_m103036_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103036_GenericMethod/* genericMethod */

};
extern Il2CppType OpCode_t2862_0_0_0;
static ParameterInfo ICollection_1_t14484_ICollection_1_Remove_m103037_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpCode_t2862_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103037_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::Remove(T)
MethodInfo ICollection_1_Remove_m103037_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14484_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_UInt16_t918/* invoker_method */
	, ICollection_1_t14484_ICollection_1_Remove_m103037_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103037_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14484_MethodInfos[] =
{
	&ICollection_1_get_Count_m103031_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103032_MethodInfo,
	&ICollection_1_Add_m103033_MethodInfo,
	&ICollection_1_Clear_m103034_MethodInfo,
	&ICollection_1_Contains_m103035_MethodInfo,
	&ICollection_1_CopyTo_m103036_MethodInfo,
	&ICollection_1_Remove_m103037_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14486_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14484_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14486_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14484_0_0_0;
extern Il2CppType ICollection_1_t14484_1_0_0;
struct ICollection_1_t14484;
extern Il2CppGenericClass ICollection_1_t14484_GenericClass;
TypeInfo ICollection_1_t14484_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14484_MethodInfos/* methods */
	, ICollection_1_t14484_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14484_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14484_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14484_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14484_0_0_0/* byval_arg */
	, &ICollection_1_t14484_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14484_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.OpCode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.OpCode>
extern Il2CppType IEnumerator_1_t12987_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103038_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.OpCode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103038_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14486_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12987_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103038_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14486_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103038_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14486_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14486_0_0_0;
extern Il2CppType IEnumerable_1_t14486_1_0_0;
struct IEnumerable_1_t14486;
extern Il2CppGenericClass IEnumerable_1_t14486_GenericClass;
TypeInfo IEnumerable_1_t14486_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14486_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14486_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14486_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14486_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14486_0_0_0/* byval_arg */
	, &IEnumerable_1_t14486_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14486_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14485_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>
extern MethodInfo IList_1_get_Item_m103039_MethodInfo;
extern MethodInfo IList_1_set_Item_m103040_MethodInfo;
static PropertyInfo IList_1_t14485____Item_PropertyInfo = 
{
	&IList_1_t14485_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103039_MethodInfo/* get */
	, &IList_1_set_Item_m103040_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14485_PropertyInfos[] =
{
	&IList_1_t14485____Item_PropertyInfo,
	NULL
};
extern Il2CppType OpCode_t2862_0_0_0;
static ParameterInfo IList_1_t14485_IList_1_IndexOf_m103041_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpCode_t2862_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103041_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103041_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14485_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_UInt16_t918/* invoker_method */
	, IList_1_t14485_IList_1_IndexOf_m103041_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103041_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType OpCode_t2862_0_0_0;
static ParameterInfo IList_1_t14485_IList_1_Insert_m103042_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OpCode_t2862_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103042_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103042_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14485_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_UInt16_t918/* invoker_method */
	, IList_1_t14485_IList_1_Insert_m103042_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103042_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14485_IList_1_RemoveAt_m103043_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103043_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103043_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14485_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14485_IList_1_RemoveAt_m103043_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103043_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14485_IList_1_get_Item_m103039_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType OpCode_t2862_0_0_0;
extern void* RuntimeInvoker_OpCode_t2862_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103039_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103039_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14485_il2cpp_TypeInfo/* declaring_type */
	, &OpCode_t2862_0_0_0/* return_type */
	, RuntimeInvoker_OpCode_t2862_Int32_t23/* invoker_method */
	, IList_1_t14485_IList_1_get_Item_m103039_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103039_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType OpCode_t2862_0_0_0;
static ParameterInfo IList_1_t14485_IList_1_set_Item_m103040_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OpCode_t2862_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103040_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103040_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14485_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_UInt16_t918/* invoker_method */
	, IList_1_t14485_IList_1_set_Item_m103040_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103040_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14485_MethodInfos[] =
{
	&IList_1_IndexOf_m103041_MethodInfo,
	&IList_1_Insert_m103042_MethodInfo,
	&IList_1_RemoveAt_m103043_MethodInfo,
	&IList_1_get_Item_m103039_MethodInfo,
	&IList_1_set_Item_m103040_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14485_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14484_il2cpp_TypeInfo,
	&IEnumerable_1_t14486_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14485_0_0_0;
extern Il2CppType IList_1_t14485_1_0_0;
struct IList_1_t14485;
extern Il2CppGenericClass IList_1_t14485_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14485_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14485_MethodInfos/* methods */
	, IList_1_t14485_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14485_il2cpp_TypeInfo/* element_class */
	, IList_1_t14485_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14485_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14485_0_0_0/* byval_arg */
	, &IList_1_t14485_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14485_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t12989_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.OpFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.OpFlags>
extern MethodInfo IEnumerator_1_get_Current_m103044_MethodInfo;
static PropertyInfo IEnumerator_1_t12989____Current_PropertyInfo = 
{
	&IEnumerator_1_t12989_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103044_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12989_PropertyInfos[] =
{
	&IEnumerator_1_t12989____Current_PropertyInfo,
	NULL
};
extern Il2CppType OpFlags_t2863_0_0_0;
extern void* RuntimeInvoker_OpFlags_t2863 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103044_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.OpFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103044_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12989_il2cpp_TypeInfo/* declaring_type */
	, &OpFlags_t2863_0_0_0/* return_type */
	, RuntimeInvoker_OpFlags_t2863/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103044_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12989_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103044_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12989_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12989_0_0_0;
extern Il2CppType IEnumerator_1_t12989_1_0_0;
struct IEnumerator_1_t12989;
extern Il2CppGenericClass IEnumerator_1_t12989_GenericClass;
TypeInfo IEnumerator_1_t12989_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12989_MethodInfos/* methods */
	, IEnumerator_1_t12989_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12989_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12989_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12989_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12989_0_0_0/* byval_arg */
	, &IEnumerator_1_t12989_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12989_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10870_il2cpp_TypeInfo;

extern TypeInfo OpFlags_t2863_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77914_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOpFlags_t2863_m90702_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.OpFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.OpFlags>(System.Int32)
 uint16_t Array_InternalArray__get_Item_TisOpFlags_t2863_m90702 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77909_MethodInfo;
 void InternalEnumerator_1__ctor_m77909 (InternalEnumerator_1_t10870 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77910_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77910 (InternalEnumerator_1_t10870 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77911_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77911 (InternalEnumerator_1_t10870 * __this, MethodInfo* method){
	{
		uint16_t L_0 = InternalEnumerator_1_get_Current_m77914(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77914_MethodInfo);
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&OpFlags_t2863_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77912_MethodInfo;
 void InternalEnumerator_1_Dispose_m77912 (InternalEnumerator_1_t10870 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77913_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77913 (InternalEnumerator_1_t10870 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::get_Current()
 uint16_t InternalEnumerator_1_get_Current_m77914 (InternalEnumerator_1_t10870 * __this, MethodInfo* method){
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
		uint16_t L_8 = Array_InternalArray__get_Item_TisOpFlags_t2863_m90702(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOpFlags_t2863_m90702_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10870____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10870_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10870, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10870____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10870_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10870, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10870_FieldInfos[] =
{
	&InternalEnumerator_1_t10870____array_0_FieldInfo,
	&InternalEnumerator_1_t10870____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10870____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10870_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77911_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10870____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10870_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77914_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10870_PropertyInfos[] =
{
	&InternalEnumerator_1_t10870____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10870____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10870_InternalEnumerator_1__ctor_m77909_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77909_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77909_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77909/* method */
	, &InternalEnumerator_1_t10870_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10870_InternalEnumerator_1__ctor_m77909_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77909_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77910_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77910_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77910/* method */
	, &InternalEnumerator_1_t10870_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77910_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77911_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77911_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77911/* method */
	, &InternalEnumerator_1_t10870_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77911_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77912_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77912_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77912/* method */
	, &InternalEnumerator_1_t10870_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77912_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77913_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77913_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77913/* method */
	, &InternalEnumerator_1_t10870_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77913_GenericMethod/* genericMethod */

};
extern Il2CppType OpFlags_t2863_0_0_0;
extern void* RuntimeInvoker_OpFlags_t2863 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77914_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77914_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77914/* method */
	, &InternalEnumerator_1_t10870_il2cpp_TypeInfo/* declaring_type */
	, &OpFlags_t2863_0_0_0/* return_type */
	, RuntimeInvoker_OpFlags_t2863/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77914_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10870_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77909_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77910_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77911_MethodInfo,
	&InternalEnumerator_1_Dispose_m77912_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77913_MethodInfo,
	&InternalEnumerator_1_get_Current_m77914_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10870_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77911_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77913_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77910_MethodInfo,
	&InternalEnumerator_1_Dispose_m77912_MethodInfo,
	&InternalEnumerator_1_get_Current_m77914_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10870_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12989_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10870_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12989_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10870_0_0_0;
extern Il2CppType InternalEnumerator_1_t10870_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10870_GenericClass;
TypeInfo InternalEnumerator_1_t10870_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10870_MethodInfos/* methods */
	, InternalEnumerator_1_t10870_PropertyInfos/* properties */
	, InternalEnumerator_1_t10870_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10870_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10870_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10870_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10870_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10870_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10870_1_0_0/* this_arg */
	, InternalEnumerator_1_t10870_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10870_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10870)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14487_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>
extern MethodInfo ICollection_1_get_Count_m103045_MethodInfo;
static PropertyInfo ICollection_1_t14487____Count_PropertyInfo = 
{
	&ICollection_1_t14487_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103045_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103046_MethodInfo;
static PropertyInfo ICollection_1_t14487____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14487_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103046_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14487_PropertyInfos[] =
{
	&ICollection_1_t14487____Count_PropertyInfo,
	&ICollection_1_t14487____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103045_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m103045_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14487_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103045_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103046_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103046_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14487_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103046_GenericMethod/* genericMethod */

};
extern Il2CppType OpFlags_t2863_0_0_0;
extern Il2CppType OpFlags_t2863_0_0_0;
static ParameterInfo ICollection_1_t14487_ICollection_1_Add_m103047_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpFlags_t2863_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103047_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::Add(T)
MethodInfo ICollection_1_Add_m103047_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14487_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_UInt16_t918/* invoker_method */
	, ICollection_1_t14487_ICollection_1_Add_m103047_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103047_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103048_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::Clear()
MethodInfo ICollection_1_Clear_m103048_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14487_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103048_GenericMethod/* genericMethod */

};
extern Il2CppType OpFlags_t2863_0_0_0;
static ParameterInfo ICollection_1_t14487_ICollection_1_Contains_m103049_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpFlags_t2863_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103049_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m103049_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14487_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_UInt16_t918/* invoker_method */
	, ICollection_1_t14487_ICollection_1_Contains_m103049_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103049_GenericMethod/* genericMethod */

};
extern Il2CppType OpFlagsU5BU5D_t11457_0_0_0;
extern Il2CppType OpFlagsU5BU5D_t11457_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14487_ICollection_1_CopyTo_m103050_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OpFlagsU5BU5D_t11457_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103050_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103050_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14487_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14487_ICollection_1_CopyTo_m103050_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103050_GenericMethod/* genericMethod */

};
extern Il2CppType OpFlags_t2863_0_0_0;
static ParameterInfo ICollection_1_t14487_ICollection_1_Remove_m103051_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpFlags_t2863_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103051_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m103051_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14487_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_UInt16_t918/* invoker_method */
	, ICollection_1_t14487_ICollection_1_Remove_m103051_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103051_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14487_MethodInfos[] =
{
	&ICollection_1_get_Count_m103045_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103046_MethodInfo,
	&ICollection_1_Add_m103047_MethodInfo,
	&ICollection_1_Clear_m103048_MethodInfo,
	&ICollection_1_Contains_m103049_MethodInfo,
	&ICollection_1_CopyTo_m103050_MethodInfo,
	&ICollection_1_Remove_m103051_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14489_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14487_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14489_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14487_0_0_0;
extern Il2CppType ICollection_1_t14487_1_0_0;
struct ICollection_1_t14487;
extern Il2CppGenericClass ICollection_1_t14487_GenericClass;
TypeInfo ICollection_1_t14487_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14487_MethodInfos/* methods */
	, ICollection_1_t14487_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14487_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14487_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14487_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14487_0_0_0/* byval_arg */
	, &ICollection_1_t14487_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14487_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.OpFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.OpFlags>
extern Il2CppType IEnumerator_1_t12989_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103052_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.OpFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103052_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14489_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12989_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103052_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14489_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103052_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14489_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14489_0_0_0;
extern Il2CppType IEnumerable_1_t14489_1_0_0;
struct IEnumerable_1_t14489;
extern Il2CppGenericClass IEnumerable_1_t14489_GenericClass;
TypeInfo IEnumerable_1_t14489_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14489_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14489_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14489_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14489_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14489_0_0_0/* byval_arg */
	, &IEnumerable_1_t14489_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14489_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14488_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>
extern MethodInfo IList_1_get_Item_m103053_MethodInfo;
extern MethodInfo IList_1_set_Item_m103054_MethodInfo;
static PropertyInfo IList_1_t14488____Item_PropertyInfo = 
{
	&IList_1_t14488_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103053_MethodInfo/* get */
	, &IList_1_set_Item_m103054_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14488_PropertyInfos[] =
{
	&IList_1_t14488____Item_PropertyInfo,
	NULL
};
extern Il2CppType OpFlags_t2863_0_0_0;
static ParameterInfo IList_1_t14488_IList_1_IndexOf_m103055_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpFlags_t2863_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103055_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103055_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14488_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_UInt16_t918/* invoker_method */
	, IList_1_t14488_IList_1_IndexOf_m103055_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103055_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType OpFlags_t2863_0_0_0;
static ParameterInfo IList_1_t14488_IList_1_Insert_m103056_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OpFlags_t2863_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103056_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103056_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14488_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_UInt16_t918/* invoker_method */
	, IList_1_t14488_IList_1_Insert_m103056_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103056_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14488_IList_1_RemoveAt_m103057_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103057_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103057_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14488_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14488_IList_1_RemoveAt_m103057_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103057_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14488_IList_1_get_Item_m103053_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType OpFlags_t2863_0_0_0;
extern void* RuntimeInvoker_OpFlags_t2863_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103053_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103053_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14488_il2cpp_TypeInfo/* declaring_type */
	, &OpFlags_t2863_0_0_0/* return_type */
	, RuntimeInvoker_OpFlags_t2863_Int32_t23/* invoker_method */
	, IList_1_t14488_IList_1_get_Item_m103053_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103053_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType OpFlags_t2863_0_0_0;
static ParameterInfo IList_1_t14488_IList_1_set_Item_m103054_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OpFlags_t2863_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103054_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103054_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14488_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_UInt16_t918/* invoker_method */
	, IList_1_t14488_IList_1_set_Item_m103054_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103054_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14488_MethodInfos[] =
{
	&IList_1_IndexOf_m103055_MethodInfo,
	&IList_1_Insert_m103056_MethodInfo,
	&IList_1_RemoveAt_m103057_MethodInfo,
	&IList_1_get_Item_m103053_MethodInfo,
	&IList_1_set_Item_m103054_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14488_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14487_il2cpp_TypeInfo,
	&IEnumerable_1_t14489_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14488_0_0_0;
extern Il2CppType IList_1_t14488_1_0_0;
struct IList_1_t14488;
extern Il2CppGenericClass IList_1_t14488_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14488_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14488_MethodInfos/* methods */
	, IList_1_t14488_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14488_il2cpp_TypeInfo/* element_class */
	, IList_1_t14488_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14488_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14488_0_0_0/* byval_arg */
	, &IList_1_t14488_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14488_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t12991_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Position>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Position>
extern MethodInfo IEnumerator_1_get_Current_m103058_MethodInfo;
static PropertyInfo IEnumerator_1_t12991____Current_PropertyInfo = 
{
	&IEnumerator_1_t12991_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103058_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12991_PropertyInfos[] =
{
	&IEnumerator_1_t12991____Current_PropertyInfo,
	NULL
};
extern Il2CppType Position_t2864_0_0_0;
extern void* RuntimeInvoker_Position_t2864 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103058_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Position>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103058_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12991_il2cpp_TypeInfo/* declaring_type */
	, &Position_t2864_0_0_0/* return_type */
	, RuntimeInvoker_Position_t2864/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103058_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12991_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103058_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12991_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12991_0_0_0;
extern Il2CppType IEnumerator_1_t12991_1_0_0;
struct IEnumerator_1_t12991;
extern Il2CppGenericClass IEnumerator_1_t12991_GenericClass;
TypeInfo IEnumerator_1_t12991_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12991_MethodInfos/* methods */
	, IEnumerator_1_t12991_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12991_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12991_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12991_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12991_0_0_0/* byval_arg */
	, &IEnumerator_1_t12991_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12991_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10871_il2cpp_TypeInfo;

extern TypeInfo Position_t2864_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77920_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPosition_t2864_m90713_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Position>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Position>(System.Int32)
 uint16_t Array_InternalArray__get_Item_TisPosition_t2864_m90713 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77915_MethodInfo;
 void InternalEnumerator_1__ctor_m77915 (InternalEnumerator_1_t10871 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77916_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77916 (InternalEnumerator_1_t10871 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77917_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77917 (InternalEnumerator_1_t10871 * __this, MethodInfo* method){
	{
		uint16_t L_0 = InternalEnumerator_1_get_Current_m77920(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77920_MethodInfo);
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Position_t2864_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77918_MethodInfo;
 void InternalEnumerator_1_Dispose_m77918 (InternalEnumerator_1_t10871 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77919_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77919 (InternalEnumerator_1_t10871 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::get_Current()
 uint16_t InternalEnumerator_1_get_Current_m77920 (InternalEnumerator_1_t10871 * __this, MethodInfo* method){
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
		uint16_t L_8 = Array_InternalArray__get_Item_TisPosition_t2864_m90713(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPosition_t2864_m90713_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10871____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10871_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10871, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10871____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10871_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10871, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10871_FieldInfos[] =
{
	&InternalEnumerator_1_t10871____array_0_FieldInfo,
	&InternalEnumerator_1_t10871____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10871____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10871_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77917_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10871____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10871_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77920_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10871_PropertyInfos[] =
{
	&InternalEnumerator_1_t10871____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10871____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10871_InternalEnumerator_1__ctor_m77915_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77915_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77915_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77915/* method */
	, &InternalEnumerator_1_t10871_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10871_InternalEnumerator_1__ctor_m77915_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77915_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77916_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77916_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77916/* method */
	, &InternalEnumerator_1_t10871_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77916_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77917_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77917_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77917/* method */
	, &InternalEnumerator_1_t10871_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77917_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77918_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77918_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77918/* method */
	, &InternalEnumerator_1_t10871_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77918_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77919_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77919_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77919/* method */
	, &InternalEnumerator_1_t10871_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77919_GenericMethod/* genericMethod */

};
extern Il2CppType Position_t2864_0_0_0;
extern void* RuntimeInvoker_Position_t2864 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77920_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77920_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77920/* method */
	, &InternalEnumerator_1_t10871_il2cpp_TypeInfo/* declaring_type */
	, &Position_t2864_0_0_0/* return_type */
	, RuntimeInvoker_Position_t2864/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77920_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10871_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77915_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77916_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77917_MethodInfo,
	&InternalEnumerator_1_Dispose_m77918_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77919_MethodInfo,
	&InternalEnumerator_1_get_Current_m77920_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10871_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77917_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77919_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77916_MethodInfo,
	&InternalEnumerator_1_Dispose_m77918_MethodInfo,
	&InternalEnumerator_1_get_Current_m77920_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10871_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12991_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10871_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12991_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10871_0_0_0;
extern Il2CppType InternalEnumerator_1_t10871_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10871_GenericClass;
TypeInfo InternalEnumerator_1_t10871_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10871_MethodInfos/* methods */
	, InternalEnumerator_1_t10871_PropertyInfos/* properties */
	, InternalEnumerator_1_t10871_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10871_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10871_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10871_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10871_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10871_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10871_1_0_0/* this_arg */
	, InternalEnumerator_1_t10871_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10871_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10871)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14490_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>
extern MethodInfo ICollection_1_get_Count_m103059_MethodInfo;
static PropertyInfo ICollection_1_t14490____Count_PropertyInfo = 
{
	&ICollection_1_t14490_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103059_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103060_MethodInfo;
static PropertyInfo ICollection_1_t14490____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14490_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103060_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14490_PropertyInfos[] =
{
	&ICollection_1_t14490____Count_PropertyInfo,
	&ICollection_1_t14490____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103059_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::get_Count()
MethodInfo ICollection_1_get_Count_m103059_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14490_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103059_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103060_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103060_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14490_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103060_GenericMethod/* genericMethod */

};
extern Il2CppType Position_t2864_0_0_0;
extern Il2CppType Position_t2864_0_0_0;
static ParameterInfo ICollection_1_t14490_ICollection_1_Add_m103061_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Position_t2864_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103061_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::Add(T)
MethodInfo ICollection_1_Add_m103061_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14490_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_UInt16_t918/* invoker_method */
	, ICollection_1_t14490_ICollection_1_Add_m103061_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103061_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103062_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::Clear()
MethodInfo ICollection_1_Clear_m103062_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14490_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103062_GenericMethod/* genericMethod */

};
extern Il2CppType Position_t2864_0_0_0;
static ParameterInfo ICollection_1_t14490_ICollection_1_Contains_m103063_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Position_t2864_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103063_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::Contains(T)
MethodInfo ICollection_1_Contains_m103063_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14490_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_UInt16_t918/* invoker_method */
	, ICollection_1_t14490_ICollection_1_Contains_m103063_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103063_GenericMethod/* genericMethod */

};
extern Il2CppType PositionU5BU5D_t11458_0_0_0;
extern Il2CppType PositionU5BU5D_t11458_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14490_ICollection_1_CopyTo_m103064_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PositionU5BU5D_t11458_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103064_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103064_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14490_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14490_ICollection_1_CopyTo_m103064_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103064_GenericMethod/* genericMethod */

};
extern Il2CppType Position_t2864_0_0_0;
static ParameterInfo ICollection_1_t14490_ICollection_1_Remove_m103065_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Position_t2864_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103065_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::Remove(T)
MethodInfo ICollection_1_Remove_m103065_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14490_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_UInt16_t918/* invoker_method */
	, ICollection_1_t14490_ICollection_1_Remove_m103065_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103065_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14490_MethodInfos[] =
{
	&ICollection_1_get_Count_m103059_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103060_MethodInfo,
	&ICollection_1_Add_m103061_MethodInfo,
	&ICollection_1_Clear_m103062_MethodInfo,
	&ICollection_1_Contains_m103063_MethodInfo,
	&ICollection_1_CopyTo_m103064_MethodInfo,
	&ICollection_1_Remove_m103065_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14492_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14490_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14492_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14490_0_0_0;
extern Il2CppType ICollection_1_t14490_1_0_0;
struct ICollection_1_t14490;
extern Il2CppGenericClass ICollection_1_t14490_GenericClass;
TypeInfo ICollection_1_t14490_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14490_MethodInfos/* methods */
	, ICollection_1_t14490_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14490_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14490_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14490_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14490_0_0_0/* byval_arg */
	, &ICollection_1_t14490_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14490_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Position>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Position>
extern Il2CppType IEnumerator_1_t12991_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103066_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Position>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103066_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14492_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12991_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103066_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14492_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103066_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14492_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14492_0_0_0;
extern Il2CppType IEnumerable_1_t14492_1_0_0;
struct IEnumerable_1_t14492;
extern Il2CppGenericClass IEnumerable_1_t14492_GenericClass;
TypeInfo IEnumerable_1_t14492_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14492_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14492_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14492_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14492_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14492_0_0_0/* byval_arg */
	, &IEnumerable_1_t14492_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14492_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14491_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>
extern MethodInfo IList_1_get_Item_m103067_MethodInfo;
extern MethodInfo IList_1_set_Item_m103068_MethodInfo;
static PropertyInfo IList_1_t14491____Item_PropertyInfo = 
{
	&IList_1_t14491_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103067_MethodInfo/* get */
	, &IList_1_set_Item_m103068_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14491_PropertyInfos[] =
{
	&IList_1_t14491____Item_PropertyInfo,
	NULL
};
extern Il2CppType Position_t2864_0_0_0;
static ParameterInfo IList_1_t14491_IList_1_IndexOf_m103069_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Position_t2864_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103069_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103069_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14491_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_UInt16_t918/* invoker_method */
	, IList_1_t14491_IList_1_IndexOf_m103069_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103069_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Position_t2864_0_0_0;
static ParameterInfo IList_1_t14491_IList_1_Insert_m103070_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Position_t2864_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103070_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103070_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14491_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_UInt16_t918/* invoker_method */
	, IList_1_t14491_IList_1_Insert_m103070_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103070_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14491_IList_1_RemoveAt_m103071_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103071_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103071_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14491_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14491_IList_1_RemoveAt_m103071_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103071_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14491_IList_1_get_Item_m103067_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Position_t2864_0_0_0;
extern void* RuntimeInvoker_Position_t2864_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103067_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103067_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14491_il2cpp_TypeInfo/* declaring_type */
	, &Position_t2864_0_0_0/* return_type */
	, RuntimeInvoker_Position_t2864_Int32_t23/* invoker_method */
	, IList_1_t14491_IList_1_get_Item_m103067_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103067_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Position_t2864_0_0_0;
static ParameterInfo IList_1_t14491_IList_1_set_Item_m103068_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Position_t2864_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103068_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103068_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14491_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_UInt16_t918/* invoker_method */
	, IList_1_t14491_IList_1_set_Item_m103068_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103068_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14491_MethodInfos[] =
{
	&IList_1_IndexOf_m103069_MethodInfo,
	&IList_1_Insert_m103070_MethodInfo,
	&IList_1_RemoveAt_m103071_MethodInfo,
	&IList_1_get_Item_m103067_MethodInfo,
	&IList_1_set_Item_m103068_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14491_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14490_il2cpp_TypeInfo,
	&IEnumerable_1_t14492_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14491_0_0_0;
extern Il2CppType IList_1_t14491_1_0_0;
struct IList_1_t14491;
extern Il2CppGenericClass IList_1_t14491_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14491_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14491_MethodInfos/* methods */
	, IList_1_t14491_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14491_il2cpp_TypeInfo/* element_class */
	, IList_1_t14491_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14491_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14491_0_0_0/* byval_arg */
	, &IList_1_t14491_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14491_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t12993_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Category>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Category>
extern MethodInfo IEnumerator_1_get_Current_m103072_MethodInfo;
static PropertyInfo IEnumerator_1_t12993____Current_PropertyInfo = 
{
	&IEnumerator_1_t12993_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103072_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12993_PropertyInfos[] =
{
	&IEnumerator_1_t12993____Current_PropertyInfo,
	NULL
};
extern Il2CppType Category_t2868_0_0_0;
extern void* RuntimeInvoker_Category_t2868 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103072_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Category>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103072_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12993_il2cpp_TypeInfo/* declaring_type */
	, &Category_t2868_0_0_0/* return_type */
	, RuntimeInvoker_Category_t2868/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103072_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12993_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103072_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12993_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12993_0_0_0;
extern Il2CppType IEnumerator_1_t12993_1_0_0;
struct IEnumerator_1_t12993;
extern Il2CppGenericClass IEnumerator_1_t12993_GenericClass;
TypeInfo IEnumerator_1_t12993_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12993_MethodInfos/* methods */
	, IEnumerator_1_t12993_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12993_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12993_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12993_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12993_0_0_0/* byval_arg */
	, &IEnumerator_1_t12993_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12993_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10872_il2cpp_TypeInfo;

extern TypeInfo Category_t2868_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77926_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCategory_t2868_m90724_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Category>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Category>(System.Int32)
 uint16_t Array_InternalArray__get_Item_TisCategory_t2868_m90724 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77921_MethodInfo;
 void InternalEnumerator_1__ctor_m77921 (InternalEnumerator_1_t10872 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77922_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77922 (InternalEnumerator_1_t10872 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77923_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77923 (InternalEnumerator_1_t10872 * __this, MethodInfo* method){
	{
		uint16_t L_0 = InternalEnumerator_1_get_Current_m77926(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77926_MethodInfo);
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Category_t2868_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77924_MethodInfo;
 void InternalEnumerator_1_Dispose_m77924 (InternalEnumerator_1_t10872 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77925_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77925 (InternalEnumerator_1_t10872 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::get_Current()
 uint16_t InternalEnumerator_1_get_Current_m77926 (InternalEnumerator_1_t10872 * __this, MethodInfo* method){
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
		uint16_t L_8 = Array_InternalArray__get_Item_TisCategory_t2868_m90724(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCategory_t2868_m90724_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10872____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10872_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10872, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10872____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10872_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10872, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10872_FieldInfos[] =
{
	&InternalEnumerator_1_t10872____array_0_FieldInfo,
	&InternalEnumerator_1_t10872____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10872____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10872_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77923_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10872____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10872_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77926_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10872_PropertyInfos[] =
{
	&InternalEnumerator_1_t10872____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10872____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10872_InternalEnumerator_1__ctor_m77921_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77921_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77921_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77921/* method */
	, &InternalEnumerator_1_t10872_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10872_InternalEnumerator_1__ctor_m77921_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77921_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77922_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77922_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77922/* method */
	, &InternalEnumerator_1_t10872_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77922_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77923_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77923_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77923/* method */
	, &InternalEnumerator_1_t10872_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77923_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77924_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77924_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77924/* method */
	, &InternalEnumerator_1_t10872_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77924_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77925_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77925_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77925/* method */
	, &InternalEnumerator_1_t10872_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77925_GenericMethod/* genericMethod */

};
extern Il2CppType Category_t2868_0_0_0;
extern void* RuntimeInvoker_Category_t2868 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77926_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77926_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77926/* method */
	, &InternalEnumerator_1_t10872_il2cpp_TypeInfo/* declaring_type */
	, &Category_t2868_0_0_0/* return_type */
	, RuntimeInvoker_Category_t2868/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77926_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10872_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77921_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77922_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77923_MethodInfo,
	&InternalEnumerator_1_Dispose_m77924_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77925_MethodInfo,
	&InternalEnumerator_1_get_Current_m77926_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10872_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77923_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77925_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77922_MethodInfo,
	&InternalEnumerator_1_Dispose_m77924_MethodInfo,
	&InternalEnumerator_1_get_Current_m77926_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10872_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12993_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10872_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12993_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10872_0_0_0;
extern Il2CppType InternalEnumerator_1_t10872_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10872_GenericClass;
TypeInfo InternalEnumerator_1_t10872_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10872_MethodInfos/* methods */
	, InternalEnumerator_1_t10872_PropertyInfos/* properties */
	, InternalEnumerator_1_t10872_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10872_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10872_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10872_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10872_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10872_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10872_1_0_0/* this_arg */
	, InternalEnumerator_1_t10872_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10872_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10872)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14493_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>
extern MethodInfo ICollection_1_get_Count_m103073_MethodInfo;
static PropertyInfo ICollection_1_t14493____Count_PropertyInfo = 
{
	&ICollection_1_t14493_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103073_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103074_MethodInfo;
static PropertyInfo ICollection_1_t14493____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14493_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103074_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14493_PropertyInfos[] =
{
	&ICollection_1_t14493____Count_PropertyInfo,
	&ICollection_1_t14493____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103073_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::get_Count()
MethodInfo ICollection_1_get_Count_m103073_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14493_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103073_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103074_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103074_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14493_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103074_GenericMethod/* genericMethod */

};
extern Il2CppType Category_t2868_0_0_0;
extern Il2CppType Category_t2868_0_0_0;
static ParameterInfo ICollection_1_t14493_ICollection_1_Add_m103075_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Category_t2868_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103075_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::Add(T)
MethodInfo ICollection_1_Add_m103075_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14493_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_UInt16_t918/* invoker_method */
	, ICollection_1_t14493_ICollection_1_Add_m103075_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103075_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103076_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::Clear()
MethodInfo ICollection_1_Clear_m103076_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14493_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103076_GenericMethod/* genericMethod */

};
extern Il2CppType Category_t2868_0_0_0;
static ParameterInfo ICollection_1_t14493_ICollection_1_Contains_m103077_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Category_t2868_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103077_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::Contains(T)
MethodInfo ICollection_1_Contains_m103077_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14493_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_UInt16_t918/* invoker_method */
	, ICollection_1_t14493_ICollection_1_Contains_m103077_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103077_GenericMethod/* genericMethod */

};
extern Il2CppType CategoryU5BU5D_t11459_0_0_0;
extern Il2CppType CategoryU5BU5D_t11459_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14493_ICollection_1_CopyTo_m103078_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CategoryU5BU5D_t11459_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103078_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103078_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14493_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14493_ICollection_1_CopyTo_m103078_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103078_GenericMethod/* genericMethod */

};
extern Il2CppType Category_t2868_0_0_0;
static ParameterInfo ICollection_1_t14493_ICollection_1_Remove_m103079_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Category_t2868_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103079_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::Remove(T)
MethodInfo ICollection_1_Remove_m103079_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14493_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_UInt16_t918/* invoker_method */
	, ICollection_1_t14493_ICollection_1_Remove_m103079_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103079_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14493_MethodInfos[] =
{
	&ICollection_1_get_Count_m103073_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103074_MethodInfo,
	&ICollection_1_Add_m103075_MethodInfo,
	&ICollection_1_Clear_m103076_MethodInfo,
	&ICollection_1_Contains_m103077_MethodInfo,
	&ICollection_1_CopyTo_m103078_MethodInfo,
	&ICollection_1_Remove_m103079_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14495_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14493_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14495_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14493_0_0_0;
extern Il2CppType ICollection_1_t14493_1_0_0;
struct ICollection_1_t14493;
extern Il2CppGenericClass ICollection_1_t14493_GenericClass;
TypeInfo ICollection_1_t14493_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14493_MethodInfos/* methods */
	, ICollection_1_t14493_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14493_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14493_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14493_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14493_0_0_0/* byval_arg */
	, &ICollection_1_t14493_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14493_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Category>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Category>
extern Il2CppType IEnumerator_1_t12993_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103080_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Category>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103080_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14495_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12993_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103080_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14495_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103080_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14495_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14495_0_0_0;
extern Il2CppType IEnumerable_1_t14495_1_0_0;
struct IEnumerable_1_t14495;
extern Il2CppGenericClass IEnumerable_1_t14495_GenericClass;
TypeInfo IEnumerable_1_t14495_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14495_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14495_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14495_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14495_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14495_0_0_0/* byval_arg */
	, &IEnumerable_1_t14495_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14495_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14494_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>
extern MethodInfo IList_1_get_Item_m103081_MethodInfo;
extern MethodInfo IList_1_set_Item_m103082_MethodInfo;
static PropertyInfo IList_1_t14494____Item_PropertyInfo = 
{
	&IList_1_t14494_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103081_MethodInfo/* get */
	, &IList_1_set_Item_m103082_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14494_PropertyInfos[] =
{
	&IList_1_t14494____Item_PropertyInfo,
	NULL
};
extern Il2CppType Category_t2868_0_0_0;
static ParameterInfo IList_1_t14494_IList_1_IndexOf_m103083_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Category_t2868_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103083_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103083_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14494_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_UInt16_t918/* invoker_method */
	, IList_1_t14494_IList_1_IndexOf_m103083_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103083_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Category_t2868_0_0_0;
static ParameterInfo IList_1_t14494_IList_1_Insert_m103084_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Category_t2868_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103084_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103084_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14494_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_UInt16_t918/* invoker_method */
	, IList_1_t14494_IList_1_Insert_m103084_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103084_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14494_IList_1_RemoveAt_m103085_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103085_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103085_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14494_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14494_IList_1_RemoveAt_m103085_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103085_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14494_IList_1_get_Item_m103081_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Category_t2868_0_0_0;
extern void* RuntimeInvoker_Category_t2868_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103081_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103081_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14494_il2cpp_TypeInfo/* declaring_type */
	, &Category_t2868_0_0_0/* return_type */
	, RuntimeInvoker_Category_t2868_Int32_t23/* invoker_method */
	, IList_1_t14494_IList_1_get_Item_m103081_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103081_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Category_t2868_0_0_0;
static ParameterInfo IList_1_t14494_IList_1_set_Item_m103082_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Category_t2868_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_UInt16_t918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103082_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103082_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14494_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_UInt16_t918/* invoker_method */
	, IList_1_t14494_IList_1_set_Item_m103082_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103082_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14494_MethodInfos[] =
{
	&IList_1_IndexOf_m103083_MethodInfo,
	&IList_1_Insert_m103084_MethodInfo,
	&IList_1_RemoveAt_m103085_MethodInfo,
	&IList_1_get_Item_m103081_MethodInfo,
	&IList_1_set_Item_m103082_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14494_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14493_il2cpp_TypeInfo,
	&IEnumerable_1_t14495_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14494_0_0_0;
extern Il2CppType IList_1_t14494_1_0_0;
struct IList_1_t14494;
extern Il2CppGenericClass IList_1_t14494_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14494_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14494_MethodInfos/* methods */
	, IList_1_t14494_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14494_il2cpp_TypeInfo/* element_class */
	, IList_1_t14494_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14494_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14494_0_0_0/* byval_arg */
	, &IList_1_t14494_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14494_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t12995_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Mark>
extern MethodInfo IEnumerator_1_get_Current_m103086_MethodInfo;
static PropertyInfo IEnumerator_1_t12995____Current_PropertyInfo = 
{
	&IEnumerator_1_t12995_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103086_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12995_PropertyInfos[] =
{
	&IEnumerator_1_t12995____Current_PropertyInfo,
	NULL
};
extern Il2CppType Mark_t2877_0_0_0;
extern void* RuntimeInvoker_Mark_t2877 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103086_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103086_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12995_il2cpp_TypeInfo/* declaring_type */
	, &Mark_t2877_0_0_0/* return_type */
	, RuntimeInvoker_Mark_t2877/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103086_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12995_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103086_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12995_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12995_0_0_0;
extern Il2CppType IEnumerator_1_t12995_1_0_0;
struct IEnumerator_1_t12995;
extern Il2CppGenericClass IEnumerator_1_t12995_GenericClass;
TypeInfo IEnumerator_1_t12995_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12995_MethodInfos/* methods */
	, IEnumerator_1_t12995_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12995_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12995_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12995_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12995_0_0_0/* byval_arg */
	, &IEnumerator_1_t12995_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12995_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10873_il2cpp_TypeInfo;

extern TypeInfo Mark_t2877_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77932_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMark_t2877_m90735_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
 Mark_t2877  Array_InternalArray__get_Item_TisMark_t2877_m90735 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77927_MethodInfo;
 void InternalEnumerator_1__ctor_m77927 (InternalEnumerator_1_t10873 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77928_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77928 (InternalEnumerator_1_t10873 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77929_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77929 (InternalEnumerator_1_t10873 * __this, MethodInfo* method){
	{
		Mark_t2877  L_0 = InternalEnumerator_1_get_Current_m77932(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77932_MethodInfo);
		Mark_t2877  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Mark_t2877_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77930_MethodInfo;
 void InternalEnumerator_1_Dispose_m77930 (InternalEnumerator_1_t10873 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77931_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77931 (InternalEnumerator_1_t10873 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
 Mark_t2877  InternalEnumerator_1_get_Current_m77932 (InternalEnumerator_1_t10873 * __this, MethodInfo* method){
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
		Mark_t2877  L_8 = Array_InternalArray__get_Item_TisMark_t2877_m90735(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMark_t2877_m90735_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10873____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10873_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10873, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10873____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10873_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10873, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10873_FieldInfos[] =
{
	&InternalEnumerator_1_t10873____array_0_FieldInfo,
	&InternalEnumerator_1_t10873____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10873____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10873_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77929_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10873____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10873_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77932_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10873_PropertyInfos[] =
{
	&InternalEnumerator_1_t10873____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10873____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10873_InternalEnumerator_1__ctor_m77927_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77927_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77927_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77927/* method */
	, &InternalEnumerator_1_t10873_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10873_InternalEnumerator_1__ctor_m77927_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77927_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77928_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77928_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77928/* method */
	, &InternalEnumerator_1_t10873_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77928_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77929_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77929_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77929/* method */
	, &InternalEnumerator_1_t10873_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77929_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77930_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77930_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77930/* method */
	, &InternalEnumerator_1_t10873_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77930_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77931_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77931_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77931/* method */
	, &InternalEnumerator_1_t10873_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77931_GenericMethod/* genericMethod */

};
extern Il2CppType Mark_t2877_0_0_0;
extern void* RuntimeInvoker_Mark_t2877 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77932_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77932_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77932/* method */
	, &InternalEnumerator_1_t10873_il2cpp_TypeInfo/* declaring_type */
	, &Mark_t2877_0_0_0/* return_type */
	, RuntimeInvoker_Mark_t2877/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77932_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10873_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77927_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77928_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77929_MethodInfo,
	&InternalEnumerator_1_Dispose_m77930_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77931_MethodInfo,
	&InternalEnumerator_1_get_Current_m77932_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10873_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77929_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77931_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77928_MethodInfo,
	&InternalEnumerator_1_Dispose_m77930_MethodInfo,
	&InternalEnumerator_1_get_Current_m77932_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10873_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12995_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10873_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12995_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10873_0_0_0;
extern Il2CppType InternalEnumerator_1_t10873_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10873_GenericClass;
TypeInfo InternalEnumerator_1_t10873_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10873_MethodInfos/* methods */
	, InternalEnumerator_1_t10873_PropertyInfos/* properties */
	, InternalEnumerator_1_t10873_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10873_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10873_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10873_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10873_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10873_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10873_1_0_0/* this_arg */
	, InternalEnumerator_1_t10873_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10873_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10873)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14496_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>
extern MethodInfo ICollection_1_get_Count_m103087_MethodInfo;
static PropertyInfo ICollection_1_t14496____Count_PropertyInfo = 
{
	&ICollection_1_t14496_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103087_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103088_MethodInfo;
static PropertyInfo ICollection_1_t14496____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14496_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103088_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14496_PropertyInfos[] =
{
	&ICollection_1_t14496____Count_PropertyInfo,
	&ICollection_1_t14496____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103087_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::get_Count()
MethodInfo ICollection_1_get_Count_m103087_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14496_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103087_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103088_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103088_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14496_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103088_GenericMethod/* genericMethod */

};
extern Il2CppType Mark_t2877_0_0_0;
extern Il2CppType Mark_t2877_0_0_0;
static ParameterInfo ICollection_1_t14496_ICollection_1_Add_m103089_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mark_t2877_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Mark_t2877 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103089_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Add(T)
MethodInfo ICollection_1_Add_m103089_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14496_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Mark_t2877/* invoker_method */
	, ICollection_1_t14496_ICollection_1_Add_m103089_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103089_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103090_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Clear()
MethodInfo ICollection_1_Clear_m103090_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14496_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103090_GenericMethod/* genericMethod */

};
extern Il2CppType Mark_t2877_0_0_0;
static ParameterInfo ICollection_1_t14496_ICollection_1_Contains_m103091_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mark_t2877_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Mark_t2877 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103091_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Contains(T)
MethodInfo ICollection_1_Contains_m103091_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14496_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Mark_t2877/* invoker_method */
	, ICollection_1_t14496_ICollection_1_Contains_m103091_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103091_GenericMethod/* genericMethod */

};
extern Il2CppType MarkU5BU5D_t2882_0_0_0;
extern Il2CppType MarkU5BU5D_t2882_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14496_ICollection_1_CopyTo_m103092_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MarkU5BU5D_t2882_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103092_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103092_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14496_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14496_ICollection_1_CopyTo_m103092_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103092_GenericMethod/* genericMethod */

};
extern Il2CppType Mark_t2877_0_0_0;
static ParameterInfo ICollection_1_t14496_ICollection_1_Remove_m103093_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mark_t2877_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Mark_t2877 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103093_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Remove(T)
MethodInfo ICollection_1_Remove_m103093_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14496_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Mark_t2877/* invoker_method */
	, ICollection_1_t14496_ICollection_1_Remove_m103093_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103093_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14496_MethodInfos[] =
{
	&ICollection_1_get_Count_m103087_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103088_MethodInfo,
	&ICollection_1_Add_m103089_MethodInfo,
	&ICollection_1_Clear_m103090_MethodInfo,
	&ICollection_1_Contains_m103091_MethodInfo,
	&ICollection_1_CopyTo_m103092_MethodInfo,
	&ICollection_1_Remove_m103093_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14498_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14496_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14498_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14496_0_0_0;
extern Il2CppType ICollection_1_t14496_1_0_0;
struct ICollection_1_t14496;
extern Il2CppGenericClass ICollection_1_t14496_GenericClass;
TypeInfo ICollection_1_t14496_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14496_MethodInfos/* methods */
	, ICollection_1_t14496_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14496_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14496_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14496_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14496_0_0_0/* byval_arg */
	, &ICollection_1_t14496_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14496_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Mark>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Mark>
extern Il2CppType IEnumerator_1_t12995_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103094_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Mark>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103094_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14498_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12995_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103094_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14498_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103094_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14498_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14498_0_0_0;
extern Il2CppType IEnumerable_1_t14498_1_0_0;
struct IEnumerable_1_t14498;
extern Il2CppGenericClass IEnumerable_1_t14498_GenericClass;
TypeInfo IEnumerable_1_t14498_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14498_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14498_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14498_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14498_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14498_0_0_0/* byval_arg */
	, &IEnumerable_1_t14498_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14498_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14497_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>
extern MethodInfo IList_1_get_Item_m103095_MethodInfo;
extern MethodInfo IList_1_set_Item_m103096_MethodInfo;
static PropertyInfo IList_1_t14497____Item_PropertyInfo = 
{
	&IList_1_t14497_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103095_MethodInfo/* get */
	, &IList_1_set_Item_m103096_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14497_PropertyInfos[] =
{
	&IList_1_t14497____Item_PropertyInfo,
	NULL
};
extern Il2CppType Mark_t2877_0_0_0;
static ParameterInfo IList_1_t14497_IList_1_IndexOf_m103097_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mark_t2877_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Mark_t2877 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103097_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103097_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14497_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Mark_t2877/* invoker_method */
	, IList_1_t14497_IList_1_IndexOf_m103097_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103097_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Mark_t2877_0_0_0;
static ParameterInfo IList_1_t14497_IList_1_Insert_m103098_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Mark_t2877_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Mark_t2877 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103098_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103098_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14497_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Mark_t2877/* invoker_method */
	, IList_1_t14497_IList_1_Insert_m103098_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103098_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14497_IList_1_RemoveAt_m103099_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103099_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103099_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14497_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14497_IList_1_RemoveAt_m103099_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103099_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14497_IList_1_get_Item_m103095_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Mark_t2877_0_0_0;
extern void* RuntimeInvoker_Mark_t2877_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103095_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103095_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14497_il2cpp_TypeInfo/* declaring_type */
	, &Mark_t2877_0_0_0/* return_type */
	, RuntimeInvoker_Mark_t2877_Int32_t23/* invoker_method */
	, IList_1_t14497_IList_1_get_Item_m103095_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103095_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Mark_t2877_0_0_0;
static ParameterInfo IList_1_t14497_IList_1_set_Item_m103096_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Mark_t2877_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Mark_t2877 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103096_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103096_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14497_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Mark_t2877/* invoker_method */
	, IList_1_t14497_IList_1_set_Item_m103096_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103096_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14497_MethodInfos[] =
{
	&IList_1_IndexOf_m103097_MethodInfo,
	&IList_1_Insert_m103098_MethodInfo,
	&IList_1_RemoveAt_m103099_MethodInfo,
	&IList_1_get_Item_m103095_MethodInfo,
	&IList_1_set_Item_m103096_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14497_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14496_il2cpp_TypeInfo,
	&IEnumerable_1_t14498_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14497_0_0_0;
extern Il2CppType IList_1_t14497_1_0_0;
struct IList_1_t14497;
extern Il2CppGenericClass IList_1_t14497_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14497_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14497_MethodInfos/* methods */
	, IList_1_t14497_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14497_il2cpp_TypeInfo/* element_class */
	, IList_1_t14497_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14497_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14497_0_0_0/* byval_arg */
	, &IList_1_t14497_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14497_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t12997_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>
extern MethodInfo IEnumerator_1_get_Current_m103100_MethodInfo;
static PropertyInfo IEnumerator_1_t12997____Current_PropertyInfo = 
{
	&IEnumerator_1_t12997_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103100_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12997_PropertyInfos[] =
{
	&IEnumerator_1_t12997____Current_PropertyInfo,
	NULL
};
extern Il2CppType Mode_t2880_0_0_0;
extern void* RuntimeInvoker_Mode_t2880 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103100_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103100_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12997_il2cpp_TypeInfo/* declaring_type */
	, &Mode_t2880_0_0_0/* return_type */
	, RuntimeInvoker_Mode_t2880/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103100_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12997_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103100_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12997_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12997_0_0_0;
extern Il2CppType IEnumerator_1_t12997_1_0_0;
struct IEnumerator_1_t12997;
extern Il2CppGenericClass IEnumerator_1_t12997_GenericClass;
TypeInfo IEnumerator_1_t12997_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12997_MethodInfos/* methods */
	, IEnumerator_1_t12997_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12997_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12997_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12997_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12997_0_0_0/* byval_arg */
	, &IEnumerator_1_t12997_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12997_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10874_il2cpp_TypeInfo;

extern TypeInfo Mode_t2880_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77938_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMode_t2880_m90746_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Interpreter/Mode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Interpreter/Mode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMode_t2880_m90746 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77933_MethodInfo;
 void InternalEnumerator_1__ctor_m77933 (InternalEnumerator_1_t10874 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77934_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77934 (InternalEnumerator_1_t10874 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77935_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77935 (InternalEnumerator_1_t10874 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77938(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77938_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Mode_t2880_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77936_MethodInfo;
 void InternalEnumerator_1_Dispose_m77936 (InternalEnumerator_1_t10874 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77937_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77937 (InternalEnumerator_1_t10874 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77938 (InternalEnumerator_1_t10874 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMode_t2880_m90746(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMode_t2880_m90746_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10874____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10874_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10874, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10874____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10874_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10874, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10874_FieldInfos[] =
{
	&InternalEnumerator_1_t10874____array_0_FieldInfo,
	&InternalEnumerator_1_t10874____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10874____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10874_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77935_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10874____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10874_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77938_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10874_PropertyInfos[] =
{
	&InternalEnumerator_1_t10874____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10874____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10874_InternalEnumerator_1__ctor_m77933_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77933_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77933_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77933/* method */
	, &InternalEnumerator_1_t10874_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10874_InternalEnumerator_1__ctor_m77933_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77933_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77934_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77934_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77934/* method */
	, &InternalEnumerator_1_t10874_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77934_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77935_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77935_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77935/* method */
	, &InternalEnumerator_1_t10874_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77935_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77936_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77936_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77936/* method */
	, &InternalEnumerator_1_t10874_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77936_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77937_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77937_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77937/* method */
	, &InternalEnumerator_1_t10874_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77937_GenericMethod/* genericMethod */

};
extern Il2CppType Mode_t2880_0_0_0;
extern void* RuntimeInvoker_Mode_t2880 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77938_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77938_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77938/* method */
	, &InternalEnumerator_1_t10874_il2cpp_TypeInfo/* declaring_type */
	, &Mode_t2880_0_0_0/* return_type */
	, RuntimeInvoker_Mode_t2880/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77938_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10874_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77933_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77934_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77935_MethodInfo,
	&InternalEnumerator_1_Dispose_m77936_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77937_MethodInfo,
	&InternalEnumerator_1_get_Current_m77938_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10874_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77935_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77937_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77934_MethodInfo,
	&InternalEnumerator_1_Dispose_m77936_MethodInfo,
	&InternalEnumerator_1_get_Current_m77938_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10874_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12997_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10874_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12997_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10874_0_0_0;
extern Il2CppType InternalEnumerator_1_t10874_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10874_GenericClass;
TypeInfo InternalEnumerator_1_t10874_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10874_MethodInfos/* methods */
	, InternalEnumerator_1_t10874_PropertyInfos/* properties */
	, InternalEnumerator_1_t10874_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10874_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10874_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10874_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10874_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10874_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10874_1_0_0/* this_arg */
	, InternalEnumerator_1_t10874_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10874_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10874)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14499_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>
extern MethodInfo ICollection_1_get_Count_m103101_MethodInfo;
static PropertyInfo ICollection_1_t14499____Count_PropertyInfo = 
{
	&ICollection_1_t14499_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103101_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103102_MethodInfo;
static PropertyInfo ICollection_1_t14499____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14499_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103102_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14499_PropertyInfos[] =
{
	&ICollection_1_t14499____Count_PropertyInfo,
	&ICollection_1_t14499____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103101_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::get_Count()
MethodInfo ICollection_1_get_Count_m103101_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14499_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103101_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103102_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103102_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14499_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103102_GenericMethod/* genericMethod */

};
extern Il2CppType Mode_t2880_0_0_0;
extern Il2CppType Mode_t2880_0_0_0;
static ParameterInfo ICollection_1_t14499_ICollection_1_Add_m103103_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mode_t2880_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103103_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::Add(T)
MethodInfo ICollection_1_Add_m103103_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14499_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14499_ICollection_1_Add_m103103_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103103_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103104_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::Clear()
MethodInfo ICollection_1_Clear_m103104_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14499_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103104_GenericMethod/* genericMethod */

};
extern Il2CppType Mode_t2880_0_0_0;
static ParameterInfo ICollection_1_t14499_ICollection_1_Contains_m103105_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mode_t2880_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103105_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::Contains(T)
MethodInfo ICollection_1_Contains_m103105_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14499_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14499_ICollection_1_Contains_m103105_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103105_GenericMethod/* genericMethod */

};
extern Il2CppType ModeU5BU5D_t11460_0_0_0;
extern Il2CppType ModeU5BU5D_t11460_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14499_ICollection_1_CopyTo_m103106_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ModeU5BU5D_t11460_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103106_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103106_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14499_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14499_ICollection_1_CopyTo_m103106_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103106_GenericMethod/* genericMethod */

};
extern Il2CppType Mode_t2880_0_0_0;
static ParameterInfo ICollection_1_t14499_ICollection_1_Remove_m103107_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mode_t2880_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103107_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::Remove(T)
MethodInfo ICollection_1_Remove_m103107_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14499_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14499_ICollection_1_Remove_m103107_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103107_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14499_MethodInfos[] =
{
	&ICollection_1_get_Count_m103101_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103102_MethodInfo,
	&ICollection_1_Add_m103103_MethodInfo,
	&ICollection_1_Clear_m103104_MethodInfo,
	&ICollection_1_Contains_m103105_MethodInfo,
	&ICollection_1_CopyTo_m103106_MethodInfo,
	&ICollection_1_Remove_m103107_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14501_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14499_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14501_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14499_0_0_0;
extern Il2CppType ICollection_1_t14499_1_0_0;
struct ICollection_1_t14499;
extern Il2CppGenericClass ICollection_1_t14499_GenericClass;
TypeInfo ICollection_1_t14499_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14499_MethodInfos/* methods */
	, ICollection_1_t14499_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14499_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14499_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14499_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14499_0_0_0/* byval_arg */
	, &ICollection_1_t14499_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14499_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Interpreter/Mode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Interpreter/Mode>
extern Il2CppType IEnumerator_1_t12997_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103108_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Interpreter/Mode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103108_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14501_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12997_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103108_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14501_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103108_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14501_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14501_0_0_0;
extern Il2CppType IEnumerable_1_t14501_1_0_0;
struct IEnumerable_1_t14501;
extern Il2CppGenericClass IEnumerable_1_t14501_GenericClass;
TypeInfo IEnumerable_1_t14501_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14501_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14501_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14501_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14501_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14501_0_0_0/* byval_arg */
	, &IEnumerable_1_t14501_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14501_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14500_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>
extern MethodInfo IList_1_get_Item_m103109_MethodInfo;
extern MethodInfo IList_1_set_Item_m103110_MethodInfo;
static PropertyInfo IList_1_t14500____Item_PropertyInfo = 
{
	&IList_1_t14500_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103109_MethodInfo/* get */
	, &IList_1_set_Item_m103110_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14500_PropertyInfos[] =
{
	&IList_1_t14500____Item_PropertyInfo,
	NULL
};
extern Il2CppType Mode_t2880_0_0_0;
static ParameterInfo IList_1_t14500_IList_1_IndexOf_m103111_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mode_t2880_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103111_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103111_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14500_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14500_IList_1_IndexOf_m103111_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103111_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Mode_t2880_0_0_0;
static ParameterInfo IList_1_t14500_IList_1_Insert_m103112_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Mode_t2880_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103112_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103112_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14500_IList_1_Insert_m103112_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103112_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14500_IList_1_RemoveAt_m103113_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103113_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103113_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14500_IList_1_RemoveAt_m103113_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103113_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14500_IList_1_get_Item_m103109_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Mode_t2880_0_0_0;
extern void* RuntimeInvoker_Mode_t2880_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103109_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103109_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14500_il2cpp_TypeInfo/* declaring_type */
	, &Mode_t2880_0_0_0/* return_type */
	, RuntimeInvoker_Mode_t2880_Int32_t23/* invoker_method */
	, IList_1_t14500_IList_1_get_Item_m103109_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103109_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Mode_t2880_0_0_0;
static ParameterInfo IList_1_t14500_IList_1_set_Item_m103110_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Mode_t2880_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103110_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103110_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14500_IList_1_set_Item_m103110_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103110_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14500_MethodInfos[] =
{
	&IList_1_IndexOf_m103111_MethodInfo,
	&IList_1_Insert_m103112_MethodInfo,
	&IList_1_RemoveAt_m103113_MethodInfo,
	&IList_1_get_Item_m103109_MethodInfo,
	&IList_1_set_Item_m103110_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14500_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14499_il2cpp_TypeInfo,
	&IEnumerable_1_t14501_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14500_0_0_0;
extern Il2CppType IList_1_t14500_1_0_0;
struct IList_1_t14500;
extern Il2CppGenericClass IList_1_t14500_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14500_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14500_MethodInfos/* methods */
	, IList_1_t14500_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14500_il2cpp_TypeInfo/* element_class */
	, IList_1_t14500_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14500_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14500_0_0_0/* byval_arg */
	, &IList_1_t14500_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14500_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t12999_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Uri/UriScheme>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Uri/UriScheme>
extern MethodInfo IEnumerator_1_get_Current_m103114_MethodInfo;
static PropertyInfo IEnumerator_1_t12999____Current_PropertyInfo = 
{
	&IEnumerator_1_t12999_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103114_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12999_PropertyInfos[] =
{
	&IEnumerator_1_t12999____Current_PropertyInfo,
	NULL
};
extern Il2CppType UriScheme_t2913_0_0_0;
extern void* RuntimeInvoker_UriScheme_t2913 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103114_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Uri/UriScheme>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103114_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12999_il2cpp_TypeInfo/* declaring_type */
	, &UriScheme_t2913_0_0_0/* return_type */
	, RuntimeInvoker_UriScheme_t2913/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103114_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12999_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103114_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12999_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12999_0_0_0;
extern Il2CppType IEnumerator_1_t12999_1_0_0;
struct IEnumerator_1_t12999;
extern Il2CppGenericClass IEnumerator_1_t12999_GenericClass;
TypeInfo IEnumerator_1_t12999_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12999_MethodInfos/* methods */
	, IEnumerator_1_t12999_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12999_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12999_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12999_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12999_0_0_0/* byval_arg */
	, &IEnumerator_1_t12999_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12999_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10875_il2cpp_TypeInfo;

extern TypeInfo UriScheme_t2913_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77944_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUriScheme_t2913_m90757_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
 UriScheme_t2913  Array_InternalArray__get_Item_TisUriScheme_t2913_m90757 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77939_MethodInfo;
 void InternalEnumerator_1__ctor_m77939 (InternalEnumerator_1_t10875 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77940_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77940 (InternalEnumerator_1_t10875 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Uri/UriScheme>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77941_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77941 (InternalEnumerator_1_t10875 * __this, MethodInfo* method){
	{
		UriScheme_t2913  L_0 = InternalEnumerator_1_get_Current_m77944(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77944_MethodInfo);
		UriScheme_t2913  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UriScheme_t2913_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77942_MethodInfo;
 void InternalEnumerator_1_Dispose_m77942 (InternalEnumerator_1_t10875 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Uri/UriScheme>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77943_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77943 (InternalEnumerator_1_t10875 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Uri/UriScheme>::get_Current()
 UriScheme_t2913  InternalEnumerator_1_get_Current_m77944 (InternalEnumerator_1_t10875 * __this, MethodInfo* method){
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
		UriScheme_t2913  L_8 = Array_InternalArray__get_Item_TisUriScheme_t2913_m90757(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUriScheme_t2913_m90757_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Uri/UriScheme>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10875____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10875_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10875, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10875____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10875_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10875, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10875_FieldInfos[] =
{
	&InternalEnumerator_1_t10875____array_0_FieldInfo,
	&InternalEnumerator_1_t10875____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10875____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10875_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77941_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10875____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10875_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77944_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10875_PropertyInfos[] =
{
	&InternalEnumerator_1_t10875____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10875____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10875_InternalEnumerator_1__ctor_m77939_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77939_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77939_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77939/* method */
	, &InternalEnumerator_1_t10875_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10875_InternalEnumerator_1__ctor_m77939_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77939_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77940_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77940_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77940/* method */
	, &InternalEnumerator_1_t10875_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77940_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77941_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Uri/UriScheme>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77941_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77941/* method */
	, &InternalEnumerator_1_t10875_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77941_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77942_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77942_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77942/* method */
	, &InternalEnumerator_1_t10875_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77942_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77943_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Uri/UriScheme>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77943_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77943/* method */
	, &InternalEnumerator_1_t10875_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77943_GenericMethod/* genericMethod */

};
extern Il2CppType UriScheme_t2913_0_0_0;
extern void* RuntimeInvoker_UriScheme_t2913 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77944_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Uri/UriScheme>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77944_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77944/* method */
	, &InternalEnumerator_1_t10875_il2cpp_TypeInfo/* declaring_type */
	, &UriScheme_t2913_0_0_0/* return_type */
	, RuntimeInvoker_UriScheme_t2913/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77944_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10875_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77939_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77940_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77941_MethodInfo,
	&InternalEnumerator_1_Dispose_m77942_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77943_MethodInfo,
	&InternalEnumerator_1_get_Current_m77944_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10875_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77941_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77943_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77940_MethodInfo,
	&InternalEnumerator_1_Dispose_m77942_MethodInfo,
	&InternalEnumerator_1_get_Current_m77944_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10875_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12999_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10875_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12999_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10875_0_0_0;
extern Il2CppType InternalEnumerator_1_t10875_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10875_GenericClass;
TypeInfo InternalEnumerator_1_t10875_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10875_MethodInfos/* methods */
	, InternalEnumerator_1_t10875_PropertyInfos/* properties */
	, InternalEnumerator_1_t10875_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10875_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10875_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10875_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10875_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10875_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10875_1_0_0/* this_arg */
	, InternalEnumerator_1_t10875_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10875_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10875)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14502_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Uri/UriScheme>
extern MethodInfo ICollection_1_get_Count_m103115_MethodInfo;
static PropertyInfo ICollection_1_t14502____Count_PropertyInfo = 
{
	&ICollection_1_t14502_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103115_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103116_MethodInfo;
static PropertyInfo ICollection_1_t14502____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14502_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103116_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14502_PropertyInfos[] =
{
	&ICollection_1_t14502____Count_PropertyInfo,
	&ICollection_1_t14502____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103115_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::get_Count()
MethodInfo ICollection_1_get_Count_m103115_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14502_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103115_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103116_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103116_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14502_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103116_GenericMethod/* genericMethod */

};
extern Il2CppType UriScheme_t2913_0_0_0;
extern Il2CppType UriScheme_t2913_0_0_0;
static ParameterInfo ICollection_1_t14502_ICollection_1_Add_m103117_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriScheme_t2913_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_UriScheme_t2913 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103117_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Add(T)
MethodInfo ICollection_1_Add_m103117_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14502_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_UriScheme_t2913/* invoker_method */
	, ICollection_1_t14502_ICollection_1_Add_m103117_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103117_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103118_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Clear()
MethodInfo ICollection_1_Clear_m103118_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14502_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103118_GenericMethod/* genericMethod */

};
extern Il2CppType UriScheme_t2913_0_0_0;
static ParameterInfo ICollection_1_t14502_ICollection_1_Contains_m103119_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriScheme_t2913_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_UriScheme_t2913 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103119_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Contains(T)
MethodInfo ICollection_1_Contains_m103119_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14502_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_UriScheme_t2913/* invoker_method */
	, ICollection_1_t14502_ICollection_1_Contains_m103119_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103119_GenericMethod/* genericMethod */

};
extern Il2CppType UriSchemeU5BU5D_t2914_0_0_0;
extern Il2CppType UriSchemeU5BU5D_t2914_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14502_ICollection_1_CopyTo_m103120_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UriSchemeU5BU5D_t2914_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103120_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103120_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14502_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14502_ICollection_1_CopyTo_m103120_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103120_GenericMethod/* genericMethod */

};
extern Il2CppType UriScheme_t2913_0_0_0;
static ParameterInfo ICollection_1_t14502_ICollection_1_Remove_m103121_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriScheme_t2913_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_UriScheme_t2913 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103121_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Remove(T)
MethodInfo ICollection_1_Remove_m103121_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14502_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_UriScheme_t2913/* invoker_method */
	, ICollection_1_t14502_ICollection_1_Remove_m103121_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103121_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14502_MethodInfos[] =
{
	&ICollection_1_get_Count_m103115_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103116_MethodInfo,
	&ICollection_1_Add_m103117_MethodInfo,
	&ICollection_1_Clear_m103118_MethodInfo,
	&ICollection_1_Contains_m103119_MethodInfo,
	&ICollection_1_CopyTo_m103120_MethodInfo,
	&ICollection_1_Remove_m103121_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14504_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14502_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14504_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14502_0_0_0;
extern Il2CppType ICollection_1_t14502_1_0_0;
struct ICollection_1_t14502;
extern Il2CppGenericClass ICollection_1_t14502_GenericClass;
TypeInfo ICollection_1_t14502_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14502_MethodInfos/* methods */
	, ICollection_1_t14502_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14502_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14502_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14502_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14502_0_0_0/* byval_arg */
	, &ICollection_1_t14502_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14502_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Uri/UriScheme>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Uri/UriScheme>
extern Il2CppType IEnumerator_1_t12999_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103122_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Uri/UriScheme>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103122_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14504_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12999_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103122_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14504_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103122_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14504_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14504_0_0_0;
extern Il2CppType IEnumerable_1_t14504_1_0_0;
struct IEnumerable_1_t14504;
extern Il2CppGenericClass IEnumerable_1_t14504_GenericClass;
TypeInfo IEnumerable_1_t14504_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14504_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14504_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14504_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14504_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14504_0_0_0/* byval_arg */
	, &IEnumerable_1_t14504_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14504_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14503_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Uri/UriScheme>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Uri/UriScheme>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Uri/UriScheme>
extern MethodInfo IList_1_get_Item_m103123_MethodInfo;
extern MethodInfo IList_1_set_Item_m103124_MethodInfo;
static PropertyInfo IList_1_t14503____Item_PropertyInfo = 
{
	&IList_1_t14503_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103123_MethodInfo/* get */
	, &IList_1_set_Item_m103124_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14503_PropertyInfos[] =
{
	&IList_1_t14503____Item_PropertyInfo,
	NULL
};
extern Il2CppType UriScheme_t2913_0_0_0;
static ParameterInfo IList_1_t14503_IList_1_IndexOf_m103125_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriScheme_t2913_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_UriScheme_t2913 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103125_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Uri/UriScheme>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103125_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14503_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_UriScheme_t2913/* invoker_method */
	, IList_1_t14503_IList_1_IndexOf_m103125_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103125_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType UriScheme_t2913_0_0_0;
static ParameterInfo IList_1_t14503_IList_1_Insert_m103126_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UriScheme_t2913_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_UriScheme_t2913 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103126_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103126_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_UriScheme_t2913/* invoker_method */
	, IList_1_t14503_IList_1_Insert_m103126_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103126_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14503_IList_1_RemoveAt_m103127_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103127_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103127_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14503_IList_1_RemoveAt_m103127_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103127_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14503_IList_1_get_Item_m103123_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType UriScheme_t2913_0_0_0;
extern void* RuntimeInvoker_UriScheme_t2913_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103123_GenericMethod;
// T System.Collections.Generic.IList`1<System.Uri/UriScheme>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103123_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14503_il2cpp_TypeInfo/* declaring_type */
	, &UriScheme_t2913_0_0_0/* return_type */
	, RuntimeInvoker_UriScheme_t2913_Int32_t23/* invoker_method */
	, IList_1_t14503_IList_1_get_Item_m103123_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103123_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType UriScheme_t2913_0_0_0;
static ParameterInfo IList_1_t14503_IList_1_set_Item_m103124_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UriScheme_t2913_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_UriScheme_t2913 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103124_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103124_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_UriScheme_t2913/* invoker_method */
	, IList_1_t14503_IList_1_set_Item_m103124_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103124_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14503_MethodInfos[] =
{
	&IList_1_IndexOf_m103125_MethodInfo,
	&IList_1_Insert_m103126_MethodInfo,
	&IList_1_RemoveAt_m103127_MethodInfo,
	&IList_1_get_Item_m103123_MethodInfo,
	&IList_1_set_Item_m103124_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14503_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14502_il2cpp_TypeInfo,
	&IEnumerable_1_t14504_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14503_0_0_0;
extern Il2CppType IList_1_t14503_1_0_0;
struct IList_1_t14503;
extern Il2CppGenericClass IList_1_t14503_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14503_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14503_MethodInfos/* methods */
	, IList_1_t14503_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14503_il2cpp_TypeInfo/* element_class */
	, IList_1_t14503_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14503_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14503_0_0_0/* byval_arg */
	, &IList_1_t14503_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14503_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13001_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.UriHostNameType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UriHostNameType>
extern MethodInfo IEnumerator_1_get_Current_m103128_MethodInfo;
static PropertyInfo IEnumerator_1_t13001____Current_PropertyInfo = 
{
	&IEnumerator_1_t13001_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103128_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13001_PropertyInfos[] =
{
	&IEnumerator_1_t13001____Current_PropertyInfo,
	NULL
};
extern Il2CppType UriHostNameType_t2917_0_0_0;
extern void* RuntimeInvoker_UriHostNameType_t2917 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103128_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.UriHostNameType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103128_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13001_il2cpp_TypeInfo/* declaring_type */
	, &UriHostNameType_t2917_0_0_0/* return_type */
	, RuntimeInvoker_UriHostNameType_t2917/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103128_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13001_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103128_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13001_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13001_0_0_0;
extern Il2CppType IEnumerator_1_t13001_1_0_0;
struct IEnumerator_1_t13001;
extern Il2CppGenericClass IEnumerator_1_t13001_GenericClass;
TypeInfo IEnumerator_1_t13001_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13001_MethodInfos/* methods */
	, IEnumerator_1_t13001_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13001_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13001_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13001_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13001_0_0_0/* byval_arg */
	, &IEnumerator_1_t13001_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13001_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10876_il2cpp_TypeInfo;

extern TypeInfo UriHostNameType_t2917_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77950_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUriHostNameType_t2917_m90768_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UriHostNameType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UriHostNameType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisUriHostNameType_t2917_m90768 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.UriHostNameType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77945_MethodInfo;
 void InternalEnumerator_1__ctor_m77945 (InternalEnumerator_1_t10876 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UriHostNameType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77946_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77946 (InternalEnumerator_1_t10876 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UriHostNameType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77947_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77947 (InternalEnumerator_1_t10876 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77950(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77950_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UriHostNameType_t2917_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UriHostNameType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77948_MethodInfo;
 void InternalEnumerator_1_Dispose_m77948 (InternalEnumerator_1_t10876 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UriHostNameType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77949_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77949 (InternalEnumerator_1_t10876 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.UriHostNameType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77950 (InternalEnumerator_1_t10876 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisUriHostNameType_t2917_m90768(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUriHostNameType_t2917_m90768_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UriHostNameType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10876____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10876_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10876, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10876____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10876_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10876, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10876_FieldInfos[] =
{
	&InternalEnumerator_1_t10876____array_0_FieldInfo,
	&InternalEnumerator_1_t10876____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10876____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10876_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77947_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10876____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10876_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77950_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10876_PropertyInfos[] =
{
	&InternalEnumerator_1_t10876____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10876____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10876_InternalEnumerator_1__ctor_m77945_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77945_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UriHostNameType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77945_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77945/* method */
	, &InternalEnumerator_1_t10876_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10876_InternalEnumerator_1__ctor_m77945_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77945_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77946_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UriHostNameType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77946_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77946/* method */
	, &InternalEnumerator_1_t10876_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77946_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77947_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.UriHostNameType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77947_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77947/* method */
	, &InternalEnumerator_1_t10876_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77947_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77948_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UriHostNameType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77948_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77948/* method */
	, &InternalEnumerator_1_t10876_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77948_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77949_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.UriHostNameType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77949_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77949/* method */
	, &InternalEnumerator_1_t10876_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77949_GenericMethod/* genericMethod */

};
extern Il2CppType UriHostNameType_t2917_0_0_0;
extern void* RuntimeInvoker_UriHostNameType_t2917 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77950_GenericMethod;
// T System.Array/InternalEnumerator`1<System.UriHostNameType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77950_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77950/* method */
	, &InternalEnumerator_1_t10876_il2cpp_TypeInfo/* declaring_type */
	, &UriHostNameType_t2917_0_0_0/* return_type */
	, RuntimeInvoker_UriHostNameType_t2917/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77950_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10876_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77945_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77946_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77947_MethodInfo,
	&InternalEnumerator_1_Dispose_m77948_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77949_MethodInfo,
	&InternalEnumerator_1_get_Current_m77950_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10876_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77947_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77949_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77946_MethodInfo,
	&InternalEnumerator_1_Dispose_m77948_MethodInfo,
	&InternalEnumerator_1_get_Current_m77950_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10876_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13001_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10876_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13001_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10876_0_0_0;
extern Il2CppType InternalEnumerator_1_t10876_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10876_GenericClass;
TypeInfo InternalEnumerator_1_t10876_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10876_MethodInfos/* methods */
	, InternalEnumerator_1_t10876_PropertyInfos/* properties */
	, InternalEnumerator_1_t10876_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10876_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10876_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10876_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10876_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10876_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10876_1_0_0/* this_arg */
	, InternalEnumerator_1_t10876_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10876_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10876)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14505_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UriHostNameType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UriHostNameType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UriHostNameType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UriHostNameType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UriHostNameType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UriHostNameType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UriHostNameType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.UriHostNameType>
extern MethodInfo ICollection_1_get_Count_m103129_MethodInfo;
static PropertyInfo ICollection_1_t14505____Count_PropertyInfo = 
{
	&ICollection_1_t14505_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103129_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103130_MethodInfo;
static PropertyInfo ICollection_1_t14505____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14505_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103130_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14505_PropertyInfos[] =
{
	&ICollection_1_t14505____Count_PropertyInfo,
	&ICollection_1_t14505____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103129_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.UriHostNameType>::get_Count()
MethodInfo ICollection_1_get_Count_m103129_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14505_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103129_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103130_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriHostNameType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103130_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14505_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103130_GenericMethod/* genericMethod */

};
extern Il2CppType UriHostNameType_t2917_0_0_0;
extern Il2CppType UriHostNameType_t2917_0_0_0;
static ParameterInfo ICollection_1_t14505_ICollection_1_Add_m103131_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriHostNameType_t2917_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103131_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriHostNameType>::Add(T)
MethodInfo ICollection_1_Add_m103131_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14505_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14505_ICollection_1_Add_m103131_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103131_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103132_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriHostNameType>::Clear()
MethodInfo ICollection_1_Clear_m103132_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14505_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103132_GenericMethod/* genericMethod */

};
extern Il2CppType UriHostNameType_t2917_0_0_0;
static ParameterInfo ICollection_1_t14505_ICollection_1_Contains_m103133_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriHostNameType_t2917_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103133_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriHostNameType>::Contains(T)
MethodInfo ICollection_1_Contains_m103133_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14505_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14505_ICollection_1_Contains_m103133_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103133_GenericMethod/* genericMethod */

};
extern Il2CppType UriHostNameTypeU5BU5D_t11461_0_0_0;
extern Il2CppType UriHostNameTypeU5BU5D_t11461_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14505_ICollection_1_CopyTo_m103134_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UriHostNameTypeU5BU5D_t11461_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103134_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriHostNameType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103134_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14505_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14505_ICollection_1_CopyTo_m103134_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103134_GenericMethod/* genericMethod */

};
extern Il2CppType UriHostNameType_t2917_0_0_0;
static ParameterInfo ICollection_1_t14505_ICollection_1_Remove_m103135_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriHostNameType_t2917_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103135_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriHostNameType>::Remove(T)
MethodInfo ICollection_1_Remove_m103135_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14505_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14505_ICollection_1_Remove_m103135_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103135_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14505_MethodInfos[] =
{
	&ICollection_1_get_Count_m103129_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103130_MethodInfo,
	&ICollection_1_Add_m103131_MethodInfo,
	&ICollection_1_Clear_m103132_MethodInfo,
	&ICollection_1_Contains_m103133_MethodInfo,
	&ICollection_1_CopyTo_m103134_MethodInfo,
	&ICollection_1_Remove_m103135_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14507_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14505_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14507_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14505_0_0_0;
extern Il2CppType ICollection_1_t14505_1_0_0;
struct ICollection_1_t14505;
extern Il2CppGenericClass ICollection_1_t14505_GenericClass;
TypeInfo ICollection_1_t14505_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14505_MethodInfos/* methods */
	, ICollection_1_t14505_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14505_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14505_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14505_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14505_0_0_0/* byval_arg */
	, &ICollection_1_t14505_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14505_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UriHostNameType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UriHostNameType>
extern Il2CppType IEnumerator_1_t13001_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103136_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UriHostNameType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103136_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14507_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13001_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103136_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14507_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103136_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14507_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14507_0_0_0;
extern Il2CppType IEnumerable_1_t14507_1_0_0;
struct IEnumerable_1_t14507;
extern Il2CppGenericClass IEnumerable_1_t14507_GenericClass;
TypeInfo IEnumerable_1_t14507_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14507_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14507_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14507_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14507_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14507_0_0_0/* byval_arg */
	, &IEnumerable_1_t14507_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14507_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14506_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UriHostNameType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UriHostNameType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UriHostNameType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UriHostNameType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UriHostNameType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.UriHostNameType>
extern MethodInfo IList_1_get_Item_m103137_MethodInfo;
extern MethodInfo IList_1_set_Item_m103138_MethodInfo;
static PropertyInfo IList_1_t14506____Item_PropertyInfo = 
{
	&IList_1_t14506_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103137_MethodInfo/* get */
	, &IList_1_set_Item_m103138_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14506_PropertyInfos[] =
{
	&IList_1_t14506____Item_PropertyInfo,
	NULL
};
extern Il2CppType UriHostNameType_t2917_0_0_0;
static ParameterInfo IList_1_t14506_IList_1_IndexOf_m103139_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriHostNameType_t2917_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103139_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.UriHostNameType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103139_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14506_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14506_IList_1_IndexOf_m103139_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103139_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType UriHostNameType_t2917_0_0_0;
static ParameterInfo IList_1_t14506_IList_1_Insert_m103140_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UriHostNameType_t2917_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103140_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriHostNameType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103140_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14506_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14506_IList_1_Insert_m103140_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103140_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14506_IList_1_RemoveAt_m103141_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103141_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriHostNameType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103141_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14506_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14506_IList_1_RemoveAt_m103141_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103141_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14506_IList_1_get_Item_m103137_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType UriHostNameType_t2917_0_0_0;
extern void* RuntimeInvoker_UriHostNameType_t2917_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103137_GenericMethod;
// T System.Collections.Generic.IList`1<System.UriHostNameType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103137_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14506_il2cpp_TypeInfo/* declaring_type */
	, &UriHostNameType_t2917_0_0_0/* return_type */
	, RuntimeInvoker_UriHostNameType_t2917_Int32_t23/* invoker_method */
	, IList_1_t14506_IList_1_get_Item_m103137_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103137_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType UriHostNameType_t2917_0_0_0;
static ParameterInfo IList_1_t14506_IList_1_set_Item_m103138_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UriHostNameType_t2917_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103138_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriHostNameType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103138_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14506_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14506_IList_1_set_Item_m103138_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103138_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14506_MethodInfos[] =
{
	&IList_1_IndexOf_m103139_MethodInfo,
	&IList_1_Insert_m103140_MethodInfo,
	&IList_1_RemoveAt_m103141_MethodInfo,
	&IList_1_get_Item_m103137_MethodInfo,
	&IList_1_set_Item_m103138_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14506_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14505_il2cpp_TypeInfo,
	&IEnumerable_1_t14507_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14506_0_0_0;
extern Il2CppType IList_1_t14506_1_0_0;
struct IList_1_t14506;
extern Il2CppGenericClass IList_1_t14506_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14506_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14506_MethodInfos/* methods */
	, IList_1_t14506_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14506_il2cpp_TypeInfo/* element_class */
	, IList_1_t14506_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14506_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14506_0_0_0/* byval_arg */
	, &IList_1_t14506_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14506_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13003_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.UriKind>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UriKind>
extern MethodInfo IEnumerator_1_get_Current_m103142_MethodInfo;
static PropertyInfo IEnumerator_1_t13003____Current_PropertyInfo = 
{
	&IEnumerator_1_t13003_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103142_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13003_PropertyInfos[] =
{
	&IEnumerator_1_t13003____Current_PropertyInfo,
	NULL
};
extern Il2CppType UriKind_t2918_0_0_0;
extern void* RuntimeInvoker_UriKind_t2918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103142_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.UriKind>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103142_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13003_il2cpp_TypeInfo/* declaring_type */
	, &UriKind_t2918_0_0_0/* return_type */
	, RuntimeInvoker_UriKind_t2918/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103142_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13003_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103142_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13003_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13003_0_0_0;
extern Il2CppType IEnumerator_1_t13003_1_0_0;
struct IEnumerator_1_t13003;
extern Il2CppGenericClass IEnumerator_1_t13003_GenericClass;
TypeInfo IEnumerator_1_t13003_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13003_MethodInfos/* methods */
	, IEnumerator_1_t13003_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13003_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13003_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13003_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13003_0_0_0/* byval_arg */
	, &IEnumerator_1_t13003_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13003_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10877_il2cpp_TypeInfo;

extern TypeInfo UriKind_t2918_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77956_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUriKind_t2918_m90779_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UriKind>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UriKind>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisUriKind_t2918_m90779 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.UriKind>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77951_MethodInfo;
 void InternalEnumerator_1__ctor_m77951 (InternalEnumerator_1_t10877 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UriKind>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77952_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77952 (InternalEnumerator_1_t10877 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UriKind>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77953_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77953 (InternalEnumerator_1_t10877 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77956(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77956_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UriKind_t2918_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UriKind>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77954_MethodInfo;
 void InternalEnumerator_1_Dispose_m77954 (InternalEnumerator_1_t10877 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UriKind>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77955_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77955 (InternalEnumerator_1_t10877 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.UriKind>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77956 (InternalEnumerator_1_t10877 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisUriKind_t2918_m90779(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUriKind_t2918_m90779_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UriKind>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10877____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10877_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10877, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10877____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10877_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10877, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10877_FieldInfos[] =
{
	&InternalEnumerator_1_t10877____array_0_FieldInfo,
	&InternalEnumerator_1_t10877____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10877____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10877_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77953_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10877____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10877_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77956_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10877_PropertyInfos[] =
{
	&InternalEnumerator_1_t10877____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10877____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10877_InternalEnumerator_1__ctor_m77951_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77951_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UriKind>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77951_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77951/* method */
	, &InternalEnumerator_1_t10877_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10877_InternalEnumerator_1__ctor_m77951_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77951_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77952_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UriKind>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77952_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77952/* method */
	, &InternalEnumerator_1_t10877_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77952_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77953_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.UriKind>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77953_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77953/* method */
	, &InternalEnumerator_1_t10877_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77953_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77954_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UriKind>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77954_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77954/* method */
	, &InternalEnumerator_1_t10877_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77954_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77955_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.UriKind>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77955_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77955/* method */
	, &InternalEnumerator_1_t10877_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77955_GenericMethod/* genericMethod */

};
extern Il2CppType UriKind_t2918_0_0_0;
extern void* RuntimeInvoker_UriKind_t2918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77956_GenericMethod;
// T System.Array/InternalEnumerator`1<System.UriKind>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77956_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77956/* method */
	, &InternalEnumerator_1_t10877_il2cpp_TypeInfo/* declaring_type */
	, &UriKind_t2918_0_0_0/* return_type */
	, RuntimeInvoker_UriKind_t2918/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77956_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10877_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77951_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77952_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77953_MethodInfo,
	&InternalEnumerator_1_Dispose_m77954_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77955_MethodInfo,
	&InternalEnumerator_1_get_Current_m77956_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10877_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77953_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77955_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77952_MethodInfo,
	&InternalEnumerator_1_Dispose_m77954_MethodInfo,
	&InternalEnumerator_1_get_Current_m77956_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10877_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13003_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10877_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13003_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10877_0_0_0;
extern Il2CppType InternalEnumerator_1_t10877_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10877_GenericClass;
TypeInfo InternalEnumerator_1_t10877_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10877_MethodInfos/* methods */
	, InternalEnumerator_1_t10877_PropertyInfos/* properties */
	, InternalEnumerator_1_t10877_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10877_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10877_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10877_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10877_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10877_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10877_1_0_0/* this_arg */
	, InternalEnumerator_1_t10877_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10877_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10877)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14508_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UriKind>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UriKind>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UriKind>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UriKind>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UriKind>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UriKind>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UriKind>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.UriKind>
extern MethodInfo ICollection_1_get_Count_m103143_MethodInfo;
static PropertyInfo ICollection_1_t14508____Count_PropertyInfo = 
{
	&ICollection_1_t14508_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103143_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103144_MethodInfo;
static PropertyInfo ICollection_1_t14508____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14508_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103144_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14508_PropertyInfos[] =
{
	&ICollection_1_t14508____Count_PropertyInfo,
	&ICollection_1_t14508____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103143_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.UriKind>::get_Count()
MethodInfo ICollection_1_get_Count_m103143_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14508_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103143_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103144_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriKind>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103144_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14508_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103144_GenericMethod/* genericMethod */

};
extern Il2CppType UriKind_t2918_0_0_0;
extern Il2CppType UriKind_t2918_0_0_0;
static ParameterInfo ICollection_1_t14508_ICollection_1_Add_m103145_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriKind_t2918_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103145_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriKind>::Add(T)
MethodInfo ICollection_1_Add_m103145_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14508_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14508_ICollection_1_Add_m103145_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103145_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103146_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriKind>::Clear()
MethodInfo ICollection_1_Clear_m103146_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14508_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103146_GenericMethod/* genericMethod */

};
extern Il2CppType UriKind_t2918_0_0_0;
static ParameterInfo ICollection_1_t14508_ICollection_1_Contains_m103147_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriKind_t2918_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103147_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriKind>::Contains(T)
MethodInfo ICollection_1_Contains_m103147_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14508_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14508_ICollection_1_Contains_m103147_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103147_GenericMethod/* genericMethod */

};
extern Il2CppType UriKindU5BU5D_t11462_0_0_0;
extern Il2CppType UriKindU5BU5D_t11462_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14508_ICollection_1_CopyTo_m103148_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UriKindU5BU5D_t11462_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103148_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriKind>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103148_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14508_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14508_ICollection_1_CopyTo_m103148_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103148_GenericMethod/* genericMethod */

};
extern Il2CppType UriKind_t2918_0_0_0;
static ParameterInfo ICollection_1_t14508_ICollection_1_Remove_m103149_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriKind_t2918_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103149_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriKind>::Remove(T)
MethodInfo ICollection_1_Remove_m103149_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14508_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14508_ICollection_1_Remove_m103149_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103149_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14508_MethodInfos[] =
{
	&ICollection_1_get_Count_m103143_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103144_MethodInfo,
	&ICollection_1_Add_m103145_MethodInfo,
	&ICollection_1_Clear_m103146_MethodInfo,
	&ICollection_1_Contains_m103147_MethodInfo,
	&ICollection_1_CopyTo_m103148_MethodInfo,
	&ICollection_1_Remove_m103149_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14510_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14508_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14510_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14508_0_0_0;
extern Il2CppType ICollection_1_t14508_1_0_0;
struct ICollection_1_t14508;
extern Il2CppGenericClass ICollection_1_t14508_GenericClass;
TypeInfo ICollection_1_t14508_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14508_MethodInfos/* methods */
	, ICollection_1_t14508_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14508_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14508_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14508_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14508_0_0_0/* byval_arg */
	, &ICollection_1_t14508_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14508_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UriKind>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UriKind>
extern Il2CppType IEnumerator_1_t13003_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103150_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UriKind>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103150_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14510_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13003_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103150_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14510_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103150_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14510_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14510_0_0_0;
extern Il2CppType IEnumerable_1_t14510_1_0_0;
struct IEnumerable_1_t14510;
extern Il2CppGenericClass IEnumerable_1_t14510_GenericClass;
TypeInfo IEnumerable_1_t14510_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14510_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14510_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14510_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14510_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14510_0_0_0/* byval_arg */
	, &IEnumerable_1_t14510_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14510_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14509_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UriKind>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UriKind>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UriKind>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UriKind>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UriKind>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.UriKind>
extern MethodInfo IList_1_get_Item_m103151_MethodInfo;
extern MethodInfo IList_1_set_Item_m103152_MethodInfo;
static PropertyInfo IList_1_t14509____Item_PropertyInfo = 
{
	&IList_1_t14509_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103151_MethodInfo/* get */
	, &IList_1_set_Item_m103152_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14509_PropertyInfos[] =
{
	&IList_1_t14509____Item_PropertyInfo,
	NULL
};
extern Il2CppType UriKind_t2918_0_0_0;
static ParameterInfo IList_1_t14509_IList_1_IndexOf_m103153_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriKind_t2918_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103153_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.UriKind>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103153_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14509_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14509_IList_1_IndexOf_m103153_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103153_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType UriKind_t2918_0_0_0;
static ParameterInfo IList_1_t14509_IList_1_Insert_m103154_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UriKind_t2918_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103154_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriKind>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103154_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14509_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14509_IList_1_Insert_m103154_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103154_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14509_IList_1_RemoveAt_m103155_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103155_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriKind>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103155_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14509_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14509_IList_1_RemoveAt_m103155_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103155_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14509_IList_1_get_Item_m103151_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType UriKind_t2918_0_0_0;
extern void* RuntimeInvoker_UriKind_t2918_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103151_GenericMethod;
// T System.Collections.Generic.IList`1<System.UriKind>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103151_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14509_il2cpp_TypeInfo/* declaring_type */
	, &UriKind_t2918_0_0_0/* return_type */
	, RuntimeInvoker_UriKind_t2918_Int32_t23/* invoker_method */
	, IList_1_t14509_IList_1_get_Item_m103151_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103151_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType UriKind_t2918_0_0_0;
static ParameterInfo IList_1_t14509_IList_1_set_Item_m103152_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UriKind_t2918_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103152_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriKind>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103152_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14509_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14509_IList_1_set_Item_m103152_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103152_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14509_MethodInfos[] =
{
	&IList_1_IndexOf_m103153_MethodInfo,
	&IList_1_Insert_m103154_MethodInfo,
	&IList_1_RemoveAt_m103155_MethodInfo,
	&IList_1_get_Item_m103151_MethodInfo,
	&IList_1_set_Item_m103152_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14509_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14508_il2cpp_TypeInfo,
	&IEnumerable_1_t14510_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14509_0_0_0;
extern Il2CppType IList_1_t14509_1_0_0;
struct IList_1_t14509;
extern Il2CppGenericClass IList_1_t14509_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14509_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14509_MethodInfos/* methods */
	, IList_1_t14509_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14509_il2cpp_TypeInfo/* element_class */
	, IList_1_t14509_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14509_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14509_0_0_0/* byval_arg */
	, &IList_1_t14509_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14509_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13005_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.UriPartial>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UriPartial>
extern MethodInfo IEnumerator_1_get_Current_m103156_MethodInfo;
static PropertyInfo IEnumerator_1_t13005____Current_PropertyInfo = 
{
	&IEnumerator_1_t13005_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103156_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13005_PropertyInfos[] =
{
	&IEnumerator_1_t13005____Current_PropertyInfo,
	NULL
};
extern Il2CppType UriPartial_t2919_0_0_0;
extern void* RuntimeInvoker_UriPartial_t2919 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103156_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.UriPartial>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103156_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13005_il2cpp_TypeInfo/* declaring_type */
	, &UriPartial_t2919_0_0_0/* return_type */
	, RuntimeInvoker_UriPartial_t2919/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103156_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13005_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103156_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13005_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13005_0_0_0;
extern Il2CppType IEnumerator_1_t13005_1_0_0;
struct IEnumerator_1_t13005;
extern Il2CppGenericClass IEnumerator_1_t13005_GenericClass;
TypeInfo IEnumerator_1_t13005_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13005_MethodInfos/* methods */
	, IEnumerator_1_t13005_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13005_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13005_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13005_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13005_0_0_0/* byval_arg */
	, &IEnumerator_1_t13005_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13005_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10878_il2cpp_TypeInfo;

extern TypeInfo UriPartial_t2919_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77962_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUriPartial_t2919_m90790_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UriPartial>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UriPartial>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisUriPartial_t2919_m90790 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.UriPartial>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77957_MethodInfo;
 void InternalEnumerator_1__ctor_m77957 (InternalEnumerator_1_t10878 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UriPartial>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77958_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77958 (InternalEnumerator_1_t10878 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UriPartial>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77959_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77959 (InternalEnumerator_1_t10878 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77962(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77962_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UriPartial_t2919_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UriPartial>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77960_MethodInfo;
 void InternalEnumerator_1_Dispose_m77960 (InternalEnumerator_1_t10878 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UriPartial>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77961_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77961 (InternalEnumerator_1_t10878 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.UriPartial>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77962 (InternalEnumerator_1_t10878 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisUriPartial_t2919_m90790(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUriPartial_t2919_m90790_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UriPartial>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10878____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10878_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10878, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10878____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10878_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10878, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10878_FieldInfos[] =
{
	&InternalEnumerator_1_t10878____array_0_FieldInfo,
	&InternalEnumerator_1_t10878____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10878____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10878_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77959_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10878____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10878_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77962_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10878_PropertyInfos[] =
{
	&InternalEnumerator_1_t10878____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10878____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10878_InternalEnumerator_1__ctor_m77957_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77957_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UriPartial>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77957_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77957/* method */
	, &InternalEnumerator_1_t10878_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10878_InternalEnumerator_1__ctor_m77957_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77957_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77958_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UriPartial>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77958_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77958/* method */
	, &InternalEnumerator_1_t10878_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77958_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77959_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.UriPartial>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77959_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77959/* method */
	, &InternalEnumerator_1_t10878_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77959_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77960_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UriPartial>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77960_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77960/* method */
	, &InternalEnumerator_1_t10878_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77960_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77961_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.UriPartial>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77961_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77961/* method */
	, &InternalEnumerator_1_t10878_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77961_GenericMethod/* genericMethod */

};
extern Il2CppType UriPartial_t2919_0_0_0;
extern void* RuntimeInvoker_UriPartial_t2919 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77962_GenericMethod;
// T System.Array/InternalEnumerator`1<System.UriPartial>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77962_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77962/* method */
	, &InternalEnumerator_1_t10878_il2cpp_TypeInfo/* declaring_type */
	, &UriPartial_t2919_0_0_0/* return_type */
	, RuntimeInvoker_UriPartial_t2919/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77962_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10878_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77957_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77958_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77959_MethodInfo,
	&InternalEnumerator_1_Dispose_m77960_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77961_MethodInfo,
	&InternalEnumerator_1_get_Current_m77962_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10878_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77959_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77961_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77958_MethodInfo,
	&InternalEnumerator_1_Dispose_m77960_MethodInfo,
	&InternalEnumerator_1_get_Current_m77962_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10878_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13005_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10878_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13005_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10878_0_0_0;
extern Il2CppType InternalEnumerator_1_t10878_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10878_GenericClass;
TypeInfo InternalEnumerator_1_t10878_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10878_MethodInfos/* methods */
	, InternalEnumerator_1_t10878_PropertyInfos/* properties */
	, InternalEnumerator_1_t10878_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10878_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10878_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10878_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10878_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10878_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10878_1_0_0/* this_arg */
	, InternalEnumerator_1_t10878_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10878_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10878)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14511_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UriPartial>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UriPartial>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UriPartial>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UriPartial>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UriPartial>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UriPartial>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UriPartial>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.UriPartial>
extern MethodInfo ICollection_1_get_Count_m103157_MethodInfo;
static PropertyInfo ICollection_1_t14511____Count_PropertyInfo = 
{
	&ICollection_1_t14511_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103157_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103158_MethodInfo;
static PropertyInfo ICollection_1_t14511____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14511_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103158_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14511_PropertyInfos[] =
{
	&ICollection_1_t14511____Count_PropertyInfo,
	&ICollection_1_t14511____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103157_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.UriPartial>::get_Count()
MethodInfo ICollection_1_get_Count_m103157_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14511_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103157_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103158_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriPartial>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103158_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14511_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103158_GenericMethod/* genericMethod */

};
extern Il2CppType UriPartial_t2919_0_0_0;
extern Il2CppType UriPartial_t2919_0_0_0;
static ParameterInfo ICollection_1_t14511_ICollection_1_Add_m103159_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriPartial_t2919_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103159_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriPartial>::Add(T)
MethodInfo ICollection_1_Add_m103159_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14511_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14511_ICollection_1_Add_m103159_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103159_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103160_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriPartial>::Clear()
MethodInfo ICollection_1_Clear_m103160_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14511_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103160_GenericMethod/* genericMethod */

};
extern Il2CppType UriPartial_t2919_0_0_0;
static ParameterInfo ICollection_1_t14511_ICollection_1_Contains_m103161_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriPartial_t2919_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103161_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriPartial>::Contains(T)
MethodInfo ICollection_1_Contains_m103161_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14511_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14511_ICollection_1_Contains_m103161_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103161_GenericMethod/* genericMethod */

};
extern Il2CppType UriPartialU5BU5D_t11463_0_0_0;
extern Il2CppType UriPartialU5BU5D_t11463_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14511_ICollection_1_CopyTo_m103162_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UriPartialU5BU5D_t11463_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103162_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriPartial>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103162_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14511_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14511_ICollection_1_CopyTo_m103162_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103162_GenericMethod/* genericMethod */

};
extern Il2CppType UriPartial_t2919_0_0_0;
static ParameterInfo ICollection_1_t14511_ICollection_1_Remove_m103163_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriPartial_t2919_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103163_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriPartial>::Remove(T)
MethodInfo ICollection_1_Remove_m103163_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14511_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14511_ICollection_1_Remove_m103163_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103163_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14511_MethodInfos[] =
{
	&ICollection_1_get_Count_m103157_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103158_MethodInfo,
	&ICollection_1_Add_m103159_MethodInfo,
	&ICollection_1_Clear_m103160_MethodInfo,
	&ICollection_1_Contains_m103161_MethodInfo,
	&ICollection_1_CopyTo_m103162_MethodInfo,
	&ICollection_1_Remove_m103163_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14513_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14511_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14513_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14511_0_0_0;
extern Il2CppType ICollection_1_t14511_1_0_0;
struct ICollection_1_t14511;
extern Il2CppGenericClass ICollection_1_t14511_GenericClass;
TypeInfo ICollection_1_t14511_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14511_MethodInfos/* methods */
	, ICollection_1_t14511_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14511_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14511_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14511_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14511_0_0_0/* byval_arg */
	, &ICollection_1_t14511_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14511_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UriPartial>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UriPartial>
extern Il2CppType IEnumerator_1_t13005_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103164_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UriPartial>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103164_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14513_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13005_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103164_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14513_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103164_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14513_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14513_0_0_0;
extern Il2CppType IEnumerable_1_t14513_1_0_0;
struct IEnumerable_1_t14513;
extern Il2CppGenericClass IEnumerable_1_t14513_GenericClass;
TypeInfo IEnumerable_1_t14513_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14513_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14513_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14513_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14513_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14513_0_0_0/* byval_arg */
	, &IEnumerable_1_t14513_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14513_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14512_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UriPartial>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UriPartial>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UriPartial>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UriPartial>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UriPartial>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.UriPartial>
extern MethodInfo IList_1_get_Item_m103165_MethodInfo;
extern MethodInfo IList_1_set_Item_m103166_MethodInfo;
static PropertyInfo IList_1_t14512____Item_PropertyInfo = 
{
	&IList_1_t14512_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103165_MethodInfo/* get */
	, &IList_1_set_Item_m103166_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14512_PropertyInfos[] =
{
	&IList_1_t14512____Item_PropertyInfo,
	NULL
};
extern Il2CppType UriPartial_t2919_0_0_0;
static ParameterInfo IList_1_t14512_IList_1_IndexOf_m103167_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriPartial_t2919_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103167_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.UriPartial>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103167_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14512_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14512_IList_1_IndexOf_m103167_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103167_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType UriPartial_t2919_0_0_0;
static ParameterInfo IList_1_t14512_IList_1_Insert_m103168_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UriPartial_t2919_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103168_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriPartial>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103168_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14512_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14512_IList_1_Insert_m103168_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103168_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14512_IList_1_RemoveAt_m103169_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103169_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriPartial>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103169_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14512_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14512_IList_1_RemoveAt_m103169_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103169_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14512_IList_1_get_Item_m103165_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType UriPartial_t2919_0_0_0;
extern void* RuntimeInvoker_UriPartial_t2919_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103165_GenericMethod;
// T System.Collections.Generic.IList`1<System.UriPartial>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103165_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14512_il2cpp_TypeInfo/* declaring_type */
	, &UriPartial_t2919_0_0_0/* return_type */
	, RuntimeInvoker_UriPartial_t2919_Int32_t23/* invoker_method */
	, IList_1_t14512_IList_1_get_Item_m103165_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103165_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType UriPartial_t2919_0_0_0;
static ParameterInfo IList_1_t14512_IList_1_set_Item_m103166_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UriPartial_t2919_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103166_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriPartial>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103166_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14512_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14512_IList_1_set_Item_m103166_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103166_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14512_MethodInfos[] =
{
	&IList_1_IndexOf_m103167_MethodInfo,
	&IList_1_Insert_m103168_MethodInfo,
	&IList_1_RemoveAt_m103169_MethodInfo,
	&IList_1_get_Item_m103165_MethodInfo,
	&IList_1_set_Item_m103166_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14512_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14511_il2cpp_TypeInfo,
	&IEnumerable_1_t14513_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14512_0_0_0;
extern Il2CppType IList_1_t14512_1_0_0;
struct IList_1_t14512;
extern Il2CppGenericClass IList_1_t14512_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14512_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14512_MethodInfos/* methods */
	, IList_1_t14512_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14512_il2cpp_TypeInfo/* element_class */
	, IList_1_t14512_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14512_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14512_0_0_0/* byval_arg */
	, &IList_1_t14512_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14512_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13007_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>
extern MethodInfo IEnumerator_1_get_Current_m103170_MethodInfo;
static PropertyInfo IEnumerator_1_t13007____Current_PropertyInfo = 
{
	&IEnumerator_1_t13007_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103170_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13007_PropertyInfos[] =
{
	&IEnumerator_1_t13007____Current_PropertyInfo,
	NULL
};
extern Il2CppType BigInteger_t2988_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103170_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103170_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13007_il2cpp_TypeInfo/* declaring_type */
	, &BigInteger_t2988_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m103170_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13007_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103170_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13007_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13007_0_0_0;
extern Il2CppType IEnumerator_1_t13007_1_0_0;
struct IEnumerator_1_t13007;
extern Il2CppGenericClass IEnumerator_1_t13007_GenericClass;
TypeInfo IEnumerator_1_t13007_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13007_MethodInfos/* methods */
	, IEnumerator_1_t13007_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13007_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13007_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13007_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13007_0_0_0/* byval_arg */
	, &IEnumerator_1_t13007_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13007_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10879_il2cpp_TypeInfo;

extern TypeInfo BigInteger_t2988_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77968_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBigInteger_t2988_m90801_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m79431_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m79431(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
#define Array_InternalArray__get_Item_TisBigInteger_t2988_m90801(__this, p0, method) (BigInteger_t2988 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10879____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10879_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10879, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10879____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10879_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10879, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10879_FieldInfos[] =
{
	&InternalEnumerator_1_t10879____array_0_FieldInfo,
	&InternalEnumerator_1_t10879____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77965_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10879____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10879_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77965_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10879____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10879_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77968_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10879_PropertyInfos[] =
{
	&InternalEnumerator_1_t10879____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10879____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10879_InternalEnumerator_1__ctor_m77963_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77963_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77963_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10879_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10879_InternalEnumerator_1__ctor_m77963_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77963_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77964_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77964_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10879_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77964_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77965_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77965_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10879_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77965_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77966_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77966_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10879_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77966_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77967_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77967_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10879_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77967_GenericMethod/* genericMethod */

};
extern Il2CppType BigInteger_t2988_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77968_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77968_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10879_il2cpp_TypeInfo/* declaring_type */
	, &BigInteger_t2988_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m77968_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10879_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77963_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77964_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77965_MethodInfo,
	&InternalEnumerator_1_Dispose_m77966_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77967_MethodInfo,
	&InternalEnumerator_1_get_Current_m77968_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m77967_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77964_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m77966_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10879_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77965_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77967_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77964_MethodInfo,
	&InternalEnumerator_1_Dispose_m77966_MethodInfo,
	&InternalEnumerator_1_get_Current_m77968_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10879_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13007_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10879_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13007_il2cpp_TypeInfo, 8},
};
extern TypeInfo BigInteger_t2988_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10879_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m77968_MethodInfo/* Method Usage */,
	&BigInteger_t2988_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisBigInteger_t2988_m90801_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10879_0_0_0;
extern Il2CppType InternalEnumerator_1_t10879_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10879_GenericClass;
TypeInfo InternalEnumerator_1_t10879_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10879_MethodInfos/* methods */
	, InternalEnumerator_1_t10879_PropertyInfos/* properties */
	, InternalEnumerator_1_t10879_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10879_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10879_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10879_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10879_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10879_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10879_1_0_0/* this_arg */
	, InternalEnumerator_1_t10879_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10879_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10879_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10879)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14514_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>
extern MethodInfo ICollection_1_get_Count_m103171_MethodInfo;
static PropertyInfo ICollection_1_t14514____Count_PropertyInfo = 
{
	&ICollection_1_t14514_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103171_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103172_MethodInfo;
static PropertyInfo ICollection_1_t14514____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14514_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103172_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14514_PropertyInfos[] =
{
	&ICollection_1_t14514____Count_PropertyInfo,
	&ICollection_1_t14514____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103171_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_Count()
MethodInfo ICollection_1_get_Count_m103171_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14514_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103171_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103172_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103172_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14514_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103172_GenericMethod/* genericMethod */

};
extern Il2CppType BigInteger_t2988_0_0_0;
extern Il2CppType BigInteger_t2988_0_0_0;
static ParameterInfo ICollection_1_t14514_ICollection_1_Add_m103173_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t2988_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103173_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Add(T)
MethodInfo ICollection_1_Add_m103173_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14514_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14514_ICollection_1_Add_m103173_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103173_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103174_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Clear()
MethodInfo ICollection_1_Clear_m103174_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14514_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103174_GenericMethod/* genericMethod */

};
extern Il2CppType BigInteger_t2988_0_0_0;
static ParameterInfo ICollection_1_t14514_ICollection_1_Contains_m103175_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t2988_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103175_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Contains(T)
MethodInfo ICollection_1_Contains_m103175_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14514_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14514_ICollection_1_Contains_m103175_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103175_GenericMethod/* genericMethod */

};
extern Il2CppType BigIntegerU5BU5D_t2991_0_0_0;
extern Il2CppType BigIntegerU5BU5D_t2991_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14514_ICollection_1_CopyTo_m103176_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BigIntegerU5BU5D_t2991_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103176_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103176_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14514_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14514_ICollection_1_CopyTo_m103176_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103176_GenericMethod/* genericMethod */

};
extern Il2CppType BigInteger_t2988_0_0_0;
static ParameterInfo ICollection_1_t14514_ICollection_1_Remove_m103177_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t2988_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103177_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Remove(T)
MethodInfo ICollection_1_Remove_m103177_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14514_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14514_ICollection_1_Remove_m103177_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103177_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14514_MethodInfos[] =
{
	&ICollection_1_get_Count_m103171_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103172_MethodInfo,
	&ICollection_1_Add_m103173_MethodInfo,
	&ICollection_1_Clear_m103174_MethodInfo,
	&ICollection_1_Contains_m103175_MethodInfo,
	&ICollection_1_CopyTo_m103176_MethodInfo,
	&ICollection_1_Remove_m103177_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14516_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14514_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14516_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14514_0_0_0;
extern Il2CppType ICollection_1_t14514_1_0_0;
struct ICollection_1_t14514;
extern Il2CppGenericClass ICollection_1_t14514_GenericClass;
TypeInfo ICollection_1_t14514_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14514_MethodInfos/* methods */
	, ICollection_1_t14514_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14514_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14514_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14514_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14514_0_0_0/* byval_arg */
	, &ICollection_1_t14514_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14514_GenericClass/* generic_class */
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
extern Il2CppType IEnumerator_1_t13007_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103178_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103178_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14516_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13007_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103178_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14516_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103178_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14516_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14516_0_0_0;
extern Il2CppType IEnumerable_1_t14516_1_0_0;
struct IEnumerable_1_t14516;
extern Il2CppGenericClass IEnumerable_1_t14516_GenericClass;
TypeInfo IEnumerable_1_t14516_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14516_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14516_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14516_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14516_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14516_0_0_0/* byval_arg */
	, &IEnumerable_1_t14516_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14516_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14515_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.BigInteger>
extern MethodInfo IList_1_get_Item_m103179_MethodInfo;
extern MethodInfo IList_1_set_Item_m103180_MethodInfo;
static PropertyInfo IList_1_t14515____Item_PropertyInfo = 
{
	&IList_1_t14515_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103179_MethodInfo/* get */
	, &IList_1_set_Item_m103180_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14515_PropertyInfos[] =
{
	&IList_1_t14515____Item_PropertyInfo,
	NULL
};
extern Il2CppType BigInteger_t2988_0_0_0;
static ParameterInfo IList_1_t14515_IList_1_IndexOf_m103181_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t2988_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103181_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103181_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14515_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14515_IList_1_IndexOf_m103181_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103181_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType BigInteger_t2988_0_0_0;
static ParameterInfo IList_1_t14515_IList_1_Insert_m103182_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &BigInteger_t2988_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103182_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103182_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14515_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14515_IList_1_Insert_m103182_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103182_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14515_IList_1_RemoveAt_m103183_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103183_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103183_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14515_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14515_IList_1_RemoveAt_m103183_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103183_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14515_IList_1_get_Item_m103179_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType BigInteger_t2988_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103179_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103179_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14515_il2cpp_TypeInfo/* declaring_type */
	, &BigInteger_t2988_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14515_IList_1_get_Item_m103179_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103179_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType BigInteger_t2988_0_0_0;
static ParameterInfo IList_1_t14515_IList_1_set_Item_m103180_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &BigInteger_t2988_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103180_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103180_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14515_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14515_IList_1_set_Item_m103180_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103180_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14515_MethodInfos[] =
{
	&IList_1_IndexOf_m103181_MethodInfo,
	&IList_1_Insert_m103182_MethodInfo,
	&IList_1_RemoveAt_m103183_MethodInfo,
	&IList_1_get_Item_m103179_MethodInfo,
	&IList_1_set_Item_m103180_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14515_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14514_il2cpp_TypeInfo,
	&IEnumerable_1_t14516_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14515_0_0_0;
extern Il2CppType IList_1_t14515_1_0_0;
struct IList_1_t14515;
extern Il2CppGenericClass IList_1_t14515_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14515_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14515_MethodInfos/* methods */
	, IList_1_t14515_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14515_il2cpp_TypeInfo/* element_class */
	, IList_1_t14515_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14515_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14515_0_0_0/* byval_arg */
	, &IList_1_t14515_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14515_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13009_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger/Sign>
extern MethodInfo IEnumerator_1_get_Current_m103184_MethodInfo;
static PropertyInfo IEnumerator_1_t13009____Current_PropertyInfo = 
{
	&IEnumerator_1_t13009_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103184_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13009_PropertyInfos[] =
{
	&IEnumerator_1_t13009____Current_PropertyInfo,
	NULL
};
extern Il2CppType Sign_t2987_0_0_0;
extern void* RuntimeInvoker_Sign_t2987 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103184_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103184_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13009_il2cpp_TypeInfo/* declaring_type */
	, &Sign_t2987_0_0_0/* return_type */
	, RuntimeInvoker_Sign_t2987/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103184_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13009_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103184_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13009_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13009_0_0_0;
extern Il2CppType IEnumerator_1_t13009_1_0_0;
struct IEnumerator_1_t13009;
extern Il2CppGenericClass IEnumerator_1_t13009_GenericClass;
TypeInfo IEnumerator_1_t13009_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13009_MethodInfos/* methods */
	, IEnumerator_1_t13009_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13009_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13009_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13009_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13009_0_0_0/* byval_arg */
	, &IEnumerator_1_t13009_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13009_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10880_il2cpp_TypeInfo;

extern TypeInfo Sign_t2987_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77974_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSign_t2987_m90812_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger/Sign>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger/Sign>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSign_t2987_m90812 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77969_MethodInfo;
 void InternalEnumerator_1__ctor_m77969 (InternalEnumerator_1_t10880 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77970_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77970 (InternalEnumerator_1_t10880 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77971_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77971 (InternalEnumerator_1_t10880 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77974(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77974_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Sign_t2987_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77972_MethodInfo;
 void InternalEnumerator_1_Dispose_m77972 (InternalEnumerator_1_t10880 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77973_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77973 (InternalEnumerator_1_t10880 * __this, MethodInfo* method){
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
 int32_t InternalEnumerator_1_get_Current_m77974 (InternalEnumerator_1_t10880 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSign_t2987_m90812(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSign_t2987_m90812_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10880____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10880_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10880, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10880____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10880_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10880, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10880_FieldInfos[] =
{
	&InternalEnumerator_1_t10880____array_0_FieldInfo,
	&InternalEnumerator_1_t10880____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10880____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10880_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77971_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10880____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10880_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77974_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10880_PropertyInfos[] =
{
	&InternalEnumerator_1_t10880____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10880____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10880_InternalEnumerator_1__ctor_m77969_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77969_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77969_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77969/* method */
	, &InternalEnumerator_1_t10880_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10880_InternalEnumerator_1__ctor_m77969_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77969_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77970_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77970_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77970/* method */
	, &InternalEnumerator_1_t10880_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77970_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77971_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77971_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77971/* method */
	, &InternalEnumerator_1_t10880_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77971_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77972_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77972_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77972/* method */
	, &InternalEnumerator_1_t10880_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77972_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77973_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77973_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77973/* method */
	, &InternalEnumerator_1_t10880_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77973_GenericMethod/* genericMethod */

};
extern Il2CppType Sign_t2987_0_0_0;
extern void* RuntimeInvoker_Sign_t2987 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77974_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77974_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77974/* method */
	, &InternalEnumerator_1_t10880_il2cpp_TypeInfo/* declaring_type */
	, &Sign_t2987_0_0_0/* return_type */
	, RuntimeInvoker_Sign_t2987/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77974_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10880_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77969_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77970_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77971_MethodInfo,
	&InternalEnumerator_1_Dispose_m77972_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77973_MethodInfo,
	&InternalEnumerator_1_get_Current_m77974_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10880_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77971_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77973_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77970_MethodInfo,
	&InternalEnumerator_1_Dispose_m77972_MethodInfo,
	&InternalEnumerator_1_get_Current_m77974_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10880_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13009_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10880_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13009_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10880_0_0_0;
extern Il2CppType InternalEnumerator_1_t10880_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10880_GenericClass;
TypeInfo InternalEnumerator_1_t10880_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10880_MethodInfos/* methods */
	, InternalEnumerator_1_t10880_PropertyInfos/* properties */
	, InternalEnumerator_1_t10880_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10880_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10880_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10880_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10880_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10880_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10880_1_0_0/* this_arg */
	, InternalEnumerator_1_t10880_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10880_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10880)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14517_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>
extern MethodInfo ICollection_1_get_Count_m103185_MethodInfo;
static PropertyInfo ICollection_1_t14517____Count_PropertyInfo = 
{
	&ICollection_1_t14517_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103185_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103186_MethodInfo;
static PropertyInfo ICollection_1_t14517____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14517_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103186_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14517_PropertyInfos[] =
{
	&ICollection_1_t14517____Count_PropertyInfo,
	&ICollection_1_t14517____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103185_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_Count()
MethodInfo ICollection_1_get_Count_m103185_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14517_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103185_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103186_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103186_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14517_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103186_GenericMethod/* genericMethod */

};
extern Il2CppType Sign_t2987_0_0_0;
extern Il2CppType Sign_t2987_0_0_0;
static ParameterInfo ICollection_1_t14517_ICollection_1_Add_m103187_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t2987_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103187_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Add(T)
MethodInfo ICollection_1_Add_m103187_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14517_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14517_ICollection_1_Add_m103187_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103187_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103188_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Clear()
MethodInfo ICollection_1_Clear_m103188_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14517_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103188_GenericMethod/* genericMethod */

};
extern Il2CppType Sign_t2987_0_0_0;
static ParameterInfo ICollection_1_t14517_ICollection_1_Contains_m103189_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t2987_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103189_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Contains(T)
MethodInfo ICollection_1_Contains_m103189_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14517_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14517_ICollection_1_Contains_m103189_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103189_GenericMethod/* genericMethod */

};
extern Il2CppType SignU5BU5D_t11561_0_0_0;
extern Il2CppType SignU5BU5D_t11561_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14517_ICollection_1_CopyTo_m103190_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SignU5BU5D_t11561_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103190_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103190_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14517_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14517_ICollection_1_CopyTo_m103190_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103190_GenericMethod/* genericMethod */

};
extern Il2CppType Sign_t2987_0_0_0;
static ParameterInfo ICollection_1_t14517_ICollection_1_Remove_m103191_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t2987_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103191_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Remove(T)
MethodInfo ICollection_1_Remove_m103191_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14517_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14517_ICollection_1_Remove_m103191_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103191_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14517_MethodInfos[] =
{
	&ICollection_1_get_Count_m103185_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103186_MethodInfo,
	&ICollection_1_Add_m103187_MethodInfo,
	&ICollection_1_Clear_m103188_MethodInfo,
	&ICollection_1_Contains_m103189_MethodInfo,
	&ICollection_1_CopyTo_m103190_MethodInfo,
	&ICollection_1_Remove_m103191_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14519_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14517_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14519_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14517_0_0_0;
extern Il2CppType ICollection_1_t14517_1_0_0;
struct ICollection_1_t14517;
extern Il2CppGenericClass ICollection_1_t14517_GenericClass;
TypeInfo ICollection_1_t14517_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14517_MethodInfos/* methods */
	, ICollection_1_t14517_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14517_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14517_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14517_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14517_0_0_0/* byval_arg */
	, &ICollection_1_t14517_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14517_GenericClass/* generic_class */
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
extern Il2CppType IEnumerator_1_t13009_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103192_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger/Sign>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103192_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14519_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13009_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103192_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14519_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103192_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14519_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14519_0_0_0;
extern Il2CppType IEnumerable_1_t14519_1_0_0;
struct IEnumerable_1_t14519;
extern Il2CppGenericClass IEnumerable_1_t14519_GenericClass;
TypeInfo IEnumerable_1_t14519_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14519_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14519_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14519_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14519_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14519_0_0_0/* byval_arg */
	, &IEnumerable_1_t14519_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14519_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14518_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>
extern MethodInfo IList_1_get_Item_m103193_MethodInfo;
extern MethodInfo IList_1_set_Item_m103194_MethodInfo;
static PropertyInfo IList_1_t14518____Item_PropertyInfo = 
{
	&IList_1_t14518_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103193_MethodInfo/* get */
	, &IList_1_set_Item_m103194_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14518_PropertyInfos[] =
{
	&IList_1_t14518____Item_PropertyInfo,
	NULL
};
extern Il2CppType Sign_t2987_0_0_0;
static ParameterInfo IList_1_t14518_IList_1_IndexOf_m103195_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t2987_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103195_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103195_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14518_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14518_IList_1_IndexOf_m103195_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103195_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Sign_t2987_0_0_0;
static ParameterInfo IList_1_t14518_IList_1_Insert_m103196_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Sign_t2987_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103196_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103196_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14518_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14518_IList_1_Insert_m103196_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103196_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14518_IList_1_RemoveAt_m103197_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103197_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103197_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14518_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14518_IList_1_RemoveAt_m103197_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103197_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14518_IList_1_get_Item_m103193_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Sign_t2987_0_0_0;
extern void* RuntimeInvoker_Sign_t2987_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103193_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103193_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14518_il2cpp_TypeInfo/* declaring_type */
	, &Sign_t2987_0_0_0/* return_type */
	, RuntimeInvoker_Sign_t2987_Int32_t23/* invoker_method */
	, IList_1_t14518_IList_1_get_Item_m103193_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103193_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Sign_t2987_0_0_0;
static ParameterInfo IList_1_t14518_IList_1_set_Item_m103194_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Sign_t2987_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103194_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103194_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14518_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14518_IList_1_set_Item_m103194_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103194_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14518_MethodInfos[] =
{
	&IList_1_IndexOf_m103195_MethodInfo,
	&IList_1_Insert_m103196_MethodInfo,
	&IList_1_RemoveAt_m103197_MethodInfo,
	&IList_1_get_Item_m103193_MethodInfo,
	&IList_1_set_Item_m103194_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14518_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14517_il2cpp_TypeInfo,
	&IEnumerable_1_t14519_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14518_0_0_0;
extern Il2CppType IList_1_t14518_1_0_0;
struct IList_1_t14518;
extern Il2CppGenericClass IList_1_t14518_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14518_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14518_MethodInfos/* methods */
	, IList_1_t14518_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14518_il2cpp_TypeInfo/* element_class */
	, IList_1_t14518_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14518_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14518_0_0_0/* byval_arg */
	, &IList_1_t14518_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14518_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13011_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo IEnumerator_1_get_Current_m103198_MethodInfo;
static PropertyInfo IEnumerator_1_t13011____Current_PropertyInfo = 
{
	&IEnumerator_1_t13011_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103198_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13011_PropertyInfos[] =
{
	&IEnumerator_1_t13011____Current_PropertyInfo,
	NULL
};
extern Il2CppType ConfidenceFactor_t2994_0_0_0;
extern void* RuntimeInvoker_ConfidenceFactor_t2994 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103198_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103198_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13011_il2cpp_TypeInfo/* declaring_type */
	, &ConfidenceFactor_t2994_0_0_0/* return_type */
	, RuntimeInvoker_ConfidenceFactor_t2994/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103198_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13011_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103198_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13011_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13011_0_0_0;
extern Il2CppType IEnumerator_1_t13011_1_0_0;
struct IEnumerator_1_t13011;
extern Il2CppGenericClass IEnumerator_1_t13011_GenericClass;
TypeInfo IEnumerator_1_t13011_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13011_MethodInfos/* methods */
	, IEnumerator_1_t13011_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13011_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13011_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13011_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13011_0_0_0/* byval_arg */
	, &IEnumerator_1_t13011_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13011_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10881_il2cpp_TypeInfo;

extern TypeInfo ConfidenceFactor_t2994_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77980_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisConfidenceFactor_t2994_m90823_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.Prime.ConfidenceFactor>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.Prime.ConfidenceFactor>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisConfidenceFactor_t2994_m90823 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77975_MethodInfo;
 void InternalEnumerator_1__ctor_m77975 (InternalEnumerator_1_t10881 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77976_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77976 (InternalEnumerator_1_t10881 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77977_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77977 (InternalEnumerator_1_t10881 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77980(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77980_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ConfidenceFactor_t2994_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77978_MethodInfo;
 void InternalEnumerator_1_Dispose_m77978 (InternalEnumerator_1_t10881 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77979_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77979 (InternalEnumerator_1_t10881 * __this, MethodInfo* method){
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
 int32_t InternalEnumerator_1_get_Current_m77980 (InternalEnumerator_1_t10881 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisConfidenceFactor_t2994_m90823(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisConfidenceFactor_t2994_m90823_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10881____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10881_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10881, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10881____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10881_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10881, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10881_FieldInfos[] =
{
	&InternalEnumerator_1_t10881____array_0_FieldInfo,
	&InternalEnumerator_1_t10881____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10881____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10881_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77977_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10881____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10881_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77980_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10881_PropertyInfos[] =
{
	&InternalEnumerator_1_t10881____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10881____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10881_InternalEnumerator_1__ctor_m77975_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77975_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77975_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77975/* method */
	, &InternalEnumerator_1_t10881_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10881_InternalEnumerator_1__ctor_m77975_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77975_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77976_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77976_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77976/* method */
	, &InternalEnumerator_1_t10881_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77976_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77977_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77977_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77977/* method */
	, &InternalEnumerator_1_t10881_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77977_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77978_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77978_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77978/* method */
	, &InternalEnumerator_1_t10881_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77978_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77979_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77979_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77979/* method */
	, &InternalEnumerator_1_t10881_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77979_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactor_t2994_0_0_0;
extern void* RuntimeInvoker_ConfidenceFactor_t2994 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77980_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77980_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77980/* method */
	, &InternalEnumerator_1_t10881_il2cpp_TypeInfo/* declaring_type */
	, &ConfidenceFactor_t2994_0_0_0/* return_type */
	, RuntimeInvoker_ConfidenceFactor_t2994/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77980_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10881_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77975_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77976_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77977_MethodInfo,
	&InternalEnumerator_1_Dispose_m77978_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77979_MethodInfo,
	&InternalEnumerator_1_get_Current_m77980_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10881_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77977_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77979_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77976_MethodInfo,
	&InternalEnumerator_1_Dispose_m77978_MethodInfo,
	&InternalEnumerator_1_get_Current_m77980_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10881_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13011_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10881_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13011_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10881_0_0_0;
extern Il2CppType InternalEnumerator_1_t10881_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10881_GenericClass;
TypeInfo InternalEnumerator_1_t10881_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10881_MethodInfos/* methods */
	, InternalEnumerator_1_t10881_PropertyInfos/* properties */
	, InternalEnumerator_1_t10881_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10881_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10881_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10881_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10881_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10881_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10881_1_0_0/* this_arg */
	, InternalEnumerator_1_t10881_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10881_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10881)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14520_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo ICollection_1_get_Count_m103199_MethodInfo;
static PropertyInfo ICollection_1_t14520____Count_PropertyInfo = 
{
	&ICollection_1_t14520_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103199_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103200_MethodInfo;
static PropertyInfo ICollection_1_t14520____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14520_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103200_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14520_PropertyInfos[] =
{
	&ICollection_1_t14520____Count_PropertyInfo,
	&ICollection_1_t14520____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103199_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_Count()
MethodInfo ICollection_1_get_Count_m103199_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14520_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103199_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103200_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103200_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14520_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103200_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactor_t2994_0_0_0;
extern Il2CppType ConfidenceFactor_t2994_0_0_0;
static ParameterInfo ICollection_1_t14520_ICollection_1_Add_m103201_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t2994_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103201_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Add(T)
MethodInfo ICollection_1_Add_m103201_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14520_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14520_ICollection_1_Add_m103201_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103201_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103202_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Clear()
MethodInfo ICollection_1_Clear_m103202_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14520_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103202_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactor_t2994_0_0_0;
static ParameterInfo ICollection_1_t14520_ICollection_1_Contains_m103203_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t2994_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103203_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Contains(T)
MethodInfo ICollection_1_Contains_m103203_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14520_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14520_ICollection_1_Contains_m103203_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103203_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactorU5BU5D_t11562_0_0_0;
extern Il2CppType ConfidenceFactorU5BU5D_t11562_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14520_ICollection_1_CopyTo_m103204_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactorU5BU5D_t11562_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103204_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103204_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14520_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14520_ICollection_1_CopyTo_m103204_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103204_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactor_t2994_0_0_0;
static ParameterInfo ICollection_1_t14520_ICollection_1_Remove_m103205_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t2994_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103205_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Remove(T)
MethodInfo ICollection_1_Remove_m103205_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14520_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14520_ICollection_1_Remove_m103205_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103205_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14520_MethodInfos[] =
{
	&ICollection_1_get_Count_m103199_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103200_MethodInfo,
	&ICollection_1_Add_m103201_MethodInfo,
	&ICollection_1_Clear_m103202_MethodInfo,
	&ICollection_1_Contains_m103203_MethodInfo,
	&ICollection_1_CopyTo_m103204_MethodInfo,
	&ICollection_1_Remove_m103205_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14522_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14520_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14522_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14520_0_0_0;
extern Il2CppType ICollection_1_t14520_1_0_0;
struct ICollection_1_t14520;
extern Il2CppGenericClass ICollection_1_t14520_GenericClass;
TypeInfo ICollection_1_t14520_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14520_MethodInfos/* methods */
	, ICollection_1_t14520_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14520_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14520_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14520_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14520_0_0_0/* byval_arg */
	, &ICollection_1_t14520_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14520_GenericClass/* generic_class */
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
extern Il2CppType IEnumerator_1_t13011_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103206_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.Prime.ConfidenceFactor>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103206_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14522_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13011_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103206_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14522_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103206_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14522_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14522_0_0_0;
extern Il2CppType IEnumerable_1_t14522_1_0_0;
struct IEnumerable_1_t14522;
extern Il2CppGenericClass IEnumerable_1_t14522_GenericClass;
TypeInfo IEnumerable_1_t14522_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14522_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14522_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14522_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14522_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14522_0_0_0/* byval_arg */
	, &IEnumerable_1_t14522_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14522_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14521_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo IList_1_get_Item_m103207_MethodInfo;
extern MethodInfo IList_1_set_Item_m103208_MethodInfo;
static PropertyInfo IList_1_t14521____Item_PropertyInfo = 
{
	&IList_1_t14521_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103207_MethodInfo/* get */
	, &IList_1_set_Item_m103208_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14521_PropertyInfos[] =
{
	&IList_1_t14521____Item_PropertyInfo,
	NULL
};
extern Il2CppType ConfidenceFactor_t2994_0_0_0;
static ParameterInfo IList_1_t14521_IList_1_IndexOf_m103209_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t2994_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103209_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103209_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14521_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14521_IList_1_IndexOf_m103209_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103209_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ConfidenceFactor_t2994_0_0_0;
static ParameterInfo IList_1_t14521_IList_1_Insert_m103210_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t2994_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103210_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103210_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14521_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14521_IList_1_Insert_m103210_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103210_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14521_IList_1_RemoveAt_m103211_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103211_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103211_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14521_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14521_IList_1_RemoveAt_m103211_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103211_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14521_IList_1_get_Item_m103207_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType ConfidenceFactor_t2994_0_0_0;
extern void* RuntimeInvoker_ConfidenceFactor_t2994_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103207_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103207_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14521_il2cpp_TypeInfo/* declaring_type */
	, &ConfidenceFactor_t2994_0_0_0/* return_type */
	, RuntimeInvoker_ConfidenceFactor_t2994_Int32_t23/* invoker_method */
	, IList_1_t14521_IList_1_get_Item_m103207_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103207_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType ConfidenceFactor_t2994_0_0_0;
static ParameterInfo IList_1_t14521_IList_1_set_Item_m103208_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t2994_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103208_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103208_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14521_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14521_IList_1_set_Item_m103208_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103208_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14521_MethodInfos[] =
{
	&IList_1_IndexOf_m103209_MethodInfo,
	&IList_1_Insert_m103210_MethodInfo,
	&IList_1_RemoveAt_m103211_MethodInfo,
	&IList_1_get_Item_m103207_MethodInfo,
	&IList_1_set_Item_m103208_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14521_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14520_il2cpp_TypeInfo,
	&IEnumerable_1_t14522_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14521_0_0_0;
extern Il2CppType IList_1_t14521_1_0_0;
struct IList_1_t14521;
extern Il2CppGenericClass IList_1_t14521_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14521_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14521_MethodInfos/* methods */
	, IList_1_t14521_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14521_il2cpp_TypeInfo/* element_class */
	, IList_1_t14521_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14521_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14521_0_0_0/* byval_arg */
	, &IList_1_t14521_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14521_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13013_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.KeySizes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.KeySizes>
extern MethodInfo IEnumerator_1_get_Current_m103212_MethodInfo;
static PropertyInfo IEnumerator_1_t13013____Current_PropertyInfo = 
{
	&IEnumerator_1_t13013_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103212_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13013_PropertyInfos[] =
{
	&IEnumerator_1_t13013____Current_PropertyInfo,
	NULL
};
extern Il2CppType KeySizes_t3109_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103212_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.KeySizes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103212_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13013_il2cpp_TypeInfo/* declaring_type */
	, &KeySizes_t3109_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m103212_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13013_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103212_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13013_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13013_0_0_0;
extern Il2CppType IEnumerator_1_t13013_1_0_0;
struct IEnumerator_1_t13013;
extern Il2CppGenericClass IEnumerator_1_t13013_GenericClass;
TypeInfo IEnumerator_1_t13013_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13013_MethodInfos/* methods */
	, IEnumerator_1_t13013_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13013_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13013_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13013_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13013_0_0_0/* byval_arg */
	, &IEnumerator_1_t13013_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13013_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10882_il2cpp_TypeInfo;

extern TypeInfo KeySizes_t3109_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77986_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisKeySizes_t3109_m90834_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.KeySizes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.KeySizes>(System.Int32)
#define Array_InternalArray__get_Item_TisKeySizes_t3109_m90834(__this, p0, method) (KeySizes_t3109 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10882____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10882_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10882, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10882____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10882_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10882, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10882_FieldInfos[] =
{
	&InternalEnumerator_1_t10882____array_0_FieldInfo,
	&InternalEnumerator_1_t10882____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77983_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10882____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10882_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77983_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10882____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10882_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77986_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10882_PropertyInfos[] =
{
	&InternalEnumerator_1_t10882____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10882____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10882_InternalEnumerator_1__ctor_m77981_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77981_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77981_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10882_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10882_InternalEnumerator_1__ctor_m77981_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77981_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77982_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77982_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10882_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77982_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77983_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77983_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10882_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77983_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77984_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77984_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10882_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77984_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77985_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77985_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10882_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77985_GenericMethod/* genericMethod */

};
extern Il2CppType KeySizes_t3109_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77986_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.KeySizes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77986_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10882_il2cpp_TypeInfo/* declaring_type */
	, &KeySizes_t3109_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m77986_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10882_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77981_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77982_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77983_MethodInfo,
	&InternalEnumerator_1_Dispose_m77984_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77985_MethodInfo,
	&InternalEnumerator_1_get_Current_m77986_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m77985_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77982_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m77984_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10882_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77983_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77985_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77982_MethodInfo,
	&InternalEnumerator_1_Dispose_m77984_MethodInfo,
	&InternalEnumerator_1_get_Current_m77986_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10882_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13013_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10882_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13013_il2cpp_TypeInfo, 8},
};
extern TypeInfo KeySizes_t3109_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10882_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m77986_MethodInfo/* Method Usage */,
	&KeySizes_t3109_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisKeySizes_t3109_m90834_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10882_0_0_0;
extern Il2CppType InternalEnumerator_1_t10882_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10882_GenericClass;
TypeInfo InternalEnumerator_1_t10882_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10882_MethodInfos/* methods */
	, InternalEnumerator_1_t10882_PropertyInfos/* properties */
	, InternalEnumerator_1_t10882_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10882_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10882_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10882_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10882_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10882_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10882_1_0_0/* this_arg */
	, InternalEnumerator_1_t10882_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10882_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10882_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10882)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14523_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>
extern MethodInfo ICollection_1_get_Count_m103213_MethodInfo;
static PropertyInfo ICollection_1_t14523____Count_PropertyInfo = 
{
	&ICollection_1_t14523_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103213_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103214_MethodInfo;
static PropertyInfo ICollection_1_t14523____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14523_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103214_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14523_PropertyInfos[] =
{
	&ICollection_1_t14523____Count_PropertyInfo,
	&ICollection_1_t14523____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103213_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::get_Count()
MethodInfo ICollection_1_get_Count_m103213_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14523_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103213_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103214_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103214_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14523_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103214_GenericMethod/* genericMethod */

};
extern Il2CppType KeySizes_t3109_0_0_0;
extern Il2CppType KeySizes_t3109_0_0_0;
static ParameterInfo ICollection_1_t14523_ICollection_1_Add_m103215_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &KeySizes_t3109_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103215_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::Add(T)
MethodInfo ICollection_1_Add_m103215_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14523_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14523_ICollection_1_Add_m103215_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103215_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103216_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::Clear()
MethodInfo ICollection_1_Clear_m103216_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14523_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103216_GenericMethod/* genericMethod */

};
extern Il2CppType KeySizes_t3109_0_0_0;
static ParameterInfo ICollection_1_t14523_ICollection_1_Contains_m103217_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &KeySizes_t3109_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103217_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::Contains(T)
MethodInfo ICollection_1_Contains_m103217_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14523_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14523_ICollection_1_Contains_m103217_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103217_GenericMethod/* genericMethod */

};
extern Il2CppType KeySizesU5BU5D_t3016_0_0_0;
extern Il2CppType KeySizesU5BU5D_t3016_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14523_ICollection_1_CopyTo_m103218_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &KeySizesU5BU5D_t3016_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103218_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103218_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14523_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14523_ICollection_1_CopyTo_m103218_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103218_GenericMethod/* genericMethod */

};
extern Il2CppType KeySizes_t3109_0_0_0;
static ParameterInfo ICollection_1_t14523_ICollection_1_Remove_m103219_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &KeySizes_t3109_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103219_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.KeySizes>::Remove(T)
MethodInfo ICollection_1_Remove_m103219_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14523_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14523_ICollection_1_Remove_m103219_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103219_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14523_MethodInfos[] =
{
	&ICollection_1_get_Count_m103213_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103214_MethodInfo,
	&ICollection_1_Add_m103215_MethodInfo,
	&ICollection_1_Clear_m103216_MethodInfo,
	&ICollection_1_Contains_m103217_MethodInfo,
	&ICollection_1_CopyTo_m103218_MethodInfo,
	&ICollection_1_Remove_m103219_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14525_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14523_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14525_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14523_0_0_0;
extern Il2CppType ICollection_1_t14523_1_0_0;
struct ICollection_1_t14523;
extern Il2CppGenericClass ICollection_1_t14523_GenericClass;
TypeInfo ICollection_1_t14523_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14523_MethodInfos/* methods */
	, ICollection_1_t14523_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14523_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14523_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14523_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14523_0_0_0/* byval_arg */
	, &ICollection_1_t14523_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14523_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.KeySizes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.KeySizes>
extern Il2CppType IEnumerator_1_t13013_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103220_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.KeySizes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103220_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14525_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13013_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103220_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14525_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103220_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14525_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14525_0_0_0;
extern Il2CppType IEnumerable_1_t14525_1_0_0;
struct IEnumerable_1_t14525;
extern Il2CppGenericClass IEnumerable_1_t14525_GenericClass;
TypeInfo IEnumerable_1_t14525_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14525_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14525_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14525_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14525_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14525_0_0_0/* byval_arg */
	, &IEnumerable_1_t14525_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14525_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14524_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>
extern MethodInfo IList_1_get_Item_m103221_MethodInfo;
extern MethodInfo IList_1_set_Item_m103222_MethodInfo;
static PropertyInfo IList_1_t14524____Item_PropertyInfo = 
{
	&IList_1_t14524_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103221_MethodInfo/* get */
	, &IList_1_set_Item_m103222_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14524_PropertyInfos[] =
{
	&IList_1_t14524____Item_PropertyInfo,
	NULL
};
extern Il2CppType KeySizes_t3109_0_0_0;
static ParameterInfo IList_1_t14524_IList_1_IndexOf_m103223_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &KeySizes_t3109_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103223_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103223_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14524_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14524_IList_1_IndexOf_m103223_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103223_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType KeySizes_t3109_0_0_0;
static ParameterInfo IList_1_t14524_IList_1_Insert_m103224_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &KeySizes_t3109_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103224_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103224_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14524_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14524_IList_1_Insert_m103224_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103224_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14524_IList_1_RemoveAt_m103225_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103225_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103225_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14524_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14524_IList_1_RemoveAt_m103225_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103225_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14524_IList_1_get_Item_m103221_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType KeySizes_t3109_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103221_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103221_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14524_il2cpp_TypeInfo/* declaring_type */
	, &KeySizes_t3109_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14524_IList_1_get_Item_m103221_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103221_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType KeySizes_t3109_0_0_0;
static ParameterInfo IList_1_t14524_IList_1_set_Item_m103222_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &KeySizes_t3109_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103222_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.KeySizes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103222_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14524_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14524_IList_1_set_Item_m103222_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103222_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14524_MethodInfos[] =
{
	&IList_1_IndexOf_m103223_MethodInfo,
	&IList_1_Insert_m103224_MethodInfo,
	&IList_1_RemoveAt_m103225_MethodInfo,
	&IList_1_get_Item_m103221_MethodInfo,
	&IList_1_set_Item_m103222_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14524_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14523_il2cpp_TypeInfo,
	&IEnumerable_1_t14525_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14524_0_0_0;
extern Il2CppType IList_1_t14524_1_0_0;
struct IList_1_t14524;
extern Il2CppGenericClass IList_1_t14524_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14524_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14524_MethodInfos/* methods */
	, IList_1_t14524_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14524_il2cpp_TypeInfo/* element_class */
	, IList_1_t14524_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14524_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14524_0_0_0/* byval_arg */
	, &IList_1_t14524_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14524_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13015_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>
extern MethodInfo IEnumerator_1_get_Current_m103226_MethodInfo;
static PropertyInfo IEnumerator_1_t13015____Current_PropertyInfo = 
{
	&IEnumerator_1_t13015_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103226_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13015_PropertyInfos[] =
{
	&IEnumerator_1_t13015____Current_PropertyInfo,
	NULL
};
extern Il2CppType X509ChainStatusFlags_t3022_0_0_0;
extern void* RuntimeInvoker_X509ChainStatusFlags_t3022 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103226_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103226_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13015_il2cpp_TypeInfo/* declaring_type */
	, &X509ChainStatusFlags_t3022_0_0_0/* return_type */
	, RuntimeInvoker_X509ChainStatusFlags_t3022/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103226_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13015_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103226_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13015_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13015_0_0_0;
extern Il2CppType IEnumerator_1_t13015_1_0_0;
struct IEnumerator_1_t13015;
extern Il2CppGenericClass IEnumerator_1_t13015_GenericClass;
TypeInfo IEnumerator_1_t13015_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13015_MethodInfos/* methods */
	, IEnumerator_1_t13015_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13015_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13015_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13015_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13015_0_0_0/* byval_arg */
	, &IEnumerator_1_t13015_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13015_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10883_il2cpp_TypeInfo;

extern TypeInfo X509ChainStatusFlags_t3022_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77992_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisX509ChainStatusFlags_t3022_m90845_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.X509.X509ChainStatusFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.X509.X509ChainStatusFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisX509ChainStatusFlags_t3022_m90845 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77987_MethodInfo;
 void InternalEnumerator_1__ctor_m77987 (InternalEnumerator_1_t10883 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77988_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77988 (InternalEnumerator_1_t10883 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77989_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77989 (InternalEnumerator_1_t10883 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77992(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77992_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&X509ChainStatusFlags_t3022_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77990_MethodInfo;
 void InternalEnumerator_1_Dispose_m77990 (InternalEnumerator_1_t10883 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77991_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77991 (InternalEnumerator_1_t10883 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77992 (InternalEnumerator_1_t10883 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisX509ChainStatusFlags_t3022_m90845(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisX509ChainStatusFlags_t3022_m90845_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10883____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10883_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10883, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10883____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10883_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10883, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10883_FieldInfos[] =
{
	&InternalEnumerator_1_t10883____array_0_FieldInfo,
	&InternalEnumerator_1_t10883____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10883____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10883_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77989_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10883____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10883_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77992_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10883_PropertyInfos[] =
{
	&InternalEnumerator_1_t10883____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10883____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10883_InternalEnumerator_1__ctor_m77987_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77987_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77987_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77987/* method */
	, &InternalEnumerator_1_t10883_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10883_InternalEnumerator_1__ctor_m77987_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77987_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77988_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77988_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77988/* method */
	, &InternalEnumerator_1_t10883_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77988_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77989_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77989_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77989/* method */
	, &InternalEnumerator_1_t10883_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77989_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77990_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77990_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77990/* method */
	, &InternalEnumerator_1_t10883_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77990_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77991_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77991_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77991/* method */
	, &InternalEnumerator_1_t10883_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77991_GenericMethod/* genericMethod */

};
extern Il2CppType X509ChainStatusFlags_t3022_0_0_0;
extern void* RuntimeInvoker_X509ChainStatusFlags_t3022 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77992_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.X509.X509ChainStatusFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77992_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77992/* method */
	, &InternalEnumerator_1_t10883_il2cpp_TypeInfo/* declaring_type */
	, &X509ChainStatusFlags_t3022_0_0_0/* return_type */
	, RuntimeInvoker_X509ChainStatusFlags_t3022/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77992_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10883_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77987_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77988_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77989_MethodInfo,
	&InternalEnumerator_1_Dispose_m77990_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77991_MethodInfo,
	&InternalEnumerator_1_get_Current_m77992_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10883_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77989_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77991_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77988_MethodInfo,
	&InternalEnumerator_1_Dispose_m77990_MethodInfo,
	&InternalEnumerator_1_get_Current_m77992_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10883_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13015_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10883_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13015_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10883_0_0_0;
extern Il2CppType InternalEnumerator_1_t10883_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10883_GenericClass;
TypeInfo InternalEnumerator_1_t10883_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10883_MethodInfos/* methods */
	, InternalEnumerator_1_t10883_PropertyInfos/* properties */
	, InternalEnumerator_1_t10883_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10883_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10883_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10883_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10883_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10883_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10883_1_0_0/* this_arg */
	, InternalEnumerator_1_t10883_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10883_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10883)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14526_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.X509.X509ChainStatusFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.X509ChainStatusFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.X509ChainStatusFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.X509ChainStatusFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.X509ChainStatusFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.X509ChainStatusFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.X509ChainStatusFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.X509.X509ChainStatusFlags>
extern MethodInfo ICollection_1_get_Count_m103227_MethodInfo;
static PropertyInfo ICollection_1_t14526____Count_PropertyInfo = 
{
	&ICollection_1_t14526_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103227_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103228_MethodInfo;
static PropertyInfo ICollection_1_t14526____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14526_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103228_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14526_PropertyInfos[] =
{
	&ICollection_1_t14526____Count_PropertyInfo,
	&ICollection_1_t14526____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103227_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.X509.X509ChainStatusFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m103227_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14526_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103227_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103228_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.X509ChainStatusFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103228_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14526_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103228_GenericMethod/* genericMethod */

};
extern Il2CppType X509ChainStatusFlags_t3022_0_0_0;
extern Il2CppType X509ChainStatusFlags_t3022_0_0_0;
static ParameterInfo ICollection_1_t14526_ICollection_1_Add_m103229_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509ChainStatusFlags_t3022_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103229_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.X509ChainStatusFlags>::Add(T)
MethodInfo ICollection_1_Add_m103229_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14526_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14526_ICollection_1_Add_m103229_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103229_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103230_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.X509ChainStatusFlags>::Clear()
MethodInfo ICollection_1_Clear_m103230_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14526_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103230_GenericMethod/* genericMethod */

};
extern Il2CppType X509ChainStatusFlags_t3022_0_0_0;
static ParameterInfo ICollection_1_t14526_ICollection_1_Contains_m103231_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509ChainStatusFlags_t3022_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103231_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.X509ChainStatusFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m103231_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14526_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14526_ICollection_1_Contains_m103231_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103231_GenericMethod/* genericMethod */

};
extern Il2CppType X509ChainStatusFlagsU5BU5D_t11563_0_0_0;
extern Il2CppType X509ChainStatusFlagsU5BU5D_t11563_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14526_ICollection_1_CopyTo_m103232_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &X509ChainStatusFlagsU5BU5D_t11563_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103232_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.X509ChainStatusFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103232_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14526_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14526_ICollection_1_CopyTo_m103232_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103232_GenericMethod/* genericMethod */

};
extern Il2CppType X509ChainStatusFlags_t3022_0_0_0;
static ParameterInfo ICollection_1_t14526_ICollection_1_Remove_m103233_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509ChainStatusFlags_t3022_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103233_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.X509ChainStatusFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m103233_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14526_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14526_ICollection_1_Remove_m103233_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103233_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14526_MethodInfos[] =
{
	&ICollection_1_get_Count_m103227_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103228_MethodInfo,
	&ICollection_1_Add_m103229_MethodInfo,
	&ICollection_1_Clear_m103230_MethodInfo,
	&ICollection_1_Contains_m103231_MethodInfo,
	&ICollection_1_CopyTo_m103232_MethodInfo,
	&ICollection_1_Remove_m103233_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14528_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14526_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14528_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14526_0_0_0;
extern Il2CppType ICollection_1_t14526_1_0_0;
struct ICollection_1_t14526;
extern Il2CppGenericClass ICollection_1_t14526_GenericClass;
TypeInfo ICollection_1_t14526_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14526_MethodInfos/* methods */
	, ICollection_1_t14526_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14526_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14526_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14526_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14526_0_0_0/* byval_arg */
	, &ICollection_1_t14526_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14526_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.X509.X509ChainStatusFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.X509.X509ChainStatusFlags>
extern Il2CppType IEnumerator_1_t13015_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103234_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.X509.X509ChainStatusFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103234_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14528_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13015_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103234_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14528_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103234_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14528_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14528_0_0_0;
extern Il2CppType IEnumerable_1_t14528_1_0_0;
struct IEnumerable_1_t14528;
extern Il2CppGenericClass IEnumerable_1_t14528_GenericClass;
TypeInfo IEnumerable_1_t14528_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14528_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14528_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14528_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14528_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14528_0_0_0/* byval_arg */
	, &IEnumerable_1_t14528_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14528_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14527_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.X509.X509ChainStatusFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.X509ChainStatusFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.X509ChainStatusFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.X509.X509ChainStatusFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.X509ChainStatusFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.X509.X509ChainStatusFlags>
extern MethodInfo IList_1_get_Item_m103235_MethodInfo;
extern MethodInfo IList_1_set_Item_m103236_MethodInfo;
static PropertyInfo IList_1_t14527____Item_PropertyInfo = 
{
	&IList_1_t14527_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103235_MethodInfo/* get */
	, &IList_1_set_Item_m103236_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14527_PropertyInfos[] =
{
	&IList_1_t14527____Item_PropertyInfo,
	NULL
};
extern Il2CppType X509ChainStatusFlags_t3022_0_0_0;
static ParameterInfo IList_1_t14527_IList_1_IndexOf_m103237_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509ChainStatusFlags_t3022_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103237_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.X509.X509ChainStatusFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103237_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14527_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14527_IList_1_IndexOf_m103237_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103237_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509ChainStatusFlags_t3022_0_0_0;
static ParameterInfo IList_1_t14527_IList_1_Insert_m103238_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &X509ChainStatusFlags_t3022_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103238_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.X509ChainStatusFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103238_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14527_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14527_IList_1_Insert_m103238_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103238_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14527_IList_1_RemoveAt_m103239_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103239_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.X509ChainStatusFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103239_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14527_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14527_IList_1_RemoveAt_m103239_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103239_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14527_IList_1_get_Item_m103235_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType X509ChainStatusFlags_t3022_0_0_0;
extern void* RuntimeInvoker_X509ChainStatusFlags_t3022_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103235_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.X509.X509ChainStatusFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103235_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14527_il2cpp_TypeInfo/* declaring_type */
	, &X509ChainStatusFlags_t3022_0_0_0/* return_type */
	, RuntimeInvoker_X509ChainStatusFlags_t3022_Int32_t23/* invoker_method */
	, IList_1_t14527_IList_1_get_Item_m103235_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103235_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509ChainStatusFlags_t3022_0_0_0;
static ParameterInfo IList_1_t14527_IList_1_set_Item_m103236_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &X509ChainStatusFlags_t3022_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103236_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.X509ChainStatusFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103236_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14527_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14527_IList_1_set_Item_m103236_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103236_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14527_MethodInfos[] =
{
	&IList_1_IndexOf_m103237_MethodInfo,
	&IList_1_Insert_m103238_MethodInfo,
	&IList_1_RemoveAt_m103239_MethodInfo,
	&IList_1_get_Item_m103235_MethodInfo,
	&IList_1_set_Item_m103236_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14527_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14526_il2cpp_TypeInfo,
	&IEnumerable_1_t14528_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14527_0_0_0;
extern Il2CppType IList_1_t14527_1_0_0;
struct IList_1_t14527;
extern Il2CppGenericClass IList_1_t14527_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14527_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14527_MethodInfos/* methods */
	, IList_1_t14527_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14527_il2cpp_TypeInfo/* element_class */
	, IList_1_t14527_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14527_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14527_0_0_0/* byval_arg */
	, &IList_1_t14527_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14527_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13017_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>
extern MethodInfo IEnumerator_1_get_Current_m103240_MethodInfo;
static PropertyInfo IEnumerator_1_t13017____Current_PropertyInfo = 
{
	&IEnumerator_1_t13017_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103240_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13017_PropertyInfos[] =
{
	&IEnumerator_1_t13017____Current_PropertyInfo,
	NULL
};
extern Il2CppType KeyUsages_t3027_0_0_0;
extern void* RuntimeInvoker_KeyUsages_t3027 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103240_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103240_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13017_il2cpp_TypeInfo/* declaring_type */
	, &KeyUsages_t3027_0_0_0/* return_type */
	, RuntimeInvoker_KeyUsages_t3027/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103240_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13017_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103240_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13017_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13017_0_0_0;
extern Il2CppType IEnumerator_1_t13017_1_0_0;
struct IEnumerator_1_t13017;
extern Il2CppGenericClass IEnumerator_1_t13017_GenericClass;
TypeInfo IEnumerator_1_t13017_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13017_MethodInfos/* methods */
	, IEnumerator_1_t13017_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13017_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13017_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13017_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13017_0_0_0/* byval_arg */
	, &IEnumerator_1_t13017_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13017_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10884_il2cpp_TypeInfo;

extern TypeInfo KeyUsages_t3027_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77998_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisKeyUsages_t3027_m90856_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.X509.Extensions.KeyUsages>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.X509.Extensions.KeyUsages>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisKeyUsages_t3027_m90856 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77993_MethodInfo;
 void InternalEnumerator_1__ctor_m77993 (InternalEnumerator_1_t10884 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77994_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77994 (InternalEnumerator_1_t10884 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77995_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77995 (InternalEnumerator_1_t10884 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77998(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77998_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&KeyUsages_t3027_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77996_MethodInfo;
 void InternalEnumerator_1_Dispose_m77996 (InternalEnumerator_1_t10884 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77997_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77997 (InternalEnumerator_1_t10884 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77998 (InternalEnumerator_1_t10884 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisKeyUsages_t3027_m90856(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisKeyUsages_t3027_m90856_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10884____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10884_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10884, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10884____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10884_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10884, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10884_FieldInfos[] =
{
	&InternalEnumerator_1_t10884____array_0_FieldInfo,
	&InternalEnumerator_1_t10884____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10884____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10884_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77995_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10884____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10884_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77998_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10884_PropertyInfos[] =
{
	&InternalEnumerator_1_t10884____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10884____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10884_InternalEnumerator_1__ctor_m77993_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77993_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77993_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77993/* method */
	, &InternalEnumerator_1_t10884_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10884_InternalEnumerator_1__ctor_m77993_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77993_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77994_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77994_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77994/* method */
	, &InternalEnumerator_1_t10884_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77994_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77995_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77995_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77995/* method */
	, &InternalEnumerator_1_t10884_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77995_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77996_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77996_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77996/* method */
	, &InternalEnumerator_1_t10884_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77996_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77997_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77997_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77997/* method */
	, &InternalEnumerator_1_t10884_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77997_GenericMethod/* genericMethod */

};
extern Il2CppType KeyUsages_t3027_0_0_0;
extern void* RuntimeInvoker_KeyUsages_t3027 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77998_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.KeyUsages>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77998_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77998/* method */
	, &InternalEnumerator_1_t10884_il2cpp_TypeInfo/* declaring_type */
	, &KeyUsages_t3027_0_0_0/* return_type */
	, RuntimeInvoker_KeyUsages_t3027/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77998_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10884_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77993_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77994_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77995_MethodInfo,
	&InternalEnumerator_1_Dispose_m77996_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77997_MethodInfo,
	&InternalEnumerator_1_get_Current_m77998_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10884_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77995_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77997_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77994_MethodInfo,
	&InternalEnumerator_1_Dispose_m77996_MethodInfo,
	&InternalEnumerator_1_get_Current_m77998_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10884_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13017_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10884_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13017_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10884_0_0_0;
extern Il2CppType InternalEnumerator_1_t10884_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10884_GenericClass;
TypeInfo InternalEnumerator_1_t10884_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10884_MethodInfos/* methods */
	, InternalEnumerator_1_t10884_PropertyInfos/* properties */
	, InternalEnumerator_1_t10884_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10884_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10884_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10884_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10884_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10884_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10884_1_0_0/* this_arg */
	, InternalEnumerator_1_t10884_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10884_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10884)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14529_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.KeyUsages>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.KeyUsages>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.KeyUsages>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.KeyUsages>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.KeyUsages>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.KeyUsages>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.KeyUsages>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.KeyUsages>
extern MethodInfo ICollection_1_get_Count_m103241_MethodInfo;
static PropertyInfo ICollection_1_t14529____Count_PropertyInfo = 
{
	&ICollection_1_t14529_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103241_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103242_MethodInfo;
static PropertyInfo ICollection_1_t14529____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14529_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103242_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14529_PropertyInfos[] =
{
	&ICollection_1_t14529____Count_PropertyInfo,
	&ICollection_1_t14529____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103241_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.KeyUsages>::get_Count()
MethodInfo ICollection_1_get_Count_m103241_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14529_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103241_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103242_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.KeyUsages>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103242_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14529_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103242_GenericMethod/* genericMethod */

};
extern Il2CppType KeyUsages_t3027_0_0_0;
extern Il2CppType KeyUsages_t3027_0_0_0;
static ParameterInfo ICollection_1_t14529_ICollection_1_Add_m103243_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &KeyUsages_t3027_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103243_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.KeyUsages>::Add(T)
MethodInfo ICollection_1_Add_m103243_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14529_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14529_ICollection_1_Add_m103243_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103243_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103244_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.KeyUsages>::Clear()
MethodInfo ICollection_1_Clear_m103244_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14529_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103244_GenericMethod/* genericMethod */

};
extern Il2CppType KeyUsages_t3027_0_0_0;
static ParameterInfo ICollection_1_t14529_ICollection_1_Contains_m103245_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &KeyUsages_t3027_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103245_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.KeyUsages>::Contains(T)
MethodInfo ICollection_1_Contains_m103245_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14529_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14529_ICollection_1_Contains_m103245_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103245_GenericMethod/* genericMethod */

};
extern Il2CppType KeyUsagesU5BU5D_t11564_0_0_0;
extern Il2CppType KeyUsagesU5BU5D_t11564_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14529_ICollection_1_CopyTo_m103246_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &KeyUsagesU5BU5D_t11564_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103246_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.KeyUsages>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103246_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14529_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14529_ICollection_1_CopyTo_m103246_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103246_GenericMethod/* genericMethod */

};
extern Il2CppType KeyUsages_t3027_0_0_0;
static ParameterInfo ICollection_1_t14529_ICollection_1_Remove_m103247_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &KeyUsages_t3027_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103247_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.KeyUsages>::Remove(T)
MethodInfo ICollection_1_Remove_m103247_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14529_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14529_ICollection_1_Remove_m103247_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103247_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14529_MethodInfos[] =
{
	&ICollection_1_get_Count_m103241_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103242_MethodInfo,
	&ICollection_1_Add_m103243_MethodInfo,
	&ICollection_1_Clear_m103244_MethodInfo,
	&ICollection_1_Contains_m103245_MethodInfo,
	&ICollection_1_CopyTo_m103246_MethodInfo,
	&ICollection_1_Remove_m103247_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14531_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14529_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14531_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14529_0_0_0;
extern Il2CppType ICollection_1_t14529_1_0_0;
struct ICollection_1_t14529;
extern Il2CppGenericClass ICollection_1_t14529_GenericClass;
TypeInfo ICollection_1_t14529_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14529_MethodInfos/* methods */
	, ICollection_1_t14529_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14529_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14529_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14529_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14529_0_0_0/* byval_arg */
	, &ICollection_1_t14529_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14529_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.X509.Extensions.KeyUsages>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.X509.Extensions.KeyUsages>
extern Il2CppType IEnumerator_1_t13017_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103248_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.X509.Extensions.KeyUsages>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103248_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14531_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13017_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103248_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14531_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103248_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14531_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14531_0_0_0;
extern Il2CppType IEnumerable_1_t14531_1_0_0;
struct IEnumerable_1_t14531;
extern Il2CppGenericClass IEnumerable_1_t14531_GenericClass;
TypeInfo IEnumerable_1_t14531_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14531_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14531_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14531_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14531_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14531_0_0_0/* byval_arg */
	, &IEnumerable_1_t14531_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14531_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14530_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.KeyUsages>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.KeyUsages>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.KeyUsages>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.KeyUsages>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.KeyUsages>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.KeyUsages>
extern MethodInfo IList_1_get_Item_m103249_MethodInfo;
extern MethodInfo IList_1_set_Item_m103250_MethodInfo;
static PropertyInfo IList_1_t14530____Item_PropertyInfo = 
{
	&IList_1_t14530_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103249_MethodInfo/* get */
	, &IList_1_set_Item_m103250_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14530_PropertyInfos[] =
{
	&IList_1_t14530____Item_PropertyInfo,
	NULL
};
extern Il2CppType KeyUsages_t3027_0_0_0;
static ParameterInfo IList_1_t14530_IList_1_IndexOf_m103251_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &KeyUsages_t3027_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103251_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.KeyUsages>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103251_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14530_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14530_IList_1_IndexOf_m103251_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103251_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType KeyUsages_t3027_0_0_0;
static ParameterInfo IList_1_t14530_IList_1_Insert_m103252_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &KeyUsages_t3027_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103252_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.KeyUsages>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103252_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14530_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14530_IList_1_Insert_m103252_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103252_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14530_IList_1_RemoveAt_m103253_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103253_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.KeyUsages>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103253_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14530_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14530_IList_1_RemoveAt_m103253_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103253_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14530_IList_1_get_Item_m103249_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType KeyUsages_t3027_0_0_0;
extern void* RuntimeInvoker_KeyUsages_t3027_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103249_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.KeyUsages>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103249_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14530_il2cpp_TypeInfo/* declaring_type */
	, &KeyUsages_t3027_0_0_0/* return_type */
	, RuntimeInvoker_KeyUsages_t3027_Int32_t23/* invoker_method */
	, IList_1_t14530_IList_1_get_Item_m103249_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103249_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType KeyUsages_t3027_0_0_0;
static ParameterInfo IList_1_t14530_IList_1_set_Item_m103250_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &KeyUsages_t3027_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103250_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.KeyUsages>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103250_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14530_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14530_IList_1_set_Item_m103250_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103250_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14530_MethodInfos[] =
{
	&IList_1_IndexOf_m103251_MethodInfo,
	&IList_1_Insert_m103252_MethodInfo,
	&IList_1_RemoveAt_m103253_MethodInfo,
	&IList_1_get_Item_m103249_MethodInfo,
	&IList_1_set_Item_m103250_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14530_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14529_il2cpp_TypeInfo,
	&IEnumerable_1_t14531_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14530_0_0_0;
extern Il2CppType IList_1_t14530_1_0_0;
struct IList_1_t14530;
extern Il2CppGenericClass IList_1_t14530_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14530_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14530_MethodInfos/* methods */
	, IList_1_t14530_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14530_il2cpp_TypeInfo/* element_class */
	, IList_1_t14530_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14530_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14530_0_0_0/* byval_arg */
	, &IList_1_t14530_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14530_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13019_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>
extern MethodInfo IEnumerator_1_get_Current_m103254_MethodInfo;
static PropertyInfo IEnumerator_1_t13019____Current_PropertyInfo = 
{
	&IEnumerator_1_t13019_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103254_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13019_PropertyInfos[] =
{
	&IEnumerator_1_t13019____Current_PropertyInfo,
	NULL
};
extern Il2CppType CertTypes_t3029_0_0_0;
extern void* RuntimeInvoker_CertTypes_t3029 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103254_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103254_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13019_il2cpp_TypeInfo/* declaring_type */
	, &CertTypes_t3029_0_0_0/* return_type */
	, RuntimeInvoker_CertTypes_t3029/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103254_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13019_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103254_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13019_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13019_0_0_0;
extern Il2CppType IEnumerator_1_t13019_1_0_0;
struct IEnumerator_1_t13019;
extern Il2CppGenericClass IEnumerator_1_t13019_GenericClass;
TypeInfo IEnumerator_1_t13019_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13019_MethodInfos/* methods */
	, IEnumerator_1_t13019_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13019_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13019_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13019_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13019_0_0_0/* byval_arg */
	, &IEnumerator_1_t13019_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13019_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10885_il2cpp_TypeInfo;

extern TypeInfo CertTypes_t3029_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78004_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCertTypes_t3029_m90867_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCertTypes_t3029_m90867 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77999_MethodInfo;
 void InternalEnumerator_1__ctor_m77999 (InternalEnumerator_1_t10885 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78000_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78000 (InternalEnumerator_1_t10885 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78001_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78001 (InternalEnumerator_1_t10885 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m78004(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78004_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CertTypes_t3029_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78002_MethodInfo;
 void InternalEnumerator_1_Dispose_m78002 (InternalEnumerator_1_t10885 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78003_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78003 (InternalEnumerator_1_t10885 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m78004 (InternalEnumerator_1_t10885 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCertTypes_t3029_m90867(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCertTypes_t3029_m90867_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10885____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10885_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10885, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10885____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10885_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10885, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10885_FieldInfos[] =
{
	&InternalEnumerator_1_t10885____array_0_FieldInfo,
	&InternalEnumerator_1_t10885____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10885____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10885_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78001_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10885____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10885_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78004_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10885_PropertyInfos[] =
{
	&InternalEnumerator_1_t10885____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10885____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10885_InternalEnumerator_1__ctor_m77999_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77999_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77999_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77999/* method */
	, &InternalEnumerator_1_t10885_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10885_InternalEnumerator_1__ctor_m77999_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77999_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78000_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78000_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78000/* method */
	, &InternalEnumerator_1_t10885_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78000_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78001_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78001_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78001/* method */
	, &InternalEnumerator_1_t10885_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78001_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78002_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78002_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78002/* method */
	, &InternalEnumerator_1_t10885_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78002_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78003_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78003_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78003/* method */
	, &InternalEnumerator_1_t10885_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78003_GenericMethod/* genericMethod */

};
extern Il2CppType CertTypes_t3029_0_0_0;
extern void* RuntimeInvoker_CertTypes_t3029 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78004_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78004_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78004/* method */
	, &InternalEnumerator_1_t10885_il2cpp_TypeInfo/* declaring_type */
	, &CertTypes_t3029_0_0_0/* return_type */
	, RuntimeInvoker_CertTypes_t3029/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m78004_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10885_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77999_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78000_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78001_MethodInfo,
	&InternalEnumerator_1_Dispose_m78002_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78003_MethodInfo,
	&InternalEnumerator_1_get_Current_m78004_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10885_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78001_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78003_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78000_MethodInfo,
	&InternalEnumerator_1_Dispose_m78002_MethodInfo,
	&InternalEnumerator_1_get_Current_m78004_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10885_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13019_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10885_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13019_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10885_0_0_0;
extern Il2CppType InternalEnumerator_1_t10885_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10885_GenericClass;
TypeInfo InternalEnumerator_1_t10885_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10885_MethodInfos/* methods */
	, InternalEnumerator_1_t10885_PropertyInfos/* properties */
	, InternalEnumerator_1_t10885_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10885_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10885_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10885_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10885_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10885_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10885_1_0_0/* this_arg */
	, InternalEnumerator_1_t10885_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10885_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10885)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14532_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>
extern MethodInfo ICollection_1_get_Count_m103255_MethodInfo;
static PropertyInfo ICollection_1_t14532____Count_PropertyInfo = 
{
	&ICollection_1_t14532_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103255_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103256_MethodInfo;
static PropertyInfo ICollection_1_t14532____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14532_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103256_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14532_PropertyInfos[] =
{
	&ICollection_1_t14532____Count_PropertyInfo,
	&ICollection_1_t14532____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103255_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::get_Count()
MethodInfo ICollection_1_get_Count_m103255_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14532_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103255_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103256_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103256_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14532_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103256_GenericMethod/* genericMethod */

};
extern Il2CppType CertTypes_t3029_0_0_0;
extern Il2CppType CertTypes_t3029_0_0_0;
static ParameterInfo ICollection_1_t14532_ICollection_1_Add_m103257_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CertTypes_t3029_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103257_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::Add(T)
MethodInfo ICollection_1_Add_m103257_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14532_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14532_ICollection_1_Add_m103257_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103257_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103258_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::Clear()
MethodInfo ICollection_1_Clear_m103258_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14532_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103258_GenericMethod/* genericMethod */

};
extern Il2CppType CertTypes_t3029_0_0_0;
static ParameterInfo ICollection_1_t14532_ICollection_1_Contains_m103259_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CertTypes_t3029_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103259_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::Contains(T)
MethodInfo ICollection_1_Contains_m103259_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14532_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14532_ICollection_1_Contains_m103259_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103259_GenericMethod/* genericMethod */

};
extern Il2CppType CertTypesU5BU5D_t11565_0_0_0;
extern Il2CppType CertTypesU5BU5D_t11565_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14532_ICollection_1_CopyTo_m103260_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CertTypesU5BU5D_t11565_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103260_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103260_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14532_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14532_ICollection_1_CopyTo_m103260_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103260_GenericMethod/* genericMethod */

};
extern Il2CppType CertTypes_t3029_0_0_0;
static ParameterInfo ICollection_1_t14532_ICollection_1_Remove_m103261_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CertTypes_t3029_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103261_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::Remove(T)
MethodInfo ICollection_1_Remove_m103261_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14532_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14532_ICollection_1_Remove_m103261_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103261_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14532_MethodInfos[] =
{
	&ICollection_1_get_Count_m103255_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103256_MethodInfo,
	&ICollection_1_Add_m103257_MethodInfo,
	&ICollection_1_Clear_m103258_MethodInfo,
	&ICollection_1_Contains_m103259_MethodInfo,
	&ICollection_1_CopyTo_m103260_MethodInfo,
	&ICollection_1_Remove_m103261_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14534_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14532_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14534_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14532_0_0_0;
extern Il2CppType ICollection_1_t14532_1_0_0;
struct ICollection_1_t14532;
extern Il2CppGenericClass ICollection_1_t14532_GenericClass;
TypeInfo ICollection_1_t14532_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14532_MethodInfos/* methods */
	, ICollection_1_t14532_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14532_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14532_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14532_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14532_0_0_0/* byval_arg */
	, &ICollection_1_t14532_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14532_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>
extern Il2CppType IEnumerator_1_t13019_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103262_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103262_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14534_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13019_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103262_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14534_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103262_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14534_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14534_0_0_0;
extern Il2CppType IEnumerable_1_t14534_1_0_0;
struct IEnumerable_1_t14534;
extern Il2CppGenericClass IEnumerable_1_t14534_GenericClass;
TypeInfo IEnumerable_1_t14534_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14534_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14534_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14534_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14534_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14534_0_0_0/* byval_arg */
	, &IEnumerable_1_t14534_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14534_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14533_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>
extern MethodInfo IList_1_get_Item_m103263_MethodInfo;
extern MethodInfo IList_1_set_Item_m103264_MethodInfo;
static PropertyInfo IList_1_t14533____Item_PropertyInfo = 
{
	&IList_1_t14533_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103263_MethodInfo/* get */
	, &IList_1_set_Item_m103264_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14533_PropertyInfos[] =
{
	&IList_1_t14533____Item_PropertyInfo,
	NULL
};
extern Il2CppType CertTypes_t3029_0_0_0;
static ParameterInfo IList_1_t14533_IList_1_IndexOf_m103265_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CertTypes_t3029_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103265_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103265_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14533_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14533_IList_1_IndexOf_m103265_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103265_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType CertTypes_t3029_0_0_0;
static ParameterInfo IList_1_t14533_IList_1_Insert_m103266_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CertTypes_t3029_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103266_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103266_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14533_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14533_IList_1_Insert_m103266_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103266_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14533_IList_1_RemoveAt_m103267_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103267_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103267_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14533_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14533_IList_1_RemoveAt_m103267_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103267_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14533_IList_1_get_Item_m103263_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType CertTypes_t3029_0_0_0;
extern void* RuntimeInvoker_CertTypes_t3029_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103263_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103263_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14533_il2cpp_TypeInfo/* declaring_type */
	, &CertTypes_t3029_0_0_0/* return_type */
	, RuntimeInvoker_CertTypes_t3029_Int32_t23/* invoker_method */
	, IList_1_t14533_IList_1_get_Item_m103263_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103263_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType CertTypes_t3029_0_0_0;
static ParameterInfo IList_1_t14533_IList_1_set_Item_m103264_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CertTypes_t3029_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103264_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103264_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14533_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14533_IList_1_set_Item_m103264_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103264_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14533_MethodInfos[] =
{
	&IList_1_IndexOf_m103265_MethodInfo,
	&IList_1_Insert_m103266_MethodInfo,
	&IList_1_RemoveAt_m103267_MethodInfo,
	&IList_1_get_Item_m103263_MethodInfo,
	&IList_1_set_Item_m103264_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14533_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14532_il2cpp_TypeInfo,
	&IEnumerable_1_t14534_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14533_0_0_0;
extern Il2CppType IList_1_t14533_1_0_0;
struct IList_1_t14533;
extern Il2CppGenericClass IList_1_t14533_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14533_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14533_MethodInfos/* methods */
	, IList_1_t14533_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14533_il2cpp_TypeInfo/* element_class */
	, IList_1_t14533_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14533_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14533_0_0_0/* byval_arg */
	, &IList_1_t14533_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14533_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13021_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>
extern MethodInfo IEnumerator_1_get_Current_m103268_MethodInfo;
static PropertyInfo IEnumerator_1_t13021____Current_PropertyInfo = 
{
	&IEnumerator_1_t13021_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103268_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13021_PropertyInfos[] =
{
	&IEnumerator_1_t13021____Current_PropertyInfo,
	NULL
};
extern Il2CppType AlertLevel_t3035_0_0_0;
extern void* RuntimeInvoker_AlertLevel_t3035 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103268_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103268_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13021_il2cpp_TypeInfo/* declaring_type */
	, &AlertLevel_t3035_0_0_0/* return_type */
	, RuntimeInvoker_AlertLevel_t3035/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103268_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13021_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103268_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13021_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13021_0_0_0;
extern Il2CppType IEnumerator_1_t13021_1_0_0;
struct IEnumerator_1_t13021;
extern Il2CppGenericClass IEnumerator_1_t13021_GenericClass;
TypeInfo IEnumerator_1_t13021_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13021_MethodInfos/* methods */
	, IEnumerator_1_t13021_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13021_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13021_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13021_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13021_0_0_0/* byval_arg */
	, &IEnumerator_1_t13021_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13021_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10886_il2cpp_TypeInfo;

extern TypeInfo AlertLevel_t3035_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78010_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAlertLevel_t3035_m90878_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.AlertLevel>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.AlertLevel>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisAlertLevel_t3035_m90878 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78005_MethodInfo;
 void InternalEnumerator_1__ctor_m78005 (InternalEnumerator_1_t10886 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78006_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78006 (InternalEnumerator_1_t10886 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78007_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78007 (InternalEnumerator_1_t10886 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m78010(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78010_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AlertLevel_t3035_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78008_MethodInfo;
 void InternalEnumerator_1_Dispose_m78008 (InternalEnumerator_1_t10886 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78009_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78009 (InternalEnumerator_1_t10886 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m78010 (InternalEnumerator_1_t10886 * __this, MethodInfo* method){
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
		uint8_t L_8 = Array_InternalArray__get_Item_TisAlertLevel_t3035_m90878(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAlertLevel_t3035_m90878_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10886____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10886_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10886, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10886____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10886_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10886, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10886_FieldInfos[] =
{
	&InternalEnumerator_1_t10886____array_0_FieldInfo,
	&InternalEnumerator_1_t10886____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10886____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10886_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78007_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10886____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10886_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78010_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10886_PropertyInfos[] =
{
	&InternalEnumerator_1_t10886____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10886____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10886_InternalEnumerator_1__ctor_m78005_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78005_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78005_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78005/* method */
	, &InternalEnumerator_1_t10886_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10886_InternalEnumerator_1__ctor_m78005_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78005_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78006_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78006_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78006/* method */
	, &InternalEnumerator_1_t10886_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78006_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78007_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78007_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78007/* method */
	, &InternalEnumerator_1_t10886_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78007_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78008_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78008_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78008/* method */
	, &InternalEnumerator_1_t10886_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78008_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78009_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78009_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78009/* method */
	, &InternalEnumerator_1_t10886_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78009_GenericMethod/* genericMethod */

};
extern Il2CppType AlertLevel_t3035_0_0_0;
extern void* RuntimeInvoker_AlertLevel_t3035 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78010_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertLevel>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78010_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78010/* method */
	, &InternalEnumerator_1_t10886_il2cpp_TypeInfo/* declaring_type */
	, &AlertLevel_t3035_0_0_0/* return_type */
	, RuntimeInvoker_AlertLevel_t3035/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m78010_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10886_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78005_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78006_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78007_MethodInfo,
	&InternalEnumerator_1_Dispose_m78008_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78009_MethodInfo,
	&InternalEnumerator_1_get_Current_m78010_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10886_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78007_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78009_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78006_MethodInfo,
	&InternalEnumerator_1_Dispose_m78008_MethodInfo,
	&InternalEnumerator_1_get_Current_m78010_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10886_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13021_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10886_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13021_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10886_0_0_0;
extern Il2CppType InternalEnumerator_1_t10886_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10886_GenericClass;
TypeInfo InternalEnumerator_1_t10886_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10886_MethodInfos/* methods */
	, InternalEnumerator_1_t10886_PropertyInfos/* properties */
	, InternalEnumerator_1_t10886_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10886_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10886_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10886_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10886_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10886_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10886_1_0_0/* this_arg */
	, InternalEnumerator_1_t10886_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10886_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10886)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14535_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertLevel>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertLevel>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertLevel>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertLevel>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertLevel>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertLevel>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertLevel>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertLevel>
extern MethodInfo ICollection_1_get_Count_m103269_MethodInfo;
static PropertyInfo ICollection_1_t14535____Count_PropertyInfo = 
{
	&ICollection_1_t14535_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103269_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103270_MethodInfo;
static PropertyInfo ICollection_1_t14535____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14535_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103270_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14535_PropertyInfos[] =
{
	&ICollection_1_t14535____Count_PropertyInfo,
	&ICollection_1_t14535____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103269_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertLevel>::get_Count()
MethodInfo ICollection_1_get_Count_m103269_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14535_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103269_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103270_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertLevel>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103270_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14535_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103270_GenericMethod/* genericMethod */

};
extern Il2CppType AlertLevel_t3035_0_0_0;
extern Il2CppType AlertLevel_t3035_0_0_0;
static ParameterInfo ICollection_1_t14535_ICollection_1_Add_m103271_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AlertLevel_t3035_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103271_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertLevel>::Add(T)
MethodInfo ICollection_1_Add_m103271_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14535_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Byte_t779/* invoker_method */
	, ICollection_1_t14535_ICollection_1_Add_m103271_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103271_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103272_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertLevel>::Clear()
MethodInfo ICollection_1_Clear_m103272_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14535_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103272_GenericMethod/* genericMethod */

};
extern Il2CppType AlertLevel_t3035_0_0_0;
static ParameterInfo ICollection_1_t14535_ICollection_1_Contains_m103273_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AlertLevel_t3035_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103273_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertLevel>::Contains(T)
MethodInfo ICollection_1_Contains_m103273_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14535_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Byte_t779/* invoker_method */
	, ICollection_1_t14535_ICollection_1_Contains_m103273_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103273_GenericMethod/* genericMethod */

};
extern Il2CppType AlertLevelU5BU5D_t11566_0_0_0;
extern Il2CppType AlertLevelU5BU5D_t11566_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14535_ICollection_1_CopyTo_m103274_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AlertLevelU5BU5D_t11566_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103274_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertLevel>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103274_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14535_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14535_ICollection_1_CopyTo_m103274_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103274_GenericMethod/* genericMethod */

};
extern Il2CppType AlertLevel_t3035_0_0_0;
static ParameterInfo ICollection_1_t14535_ICollection_1_Remove_m103275_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AlertLevel_t3035_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103275_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertLevel>::Remove(T)
MethodInfo ICollection_1_Remove_m103275_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14535_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Byte_t779/* invoker_method */
	, ICollection_1_t14535_ICollection_1_Remove_m103275_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103275_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14535_MethodInfos[] =
{
	&ICollection_1_get_Count_m103269_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103270_MethodInfo,
	&ICollection_1_Add_m103271_MethodInfo,
	&ICollection_1_Clear_m103272_MethodInfo,
	&ICollection_1_Contains_m103273_MethodInfo,
	&ICollection_1_CopyTo_m103274_MethodInfo,
	&ICollection_1_Remove_m103275_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14537_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14535_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14537_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14535_0_0_0;
extern Il2CppType ICollection_1_t14535_1_0_0;
struct ICollection_1_t14535;
extern Il2CppGenericClass ICollection_1_t14535_GenericClass;
TypeInfo ICollection_1_t14535_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14535_MethodInfos/* methods */
	, ICollection_1_t14535_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14535_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14535_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14535_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14535_0_0_0/* byval_arg */
	, &ICollection_1_t14535_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14535_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.AlertLevel>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.AlertLevel>
extern Il2CppType IEnumerator_1_t13021_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103276_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.AlertLevel>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103276_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14537_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13021_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103276_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14537_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103276_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14537_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14537_0_0_0;
extern Il2CppType IEnumerable_1_t14537_1_0_0;
struct IEnumerable_1_t14537;
extern Il2CppGenericClass IEnumerable_1_t14537_GenericClass;
TypeInfo IEnumerable_1_t14537_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14537_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14537_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14537_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14537_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14537_0_0_0/* byval_arg */
	, &IEnumerable_1_t14537_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14537_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14536_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertLevel>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertLevel>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertLevel>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertLevel>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertLevel>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertLevel>
extern MethodInfo IList_1_get_Item_m103277_MethodInfo;
extern MethodInfo IList_1_set_Item_m103278_MethodInfo;
static PropertyInfo IList_1_t14536____Item_PropertyInfo = 
{
	&IList_1_t14536_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103277_MethodInfo/* get */
	, &IList_1_set_Item_m103278_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14536_PropertyInfos[] =
{
	&IList_1_t14536____Item_PropertyInfo,
	NULL
};
extern Il2CppType AlertLevel_t3035_0_0_0;
static ParameterInfo IList_1_t14536_IList_1_IndexOf_m103279_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AlertLevel_t3035_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103279_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertLevel>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103279_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14536_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Byte_t779/* invoker_method */
	, IList_1_t14536_IList_1_IndexOf_m103279_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103279_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType AlertLevel_t3035_0_0_0;
static ParameterInfo IList_1_t14536_IList_1_Insert_m103280_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AlertLevel_t3035_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103280_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertLevel>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103280_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14536_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Byte_t779/* invoker_method */
	, IList_1_t14536_IList_1_Insert_m103280_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103280_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14536_IList_1_RemoveAt_m103281_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103281_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertLevel>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103281_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14536_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14536_IList_1_RemoveAt_m103281_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103281_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14536_IList_1_get_Item_m103277_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType AlertLevel_t3035_0_0_0;
extern void* RuntimeInvoker_AlertLevel_t3035_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103277_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertLevel>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103277_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14536_il2cpp_TypeInfo/* declaring_type */
	, &AlertLevel_t3035_0_0_0/* return_type */
	, RuntimeInvoker_AlertLevel_t3035_Int32_t23/* invoker_method */
	, IList_1_t14536_IList_1_get_Item_m103277_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103277_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType AlertLevel_t3035_0_0_0;
static ParameterInfo IList_1_t14536_IList_1_set_Item_m103278_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AlertLevel_t3035_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103278_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertLevel>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103278_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14536_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Byte_t779/* invoker_method */
	, IList_1_t14536_IList_1_set_Item_m103278_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103278_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14536_MethodInfos[] =
{
	&IList_1_IndexOf_m103279_MethodInfo,
	&IList_1_Insert_m103280_MethodInfo,
	&IList_1_RemoveAt_m103281_MethodInfo,
	&IList_1_get_Item_m103277_MethodInfo,
	&IList_1_set_Item_m103278_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14536_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14535_il2cpp_TypeInfo,
	&IEnumerable_1_t14537_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14536_0_0_0;
extern Il2CppType IList_1_t14536_1_0_0;
struct IList_1_t14536;
extern Il2CppGenericClass IList_1_t14536_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14536_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14536_MethodInfos/* methods */
	, IList_1_t14536_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14536_il2cpp_TypeInfo/* element_class */
	, IList_1_t14536_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14536_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14536_0_0_0/* byval_arg */
	, &IList_1_t14536_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14536_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13023_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>
extern MethodInfo IEnumerator_1_get_Current_m103282_MethodInfo;
static PropertyInfo IEnumerator_1_t13023____Current_PropertyInfo = 
{
	&IEnumerator_1_t13023_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103282_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13023_PropertyInfos[] =
{
	&IEnumerator_1_t13023____Current_PropertyInfo,
	NULL
};
extern Il2CppType AlertDescription_t3036_0_0_0;
extern void* RuntimeInvoker_AlertDescription_t3036 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103282_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103282_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13023_il2cpp_TypeInfo/* declaring_type */
	, &AlertDescription_t3036_0_0_0/* return_type */
	, RuntimeInvoker_AlertDescription_t3036/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103282_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13023_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103282_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13023_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13023_0_0_0;
extern Il2CppType IEnumerator_1_t13023_1_0_0;
struct IEnumerator_1_t13023;
extern Il2CppGenericClass IEnumerator_1_t13023_GenericClass;
TypeInfo IEnumerator_1_t13023_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13023_MethodInfos/* methods */
	, IEnumerator_1_t13023_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13023_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13023_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13023_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13023_0_0_0/* byval_arg */
	, &IEnumerator_1_t13023_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13023_GenericClass/* generic_class */
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
extern TypeInfo InternalEnumerator_1_t10887_il2cpp_TypeInfo;

extern TypeInfo AlertDescription_t3036_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m78016_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAlertDescription_t3036_m90889_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.AlertDescription>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.AlertDescription>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisAlertDescription_t3036_m90889 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m78011_MethodInfo;
 void InternalEnumerator_1__ctor_m78011 (InternalEnumerator_1_t10887 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78012_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78012 (InternalEnumerator_1_t10887 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78013_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78013 (InternalEnumerator_1_t10887 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m78016(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m78016_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AlertDescription_t3036_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m78014_MethodInfo;
 void InternalEnumerator_1_Dispose_m78014 (InternalEnumerator_1_t10887 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m78015_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m78015 (InternalEnumerator_1_t10887 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m78016 (InternalEnumerator_1_t10887 * __this, MethodInfo* method){
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
		uint8_t L_8 = Array_InternalArray__get_Item_TisAlertDescription_t3036_m90889(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAlertDescription_t3036_m90889_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10887____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10887_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10887, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10887____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10887_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10887, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10887_FieldInfos[] =
{
	&InternalEnumerator_1_t10887____array_0_FieldInfo,
	&InternalEnumerator_1_t10887____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10887____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10887_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78013_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10887____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10887_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m78016_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10887_PropertyInfos[] =
{
	&InternalEnumerator_1_t10887____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10887____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10887_InternalEnumerator_1__ctor_m78011_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m78011_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m78011_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m78011/* method */
	, &InternalEnumerator_1_t10887_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10887_InternalEnumerator_1__ctor_m78011_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m78011_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78012_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78012_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78012/* method */
	, &InternalEnumerator_1_t10887_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78012_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78013_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78013_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78013/* method */
	, &InternalEnumerator_1_t10887_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78013_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m78014_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m78014_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m78014/* method */
	, &InternalEnumerator_1_t10887_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m78014_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m78015_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m78015_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m78015/* method */
	, &InternalEnumerator_1_t10887_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m78015_GenericMethod/* genericMethod */

};
extern Il2CppType AlertDescription_t3036_0_0_0;
extern void* RuntimeInvoker_AlertDescription_t3036 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m78016_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m78016_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m78016/* method */
	, &InternalEnumerator_1_t10887_il2cpp_TypeInfo/* declaring_type */
	, &AlertDescription_t3036_0_0_0/* return_type */
	, RuntimeInvoker_AlertDescription_t3036/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m78016_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10887_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m78011_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78012_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78013_MethodInfo,
	&InternalEnumerator_1_Dispose_m78014_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78015_MethodInfo,
	&InternalEnumerator_1_get_Current_m78016_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10887_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m78013_MethodInfo,
	&InternalEnumerator_1_MoveNext_m78015_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m78012_MethodInfo,
	&InternalEnumerator_1_Dispose_m78014_MethodInfo,
	&InternalEnumerator_1_get_Current_m78016_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10887_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t13023_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10887_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t13023_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10887_0_0_0;
extern Il2CppType InternalEnumerator_1_t10887_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10887_GenericClass;
TypeInfo InternalEnumerator_1_t10887_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10887_MethodInfos/* methods */
	, InternalEnumerator_1_t10887_PropertyInfos/* properties */
	, InternalEnumerator_1_t10887_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10887_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10887_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10887_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10887_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10887_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10887_1_0_0/* this_arg */
	, InternalEnumerator_1_t10887_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10887_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10887)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14538_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>
extern MethodInfo ICollection_1_get_Count_m103283_MethodInfo;
static PropertyInfo ICollection_1_t14538____Count_PropertyInfo = 
{
	&ICollection_1_t14538_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103283_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103284_MethodInfo;
static PropertyInfo ICollection_1_t14538____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14538_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103284_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14538_PropertyInfos[] =
{
	&ICollection_1_t14538____Count_PropertyInfo,
	&ICollection_1_t14538____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103283_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::get_Count()
MethodInfo ICollection_1_get_Count_m103283_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14538_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103283_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103284_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103284_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14538_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103284_GenericMethod/* genericMethod */

};
extern Il2CppType AlertDescription_t3036_0_0_0;
extern Il2CppType AlertDescription_t3036_0_0_0;
static ParameterInfo ICollection_1_t14538_ICollection_1_Add_m103285_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AlertDescription_t3036_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103285_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::Add(T)
MethodInfo ICollection_1_Add_m103285_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14538_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Byte_t779/* invoker_method */
	, ICollection_1_t14538_ICollection_1_Add_m103285_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103285_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103286_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::Clear()
MethodInfo ICollection_1_Clear_m103286_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14538_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103286_GenericMethod/* genericMethod */

};
extern Il2CppType AlertDescription_t3036_0_0_0;
static ParameterInfo ICollection_1_t14538_ICollection_1_Contains_m103287_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AlertDescription_t3036_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103287_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::Contains(T)
MethodInfo ICollection_1_Contains_m103287_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14538_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Byte_t779/* invoker_method */
	, ICollection_1_t14538_ICollection_1_Contains_m103287_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103287_GenericMethod/* genericMethod */

};
extern Il2CppType AlertDescriptionU5BU5D_t11567_0_0_0;
extern Il2CppType AlertDescriptionU5BU5D_t11567_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14538_ICollection_1_CopyTo_m103288_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AlertDescriptionU5BU5D_t11567_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103288_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103288_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14538_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14538_ICollection_1_CopyTo_m103288_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103288_GenericMethod/* genericMethod */

};
extern Il2CppType AlertDescription_t3036_0_0_0;
static ParameterInfo ICollection_1_t14538_ICollection_1_Remove_m103289_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AlertDescription_t3036_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103289_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::Remove(T)
MethodInfo ICollection_1_Remove_m103289_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14538_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Byte_t779/* invoker_method */
	, ICollection_1_t14538_ICollection_1_Remove_m103289_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103289_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14538_MethodInfos[] =
{
	&ICollection_1_get_Count_m103283_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103284_MethodInfo,
	&ICollection_1_Add_m103285_MethodInfo,
	&ICollection_1_Clear_m103286_MethodInfo,
	&ICollection_1_Contains_m103287_MethodInfo,
	&ICollection_1_CopyTo_m103288_MethodInfo,
	&ICollection_1_Remove_m103289_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14540_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14538_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14540_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14538_0_0_0;
extern Il2CppType ICollection_1_t14538_1_0_0;
struct ICollection_1_t14538;
extern Il2CppGenericClass ICollection_1_t14538_GenericClass;
TypeInfo ICollection_1_t14538_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14538_MethodInfos/* methods */
	, ICollection_1_t14538_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14538_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14538_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14538_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14538_0_0_0/* byval_arg */
	, &ICollection_1_t14538_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14538_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.AlertDescription>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.AlertDescription>
extern Il2CppType IEnumerator_1_t13023_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103290_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.AlertDescription>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103290_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14540_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t13023_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103290_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14540_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103290_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14540_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14540_0_0_0;
extern Il2CppType IEnumerable_1_t14540_1_0_0;
struct IEnumerable_1_t14540;
extern Il2CppGenericClass IEnumerable_1_t14540_GenericClass;
TypeInfo IEnumerable_1_t14540_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14540_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14540_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14540_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14540_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14540_0_0_0/* byval_arg */
	, &IEnumerable_1_t14540_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14540_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t14539_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>
extern MethodInfo IList_1_get_Item_m103291_MethodInfo;
extern MethodInfo IList_1_set_Item_m103292_MethodInfo;
static PropertyInfo IList_1_t14539____Item_PropertyInfo = 
{
	&IList_1_t14539_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103291_MethodInfo/* get */
	, &IList_1_set_Item_m103292_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14539_PropertyInfos[] =
{
	&IList_1_t14539____Item_PropertyInfo,
	NULL
};
extern Il2CppType AlertDescription_t3036_0_0_0;
static ParameterInfo IList_1_t14539_IList_1_IndexOf_m103293_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AlertDescription_t3036_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103293_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103293_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14539_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Byte_t779/* invoker_method */
	, IList_1_t14539_IList_1_IndexOf_m103293_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103293_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType AlertDescription_t3036_0_0_0;
static ParameterInfo IList_1_t14539_IList_1_Insert_m103294_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AlertDescription_t3036_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103294_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103294_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14539_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Byte_t779/* invoker_method */
	, IList_1_t14539_IList_1_Insert_m103294_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103294_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14539_IList_1_RemoveAt_m103295_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103295_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103295_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14539_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14539_IList_1_RemoveAt_m103295_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103295_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14539_IList_1_get_Item_m103291_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType AlertDescription_t3036_0_0_0;
extern void* RuntimeInvoker_AlertDescription_t3036_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103291_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103291_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14539_il2cpp_TypeInfo/* declaring_type */
	, &AlertDescription_t3036_0_0_0/* return_type */
	, RuntimeInvoker_AlertDescription_t3036_Int32_t23/* invoker_method */
	, IList_1_t14539_IList_1_get_Item_m103291_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103291_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType AlertDescription_t3036_0_0_0;
static ParameterInfo IList_1_t14539_IList_1_set_Item_m103292_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AlertDescription_t3036_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Byte_t779 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103292_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103292_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14539_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Byte_t779/* invoker_method */
	, IList_1_t14539_IList_1_set_Item_m103292_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103292_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14539_MethodInfos[] =
{
	&IList_1_IndexOf_m103293_MethodInfo,
	&IList_1_Insert_m103294_MethodInfo,
	&IList_1_RemoveAt_m103295_MethodInfo,
	&IList_1_get_Item_m103291_MethodInfo,
	&IList_1_set_Item_m103292_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14539_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14538_il2cpp_TypeInfo,
	&IEnumerable_1_t14540_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14539_0_0_0;
extern Il2CppType IList_1_t14539_1_0_0;
struct IList_1_t14539;
extern Il2CppGenericClass IList_1_t14539_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14539_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14539_MethodInfos/* methods */
	, IList_1_t14539_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14539_il2cpp_TypeInfo/* element_class */
	, IList_1_t14539_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14539_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14539_0_0_0/* byval_arg */
	, &IList_1_t14539_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14539_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t13025_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
extern MethodInfo IEnumerator_1_get_Current_m103296_MethodInfo;
static PropertyInfo IEnumerator_1_t13025____Current_PropertyInfo = 
{
	&IEnumerator_1_t13025_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103296_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t13025_PropertyInfos[] =
{
	&IEnumerator_1_t13025____Current_PropertyInfo,
	NULL
};
extern Il2CppType CipherAlgorithmType_t3038_0_0_0;
extern void* RuntimeInvoker_CipherAlgorithmType_t3038 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103296_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103296_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t13025_il2cpp_TypeInfo/* declaring_type */
	, &CipherAlgorithmType_t3038_0_0_0/* return_type */
	, RuntimeInvoker_CipherAlgorithmType_t3038/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103296_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t13025_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103296_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t13025_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t13025_0_0_0;
extern Il2CppType IEnumerator_1_t13025_1_0_0;
struct IEnumerator_1_t13025;
extern Il2CppGenericClass IEnumerator_1_t13025_GenericClass;
TypeInfo IEnumerator_1_t13025_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t13025_MethodInfos/* methods */
	, IEnumerator_1_t13025_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t13025_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t13025_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t13025_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t13025_0_0_0/* byval_arg */
	, &IEnumerator_1_t13025_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t13025_GenericClass/* generic_class */
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
