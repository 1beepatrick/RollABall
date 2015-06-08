#include "il2cpp_precompiled_header.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t10848_il2cpp_TypeInfo;

extern TypeInfo FileAccess_t2952_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t826_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77782_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m3120_MethodInfo;
extern MethodInfo Array_get_Length_m7045_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFileAccess_t2952_m90459_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IO.FileAccess>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IO.FileAccess>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFileAccess_t2952_m90459 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.IO.FileAccess>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77777_MethodInfo;
 void InternalEnumerator_1__ctor_m77777 (InternalEnumerator_1_t10848 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.IO.FileAccess>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77778_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77778 (InternalEnumerator_1_t10848 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.IO.FileAccess>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77779_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77779 (InternalEnumerator_1_t10848 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77782(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77782_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FileAccess_t2952_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.IO.FileAccess>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77780_MethodInfo;
 void InternalEnumerator_1_Dispose_m77780 (InternalEnumerator_1_t10848 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.IO.FileAccess>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77781_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77781 (InternalEnumerator_1_t10848 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.IO.FileAccess>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77782 (InternalEnumerator_1_t10848 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisFileAccess_t2952_m90459(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFileAccess_t2952_m90459_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileAccess>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10848____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10848_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10848, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10848____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10848_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10848, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10848_FieldInfos[] =
{
	&InternalEnumerator_1_t10848____array_0_FieldInfo,
	&InternalEnumerator_1_t10848____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10848____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10848_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77779_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10848____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10848_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77782_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10848_PropertyInfos[] =
{
	&InternalEnumerator_1_t10848____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10848____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10848_InternalEnumerator_1__ctor_m77777_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77777_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.FileAccess>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77777_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77777/* method */
	, &InternalEnumerator_1_t10848_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10848_InternalEnumerator_1__ctor_m77777_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77777_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77778_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.FileAccess>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77778_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77778/* method */
	, &InternalEnumerator_1_t10848_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77778_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77779_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IO.FileAccess>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77779_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77779/* method */
	, &InternalEnumerator_1_t10848_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77779_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77780_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.FileAccess>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77780_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77780/* method */
	, &InternalEnumerator_1_t10848_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77780_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77781_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IO.FileAccess>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77781_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77781/* method */
	, &InternalEnumerator_1_t10848_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77781_GenericMethod/* genericMethod */

};
extern Il2CppType FileAccess_t2952_0_0_0;
extern void* RuntimeInvoker_FileAccess_t2952 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77782_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IO.FileAccess>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77782_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77782/* method */
	, &InternalEnumerator_1_t10848_il2cpp_TypeInfo/* declaring_type */
	, &FileAccess_t2952_0_0_0/* return_type */
	, RuntimeInvoker_FileAccess_t2952/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77782_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10848_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77777_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77778_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77779_MethodInfo,
	&InternalEnumerator_1_Dispose_m77780_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77781_MethodInfo,
	&InternalEnumerator_1_get_Current_m77782_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m59_MethodInfo;
extern MethodInfo Object_Finalize_m50_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m60_MethodInfo;
extern MethodInfo ValueType_ToString_m61_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10848_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77779_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77781_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77778_MethodInfo,
	&InternalEnumerator_1_Dispose_m77780_MethodInfo,
	&InternalEnumerator_1_get_Current_m77782_MethodInfo,
};
extern TypeInfo IEnumerator_t30_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t31_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t12946_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t10848_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12946_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10848_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12946_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10848_0_0_0;
extern Il2CppType InternalEnumerator_1_t10848_1_0_0;
extern TypeInfo ValueType_t26_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t10848_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t10848_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10848_MethodInfos/* methods */
	, InternalEnumerator_1_t10848_PropertyInfos/* properties */
	, InternalEnumerator_1_t10848_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10848_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10848_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10848_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10848_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10848_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10848_1_0_0/* this_arg */
	, InternalEnumerator_1_t10848_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10848_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10848)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14421_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IO.FileAccess>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAccess>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAccess>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAccess>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAccess>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAccess>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAccess>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileAccess>
extern MethodInfo ICollection_1_get_Count_m102737_MethodInfo;
static PropertyInfo ICollection_1_t14421____Count_PropertyInfo = 
{
	&ICollection_1_t14421_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102737_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102738_MethodInfo;
static PropertyInfo ICollection_1_t14421____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14421_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102738_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14421_PropertyInfos[] =
{
	&ICollection_1_t14421____Count_PropertyInfo,
	&ICollection_1_t14421____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102737_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IO.FileAccess>::get_Count()
MethodInfo ICollection_1_get_Count_m102737_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14421_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102737_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102738_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAccess>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102738_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14421_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102738_GenericMethod/* genericMethod */

};
extern Il2CppType FileAccess_t2952_0_0_0;
extern Il2CppType FileAccess_t2952_0_0_0;
static ParameterInfo ICollection_1_t14421_ICollection_1_Add_m102739_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileAccess_t2952_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102739_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAccess>::Add(T)
MethodInfo ICollection_1_Add_m102739_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14421_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14421_ICollection_1_Add_m102739_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102739_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102740_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAccess>::Clear()
MethodInfo ICollection_1_Clear_m102740_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14421_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102740_GenericMethod/* genericMethod */

};
extern Il2CppType FileAccess_t2952_0_0_0;
static ParameterInfo ICollection_1_t14421_ICollection_1_Contains_m102741_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileAccess_t2952_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102741_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAccess>::Contains(T)
MethodInfo ICollection_1_Contains_m102741_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14421_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14421_ICollection_1_Contains_m102741_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102741_GenericMethod/* genericMethod */

};
extern Il2CppType FileAccessU5BU5D_t11179_0_0_0;
extern Il2CppType FileAccessU5BU5D_t11179_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14421_ICollection_1_CopyTo_m102742_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FileAccessU5BU5D_t11179_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102742_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAccess>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102742_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14421_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14421_ICollection_1_CopyTo_m102742_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102742_GenericMethod/* genericMethod */

};
extern Il2CppType FileAccess_t2952_0_0_0;
static ParameterInfo ICollection_1_t14421_ICollection_1_Remove_m102743_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileAccess_t2952_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102743_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAccess>::Remove(T)
MethodInfo ICollection_1_Remove_m102743_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14421_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14421_ICollection_1_Remove_m102743_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102743_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14421_MethodInfos[] =
{
	&ICollection_1_get_Count_m102737_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102738_MethodInfo,
	&ICollection_1_Add_m102739_MethodInfo,
	&ICollection_1_Clear_m102740_MethodInfo,
	&ICollection_1_Contains_m102741_MethodInfo,
	&ICollection_1_CopyTo_m102742_MethodInfo,
	&ICollection_1_Remove_m102743_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t545_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t14423_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14421_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14423_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14421_0_0_0;
extern Il2CppType ICollection_1_t14421_1_0_0;
struct ICollection_1_t14421;
extern Il2CppGenericClass ICollection_1_t14421_GenericClass;
TypeInfo ICollection_1_t14421_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14421_MethodInfos/* methods */
	, ICollection_1_t14421_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14421_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14421_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14421_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14421_0_0_0/* byval_arg */
	, &ICollection_1_t14421_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14421_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.FileAccess>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileAccess>
extern Il2CppType IEnumerator_1_t12946_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102744_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.FileAccess>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102744_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14423_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12946_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102744_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14423_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102744_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14423_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14423_0_0_0;
extern Il2CppType IEnumerable_1_t14423_1_0_0;
struct IEnumerable_1_t14423;
extern Il2CppGenericClass IEnumerable_1_t14423_GenericClass;
TypeInfo IEnumerable_1_t14423_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14423_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14423_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14423_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14423_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14423_0_0_0/* byval_arg */
	, &IEnumerable_1_t14423_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14423_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14422_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IO.FileAccess>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IO.FileAccess>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IO.FileAccess>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IO.FileAccess>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IO.FileAccess>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileAccess>
extern MethodInfo IList_1_get_Item_m102745_MethodInfo;
extern MethodInfo IList_1_set_Item_m102746_MethodInfo;
static PropertyInfo IList_1_t14422____Item_PropertyInfo = 
{
	&IList_1_t14422_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102745_MethodInfo/* get */
	, &IList_1_set_Item_m102746_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14422_PropertyInfos[] =
{
	&IList_1_t14422____Item_PropertyInfo,
	NULL
};
extern Il2CppType FileAccess_t2952_0_0_0;
static ParameterInfo IList_1_t14422_IList_1_IndexOf_m102747_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileAccess_t2952_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102747_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IO.FileAccess>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102747_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14422_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14422_IList_1_IndexOf_m102747_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102747_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType FileAccess_t2952_0_0_0;
static ParameterInfo IList_1_t14422_IList_1_Insert_m102748_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FileAccess_t2952_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102748_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileAccess>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102748_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14422_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14422_IList_1_Insert_m102748_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102748_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14422_IList_1_RemoveAt_m102749_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102749_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileAccess>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102749_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14422_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14422_IList_1_RemoveAt_m102749_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102749_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14422_IList_1_get_Item_m102745_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType FileAccess_t2952_0_0_0;
extern void* RuntimeInvoker_FileAccess_t2952_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102745_GenericMethod;
// T System.Collections.Generic.IList`1<System.IO.FileAccess>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102745_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14422_il2cpp_TypeInfo/* declaring_type */
	, &FileAccess_t2952_0_0_0/* return_type */
	, RuntimeInvoker_FileAccess_t2952_Int32_t23/* invoker_method */
	, IList_1_t14422_IList_1_get_Item_m102745_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102745_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType FileAccess_t2952_0_0_0;
static ParameterInfo IList_1_t14422_IList_1_set_Item_m102746_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FileAccess_t2952_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102746_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileAccess>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102746_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14422_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14422_IList_1_set_Item_m102746_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102746_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14422_MethodInfos[] =
{
	&IList_1_IndexOf_m102747_MethodInfo,
	&IList_1_Insert_m102748_MethodInfo,
	&IList_1_RemoveAt_m102749_MethodInfo,
	&IList_1_get_Item_m102745_MethodInfo,
	&IList_1_set_Item_m102746_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14422_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14421_il2cpp_TypeInfo,
	&IEnumerable_1_t14423_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14422_0_0_0;
extern Il2CppType IList_1_t14422_1_0_0;
struct IList_1_t14422;
extern Il2CppGenericClass IList_1_t14422_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14422_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14422_MethodInfos/* methods */
	, IList_1_t14422_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14422_il2cpp_TypeInfo/* element_class */
	, IList_1_t14422_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14422_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14422_0_0_0/* byval_arg */
	, &IList_1_t14422_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14422_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12948_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Net.HttpStatusCode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Net.HttpStatusCode>
extern MethodInfo IEnumerator_1_get_Current_m102750_MethodInfo;
static PropertyInfo IEnumerator_1_t12948____Current_PropertyInfo = 
{
	&IEnumerator_1_t12948_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102750_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12948_PropertyInfos[] =
{
	&IEnumerator_1_t12948____Current_PropertyInfo,
	NULL
};
extern Il2CppType HttpStatusCode_t825_0_0_0;
extern void* RuntimeInvoker_HttpStatusCode_t825 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102750_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Net.HttpStatusCode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102750_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12948_il2cpp_TypeInfo/* declaring_type */
	, &HttpStatusCode_t825_0_0_0/* return_type */
	, RuntimeInvoker_HttpStatusCode_t825/* invoker_method */
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
	, &IEnumerator_1_get_Current_m102750_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12948_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102750_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12948_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12948_0_0_0;
extern Il2CppType IEnumerator_1_t12948_1_0_0;
struct IEnumerator_1_t12948;
extern Il2CppGenericClass IEnumerator_1_t12948_GenericClass;
TypeInfo IEnumerator_1_t12948_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12948_MethodInfos/* methods */
	, IEnumerator_1_t12948_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12948_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12948_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12948_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12948_0_0_0/* byval_arg */
	, &IEnumerator_1_t12948_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12948_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10849_il2cpp_TypeInfo;

extern TypeInfo HttpStatusCode_t825_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77788_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisHttpStatusCode_t825_m90470_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Net.HttpStatusCode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Net.HttpStatusCode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisHttpStatusCode_t825_m90470 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Net.HttpStatusCode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77783_MethodInfo;
 void InternalEnumerator_1__ctor_m77783 (InternalEnumerator_1_t10849 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Net.HttpStatusCode>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77784_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77784 (InternalEnumerator_1_t10849 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Net.HttpStatusCode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77785_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77785 (InternalEnumerator_1_t10849 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77788(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77788_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&HttpStatusCode_t825_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Net.HttpStatusCode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77786_MethodInfo;
 void InternalEnumerator_1_Dispose_m77786 (InternalEnumerator_1_t10849 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Net.HttpStatusCode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77787_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77787 (InternalEnumerator_1_t10849 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Net.HttpStatusCode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77788 (InternalEnumerator_1_t10849 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisHttpStatusCode_t825_m90470(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisHttpStatusCode_t825_m90470_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Net.HttpStatusCode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10849____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10849_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10849, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10849____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10849_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10849, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10849_FieldInfos[] =
{
	&InternalEnumerator_1_t10849____array_0_FieldInfo,
	&InternalEnumerator_1_t10849____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10849____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10849_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77785_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10849____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10849_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77788_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10849_PropertyInfos[] =
{
	&InternalEnumerator_1_t10849____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10849____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10849_InternalEnumerator_1__ctor_m77783_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77783_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Net.HttpStatusCode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77783_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77783/* method */
	, &InternalEnumerator_1_t10849_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10849_InternalEnumerator_1__ctor_m77783_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77783_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77784_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Net.HttpStatusCode>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77784_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77784/* method */
	, &InternalEnumerator_1_t10849_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77784_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77785_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Net.HttpStatusCode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77785_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77785/* method */
	, &InternalEnumerator_1_t10849_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77785_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77786_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Net.HttpStatusCode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77786_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77786/* method */
	, &InternalEnumerator_1_t10849_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77786_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77787_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Net.HttpStatusCode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77787_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77787/* method */
	, &InternalEnumerator_1_t10849_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77787_GenericMethod/* genericMethod */

};
extern Il2CppType HttpStatusCode_t825_0_0_0;
extern void* RuntimeInvoker_HttpStatusCode_t825 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77788_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Net.HttpStatusCode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77788_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77788/* method */
	, &InternalEnumerator_1_t10849_il2cpp_TypeInfo/* declaring_type */
	, &HttpStatusCode_t825_0_0_0/* return_type */
	, RuntimeInvoker_HttpStatusCode_t825/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77788_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10849_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77783_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77784_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77785_MethodInfo,
	&InternalEnumerator_1_Dispose_m77786_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77787_MethodInfo,
	&InternalEnumerator_1_get_Current_m77788_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10849_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77785_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77787_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77784_MethodInfo,
	&InternalEnumerator_1_Dispose_m77786_MethodInfo,
	&InternalEnumerator_1_get_Current_m77788_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10849_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12948_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10849_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12948_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10849_0_0_0;
extern Il2CppType InternalEnumerator_1_t10849_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10849_GenericClass;
TypeInfo InternalEnumerator_1_t10849_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10849_MethodInfos/* methods */
	, InternalEnumerator_1_t10849_PropertyInfos/* properties */
	, InternalEnumerator_1_t10849_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10849_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10849_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10849_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10849_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10849_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10849_1_0_0/* this_arg */
	, InternalEnumerator_1_t10849_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10849_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10849)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14424_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Net.HttpStatusCode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.HttpStatusCode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Net.HttpStatusCode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Net.HttpStatusCode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.HttpStatusCode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Net.HttpStatusCode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.HttpStatusCode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Net.HttpStatusCode>
extern MethodInfo ICollection_1_get_Count_m102751_MethodInfo;
static PropertyInfo ICollection_1_t14424____Count_PropertyInfo = 
{
	&ICollection_1_t14424_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102751_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102752_MethodInfo;
static PropertyInfo ICollection_1_t14424____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14424_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102752_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14424_PropertyInfos[] =
{
	&ICollection_1_t14424____Count_PropertyInfo,
	&ICollection_1_t14424____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102751_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Net.HttpStatusCode>::get_Count()
MethodInfo ICollection_1_get_Count_m102751_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14424_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102751_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102752_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.HttpStatusCode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102752_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14424_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102752_GenericMethod/* genericMethod */

};
extern Il2CppType HttpStatusCode_t825_0_0_0;
extern Il2CppType HttpStatusCode_t825_0_0_0;
static ParameterInfo ICollection_1_t14424_ICollection_1_Add_m102753_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HttpStatusCode_t825_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102753_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Net.HttpStatusCode>::Add(T)
MethodInfo ICollection_1_Add_m102753_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14424_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14424_ICollection_1_Add_m102753_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102753_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102754_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Net.HttpStatusCode>::Clear()
MethodInfo ICollection_1_Clear_m102754_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14424_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102754_GenericMethod/* genericMethod */

};
extern Il2CppType HttpStatusCode_t825_0_0_0;
static ParameterInfo ICollection_1_t14424_ICollection_1_Contains_m102755_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HttpStatusCode_t825_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102755_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.HttpStatusCode>::Contains(T)
MethodInfo ICollection_1_Contains_m102755_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14424_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14424_ICollection_1_Contains_m102755_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102755_GenericMethod/* genericMethod */

};
extern Il2CppType HttpStatusCodeU5BU5D_t11440_0_0_0;
extern Il2CppType HttpStatusCodeU5BU5D_t11440_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14424_ICollection_1_CopyTo_m102756_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &HttpStatusCodeU5BU5D_t11440_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102756_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Net.HttpStatusCode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102756_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14424_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14424_ICollection_1_CopyTo_m102756_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102756_GenericMethod/* genericMethod */

};
extern Il2CppType HttpStatusCode_t825_0_0_0;
static ParameterInfo ICollection_1_t14424_ICollection_1_Remove_m102757_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HttpStatusCode_t825_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102757_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.HttpStatusCode>::Remove(T)
MethodInfo ICollection_1_Remove_m102757_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14424_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14424_ICollection_1_Remove_m102757_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102757_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14424_MethodInfos[] =
{
	&ICollection_1_get_Count_m102751_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102752_MethodInfo,
	&ICollection_1_Add_m102753_MethodInfo,
	&ICollection_1_Clear_m102754_MethodInfo,
	&ICollection_1_Contains_m102755_MethodInfo,
	&ICollection_1_CopyTo_m102756_MethodInfo,
	&ICollection_1_Remove_m102757_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14426_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14424_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14426_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14424_0_0_0;
extern Il2CppType ICollection_1_t14424_1_0_0;
struct ICollection_1_t14424;
extern Il2CppGenericClass ICollection_1_t14424_GenericClass;
TypeInfo ICollection_1_t14424_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14424_MethodInfos/* methods */
	, ICollection_1_t14424_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14424_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14424_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14424_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14424_0_0_0/* byval_arg */
	, &ICollection_1_t14424_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14424_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Net.HttpStatusCode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Net.HttpStatusCode>
extern Il2CppType IEnumerator_1_t12948_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102758_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Net.HttpStatusCode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102758_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14426_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12948_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102758_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14426_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102758_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14426_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14426_0_0_0;
extern Il2CppType IEnumerable_1_t14426_1_0_0;
struct IEnumerable_1_t14426;
extern Il2CppGenericClass IEnumerable_1_t14426_GenericClass;
TypeInfo IEnumerable_1_t14426_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14426_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14426_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14426_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14426_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14426_0_0_0/* byval_arg */
	, &IEnumerable_1_t14426_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14426_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14425_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Net.HttpStatusCode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Net.HttpStatusCode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Net.HttpStatusCode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Net.HttpStatusCode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Net.HttpStatusCode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Net.HttpStatusCode>
extern MethodInfo IList_1_get_Item_m102759_MethodInfo;
extern MethodInfo IList_1_set_Item_m102760_MethodInfo;
static PropertyInfo IList_1_t14425____Item_PropertyInfo = 
{
	&IList_1_t14425_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102759_MethodInfo/* get */
	, &IList_1_set_Item_m102760_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14425_PropertyInfos[] =
{
	&IList_1_t14425____Item_PropertyInfo,
	NULL
};
extern Il2CppType HttpStatusCode_t825_0_0_0;
static ParameterInfo IList_1_t14425_IList_1_IndexOf_m102761_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HttpStatusCode_t825_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102761_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Net.HttpStatusCode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102761_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14425_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14425_IList_1_IndexOf_m102761_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102761_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType HttpStatusCode_t825_0_0_0;
static ParameterInfo IList_1_t14425_IList_1_Insert_m102762_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &HttpStatusCode_t825_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102762_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Net.HttpStatusCode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102762_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14425_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14425_IList_1_Insert_m102762_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102762_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14425_IList_1_RemoveAt_m102763_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102763_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Net.HttpStatusCode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102763_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14425_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14425_IList_1_RemoveAt_m102763_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102763_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14425_IList_1_get_Item_m102759_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType HttpStatusCode_t825_0_0_0;
extern void* RuntimeInvoker_HttpStatusCode_t825_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102759_GenericMethod;
// T System.Collections.Generic.IList`1<System.Net.HttpStatusCode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102759_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14425_il2cpp_TypeInfo/* declaring_type */
	, &HttpStatusCode_t825_0_0_0/* return_type */
	, RuntimeInvoker_HttpStatusCode_t825_Int32_t23/* invoker_method */
	, IList_1_t14425_IList_1_get_Item_m102759_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102759_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType HttpStatusCode_t825_0_0_0;
static ParameterInfo IList_1_t14425_IList_1_set_Item_m102760_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &HttpStatusCode_t825_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102760_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Net.HttpStatusCode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102760_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14425_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14425_IList_1_set_Item_m102760_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102760_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14425_MethodInfos[] =
{
	&IList_1_IndexOf_m102761_MethodInfo,
	&IList_1_Insert_m102762_MethodInfo,
	&IList_1_RemoveAt_m102763_MethodInfo,
	&IList_1_get_Item_m102759_MethodInfo,
	&IList_1_set_Item_m102760_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14425_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14424_il2cpp_TypeInfo,
	&IEnumerable_1_t14426_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14425_0_0_0;
extern Il2CppType IList_1_t14425_1_0_0;
struct IList_1_t14425;
extern Il2CppGenericClass IList_1_t14425_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14425_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14425_MethodInfos/* methods */
	, IList_1_t14425_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14425_il2cpp_TypeInfo/* element_class */
	, IList_1_t14425_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14425_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14425_0_0_0/* byval_arg */
	, &IList_1_t14425_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14425_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12950_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Net.SecurityProtocolType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Net.SecurityProtocolType>
extern MethodInfo IEnumerator_1_get_Current_m102764_MethodInfo;
static PropertyInfo IEnumerator_1_t12950____Current_PropertyInfo = 
{
	&IEnumerator_1_t12950_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102764_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12950_PropertyInfos[] =
{
	&IEnumerator_1_t12950____Current_PropertyInfo,
	NULL
};
extern Il2CppType SecurityProtocolType_t2794_0_0_0;
extern void* RuntimeInvoker_SecurityProtocolType_t2794 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102764_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Net.SecurityProtocolType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102764_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12950_il2cpp_TypeInfo/* declaring_type */
	, &SecurityProtocolType_t2794_0_0_0/* return_type */
	, RuntimeInvoker_SecurityProtocolType_t2794/* invoker_method */
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
	, &IEnumerator_1_get_Current_m102764_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12950_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102764_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12950_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12950_0_0_0;
extern Il2CppType IEnumerator_1_t12950_1_0_0;
struct IEnumerator_1_t12950;
extern Il2CppGenericClass IEnumerator_1_t12950_GenericClass;
TypeInfo IEnumerator_1_t12950_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12950_MethodInfos/* methods */
	, IEnumerator_1_t12950_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12950_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12950_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12950_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12950_0_0_0/* byval_arg */
	, &IEnumerator_1_t12950_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12950_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10850_il2cpp_TypeInfo;

extern TypeInfo SecurityProtocolType_t2794_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77794_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSecurityProtocolType_t2794_m90481_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Net.SecurityProtocolType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Net.SecurityProtocolType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSecurityProtocolType_t2794_m90481 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Net.SecurityProtocolType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77789_MethodInfo;
 void InternalEnumerator_1__ctor_m77789 (InternalEnumerator_1_t10850 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Net.SecurityProtocolType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77790_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77790 (InternalEnumerator_1_t10850 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Net.SecurityProtocolType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77791_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77791 (InternalEnumerator_1_t10850 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77794(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77794_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SecurityProtocolType_t2794_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Net.SecurityProtocolType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77792_MethodInfo;
 void InternalEnumerator_1_Dispose_m77792 (InternalEnumerator_1_t10850 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Net.SecurityProtocolType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77793_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77793 (InternalEnumerator_1_t10850 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Net.SecurityProtocolType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77794 (InternalEnumerator_1_t10850 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSecurityProtocolType_t2794_m90481(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSecurityProtocolType_t2794_m90481_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Net.SecurityProtocolType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10850____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10850_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10850, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10850____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10850_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10850, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10850_FieldInfos[] =
{
	&InternalEnumerator_1_t10850____array_0_FieldInfo,
	&InternalEnumerator_1_t10850____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10850____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10850_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77791_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10850____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10850_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77794_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10850_PropertyInfos[] =
{
	&InternalEnumerator_1_t10850____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10850____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10850_InternalEnumerator_1__ctor_m77789_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77789_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Net.SecurityProtocolType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77789_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77789/* method */
	, &InternalEnumerator_1_t10850_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10850_InternalEnumerator_1__ctor_m77789_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77789_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77790_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Net.SecurityProtocolType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77790_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77790/* method */
	, &InternalEnumerator_1_t10850_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77790_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77791_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Net.SecurityProtocolType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77791_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77791/* method */
	, &InternalEnumerator_1_t10850_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77791_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77792_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Net.SecurityProtocolType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77792_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77792/* method */
	, &InternalEnumerator_1_t10850_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77792_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77793_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Net.SecurityProtocolType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77793_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77793/* method */
	, &InternalEnumerator_1_t10850_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77793_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityProtocolType_t2794_0_0_0;
extern void* RuntimeInvoker_SecurityProtocolType_t2794 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77794_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Net.SecurityProtocolType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77794_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77794/* method */
	, &InternalEnumerator_1_t10850_il2cpp_TypeInfo/* declaring_type */
	, &SecurityProtocolType_t2794_0_0_0/* return_type */
	, RuntimeInvoker_SecurityProtocolType_t2794/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77794_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10850_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77789_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77790_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77791_MethodInfo,
	&InternalEnumerator_1_Dispose_m77792_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77793_MethodInfo,
	&InternalEnumerator_1_get_Current_m77794_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10850_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77791_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77793_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77790_MethodInfo,
	&InternalEnumerator_1_Dispose_m77792_MethodInfo,
	&InternalEnumerator_1_get_Current_m77794_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10850_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12950_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10850_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12950_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10850_0_0_0;
extern Il2CppType InternalEnumerator_1_t10850_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10850_GenericClass;
TypeInfo InternalEnumerator_1_t10850_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10850_MethodInfos/* methods */
	, InternalEnumerator_1_t10850_PropertyInfos/* properties */
	, InternalEnumerator_1_t10850_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10850_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10850_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10850_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10850_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10850_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10850_1_0_0/* this_arg */
	, InternalEnumerator_1_t10850_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10850_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10850)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14427_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Net.SecurityProtocolType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.SecurityProtocolType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Net.SecurityProtocolType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Net.SecurityProtocolType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.SecurityProtocolType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Net.SecurityProtocolType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.SecurityProtocolType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Net.SecurityProtocolType>
extern MethodInfo ICollection_1_get_Count_m102765_MethodInfo;
static PropertyInfo ICollection_1_t14427____Count_PropertyInfo = 
{
	&ICollection_1_t14427_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102765_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102766_MethodInfo;
static PropertyInfo ICollection_1_t14427____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14427_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102766_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14427_PropertyInfos[] =
{
	&ICollection_1_t14427____Count_PropertyInfo,
	&ICollection_1_t14427____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102765_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Net.SecurityProtocolType>::get_Count()
MethodInfo ICollection_1_get_Count_m102765_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14427_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102765_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102766_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.SecurityProtocolType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102766_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14427_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102766_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityProtocolType_t2794_0_0_0;
extern Il2CppType SecurityProtocolType_t2794_0_0_0;
static ParameterInfo ICollection_1_t14427_ICollection_1_Add_m102767_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t2794_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102767_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Net.SecurityProtocolType>::Add(T)
MethodInfo ICollection_1_Add_m102767_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14427_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14427_ICollection_1_Add_m102767_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102767_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102768_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Net.SecurityProtocolType>::Clear()
MethodInfo ICollection_1_Clear_m102768_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14427_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102768_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityProtocolType_t2794_0_0_0;
static ParameterInfo ICollection_1_t14427_ICollection_1_Contains_m102769_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t2794_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102769_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.SecurityProtocolType>::Contains(T)
MethodInfo ICollection_1_Contains_m102769_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14427_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14427_ICollection_1_Contains_m102769_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102769_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityProtocolTypeU5BU5D_t11441_0_0_0;
extern Il2CppType SecurityProtocolTypeU5BU5D_t11441_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14427_ICollection_1_CopyTo_m102770_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolTypeU5BU5D_t11441_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102770_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Net.SecurityProtocolType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102770_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14427_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14427_ICollection_1_CopyTo_m102770_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102770_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityProtocolType_t2794_0_0_0;
static ParameterInfo ICollection_1_t14427_ICollection_1_Remove_m102771_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t2794_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102771_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.SecurityProtocolType>::Remove(T)
MethodInfo ICollection_1_Remove_m102771_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14427_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14427_ICollection_1_Remove_m102771_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102771_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14427_MethodInfos[] =
{
	&ICollection_1_get_Count_m102765_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102766_MethodInfo,
	&ICollection_1_Add_m102767_MethodInfo,
	&ICollection_1_Clear_m102768_MethodInfo,
	&ICollection_1_Contains_m102769_MethodInfo,
	&ICollection_1_CopyTo_m102770_MethodInfo,
	&ICollection_1_Remove_m102771_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14429_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14427_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14429_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14427_0_0_0;
extern Il2CppType ICollection_1_t14427_1_0_0;
struct ICollection_1_t14427;
extern Il2CppGenericClass ICollection_1_t14427_GenericClass;
TypeInfo ICollection_1_t14427_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14427_MethodInfos/* methods */
	, ICollection_1_t14427_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14427_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14427_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14427_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14427_0_0_0/* byval_arg */
	, &ICollection_1_t14427_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14427_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Net.SecurityProtocolType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Net.SecurityProtocolType>
extern Il2CppType IEnumerator_1_t12950_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102772_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Net.SecurityProtocolType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102772_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14429_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12950_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102772_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14429_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102772_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14429_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14429_0_0_0;
extern Il2CppType IEnumerable_1_t14429_1_0_0;
struct IEnumerable_1_t14429;
extern Il2CppGenericClass IEnumerable_1_t14429_GenericClass;
TypeInfo IEnumerable_1_t14429_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14429_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14429_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14429_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14429_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14429_0_0_0/* byval_arg */
	, &IEnumerable_1_t14429_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14429_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14428_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Net.SecurityProtocolType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Net.SecurityProtocolType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Net.SecurityProtocolType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Net.SecurityProtocolType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Net.SecurityProtocolType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Net.SecurityProtocolType>
extern MethodInfo IList_1_get_Item_m102773_MethodInfo;
extern MethodInfo IList_1_set_Item_m102774_MethodInfo;
static PropertyInfo IList_1_t14428____Item_PropertyInfo = 
{
	&IList_1_t14428_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102773_MethodInfo/* get */
	, &IList_1_set_Item_m102774_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14428_PropertyInfos[] =
{
	&IList_1_t14428____Item_PropertyInfo,
	NULL
};
extern Il2CppType SecurityProtocolType_t2794_0_0_0;
static ParameterInfo IList_1_t14428_IList_1_IndexOf_m102775_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t2794_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102775_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Net.SecurityProtocolType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102775_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14428_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14428_IList_1_IndexOf_m102775_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102775_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType SecurityProtocolType_t2794_0_0_0;
static ParameterInfo IList_1_t14428_IList_1_Insert_m102776_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t2794_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102776_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Net.SecurityProtocolType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102776_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14428_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14428_IList_1_Insert_m102776_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102776_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14428_IList_1_RemoveAt_m102777_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102777_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Net.SecurityProtocolType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102777_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14428_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14428_IList_1_RemoveAt_m102777_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102777_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14428_IList_1_get_Item_m102773_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType SecurityProtocolType_t2794_0_0_0;
extern void* RuntimeInvoker_SecurityProtocolType_t2794_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102773_GenericMethod;
// T System.Collections.Generic.IList`1<System.Net.SecurityProtocolType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102773_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14428_il2cpp_TypeInfo/* declaring_type */
	, &SecurityProtocolType_t2794_0_0_0/* return_type */
	, RuntimeInvoker_SecurityProtocolType_t2794_Int32_t23/* invoker_method */
	, IList_1_t14428_IList_1_get_Item_m102773_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102773_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType SecurityProtocolType_t2794_0_0_0;
static ParameterInfo IList_1_t14428_IList_1_set_Item_m102774_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t2794_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102774_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Net.SecurityProtocolType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102774_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14428_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14428_IList_1_set_Item_m102774_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102774_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14428_MethodInfos[] =
{
	&IList_1_IndexOf_m102775_MethodInfo,
	&IList_1_Insert_m102776_MethodInfo,
	&IList_1_RemoveAt_m102777_MethodInfo,
	&IList_1_get_Item_m102773_MethodInfo,
	&IList_1_set_Item_m102774_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14428_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14427_il2cpp_TypeInfo,
	&IEnumerable_1_t14429_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14428_0_0_0;
extern Il2CppType IList_1_t14428_1_0_0;
struct IList_1_t14428;
extern Il2CppGenericClass IList_1_t14428_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14428_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14428_MethodInfos/* methods */
	, IList_1_t14428_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14428_il2cpp_TypeInfo/* element_class */
	, IList_1_t14428_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14428_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14428_0_0_0/* byval_arg */
	, &IList_1_t14428_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14428_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12952_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>
extern MethodInfo IEnumerator_1_get_Current_m102778_MethodInfo;
static PropertyInfo IEnumerator_1_t12952____Current_PropertyInfo = 
{
	&IEnumerator_1_t12952_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102778_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12952_PropertyInfos[] =
{
	&IEnumerator_1_t12952____Current_PropertyInfo,
	NULL
};
extern Il2CppType OpenFlags_t2802_0_0_0;
extern void* RuntimeInvoker_OpenFlags_t2802 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102778_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102778_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12952_il2cpp_TypeInfo/* declaring_type */
	, &OpenFlags_t2802_0_0_0/* return_type */
	, RuntimeInvoker_OpenFlags_t2802/* invoker_method */
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
	, &IEnumerator_1_get_Current_m102778_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12952_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102778_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12952_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12952_0_0_0;
extern Il2CppType IEnumerator_1_t12952_1_0_0;
struct IEnumerator_1_t12952;
extern Il2CppGenericClass IEnumerator_1_t12952_GenericClass;
TypeInfo IEnumerator_1_t12952_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12952_MethodInfos/* methods */
	, IEnumerator_1_t12952_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12952_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12952_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12952_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12952_0_0_0/* byval_arg */
	, &IEnumerator_1_t12952_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12952_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10851_il2cpp_TypeInfo;

extern TypeInfo OpenFlags_t2802_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77800_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOpenFlags_t2802_m90492_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.OpenFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.OpenFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisOpenFlags_t2802_m90492 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77795_MethodInfo;
 void InternalEnumerator_1__ctor_m77795 (InternalEnumerator_1_t10851 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77796_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77796 (InternalEnumerator_1_t10851 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77797_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77797 (InternalEnumerator_1_t10851 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77800(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77800_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&OpenFlags_t2802_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77798_MethodInfo;
 void InternalEnumerator_1_Dispose_m77798 (InternalEnumerator_1_t10851 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77799_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77799 (InternalEnumerator_1_t10851 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77800 (InternalEnumerator_1_t10851 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisOpenFlags_t2802_m90492(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOpenFlags_t2802_m90492_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10851____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10851_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10851, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10851____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10851_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10851, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10851_FieldInfos[] =
{
	&InternalEnumerator_1_t10851____array_0_FieldInfo,
	&InternalEnumerator_1_t10851____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10851____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10851_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77797_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10851____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10851_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77800_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10851_PropertyInfos[] =
{
	&InternalEnumerator_1_t10851____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10851____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10851_InternalEnumerator_1__ctor_m77795_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77795_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77795_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77795/* method */
	, &InternalEnumerator_1_t10851_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10851_InternalEnumerator_1__ctor_m77795_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77795_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77796_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77796_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77796/* method */
	, &InternalEnumerator_1_t10851_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77796_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77797_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77797_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77797/* method */
	, &InternalEnumerator_1_t10851_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77797_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77798_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77798_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77798/* method */
	, &InternalEnumerator_1_t10851_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77798_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77799_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77799_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77799/* method */
	, &InternalEnumerator_1_t10851_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77799_GenericMethod/* genericMethod */

};
extern Il2CppType OpenFlags_t2802_0_0_0;
extern void* RuntimeInvoker_OpenFlags_t2802 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77800_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.OpenFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77800_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77800/* method */
	, &InternalEnumerator_1_t10851_il2cpp_TypeInfo/* declaring_type */
	, &OpenFlags_t2802_0_0_0/* return_type */
	, RuntimeInvoker_OpenFlags_t2802/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77800_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10851_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77795_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77796_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77797_MethodInfo,
	&InternalEnumerator_1_Dispose_m77798_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77799_MethodInfo,
	&InternalEnumerator_1_get_Current_m77800_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10851_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77797_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77799_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77796_MethodInfo,
	&InternalEnumerator_1_Dispose_m77798_MethodInfo,
	&InternalEnumerator_1_get_Current_m77800_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10851_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12952_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10851_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12952_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10851_0_0_0;
extern Il2CppType InternalEnumerator_1_t10851_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10851_GenericClass;
TypeInfo InternalEnumerator_1_t10851_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10851_MethodInfos/* methods */
	, InternalEnumerator_1_t10851_PropertyInfos/* properties */
	, InternalEnumerator_1_t10851_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10851_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10851_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10851_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10851_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10851_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10851_1_0_0/* this_arg */
	, InternalEnumerator_1_t10851_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10851_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10851)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14430_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.OpenFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.OpenFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.OpenFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.OpenFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.OpenFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.OpenFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.OpenFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.OpenFlags>
extern MethodInfo ICollection_1_get_Count_m102779_MethodInfo;
static PropertyInfo ICollection_1_t14430____Count_PropertyInfo = 
{
	&ICollection_1_t14430_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102779_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102780_MethodInfo;
static PropertyInfo ICollection_1_t14430____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14430_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102780_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14430_PropertyInfos[] =
{
	&ICollection_1_t14430____Count_PropertyInfo,
	&ICollection_1_t14430____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102779_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.OpenFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m102779_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14430_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102779_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102780_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.OpenFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102780_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14430_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102780_GenericMethod/* genericMethod */

};
extern Il2CppType OpenFlags_t2802_0_0_0;
extern Il2CppType OpenFlags_t2802_0_0_0;
static ParameterInfo ICollection_1_t14430_ICollection_1_Add_m102781_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpenFlags_t2802_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102781_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.OpenFlags>::Add(T)
MethodInfo ICollection_1_Add_m102781_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14430_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14430_ICollection_1_Add_m102781_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102781_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102782_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.OpenFlags>::Clear()
MethodInfo ICollection_1_Clear_m102782_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14430_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102782_GenericMethod/* genericMethod */

};
extern Il2CppType OpenFlags_t2802_0_0_0;
static ParameterInfo ICollection_1_t14430_ICollection_1_Contains_m102783_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpenFlags_t2802_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102783_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.OpenFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m102783_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14430_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14430_ICollection_1_Contains_m102783_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102783_GenericMethod/* genericMethod */

};
extern Il2CppType OpenFlagsU5BU5D_t11442_0_0_0;
extern Il2CppType OpenFlagsU5BU5D_t11442_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14430_ICollection_1_CopyTo_m102784_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OpenFlagsU5BU5D_t11442_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102784_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.OpenFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102784_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14430_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14430_ICollection_1_CopyTo_m102784_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102784_GenericMethod/* genericMethod */

};
extern Il2CppType OpenFlags_t2802_0_0_0;
static ParameterInfo ICollection_1_t14430_ICollection_1_Remove_m102785_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpenFlags_t2802_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102785_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.OpenFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m102785_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14430_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14430_ICollection_1_Remove_m102785_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102785_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14430_MethodInfos[] =
{
	&ICollection_1_get_Count_m102779_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102780_MethodInfo,
	&ICollection_1_Add_m102781_MethodInfo,
	&ICollection_1_Clear_m102782_MethodInfo,
	&ICollection_1_Contains_m102783_MethodInfo,
	&ICollection_1_CopyTo_m102784_MethodInfo,
	&ICollection_1_Remove_m102785_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14432_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14430_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14432_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14430_0_0_0;
extern Il2CppType ICollection_1_t14430_1_0_0;
struct ICollection_1_t14430;
extern Il2CppGenericClass ICollection_1_t14430_GenericClass;
TypeInfo ICollection_1_t14430_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14430_MethodInfos/* methods */
	, ICollection_1_t14430_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14430_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14430_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14430_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14430_0_0_0/* byval_arg */
	, &ICollection_1_t14430_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14430_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.OpenFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.OpenFlags>
extern Il2CppType IEnumerator_1_t12952_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102786_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.OpenFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102786_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14432_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12952_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102786_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14432_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102786_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14432_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14432_0_0_0;
extern Il2CppType IEnumerable_1_t14432_1_0_0;
struct IEnumerable_1_t14432;
extern Il2CppGenericClass IEnumerable_1_t14432_GenericClass;
TypeInfo IEnumerable_1_t14432_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14432_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14432_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14432_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14432_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14432_0_0_0/* byval_arg */
	, &IEnumerable_1_t14432_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14432_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14431_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.OpenFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.OpenFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.OpenFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.OpenFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.OpenFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.OpenFlags>
extern MethodInfo IList_1_get_Item_m102787_MethodInfo;
extern MethodInfo IList_1_set_Item_m102788_MethodInfo;
static PropertyInfo IList_1_t14431____Item_PropertyInfo = 
{
	&IList_1_t14431_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102787_MethodInfo/* get */
	, &IList_1_set_Item_m102788_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14431_PropertyInfos[] =
{
	&IList_1_t14431____Item_PropertyInfo,
	NULL
};
extern Il2CppType OpenFlags_t2802_0_0_0;
static ParameterInfo IList_1_t14431_IList_1_IndexOf_m102789_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpenFlags_t2802_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102789_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.OpenFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102789_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14431_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14431_IList_1_IndexOf_m102789_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102789_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType OpenFlags_t2802_0_0_0;
static ParameterInfo IList_1_t14431_IList_1_Insert_m102790_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OpenFlags_t2802_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102790_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.OpenFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102790_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14431_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14431_IList_1_Insert_m102790_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102790_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14431_IList_1_RemoveAt_m102791_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102791_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.OpenFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102791_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14431_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14431_IList_1_RemoveAt_m102791_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102791_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14431_IList_1_get_Item_m102787_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType OpenFlags_t2802_0_0_0;
extern void* RuntimeInvoker_OpenFlags_t2802_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102787_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.OpenFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102787_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14431_il2cpp_TypeInfo/* declaring_type */
	, &OpenFlags_t2802_0_0_0/* return_type */
	, RuntimeInvoker_OpenFlags_t2802_Int32_t23/* invoker_method */
	, IList_1_t14431_IList_1_get_Item_m102787_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102787_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType OpenFlags_t2802_0_0_0;
static ParameterInfo IList_1_t14431_IList_1_set_Item_m102788_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OpenFlags_t2802_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102788_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.OpenFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102788_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14431_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14431_IList_1_set_Item_m102788_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102788_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14431_MethodInfos[] =
{
	&IList_1_IndexOf_m102789_MethodInfo,
	&IList_1_Insert_m102790_MethodInfo,
	&IList_1_RemoveAt_m102791_MethodInfo,
	&IList_1_get_Item_m102787_MethodInfo,
	&IList_1_set_Item_m102788_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14431_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14430_il2cpp_TypeInfo,
	&IEnumerable_1_t14432_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14431_0_0_0;
extern Il2CppType IList_1_t14431_1_0_0;
struct IList_1_t14431;
extern Il2CppGenericClass IList_1_t14431_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14431_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14431_MethodInfos/* methods */
	, IList_1_t14431_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14431_il2cpp_TypeInfo/* element_class */
	, IList_1_t14431_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14431_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14431_0_0_0/* byval_arg */
	, &IList_1_t14431_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14431_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12954_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>
extern MethodInfo IEnumerator_1_get_Current_m102792_MethodInfo;
static PropertyInfo IEnumerator_1_t12954____Current_PropertyInfo = 
{
	&IEnumerator_1_t12954_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102792_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12954_PropertyInfos[] =
{
	&IEnumerator_1_t12954____Current_PropertyInfo,
	NULL
};
extern Il2CppType StoreLocation_t2810_0_0_0;
extern void* RuntimeInvoker_StoreLocation_t2810 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102792_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102792_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12954_il2cpp_TypeInfo/* declaring_type */
	, &StoreLocation_t2810_0_0_0/* return_type */
	, RuntimeInvoker_StoreLocation_t2810/* invoker_method */
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
	, &IEnumerator_1_get_Current_m102792_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12954_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102792_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12954_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12954_0_0_0;
extern Il2CppType IEnumerator_1_t12954_1_0_0;
struct IEnumerator_1_t12954;
extern Il2CppGenericClass IEnumerator_1_t12954_GenericClass;
TypeInfo IEnumerator_1_t12954_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12954_MethodInfos/* methods */
	, IEnumerator_1_t12954_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12954_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12954_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12954_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12954_0_0_0/* byval_arg */
	, &IEnumerator_1_t12954_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12954_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10852_il2cpp_TypeInfo;

extern TypeInfo StoreLocation_t2810_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77806_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStoreLocation_t2810_m90503_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.StoreLocation>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.StoreLocation>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisStoreLocation_t2810_m90503 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77801_MethodInfo;
 void InternalEnumerator_1__ctor_m77801 (InternalEnumerator_1_t10852 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77802_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77802 (InternalEnumerator_1_t10852 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77803_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77803 (InternalEnumerator_1_t10852 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77806(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77806_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&StoreLocation_t2810_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77804_MethodInfo;
 void InternalEnumerator_1_Dispose_m77804 (InternalEnumerator_1_t10852 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77805_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77805 (InternalEnumerator_1_t10852 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77806 (InternalEnumerator_1_t10852 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisStoreLocation_t2810_m90503(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisStoreLocation_t2810_m90503_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10852____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10852_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10852, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10852____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10852_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10852, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10852_FieldInfos[] =
{
	&InternalEnumerator_1_t10852____array_0_FieldInfo,
	&InternalEnumerator_1_t10852____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10852____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10852_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77803_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10852____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10852_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77806_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10852_PropertyInfos[] =
{
	&InternalEnumerator_1_t10852____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10852____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10852_InternalEnumerator_1__ctor_m77801_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77801_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77801_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77801/* method */
	, &InternalEnumerator_1_t10852_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10852_InternalEnumerator_1__ctor_m77801_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77801_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77802_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77802_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77802/* method */
	, &InternalEnumerator_1_t10852_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77802_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77803_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77803_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77803/* method */
	, &InternalEnumerator_1_t10852_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77803_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77804_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77804_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77804/* method */
	, &InternalEnumerator_1_t10852_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77804_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77805_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77805_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77805/* method */
	, &InternalEnumerator_1_t10852_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77805_GenericMethod/* genericMethod */

};
extern Il2CppType StoreLocation_t2810_0_0_0;
extern void* RuntimeInvoker_StoreLocation_t2810 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77806_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreLocation>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77806_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77806/* method */
	, &InternalEnumerator_1_t10852_il2cpp_TypeInfo/* declaring_type */
	, &StoreLocation_t2810_0_0_0/* return_type */
	, RuntimeInvoker_StoreLocation_t2810/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77806_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10852_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77801_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77802_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77803_MethodInfo,
	&InternalEnumerator_1_Dispose_m77804_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77805_MethodInfo,
	&InternalEnumerator_1_get_Current_m77806_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10852_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77803_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77805_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77802_MethodInfo,
	&InternalEnumerator_1_Dispose_m77804_MethodInfo,
	&InternalEnumerator_1_get_Current_m77806_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10852_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12954_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10852_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12954_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10852_0_0_0;
extern Il2CppType InternalEnumerator_1_t10852_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10852_GenericClass;
TypeInfo InternalEnumerator_1_t10852_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10852_MethodInfos/* methods */
	, InternalEnumerator_1_t10852_PropertyInfos/* properties */
	, InternalEnumerator_1_t10852_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10852_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10852_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10852_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10852_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10852_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10852_1_0_0/* this_arg */
	, InternalEnumerator_1_t10852_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10852_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10852)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14433_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreLocation>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreLocation>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreLocation>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreLocation>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreLocation>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreLocation>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreLocation>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreLocation>
extern MethodInfo ICollection_1_get_Count_m102793_MethodInfo;
static PropertyInfo ICollection_1_t14433____Count_PropertyInfo = 
{
	&ICollection_1_t14433_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102793_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102794_MethodInfo;
static PropertyInfo ICollection_1_t14433____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14433_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102794_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14433_PropertyInfos[] =
{
	&ICollection_1_t14433____Count_PropertyInfo,
	&ICollection_1_t14433____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102793_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreLocation>::get_Count()
MethodInfo ICollection_1_get_Count_m102793_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14433_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102793_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102794_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreLocation>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102794_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14433_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102794_GenericMethod/* genericMethod */

};
extern Il2CppType StoreLocation_t2810_0_0_0;
extern Il2CppType StoreLocation_t2810_0_0_0;
static ParameterInfo ICollection_1_t14433_ICollection_1_Add_m102795_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StoreLocation_t2810_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102795_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreLocation>::Add(T)
MethodInfo ICollection_1_Add_m102795_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14433_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14433_ICollection_1_Add_m102795_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102795_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102796_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreLocation>::Clear()
MethodInfo ICollection_1_Clear_m102796_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14433_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102796_GenericMethod/* genericMethod */

};
extern Il2CppType StoreLocation_t2810_0_0_0;
static ParameterInfo ICollection_1_t14433_ICollection_1_Contains_m102797_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StoreLocation_t2810_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102797_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreLocation>::Contains(T)
MethodInfo ICollection_1_Contains_m102797_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14433_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14433_ICollection_1_Contains_m102797_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102797_GenericMethod/* genericMethod */

};
extern Il2CppType StoreLocationU5BU5D_t11443_0_0_0;
extern Il2CppType StoreLocationU5BU5D_t11443_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14433_ICollection_1_CopyTo_m102798_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StoreLocationU5BU5D_t11443_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102798_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreLocation>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102798_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14433_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14433_ICollection_1_CopyTo_m102798_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102798_GenericMethod/* genericMethod */

};
extern Il2CppType StoreLocation_t2810_0_0_0;
static ParameterInfo ICollection_1_t14433_ICollection_1_Remove_m102799_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StoreLocation_t2810_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102799_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreLocation>::Remove(T)
MethodInfo ICollection_1_Remove_m102799_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14433_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14433_ICollection_1_Remove_m102799_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102799_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14433_MethodInfos[] =
{
	&ICollection_1_get_Count_m102793_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102794_MethodInfo,
	&ICollection_1_Add_m102795_MethodInfo,
	&ICollection_1_Clear_m102796_MethodInfo,
	&ICollection_1_Contains_m102797_MethodInfo,
	&ICollection_1_CopyTo_m102798_MethodInfo,
	&ICollection_1_Remove_m102799_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14435_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14433_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14435_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14433_0_0_0;
extern Il2CppType ICollection_1_t14433_1_0_0;
struct ICollection_1_t14433;
extern Il2CppGenericClass ICollection_1_t14433_GenericClass;
TypeInfo ICollection_1_t14433_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14433_MethodInfos/* methods */
	, ICollection_1_t14433_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14433_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14433_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14433_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14433_0_0_0/* byval_arg */
	, &ICollection_1_t14433_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14433_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.StoreLocation>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.StoreLocation>
extern Il2CppType IEnumerator_1_t12954_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102800_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.StoreLocation>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102800_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14435_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12954_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102800_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14435_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102800_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14435_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14435_0_0_0;
extern Il2CppType IEnumerable_1_t14435_1_0_0;
struct IEnumerable_1_t14435;
extern Il2CppGenericClass IEnumerable_1_t14435_GenericClass;
TypeInfo IEnumerable_1_t14435_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14435_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14435_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14435_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14435_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14435_0_0_0/* byval_arg */
	, &IEnumerable_1_t14435_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14435_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14434_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreLocation>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreLocation>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreLocation>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreLocation>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreLocation>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreLocation>
extern MethodInfo IList_1_get_Item_m102801_MethodInfo;
extern MethodInfo IList_1_set_Item_m102802_MethodInfo;
static PropertyInfo IList_1_t14434____Item_PropertyInfo = 
{
	&IList_1_t14434_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102801_MethodInfo/* get */
	, &IList_1_set_Item_m102802_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14434_PropertyInfos[] =
{
	&IList_1_t14434____Item_PropertyInfo,
	NULL
};
extern Il2CppType StoreLocation_t2810_0_0_0;
static ParameterInfo IList_1_t14434_IList_1_IndexOf_m102803_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StoreLocation_t2810_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102803_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreLocation>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102803_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14434_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14434_IList_1_IndexOf_m102803_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102803_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType StoreLocation_t2810_0_0_0;
static ParameterInfo IList_1_t14434_IList_1_Insert_m102804_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &StoreLocation_t2810_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102804_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreLocation>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102804_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14434_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14434_IList_1_Insert_m102804_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102804_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14434_IList_1_RemoveAt_m102805_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102805_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreLocation>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102805_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14434_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14434_IList_1_RemoveAt_m102805_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102805_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14434_IList_1_get_Item_m102801_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType StoreLocation_t2810_0_0_0;
extern void* RuntimeInvoker_StoreLocation_t2810_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102801_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreLocation>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102801_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14434_il2cpp_TypeInfo/* declaring_type */
	, &StoreLocation_t2810_0_0_0/* return_type */
	, RuntimeInvoker_StoreLocation_t2810_Int32_t23/* invoker_method */
	, IList_1_t14434_IList_1_get_Item_m102801_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102801_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType StoreLocation_t2810_0_0_0;
static ParameterInfo IList_1_t14434_IList_1_set_Item_m102802_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &StoreLocation_t2810_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102802_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreLocation>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102802_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14434_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14434_IList_1_set_Item_m102802_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102802_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14434_MethodInfos[] =
{
	&IList_1_IndexOf_m102803_MethodInfo,
	&IList_1_Insert_m102804_MethodInfo,
	&IList_1_RemoveAt_m102805_MethodInfo,
	&IList_1_get_Item_m102801_MethodInfo,
	&IList_1_set_Item_m102802_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14434_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14433_il2cpp_TypeInfo,
	&IEnumerable_1_t14435_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14434_0_0_0;
extern Il2CppType IList_1_t14434_1_0_0;
struct IList_1_t14434;
extern Il2CppGenericClass IList_1_t14434_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14434_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14434_MethodInfos/* methods */
	, IList_1_t14434_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14434_il2cpp_TypeInfo/* element_class */
	, IList_1_t14434_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14434_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14434_0_0_0/* byval_arg */
	, &IList_1_t14434_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14434_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12956_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>
extern MethodInfo IEnumerator_1_get_Current_m102806_MethodInfo;
static PropertyInfo IEnumerator_1_t12956____Current_PropertyInfo = 
{
	&IEnumerator_1_t12956_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102806_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12956_PropertyInfos[] =
{
	&IEnumerator_1_t12956____Current_PropertyInfo,
	NULL
};
extern Il2CppType StoreName_t2811_0_0_0;
extern void* RuntimeInvoker_StoreName_t2811 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102806_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102806_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12956_il2cpp_TypeInfo/* declaring_type */
	, &StoreName_t2811_0_0_0/* return_type */
	, RuntimeInvoker_StoreName_t2811/* invoker_method */
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
	, &IEnumerator_1_get_Current_m102806_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12956_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102806_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12956_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12956_0_0_0;
extern Il2CppType IEnumerator_1_t12956_1_0_0;
struct IEnumerator_1_t12956;
extern Il2CppGenericClass IEnumerator_1_t12956_GenericClass;
TypeInfo IEnumerator_1_t12956_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12956_MethodInfos/* methods */
	, IEnumerator_1_t12956_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12956_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12956_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12956_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12956_0_0_0/* byval_arg */
	, &IEnumerator_1_t12956_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12956_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10853_il2cpp_TypeInfo;

extern TypeInfo StoreName_t2811_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77812_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStoreName_t2811_m90514_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.StoreName>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.StoreName>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisStoreName_t2811_m90514 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77807_MethodInfo;
 void InternalEnumerator_1__ctor_m77807 (InternalEnumerator_1_t10853 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77808_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77808 (InternalEnumerator_1_t10853 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77809_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77809 (InternalEnumerator_1_t10853 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77812(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77812_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&StoreName_t2811_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77810_MethodInfo;
 void InternalEnumerator_1_Dispose_m77810 (InternalEnumerator_1_t10853 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77811_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77811 (InternalEnumerator_1_t10853 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77812 (InternalEnumerator_1_t10853 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisStoreName_t2811_m90514(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisStoreName_t2811_m90514_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10853____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10853_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10853, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10853____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10853_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10853, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10853_FieldInfos[] =
{
	&InternalEnumerator_1_t10853____array_0_FieldInfo,
	&InternalEnumerator_1_t10853____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10853____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10853_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77809_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10853____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10853_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77812_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10853_PropertyInfos[] =
{
	&InternalEnumerator_1_t10853____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10853____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10853_InternalEnumerator_1__ctor_m77807_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77807_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77807_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77807/* method */
	, &InternalEnumerator_1_t10853_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10853_InternalEnumerator_1__ctor_m77807_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77807_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77808_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77808_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77808/* method */
	, &InternalEnumerator_1_t10853_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77808_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77809_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77809_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77809/* method */
	, &InternalEnumerator_1_t10853_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77809_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77810_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77810_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77810/* method */
	, &InternalEnumerator_1_t10853_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77810_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77811_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77811_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77811/* method */
	, &InternalEnumerator_1_t10853_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77811_GenericMethod/* genericMethod */

};
extern Il2CppType StoreName_t2811_0_0_0;
extern void* RuntimeInvoker_StoreName_t2811 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77812_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.StoreName>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77812_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77812/* method */
	, &InternalEnumerator_1_t10853_il2cpp_TypeInfo/* declaring_type */
	, &StoreName_t2811_0_0_0/* return_type */
	, RuntimeInvoker_StoreName_t2811/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77812_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10853_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77807_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77808_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77809_MethodInfo,
	&InternalEnumerator_1_Dispose_m77810_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77811_MethodInfo,
	&InternalEnumerator_1_get_Current_m77812_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10853_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77809_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77811_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77808_MethodInfo,
	&InternalEnumerator_1_Dispose_m77810_MethodInfo,
	&InternalEnumerator_1_get_Current_m77812_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10853_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12956_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10853_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12956_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10853_0_0_0;
extern Il2CppType InternalEnumerator_1_t10853_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10853_GenericClass;
TypeInfo InternalEnumerator_1_t10853_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10853_MethodInfos/* methods */
	, InternalEnumerator_1_t10853_PropertyInfos/* properties */
	, InternalEnumerator_1_t10853_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10853_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10853_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10853_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10853_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10853_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10853_1_0_0/* this_arg */
	, InternalEnumerator_1_t10853_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10853_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10853)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14436_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreName>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreName>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreName>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreName>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreName>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreName>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreName>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreName>
extern MethodInfo ICollection_1_get_Count_m102807_MethodInfo;
static PropertyInfo ICollection_1_t14436____Count_PropertyInfo = 
{
	&ICollection_1_t14436_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102807_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102808_MethodInfo;
static PropertyInfo ICollection_1_t14436____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14436_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102808_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14436_PropertyInfos[] =
{
	&ICollection_1_t14436____Count_PropertyInfo,
	&ICollection_1_t14436____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102807_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreName>::get_Count()
MethodInfo ICollection_1_get_Count_m102807_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14436_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102807_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102808_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreName>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102808_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14436_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102808_GenericMethod/* genericMethod */

};
extern Il2CppType StoreName_t2811_0_0_0;
extern Il2CppType StoreName_t2811_0_0_0;
static ParameterInfo ICollection_1_t14436_ICollection_1_Add_m102809_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StoreName_t2811_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102809_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreName>::Add(T)
MethodInfo ICollection_1_Add_m102809_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14436_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14436_ICollection_1_Add_m102809_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102809_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102810_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreName>::Clear()
MethodInfo ICollection_1_Clear_m102810_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14436_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102810_GenericMethod/* genericMethod */

};
extern Il2CppType StoreName_t2811_0_0_0;
static ParameterInfo ICollection_1_t14436_ICollection_1_Contains_m102811_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StoreName_t2811_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102811_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreName>::Contains(T)
MethodInfo ICollection_1_Contains_m102811_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14436_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14436_ICollection_1_Contains_m102811_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102811_GenericMethod/* genericMethod */

};
extern Il2CppType StoreNameU5BU5D_t11444_0_0_0;
extern Il2CppType StoreNameU5BU5D_t11444_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14436_ICollection_1_CopyTo_m102812_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StoreNameU5BU5D_t11444_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102812_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreName>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102812_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14436_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14436_ICollection_1_CopyTo_m102812_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102812_GenericMethod/* genericMethod */

};
extern Il2CppType StoreName_t2811_0_0_0;
static ParameterInfo ICollection_1_t14436_ICollection_1_Remove_m102813_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StoreName_t2811_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102813_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.StoreName>::Remove(T)
MethodInfo ICollection_1_Remove_m102813_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14436_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14436_ICollection_1_Remove_m102813_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102813_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14436_MethodInfos[] =
{
	&ICollection_1_get_Count_m102807_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102808_MethodInfo,
	&ICollection_1_Add_m102809_MethodInfo,
	&ICollection_1_Clear_m102810_MethodInfo,
	&ICollection_1_Contains_m102811_MethodInfo,
	&ICollection_1_CopyTo_m102812_MethodInfo,
	&ICollection_1_Remove_m102813_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14438_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14436_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14438_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14436_0_0_0;
extern Il2CppType ICollection_1_t14436_1_0_0;
struct ICollection_1_t14436;
extern Il2CppGenericClass ICollection_1_t14436_GenericClass;
TypeInfo ICollection_1_t14436_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14436_MethodInfos/* methods */
	, ICollection_1_t14436_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14436_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14436_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14436_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14436_0_0_0/* byval_arg */
	, &ICollection_1_t14436_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14436_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.StoreName>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.StoreName>
extern Il2CppType IEnumerator_1_t12956_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102814_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.StoreName>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102814_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14438_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12956_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102814_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14438_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102814_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14438_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14438_0_0_0;
extern Il2CppType IEnumerable_1_t14438_1_0_0;
struct IEnumerable_1_t14438;
extern Il2CppGenericClass IEnumerable_1_t14438_GenericClass;
TypeInfo IEnumerable_1_t14438_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14438_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14438_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14438_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14438_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14438_0_0_0/* byval_arg */
	, &IEnumerable_1_t14438_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14438_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14437_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreName>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreName>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreName>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreName>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreName>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreName>
extern MethodInfo IList_1_get_Item_m102815_MethodInfo;
extern MethodInfo IList_1_set_Item_m102816_MethodInfo;
static PropertyInfo IList_1_t14437____Item_PropertyInfo = 
{
	&IList_1_t14437_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102815_MethodInfo/* get */
	, &IList_1_set_Item_m102816_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14437_PropertyInfos[] =
{
	&IList_1_t14437____Item_PropertyInfo,
	NULL
};
extern Il2CppType StoreName_t2811_0_0_0;
static ParameterInfo IList_1_t14437_IList_1_IndexOf_m102817_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StoreName_t2811_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102817_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreName>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102817_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14437_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14437_IList_1_IndexOf_m102817_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102817_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType StoreName_t2811_0_0_0;
static ParameterInfo IList_1_t14437_IList_1_Insert_m102818_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &StoreName_t2811_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102818_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreName>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102818_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14437_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14437_IList_1_Insert_m102818_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102818_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14437_IList_1_RemoveAt_m102819_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102819_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreName>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102819_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14437_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14437_IList_1_RemoveAt_m102819_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102819_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14437_IList_1_get_Item_m102815_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType StoreName_t2811_0_0_0;
extern void* RuntimeInvoker_StoreName_t2811_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102815_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreName>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102815_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14437_il2cpp_TypeInfo/* declaring_type */
	, &StoreName_t2811_0_0_0/* return_type */
	, RuntimeInvoker_StoreName_t2811_Int32_t23/* invoker_method */
	, IList_1_t14437_IList_1_get_Item_m102815_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102815_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType StoreName_t2811_0_0_0;
static ParameterInfo IList_1_t14437_IList_1_set_Item_m102816_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &StoreName_t2811_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102816_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.StoreName>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102816_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14437_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14437_IList_1_set_Item_m102816_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102816_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14437_MethodInfos[] =
{
	&IList_1_IndexOf_m102817_MethodInfo,
	&IList_1_Insert_m102818_MethodInfo,
	&IList_1_RemoveAt_m102819_MethodInfo,
	&IList_1_get_Item_m102815_MethodInfo,
	&IList_1_set_Item_m102816_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14437_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14436_il2cpp_TypeInfo,
	&IEnumerable_1_t14438_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14437_0_0_0;
extern Il2CppType IList_1_t14437_1_0_0;
struct IList_1_t14437;
extern Il2CppGenericClass IList_1_t14437_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14437_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14437_MethodInfos/* methods */
	, IList_1_t14437_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14437_il2cpp_TypeInfo/* element_class */
	, IList_1_t14437_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14437_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14437_0_0_0/* byval_arg */
	, &IList_1_t14437_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14437_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12958_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>
extern MethodInfo IEnumerator_1_get_Current_m102820_MethodInfo;
static PropertyInfo IEnumerator_1_t12958____Current_PropertyInfo = 
{
	&IEnumerator_1_t12958_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102820_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12958_PropertyInfos[] =
{
	&IEnumerator_1_t12958____Current_PropertyInfo,
	NULL
};
extern Il2CppType X500DistinguishedNameFlags_t2813_0_0_0;
extern void* RuntimeInvoker_X500DistinguishedNameFlags_t2813 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102820_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102820_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12958_il2cpp_TypeInfo/* declaring_type */
	, &X500DistinguishedNameFlags_t2813_0_0_0/* return_type */
	, RuntimeInvoker_X500DistinguishedNameFlags_t2813/* invoker_method */
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
	, &IEnumerator_1_get_Current_m102820_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12958_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102820_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12958_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12958_0_0_0;
extern Il2CppType IEnumerator_1_t12958_1_0_0;
struct IEnumerator_1_t12958;
extern Il2CppGenericClass IEnumerator_1_t12958_GenericClass;
TypeInfo IEnumerator_1_t12958_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12958_MethodInfos/* methods */
	, IEnumerator_1_t12958_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12958_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12958_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12958_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12958_0_0_0/* byval_arg */
	, &IEnumerator_1_t12958_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12958_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10854_il2cpp_TypeInfo;

extern TypeInfo X500DistinguishedNameFlags_t2813_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77818_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisX500DistinguishedNameFlags_t2813_m90525_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisX500DistinguishedNameFlags_t2813_m90525 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77813_MethodInfo;
 void InternalEnumerator_1__ctor_m77813 (InternalEnumerator_1_t10854 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77814_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77814 (InternalEnumerator_1_t10854 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77815_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77815 (InternalEnumerator_1_t10854 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77818(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77818_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&X500DistinguishedNameFlags_t2813_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77816_MethodInfo;
 void InternalEnumerator_1_Dispose_m77816 (InternalEnumerator_1_t10854 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77817_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77817 (InternalEnumerator_1_t10854 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77818 (InternalEnumerator_1_t10854 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisX500DistinguishedNameFlags_t2813_m90525(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisX500DistinguishedNameFlags_t2813_m90525_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10854____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10854_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10854, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10854____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10854_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10854, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10854_FieldInfos[] =
{
	&InternalEnumerator_1_t10854____array_0_FieldInfo,
	&InternalEnumerator_1_t10854____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10854____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10854_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77815_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10854____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10854_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77818_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10854_PropertyInfos[] =
{
	&InternalEnumerator_1_t10854____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10854____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10854_InternalEnumerator_1__ctor_m77813_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77813_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77813_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77813/* method */
	, &InternalEnumerator_1_t10854_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10854_InternalEnumerator_1__ctor_m77813_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77813_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77814_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77814_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77814/* method */
	, &InternalEnumerator_1_t10854_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77814_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77815_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77815_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77815/* method */
	, &InternalEnumerator_1_t10854_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77815_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77816_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77816_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77816/* method */
	, &InternalEnumerator_1_t10854_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77816_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77817_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77817_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77817/* method */
	, &InternalEnumerator_1_t10854_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77817_GenericMethod/* genericMethod */

};
extern Il2CppType X500DistinguishedNameFlags_t2813_0_0_0;
extern void* RuntimeInvoker_X500DistinguishedNameFlags_t2813 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77818_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77818_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77818/* method */
	, &InternalEnumerator_1_t10854_il2cpp_TypeInfo/* declaring_type */
	, &X500DistinguishedNameFlags_t2813_0_0_0/* return_type */
	, RuntimeInvoker_X500DistinguishedNameFlags_t2813/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77818_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10854_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77813_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77814_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77815_MethodInfo,
	&InternalEnumerator_1_Dispose_m77816_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77817_MethodInfo,
	&InternalEnumerator_1_get_Current_m77818_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10854_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77815_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77817_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77814_MethodInfo,
	&InternalEnumerator_1_Dispose_m77816_MethodInfo,
	&InternalEnumerator_1_get_Current_m77818_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10854_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12958_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10854_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12958_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10854_0_0_0;
extern Il2CppType InternalEnumerator_1_t10854_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10854_GenericClass;
TypeInfo InternalEnumerator_1_t10854_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10854_MethodInfos/* methods */
	, InternalEnumerator_1_t10854_PropertyInfos/* properties */
	, InternalEnumerator_1_t10854_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10854_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10854_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10854_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10854_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10854_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10854_1_0_0/* this_arg */
	, InternalEnumerator_1_t10854_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10854_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10854)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14439_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>
extern MethodInfo ICollection_1_get_Count_m102821_MethodInfo;
static PropertyInfo ICollection_1_t14439____Count_PropertyInfo = 
{
	&ICollection_1_t14439_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102821_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102822_MethodInfo;
static PropertyInfo ICollection_1_t14439____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14439_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102822_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14439_PropertyInfos[] =
{
	&ICollection_1_t14439____Count_PropertyInfo,
	&ICollection_1_t14439____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102821_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m102821_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14439_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102821_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102822_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102822_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14439_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102822_GenericMethod/* genericMethod */

};
extern Il2CppType X500DistinguishedNameFlags_t2813_0_0_0;
extern Il2CppType X500DistinguishedNameFlags_t2813_0_0_0;
static ParameterInfo ICollection_1_t14439_ICollection_1_Add_m102823_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X500DistinguishedNameFlags_t2813_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102823_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::Add(T)
MethodInfo ICollection_1_Add_m102823_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14439_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14439_ICollection_1_Add_m102823_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102823_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102824_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::Clear()
MethodInfo ICollection_1_Clear_m102824_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14439_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102824_GenericMethod/* genericMethod */

};
extern Il2CppType X500DistinguishedNameFlags_t2813_0_0_0;
static ParameterInfo ICollection_1_t14439_ICollection_1_Contains_m102825_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X500DistinguishedNameFlags_t2813_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102825_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m102825_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14439_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14439_ICollection_1_Contains_m102825_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102825_GenericMethod/* genericMethod */

};
extern Il2CppType X500DistinguishedNameFlagsU5BU5D_t11445_0_0_0;
extern Il2CppType X500DistinguishedNameFlagsU5BU5D_t11445_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14439_ICollection_1_CopyTo_m102826_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &X500DistinguishedNameFlagsU5BU5D_t11445_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102826_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102826_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14439_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14439_ICollection_1_CopyTo_m102826_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102826_GenericMethod/* genericMethod */

};
extern Il2CppType X500DistinguishedNameFlags_t2813_0_0_0;
static ParameterInfo ICollection_1_t14439_ICollection_1_Remove_m102827_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X500DistinguishedNameFlags_t2813_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102827_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m102827_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14439_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14439_ICollection_1_Remove_m102827_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102827_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14439_MethodInfos[] =
{
	&ICollection_1_get_Count_m102821_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102822_MethodInfo,
	&ICollection_1_Add_m102823_MethodInfo,
	&ICollection_1_Clear_m102824_MethodInfo,
	&ICollection_1_Contains_m102825_MethodInfo,
	&ICollection_1_CopyTo_m102826_MethodInfo,
	&ICollection_1_Remove_m102827_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14441_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14439_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14441_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14439_0_0_0;
extern Il2CppType ICollection_1_t14439_1_0_0;
struct ICollection_1_t14439;
extern Il2CppGenericClass ICollection_1_t14439_GenericClass;
TypeInfo ICollection_1_t14439_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14439_MethodInfos/* methods */
	, ICollection_1_t14439_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14439_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14439_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14439_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14439_0_0_0/* byval_arg */
	, &ICollection_1_t14439_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14439_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>
extern Il2CppType IEnumerator_1_t12958_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102828_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102828_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14441_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12958_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102828_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14441_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102828_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14441_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14441_0_0_0;
extern Il2CppType IEnumerable_1_t14441_1_0_0;
struct IEnumerable_1_t14441;
extern Il2CppGenericClass IEnumerable_1_t14441_GenericClass;
TypeInfo IEnumerable_1_t14441_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14441_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14441_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14441_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14441_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14441_0_0_0/* byval_arg */
	, &IEnumerable_1_t14441_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14441_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14440_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>
extern MethodInfo IList_1_get_Item_m102829_MethodInfo;
extern MethodInfo IList_1_set_Item_m102830_MethodInfo;
static PropertyInfo IList_1_t14440____Item_PropertyInfo = 
{
	&IList_1_t14440_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102829_MethodInfo/* get */
	, &IList_1_set_Item_m102830_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14440_PropertyInfos[] =
{
	&IList_1_t14440____Item_PropertyInfo,
	NULL
};
extern Il2CppType X500DistinguishedNameFlags_t2813_0_0_0;
static ParameterInfo IList_1_t14440_IList_1_IndexOf_m102831_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X500DistinguishedNameFlags_t2813_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102831_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102831_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14440_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14440_IList_1_IndexOf_m102831_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102831_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X500DistinguishedNameFlags_t2813_0_0_0;
static ParameterInfo IList_1_t14440_IList_1_Insert_m102832_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &X500DistinguishedNameFlags_t2813_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102832_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102832_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14440_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14440_IList_1_Insert_m102832_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102832_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14440_IList_1_RemoveAt_m102833_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102833_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102833_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14440_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14440_IList_1_RemoveAt_m102833_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102833_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14440_IList_1_get_Item_m102829_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType X500DistinguishedNameFlags_t2813_0_0_0;
extern void* RuntimeInvoker_X500DistinguishedNameFlags_t2813_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102829_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102829_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14440_il2cpp_TypeInfo/* declaring_type */
	, &X500DistinguishedNameFlags_t2813_0_0_0/* return_type */
	, RuntimeInvoker_X500DistinguishedNameFlags_t2813_Int32_t23/* invoker_method */
	, IList_1_t14440_IList_1_get_Item_m102829_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102829_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X500DistinguishedNameFlags_t2813_0_0_0;
static ParameterInfo IList_1_t14440_IList_1_set_Item_m102830_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &X500DistinguishedNameFlags_t2813_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102830_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102830_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14440_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14440_IList_1_set_Item_m102830_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102830_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14440_MethodInfos[] =
{
	&IList_1_IndexOf_m102831_MethodInfo,
	&IList_1_Insert_m102832_MethodInfo,
	&IList_1_RemoveAt_m102833_MethodInfo,
	&IList_1_get_Item_m102829_MethodInfo,
	&IList_1_set_Item_m102830_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14440_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14439_il2cpp_TypeInfo,
	&IEnumerable_1_t14441_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14440_0_0_0;
extern Il2CppType IList_1_t14440_1_0_0;
struct IList_1_t14440;
extern Il2CppGenericClass IList_1_t14440_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14440_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14440_MethodInfos/* methods */
	, IList_1_t14440_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14440_il2cpp_TypeInfo/* element_class */
	, IList_1_t14440_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14440_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14440_0_0_0/* byval_arg */
	, &IList_1_t14440_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14440_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12960_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>
extern MethodInfo IEnumerator_1_get_Current_m102834_MethodInfo;
static PropertyInfo IEnumerator_1_t12960____Current_PropertyInfo = 
{
	&IEnumerator_1_t12960_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102834_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12960_PropertyInfos[] =
{
	&IEnumerator_1_t12960____Current_PropertyInfo,
	NULL
};
extern Il2CppType X509Certificate_t2776_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102834_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102834_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12960_il2cpp_TypeInfo/* declaring_type */
	, &X509Certificate_t2776_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m102834_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12960_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102834_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12960_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12960_0_0_0;
extern Il2CppType IEnumerator_1_t12960_1_0_0;
struct IEnumerator_1_t12960;
extern Il2CppGenericClass IEnumerator_1_t12960_GenericClass;
TypeInfo IEnumerator_1_t12960_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12960_MethodInfos/* methods */
	, IEnumerator_1_t12960_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12960_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12960_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12960_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12960_0_0_0/* byval_arg */
	, &IEnumerator_1_t12960_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12960_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10855_il2cpp_TypeInfo;

extern TypeInfo X509Certificate_t2776_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77824_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisX509Certificate_t2776_m90536_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m79431_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m79431(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509Certificate>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509Certificate>(System.Int32)
#define Array_InternalArray__get_Item_TisX509Certificate_t2776_m90536(__this, p0, method) (X509Certificate_t2776 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10855____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10855_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10855, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10855____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10855_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10855, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10855_FieldInfos[] =
{
	&InternalEnumerator_1_t10855____array_0_FieldInfo,
	&InternalEnumerator_1_t10855____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77821_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10855____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10855_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77821_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10855____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10855_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77824_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10855_PropertyInfos[] =
{
	&InternalEnumerator_1_t10855____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10855____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10855_InternalEnumerator_1__ctor_m77819_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77819_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77819_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10855_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10855_InternalEnumerator_1__ctor_m77819_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77819_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77820_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77820_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10855_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77820_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77821_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77821_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10855_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77821_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77822_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77822_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10855_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77822_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77823_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77823_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10855_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77823_GenericMethod/* genericMethod */

};
extern Il2CppType X509Certificate_t2776_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77824_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77824_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10855_il2cpp_TypeInfo/* declaring_type */
	, &X509Certificate_t2776_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m77824_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10855_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77819_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77820_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77821_MethodInfo,
	&InternalEnumerator_1_Dispose_m77822_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77823_MethodInfo,
	&InternalEnumerator_1_get_Current_m77824_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m77823_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77820_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m77822_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10855_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77821_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77823_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77820_MethodInfo,
	&InternalEnumerator_1_Dispose_m77822_MethodInfo,
	&InternalEnumerator_1_get_Current_m77824_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10855_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12960_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10855_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12960_il2cpp_TypeInfo, 8},
};
extern TypeInfo X509Certificate_t2776_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10855_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m77824_MethodInfo/* Method Usage */,
	&X509Certificate_t2776_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisX509Certificate_t2776_m90536_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10855_0_0_0;
extern Il2CppType InternalEnumerator_1_t10855_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10855_GenericClass;
TypeInfo InternalEnumerator_1_t10855_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10855_MethodInfos/* methods */
	, InternalEnumerator_1_t10855_PropertyInfos/* properties */
	, InternalEnumerator_1_t10855_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10855_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10855_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10855_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10855_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10855_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10855_1_0_0/* this_arg */
	, InternalEnumerator_1_t10855_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10855_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10855_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10855)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14442_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>
extern MethodInfo ICollection_1_get_Count_m102835_MethodInfo;
static PropertyInfo ICollection_1_t14442____Count_PropertyInfo = 
{
	&ICollection_1_t14442_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102835_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102836_MethodInfo;
static PropertyInfo ICollection_1_t14442____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14442_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102836_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14442_PropertyInfos[] =
{
	&ICollection_1_t14442____Count_PropertyInfo,
	&ICollection_1_t14442____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102835_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Count()
MethodInfo ICollection_1_get_Count_m102835_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14442_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102835_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102836_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102836_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14442_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102836_GenericMethod/* genericMethod */

};
extern Il2CppType X509Certificate_t2776_0_0_0;
extern Il2CppType X509Certificate_t2776_0_0_0;
static ParameterInfo ICollection_1_t14442_ICollection_1_Add_m102837_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509Certificate_t2776_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102837_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Add(T)
MethodInfo ICollection_1_Add_m102837_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14442_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14442_ICollection_1_Add_m102837_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102837_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102838_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Clear()
MethodInfo ICollection_1_Clear_m102838_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14442_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102838_GenericMethod/* genericMethod */

};
extern Il2CppType X509Certificate_t2776_0_0_0;
static ParameterInfo ICollection_1_t14442_ICollection_1_Contains_m102839_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509Certificate_t2776_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102839_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Contains(T)
MethodInfo ICollection_1_Contains_m102839_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14442_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14442_ICollection_1_Contains_m102839_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102839_GenericMethod/* genericMethod */

};
extern Il2CppType X509CertificateU5BU5D_t2823_0_0_0;
extern Il2CppType X509CertificateU5BU5D_t2823_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14442_ICollection_1_CopyTo_m102840_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &X509CertificateU5BU5D_t2823_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102840_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102840_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14442_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14442_ICollection_1_CopyTo_m102840_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102840_GenericMethod/* genericMethod */

};
extern Il2CppType X509Certificate_t2776_0_0_0;
static ParameterInfo ICollection_1_t14442_ICollection_1_Remove_m102841_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509Certificate_t2776_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102841_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Remove(T)
MethodInfo ICollection_1_Remove_m102841_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14442_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14442_ICollection_1_Remove_m102841_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102841_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14442_MethodInfos[] =
{
	&ICollection_1_get_Count_m102835_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102836_MethodInfo,
	&ICollection_1_Add_m102837_MethodInfo,
	&ICollection_1_Clear_m102838_MethodInfo,
	&ICollection_1_Contains_m102839_MethodInfo,
	&ICollection_1_CopyTo_m102840_MethodInfo,
	&ICollection_1_Remove_m102841_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14444_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14442_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14442_0_0_0;
extern Il2CppType ICollection_1_t14442_1_0_0;
struct ICollection_1_t14442;
extern Il2CppGenericClass ICollection_1_t14442_GenericClass;
TypeInfo ICollection_1_t14442_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14442_MethodInfos/* methods */
	, ICollection_1_t14442_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14442_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14442_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14442_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14442_0_0_0/* byval_arg */
	, &ICollection_1_t14442_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14442_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509Certificate>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509Certificate>
extern Il2CppType IEnumerator_1_t12960_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102842_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509Certificate>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102842_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14444_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12960_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102842_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14444_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102842_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14444_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14444_0_0_0;
extern Il2CppType IEnumerable_1_t14444_1_0_0;
struct IEnumerable_1_t14444;
extern Il2CppGenericClass IEnumerable_1_t14444_GenericClass;
TypeInfo IEnumerable_1_t14444_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14444_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14444_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14444_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14444_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14444_0_0_0/* byval_arg */
	, &IEnumerable_1_t14444_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14444_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14443_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>
extern MethodInfo IList_1_get_Item_m102843_MethodInfo;
extern MethodInfo IList_1_set_Item_m102844_MethodInfo;
static PropertyInfo IList_1_t14443____Item_PropertyInfo = 
{
	&IList_1_t14443_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102843_MethodInfo/* get */
	, &IList_1_set_Item_m102844_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14443_PropertyInfos[] =
{
	&IList_1_t14443____Item_PropertyInfo,
	NULL
};
extern Il2CppType X509Certificate_t2776_0_0_0;
static ParameterInfo IList_1_t14443_IList_1_IndexOf_m102845_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509Certificate_t2776_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102845_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102845_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14443_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14443_IList_1_IndexOf_m102845_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102845_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509Certificate_t2776_0_0_0;
static ParameterInfo IList_1_t14443_IList_1_Insert_m102846_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &X509Certificate_t2776_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102846_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102846_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14443_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14443_IList_1_Insert_m102846_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102846_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14443_IList_1_RemoveAt_m102847_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102847_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102847_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14443_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14443_IList_1_RemoveAt_m102847_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102847_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14443_IList_1_get_Item_m102843_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType X509Certificate_t2776_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102843_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102843_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14443_il2cpp_TypeInfo/* declaring_type */
	, &X509Certificate_t2776_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14443_IList_1_get_Item_m102843_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102843_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509Certificate_t2776_0_0_0;
static ParameterInfo IList_1_t14443_IList_1_set_Item_m102844_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &X509Certificate_t2776_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102844_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102844_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14443_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14443_IList_1_set_Item_m102844_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102844_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14443_MethodInfos[] =
{
	&IList_1_IndexOf_m102845_MethodInfo,
	&IList_1_Insert_m102846_MethodInfo,
	&IList_1_RemoveAt_m102847_MethodInfo,
	&IList_1_get_Item_m102843_MethodInfo,
	&IList_1_set_Item_m102844_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14443_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14442_il2cpp_TypeInfo,
	&IEnumerable_1_t14444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14443_0_0_0;
extern Il2CppType IList_1_t14443_1_0_0;
struct IList_1_t14443;
extern Il2CppGenericClass IList_1_t14443_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14443_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14443_MethodInfos/* methods */
	, IList_1_t14443_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14443_il2cpp_TypeInfo/* element_class */
	, IList_1_t14443_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14443_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14443_0_0_0/* byval_arg */
	, &IList_1_t14443_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14443_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12962_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
extern MethodInfo IEnumerator_1_get_Current_m102848_MethodInfo;
static PropertyInfo IEnumerator_1_t12962____Current_PropertyInfo = 
{
	&IEnumerator_1_t12962_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102848_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12962_PropertyInfos[] =
{
	&IEnumerator_1_t12962____Current_PropertyInfo,
	NULL
};
extern Il2CppType X509ChainStatus_t2827_0_0_0;
extern void* RuntimeInvoker_X509ChainStatus_t2827 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102848_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102848_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12962_il2cpp_TypeInfo/* declaring_type */
	, &X509ChainStatus_t2827_0_0_0/* return_type */
	, RuntimeInvoker_X509ChainStatus_t2827/* invoker_method */
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
	, &IEnumerator_1_get_Current_m102848_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12962_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102848_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12962_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12962_0_0_0;
extern Il2CppType IEnumerator_1_t12962_1_0_0;
struct IEnumerator_1_t12962;
extern Il2CppGenericClass IEnumerator_1_t12962_GenericClass;
TypeInfo IEnumerator_1_t12962_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12962_MethodInfos/* methods */
	, IEnumerator_1_t12962_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12962_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12962_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12962_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12962_0_0_0/* byval_arg */
	, &IEnumerator_1_t12962_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12962_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10856_il2cpp_TypeInfo;

extern TypeInfo X509ChainStatus_t2827_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77830_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisX509ChainStatus_t2827_m90547_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Int32)
 X509ChainStatus_t2827  Array_InternalArray__get_Item_TisX509ChainStatus_t2827_m90547 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77825_MethodInfo;
 void InternalEnumerator_1__ctor_m77825 (InternalEnumerator_1_t10856 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77826_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77826 (InternalEnumerator_1_t10856 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77827_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77827 (InternalEnumerator_1_t10856 * __this, MethodInfo* method){
	{
		X509ChainStatus_t2827  L_0 = InternalEnumerator_1_get_Current_m77830(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77830_MethodInfo);
		X509ChainStatus_t2827  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&X509ChainStatus_t2827_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77828_MethodInfo;
 void InternalEnumerator_1_Dispose_m77828 (InternalEnumerator_1_t10856 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77829_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77829 (InternalEnumerator_1_t10856 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Current()
 X509ChainStatus_t2827  InternalEnumerator_1_get_Current_m77830 (InternalEnumerator_1_t10856 * __this, MethodInfo* method){
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
		X509ChainStatus_t2827  L_8 = Array_InternalArray__get_Item_TisX509ChainStatus_t2827_m90547(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisX509ChainStatus_t2827_m90547_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10856____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10856_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10856, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10856____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10856_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10856, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10856_FieldInfos[] =
{
	&InternalEnumerator_1_t10856____array_0_FieldInfo,
	&InternalEnumerator_1_t10856____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10856____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10856_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77827_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10856____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10856_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77830_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10856_PropertyInfos[] =
{
	&InternalEnumerator_1_t10856____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10856____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10856_InternalEnumerator_1__ctor_m77825_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77825_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77825_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77825/* method */
	, &InternalEnumerator_1_t10856_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10856_InternalEnumerator_1__ctor_m77825_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77825_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77826_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77826_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77826/* method */
	, &InternalEnumerator_1_t10856_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77826_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77827_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77827_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77827/* method */
	, &InternalEnumerator_1_t10856_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77827_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77828_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77828_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77828/* method */
	, &InternalEnumerator_1_t10856_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77828_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77829_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77829_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77829/* method */
	, &InternalEnumerator_1_t10856_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77829_GenericMethod/* genericMethod */

};
extern Il2CppType X509ChainStatus_t2827_0_0_0;
extern void* RuntimeInvoker_X509ChainStatus_t2827 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77830_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77830_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77830/* method */
	, &InternalEnumerator_1_t10856_il2cpp_TypeInfo/* declaring_type */
	, &X509ChainStatus_t2827_0_0_0/* return_type */
	, RuntimeInvoker_X509ChainStatus_t2827/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77830_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10856_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77825_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77826_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77827_MethodInfo,
	&InternalEnumerator_1_Dispose_m77828_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77829_MethodInfo,
	&InternalEnumerator_1_get_Current_m77830_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10856_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77827_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77829_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77826_MethodInfo,
	&InternalEnumerator_1_Dispose_m77828_MethodInfo,
	&InternalEnumerator_1_get_Current_m77830_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10856_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12962_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10856_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12962_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10856_0_0_0;
extern Il2CppType InternalEnumerator_1_t10856_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10856_GenericClass;
TypeInfo InternalEnumerator_1_t10856_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10856_MethodInfos/* methods */
	, InternalEnumerator_1_t10856_PropertyInfos/* properties */
	, InternalEnumerator_1_t10856_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10856_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10856_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10856_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10856_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10856_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10856_1_0_0/* this_arg */
	, InternalEnumerator_1_t10856_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10856_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10856)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14445_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
extern MethodInfo ICollection_1_get_Count_m102849_MethodInfo;
static PropertyInfo ICollection_1_t14445____Count_PropertyInfo = 
{
	&ICollection_1_t14445_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102849_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102850_MethodInfo;
static PropertyInfo ICollection_1_t14445____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14445_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102850_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14445_PropertyInfos[] =
{
	&ICollection_1_t14445____Count_PropertyInfo,
	&ICollection_1_t14445____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102849_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Count()
MethodInfo ICollection_1_get_Count_m102849_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14445_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102849_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102850_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102850_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14445_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102850_GenericMethod/* genericMethod */

};
extern Il2CppType X509ChainStatus_t2827_0_0_0;
extern Il2CppType X509ChainStatus_t2827_0_0_0;
static ParameterInfo ICollection_1_t14445_ICollection_1_Add_m102851_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509ChainStatus_t2827_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_X509ChainStatus_t2827 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102851_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Add(T)
MethodInfo ICollection_1_Add_m102851_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14445_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_X509ChainStatus_t2827/* invoker_method */
	, ICollection_1_t14445_ICollection_1_Add_m102851_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102851_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102852_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Clear()
MethodInfo ICollection_1_Clear_m102852_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14445_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102852_GenericMethod/* genericMethod */

};
extern Il2CppType X509ChainStatus_t2827_0_0_0;
static ParameterInfo ICollection_1_t14445_ICollection_1_Contains_m102853_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509ChainStatus_t2827_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_X509ChainStatus_t2827 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102853_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Contains(T)
MethodInfo ICollection_1_Contains_m102853_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14445_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_X509ChainStatus_t2827/* invoker_method */
	, ICollection_1_t14445_ICollection_1_Contains_m102853_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102853_GenericMethod/* genericMethod */

};
extern Il2CppType X509ChainStatusU5BU5D_t2826_0_0_0;
extern Il2CppType X509ChainStatusU5BU5D_t2826_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14445_ICollection_1_CopyTo_m102854_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &X509ChainStatusU5BU5D_t2826_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102854_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102854_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14445_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14445_ICollection_1_CopyTo_m102854_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102854_GenericMethod/* genericMethod */

};
extern Il2CppType X509ChainStatus_t2827_0_0_0;
static ParameterInfo ICollection_1_t14445_ICollection_1_Remove_m102855_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509ChainStatus_t2827_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_X509ChainStatus_t2827 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102855_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Remove(T)
MethodInfo ICollection_1_Remove_m102855_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14445_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_X509ChainStatus_t2827/* invoker_method */
	, ICollection_1_t14445_ICollection_1_Remove_m102855_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102855_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14445_MethodInfos[] =
{
	&ICollection_1_get_Count_m102849_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102850_MethodInfo,
	&ICollection_1_Add_m102851_MethodInfo,
	&ICollection_1_Clear_m102852_MethodInfo,
	&ICollection_1_Contains_m102853_MethodInfo,
	&ICollection_1_CopyTo_m102854_MethodInfo,
	&ICollection_1_Remove_m102855_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14447_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14445_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14447_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14445_0_0_0;
extern Il2CppType ICollection_1_t14445_1_0_0;
struct ICollection_1_t14445;
extern Il2CppGenericClass ICollection_1_t14445_GenericClass;
TypeInfo ICollection_1_t14445_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14445_MethodInfos/* methods */
	, ICollection_1_t14445_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14445_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14445_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14445_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14445_0_0_0/* byval_arg */
	, &ICollection_1_t14445_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14445_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
extern Il2CppType IEnumerator_1_t12962_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102856_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102856_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14447_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12962_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102856_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14447_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102856_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14447_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14447_0_0_0;
extern Il2CppType IEnumerable_1_t14447_1_0_0;
struct IEnumerable_1_t14447;
extern Il2CppGenericClass IEnumerable_1_t14447_GenericClass;
TypeInfo IEnumerable_1_t14447_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14447_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14447_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14447_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14447_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14447_0_0_0/* byval_arg */
	, &IEnumerable_1_t14447_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14447_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14446_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
extern MethodInfo IList_1_get_Item_m102857_MethodInfo;
extern MethodInfo IList_1_set_Item_m102858_MethodInfo;
static PropertyInfo IList_1_t14446____Item_PropertyInfo = 
{
	&IList_1_t14446_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102857_MethodInfo/* get */
	, &IList_1_set_Item_m102858_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14446_PropertyInfos[] =
{
	&IList_1_t14446____Item_PropertyInfo,
	NULL
};
extern Il2CppType X509ChainStatus_t2827_0_0_0;
static ParameterInfo IList_1_t14446_IList_1_IndexOf_m102859_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509ChainStatus_t2827_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_X509ChainStatus_t2827 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102859_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102859_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14446_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_X509ChainStatus_t2827/* invoker_method */
	, IList_1_t14446_IList_1_IndexOf_m102859_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102859_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509ChainStatus_t2827_0_0_0;
static ParameterInfo IList_1_t14446_IList_1_Insert_m102860_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &X509ChainStatus_t2827_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_X509ChainStatus_t2827 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102860_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102860_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14446_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_X509ChainStatus_t2827/* invoker_method */
	, IList_1_t14446_IList_1_Insert_m102860_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102860_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14446_IList_1_RemoveAt_m102861_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102861_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102861_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14446_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14446_IList_1_RemoveAt_m102861_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102861_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14446_IList_1_get_Item_m102857_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType X509ChainStatus_t2827_0_0_0;
extern void* RuntimeInvoker_X509ChainStatus_t2827_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102857_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102857_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14446_il2cpp_TypeInfo/* declaring_type */
	, &X509ChainStatus_t2827_0_0_0/* return_type */
	, RuntimeInvoker_X509ChainStatus_t2827_Int32_t23/* invoker_method */
	, IList_1_t14446_IList_1_get_Item_m102857_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102857_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509ChainStatus_t2827_0_0_0;
static ParameterInfo IList_1_t14446_IList_1_set_Item_m102858_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &X509ChainStatus_t2827_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_X509ChainStatus_t2827 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102858_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102858_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14446_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_X509ChainStatus_t2827/* invoker_method */
	, IList_1_t14446_IList_1_set_Item_m102858_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102858_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14446_MethodInfos[] =
{
	&IList_1_IndexOf_m102859_MethodInfo,
	&IList_1_Insert_m102860_MethodInfo,
	&IList_1_RemoveAt_m102861_MethodInfo,
	&IList_1_get_Item_m102857_MethodInfo,
	&IList_1_set_Item_m102858_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14446_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14445_il2cpp_TypeInfo,
	&IEnumerable_1_t14447_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14446_0_0_0;
extern Il2CppType IList_1_t14446_1_0_0;
struct IList_1_t14446;
extern Il2CppGenericClass IList_1_t14446_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14446_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14446_MethodInfos/* methods */
	, IList_1_t14446_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14446_il2cpp_TypeInfo/* element_class */
	, IList_1_t14446_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14446_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14446_0_0_0/* byval_arg */
	, &IList_1_t14446_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14446_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12964_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>
extern MethodInfo IEnumerator_1_get_Current_m102862_MethodInfo;
static PropertyInfo IEnumerator_1_t12964____Current_PropertyInfo = 
{
	&IEnumerator_1_t12964_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102862_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12964_PropertyInfos[] =
{
	&IEnumerator_1_t12964____Current_PropertyInfo,
	NULL
};
extern Il2CppType X509ChainStatusFlags_t2835_0_0_0;
extern void* RuntimeInvoker_X509ChainStatusFlags_t2835 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102862_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102862_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12964_il2cpp_TypeInfo/* declaring_type */
	, &X509ChainStatusFlags_t2835_0_0_0/* return_type */
	, RuntimeInvoker_X509ChainStatusFlags_t2835/* invoker_method */
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
	, &IEnumerator_1_get_Current_m102862_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12964_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102862_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12964_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12964_0_0_0;
extern Il2CppType IEnumerator_1_t12964_1_0_0;
struct IEnumerator_1_t12964;
extern Il2CppGenericClass IEnumerator_1_t12964_GenericClass;
TypeInfo IEnumerator_1_t12964_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12964_MethodInfos/* methods */
	, IEnumerator_1_t12964_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12964_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12964_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12964_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12964_0_0_0/* byval_arg */
	, &IEnumerator_1_t12964_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12964_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10857_il2cpp_TypeInfo;

extern TypeInfo X509ChainStatusFlags_t2835_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77836_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisX509ChainStatusFlags_t2835_m90558_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisX509ChainStatusFlags_t2835_m90558 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77831_MethodInfo;
 void InternalEnumerator_1__ctor_m77831 (InternalEnumerator_1_t10857 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77832_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77832 (InternalEnumerator_1_t10857 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77833_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77833 (InternalEnumerator_1_t10857 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77836(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77836_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&X509ChainStatusFlags_t2835_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77834_MethodInfo;
 void InternalEnumerator_1_Dispose_m77834 (InternalEnumerator_1_t10857 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77835_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77835 (InternalEnumerator_1_t10857 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77836 (InternalEnumerator_1_t10857 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisX509ChainStatusFlags_t2835_m90558(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisX509ChainStatusFlags_t2835_m90558_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10857____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10857_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10857, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10857____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10857_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10857, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10857_FieldInfos[] =
{
	&InternalEnumerator_1_t10857____array_0_FieldInfo,
	&InternalEnumerator_1_t10857____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10857____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10857_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77833_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10857____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10857_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77836_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10857_PropertyInfos[] =
{
	&InternalEnumerator_1_t10857____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10857____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10857_InternalEnumerator_1__ctor_m77831_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77831_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77831_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77831/* method */
	, &InternalEnumerator_1_t10857_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10857_InternalEnumerator_1__ctor_m77831_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77831_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77832_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77832_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77832/* method */
	, &InternalEnumerator_1_t10857_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77832_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77833_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77833_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77833/* method */
	, &InternalEnumerator_1_t10857_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77833_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77834_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77834_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77834/* method */
	, &InternalEnumerator_1_t10857_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77834_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77835_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77835_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77835/* method */
	, &InternalEnumerator_1_t10857_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77835_GenericMethod/* genericMethod */

};
extern Il2CppType X509ChainStatusFlags_t2835_0_0_0;
extern void* RuntimeInvoker_X509ChainStatusFlags_t2835 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77836_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77836_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77836/* method */
	, &InternalEnumerator_1_t10857_il2cpp_TypeInfo/* declaring_type */
	, &X509ChainStatusFlags_t2835_0_0_0/* return_type */
	, RuntimeInvoker_X509ChainStatusFlags_t2835/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77836_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10857_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77831_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77832_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77833_MethodInfo,
	&InternalEnumerator_1_Dispose_m77834_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77835_MethodInfo,
	&InternalEnumerator_1_get_Current_m77836_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10857_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77833_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77835_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77832_MethodInfo,
	&InternalEnumerator_1_Dispose_m77834_MethodInfo,
	&InternalEnumerator_1_get_Current_m77836_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10857_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12964_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10857_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12964_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10857_0_0_0;
extern Il2CppType InternalEnumerator_1_t10857_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10857_GenericClass;
TypeInfo InternalEnumerator_1_t10857_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10857_MethodInfos/* methods */
	, InternalEnumerator_1_t10857_PropertyInfos/* properties */
	, InternalEnumerator_1_t10857_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10857_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10857_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10857_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10857_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10857_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10857_1_0_0/* this_arg */
	, InternalEnumerator_1_t10857_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10857_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10857)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14448_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>
extern MethodInfo ICollection_1_get_Count_m102863_MethodInfo;
static PropertyInfo ICollection_1_t14448____Count_PropertyInfo = 
{
	&ICollection_1_t14448_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102863_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102864_MethodInfo;
static PropertyInfo ICollection_1_t14448____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14448_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102864_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14448_PropertyInfos[] =
{
	&ICollection_1_t14448____Count_PropertyInfo,
	&ICollection_1_t14448____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102863_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m102863_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14448_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102863_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102864_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102864_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14448_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102864_GenericMethod/* genericMethod */

};
extern Il2CppType X509ChainStatusFlags_t2835_0_0_0;
extern Il2CppType X509ChainStatusFlags_t2835_0_0_0;
static ParameterInfo ICollection_1_t14448_ICollection_1_Add_m102865_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509ChainStatusFlags_t2835_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102865_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::Add(T)
MethodInfo ICollection_1_Add_m102865_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14448_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14448_ICollection_1_Add_m102865_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102865_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102866_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::Clear()
MethodInfo ICollection_1_Clear_m102866_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14448_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102866_GenericMethod/* genericMethod */

};
extern Il2CppType X509ChainStatusFlags_t2835_0_0_0;
static ParameterInfo ICollection_1_t14448_ICollection_1_Contains_m102867_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509ChainStatusFlags_t2835_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102867_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m102867_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14448_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14448_ICollection_1_Contains_m102867_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102867_GenericMethod/* genericMethod */

};
extern Il2CppType X509ChainStatusFlagsU5BU5D_t11446_0_0_0;
extern Il2CppType X509ChainStatusFlagsU5BU5D_t11446_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14448_ICollection_1_CopyTo_m102868_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &X509ChainStatusFlagsU5BU5D_t11446_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102868_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102868_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14448_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14448_ICollection_1_CopyTo_m102868_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102868_GenericMethod/* genericMethod */

};
extern Il2CppType X509ChainStatusFlags_t2835_0_0_0;
static ParameterInfo ICollection_1_t14448_ICollection_1_Remove_m102869_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509ChainStatusFlags_t2835_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102869_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m102869_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14448_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14448_ICollection_1_Remove_m102869_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102869_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14448_MethodInfos[] =
{
	&ICollection_1_get_Count_m102863_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102864_MethodInfo,
	&ICollection_1_Add_m102865_MethodInfo,
	&ICollection_1_Clear_m102866_MethodInfo,
	&ICollection_1_Contains_m102867_MethodInfo,
	&ICollection_1_CopyTo_m102868_MethodInfo,
	&ICollection_1_Remove_m102869_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14450_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14448_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14450_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14448_0_0_0;
extern Il2CppType ICollection_1_t14448_1_0_0;
struct ICollection_1_t14448;
extern Il2CppGenericClass ICollection_1_t14448_GenericClass;
TypeInfo ICollection_1_t14448_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14448_MethodInfos/* methods */
	, ICollection_1_t14448_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14448_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14448_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14448_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14448_0_0_0/* byval_arg */
	, &ICollection_1_t14448_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14448_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>
extern Il2CppType IEnumerator_1_t12964_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102870_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102870_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14450_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12964_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102870_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14450_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102870_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14450_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14450_0_0_0;
extern Il2CppType IEnumerable_1_t14450_1_0_0;
struct IEnumerable_1_t14450;
extern Il2CppGenericClass IEnumerable_1_t14450_GenericClass;
TypeInfo IEnumerable_1_t14450_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14450_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14450_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14450_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14450_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14450_0_0_0/* byval_arg */
	, &IEnumerable_1_t14450_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14450_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14449_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>
extern MethodInfo IList_1_get_Item_m102871_MethodInfo;
extern MethodInfo IList_1_set_Item_m102872_MethodInfo;
static PropertyInfo IList_1_t14449____Item_PropertyInfo = 
{
	&IList_1_t14449_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102871_MethodInfo/* get */
	, &IList_1_set_Item_m102872_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14449_PropertyInfos[] =
{
	&IList_1_t14449____Item_PropertyInfo,
	NULL
};
extern Il2CppType X509ChainStatusFlags_t2835_0_0_0;
static ParameterInfo IList_1_t14449_IList_1_IndexOf_m102873_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509ChainStatusFlags_t2835_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102873_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102873_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14449_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14449_IList_1_IndexOf_m102873_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102873_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509ChainStatusFlags_t2835_0_0_0;
static ParameterInfo IList_1_t14449_IList_1_Insert_m102874_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &X509ChainStatusFlags_t2835_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102874_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102874_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14449_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14449_IList_1_Insert_m102874_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102874_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14449_IList_1_RemoveAt_m102875_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102875_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102875_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14449_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14449_IList_1_RemoveAt_m102875_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102875_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14449_IList_1_get_Item_m102871_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType X509ChainStatusFlags_t2835_0_0_0;
extern void* RuntimeInvoker_X509ChainStatusFlags_t2835_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102871_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102871_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14449_il2cpp_TypeInfo/* declaring_type */
	, &X509ChainStatusFlags_t2835_0_0_0/* return_type */
	, RuntimeInvoker_X509ChainStatusFlags_t2835_Int32_t23/* invoker_method */
	, IList_1_t14449_IList_1_get_Item_m102871_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102871_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509ChainStatusFlags_t2835_0_0_0;
static ParameterInfo IList_1_t14449_IList_1_set_Item_m102872_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &X509ChainStatusFlags_t2835_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102872_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509ChainStatusFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102872_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14449_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14449_IList_1_set_Item_m102872_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102872_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14449_MethodInfos[] =
{
	&IList_1_IndexOf_m102873_MethodInfo,
	&IList_1_Insert_m102874_MethodInfo,
	&IList_1_RemoveAt_m102875_MethodInfo,
	&IList_1_get_Item_m102871_MethodInfo,
	&IList_1_set_Item_m102872_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14449_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14448_il2cpp_TypeInfo,
	&IEnumerable_1_t14450_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14449_0_0_0;
extern Il2CppType IList_1_t14449_1_0_0;
struct IList_1_t14449;
extern Il2CppGenericClass IList_1_t14449_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14449_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14449_MethodInfos/* methods */
	, IList_1_t14449_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14449_il2cpp_TypeInfo/* element_class */
	, IList_1_t14449_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14449_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14449_0_0_0/* byval_arg */
	, &IList_1_t14449_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14449_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12966_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>
extern MethodInfo IEnumerator_1_get_Current_m102876_MethodInfo;
static PropertyInfo IEnumerator_1_t12966____Current_PropertyInfo = 
{
	&IEnumerator_1_t12966_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102876_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12966_PropertyInfos[] =
{
	&IEnumerator_1_t12966____Current_PropertyInfo,
	NULL
};
extern Il2CppType X509FindType_t2838_0_0_0;
extern void* RuntimeInvoker_X509FindType_t2838 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102876_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102876_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12966_il2cpp_TypeInfo/* declaring_type */
	, &X509FindType_t2838_0_0_0/* return_type */
	, RuntimeInvoker_X509FindType_t2838/* invoker_method */
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
	, &IEnumerator_1_get_Current_m102876_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12966_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102876_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12966_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12966_0_0_0;
extern Il2CppType IEnumerator_1_t12966_1_0_0;
struct IEnumerator_1_t12966;
extern Il2CppGenericClass IEnumerator_1_t12966_GenericClass;
TypeInfo IEnumerator_1_t12966_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12966_MethodInfos/* methods */
	, IEnumerator_1_t12966_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12966_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12966_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12966_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12966_0_0_0/* byval_arg */
	, &IEnumerator_1_t12966_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12966_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10858_il2cpp_TypeInfo;

extern TypeInfo X509FindType_t2838_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77842_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisX509FindType_t2838_m90569_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509FindType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509FindType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisX509FindType_t2838_m90569 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77837_MethodInfo;
 void InternalEnumerator_1__ctor_m77837 (InternalEnumerator_1_t10858 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77838_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77838 (InternalEnumerator_1_t10858 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77839_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77839 (InternalEnumerator_1_t10858 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77842(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77842_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&X509FindType_t2838_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77840_MethodInfo;
 void InternalEnumerator_1_Dispose_m77840 (InternalEnumerator_1_t10858 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77841_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77841 (InternalEnumerator_1_t10858 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77842 (InternalEnumerator_1_t10858 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisX509FindType_t2838_m90569(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisX509FindType_t2838_m90569_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10858____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10858_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10858, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10858____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10858_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10858, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10858_FieldInfos[] =
{
	&InternalEnumerator_1_t10858____array_0_FieldInfo,
	&InternalEnumerator_1_t10858____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10858____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10858_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77839_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10858____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10858_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77842_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10858_PropertyInfos[] =
{
	&InternalEnumerator_1_t10858____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10858____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10858_InternalEnumerator_1__ctor_m77837_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77837_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77837_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77837/* method */
	, &InternalEnumerator_1_t10858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10858_InternalEnumerator_1__ctor_m77837_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77837_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77838_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77838_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77838/* method */
	, &InternalEnumerator_1_t10858_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77838_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77839_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77839_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77839/* method */
	, &InternalEnumerator_1_t10858_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77839_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77840_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77840_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77840/* method */
	, &InternalEnumerator_1_t10858_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77840_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77841_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77841_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77841/* method */
	, &InternalEnumerator_1_t10858_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77841_GenericMethod/* genericMethod */

};
extern Il2CppType X509FindType_t2838_0_0_0;
extern void* RuntimeInvoker_X509FindType_t2838 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77842_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509FindType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77842_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77842/* method */
	, &InternalEnumerator_1_t10858_il2cpp_TypeInfo/* declaring_type */
	, &X509FindType_t2838_0_0_0/* return_type */
	, RuntimeInvoker_X509FindType_t2838/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77842_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10858_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77837_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77838_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77839_MethodInfo,
	&InternalEnumerator_1_Dispose_m77840_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77841_MethodInfo,
	&InternalEnumerator_1_get_Current_m77842_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10858_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77839_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77841_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77838_MethodInfo,
	&InternalEnumerator_1_Dispose_m77840_MethodInfo,
	&InternalEnumerator_1_get_Current_m77842_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10858_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12966_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10858_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12966_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10858_0_0_0;
extern Il2CppType InternalEnumerator_1_t10858_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10858_GenericClass;
TypeInfo InternalEnumerator_1_t10858_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10858_MethodInfos/* methods */
	, InternalEnumerator_1_t10858_PropertyInfos/* properties */
	, InternalEnumerator_1_t10858_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10858_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10858_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10858_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10858_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10858_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10858_1_0_0/* this_arg */
	, InternalEnumerator_1_t10858_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10858_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10858)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14451_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509FindType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509FindType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509FindType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509FindType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509FindType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509FindType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509FindType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509FindType>
extern MethodInfo ICollection_1_get_Count_m102877_MethodInfo;
static PropertyInfo ICollection_1_t14451____Count_PropertyInfo = 
{
	&ICollection_1_t14451_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102877_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102878_MethodInfo;
static PropertyInfo ICollection_1_t14451____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14451_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102878_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14451_PropertyInfos[] =
{
	&ICollection_1_t14451____Count_PropertyInfo,
	&ICollection_1_t14451____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102877_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509FindType>::get_Count()
MethodInfo ICollection_1_get_Count_m102877_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14451_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102877_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102878_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509FindType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102878_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14451_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102878_GenericMethod/* genericMethod */

};
extern Il2CppType X509FindType_t2838_0_0_0;
extern Il2CppType X509FindType_t2838_0_0_0;
static ParameterInfo ICollection_1_t14451_ICollection_1_Add_m102879_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509FindType_t2838_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102879_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509FindType>::Add(T)
MethodInfo ICollection_1_Add_m102879_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14451_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14451_ICollection_1_Add_m102879_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102879_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102880_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509FindType>::Clear()
MethodInfo ICollection_1_Clear_m102880_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14451_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102880_GenericMethod/* genericMethod */

};
extern Il2CppType X509FindType_t2838_0_0_0;
static ParameterInfo ICollection_1_t14451_ICollection_1_Contains_m102881_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509FindType_t2838_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102881_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509FindType>::Contains(T)
MethodInfo ICollection_1_Contains_m102881_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14451_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14451_ICollection_1_Contains_m102881_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102881_GenericMethod/* genericMethod */

};
extern Il2CppType X509FindTypeU5BU5D_t11447_0_0_0;
extern Il2CppType X509FindTypeU5BU5D_t11447_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14451_ICollection_1_CopyTo_m102882_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &X509FindTypeU5BU5D_t11447_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102882_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509FindType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102882_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14451_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14451_ICollection_1_CopyTo_m102882_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102882_GenericMethod/* genericMethod */

};
extern Il2CppType X509FindType_t2838_0_0_0;
static ParameterInfo ICollection_1_t14451_ICollection_1_Remove_m102883_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509FindType_t2838_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102883_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509FindType>::Remove(T)
MethodInfo ICollection_1_Remove_m102883_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14451_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14451_ICollection_1_Remove_m102883_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102883_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14451_MethodInfos[] =
{
	&ICollection_1_get_Count_m102877_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102878_MethodInfo,
	&ICollection_1_Add_m102879_MethodInfo,
	&ICollection_1_Clear_m102880_MethodInfo,
	&ICollection_1_Contains_m102881_MethodInfo,
	&ICollection_1_CopyTo_m102882_MethodInfo,
	&ICollection_1_Remove_m102883_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14453_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14451_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14453_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14451_0_0_0;
extern Il2CppType ICollection_1_t14451_1_0_0;
struct ICollection_1_t14451;
extern Il2CppGenericClass ICollection_1_t14451_GenericClass;
TypeInfo ICollection_1_t14451_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14451_MethodInfos/* methods */
	, ICollection_1_t14451_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14451_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14451_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14451_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14451_0_0_0/* byval_arg */
	, &ICollection_1_t14451_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14451_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509FindType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509FindType>
extern Il2CppType IEnumerator_1_t12966_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102884_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509FindType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102884_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14453_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12966_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102884_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14453_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102884_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14453_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14453_0_0_0;
extern Il2CppType IEnumerable_1_t14453_1_0_0;
struct IEnumerable_1_t14453;
extern Il2CppGenericClass IEnumerable_1_t14453_GenericClass;
TypeInfo IEnumerable_1_t14453_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14453_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14453_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14453_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14453_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14453_0_0_0/* byval_arg */
	, &IEnumerable_1_t14453_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14453_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14452_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509FindType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509FindType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509FindType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509FindType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509FindType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509FindType>
extern MethodInfo IList_1_get_Item_m102885_MethodInfo;
extern MethodInfo IList_1_set_Item_m102886_MethodInfo;
static PropertyInfo IList_1_t14452____Item_PropertyInfo = 
{
	&IList_1_t14452_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102885_MethodInfo/* get */
	, &IList_1_set_Item_m102886_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14452_PropertyInfos[] =
{
	&IList_1_t14452____Item_PropertyInfo,
	NULL
};
extern Il2CppType X509FindType_t2838_0_0_0;
static ParameterInfo IList_1_t14452_IList_1_IndexOf_m102887_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509FindType_t2838_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102887_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509FindType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102887_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14452_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14452_IList_1_IndexOf_m102887_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102887_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509FindType_t2838_0_0_0;
static ParameterInfo IList_1_t14452_IList_1_Insert_m102888_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &X509FindType_t2838_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102888_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509FindType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102888_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14452_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14452_IList_1_Insert_m102888_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102888_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14452_IList_1_RemoveAt_m102889_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102889_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509FindType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102889_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14452_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14452_IList_1_RemoveAt_m102889_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102889_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14452_IList_1_get_Item_m102885_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType X509FindType_t2838_0_0_0;
extern void* RuntimeInvoker_X509FindType_t2838_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102885_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509FindType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102885_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14452_il2cpp_TypeInfo/* declaring_type */
	, &X509FindType_t2838_0_0_0/* return_type */
	, RuntimeInvoker_X509FindType_t2838_Int32_t23/* invoker_method */
	, IList_1_t14452_IList_1_get_Item_m102885_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102885_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509FindType_t2838_0_0_0;
static ParameterInfo IList_1_t14452_IList_1_set_Item_m102886_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &X509FindType_t2838_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102886_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509FindType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102886_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14452_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14452_IList_1_set_Item_m102886_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102886_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14452_MethodInfos[] =
{
	&IList_1_IndexOf_m102887_MethodInfo,
	&IList_1_Insert_m102888_MethodInfo,
	&IList_1_RemoveAt_m102889_MethodInfo,
	&IList_1_get_Item_m102885_MethodInfo,
	&IList_1_set_Item_m102886_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14452_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14451_il2cpp_TypeInfo,
	&IEnumerable_1_t14453_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14452_0_0_0;
extern Il2CppType IList_1_t14452_1_0_0;
struct IList_1_t14452;
extern Il2CppGenericClass IList_1_t14452_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14452_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14452_MethodInfos/* methods */
	, IList_1_t14452_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14452_il2cpp_TypeInfo/* element_class */
	, IList_1_t14452_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14452_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14452_0_0_0/* byval_arg */
	, &IList_1_t14452_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14452_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12968_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>
extern MethodInfo IEnumerator_1_get_Current_m102890_MethodInfo;
static PropertyInfo IEnumerator_1_t12968____Current_PropertyInfo = 
{
	&IEnumerator_1_t12968_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102890_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12968_PropertyInfos[] =
{
	&IEnumerator_1_t12968____Current_PropertyInfo,
	NULL
};
extern Il2CppType X509KeyUsageFlags_t2840_0_0_0;
extern void* RuntimeInvoker_X509KeyUsageFlags_t2840 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102890_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102890_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12968_il2cpp_TypeInfo/* declaring_type */
	, &X509KeyUsageFlags_t2840_0_0_0/* return_type */
	, RuntimeInvoker_X509KeyUsageFlags_t2840/* invoker_method */
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
	, &IEnumerator_1_get_Current_m102890_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12968_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102890_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12968_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12968_0_0_0;
extern Il2CppType IEnumerator_1_t12968_1_0_0;
struct IEnumerator_1_t12968;
extern Il2CppGenericClass IEnumerator_1_t12968_GenericClass;
TypeInfo IEnumerator_1_t12968_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12968_MethodInfos/* methods */
	, IEnumerator_1_t12968_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12968_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12968_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12968_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12968_0_0_0/* byval_arg */
	, &IEnumerator_1_t12968_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12968_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10859_il2cpp_TypeInfo;

extern TypeInfo X509KeyUsageFlags_t2840_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77848_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisX509KeyUsageFlags_t2840_m90580_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisX509KeyUsageFlags_t2840_m90580 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77843_MethodInfo;
 void InternalEnumerator_1__ctor_m77843 (InternalEnumerator_1_t10859 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77844_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77844 (InternalEnumerator_1_t10859 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77845_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77845 (InternalEnumerator_1_t10859 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77848(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77848_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&X509KeyUsageFlags_t2840_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77846_MethodInfo;
 void InternalEnumerator_1_Dispose_m77846 (InternalEnumerator_1_t10859 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77847_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77847 (InternalEnumerator_1_t10859 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77848 (InternalEnumerator_1_t10859 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisX509KeyUsageFlags_t2840_m90580(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisX509KeyUsageFlags_t2840_m90580_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10859____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10859_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10859, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10859____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10859_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10859, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10859_FieldInfos[] =
{
	&InternalEnumerator_1_t10859____array_0_FieldInfo,
	&InternalEnumerator_1_t10859____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10859____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10859_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77845_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10859____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10859_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77848_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10859_PropertyInfos[] =
{
	&InternalEnumerator_1_t10859____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10859____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10859_InternalEnumerator_1__ctor_m77843_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77843_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77843_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77843/* method */
	, &InternalEnumerator_1_t10859_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10859_InternalEnumerator_1__ctor_m77843_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77843_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77844_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77844_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77844/* method */
	, &InternalEnumerator_1_t10859_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77844_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77845_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77845_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77845/* method */
	, &InternalEnumerator_1_t10859_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77845_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77846_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77846_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77846/* method */
	, &InternalEnumerator_1_t10859_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77846_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77847_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77847_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77847/* method */
	, &InternalEnumerator_1_t10859_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77847_GenericMethod/* genericMethod */

};
extern Il2CppType X509KeyUsageFlags_t2840_0_0_0;
extern void* RuntimeInvoker_X509KeyUsageFlags_t2840 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77848_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77848_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77848/* method */
	, &InternalEnumerator_1_t10859_il2cpp_TypeInfo/* declaring_type */
	, &X509KeyUsageFlags_t2840_0_0_0/* return_type */
	, RuntimeInvoker_X509KeyUsageFlags_t2840/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77848_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10859_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77843_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77844_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77845_MethodInfo,
	&InternalEnumerator_1_Dispose_m77846_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77847_MethodInfo,
	&InternalEnumerator_1_get_Current_m77848_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10859_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77845_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77847_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77844_MethodInfo,
	&InternalEnumerator_1_Dispose_m77846_MethodInfo,
	&InternalEnumerator_1_get_Current_m77848_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10859_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12968_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10859_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12968_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10859_0_0_0;
extern Il2CppType InternalEnumerator_1_t10859_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10859_GenericClass;
TypeInfo InternalEnumerator_1_t10859_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10859_MethodInfos/* methods */
	, InternalEnumerator_1_t10859_PropertyInfos/* properties */
	, InternalEnumerator_1_t10859_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10859_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10859_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10859_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10859_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10859_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10859_1_0_0/* this_arg */
	, InternalEnumerator_1_t10859_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10859_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10859)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14454_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>
extern MethodInfo ICollection_1_get_Count_m102891_MethodInfo;
static PropertyInfo ICollection_1_t14454____Count_PropertyInfo = 
{
	&ICollection_1_t14454_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102891_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102892_MethodInfo;
static PropertyInfo ICollection_1_t14454____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14454_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102892_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14454_PropertyInfos[] =
{
	&ICollection_1_t14454____Count_PropertyInfo,
	&ICollection_1_t14454____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102891_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m102891_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14454_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102891_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102892_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102892_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14454_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102892_GenericMethod/* genericMethod */

};
extern Il2CppType X509KeyUsageFlags_t2840_0_0_0;
extern Il2CppType X509KeyUsageFlags_t2840_0_0_0;
static ParameterInfo ICollection_1_t14454_ICollection_1_Add_m102893_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509KeyUsageFlags_t2840_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102893_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::Add(T)
MethodInfo ICollection_1_Add_m102893_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14454_ICollection_1_Add_m102893_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102893_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102894_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::Clear()
MethodInfo ICollection_1_Clear_m102894_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14454_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102894_GenericMethod/* genericMethod */

};
extern Il2CppType X509KeyUsageFlags_t2840_0_0_0;
static ParameterInfo ICollection_1_t14454_ICollection_1_Contains_m102895_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509KeyUsageFlags_t2840_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102895_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m102895_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14454_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14454_ICollection_1_Contains_m102895_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102895_GenericMethod/* genericMethod */

};
extern Il2CppType X509KeyUsageFlagsU5BU5D_t11448_0_0_0;
extern Il2CppType X509KeyUsageFlagsU5BU5D_t11448_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14454_ICollection_1_CopyTo_m102896_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &X509KeyUsageFlagsU5BU5D_t11448_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102896_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102896_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14454_ICollection_1_CopyTo_m102896_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102896_GenericMethod/* genericMethod */

};
extern Il2CppType X509KeyUsageFlags_t2840_0_0_0;
static ParameterInfo ICollection_1_t14454_ICollection_1_Remove_m102897_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509KeyUsageFlags_t2840_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102897_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m102897_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14454_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14454_ICollection_1_Remove_m102897_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102897_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14454_MethodInfos[] =
{
	&ICollection_1_get_Count_m102891_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102892_MethodInfo,
	&ICollection_1_Add_m102893_MethodInfo,
	&ICollection_1_Clear_m102894_MethodInfo,
	&ICollection_1_Contains_m102895_MethodInfo,
	&ICollection_1_CopyTo_m102896_MethodInfo,
	&ICollection_1_Remove_m102897_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14456_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14454_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14456_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14454_0_0_0;
extern Il2CppType ICollection_1_t14454_1_0_0;
struct ICollection_1_t14454;
extern Il2CppGenericClass ICollection_1_t14454_GenericClass;
TypeInfo ICollection_1_t14454_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14454_MethodInfos/* methods */
	, ICollection_1_t14454_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14454_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14454_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14454_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14454_0_0_0/* byval_arg */
	, &ICollection_1_t14454_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14454_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>
extern Il2CppType IEnumerator_1_t12968_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102898_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102898_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14456_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12968_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102898_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14456_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102898_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14456_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14456_0_0_0;
extern Il2CppType IEnumerable_1_t14456_1_0_0;
struct IEnumerable_1_t14456;
extern Il2CppGenericClass IEnumerable_1_t14456_GenericClass;
TypeInfo IEnumerable_1_t14456_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14456_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14456_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14456_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14456_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14456_0_0_0/* byval_arg */
	, &IEnumerable_1_t14456_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14456_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14455_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>
extern MethodInfo IList_1_get_Item_m102899_MethodInfo;
extern MethodInfo IList_1_set_Item_m102900_MethodInfo;
static PropertyInfo IList_1_t14455____Item_PropertyInfo = 
{
	&IList_1_t14455_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102899_MethodInfo/* get */
	, &IList_1_set_Item_m102900_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14455_PropertyInfos[] =
{
	&IList_1_t14455____Item_PropertyInfo,
	NULL
};
extern Il2CppType X509KeyUsageFlags_t2840_0_0_0;
static ParameterInfo IList_1_t14455_IList_1_IndexOf_m102901_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509KeyUsageFlags_t2840_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102901_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102901_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14455_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14455_IList_1_IndexOf_m102901_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102901_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509KeyUsageFlags_t2840_0_0_0;
static ParameterInfo IList_1_t14455_IList_1_Insert_m102902_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &X509KeyUsageFlags_t2840_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102902_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102902_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14455_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14455_IList_1_Insert_m102902_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102902_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14455_IList_1_RemoveAt_m102903_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102903_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102903_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14455_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14455_IList_1_RemoveAt_m102903_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102903_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14455_IList_1_get_Item_m102899_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType X509KeyUsageFlags_t2840_0_0_0;
extern void* RuntimeInvoker_X509KeyUsageFlags_t2840_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102899_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102899_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14455_il2cpp_TypeInfo/* declaring_type */
	, &X509KeyUsageFlags_t2840_0_0_0/* return_type */
	, RuntimeInvoker_X509KeyUsageFlags_t2840_Int32_t23/* invoker_method */
	, IList_1_t14455_IList_1_get_Item_m102899_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102899_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509KeyUsageFlags_t2840_0_0_0;
static ParameterInfo IList_1_t14455_IList_1_set_Item_m102900_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &X509KeyUsageFlags_t2840_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102900_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyUsageFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102900_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14455_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14455_IList_1_set_Item_m102900_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102900_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14455_MethodInfos[] =
{
	&IList_1_IndexOf_m102901_MethodInfo,
	&IList_1_Insert_m102902_MethodInfo,
	&IList_1_RemoveAt_m102903_MethodInfo,
	&IList_1_get_Item_m102899_MethodInfo,
	&IList_1_set_Item_m102900_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14455_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14454_il2cpp_TypeInfo,
	&IEnumerable_1_t14456_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14455_0_0_0;
extern Il2CppType IList_1_t14455_1_0_0;
struct IList_1_t14455;
extern Il2CppGenericClass IList_1_t14455_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14455_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14455_MethodInfos/* methods */
	, IList_1_t14455_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14455_il2cpp_TypeInfo/* element_class */
	, IList_1_t14455_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14455_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14455_0_0_0/* byval_arg */
	, &IList_1_t14455_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14455_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12970_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>
extern MethodInfo IEnumerator_1_get_Current_m102904_MethodInfo;
static PropertyInfo IEnumerator_1_t12970____Current_PropertyInfo = 
{
	&IEnumerator_1_t12970_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102904_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12970_PropertyInfos[] =
{
	&IEnumerator_1_t12970____Current_PropertyInfo,
	NULL
};
extern Il2CppType X509NameType_t2841_0_0_0;
extern void* RuntimeInvoker_X509NameType_t2841 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102904_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102904_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12970_il2cpp_TypeInfo/* declaring_type */
	, &X509NameType_t2841_0_0_0/* return_type */
	, RuntimeInvoker_X509NameType_t2841/* invoker_method */
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
	, &IEnumerator_1_get_Current_m102904_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12970_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102904_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12970_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12970_0_0_0;
extern Il2CppType IEnumerator_1_t12970_1_0_0;
struct IEnumerator_1_t12970;
extern Il2CppGenericClass IEnumerator_1_t12970_GenericClass;
TypeInfo IEnumerator_1_t12970_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12970_MethodInfos/* methods */
	, IEnumerator_1_t12970_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12970_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12970_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12970_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12970_0_0_0/* byval_arg */
	, &IEnumerator_1_t12970_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12970_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10860_il2cpp_TypeInfo;

extern TypeInfo X509NameType_t2841_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77854_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisX509NameType_t2841_m90591_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509NameType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509NameType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisX509NameType_t2841_m90591 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77849_MethodInfo;
 void InternalEnumerator_1__ctor_m77849 (InternalEnumerator_1_t10860 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77850_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77850 (InternalEnumerator_1_t10860 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77851_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77851 (InternalEnumerator_1_t10860 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77854(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77854_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&X509NameType_t2841_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77852_MethodInfo;
 void InternalEnumerator_1_Dispose_m77852 (InternalEnumerator_1_t10860 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77853_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77853 (InternalEnumerator_1_t10860 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77854 (InternalEnumerator_1_t10860 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisX509NameType_t2841_m90591(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisX509NameType_t2841_m90591_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10860____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10860_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10860, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10860____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10860_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10860, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10860_FieldInfos[] =
{
	&InternalEnumerator_1_t10860____array_0_FieldInfo,
	&InternalEnumerator_1_t10860____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10860____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10860_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77851_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10860____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10860_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77854_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10860_PropertyInfos[] =
{
	&InternalEnumerator_1_t10860____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10860____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10860_InternalEnumerator_1__ctor_m77849_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77849_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77849_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77849/* method */
	, &InternalEnumerator_1_t10860_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10860_InternalEnumerator_1__ctor_m77849_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77849_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77850_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77850_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77850/* method */
	, &InternalEnumerator_1_t10860_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77850_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77851_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77851_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77851/* method */
	, &InternalEnumerator_1_t10860_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77851_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77852_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77852_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77852/* method */
	, &InternalEnumerator_1_t10860_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77852_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77853_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77853_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77853/* method */
	, &InternalEnumerator_1_t10860_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77853_GenericMethod/* genericMethod */

};
extern Il2CppType X509NameType_t2841_0_0_0;
extern void* RuntimeInvoker_X509NameType_t2841 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77854_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509NameType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77854_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77854/* method */
	, &InternalEnumerator_1_t10860_il2cpp_TypeInfo/* declaring_type */
	, &X509NameType_t2841_0_0_0/* return_type */
	, RuntimeInvoker_X509NameType_t2841/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77854_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10860_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77849_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77850_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77851_MethodInfo,
	&InternalEnumerator_1_Dispose_m77852_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77853_MethodInfo,
	&InternalEnumerator_1_get_Current_m77854_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10860_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77851_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77853_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77850_MethodInfo,
	&InternalEnumerator_1_Dispose_m77852_MethodInfo,
	&InternalEnumerator_1_get_Current_m77854_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10860_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12970_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10860_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12970_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10860_0_0_0;
extern Il2CppType InternalEnumerator_1_t10860_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10860_GenericClass;
TypeInfo InternalEnumerator_1_t10860_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10860_MethodInfos/* methods */
	, InternalEnumerator_1_t10860_PropertyInfos/* properties */
	, InternalEnumerator_1_t10860_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10860_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10860_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10860_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10860_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10860_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10860_1_0_0/* this_arg */
	, InternalEnumerator_1_t10860_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10860_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10860)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14457_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509NameType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509NameType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509NameType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509NameType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509NameType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509NameType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509NameType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509NameType>
extern MethodInfo ICollection_1_get_Count_m102905_MethodInfo;
static PropertyInfo ICollection_1_t14457____Count_PropertyInfo = 
{
	&ICollection_1_t14457_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102905_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102906_MethodInfo;
static PropertyInfo ICollection_1_t14457____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14457_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102906_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14457_PropertyInfos[] =
{
	&ICollection_1_t14457____Count_PropertyInfo,
	&ICollection_1_t14457____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102905_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509NameType>::get_Count()
MethodInfo ICollection_1_get_Count_m102905_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14457_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102905_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102906_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509NameType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102906_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14457_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102906_GenericMethod/* genericMethod */

};
extern Il2CppType X509NameType_t2841_0_0_0;
extern Il2CppType X509NameType_t2841_0_0_0;
static ParameterInfo ICollection_1_t14457_ICollection_1_Add_m102907_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509NameType_t2841_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102907_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509NameType>::Add(T)
MethodInfo ICollection_1_Add_m102907_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14457_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14457_ICollection_1_Add_m102907_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102907_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102908_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509NameType>::Clear()
MethodInfo ICollection_1_Clear_m102908_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14457_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102908_GenericMethod/* genericMethod */

};
extern Il2CppType X509NameType_t2841_0_0_0;
static ParameterInfo ICollection_1_t14457_ICollection_1_Contains_m102909_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509NameType_t2841_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102909_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509NameType>::Contains(T)
MethodInfo ICollection_1_Contains_m102909_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14457_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14457_ICollection_1_Contains_m102909_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102909_GenericMethod/* genericMethod */

};
extern Il2CppType X509NameTypeU5BU5D_t11449_0_0_0;
extern Il2CppType X509NameTypeU5BU5D_t11449_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14457_ICollection_1_CopyTo_m102910_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &X509NameTypeU5BU5D_t11449_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102910_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509NameType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102910_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14457_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14457_ICollection_1_CopyTo_m102910_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102910_GenericMethod/* genericMethod */

};
extern Il2CppType X509NameType_t2841_0_0_0;
static ParameterInfo ICollection_1_t14457_ICollection_1_Remove_m102911_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509NameType_t2841_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102911_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509NameType>::Remove(T)
MethodInfo ICollection_1_Remove_m102911_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14457_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14457_ICollection_1_Remove_m102911_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102911_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14457_MethodInfos[] =
{
	&ICollection_1_get_Count_m102905_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102906_MethodInfo,
	&ICollection_1_Add_m102907_MethodInfo,
	&ICollection_1_Clear_m102908_MethodInfo,
	&ICollection_1_Contains_m102909_MethodInfo,
	&ICollection_1_CopyTo_m102910_MethodInfo,
	&ICollection_1_Remove_m102911_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14459_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14457_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14459_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14457_0_0_0;
extern Il2CppType ICollection_1_t14457_1_0_0;
struct ICollection_1_t14457;
extern Il2CppGenericClass ICollection_1_t14457_GenericClass;
TypeInfo ICollection_1_t14457_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14457_MethodInfos/* methods */
	, ICollection_1_t14457_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14457_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14457_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14457_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14457_0_0_0/* byval_arg */
	, &ICollection_1_t14457_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14457_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509NameType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509NameType>
extern Il2CppType IEnumerator_1_t12970_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102912_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509NameType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102912_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14459_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12970_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102912_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14459_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102912_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14459_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14459_0_0_0;
extern Il2CppType IEnumerable_1_t14459_1_0_0;
struct IEnumerable_1_t14459;
extern Il2CppGenericClass IEnumerable_1_t14459_GenericClass;
TypeInfo IEnumerable_1_t14459_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14459_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14459_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14459_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14459_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14459_0_0_0/* byval_arg */
	, &IEnumerable_1_t14459_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14459_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14458_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509NameType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509NameType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509NameType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509NameType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509NameType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509NameType>
extern MethodInfo IList_1_get_Item_m102913_MethodInfo;
extern MethodInfo IList_1_set_Item_m102914_MethodInfo;
static PropertyInfo IList_1_t14458____Item_PropertyInfo = 
{
	&IList_1_t14458_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102913_MethodInfo/* get */
	, &IList_1_set_Item_m102914_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14458_PropertyInfos[] =
{
	&IList_1_t14458____Item_PropertyInfo,
	NULL
};
extern Il2CppType X509NameType_t2841_0_0_0;
static ParameterInfo IList_1_t14458_IList_1_IndexOf_m102915_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509NameType_t2841_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102915_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509NameType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102915_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14458_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14458_IList_1_IndexOf_m102915_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102915_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509NameType_t2841_0_0_0;
static ParameterInfo IList_1_t14458_IList_1_Insert_m102916_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &X509NameType_t2841_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102916_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509NameType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102916_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14458_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14458_IList_1_Insert_m102916_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102916_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14458_IList_1_RemoveAt_m102917_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102917_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509NameType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102917_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14458_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14458_IList_1_RemoveAt_m102917_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102917_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14458_IList_1_get_Item_m102913_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType X509NameType_t2841_0_0_0;
extern void* RuntimeInvoker_X509NameType_t2841_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102913_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509NameType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102913_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14458_il2cpp_TypeInfo/* declaring_type */
	, &X509NameType_t2841_0_0_0/* return_type */
	, RuntimeInvoker_X509NameType_t2841_Int32_t23/* invoker_method */
	, IList_1_t14458_IList_1_get_Item_m102913_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102913_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509NameType_t2841_0_0_0;
static ParameterInfo IList_1_t14458_IList_1_set_Item_m102914_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &X509NameType_t2841_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102914_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509NameType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102914_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14458_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14458_IList_1_set_Item_m102914_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102914_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14458_MethodInfos[] =
{
	&IList_1_IndexOf_m102915_MethodInfo,
	&IList_1_Insert_m102916_MethodInfo,
	&IList_1_RemoveAt_m102917_MethodInfo,
	&IList_1_get_Item_m102913_MethodInfo,
	&IList_1_set_Item_m102914_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14458_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14457_il2cpp_TypeInfo,
	&IEnumerable_1_t14459_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14458_0_0_0;
extern Il2CppType IList_1_t14458_1_0_0;
struct IList_1_t14458;
extern Il2CppGenericClass IList_1_t14458_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14458_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14458_MethodInfos/* methods */
	, IList_1_t14458_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14458_il2cpp_TypeInfo/* element_class */
	, IList_1_t14458_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14458_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14458_0_0_0/* byval_arg */
	, &IList_1_t14458_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14458_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12972_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>
extern MethodInfo IEnumerator_1_get_Current_m102918_MethodInfo;
static PropertyInfo IEnumerator_1_t12972____Current_PropertyInfo = 
{
	&IEnumerator_1_t12972_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102918_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12972_PropertyInfos[] =
{
	&IEnumerator_1_t12972____Current_PropertyInfo,
	NULL
};
extern Il2CppType X509RevocationFlag_t2842_0_0_0;
extern void* RuntimeInvoker_X509RevocationFlag_t2842 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102918_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102918_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12972_il2cpp_TypeInfo/* declaring_type */
	, &X509RevocationFlag_t2842_0_0_0/* return_type */
	, RuntimeInvoker_X509RevocationFlag_t2842/* invoker_method */
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
	, &IEnumerator_1_get_Current_m102918_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12972_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102918_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12972_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12972_0_0_0;
extern Il2CppType IEnumerator_1_t12972_1_0_0;
struct IEnumerator_1_t12972;
extern Il2CppGenericClass IEnumerator_1_t12972_GenericClass;
TypeInfo IEnumerator_1_t12972_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12972_MethodInfos/* methods */
	, IEnumerator_1_t12972_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12972_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12972_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12972_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12972_0_0_0/* byval_arg */
	, &IEnumerator_1_t12972_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12972_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10861_il2cpp_TypeInfo;

extern TypeInfo X509RevocationFlag_t2842_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77860_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisX509RevocationFlag_t2842_m90602_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509RevocationFlag>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509RevocationFlag>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisX509RevocationFlag_t2842_m90602 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77855_MethodInfo;
 void InternalEnumerator_1__ctor_m77855 (InternalEnumerator_1_t10861 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77856_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77856 (InternalEnumerator_1_t10861 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77857_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77857 (InternalEnumerator_1_t10861 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77860(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77860_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&X509RevocationFlag_t2842_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77858_MethodInfo;
 void InternalEnumerator_1_Dispose_m77858 (InternalEnumerator_1_t10861 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77859_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77859 (InternalEnumerator_1_t10861 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77860 (InternalEnumerator_1_t10861 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisX509RevocationFlag_t2842_m90602(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisX509RevocationFlag_t2842_m90602_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10861____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10861_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10861, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10861____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10861_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10861, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10861_FieldInfos[] =
{
	&InternalEnumerator_1_t10861____array_0_FieldInfo,
	&InternalEnumerator_1_t10861____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10861____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10861_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77857_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10861____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10861_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77860_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10861_PropertyInfos[] =
{
	&InternalEnumerator_1_t10861____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10861____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10861_InternalEnumerator_1__ctor_m77855_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77855_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77855_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77855/* method */
	, &InternalEnumerator_1_t10861_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10861_InternalEnumerator_1__ctor_m77855_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77855_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77856_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77856_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77856/* method */
	, &InternalEnumerator_1_t10861_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77856_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77857_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77857_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77857/* method */
	, &InternalEnumerator_1_t10861_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77857_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77858_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77858_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77858/* method */
	, &InternalEnumerator_1_t10861_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77858_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77859_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77859_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77859/* method */
	, &InternalEnumerator_1_t10861_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77859_GenericMethod/* genericMethod */

};
extern Il2CppType X509RevocationFlag_t2842_0_0_0;
extern void* RuntimeInvoker_X509RevocationFlag_t2842 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77860_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77860_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77860/* method */
	, &InternalEnumerator_1_t10861_il2cpp_TypeInfo/* declaring_type */
	, &X509RevocationFlag_t2842_0_0_0/* return_type */
	, RuntimeInvoker_X509RevocationFlag_t2842/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77860_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10861_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77855_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77856_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77857_MethodInfo,
	&InternalEnumerator_1_Dispose_m77858_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77859_MethodInfo,
	&InternalEnumerator_1_get_Current_m77860_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10861_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77857_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77859_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77856_MethodInfo,
	&InternalEnumerator_1_Dispose_m77858_MethodInfo,
	&InternalEnumerator_1_get_Current_m77860_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10861_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12972_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10861_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12972_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10861_0_0_0;
extern Il2CppType InternalEnumerator_1_t10861_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10861_GenericClass;
TypeInfo InternalEnumerator_1_t10861_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10861_MethodInfos/* methods */
	, InternalEnumerator_1_t10861_PropertyInfos/* properties */
	, InternalEnumerator_1_t10861_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10861_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10861_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10861_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10861_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10861_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10861_1_0_0/* this_arg */
	, InternalEnumerator_1_t10861_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10861_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10861)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14460_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>
extern MethodInfo ICollection_1_get_Count_m102919_MethodInfo;
static PropertyInfo ICollection_1_t14460____Count_PropertyInfo = 
{
	&ICollection_1_t14460_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102919_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102920_MethodInfo;
static PropertyInfo ICollection_1_t14460____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14460_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102920_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14460_PropertyInfos[] =
{
	&ICollection_1_t14460____Count_PropertyInfo,
	&ICollection_1_t14460____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102919_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::get_Count()
MethodInfo ICollection_1_get_Count_m102919_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14460_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102919_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102920_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102920_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14460_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102920_GenericMethod/* genericMethod */

};
extern Il2CppType X509RevocationFlag_t2842_0_0_0;
extern Il2CppType X509RevocationFlag_t2842_0_0_0;
static ParameterInfo ICollection_1_t14460_ICollection_1_Add_m102921_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509RevocationFlag_t2842_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102921_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::Add(T)
MethodInfo ICollection_1_Add_m102921_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14460_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14460_ICollection_1_Add_m102921_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102921_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102922_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::Clear()
MethodInfo ICollection_1_Clear_m102922_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14460_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102922_GenericMethod/* genericMethod */

};
extern Il2CppType X509RevocationFlag_t2842_0_0_0;
static ParameterInfo ICollection_1_t14460_ICollection_1_Contains_m102923_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509RevocationFlag_t2842_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102923_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::Contains(T)
MethodInfo ICollection_1_Contains_m102923_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14460_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14460_ICollection_1_Contains_m102923_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102923_GenericMethod/* genericMethod */

};
extern Il2CppType X509RevocationFlagU5BU5D_t11450_0_0_0;
extern Il2CppType X509RevocationFlagU5BU5D_t11450_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14460_ICollection_1_CopyTo_m102924_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &X509RevocationFlagU5BU5D_t11450_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102924_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102924_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14460_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14460_ICollection_1_CopyTo_m102924_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102924_GenericMethod/* genericMethod */

};
extern Il2CppType X509RevocationFlag_t2842_0_0_0;
static ParameterInfo ICollection_1_t14460_ICollection_1_Remove_m102925_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509RevocationFlag_t2842_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102925_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::Remove(T)
MethodInfo ICollection_1_Remove_m102925_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14460_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14460_ICollection_1_Remove_m102925_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102925_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14460_MethodInfos[] =
{
	&ICollection_1_get_Count_m102919_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102920_MethodInfo,
	&ICollection_1_Add_m102921_MethodInfo,
	&ICollection_1_Clear_m102922_MethodInfo,
	&ICollection_1_Contains_m102923_MethodInfo,
	&ICollection_1_CopyTo_m102924_MethodInfo,
	&ICollection_1_Remove_m102925_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14462_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14460_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14462_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14460_0_0_0;
extern Il2CppType ICollection_1_t14460_1_0_0;
struct ICollection_1_t14460;
extern Il2CppGenericClass ICollection_1_t14460_GenericClass;
TypeInfo ICollection_1_t14460_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14460_MethodInfos/* methods */
	, ICollection_1_t14460_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14460_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14460_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14460_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14460_0_0_0/* byval_arg */
	, &ICollection_1_t14460_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14460_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>
extern Il2CppType IEnumerator_1_t12972_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102926_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102926_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14462_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12972_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102926_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14462_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102926_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14462_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14462_0_0_0;
extern Il2CppType IEnumerable_1_t14462_1_0_0;
struct IEnumerable_1_t14462;
extern Il2CppGenericClass IEnumerable_1_t14462_GenericClass;
TypeInfo IEnumerable_1_t14462_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14462_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14462_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14462_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14462_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14462_0_0_0/* byval_arg */
	, &IEnumerable_1_t14462_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14462_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14461_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>
extern MethodInfo IList_1_get_Item_m102927_MethodInfo;
extern MethodInfo IList_1_set_Item_m102928_MethodInfo;
static PropertyInfo IList_1_t14461____Item_PropertyInfo = 
{
	&IList_1_t14461_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102927_MethodInfo/* get */
	, &IList_1_set_Item_m102928_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14461_PropertyInfos[] =
{
	&IList_1_t14461____Item_PropertyInfo,
	NULL
};
extern Il2CppType X509RevocationFlag_t2842_0_0_0;
static ParameterInfo IList_1_t14461_IList_1_IndexOf_m102929_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509RevocationFlag_t2842_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102929_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102929_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14461_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14461_IList_1_IndexOf_m102929_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102929_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509RevocationFlag_t2842_0_0_0;
static ParameterInfo IList_1_t14461_IList_1_Insert_m102930_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &X509RevocationFlag_t2842_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102930_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102930_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14461_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14461_IList_1_Insert_m102930_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102930_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14461_IList_1_RemoveAt_m102931_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102931_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102931_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14461_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14461_IList_1_RemoveAt_m102931_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102931_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14461_IList_1_get_Item_m102927_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType X509RevocationFlag_t2842_0_0_0;
extern void* RuntimeInvoker_X509RevocationFlag_t2842_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102927_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102927_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14461_il2cpp_TypeInfo/* declaring_type */
	, &X509RevocationFlag_t2842_0_0_0/* return_type */
	, RuntimeInvoker_X509RevocationFlag_t2842_Int32_t23/* invoker_method */
	, IList_1_t14461_IList_1_get_Item_m102927_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102927_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509RevocationFlag_t2842_0_0_0;
static ParameterInfo IList_1_t14461_IList_1_set_Item_m102928_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &X509RevocationFlag_t2842_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102928_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationFlag>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102928_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14461_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14461_IList_1_set_Item_m102928_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102928_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14461_MethodInfos[] =
{
	&IList_1_IndexOf_m102929_MethodInfo,
	&IList_1_Insert_m102930_MethodInfo,
	&IList_1_RemoveAt_m102931_MethodInfo,
	&IList_1_get_Item_m102927_MethodInfo,
	&IList_1_set_Item_m102928_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14461_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14460_il2cpp_TypeInfo,
	&IEnumerable_1_t14462_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14461_0_0_0;
extern Il2CppType IList_1_t14461_1_0_0;
struct IList_1_t14461;
extern Il2CppGenericClass IList_1_t14461_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14461_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14461_MethodInfos/* methods */
	, IList_1_t14461_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14461_il2cpp_TypeInfo/* element_class */
	, IList_1_t14461_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14461_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14461_0_0_0/* byval_arg */
	, &IList_1_t14461_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14461_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12974_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>
extern MethodInfo IEnumerator_1_get_Current_m102932_MethodInfo;
static PropertyInfo IEnumerator_1_t12974____Current_PropertyInfo = 
{
	&IEnumerator_1_t12974_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102932_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12974_PropertyInfos[] =
{
	&IEnumerator_1_t12974____Current_PropertyInfo,
	NULL
};
extern Il2CppType X509RevocationMode_t2843_0_0_0;
extern void* RuntimeInvoker_X509RevocationMode_t2843 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102932_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102932_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12974_il2cpp_TypeInfo/* declaring_type */
	, &X509RevocationMode_t2843_0_0_0/* return_type */
	, RuntimeInvoker_X509RevocationMode_t2843/* invoker_method */
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
	, &IEnumerator_1_get_Current_m102932_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12974_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102932_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12974_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12974_0_0_0;
extern Il2CppType IEnumerator_1_t12974_1_0_0;
struct IEnumerator_1_t12974;
extern Il2CppGenericClass IEnumerator_1_t12974_GenericClass;
TypeInfo IEnumerator_1_t12974_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12974_MethodInfos/* methods */
	, IEnumerator_1_t12974_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12974_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12974_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12974_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12974_0_0_0/* byval_arg */
	, &IEnumerator_1_t12974_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12974_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10862_il2cpp_TypeInfo;

extern TypeInfo X509RevocationMode_t2843_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77866_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisX509RevocationMode_t2843_m90613_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509RevocationMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509RevocationMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisX509RevocationMode_t2843_m90613 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77861_MethodInfo;
 void InternalEnumerator_1__ctor_m77861 (InternalEnumerator_1_t10862 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77862_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77862 (InternalEnumerator_1_t10862 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77863_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77863 (InternalEnumerator_1_t10862 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77866(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77866_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&X509RevocationMode_t2843_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77864_MethodInfo;
 void InternalEnumerator_1_Dispose_m77864 (InternalEnumerator_1_t10862 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77865_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77865 (InternalEnumerator_1_t10862 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77866 (InternalEnumerator_1_t10862 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisX509RevocationMode_t2843_m90613(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisX509RevocationMode_t2843_m90613_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10862____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10862_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10862, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10862____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10862_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10862, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10862_FieldInfos[] =
{
	&InternalEnumerator_1_t10862____array_0_FieldInfo,
	&InternalEnumerator_1_t10862____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10862____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10862_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77863_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10862____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10862_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77866_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10862_PropertyInfos[] =
{
	&InternalEnumerator_1_t10862____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10862____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10862_InternalEnumerator_1__ctor_m77861_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77861_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77861_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77861/* method */
	, &InternalEnumerator_1_t10862_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10862_InternalEnumerator_1__ctor_m77861_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77861_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77862_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77862_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77862/* method */
	, &InternalEnumerator_1_t10862_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77862_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77863_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77863_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77863/* method */
	, &InternalEnumerator_1_t10862_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77863_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77864_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77864_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77864/* method */
	, &InternalEnumerator_1_t10862_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77864_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77865_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77865_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77865/* method */
	, &InternalEnumerator_1_t10862_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77865_GenericMethod/* genericMethod */

};
extern Il2CppType X509RevocationMode_t2843_0_0_0;
extern void* RuntimeInvoker_X509RevocationMode_t2843 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77866_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77866_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77866/* method */
	, &InternalEnumerator_1_t10862_il2cpp_TypeInfo/* declaring_type */
	, &X509RevocationMode_t2843_0_0_0/* return_type */
	, RuntimeInvoker_X509RevocationMode_t2843/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77866_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10862_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77861_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77862_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77863_MethodInfo,
	&InternalEnumerator_1_Dispose_m77864_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77865_MethodInfo,
	&InternalEnumerator_1_get_Current_m77866_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10862_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77863_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77865_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77862_MethodInfo,
	&InternalEnumerator_1_Dispose_m77864_MethodInfo,
	&InternalEnumerator_1_get_Current_m77866_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10862_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12974_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10862_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12974_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10862_0_0_0;
extern Il2CppType InternalEnumerator_1_t10862_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10862_GenericClass;
TypeInfo InternalEnumerator_1_t10862_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10862_MethodInfos/* methods */
	, InternalEnumerator_1_t10862_PropertyInfos/* properties */
	, InternalEnumerator_1_t10862_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10862_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10862_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10862_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10862_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10862_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10862_1_0_0/* this_arg */
	, InternalEnumerator_1_t10862_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10862_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10862)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14463_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>
extern MethodInfo ICollection_1_get_Count_m102933_MethodInfo;
static PropertyInfo ICollection_1_t14463____Count_PropertyInfo = 
{
	&ICollection_1_t14463_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102933_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102934_MethodInfo;
static PropertyInfo ICollection_1_t14463____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14463_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102934_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14463_PropertyInfos[] =
{
	&ICollection_1_t14463____Count_PropertyInfo,
	&ICollection_1_t14463____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102933_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::get_Count()
MethodInfo ICollection_1_get_Count_m102933_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14463_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102933_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102934_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102934_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14463_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102934_GenericMethod/* genericMethod */

};
extern Il2CppType X509RevocationMode_t2843_0_0_0;
extern Il2CppType X509RevocationMode_t2843_0_0_0;
static ParameterInfo ICollection_1_t14463_ICollection_1_Add_m102935_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509RevocationMode_t2843_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102935_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::Add(T)
MethodInfo ICollection_1_Add_m102935_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14463_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14463_ICollection_1_Add_m102935_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102935_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102936_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::Clear()
MethodInfo ICollection_1_Clear_m102936_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14463_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102936_GenericMethod/* genericMethod */

};
extern Il2CppType X509RevocationMode_t2843_0_0_0;
static ParameterInfo ICollection_1_t14463_ICollection_1_Contains_m102937_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509RevocationMode_t2843_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102937_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::Contains(T)
MethodInfo ICollection_1_Contains_m102937_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14463_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14463_ICollection_1_Contains_m102937_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102937_GenericMethod/* genericMethod */

};
extern Il2CppType X509RevocationModeU5BU5D_t11451_0_0_0;
extern Il2CppType X509RevocationModeU5BU5D_t11451_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14463_ICollection_1_CopyTo_m102938_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &X509RevocationModeU5BU5D_t11451_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102938_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102938_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14463_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14463_ICollection_1_CopyTo_m102938_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102938_GenericMethod/* genericMethod */

};
extern Il2CppType X509RevocationMode_t2843_0_0_0;
static ParameterInfo ICollection_1_t14463_ICollection_1_Remove_m102939_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509RevocationMode_t2843_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102939_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::Remove(T)
MethodInfo ICollection_1_Remove_m102939_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14463_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14463_ICollection_1_Remove_m102939_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102939_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14463_MethodInfos[] =
{
	&ICollection_1_get_Count_m102933_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102934_MethodInfo,
	&ICollection_1_Add_m102935_MethodInfo,
	&ICollection_1_Clear_m102936_MethodInfo,
	&ICollection_1_Contains_m102937_MethodInfo,
	&ICollection_1_CopyTo_m102938_MethodInfo,
	&ICollection_1_Remove_m102939_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14465_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14463_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14465_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14463_0_0_0;
extern Il2CppType ICollection_1_t14463_1_0_0;
struct ICollection_1_t14463;
extern Il2CppGenericClass ICollection_1_t14463_GenericClass;
TypeInfo ICollection_1_t14463_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14463_MethodInfos/* methods */
	, ICollection_1_t14463_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14463_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14463_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14463_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14463_0_0_0/* byval_arg */
	, &ICollection_1_t14463_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14463_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>
extern Il2CppType IEnumerator_1_t12974_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102940_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102940_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14465_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12974_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102940_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14465_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102940_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14465_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14465_0_0_0;
extern Il2CppType IEnumerable_1_t14465_1_0_0;
struct IEnumerable_1_t14465;
extern Il2CppGenericClass IEnumerable_1_t14465_GenericClass;
TypeInfo IEnumerable_1_t14465_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14465_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14465_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14465_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14465_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14465_0_0_0/* byval_arg */
	, &IEnumerable_1_t14465_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14465_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14464_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>
extern MethodInfo IList_1_get_Item_m102941_MethodInfo;
extern MethodInfo IList_1_set_Item_m102942_MethodInfo;
static PropertyInfo IList_1_t14464____Item_PropertyInfo = 
{
	&IList_1_t14464_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102941_MethodInfo/* get */
	, &IList_1_set_Item_m102942_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14464_PropertyInfos[] =
{
	&IList_1_t14464____Item_PropertyInfo,
	NULL
};
extern Il2CppType X509RevocationMode_t2843_0_0_0;
static ParameterInfo IList_1_t14464_IList_1_IndexOf_m102943_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509RevocationMode_t2843_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102943_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102943_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14464_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14464_IList_1_IndexOf_m102943_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102943_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509RevocationMode_t2843_0_0_0;
static ParameterInfo IList_1_t14464_IList_1_Insert_m102944_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &X509RevocationMode_t2843_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102944_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102944_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14464_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14464_IList_1_Insert_m102944_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102944_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14464_IList_1_RemoveAt_m102945_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102945_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102945_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14464_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14464_IList_1_RemoveAt_m102945_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102945_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14464_IList_1_get_Item_m102941_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType X509RevocationMode_t2843_0_0_0;
extern void* RuntimeInvoker_X509RevocationMode_t2843_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102941_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102941_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14464_il2cpp_TypeInfo/* declaring_type */
	, &X509RevocationMode_t2843_0_0_0/* return_type */
	, RuntimeInvoker_X509RevocationMode_t2843_Int32_t23/* invoker_method */
	, IList_1_t14464_IList_1_get_Item_m102941_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102941_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509RevocationMode_t2843_0_0_0;
static ParameterInfo IList_1_t14464_IList_1_set_Item_m102942_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &X509RevocationMode_t2843_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102942_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509RevocationMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102942_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14464_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14464_IList_1_set_Item_m102942_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102942_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14464_MethodInfos[] =
{
	&IList_1_IndexOf_m102943_MethodInfo,
	&IList_1_Insert_m102944_MethodInfo,
	&IList_1_RemoveAt_m102945_MethodInfo,
	&IList_1_get_Item_m102941_MethodInfo,
	&IList_1_set_Item_m102942_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14464_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14463_il2cpp_TypeInfo,
	&IEnumerable_1_t14465_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14464_0_0_0;
extern Il2CppType IList_1_t14464_1_0_0;
struct IList_1_t14464;
extern Il2CppGenericClass IList_1_t14464_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14464_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14464_MethodInfos/* methods */
	, IList_1_t14464_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14464_il2cpp_TypeInfo/* element_class */
	, IList_1_t14464_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14464_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14464_0_0_0/* byval_arg */
	, &IList_1_t14464_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14464_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12976_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>
extern MethodInfo IEnumerator_1_get_Current_m102946_MethodInfo;
static PropertyInfo IEnumerator_1_t12976____Current_PropertyInfo = 
{
	&IEnumerator_1_t12976_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102946_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12976_PropertyInfos[] =
{
	&IEnumerator_1_t12976____Current_PropertyInfo,
	NULL
};
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0;
extern void* RuntimeInvoker_X509SubjectKeyIdentifierHashAlgorithm_t2847 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102946_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102946_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12976_il2cpp_TypeInfo/* declaring_type */
	, &X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0/* return_type */
	, RuntimeInvoker_X509SubjectKeyIdentifierHashAlgorithm_t2847/* invoker_method */
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
	, &IEnumerator_1_get_Current_m102946_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12976_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102946_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12976_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12976_0_0_0;
extern Il2CppType IEnumerator_1_t12976_1_0_0;
struct IEnumerator_1_t12976;
extern Il2CppGenericClass IEnumerator_1_t12976_GenericClass;
TypeInfo IEnumerator_1_t12976_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12976_MethodInfos/* methods */
	, IEnumerator_1_t12976_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12976_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12976_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12976_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12976_0_0_0/* byval_arg */
	, &IEnumerator_1_t12976_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12976_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10863_il2cpp_TypeInfo;

extern TypeInfo X509SubjectKeyIdentifierHashAlgorithm_t2847_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77872_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisX509SubjectKeyIdentifierHashAlgorithm_t2847_m90624_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisX509SubjectKeyIdentifierHashAlgorithm_t2847_m90624 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77867_MethodInfo;
 void InternalEnumerator_1__ctor_m77867 (InternalEnumerator_1_t10863 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77868_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77868 (InternalEnumerator_1_t10863 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77869_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77869 (InternalEnumerator_1_t10863 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77872(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77872_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&X509SubjectKeyIdentifierHashAlgorithm_t2847_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77870_MethodInfo;
 void InternalEnumerator_1_Dispose_m77870 (InternalEnumerator_1_t10863 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77871_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77871 (InternalEnumerator_1_t10863 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77872 (InternalEnumerator_1_t10863 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisX509SubjectKeyIdentifierHashAlgorithm_t2847_m90624(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisX509SubjectKeyIdentifierHashAlgorithm_t2847_m90624_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10863____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10863_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10863, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10863____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10863_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10863, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10863_FieldInfos[] =
{
	&InternalEnumerator_1_t10863____array_0_FieldInfo,
	&InternalEnumerator_1_t10863____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10863____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10863_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77869_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10863____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10863_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77872_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10863_PropertyInfos[] =
{
	&InternalEnumerator_1_t10863____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10863____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10863_InternalEnumerator_1__ctor_m77867_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77867_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77867_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77867/* method */
	, &InternalEnumerator_1_t10863_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10863_InternalEnumerator_1__ctor_m77867_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77867_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77868_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77868_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77868/* method */
	, &InternalEnumerator_1_t10863_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77868_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77869_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77869_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77869/* method */
	, &InternalEnumerator_1_t10863_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77869_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77870_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77870_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77870/* method */
	, &InternalEnumerator_1_t10863_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77870_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77871_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77871_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77871/* method */
	, &InternalEnumerator_1_t10863_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77871_GenericMethod/* genericMethod */

};
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0;
extern void* RuntimeInvoker_X509SubjectKeyIdentifierHashAlgorithm_t2847 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77872_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77872_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77872/* method */
	, &InternalEnumerator_1_t10863_il2cpp_TypeInfo/* declaring_type */
	, &X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0/* return_type */
	, RuntimeInvoker_X509SubjectKeyIdentifierHashAlgorithm_t2847/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77872_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10863_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77867_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77868_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77869_MethodInfo,
	&InternalEnumerator_1_Dispose_m77870_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77871_MethodInfo,
	&InternalEnumerator_1_get_Current_m77872_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10863_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77869_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77871_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77868_MethodInfo,
	&InternalEnumerator_1_Dispose_m77870_MethodInfo,
	&InternalEnumerator_1_get_Current_m77872_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10863_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12976_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10863_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12976_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10863_0_0_0;
extern Il2CppType InternalEnumerator_1_t10863_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10863_GenericClass;
TypeInfo InternalEnumerator_1_t10863_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10863_MethodInfos/* methods */
	, InternalEnumerator_1_t10863_PropertyInfos/* properties */
	, InternalEnumerator_1_t10863_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10863_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10863_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10863_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10863_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10863_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10863_1_0_0/* this_arg */
	, InternalEnumerator_1_t10863_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10863_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10863)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14466_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>
extern MethodInfo ICollection_1_get_Count_m102947_MethodInfo;
static PropertyInfo ICollection_1_t14466____Count_PropertyInfo = 
{
	&ICollection_1_t14466_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102947_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102948_MethodInfo;
static PropertyInfo ICollection_1_t14466____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14466_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102948_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14466_PropertyInfos[] =
{
	&ICollection_1_t14466____Count_PropertyInfo,
	&ICollection_1_t14466____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102947_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_Count()
MethodInfo ICollection_1_get_Count_m102947_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14466_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102947_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102948_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102948_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14466_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102948_GenericMethod/* genericMethod */

};
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0;
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0;
static ParameterInfo ICollection_1_t14466_ICollection_1_Add_m102949_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102949_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Add(T)
MethodInfo ICollection_1_Add_m102949_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14466_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14466_ICollection_1_Add_m102949_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102949_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102950_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Clear()
MethodInfo ICollection_1_Clear_m102950_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14466_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102950_GenericMethod/* genericMethod */

};
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0;
static ParameterInfo ICollection_1_t14466_ICollection_1_Contains_m102951_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102951_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Contains(T)
MethodInfo ICollection_1_Contains_m102951_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14466_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14466_ICollection_1_Contains_m102951_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102951_GenericMethod/* genericMethod */

};
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithmU5BU5D_t11452_0_0_0;
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithmU5BU5D_t11452_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14466_ICollection_1_CopyTo_m102952_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &X509SubjectKeyIdentifierHashAlgorithmU5BU5D_t11452_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102952_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102952_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14466_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14466_ICollection_1_CopyTo_m102952_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102952_GenericMethod/* genericMethod */

};
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0;
static ParameterInfo ICollection_1_t14466_ICollection_1_Remove_m102953_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102953_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Remove(T)
MethodInfo ICollection_1_Remove_m102953_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14466_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14466_ICollection_1_Remove_m102953_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102953_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14466_MethodInfos[] =
{
	&ICollection_1_get_Count_m102947_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102948_MethodInfo,
	&ICollection_1_Add_m102949_MethodInfo,
	&ICollection_1_Clear_m102950_MethodInfo,
	&ICollection_1_Contains_m102951_MethodInfo,
	&ICollection_1_CopyTo_m102952_MethodInfo,
	&ICollection_1_Remove_m102953_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14468_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14466_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14468_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14466_0_0_0;
extern Il2CppType ICollection_1_t14466_1_0_0;
struct ICollection_1_t14466;
extern Il2CppGenericClass ICollection_1_t14466_GenericClass;
TypeInfo ICollection_1_t14466_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14466_MethodInfos/* methods */
	, ICollection_1_t14466_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14466_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14466_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14466_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14466_0_0_0/* byval_arg */
	, &ICollection_1_t14466_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14466_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>
extern Il2CppType IEnumerator_1_t12976_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102954_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102954_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14468_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12976_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102954_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14468_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102954_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14468_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14468_0_0_0;
extern Il2CppType IEnumerable_1_t14468_1_0_0;
struct IEnumerable_1_t14468;
extern Il2CppGenericClass IEnumerable_1_t14468_GenericClass;
TypeInfo IEnumerable_1_t14468_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14468_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14468_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14468_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14468_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14468_0_0_0/* byval_arg */
	, &IEnumerable_1_t14468_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14468_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14467_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>
extern MethodInfo IList_1_get_Item_m102955_MethodInfo;
extern MethodInfo IList_1_set_Item_m102956_MethodInfo;
static PropertyInfo IList_1_t14467____Item_PropertyInfo = 
{
	&IList_1_t14467_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102955_MethodInfo/* get */
	, &IList_1_set_Item_m102956_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14467_PropertyInfos[] =
{
	&IList_1_t14467____Item_PropertyInfo,
	NULL
};
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0;
static ParameterInfo IList_1_t14467_IList_1_IndexOf_m102957_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102957_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102957_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14467_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14467_IList_1_IndexOf_m102957_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102957_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0;
static ParameterInfo IList_1_t14467_IList_1_Insert_m102958_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102958_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102958_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14467_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14467_IList_1_Insert_m102958_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102958_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14467_IList_1_RemoveAt_m102959_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102959_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102959_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14467_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14467_IList_1_RemoveAt_m102959_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102959_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14467_IList_1_get_Item_m102955_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0;
extern void* RuntimeInvoker_X509SubjectKeyIdentifierHashAlgorithm_t2847_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102955_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102955_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14467_il2cpp_TypeInfo/* declaring_type */
	, &X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0/* return_type */
	, RuntimeInvoker_X509SubjectKeyIdentifierHashAlgorithm_t2847_Int32_t23/* invoker_method */
	, IList_1_t14467_IList_1_get_Item_m102955_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102955_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0;
static ParameterInfo IList_1_t14467_IList_1_set_Item_m102956_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &X509SubjectKeyIdentifierHashAlgorithm_t2847_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102956_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102956_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14467_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14467_IList_1_set_Item_m102956_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102956_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14467_MethodInfos[] =
{
	&IList_1_IndexOf_m102957_MethodInfo,
	&IList_1_Insert_m102958_MethodInfo,
	&IList_1_RemoveAt_m102959_MethodInfo,
	&IList_1_get_Item_m102955_MethodInfo,
	&IList_1_set_Item_m102956_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14467_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14466_il2cpp_TypeInfo,
	&IEnumerable_1_t14468_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14467_0_0_0;
extern Il2CppType IList_1_t14467_1_0_0;
struct IList_1_t14467;
extern Il2CppGenericClass IList_1_t14467_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14467_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14467_MethodInfos/* methods */
	, IList_1_t14467_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14467_il2cpp_TypeInfo/* element_class */
	, IList_1_t14467_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14467_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14467_0_0_0/* byval_arg */
	, &IList_1_t14467_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14467_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12978_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>
extern MethodInfo IEnumerator_1_get_Current_m102960_MethodInfo;
static PropertyInfo IEnumerator_1_t12978____Current_PropertyInfo = 
{
	&IEnumerator_1_t12978_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102960_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12978_PropertyInfos[] =
{
	&IEnumerator_1_t12978____Current_PropertyInfo,
	NULL
};
extern Il2CppType X509VerificationFlags_t2848_0_0_0;
extern void* RuntimeInvoker_X509VerificationFlags_t2848 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102960_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102960_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12978_il2cpp_TypeInfo/* declaring_type */
	, &X509VerificationFlags_t2848_0_0_0/* return_type */
	, RuntimeInvoker_X509VerificationFlags_t2848/* invoker_method */
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
	, &IEnumerator_1_get_Current_m102960_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12978_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102960_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12978_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12978_0_0_0;
extern Il2CppType IEnumerator_1_t12978_1_0_0;
struct IEnumerator_1_t12978;
extern Il2CppGenericClass IEnumerator_1_t12978_GenericClass;
TypeInfo IEnumerator_1_t12978_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12978_MethodInfos/* methods */
	, IEnumerator_1_t12978_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12978_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12978_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12978_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12978_0_0_0/* byval_arg */
	, &IEnumerator_1_t12978_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12978_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10864_il2cpp_TypeInfo;

extern TypeInfo X509VerificationFlags_t2848_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77878_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisX509VerificationFlags_t2848_m90635_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509VerificationFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509VerificationFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisX509VerificationFlags_t2848_m90635 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77873_MethodInfo;
 void InternalEnumerator_1__ctor_m77873 (InternalEnumerator_1_t10864 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77874_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77874 (InternalEnumerator_1_t10864 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77875_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77875 (InternalEnumerator_1_t10864 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77878(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77878_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&X509VerificationFlags_t2848_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77876_MethodInfo;
 void InternalEnumerator_1_Dispose_m77876 (InternalEnumerator_1_t10864 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77877_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77877 (InternalEnumerator_1_t10864 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77878 (InternalEnumerator_1_t10864 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisX509VerificationFlags_t2848_m90635(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisX509VerificationFlags_t2848_m90635_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10864____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10864_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10864, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10864____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10864_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10864, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10864_FieldInfos[] =
{
	&InternalEnumerator_1_t10864____array_0_FieldInfo,
	&InternalEnumerator_1_t10864____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10864____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10864_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77875_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10864____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10864_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77878_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10864_PropertyInfos[] =
{
	&InternalEnumerator_1_t10864____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10864____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10864_InternalEnumerator_1__ctor_m77873_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77873_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77873_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77873/* method */
	, &InternalEnumerator_1_t10864_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10864_InternalEnumerator_1__ctor_m77873_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77873_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77874_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77874_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77874/* method */
	, &InternalEnumerator_1_t10864_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77874_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77875_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77875_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77875/* method */
	, &InternalEnumerator_1_t10864_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77875_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77876_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77876_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77876/* method */
	, &InternalEnumerator_1_t10864_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77876_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77877_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77877_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77877/* method */
	, &InternalEnumerator_1_t10864_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77877_GenericMethod/* genericMethod */

};
extern Il2CppType X509VerificationFlags_t2848_0_0_0;
extern void* RuntimeInvoker_X509VerificationFlags_t2848 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77878_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77878_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77878/* method */
	, &InternalEnumerator_1_t10864_il2cpp_TypeInfo/* declaring_type */
	, &X509VerificationFlags_t2848_0_0_0/* return_type */
	, RuntimeInvoker_X509VerificationFlags_t2848/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77878_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10864_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77873_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77874_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77875_MethodInfo,
	&InternalEnumerator_1_Dispose_m77876_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77877_MethodInfo,
	&InternalEnumerator_1_get_Current_m77878_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10864_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77875_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77877_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77874_MethodInfo,
	&InternalEnumerator_1_Dispose_m77876_MethodInfo,
	&InternalEnumerator_1_get_Current_m77878_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10864_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12978_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10864_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12978_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10864_0_0_0;
extern Il2CppType InternalEnumerator_1_t10864_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10864_GenericClass;
TypeInfo InternalEnumerator_1_t10864_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10864_MethodInfos/* methods */
	, InternalEnumerator_1_t10864_PropertyInfos/* properties */
	, InternalEnumerator_1_t10864_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10864_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10864_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10864_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10864_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10864_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10864_1_0_0/* this_arg */
	, InternalEnumerator_1_t10864_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10864_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10864)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14469_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>
extern MethodInfo ICollection_1_get_Count_m102961_MethodInfo;
static PropertyInfo ICollection_1_t14469____Count_PropertyInfo = 
{
	&ICollection_1_t14469_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102961_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102962_MethodInfo;
static PropertyInfo ICollection_1_t14469____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14469_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102962_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14469_PropertyInfos[] =
{
	&ICollection_1_t14469____Count_PropertyInfo,
	&ICollection_1_t14469____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102961_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m102961_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14469_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102961_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102962_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102962_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14469_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102962_GenericMethod/* genericMethod */

};
extern Il2CppType X509VerificationFlags_t2848_0_0_0;
extern Il2CppType X509VerificationFlags_t2848_0_0_0;
static ParameterInfo ICollection_1_t14469_ICollection_1_Add_m102963_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509VerificationFlags_t2848_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102963_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Add(T)
MethodInfo ICollection_1_Add_m102963_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14469_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14469_ICollection_1_Add_m102963_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102963_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102964_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Clear()
MethodInfo ICollection_1_Clear_m102964_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14469_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102964_GenericMethod/* genericMethod */

};
extern Il2CppType X509VerificationFlags_t2848_0_0_0;
static ParameterInfo ICollection_1_t14469_ICollection_1_Contains_m102965_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509VerificationFlags_t2848_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102965_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m102965_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14469_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14469_ICollection_1_Contains_m102965_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102965_GenericMethod/* genericMethod */

};
extern Il2CppType X509VerificationFlagsU5BU5D_t11453_0_0_0;
extern Il2CppType X509VerificationFlagsU5BU5D_t11453_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14469_ICollection_1_CopyTo_m102966_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &X509VerificationFlagsU5BU5D_t11453_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102966_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102966_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14469_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14469_ICollection_1_CopyTo_m102966_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102966_GenericMethod/* genericMethod */

};
extern Il2CppType X509VerificationFlags_t2848_0_0_0;
static ParameterInfo ICollection_1_t14469_ICollection_1_Remove_m102967_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509VerificationFlags_t2848_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102967_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m102967_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14469_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14469_ICollection_1_Remove_m102967_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102967_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14469_MethodInfos[] =
{
	&ICollection_1_get_Count_m102961_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102962_MethodInfo,
	&ICollection_1_Add_m102963_MethodInfo,
	&ICollection_1_Clear_m102964_MethodInfo,
	&ICollection_1_Contains_m102965_MethodInfo,
	&ICollection_1_CopyTo_m102966_MethodInfo,
	&ICollection_1_Remove_m102967_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14471_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14469_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14471_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14469_0_0_0;
extern Il2CppType ICollection_1_t14469_1_0_0;
struct ICollection_1_t14469;
extern Il2CppGenericClass ICollection_1_t14469_GenericClass;
TypeInfo ICollection_1_t14469_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14469_MethodInfos/* methods */
	, ICollection_1_t14469_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14469_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14469_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14469_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14469_0_0_0/* byval_arg */
	, &ICollection_1_t14469_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14469_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>
extern Il2CppType IEnumerator_1_t12978_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102968_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102968_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14471_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12978_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102968_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14471_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102968_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14471_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14471_0_0_0;
extern Il2CppType IEnumerable_1_t14471_1_0_0;
struct IEnumerable_1_t14471;
extern Il2CppGenericClass IEnumerable_1_t14471_GenericClass;
TypeInfo IEnumerable_1_t14471_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14471_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14471_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14471_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14471_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14471_0_0_0/* byval_arg */
	, &IEnumerable_1_t14471_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14471_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14470_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>
extern MethodInfo IList_1_get_Item_m102969_MethodInfo;
extern MethodInfo IList_1_set_Item_m102970_MethodInfo;
static PropertyInfo IList_1_t14470____Item_PropertyInfo = 
{
	&IList_1_t14470_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102969_MethodInfo/* get */
	, &IList_1_set_Item_m102970_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14470_PropertyInfos[] =
{
	&IList_1_t14470____Item_PropertyInfo,
	NULL
};
extern Il2CppType X509VerificationFlags_t2848_0_0_0;
static ParameterInfo IList_1_t14470_IList_1_IndexOf_m102971_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509VerificationFlags_t2848_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102971_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102971_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14470_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14470_IList_1_IndexOf_m102971_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102971_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509VerificationFlags_t2848_0_0_0;
static ParameterInfo IList_1_t14470_IList_1_Insert_m102972_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &X509VerificationFlags_t2848_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102972_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102972_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14470_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14470_IList_1_Insert_m102972_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102972_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14470_IList_1_RemoveAt_m102973_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102973_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102973_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14470_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14470_IList_1_RemoveAt_m102973_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102973_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14470_IList_1_get_Item_m102969_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType X509VerificationFlags_t2848_0_0_0;
extern void* RuntimeInvoker_X509VerificationFlags_t2848_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102969_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102969_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14470_il2cpp_TypeInfo/* declaring_type */
	, &X509VerificationFlags_t2848_0_0_0/* return_type */
	, RuntimeInvoker_X509VerificationFlags_t2848_Int32_t23/* invoker_method */
	, IList_1_t14470_IList_1_get_Item_m102969_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102969_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType X509VerificationFlags_t2848_0_0_0;
static ParameterInfo IList_1_t14470_IList_1_set_Item_m102970_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &X509VerificationFlags_t2848_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102970_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102970_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14470_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14470_IList_1_set_Item_m102970_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102970_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14470_MethodInfos[] =
{
	&IList_1_IndexOf_m102971_MethodInfo,
	&IList_1_Insert_m102972_MethodInfo,
	&IList_1_RemoveAt_m102973_MethodInfo,
	&IList_1_get_Item_m102969_MethodInfo,
	&IList_1_set_Item_m102970_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14470_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14469_il2cpp_TypeInfo,
	&IEnumerable_1_t14471_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14470_0_0_0;
extern Il2CppType IList_1_t14470_1_0_0;
struct IList_1_t14470;
extern Il2CppGenericClass IList_1_t14470_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14470_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14470_MethodInfos/* methods */
	, IList_1_t14470_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14470_il2cpp_TypeInfo/* element_class */
	, IList_1_t14470_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14470_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14470_0_0_0/* byval_arg */
	, &IList_1_t14470_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14470_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12980_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>
extern MethodInfo IEnumerator_1_get_Current_m102974_MethodInfo;
static PropertyInfo IEnumerator_1_t12980____Current_PropertyInfo = 
{
	&IEnumerator_1_t12980_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102974_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12980_PropertyInfos[] =
{
	&IEnumerator_1_t12980____Current_PropertyInfo,
	NULL
};
extern Il2CppType AsnDecodeStatus_t2849_0_0_0;
extern void* RuntimeInvoker_AsnDecodeStatus_t2849 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102974_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102974_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12980_il2cpp_TypeInfo/* declaring_type */
	, &AsnDecodeStatus_t2849_0_0_0/* return_type */
	, RuntimeInvoker_AsnDecodeStatus_t2849/* invoker_method */
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
	, &IEnumerator_1_get_Current_m102974_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12980_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102974_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12980_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12980_0_0_0;
extern Il2CppType IEnumerator_1_t12980_1_0_0;
struct IEnumerator_1_t12980;
extern Il2CppGenericClass IEnumerator_1_t12980_GenericClass;
TypeInfo IEnumerator_1_t12980_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12980_MethodInfos/* methods */
	, IEnumerator_1_t12980_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12980_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12980_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12980_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12980_0_0_0/* byval_arg */
	, &IEnumerator_1_t12980_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12980_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10865_il2cpp_TypeInfo;

extern TypeInfo AsnDecodeStatus_t2849_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77884_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAsnDecodeStatus_t2849_m90646_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.AsnDecodeStatus>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.AsnDecodeStatus>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisAsnDecodeStatus_t2849_m90646 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m77879_MethodInfo;
 void InternalEnumerator_1__ctor_m77879 (InternalEnumerator_1_t10865 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77880_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77880 (InternalEnumerator_1_t10865 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77881_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77881 (InternalEnumerator_1_t10865 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m77884(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m77884_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AsnDecodeStatus_t2849_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m77882_MethodInfo;
 void InternalEnumerator_1_Dispose_m77882 (InternalEnumerator_1_t10865 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m77883_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m77883 (InternalEnumerator_1_t10865 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m77884 (InternalEnumerator_1_t10865 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisAsnDecodeStatus_t2849_m90646(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAsnDecodeStatus_t2849_m90646_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10865____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10865_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10865, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10865____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10865_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10865, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10865_FieldInfos[] =
{
	&InternalEnumerator_1_t10865____array_0_FieldInfo,
	&InternalEnumerator_1_t10865____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t10865____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10865_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77881_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10865____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10865_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77884_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10865_PropertyInfos[] =
{
	&InternalEnumerator_1_t10865____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10865____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10865_InternalEnumerator_1__ctor_m77879_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77879_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77879_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m77879/* method */
	, &InternalEnumerator_1_t10865_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10865_InternalEnumerator_1__ctor_m77879_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77879_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77880_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77880_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77880/* method */
	, &InternalEnumerator_1_t10865_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77880_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77881_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77881_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77881/* method */
	, &InternalEnumerator_1_t10865_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77881_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77882_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77882_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m77882/* method */
	, &InternalEnumerator_1_t10865_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77882_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77883_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77883_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m77883/* method */
	, &InternalEnumerator_1_t10865_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77883_GenericMethod/* genericMethod */

};
extern Il2CppType AsnDecodeStatus_t2849_0_0_0;
extern void* RuntimeInvoker_AsnDecodeStatus_t2849 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77884_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77884_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m77884/* method */
	, &InternalEnumerator_1_t10865_il2cpp_TypeInfo/* declaring_type */
	, &AsnDecodeStatus_t2849_0_0_0/* return_type */
	, RuntimeInvoker_AsnDecodeStatus_t2849/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m77884_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10865_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77879_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77880_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77881_MethodInfo,
	&InternalEnumerator_1_Dispose_m77882_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77883_MethodInfo,
	&InternalEnumerator_1_get_Current_m77884_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t10865_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77881_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77883_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77880_MethodInfo,
	&InternalEnumerator_1_Dispose_m77882_MethodInfo,
	&InternalEnumerator_1_get_Current_m77884_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10865_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12980_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10865_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12980_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10865_0_0_0;
extern Il2CppType InternalEnumerator_1_t10865_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10865_GenericClass;
TypeInfo InternalEnumerator_1_t10865_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10865_MethodInfos/* methods */
	, InternalEnumerator_1_t10865_PropertyInfos/* properties */
	, InternalEnumerator_1_t10865_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10865_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10865_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10865_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10865_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10865_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10865_1_0_0/* this_arg */
	, InternalEnumerator_1_t10865_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10865_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10865)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14472_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>
extern MethodInfo ICollection_1_get_Count_m102975_MethodInfo;
static PropertyInfo ICollection_1_t14472____Count_PropertyInfo = 
{
	&ICollection_1_t14472_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102975_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102976_MethodInfo;
static PropertyInfo ICollection_1_t14472____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14472_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102976_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14472_PropertyInfos[] =
{
	&ICollection_1_t14472____Count_PropertyInfo,
	&ICollection_1_t14472____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102975_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::get_Count()
MethodInfo ICollection_1_get_Count_m102975_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14472_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102975_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102976_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102976_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14472_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102976_GenericMethod/* genericMethod */

};
extern Il2CppType AsnDecodeStatus_t2849_0_0_0;
extern Il2CppType AsnDecodeStatus_t2849_0_0_0;
static ParameterInfo ICollection_1_t14472_ICollection_1_Add_m102977_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AsnDecodeStatus_t2849_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102977_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::Add(T)
MethodInfo ICollection_1_Add_m102977_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14472_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, ICollection_1_t14472_ICollection_1_Add_m102977_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102977_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102978_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::Clear()
MethodInfo ICollection_1_Clear_m102978_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14472_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102978_GenericMethod/* genericMethod */

};
extern Il2CppType AsnDecodeStatus_t2849_0_0_0;
static ParameterInfo ICollection_1_t14472_ICollection_1_Contains_m102979_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AsnDecodeStatus_t2849_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102979_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::Contains(T)
MethodInfo ICollection_1_Contains_m102979_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14472_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14472_ICollection_1_Contains_m102979_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102979_GenericMethod/* genericMethod */

};
extern Il2CppType AsnDecodeStatusU5BU5D_t11454_0_0_0;
extern Il2CppType AsnDecodeStatusU5BU5D_t11454_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14472_ICollection_1_CopyTo_m102980_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AsnDecodeStatusU5BU5D_t11454_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102980_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102980_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14472_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14472_ICollection_1_CopyTo_m102980_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102980_GenericMethod/* genericMethod */

};
extern Il2CppType AsnDecodeStatus_t2849_0_0_0;
static ParameterInfo ICollection_1_t14472_ICollection_1_Remove_m102981_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AsnDecodeStatus_t2849_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102981_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::Remove(T)
MethodInfo ICollection_1_Remove_m102981_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14472_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, ICollection_1_t14472_ICollection_1_Remove_m102981_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102981_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14472_MethodInfos[] =
{
	&ICollection_1_get_Count_m102975_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102976_MethodInfo,
	&ICollection_1_Add_m102977_MethodInfo,
	&ICollection_1_Clear_m102978_MethodInfo,
	&ICollection_1_Contains_m102979_MethodInfo,
	&ICollection_1_CopyTo_m102980_MethodInfo,
	&ICollection_1_Remove_m102981_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14474_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14472_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14474_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14472_0_0_0;
extern Il2CppType ICollection_1_t14472_1_0_0;
struct ICollection_1_t14472;
extern Il2CppGenericClass ICollection_1_t14472_GenericClass;
TypeInfo ICollection_1_t14472_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14472_MethodInfos/* methods */
	, ICollection_1_t14472_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14472_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14472_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14472_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14472_0_0_0/* byval_arg */
	, &ICollection_1_t14472_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14472_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.AsnDecodeStatus>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.AsnDecodeStatus>
extern Il2CppType IEnumerator_1_t12980_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102982_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.AsnDecodeStatus>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102982_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14474_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12980_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102982_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14474_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102982_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14474_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14474_0_0_0;
extern Il2CppType IEnumerable_1_t14474_1_0_0;
struct IEnumerable_1_t14474;
extern Il2CppGenericClass IEnumerable_1_t14474_GenericClass;
TypeInfo IEnumerable_1_t14474_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14474_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14474_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14474_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14474_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14474_0_0_0/* byval_arg */
	, &IEnumerable_1_t14474_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14474_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14473_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>
extern MethodInfo IList_1_get_Item_m102983_MethodInfo;
extern MethodInfo IList_1_set_Item_m102984_MethodInfo;
static PropertyInfo IList_1_t14473____Item_PropertyInfo = 
{
	&IList_1_t14473_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102983_MethodInfo/* get */
	, &IList_1_set_Item_m102984_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14473_PropertyInfos[] =
{
	&IList_1_t14473____Item_PropertyInfo,
	NULL
};
extern Il2CppType AsnDecodeStatus_t2849_0_0_0;
static ParameterInfo IList_1_t14473_IList_1_IndexOf_m102985_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AsnDecodeStatus_t2849_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102985_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102985_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14473_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14473_IList_1_IndexOf_m102985_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102985_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType AsnDecodeStatus_t2849_0_0_0;
static ParameterInfo IList_1_t14473_IList_1_Insert_m102986_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AsnDecodeStatus_t2849_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m102986_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m102986_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14473_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14473_IList_1_Insert_m102986_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m102986_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14473_IList_1_RemoveAt_m102987_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m102987_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m102987_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14473_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14473_IList_1_RemoveAt_m102987_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m102987_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14473_IList_1_get_Item_m102983_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType AsnDecodeStatus_t2849_0_0_0;
extern void* RuntimeInvoker_AsnDecodeStatus_t2849_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102983_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102983_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14473_il2cpp_TypeInfo/* declaring_type */
	, &AsnDecodeStatus_t2849_0_0_0/* return_type */
	, RuntimeInvoker_AsnDecodeStatus_t2849_Int32_t23/* invoker_method */
	, IList_1_t14473_IList_1_get_Item_m102983_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102983_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType AsnDecodeStatus_t2849_0_0_0;
static ParameterInfo IList_1_t14473_IList_1_set_Item_m102984_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AsnDecodeStatus_t2849_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102984_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102984_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14473_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, IList_1_t14473_IList_1_set_Item_m102984_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102984_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14473_MethodInfos[] =
{
	&IList_1_IndexOf_m102985_MethodInfo,
	&IList_1_Insert_m102986_MethodInfo,
	&IList_1_RemoveAt_m102987_MethodInfo,
	&IList_1_get_Item_m102983_MethodInfo,
	&IList_1_set_Item_m102984_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14473_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14472_il2cpp_TypeInfo,
	&IEnumerable_1_t14474_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14473_0_0_0;
extern Il2CppType IList_1_t14473_1_0_0;
struct IList_1_t14473;
extern Il2CppGenericClass IList_1_t14473_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14473_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14473_MethodInfos/* methods */
	, IList_1_t14473_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14473_il2cpp_TypeInfo/* element_class */
	, IList_1_t14473_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14473_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14473_0_0_0/* byval_arg */
	, &IList_1_t14473_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14473_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12982_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Capture>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Capture>
extern MethodInfo IEnumerator_1_get_Current_m102988_MethodInfo;
static PropertyInfo IEnumerator_1_t12982____Current_PropertyInfo = 
{
	&IEnumerator_1_t12982_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m102988_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12982_PropertyInfos[] =
{
	&IEnumerator_1_t12982____Current_PropertyInfo,
	NULL
};
extern Il2CppType Capture_t905_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m102988_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Capture>::get_Current()
MethodInfo IEnumerator_1_get_Current_m102988_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12982_il2cpp_TypeInfo/* declaring_type */
	, &Capture_t905_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m102988_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12982_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m102988_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12982_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12982_0_0_0;
extern Il2CppType IEnumerator_1_t12982_1_0_0;
struct IEnumerator_1_t12982;
extern Il2CppGenericClass IEnumerator_1_t12982_GenericClass;
TypeInfo IEnumerator_1_t12982_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12982_MethodInfos/* methods */
	, IEnumerator_1_t12982_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12982_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12982_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12982_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12982_0_0_0/* byval_arg */
	, &IEnumerator_1_t12982_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12982_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10866_il2cpp_TypeInfo;

extern TypeInfo Capture_t905_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77890_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCapture_t905_m90657_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Capture>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Capture>(System.Int32)
#define Array_InternalArray__get_Item_TisCapture_t905_m90657(__this, p0, method) (Capture_t905 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10866____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10866_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10866, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10866____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10866_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10866, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10866_FieldInfos[] =
{
	&InternalEnumerator_1_t10866____array_0_FieldInfo,
	&InternalEnumerator_1_t10866____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77887_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10866____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10866_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77887_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10866____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10866_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77890_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10866_PropertyInfos[] =
{
	&InternalEnumerator_1_t10866____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10866____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10866_InternalEnumerator_1__ctor_m77885_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77885_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77885_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10866_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10866_InternalEnumerator_1__ctor_m77885_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77885_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77886_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77886_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10866_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77886_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77887_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77887_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10866_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77887_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77888_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77888_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10866_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77888_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77889_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77889_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10866_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77889_GenericMethod/* genericMethod */

};
extern Il2CppType Capture_t905_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77890_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77890_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10866_il2cpp_TypeInfo/* declaring_type */
	, &Capture_t905_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m77890_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10866_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77885_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77886_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77887_MethodInfo,
	&InternalEnumerator_1_Dispose_m77888_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77889_MethodInfo,
	&InternalEnumerator_1_get_Current_m77890_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m77889_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77886_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m77888_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10866_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77887_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77889_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77886_MethodInfo,
	&InternalEnumerator_1_Dispose_m77888_MethodInfo,
	&InternalEnumerator_1_get_Current_m77890_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10866_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12982_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10866_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12982_il2cpp_TypeInfo, 8},
};
extern TypeInfo Capture_t905_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10866_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m77890_MethodInfo/* Method Usage */,
	&Capture_t905_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisCapture_t905_m90657_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10866_0_0_0;
extern Il2CppType InternalEnumerator_1_t10866_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10866_GenericClass;
TypeInfo InternalEnumerator_1_t10866_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10866_MethodInfos/* methods */
	, InternalEnumerator_1_t10866_PropertyInfos/* properties */
	, InternalEnumerator_1_t10866_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10866_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10866_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10866_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10866_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10866_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10866_1_0_0/* this_arg */
	, InternalEnumerator_1_t10866_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10866_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10866_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10866)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14475_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>
extern MethodInfo ICollection_1_get_Count_m102989_MethodInfo;
static PropertyInfo ICollection_1_t14475____Count_PropertyInfo = 
{
	&ICollection_1_t14475_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m102989_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m102990_MethodInfo;
static PropertyInfo ICollection_1_t14475____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14475_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m102990_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14475_PropertyInfos[] =
{
	&ICollection_1_t14475____Count_PropertyInfo,
	&ICollection_1_t14475____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m102989_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::get_Count()
MethodInfo ICollection_1_get_Count_m102989_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14475_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m102989_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m102990_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m102990_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14475_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m102990_GenericMethod/* genericMethod */

};
extern Il2CppType Capture_t905_0_0_0;
extern Il2CppType Capture_t905_0_0_0;
static ParameterInfo ICollection_1_t14475_ICollection_1_Add_m102991_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Capture_t905_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m102991_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Add(T)
MethodInfo ICollection_1_Add_m102991_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14475_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14475_ICollection_1_Add_m102991_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m102991_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m102992_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Clear()
MethodInfo ICollection_1_Clear_m102992_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14475_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m102992_GenericMethod/* genericMethod */

};
extern Il2CppType Capture_t905_0_0_0;
static ParameterInfo ICollection_1_t14475_ICollection_1_Contains_m102993_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Capture_t905_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m102993_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Contains(T)
MethodInfo ICollection_1_Contains_m102993_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14475_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14475_ICollection_1_Contains_m102993_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m102993_GenericMethod/* genericMethod */

};
extern Il2CppType CaptureU5BU5D_t2853_0_0_0;
extern Il2CppType CaptureU5BU5D_t2853_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14475_ICollection_1_CopyTo_m102994_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CaptureU5BU5D_t2853_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m102994_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m102994_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14475_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14475_ICollection_1_CopyTo_m102994_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m102994_GenericMethod/* genericMethod */

};
extern Il2CppType Capture_t905_0_0_0;
static ParameterInfo ICollection_1_t14475_ICollection_1_Remove_m102995_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Capture_t905_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m102995_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Remove(T)
MethodInfo ICollection_1_Remove_m102995_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14475_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14475_ICollection_1_Remove_m102995_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m102995_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14475_MethodInfos[] =
{
	&ICollection_1_get_Count_m102989_MethodInfo,
	&ICollection_1_get_IsReadOnly_m102990_MethodInfo,
	&ICollection_1_Add_m102991_MethodInfo,
	&ICollection_1_Clear_m102992_MethodInfo,
	&ICollection_1_Contains_m102993_MethodInfo,
	&ICollection_1_CopyTo_m102994_MethodInfo,
	&ICollection_1_Remove_m102995_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14477_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14475_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14477_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14475_0_0_0;
extern Il2CppType ICollection_1_t14475_1_0_0;
struct ICollection_1_t14475;
extern Il2CppGenericClass ICollection_1_t14475_GenericClass;
TypeInfo ICollection_1_t14475_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14475_MethodInfos/* methods */
	, ICollection_1_t14475_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14475_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14475_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14475_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14475_0_0_0/* byval_arg */
	, &ICollection_1_t14475_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14475_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Capture>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Capture>
extern Il2CppType IEnumerator_1_t12982_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m102996_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Capture>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m102996_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14477_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12982_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m102996_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14477_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m102996_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14477_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14477_0_0_0;
extern Il2CppType IEnumerable_1_t14477_1_0_0;
struct IEnumerable_1_t14477;
extern Il2CppGenericClass IEnumerable_1_t14477_GenericClass;
TypeInfo IEnumerable_1_t14477_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14477_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14477_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14477_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14477_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14477_0_0_0/* byval_arg */
	, &IEnumerable_1_t14477_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14477_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14476_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>
extern MethodInfo IList_1_get_Item_m102997_MethodInfo;
extern MethodInfo IList_1_set_Item_m102998_MethodInfo;
static PropertyInfo IList_1_t14476____Item_PropertyInfo = 
{
	&IList_1_t14476_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m102997_MethodInfo/* get */
	, &IList_1_set_Item_m102998_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14476_PropertyInfos[] =
{
	&IList_1_t14476____Item_PropertyInfo,
	NULL
};
extern Il2CppType Capture_t905_0_0_0;
static ParameterInfo IList_1_t14476_IList_1_IndexOf_m102999_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Capture_t905_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m102999_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::IndexOf(T)
MethodInfo IList_1_IndexOf_m102999_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14476_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14476_IList_1_IndexOf_m102999_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m102999_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Capture_t905_0_0_0;
static ParameterInfo IList_1_t14476_IList_1_Insert_m103000_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Capture_t905_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103000_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103000_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14476_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14476_IList_1_Insert_m103000_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103000_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14476_IList_1_RemoveAt_m103001_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103001_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103001_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14476_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14476_IList_1_RemoveAt_m103001_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103001_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14476_IList_1_get_Item_m102997_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Capture_t905_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m102997_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m102997_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14476_il2cpp_TypeInfo/* declaring_type */
	, &Capture_t905_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14476_IList_1_get_Item_m102997_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m102997_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Capture_t905_0_0_0;
static ParameterInfo IList_1_t14476_IList_1_set_Item_m102998_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Capture_t905_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m102998_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m102998_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14476_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14476_IList_1_set_Item_m102998_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m102998_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14476_MethodInfos[] =
{
	&IList_1_IndexOf_m102999_MethodInfo,
	&IList_1_Insert_m103000_MethodInfo,
	&IList_1_RemoveAt_m103001_MethodInfo,
	&IList_1_get_Item_m102997_MethodInfo,
	&IList_1_set_Item_m102998_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14476_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14475_il2cpp_TypeInfo,
	&IEnumerable_1_t14477_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14476_0_0_0;
extern Il2CppType IList_1_t14476_1_0_0;
struct IList_1_t14476;
extern Il2CppGenericClass IList_1_t14476_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14476_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14476_MethodInfos/* methods */
	, IList_1_t14476_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14476_il2cpp_TypeInfo/* element_class */
	, IList_1_t14476_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14476_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14476_0_0_0/* byval_arg */
	, &IList_1_t14476_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14476_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12984_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Group>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Group>
extern MethodInfo IEnumerator_1_get_Current_m103002_MethodInfo;
static PropertyInfo IEnumerator_1_t12984____Current_PropertyInfo = 
{
	&IEnumerator_1_t12984_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103002_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12984_PropertyInfos[] =
{
	&IEnumerator_1_t12984____Current_PropertyInfo,
	NULL
};
extern Il2CppType Group_t908_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103002_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Group>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103002_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12984_il2cpp_TypeInfo/* declaring_type */
	, &Group_t908_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m103002_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12984_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103002_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12984_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12984_0_0_0;
extern Il2CppType IEnumerator_1_t12984_1_0_0;
struct IEnumerator_1_t12984;
extern Il2CppGenericClass IEnumerator_1_t12984_GenericClass;
TypeInfo IEnumerator_1_t12984_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12984_MethodInfos/* methods */
	, IEnumerator_1_t12984_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12984_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12984_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12984_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12984_0_0_0/* byval_arg */
	, &IEnumerator_1_t12984_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12984_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo InternalEnumerator_1_t10867_il2cpp_TypeInfo;

extern TypeInfo Group_t908_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m77896_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisGroup_t908_m90668_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Group>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Group>(System.Int32)
#define Array_InternalArray__get_Item_TisGroup_t908_m90668(__this, p0, method) (Group_t908 *)Array_InternalArray__get_Item_TisObject_t_m79431_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t10867____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t10867_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10867, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo InternalEnumerator_1_t10867____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t23_0_0_1/* type */
	, &InternalEnumerator_1_t10867_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t10867, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t10867_FieldInfos[] =
{
	&InternalEnumerator_1_t10867____array_0_FieldInfo,
	&InternalEnumerator_1_t10867____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77893_MethodInfo;
static PropertyInfo InternalEnumerator_1_t10867____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10867_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77893_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t10867____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t10867_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m77896_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t10867_PropertyInfos[] =
{
	&InternalEnumerator_1_t10867____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t10867____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t10867_InternalEnumerator_1__ctor_m77891_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m77891_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m77891_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m13531_gshared/* method */
	, &InternalEnumerator_1_t10867_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InternalEnumerator_1_t10867_InternalEnumerator_1__ctor_m77891_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m77891_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77892_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77892_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13533_gshared/* method */
	, &InternalEnumerator_1_t10867_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77892_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77893_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77893_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13535_gshared/* method */
	, &InternalEnumerator_1_t10867_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77893_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m77894_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m77894_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m13537_gshared/* method */
	, &InternalEnumerator_1_t10867_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m77894_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m77895_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m77895_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m13539_gshared/* method */
	, &InternalEnumerator_1_t10867_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m77895_GenericMethod/* genericMethod */

};
extern Il2CppType Group_t908_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m77896_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m77896_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m13541_gshared/* method */
	, &InternalEnumerator_1_t10867_il2cpp_TypeInfo/* declaring_type */
	, &Group_t908_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m77896_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t10867_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m77891_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77892_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77893_MethodInfo,
	&InternalEnumerator_1_Dispose_m77894_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77895_MethodInfo,
	&InternalEnumerator_1_get_Current_m77896_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m77895_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77892_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m77894_MethodInfo;
static MethodInfo* InternalEnumerator_1_t10867_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m77893_MethodInfo,
	&InternalEnumerator_1_MoveNext_m77895_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m77892_MethodInfo,
	&InternalEnumerator_1_Dispose_m77894_MethodInfo,
	&InternalEnumerator_1_get_Current_m77896_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t10867_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
	&IEnumerator_1_t12984_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t10867_InterfacesOffsets[] = 
{
	{ &IEnumerator_t30_il2cpp_TypeInfo, 4},
	{ &IDisposable_t31_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t12984_il2cpp_TypeInfo, 8},
};
extern TypeInfo Group_t908_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t10867_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m77896_MethodInfo/* Method Usage */,
	&Group_t908_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisGroup_t908_m90668_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t10867_0_0_0;
extern Il2CppType InternalEnumerator_1_t10867_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t10867_GenericClass;
TypeInfo InternalEnumerator_1_t10867_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t10867_MethodInfos/* methods */
	, InternalEnumerator_1_t10867_PropertyInfos/* properties */
	, InternalEnumerator_1_t10867_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t10867_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t10867_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t10867_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t10867_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t10867_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t10867_1_0_0/* this_arg */
	, InternalEnumerator_1_t10867_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t10867_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t10867_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t10867)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t14478_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>
extern MethodInfo ICollection_1_get_Count_m103003_MethodInfo;
static PropertyInfo ICollection_1_t14478____Count_PropertyInfo = 
{
	&ICollection_1_t14478_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m103003_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m103004_MethodInfo;
static PropertyInfo ICollection_1_t14478____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t14478_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m103004_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t14478_PropertyInfos[] =
{
	&ICollection_1_t14478____Count_PropertyInfo,
	&ICollection_1_t14478____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m103003_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::get_Count()
MethodInfo ICollection_1_get_Count_m103003_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t14478_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m103003_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m103004_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m103004_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t14478_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m103004_GenericMethod/* genericMethod */

};
extern Il2CppType Group_t908_0_0_0;
extern Il2CppType Group_t908_0_0_0;
static ParameterInfo ICollection_1_t14478_ICollection_1_Add_m103005_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Group_t908_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m103005_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Add(T)
MethodInfo ICollection_1_Add_m103005_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t14478_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, ICollection_1_t14478_ICollection_1_Add_m103005_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m103005_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m103006_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Clear()
MethodInfo ICollection_1_Clear_m103006_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t14478_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m103006_GenericMethod/* genericMethod */

};
extern Il2CppType Group_t908_0_0_0;
static ParameterInfo ICollection_1_t14478_ICollection_1_Contains_m103007_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Group_t908_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m103007_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Contains(T)
MethodInfo ICollection_1_Contains_m103007_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t14478_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14478_ICollection_1_Contains_m103007_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m103007_GenericMethod/* genericMethod */

};
extern Il2CppType GroupU5BU5D_t2854_0_0_0;
extern Il2CppType GroupU5BU5D_t2854_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo ICollection_1_t14478_ICollection_1_CopyTo_m103008_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &GroupU5BU5D_t2854_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m103008_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m103008_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t14478_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, ICollection_1_t14478_ICollection_1_CopyTo_m103008_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m103008_GenericMethod/* genericMethod */

};
extern Il2CppType Group_t908_0_0_0;
static ParameterInfo ICollection_1_t14478_ICollection_1_Remove_m103009_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Group_t908_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m103009_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Remove(T)
MethodInfo ICollection_1_Remove_m103009_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t14478_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, ICollection_1_t14478_ICollection_1_Remove_m103009_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m103009_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t14478_MethodInfos[] =
{
	&ICollection_1_get_Count_m103003_MethodInfo,
	&ICollection_1_get_IsReadOnly_m103004_MethodInfo,
	&ICollection_1_Add_m103005_MethodInfo,
	&ICollection_1_Clear_m103006_MethodInfo,
	&ICollection_1_Contains_m103007_MethodInfo,
	&ICollection_1_CopyTo_m103008_MethodInfo,
	&ICollection_1_Remove_m103009_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t14480_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t14478_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&IEnumerable_1_t14480_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t14478_0_0_0;
extern Il2CppType ICollection_1_t14478_1_0_0;
struct ICollection_1_t14478;
extern Il2CppGenericClass ICollection_1_t14478_GenericClass;
TypeInfo ICollection_1_t14478_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t14478_MethodInfos/* methods */
	, ICollection_1_t14478_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t14478_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t14478_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t14478_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t14478_0_0_0/* byval_arg */
	, &ICollection_1_t14478_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t14478_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Group>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Group>
extern Il2CppType IEnumerator_1_t12984_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m103010_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Group>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m103010_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t14480_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t12984_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m103010_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t14480_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m103010_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t14480_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t14480_0_0_0;
extern Il2CppType IEnumerable_1_t14480_1_0_0;
struct IEnumerable_1_t14480;
extern Il2CppGenericClass IEnumerable_1_t14480_GenericClass;
TypeInfo IEnumerable_1_t14480_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t14480_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t14480_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t14480_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t14480_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t14480_0_0_0/* byval_arg */
	, &IEnumerable_1_t14480_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t14480_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t14479_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>
extern MethodInfo IList_1_get_Item_m103011_MethodInfo;
extern MethodInfo IList_1_set_Item_m103012_MethodInfo;
static PropertyInfo IList_1_t14479____Item_PropertyInfo = 
{
	&IList_1_t14479_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m103011_MethodInfo/* get */
	, &IList_1_set_Item_m103012_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t14479_PropertyInfos[] =
{
	&IList_1_t14479____Item_PropertyInfo,
	NULL
};
extern Il2CppType Group_t908_0_0_0;
static ParameterInfo IList_1_t14479_IList_1_IndexOf_m103013_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Group_t908_0_0_0},
};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m103013_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::IndexOf(T)
MethodInfo IList_1_IndexOf_m103013_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t14479_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14479_IList_1_IndexOf_m103013_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m103013_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Group_t908_0_0_0;
static ParameterInfo IList_1_t14479_IList_1_Insert_m103014_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Group_t908_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m103014_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m103014_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t14479_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14479_IList_1_Insert_m103014_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m103014_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14479_IList_1_RemoveAt_m103015_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m103015_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m103015_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t14479_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, IList_1_t14479_IList_1_RemoveAt_m103015_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m103015_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo IList_1_t14479_IList_1_get_Item_m103011_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Group_t908_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m103011_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m103011_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t14479_il2cpp_TypeInfo/* declaring_type */
	, &Group_t908_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t23/* invoker_method */
	, IList_1_t14479_IList_1_get_Item_m103011_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m103011_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Group_t908_0_0_0;
static ParameterInfo IList_1_t14479_IList_1_set_Item_m103012_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Group_t908_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m103012_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m103012_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t14479_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Object_t/* invoker_method */
	, IList_1_t14479_IList_1_set_Item_m103012_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m103012_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t14479_MethodInfos[] =
{
	&IList_1_IndexOf_m103013_MethodInfo,
	&IList_1_Insert_m103014_MethodInfo,
	&IList_1_RemoveAt_m103015_MethodInfo,
	&IList_1_get_Item_m103011_MethodInfo,
	&IList_1_set_Item_m103012_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t14479_InterfacesTypeInfos[] = 
{
	&IEnumerable_t545_il2cpp_TypeInfo,
	&ICollection_1_t14478_il2cpp_TypeInfo,
	&IEnumerable_1_t14480_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t14479_0_0_0;
extern Il2CppType IList_1_t14479_1_0_0;
struct IList_1_t14479;
extern Il2CppGenericClass IList_1_t14479_GenericClass;
extern CustomAttributesCache IList_1_t3927__CustomAttributeCache;
TypeInfo IList_1_t14479_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t14479_MethodInfos/* methods */
	, IList_1_t14479_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t14479_il2cpp_TypeInfo/* element_class */
	, IList_1_t14479_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t3927__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t14479_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t14479_0_0_0/* byval_arg */
	, &IList_1_t14479_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t14479_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t12985_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.RegexOptions>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.RegexOptions>
extern MethodInfo IEnumerator_1_get_Current_m103016_MethodInfo;
static PropertyInfo IEnumerator_1_t12985____Current_PropertyInfo = 
{
	&IEnumerator_1_t12985_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m103016_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t12985_PropertyInfos[] =
{
	&IEnumerator_1_t12985____Current_PropertyInfo,
	NULL
};
extern Il2CppType RegexOptions_t2861_0_0_0;
extern void* RuntimeInvoker_RegexOptions_t2861 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m103016_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.RegexOptions>::get_Current()
MethodInfo IEnumerator_1_get_Current_m103016_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t12985_il2cpp_TypeInfo/* declaring_type */
	, &RegexOptions_t2861_0_0_0/* return_type */
	, RuntimeInvoker_RegexOptions_t2861/* invoker_method */
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
	, &IEnumerator_1_get_Current_m103016_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t12985_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m103016_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t12985_InterfacesTypeInfos[] = 
{
	&IEnumerator_t30_il2cpp_TypeInfo,
	&IDisposable_t31_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t12985_0_0_0;
extern Il2CppType IEnumerator_1_t12985_1_0_0;
struct IEnumerator_1_t12985;
extern Il2CppGenericClass IEnumerator_1_t12985_GenericClass;
TypeInfo IEnumerator_1_t12985_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t12985_MethodInfos/* methods */
	, IEnumerator_1_t12985_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t12985_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t12985_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t12985_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t12985_0_0_0/* byval_arg */
	, &IEnumerator_1_t12985_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t12985_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
