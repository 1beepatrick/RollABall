#include "il2cpp_precompiled_header.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextAreaAttribute_t391_il2cpp_TypeInfo;

extern MethodInfo PropertyAttribute__ctor_m5201_MethodInfo;


// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
extern MethodInfo TextAreaAttribute__ctor_m1966_MethodInfo;
 void TextAreaAttribute__ctor_m1966 (TextAreaAttribute_t391 * __this, int32_t ___minLines, int32_t ___maxLines, MethodInfo* method){
	{
		PropertyAttribute__ctor_m5201(__this, /*hidden argument*/&PropertyAttribute__ctor_m5201_MethodInfo);
		__this->___minLines_0 = ___minLines;
		__this->___maxLines_1 = ___maxLines;
		return;
	}
}
// Metadata Definition UnityEngine.TextAreaAttribute
extern Il2CppType Int32_t23_0_0_38;
FieldInfo TextAreaAttribute_t391____minLines_0_FieldInfo = 
{
	"minLines"/* name */
	, &Int32_t23_0_0_38/* type */
	, &TextAreaAttribute_t391_il2cpp_TypeInfo/* parent */
	, offsetof(TextAreaAttribute_t391, ___minLines_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_38;
FieldInfo TextAreaAttribute_t391____maxLines_1_FieldInfo = 
{
	"maxLines"/* name */
	, &Int32_t23_0_0_38/* type */
	, &TextAreaAttribute_t391_il2cpp_TypeInfo/* parent */
	, offsetof(TextAreaAttribute_t391, ___maxLines_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TextAreaAttribute_t391_FieldInfos[] =
{
	&TextAreaAttribute_t391____minLines_0_FieldInfo,
	&TextAreaAttribute_t391____maxLines_1_FieldInfo,
	NULL
};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo TextAreaAttribute_t391_TextAreaAttribute__ctor_m1966_ParameterInfos[] = 
{
	{"minLines", 0, 134218969, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
	{"maxLines", 1, 134218970, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23_Int32_t23 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
MethodInfo TextAreaAttribute__ctor_m1966_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TextAreaAttribute__ctor_m1966/* method */
	, &TextAreaAttribute_t391_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23_Int32_t23/* invoker_method */
	, TextAreaAttribute_t391_TextAreaAttribute__ctor_m1966_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1229/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TextAreaAttribute_t391_MethodInfos[] =
{
	&TextAreaAttribute__ctor_m1966_MethodInfo,
	NULL
};
extern MethodInfo Attribute_Equals_m3410_MethodInfo;
extern MethodInfo Object_Finalize_m50_MethodInfo;
extern MethodInfo Attribute_GetHashCode_m3411_MethodInfo;
extern MethodInfo Object_ToString_m1367_MethodInfo;
static MethodInfo* TextAreaAttribute_t391_VTable[] =
{
	&Attribute_Equals_m3410_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Attribute_GetHashCode_m3411_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
};
extern TypeInfo _Attribute_t945_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair TextAreaAttribute_t391_InterfacesOffsets[] = 
{
	{ &_Attribute_t945_il2cpp_TypeInfo, 4},
};
extern TypeInfo AttributeUsageAttribute_t946_il2cpp_TypeInfo;
extern MethodInfo AttributeUsageAttribute__ctor_m3412_MethodInfo;
extern MethodInfo AttributeUsageAttribute_set_Inherited_m3413_MethodInfo;
extern MethodInfo AttributeUsageAttribute_set_AllowMultiple_m3414_MethodInfo;
void TextAreaAttribute_t391_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t946 * tmp;
		tmp = (AttributeUsageAttribute_t946 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t946_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m3412(tmp, 256, &AttributeUsageAttribute__ctor_m3412_MethodInfo);
		AttributeUsageAttribute_set_Inherited_m3413(tmp, true, &AttributeUsageAttribute_set_Inherited_m3413_MethodInfo);
		AttributeUsageAttribute_set_AllowMultiple_m3414(tmp, false, &AttributeUsageAttribute_set_AllowMultiple_m3414_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache TextAreaAttribute_t391__CustomAttributeCache = {
1,
NULL,
&TextAreaAttribute_t391_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType TextAreaAttribute_t391_0_0_0;
extern Il2CppType TextAreaAttribute_t391_1_0_0;
extern TypeInfo PropertyAttribute_t2162_il2cpp_TypeInfo;
struct TextAreaAttribute_t391;
extern CustomAttributesCache TextAreaAttribute_t391__CustomAttributeCache;
TypeInfo TextAreaAttribute_t391_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TextAreaAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, TextAreaAttribute_t391_MethodInfos/* methods */
	, NULL/* properties */
	, TextAreaAttribute_t391_FieldInfos/* fields */
	, NULL/* events */
	, &PropertyAttribute_t2162_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TextAreaAttribute_t391_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TextAreaAttribute_t391_VTable/* vtable */
	, &TextAreaAttribute_t391__CustomAttributeCache/* custom_attributes_cache */
	, &TextAreaAttribute_t391_il2cpp_TypeInfo/* cast_class */
	, &TextAreaAttribute_t391_0_0_0/* byval_arg */
	, &TextAreaAttribute_t391_1_0_0/* this_arg */
	, TextAreaAttribute_t391_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TextAreaAttribute_t391)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SelectionBaseAttribute_t383_il2cpp_TypeInfo;

extern MethodInfo Attribute__ctor_m3409_MethodInfo;


// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
extern MethodInfo SelectionBaseAttribute__ctor_m1906_MethodInfo;
 void SelectionBaseAttribute__ctor_m1906 (SelectionBaseAttribute_t383 * __this, MethodInfo* method){
	{
		Attribute__ctor_m3409(__this, /*hidden argument*/&Attribute__ctor_m3409_MethodInfo);
		return;
	}
}
// Metadata Definition UnityEngine.SelectionBaseAttribute
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
MethodInfo SelectionBaseAttribute__ctor_m1906_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SelectionBaseAttribute__ctor_m1906/* method */
	, &SelectionBaseAttribute_t383_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1230/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* SelectionBaseAttribute_t383_MethodInfos[] =
{
	&SelectionBaseAttribute__ctor_m1906_MethodInfo,
	NULL
};
static MethodInfo* SelectionBaseAttribute_t383_VTable[] =
{
	&Attribute_Equals_m3410_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Attribute_GetHashCode_m3411_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
};
static Il2CppInterfaceOffsetPair SelectionBaseAttribute_t383_InterfacesOffsets[] = 
{
	{ &_Attribute_t945_il2cpp_TypeInfo, 4},
};
void SelectionBaseAttribute_t383_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t946 * tmp;
		tmp = (AttributeUsageAttribute_t946 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t946_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m3412(tmp, 4, &AttributeUsageAttribute__ctor_m3412_MethodInfo);
		AttributeUsageAttribute_set_Inherited_m3413(tmp, true, &AttributeUsageAttribute_set_Inherited_m3413_MethodInfo);
		AttributeUsageAttribute_set_AllowMultiple_m3414(tmp, false, &AttributeUsageAttribute_set_AllowMultiple_m3414_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache SelectionBaseAttribute_t383__CustomAttributeCache = {
1,
NULL,
&SelectionBaseAttribute_t383_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType SelectionBaseAttribute_t383_0_0_0;
extern Il2CppType SelectionBaseAttribute_t383_1_0_0;
extern TypeInfo Attribute_t539_il2cpp_TypeInfo;
struct SelectionBaseAttribute_t383;
extern CustomAttributesCache SelectionBaseAttribute_t383__CustomAttributeCache;
TypeInfo SelectionBaseAttribute_t383_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SelectionBaseAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, SelectionBaseAttribute_t383_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Attribute_t539_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &SelectionBaseAttribute_t383_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, SelectionBaseAttribute_t383_VTable/* vtable */
	, &SelectionBaseAttribute_t383__CustomAttributeCache/* custom_attributes_cache */
	, &SelectionBaseAttribute_t383_il2cpp_TypeInfo/* cast_class */
	, &SelectionBaseAttribute_t383_0_0_0/* byval_arg */
	, &SelectionBaseAttribute_t383_1_0_0/* this_arg */
	, SelectionBaseAttribute_t383_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SelectionBaseAttribute_t383)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
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
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SliderState_t2163_il2cpp_TypeInfo;

extern MethodInfo Object__ctor_m1366_MethodInfo;


// System.Void UnityEngine.SliderState::.ctor()
extern MethodInfo SliderState__ctor_m5202_MethodInfo;
 void SliderState__ctor_m5202 (SliderState_t2163 * __this, MethodInfo* method){
	{
		Object__ctor_m1366(__this, /*hidden argument*/&Object__ctor_m1366_MethodInfo);
		return;
	}
}
// Metadata Definition UnityEngine.SliderState
extern Il2CppType Single_t39_0_0_6;
FieldInfo SliderState_t2163____dragStartPos_0_FieldInfo = 
{
	"dragStartPos"/* name */
	, &Single_t39_0_0_6/* type */
	, &SliderState_t2163_il2cpp_TypeInfo/* parent */
	, offsetof(SliderState_t2163, ___dragStartPos_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t39_0_0_6;
FieldInfo SliderState_t2163____dragStartValue_1_FieldInfo = 
{
	"dragStartValue"/* name */
	, &Single_t39_0_0_6/* type */
	, &SliderState_t2163_il2cpp_TypeInfo/* parent */
	, offsetof(SliderState_t2163, ___dragStartValue_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t24_0_0_6;
FieldInfo SliderState_t2163____isDragging_2_FieldInfo = 
{
	"isDragging"/* name */
	, &Boolean_t24_0_0_6/* type */
	, &SliderState_t2163_il2cpp_TypeInfo/* parent */
	, offsetof(SliderState_t2163, ___isDragging_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* SliderState_t2163_FieldInfos[] =
{
	&SliderState_t2163____dragStartPos_0_FieldInfo,
	&SliderState_t2163____dragStartValue_1_FieldInfo,
	&SliderState_t2163____isDragging_2_FieldInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SliderState::.ctor()
MethodInfo SliderState__ctor_m5202_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SliderState__ctor_m5202/* method */
	, &SliderState_t2163_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1231/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* SliderState_t2163_MethodInfos[] =
{
	&SliderState__ctor_m5202_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m1356_MethodInfo;
extern MethodInfo Object_GetHashCode_m1357_MethodInfo;
static MethodInfo* SliderState_t2163_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType SliderState_t2163_0_0_0;
extern Il2CppType SliderState_t2163_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct SliderState_t2163;
TypeInfo SliderState_t2163_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SliderState"/* name */
	, "UnityEngine"/* namespaze */
	, SliderState_t2163_MethodInfos/* methods */
	, NULL/* properties */
	, SliderState_t2163_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &SliderState_t2163_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, SliderState_t2163_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &SliderState_t2163_il2cpp_TypeInfo/* cast_class */
	, &SliderState_t2163_0_0_0/* byval_arg */
	, &SliderState_t2163_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SliderState_t2163)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StackTraceUtility_t2164_il2cpp_TypeInfo;

extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo StackTrace_t2165_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t392_il2cpp_TypeInfo;
extern TypeInfo Exception_t35_il2cpp_TypeInfo;
extern TypeInfo StringBuilder_t295_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t1046_il2cpp_TypeInfo;
extern TypeInfo CharU5BU5D_t200_il2cpp_TypeInfo;
extern TypeInfo Char_t193_il2cpp_TypeInfo;
extern TypeInfo StackFrame_t2258_il2cpp_TypeInfo;
extern TypeInfo Int32_t23_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t935_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t930_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t523_il2cpp_TypeInfo;
extern MethodInfo StackTrace__ctor_m5394_MethodInfo;
extern MethodInfo StackTraceUtility_ExtractFormattedStackTrace_m5211_MethodInfo;
extern MethodInfo String_ToString_m5352_MethodInfo;
extern MethodInfo String_StartsWith_m3113_MethodInfo;
extern MethodInfo StackTraceUtility_ExtractStringFromExceptionInternal_m5209_MethodInfo;
extern MethodInfo String_Concat_m1718_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1974_MethodInfo;
extern MethodInfo Exception_get_StackTrace_m3511_MethodInfo;
extern MethodInfo String_get_Length_m1749_MethodInfo;
extern MethodInfo StringBuilder__ctor_m5395_MethodInfo;
extern MethodInfo Exception_GetType_m3512_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m3650_MethodInfo;
extern MethodInfo Exception_get_Message_m1717_MethodInfo;
extern MethodInfo String_Trim_m3265_MethodInfo;
extern MethodInfo String_Concat_m47_MethodInfo;
extern MethodInfo Exception_get_InnerException_m3509_MethodInfo;
extern MethodInfo String_Concat_m5396_MethodInfo;
extern MethodInfo StringBuilder_Append_m3271_MethodInfo;
extern MethodInfo StringBuilder_ToString_m1350_MethodInfo;
extern MethodInfo String_Split_m3467_MethodInfo;
extern MethodInfo String_get_Chars_m1776_MethodInfo;
extern MethodInfo StackTraceUtility_IsSystemStacktraceType_m5207_MethodInfo;
extern MethodInfo String_IndexOf_m5356_MethodInfo;
extern MethodInfo String_Substring_m1777_MethodInfo;
extern MethodInfo String_EndsWith_m5397_MethodInfo;
extern MethodInfo String_Remove_m1801_MethodInfo;
extern MethodInfo String_IndexOf_m5398_MethodInfo;
extern MethodInfo String_Replace_m3469_MethodInfo;
extern MethodInfo String_Replace_m5399_MethodInfo;
extern MethodInfo String_LastIndexOf_m5400_MethodInfo;
extern MethodInfo String_Insert_m1803_MethodInfo;
extern MethodInfo StackTrace_GetFrame_m5401_MethodInfo;
extern MethodInfo StackFrame_GetMethod_m5402_MethodInfo;
extern MethodInfo MemberInfo_get_DeclaringType_m5403_MethodInfo;
extern MethodInfo Type_get_Namespace_m5404_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m3374_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m3382_MethodInfo;
extern MethodInfo StackFrame_GetFileName_m5405_MethodInfo;
extern MethodInfo String_op_Equality_m1747_MethodInfo;
extern MethodInfo StackFrame_GetFileLineNumber_m5406_MethodInfo;
extern MethodInfo Int32_ToString_m46_MethodInfo;
extern MethodInfo StackTrace_get_FrameCount_m5407_MethodInfo;


// System.Void UnityEngine.StackTraceUtility::.ctor()
extern MethodInfo StackTraceUtility__ctor_m5203_MethodInfo;
 void StackTraceUtility__ctor_m5203 (StackTraceUtility_t2164 * __this, MethodInfo* method){
	{
		Object__ctor_m1366(__this, /*hidden argument*/&Object__ctor_m1366_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern MethodInfo StackTraceUtility__cctor_m5204_MethodInfo;
 void StackTraceUtility__cctor_m5204 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		((StackTraceUtility_t2164_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo)->static_fields)->___projectFolder_0 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern MethodInfo StackTraceUtility_SetProjectFolder_m5205_MethodInfo;
 void StackTraceUtility_SetProjectFolder_m5205 (Object_t * __this/* static, unused */, String_t* ___folder, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo));
		((StackTraceUtility_t2164_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo)->static_fields)->___projectFolder_0 = ___folder;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern MethodInfo StackTraceUtility_ExtractStackTrace_m5206_MethodInfo;
 String_t* StackTraceUtility_ExtractStackTrace_m5206 (Object_t * __this/* static, unused */, MethodInfo* method){
	StackTrace_t2165 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t2165 * L_0 = (StackTrace_t2165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StackTrace_t2165_il2cpp_TypeInfo));
		StackTrace__ctor_m5394(L_0, 1, 1, /*hidden argument*/&StackTrace__ctor_m5394_MethodInfo);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo));
		String_t* L_1 = StackTraceUtility_ExtractFormattedStackTrace_m5211(NULL /*static, unused*/, V_0, /*hidden argument*/&StackTraceUtility_ExtractFormattedStackTrace_m5211_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&String_ToString_m5352_MethodInfo, L_1);
		V_1 = L_2;
		return V_1;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
 bool StackTraceUtility_IsSystemStacktraceType_m5207 (Object_t * __this/* static, unused */, Object_t * ___name, MethodInfo* method){
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		V_0 = ((String_t*)Castclass(___name, (&String_t_il2cpp_TypeInfo)));
		NullCheck(V_0);
		bool L_0 = String_StartsWith_m3113(V_0, (String_t*) &_stringLiteral1086, /*hidden argument*/&String_StartsWith_m3113_MethodInfo);
		if (L_0)
		{
			goto IL_0064;
		}
	}
	{
		NullCheck(V_0);
		bool L_1 = String_StartsWith_m3113(V_0, (String_t*) &_stringLiteral1087, /*hidden argument*/&String_StartsWith_m3113_MethodInfo);
		if (L_1)
		{
			goto IL_0064;
		}
	}
	{
		NullCheck(V_0);
		bool L_2 = String_StartsWith_m3113(V_0, (String_t*) &_stringLiteral1088, /*hidden argument*/&String_StartsWith_m3113_MethodInfo);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		NullCheck(V_0);
		bool L_3 = String_StartsWith_m3113(V_0, (String_t*) &_stringLiteral1089, /*hidden argument*/&String_StartsWith_m3113_MethodInfo);
		if (L_3)
		{
			goto IL_0064;
		}
	}
	{
		NullCheck(V_0);
		bool L_4 = String_StartsWith_m3113(V_0, (String_t*) &_stringLiteral1090, /*hidden argument*/&String_StartsWith_m3113_MethodInfo);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		NullCheck(V_0);
		bool L_5 = String_StartsWith_m3113(V_0, (String_t*) &_stringLiteral1091, /*hidden argument*/&String_StartsWith_m3113_MethodInfo);
		G_B7_0 = ((int32_t)(L_5));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern MethodInfo StackTraceUtility_ExtractStringFromException_m5208_MethodInfo;
 String_t* StackTraceUtility_ExtractStringFromException_m5208 (Object_t * __this/* static, unused */, Object_t * ___exception, MethodInfo* method){
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		V_0 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		V_1 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo));
		StackTraceUtility_ExtractStringFromExceptionInternal_m5209(NULL /*static, unused*/, ___exception, (&V_0), (&V_1), /*hidden argument*/&StackTraceUtility_ExtractStringFromExceptionInternal_m5209_MethodInfo);
		String_t* L_0 = String_Concat_m1718(NULL /*static, unused*/, V_0, (String_t*) &_stringLiteral13, V_1, /*hidden argument*/&String_Concat_m1718_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
 void StackTraceUtility_ExtractStringFromExceptionInternal_m5209 (Object_t * __this/* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, MethodInfo* method){
	Exception_t35 * V_0 = {0};
	StringBuilder_t295 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t2165 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		if (___exceptiono)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t392 * L_0 = (ArgumentException_t392 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t392_il2cpp_TypeInfo));
		ArgumentException__ctor_m1974(L_0, (String_t*) &_stringLiteral1092, /*hidden argument*/&ArgumentException__ctor_m1974_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0011:
	{
		V_0 = ((Exception_t35 *)IsInst(___exceptiono, InitializedTypeInfo(&Exception_t35_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t392 * L_1 = (ArgumentException_t392 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t392_il2cpp_TypeInfo));
		ArgumentException__ctor_m1974(L_1, (String_t*) &_stringLiteral1093, /*hidden argument*/&ArgumentException__ctor_m1974_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0029:
	{
		NullCheck(V_0);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m3511_MethodInfo, V_0);
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		NullCheck(V_0);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m3511_MethodInfo, V_0);
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m1749(L_3, /*hidden argument*/&String_get_Length_m1749_MethodInfo);
		G_B7_0 = ((int32_t)((int32_t)L_4*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t295 * L_5 = (StringBuilder_t295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t295_il2cpp_TypeInfo));
		StringBuilder__ctor_m5395(L_5, G_B7_0, /*hidden argument*/&StringBuilder__ctor_m5395_MethodInfo);
		V_1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		*((Object_t **)(___message)) = (Object_t *)(((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		V_2 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		goto IL_00ff;
	}

IL_0063:
	{
		NullCheck(V_2);
		int32_t L_6 = String_get_Length_m1749(V_2, /*hidden argument*/&String_get_Length_m1749_MethodInfo);
		if (L_6)
		{
			goto IL_007a;
		}
	}
	{
		NullCheck(V_0);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m3511_MethodInfo, V_0);
		V_2 = L_7;
		goto IL_008c;
	}

IL_007a:
	{
		NullCheck(V_0);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m3511_MethodInfo, V_0);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = String_Concat_m1718(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral13, V_2, /*hidden argument*/&String_Concat_m1718_MethodInfo);
		V_2 = L_9;
	}

IL_008c:
	{
		NullCheck(V_0);
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Exception_GetType_m3512_MethodInfo, V_0);
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3650_MethodInfo, L_10);
		V_3 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		V_4 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		NullCheck(V_0);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_Message_m1717_MethodInfo, V_0);
		if (!L_12)
		{
			goto IL_00b2;
		}
	}
	{
		NullCheck(V_0);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_Message_m1717_MethodInfo, V_0);
		V_4 = L_13;
	}

IL_00b2:
	{
		NullCheck(V_4);
		String_t* L_14 = String_Trim_m3265(V_4, /*hidden argument*/&String_Trim_m3265_MethodInfo);
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1749(L_14, /*hidden argument*/&String_get_Length_m1749_MethodInfo);
		if (!L_15)
		{
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_16 = String_Concat_m47(NULL /*static, unused*/, V_3, (String_t*) &_stringLiteral12, /*hidden argument*/&String_Concat_m47_MethodInfo);
		V_3 = L_16;
		String_t* L_17 = String_Concat_m47(NULL /*static, unused*/, V_3, V_4, /*hidden argument*/&String_Concat_m47_MethodInfo);
		V_3 = L_17;
	}

IL_00d8:
	{
		*((Object_t **)(___message)) = (Object_t *)V_3;
		NullCheck(V_0);
		Exception_t35 * L_18 = (Exception_t35 *)VirtFuncInvoker0< Exception_t35 * >::Invoke(&Exception_get_InnerException_m3509_MethodInfo, V_0);
		if (!L_18)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_19 = String_Concat_m5396(NULL /*static, unused*/, (String_t*) &_stringLiteral1094, V_3, (String_t*) &_stringLiteral13, V_2, /*hidden argument*/&String_Concat_m5396_MethodInfo);
		V_2 = L_19;
	}

IL_00f8:
	{
		NullCheck(V_0);
		Exception_t35 * L_20 = (Exception_t35 *)VirtFuncInvoker0< Exception_t35 * >::Invoke(&Exception_get_InnerException_m3509_MethodInfo, V_0);
		V_0 = L_20;
	}

IL_00ff:
	{
		if (V_0)
		{
			goto IL_0063;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m47(NULL /*static, unused*/, V_2, (String_t*) &_stringLiteral13, /*hidden argument*/&String_Concat_m47_MethodInfo);
		NullCheck(V_1);
		StringBuilder_Append_m3271(V_1, L_21, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
		StackTrace_t2165 * L_22 = (StackTrace_t2165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StackTrace_t2165_il2cpp_TypeInfo));
		StackTrace__ctor_m5394(L_22, 1, 1, /*hidden argument*/&StackTrace__ctor_m5394_MethodInfo);
		V_5 = L_22;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo));
		String_t* L_23 = StackTraceUtility_ExtractFormattedStackTrace_m5211(NULL /*static, unused*/, V_5, /*hidden argument*/&StackTraceUtility_ExtractFormattedStackTrace_m5211_MethodInfo);
		NullCheck(V_1);
		StringBuilder_Append_m3271(V_1, L_23, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
		NullCheck(V_1);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1350_MethodInfo, V_1);
		*((Object_t **)(___stackTrace)) = (Object_t *)L_24;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern MethodInfo StackTraceUtility_PostprocessStacktrace_m5210_MethodInfo;
 String_t* StackTraceUtility_PostprocessStacktrace_m5210 (Object_t * __this/* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, MethodInfo* method){
	StringU5BU5D_t42* V_0 = {0};
	StringBuilder_t295 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		if (___oldString)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		return (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
	}

IL_000c:
	{
		CharU5BU5D_t200* L_0 = ((CharU5BU5D_t200*)SZArrayNew(InitializedTypeInfo(&CharU5BU5D_t200_il2cpp_TypeInfo), 1));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)10);
		NullCheck(___oldString);
		StringU5BU5D_t42* L_1 = String_Split_m3467(___oldString, L_0, /*hidden argument*/&String_Split_m3467_MethodInfo);
		V_0 = L_1;
		NullCheck(___oldString);
		int32_t L_2 = String_get_Length_m1749(___oldString, /*hidden argument*/&String_get_Length_m1749_MethodInfo);
		StringBuilder_t295 * L_3 = (StringBuilder_t295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t295_il2cpp_TypeInfo));
		StringBuilder__ctor_m5395(L_3, L_2, /*hidden argument*/&StringBuilder__ctor_m5395_MethodInfo);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_2);
		int32_t L_4 = V_2;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(V_0, L_4)));
		String_t* L_5 = String_Trim_m3265((*(String_t**)(String_t**)SZArrayLdElema(V_0, L_4)), /*hidden argument*/&String_Trim_m3265_MethodInfo);
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_2);
		ArrayElementTypeCheck (V_0, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(V_0, V_2)) = (String_t*)L_5;
		V_2 = ((int32_t)(V_2+1));
	}

IL_0040:
	{
		NullCheck(V_0);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)V_0)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_3);
		int32_t L_6 = V_3;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(V_0, L_6));
		NullCheck(V_4);
		int32_t L_7 = String_get_Length_m1749(V_4, /*hidden argument*/&String_get_Length_m1749_MethodInfo);
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		NullCheck(V_4);
		uint16_t L_8 = String_get_Chars_m1776(V_4, 0, /*hidden argument*/&String_get_Chars_m1776_MethodInfo);
		if ((((uint32_t)L_8) != ((uint32_t)((int32_t)10))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		NullCheck(V_4);
		bool L_9 = String_StartsWith_m3113(V_4, (String_t*) &_stringLiteral1095, /*hidden argument*/&String_StartsWith_m3113_MethodInfo);
		if (!L_9)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		if (!___stripEngineInternalInformation)
		{
			goto IL_00a7;
		}
	}
	{
		NullCheck(V_4);
		bool L_10 = String_StartsWith_m3113(V_4, (String_t*) &_stringLiteral1096, /*hidden argument*/&String_StartsWith_m3113_MethodInfo);
		if (!L_10)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		if (!___stripEngineInternalInformation)
		{
			goto IL_00fa;
		}
	}
	{
		NullCheck(V_0);
		if ((((int32_t)V_3) >= ((int32_t)((int32_t)((((int32_t)(((Array_t *)V_0)->max_length)))-1)))))
		{
			goto IL_00fa;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo));
		bool L_11 = StackTraceUtility_IsSystemStacktraceType_m5207(NULL /*static, unused*/, V_4, /*hidden argument*/&StackTraceUtility_IsSystemStacktraceType_m5207_MethodInfo);
		if (!L_11)
		{
			goto IL_00fa;
		}
	}
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, ((int32_t)(V_3+1)));
		int32_t L_12 = ((int32_t)(V_3+1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo));
		bool L_13 = StackTraceUtility_IsSystemStacktraceType_m5207(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(V_0, L_12)), /*hidden argument*/&StackTraceUtility_IsSystemStacktraceType_m5207_MethodInfo);
		if (!L_13)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		NullCheck(V_4);
		int32_t L_14 = String_IndexOf_m5356(V_4, (String_t*) &_stringLiteral1097, /*hidden argument*/&String_IndexOf_m5356_MethodInfo);
		V_5 = L_14;
		if ((((int32_t)V_5) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		NullCheck(V_4);
		String_t* L_15 = String_Substring_m1777(V_4, 0, V_5, /*hidden argument*/&String_Substring_m1777_MethodInfo);
		V_4 = L_15;
	}

IL_00fa:
	{
		NullCheck(V_4);
		int32_t L_16 = String_IndexOf_m5356(V_4, (String_t*) &_stringLiteral1098, /*hidden argument*/&String_IndexOf_m5356_MethodInfo);
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		NullCheck(V_4);
		int32_t L_17 = String_IndexOf_m5356(V_4, (String_t*) &_stringLiteral1099, /*hidden argument*/&String_IndexOf_m5356_MethodInfo);
		if ((((int32_t)L_17) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		NullCheck(V_4);
		int32_t L_18 = String_IndexOf_m5356(V_4, (String_t*) &_stringLiteral1100, /*hidden argument*/&String_IndexOf_m5356_MethodInfo);
		if ((((int32_t)L_18) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		if (!___stripEngineInternalInformation)
		{
			goto IL_016c;
		}
	}
	{
		NullCheck(V_4);
		bool L_19 = String_StartsWith_m3113(V_4, (String_t*) &_stringLiteral102, /*hidden argument*/&String_StartsWith_m3113_MethodInfo);
		if (!L_19)
		{
			goto IL_016c;
		}
	}
	{
		NullCheck(V_4);
		bool L_20 = String_EndsWith_m5397(V_4, (String_t*) &_stringLiteral1101, /*hidden argument*/&String_EndsWith_m5397_MethodInfo);
		if (!L_20)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		NullCheck(V_4);
		bool L_21 = String_StartsWith_m3113(V_4, (String_t*) &_stringLiteral1102, /*hidden argument*/&String_StartsWith_m3113_MethodInfo);
		if (!L_21)
		{
			goto IL_0188;
		}
	}
	{
		NullCheck(V_4);
		String_t* L_22 = String_Remove_m1801(V_4, 0, 3, /*hidden argument*/&String_Remove_m1801_MethodInfo);
		V_4 = L_22;
	}

IL_0188:
	{
		NullCheck(V_4);
		int32_t L_23 = String_IndexOf_m5356(V_4, (String_t*) &_stringLiteral1103, /*hidden argument*/&String_IndexOf_m5356_MethodInfo);
		V_6 = L_23;
		V_7 = (-1);
		if ((((int32_t)V_6) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		NullCheck(V_4);
		int32_t L_24 = String_IndexOf_m5398(V_4, (String_t*) &_stringLiteral1101, V_6, /*hidden argument*/&String_IndexOf_m5398_MethodInfo);
		V_7 = L_24;
	}

IL_01b1:
	{
		if ((((int32_t)V_6) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		if ((((int32_t)V_7) <= ((int32_t)V_6)))
		{
			goto IL_01d4;
		}
	}
	{
		NullCheck(V_4);
		String_t* L_25 = String_Remove_m1801(V_4, V_6, ((int32_t)(((int32_t)(V_7-V_6))+1)), /*hidden argument*/&String_Remove_m1801_MethodInfo);
		V_4 = L_25;
	}

IL_01d4:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		NullCheck(V_4);
		String_t* L_26 = String_Replace_m3469(V_4, (String_t*) &_stringLiteral1104, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), /*hidden argument*/&String_Replace_m3469_MethodInfo);
		V_4 = L_26;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo));
		NullCheck(V_4);
		String_t* L_27 = String_Replace_m3469(V_4, (((StackTraceUtility_t2164_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo)->static_fields)->___projectFolder_0), (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), /*hidden argument*/&String_Replace_m3469_MethodInfo);
		V_4 = L_27;
		NullCheck(V_4);
		String_t* L_28 = String_Replace_m5399(V_4, ((int32_t)92), ((int32_t)47), /*hidden argument*/&String_Replace_m5399_MethodInfo);
		V_4 = L_28;
		NullCheck(V_4);
		int32_t L_29 = String_LastIndexOf_m5400(V_4, (String_t*) &_stringLiteral1105, /*hidden argument*/&String_LastIndexOf_m5400_MethodInfo);
		V_8 = L_29;
		if ((((int32_t)V_8) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		NullCheck(V_4);
		String_t* L_30 = String_Remove_m1801(V_4, V_8, 5, /*hidden argument*/&String_Remove_m1801_MethodInfo);
		V_4 = L_30;
		NullCheck(V_4);
		String_t* L_31 = String_Insert_m1803(V_4, V_8, (String_t*) &_stringLiteral1106, /*hidden argument*/&String_Insert_m1803_MethodInfo);
		V_4 = L_31;
		NullCheck(V_4);
		int32_t L_32 = String_get_Length_m1749(V_4, /*hidden argument*/&String_get_Length_m1749_MethodInfo);
		NullCheck(V_4);
		String_t* L_33 = String_Insert_m1803(V_4, L_32, (String_t*) &_stringLiteral64, /*hidden argument*/&String_Insert_m1803_MethodInfo);
		V_4 = L_33;
	}

IL_024e:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_34 = String_Concat_m47(NULL /*static, unused*/, V_4, (String_t*) &_stringLiteral13, /*hidden argument*/&String_Concat_m47_MethodInfo);
		NullCheck(V_1);
		StringBuilder_Append_m3271(V_1, L_34, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
	}

IL_0261:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_0265:
	{
		NullCheck(V_0);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((Array_t *)V_0)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		NullCheck(V_1);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1350_MethodInfo, V_1);
		return L_35;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
 String_t* StackTraceUtility_ExtractFormattedStackTrace_m5211 (Object_t * __this/* static, unused */, StackTrace_t2165 * ___stackTrace, MethodInfo* method){
	StringBuilder_t295 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t2258 * V_2 = {0};
	MethodBase_t935 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t930* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t295 * L_0 = (StringBuilder_t295 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t295_il2cpp_TypeInfo));
		StringBuilder__ctor_m5395(L_0, ((int32_t)255), /*hidden argument*/&StringBuilder__ctor_m5395_MethodInfo);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		NullCheck(___stackTrace);
		StackFrame_t2258 * L_1 = (StackFrame_t2258 *)VirtFuncInvoker1< StackFrame_t2258 *, int32_t >::Invoke(&StackTrace_GetFrame_m5401_MethodInfo, ___stackTrace, V_1);
		V_2 = L_1;
		NullCheck(V_2);
		MethodBase_t935 * L_2 = (MethodBase_t935 *)VirtFuncInvoker0< MethodBase_t935 * >::Invoke(&StackFrame_GetMethod_m5402_MethodInfo, V_2);
		V_3 = L_2;
		if (V_3)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		NullCheck(V_3);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m5403_MethodInfo, V_3);
		V_4 = L_3;
		if (V_4)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		NullCheck(V_4);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m5404_MethodInfo, V_4);
		V_5 = L_4;
		if (!V_5)
		{
			goto IL_0071;
		}
	}
	{
		NullCheck(V_5);
		int32_t L_5 = String_get_Length_m1749(V_5, /*hidden argument*/&String_get_Length_m1749_MethodInfo);
		if (!L_5)
		{
			goto IL_0071;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m3271(V_0, V_5, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m3271(V_0, (String_t*) &_stringLiteral56, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
	}

IL_0071:
	{
		NullCheck(V_4);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3650_MethodInfo, V_4);
		NullCheck(V_0);
		StringBuilder_Append_m3271(V_0, L_6, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m3271(V_0, (String_t*) &_stringLiteral100, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
		NullCheck(V_3);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3650_MethodInfo, V_3);
		NullCheck(V_0);
		StringBuilder_Append_m3271(V_0, L_7, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m3271(V_0, (String_t*) &_stringLiteral1107, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
		V_6 = 0;
		NullCheck(V_3);
		ParameterInfoU5BU5D_t930* L_8 = (ParameterInfoU5BU5D_t930*)VirtFuncInvoker0< ParameterInfoU5BU5D_t930* >::Invoke(&MethodBase_GetParameters_m3374_MethodInfo, V_3);
		V_7 = L_8;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		if (V_8)
		{
			goto IL_00cf;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m3271(V_0, (String_t*) &_stringLiteral1108, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		NullCheck(V_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_7, V_6);
		int32_t L_9 = V_6;
		NullCheck((*(ParameterInfo_t523 **)(ParameterInfo_t523 **)SZArrayLdElema(V_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3382_MethodInfo, (*(ParameterInfo_t523 **)(ParameterInfo_t523 **)SZArrayLdElema(V_7, L_9)));
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3650_MethodInfo, L_10);
		NullCheck(V_0);
		StringBuilder_Append_m3271(V_0, L_11, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
		V_6 = ((int32_t)(V_6+1));
	}

IL_00ee:
	{
		NullCheck(V_7);
		if ((((int32_t)V_6) < ((int32_t)(((int32_t)(((Array_t *)V_7)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m3271(V_0, (String_t*) &_stringLiteral64, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
		NullCheck(V_2);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StackFrame_GetFileName_m5405_MethodInfo, V_2);
		V_9 = L_12;
		if (!V_9)
		{
			goto IL_01b9;
		}
	}
	{
		NullCheck(V_4);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m3650_MethodInfo, V_4);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_14 = String_op_Equality_m1747(NULL /*static, unused*/, L_13, (String_t*) &_stringLiteral1109, /*hidden argument*/&String_op_Equality_m1747_MethodInfo);
		if (!L_14)
		{
			goto IL_0140;
		}
	}
	{
		NullCheck(V_4);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m5404_MethodInfo, V_4);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_16 = String_op_Equality_m1747(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral1110, /*hidden argument*/&String_op_Equality_m1747_MethodInfo);
		if (L_16)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		NullCheck(V_0);
		StringBuilder_Append_m3271(V_0, (String_t*) &_stringLiteral1106, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo));
		NullCheck(V_9);
		bool L_17 = String_StartsWith_m3113(V_9, (((StackTraceUtility_t2164_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo)->static_fields)->___projectFolder_0), /*hidden argument*/&String_StartsWith_m3113_MethodInfo);
		if (!L_17)
		{
			goto IL_0182;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo));
		NullCheck((((StackTraceUtility_t2164_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo)->static_fields)->___projectFolder_0));
		int32_t L_18 = String_get_Length_m1749((((StackTraceUtility_t2164_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo)->static_fields)->___projectFolder_0), /*hidden argument*/&String_get_Length_m1749_MethodInfo);
		NullCheck(V_9);
		int32_t L_19 = String_get_Length_m1749(V_9, /*hidden argument*/&String_get_Length_m1749_MethodInfo);
		NullCheck((((StackTraceUtility_t2164_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo)->static_fields)->___projectFolder_0));
		int32_t L_20 = String_get_Length_m1749((((StackTraceUtility_t2164_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t2164_il2cpp_TypeInfo)->static_fields)->___projectFolder_0), /*hidden argument*/&String_get_Length_m1749_MethodInfo);
		NullCheck(V_9);
		String_t* L_21 = String_Substring_m1777(V_9, L_18, ((int32_t)(L_19-L_20)), /*hidden argument*/&String_Substring_m1777_MethodInfo);
		V_9 = L_21;
	}

IL_0182:
	{
		NullCheck(V_0);
		StringBuilder_Append_m3271(V_0, V_9, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m3271(V_0, (String_t*) &_stringLiteral100, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
		NullCheck(V_2);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&StackFrame_GetFileLineNumber_m5406_MethodInfo, V_2);
		V_10 = L_22;
		String_t* L_23 = Int32_ToString_m46((&V_10), /*hidden argument*/&Int32_ToString_m46_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m3271(V_0, L_23, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m3271(V_0, (String_t*) &_stringLiteral64, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
	}

IL_01b9:
	{
		NullCheck(V_0);
		StringBuilder_Append_m3271(V_0, (String_t*) &_stringLiteral13, /*hidden argument*/&StringBuilder_Append_m3271_MethodInfo);
	}

IL_01c5:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_01c9:
	{
		NullCheck(___stackTrace);
		int32_t L_24 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&StackTrace_get_FrameCount_m5407_MethodInfo, ___stackTrace);
		if ((((int32_t)V_1) < ((int32_t)L_24)))
		{
			goto IL_0012;
		}
	}
	{
		NullCheck(V_0);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m1350_MethodInfo, V_0);
		return L_25;
	}
}
// Metadata Definition UnityEngine.StackTraceUtility
extern Il2CppType String_t_0_0_17;
FieldInfo StackTraceUtility_t2164____projectFolder_0_FieldInfo = 
{
	"projectFolder"/* name */
	, &String_t_0_0_17/* type */
	, &StackTraceUtility_t2164_il2cpp_TypeInfo/* parent */
	, offsetof(StackTraceUtility_t2164_StaticFields, ___projectFolder_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* StackTraceUtility_t2164_FieldInfos[] =
{
	&StackTraceUtility_t2164____projectFolder_0_FieldInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StackTraceUtility::.ctor()
MethodInfo StackTraceUtility__ctor_m5203_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&StackTraceUtility__ctor_m5203/* method */
	, &StackTraceUtility_t2164_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1232/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StackTraceUtility::.cctor()
MethodInfo StackTraceUtility__cctor_m5204_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&StackTraceUtility__cctor_m5204/* method */
	, &StackTraceUtility_t2164_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1233/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo StackTraceUtility_t2164_StackTraceUtility_SetProjectFolder_m5205_ParameterInfos[] = 
{
	{"folder", 0, 134218971, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
MethodInfo StackTraceUtility_SetProjectFolder_m5205_MethodInfo = 
{
	"SetProjectFolder"/* name */
	, (methodPointerType)&StackTraceUtility_SetProjectFolder_m5205/* method */
	, &StackTraceUtility_t2164_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, StackTraceUtility_t2164_StackTraceUtility_SetProjectFolder_m5205_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1234/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache StackTraceUtility_t2164__CustomAttributeCache_StackTraceUtility_ExtractStackTrace_m5206;
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
MethodInfo StackTraceUtility_ExtractStackTrace_m5206_MethodInfo = 
{
	"ExtractStackTrace"/* name */
	, (methodPointerType)&StackTraceUtility_ExtractStackTrace_m5206/* method */
	, &StackTraceUtility_t2164_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &StackTraceUtility_t2164__CustomAttributeCache_StackTraceUtility_ExtractStackTrace_m5206/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1235/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo StackTraceUtility_t2164_StackTraceUtility_IsSystemStacktraceType_m5207_ParameterInfos[] = 
{
	{"name", 0, 134218972, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
MethodInfo StackTraceUtility_IsSystemStacktraceType_m5207_MethodInfo = 
{
	"IsSystemStacktraceType"/* name */
	, (methodPointerType)&StackTraceUtility_IsSystemStacktraceType_m5207/* method */
	, &StackTraceUtility_t2164_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, StackTraceUtility_t2164_StackTraceUtility_IsSystemStacktraceType_m5207_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1236/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo StackTraceUtility_t2164_StackTraceUtility_ExtractStringFromException_m5208_ParameterInfos[] = 
{
	{"exception", 0, 134218973, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
MethodInfo StackTraceUtility_ExtractStringFromException_m5208_MethodInfo = 
{
	"ExtractStringFromException"/* name */
	, (methodPointerType)&StackTraceUtility_ExtractStringFromException_m5208/* method */
	, &StackTraceUtility_t2164_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, StackTraceUtility_t2164_StackTraceUtility_ExtractStringFromException_m5208_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1237/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType String_t_1_0_2;
extern Il2CppType String_t_1_0_0;
extern Il2CppType String_t_1_0_2;
static ParameterInfo StackTraceUtility_t2164_StackTraceUtility_ExtractStringFromExceptionInternal_m5209_ParameterInfos[] = 
{
	{"exceptiono", 0, 134218974, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"message", 1, 134218975, &EmptyCustomAttributesCache, &String_t_1_0_2},
	{"stackTrace", 2, 134218976, &EmptyCustomAttributesCache, &String_t_1_0_2},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_StringU26_t1109_StringU26_t1109 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache StackTraceUtility_t2164__CustomAttributeCache_StackTraceUtility_ExtractStringFromExceptionInternal_m5209;
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
MethodInfo StackTraceUtility_ExtractStringFromExceptionInternal_m5209_MethodInfo = 
{
	"ExtractStringFromExceptionInternal"/* name */
	, (methodPointerType)&StackTraceUtility_ExtractStringFromExceptionInternal_m5209/* method */
	, &StackTraceUtility_t2164_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_StringU26_t1109_StringU26_t1109/* invoker_method */
	, StackTraceUtility_t2164_StackTraceUtility_ExtractStringFromExceptionInternal_m5209_ParameterInfos/* parameters */
	, &StackTraceUtility_t2164__CustomAttributeCache_StackTraceUtility_ExtractStringFromExceptionInternal_m5209/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1238/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t24_0_0_0;
extern Il2CppType Boolean_t24_0_0_0;
static ParameterInfo StackTraceUtility_t2164_StackTraceUtility_PostprocessStacktrace_m5210_ParameterInfos[] = 
{
	{"oldString", 0, 134218977, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"stripEngineInternalInformation", 1, 134218978, &EmptyCustomAttributesCache, &Boolean_t24_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t297 (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
MethodInfo StackTraceUtility_PostprocessStacktrace_m5210_MethodInfo = 
{
	"PostprocessStacktrace"/* name */
	, (methodPointerType)&StackTraceUtility_PostprocessStacktrace_m5210/* method */
	, &StackTraceUtility_t2164_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t297/* invoker_method */
	, StackTraceUtility_t2164_StackTraceUtility_PostprocessStacktrace_m5210_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1239/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType StackTrace_t2165_0_0_0;
extern Il2CppType StackTrace_t2165_0_0_0;
static ParameterInfo StackTraceUtility_t2164_StackTraceUtility_ExtractFormattedStackTrace_m5211_ParameterInfos[] = 
{
	{"stackTrace", 0, 134218979, &EmptyCustomAttributesCache, &StackTrace_t2165_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache StackTraceUtility_t2164__CustomAttributeCache_StackTraceUtility_ExtractFormattedStackTrace_m5211;
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
MethodInfo StackTraceUtility_ExtractFormattedStackTrace_m5211_MethodInfo = 
{
	"ExtractFormattedStackTrace"/* name */
	, (methodPointerType)&StackTraceUtility_ExtractFormattedStackTrace_m5211/* method */
	, &StackTraceUtility_t2164_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, StackTraceUtility_t2164_StackTraceUtility_ExtractFormattedStackTrace_m5211_ParameterInfos/* parameters */
	, &StackTraceUtility_t2164__CustomAttributeCache_StackTraceUtility_ExtractFormattedStackTrace_m5211/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1240/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* StackTraceUtility_t2164_MethodInfos[] =
{
	&StackTraceUtility__ctor_m5203_MethodInfo,
	&StackTraceUtility__cctor_m5204_MethodInfo,
	&StackTraceUtility_SetProjectFolder_m5205_MethodInfo,
	&StackTraceUtility_ExtractStackTrace_m5206_MethodInfo,
	&StackTraceUtility_IsSystemStacktraceType_m5207_MethodInfo,
	&StackTraceUtility_ExtractStringFromException_m5208_MethodInfo,
	&StackTraceUtility_ExtractStringFromExceptionInternal_m5209_MethodInfo,
	&StackTraceUtility_PostprocessStacktrace_m5210_MethodInfo,
	&StackTraceUtility_ExtractFormattedStackTrace_m5211_MethodInfo,
	NULL
};
static MethodInfo* StackTraceUtility_t2164_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
};
extern TypeInfo SecuritySafeCriticalAttribute_t2240_il2cpp_TypeInfo;
extern MethodInfo SecuritySafeCriticalAttribute__ctor_m5367_MethodInfo;
void StackTraceUtility_t2164_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m5206(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2240 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2240 *)il2cpp_codegen_object_new (&SecuritySafeCriticalAttribute_t2240_il2cpp_TypeInfo);
		SecuritySafeCriticalAttribute__ctor_m5367(tmp, &SecuritySafeCriticalAttribute__ctor_m5367_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void StackTraceUtility_t2164_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m5209(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2240 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2240 *)il2cpp_codegen_object_new (&SecuritySafeCriticalAttribute_t2240_il2cpp_TypeInfo);
		SecuritySafeCriticalAttribute__ctor_m5367(tmp, &SecuritySafeCriticalAttribute__ctor_m5367_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void StackTraceUtility_t2164_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m5211(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t2240 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t2240 *)il2cpp_codegen_object_new (&SecuritySafeCriticalAttribute_t2240_il2cpp_TypeInfo);
		SecuritySafeCriticalAttribute__ctor_m5367(tmp, &SecuritySafeCriticalAttribute__ctor_m5367_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache StackTraceUtility_t2164__CustomAttributeCache_StackTraceUtility_ExtractStackTrace_m5206 = {
1,
NULL,
&StackTraceUtility_t2164_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m5206
};
CustomAttributesCache StackTraceUtility_t2164__CustomAttributeCache_StackTraceUtility_ExtractStringFromExceptionInternal_m5209 = {
1,
NULL,
&StackTraceUtility_t2164_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m5209
};
CustomAttributesCache StackTraceUtility_t2164__CustomAttributeCache_StackTraceUtility_ExtractFormattedStackTrace_m5211 = {
1,
NULL,
&StackTraceUtility_t2164_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m5211
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType StackTraceUtility_t2164_0_0_0;
extern Il2CppType StackTraceUtility_t2164_1_0_0;
struct StackTraceUtility_t2164;
extern CustomAttributesCache StackTraceUtility_t2164__CustomAttributeCache_StackTraceUtility_ExtractStackTrace_m5206;
extern CustomAttributesCache StackTraceUtility_t2164__CustomAttributeCache_StackTraceUtility_ExtractStringFromExceptionInternal_m5209;
extern CustomAttributesCache StackTraceUtility_t2164__CustomAttributeCache_StackTraceUtility_ExtractFormattedStackTrace_m5211;
TypeInfo StackTraceUtility_t2164_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "StackTraceUtility"/* name */
	, "UnityEngine"/* namespaze */
	, StackTraceUtility_t2164_MethodInfos/* methods */
	, NULL/* properties */
	, StackTraceUtility_t2164_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &StackTraceUtility_t2164_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, StackTraceUtility_t2164_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &StackTraceUtility_t2164_il2cpp_TypeInfo/* cast_class */
	, &StackTraceUtility_t2164_0_0_0/* byval_arg */
	, &StackTraceUtility_t2164_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (StackTraceUtility_t2164)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(StackTraceUtility_t2164_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 9/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityException_t360_il2cpp_TypeInfo;

extern MethodInfo Exception__ctor_m5373_MethodInfo;
extern MethodInfo Exception_set_HResult_m5408_MethodInfo;
extern MethodInfo Exception__ctor_m3506_MethodInfo;
extern MethodInfo Exception__ctor_m5409_MethodInfo;


// System.Void UnityEngine.UnityException::.ctor()
extern MethodInfo UnityException__ctor_m5212_MethodInfo;
 void UnityException__ctor_m5212 (UnityException_t360 * __this, MethodInfo* method){
	{
		Exception__ctor_m5373(__this, (String_t*) &_stringLiteral1111, /*hidden argument*/&Exception__ctor_m5373_MethodInfo);
		Exception_set_HResult_m5408(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m5408_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern MethodInfo UnityException__ctor_m5213_MethodInfo;
 void UnityException__ctor_m5213 (UnityException_t360 * __this, String_t* ___message, MethodInfo* method){
	{
		Exception__ctor_m5373(__this, ___message, /*hidden argument*/&Exception__ctor_m5373_MethodInfo);
		Exception_set_HResult_m5408(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m5408_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern MethodInfo UnityException__ctor_m5214_MethodInfo;
 void UnityException__ctor_m5214 (UnityException_t360 * __this, String_t* ___message, Exception_t35 * ___innerException, MethodInfo* method){
	{
		Exception__ctor_m3506(__this, ___message, ___innerException, /*hidden argument*/&Exception__ctor_m3506_MethodInfo);
		Exception_set_HResult_m5408(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m5408_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo UnityException__ctor_m5215_MethodInfo;
 void UnityException__ctor_m5215 (UnityException_t360 * __this, SerializationInfo_t2166 * ___info, StreamingContext_t2167  ___context, MethodInfo* method){
	{
		Exception__ctor_m5409(__this, ___info, ___context, /*hidden argument*/&Exception__ctor_m5409_MethodInfo);
		return;
	}
}
// Metadata Definition UnityEngine.UnityException
extern Il2CppType Int32_t23_0_0_32849;
FieldInfo UnityException_t360____Result_11_FieldInfo = 
{
	"Result"/* name */
	, &Int32_t23_0_0_32849/* type */
	, &UnityException_t360_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo UnityException_t360____unityStackTrace_12_FieldInfo = 
{
	"unityStackTrace"/* name */
	, &String_t_0_0_1/* type */
	, &UnityException_t360_il2cpp_TypeInfo/* parent */
	, offsetof(UnityException_t360, ___unityStackTrace_12)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityException_t360_FieldInfos[] =
{
	&UnityException_t360____Result_11_FieldInfo,
	&UnityException_t360____unityStackTrace_12_FieldInfo,
	NULL
};
static const int32_t UnityException_t360____Result_11_DefaultValueData = -2147467261;
static Il2CppFieldDefaultValueEntry UnityException_t360____Result_11_DefaultValue = 
{
	&UnityException_t360____Result_11_FieldInfo/* field */
	, { (char*)&UnityException_t360____Result_11_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UnityException_t360_FieldDefaultValues[] = 
{
	&UnityException_t360____Result_11_DefaultValue,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UnityException::.ctor()
MethodInfo UnityException__ctor_m5212_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityException__ctor_m5212/* method */
	, &UnityException_t360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1241/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UnityException_t360_UnityException__ctor_m5213_ParameterInfos[] = 
{
	{"message", 0, 134218980, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UnityException::.ctor(System.String)
MethodInfo UnityException__ctor_m5213_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityException__ctor_m5213/* method */
	, &UnityException_t360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, UnityException_t360_UnityException__ctor_m5213_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1242/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Exception_t35_0_0_0;
extern Il2CppType Exception_t35_0_0_0;
static ParameterInfo UnityException_t360_UnityException__ctor_m5214_ParameterInfos[] = 
{
	{"message", 0, 134218981, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"innerException", 1, 134218982, &EmptyCustomAttributesCache, &Exception_t35_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
MethodInfo UnityException__ctor_m5214_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityException__ctor_m5214/* method */
	, &UnityException_t360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Object_t/* invoker_method */
	, UnityException_t360_UnityException__ctor_m5214_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1243/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType SerializationInfo_t2166_0_0_0;
extern Il2CppType SerializationInfo_t2166_0_0_0;
extern Il2CppType StreamingContext_t2167_0_0_0;
extern Il2CppType StreamingContext_t2167_0_0_0;
static ParameterInfo UnityException_t360_UnityException__ctor_m5215_ParameterInfos[] = 
{
	{"info", 0, 134218983, &EmptyCustomAttributesCache, &SerializationInfo_t2166_0_0_0},
	{"context", 1, 134218984, &EmptyCustomAttributesCache, &StreamingContext_t2167_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_StreamingContext_t2167 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
MethodInfo UnityException__ctor_m5215_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityException__ctor_m5215/* method */
	, &UnityException_t360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_StreamingContext_t2167/* invoker_method */
	, UnityException_t360_UnityException__ctor_m5215_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1244/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityException_t360_MethodInfos[] =
{
	&UnityException__ctor_m5212_MethodInfo,
	&UnityException__ctor_m5213_MethodInfo,
	&UnityException__ctor_m5214_MethodInfo,
	&UnityException__ctor_m5215_MethodInfo,
	NULL
};
extern MethodInfo Exception_ToString_m3507_MethodInfo;
extern MethodInfo Exception_GetObjectData_m3508_MethodInfo;
extern MethodInfo Exception_get_Source_m3510_MethodInfo;
static MethodInfo* UnityException_t360_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Exception_ToString_m3507_MethodInfo,
	&Exception_GetObjectData_m3508_MethodInfo,
	&Exception_get_InnerException_m3509_MethodInfo,
	&Exception_get_Message_m1717_MethodInfo,
	&Exception_get_Source_m3510_MethodInfo,
	&Exception_get_StackTrace_m3511_MethodInfo,
	&Exception_GetObjectData_m3508_MethodInfo,
	&Exception_GetType_m3512_MethodInfo,
};
extern TypeInfo ISerializable_t366_il2cpp_TypeInfo;
extern TypeInfo _Exception_t970_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityException_t360_InterfacesOffsets[] = 
{
	{ &ISerializable_t366_il2cpp_TypeInfo, 4},
	{ &_Exception_t970_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityException_t360_0_0_0;
extern Il2CppType UnityException_t360_1_0_0;
struct UnityException_t360;
TypeInfo UnityException_t360_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityException"/* name */
	, "UnityEngine"/* namespaze */
	, UnityException_t360_MethodInfos/* methods */
	, NULL/* properties */
	, UnityException_t360_FieldInfos/* fields */
	, NULL/* events */
	, &Exception_t35_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityException_t360_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityException_t360_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityException_t360_il2cpp_TypeInfo/* cast_class */
	, &UnityException_t360_0_0_0/* byval_arg */
	, &UnityException_t360_1_0_0/* this_arg */
	, UnityException_t360_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UnityException_t360_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityException_t360)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SharedBetweenAnimatorsAttribute_t2168_il2cpp_TypeInfo;



// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern MethodInfo SharedBetweenAnimatorsAttribute__ctor_m5216_MethodInfo;
 void SharedBetweenAnimatorsAttribute__ctor_m5216 (SharedBetweenAnimatorsAttribute_t2168 * __this, MethodInfo* method){
	{
		Attribute__ctor_m3409(__this, /*hidden argument*/&Attribute__ctor_m3409_MethodInfo);
		return;
	}
}
// Metadata Definition UnityEngine.SharedBetweenAnimatorsAttribute
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
MethodInfo SharedBetweenAnimatorsAttribute__ctor_m5216_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SharedBetweenAnimatorsAttribute__ctor_m5216/* method */
	, &SharedBetweenAnimatorsAttribute_t2168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1245/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* SharedBetweenAnimatorsAttribute_t2168_MethodInfos[] =
{
	&SharedBetweenAnimatorsAttribute__ctor_m5216_MethodInfo,
	NULL
};
static MethodInfo* SharedBetweenAnimatorsAttribute_t2168_VTable[] =
{
	&Attribute_Equals_m3410_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Attribute_GetHashCode_m3411_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
};
static Il2CppInterfaceOffsetPair SharedBetweenAnimatorsAttribute_t2168_InterfacesOffsets[] = 
{
	{ &_Attribute_t945_il2cpp_TypeInfo, 4},
};
void SharedBetweenAnimatorsAttribute_t2168_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t946 * tmp;
		tmp = (AttributeUsageAttribute_t946 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t946_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m3412(tmp, 4, &AttributeUsageAttribute__ctor_m3412_MethodInfo);
		AttributeUsageAttribute_set_AllowMultiple_m3414(tmp, false, &AttributeUsageAttribute_set_AllowMultiple_m3414_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache SharedBetweenAnimatorsAttribute_t2168__CustomAttributeCache = {
1,
NULL,
&SharedBetweenAnimatorsAttribute_t2168_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType SharedBetweenAnimatorsAttribute_t2168_0_0_0;
extern Il2CppType SharedBetweenAnimatorsAttribute_t2168_1_0_0;
struct SharedBetweenAnimatorsAttribute_t2168;
extern CustomAttributesCache SharedBetweenAnimatorsAttribute_t2168__CustomAttributeCache;
TypeInfo SharedBetweenAnimatorsAttribute_t2168_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SharedBetweenAnimatorsAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, SharedBetweenAnimatorsAttribute_t2168_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Attribute_t539_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &SharedBetweenAnimatorsAttribute_t2168_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, SharedBetweenAnimatorsAttribute_t2168_VTable/* vtable */
	, &SharedBetweenAnimatorsAttribute_t2168__CustomAttributeCache/* custom_attributes_cache */
	, &SharedBetweenAnimatorsAttribute_t2168_il2cpp_TypeInfo/* cast_class */
	, &SharedBetweenAnimatorsAttribute_t2168_0_0_0/* byval_arg */
	, &SharedBetweenAnimatorsAttribute_t2168_1_0_0/* this_arg */
	, SharedBetweenAnimatorsAttribute_t2168_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SharedBetweenAnimatorsAttribute_t2168)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
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
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StateMachineBehaviour_t2169_il2cpp_TypeInfo;

extern MethodInfo ScriptableObject__ctor_m4365_MethodInfo;


// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern MethodInfo StateMachineBehaviour__ctor_m5217_MethodInfo;
 void StateMachineBehaviour__ctor_m5217 (StateMachineBehaviour_t2169 * __this, MethodInfo* method){
	{
		ScriptableObject__ctor_m4365(__this, /*hidden argument*/&ScriptableObject__ctor_m4365_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateEnter_m5218_MethodInfo;
 void StateMachineBehaviour_OnStateEnter_m5218 (StateMachineBehaviour_t2169 * __this, Animator_t229 * ___animator, AnimatorStateInfo_t2118  ___stateInfo, int32_t ___layerIndex, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateUpdate_m5219_MethodInfo;
 void StateMachineBehaviour_OnStateUpdate_m5219 (StateMachineBehaviour_t2169 * __this, Animator_t229 * ___animator, AnimatorStateInfo_t2118  ___stateInfo, int32_t ___layerIndex, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateExit_m5220_MethodInfo;
 void StateMachineBehaviour_OnStateExit_m5220 (StateMachineBehaviour_t2169 * __this, Animator_t229 * ___animator, AnimatorStateInfo_t2118  ___stateInfo, int32_t ___layerIndex, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMove_m5221_MethodInfo;
 void StateMachineBehaviour_OnStateMove_m5221 (StateMachineBehaviour_t2169 * __this, Animator_t229 * ___animator, AnimatorStateInfo_t2118  ___stateInfo, int32_t ___layerIndex, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateIK_m5222_MethodInfo;
 void StateMachineBehaviour_OnStateIK_m5222 (StateMachineBehaviour_t2169 * __this, Animator_t229 * ___animator, AnimatorStateInfo_t2118  ___stateInfo, int32_t ___layerIndex, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMachineEnter_m5223_MethodInfo;
 void StateMachineBehaviour_OnStateMachineEnter_m5223 (StateMachineBehaviour_t2169 * __this, Animator_t229 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMachineExit_m5224_MethodInfo;
 void StateMachineBehaviour_OnStateMachineExit_m5224 (StateMachineBehaviour_t2169 * __this, Animator_t229 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition UnityEngine.StateMachineBehaviour
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
MethodInfo StateMachineBehaviour__ctor_m5217_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&StateMachineBehaviour__ctor_m5217/* method */
	, &StateMachineBehaviour_t2169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1246/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Animator_t229_0_0_0;
extern Il2CppType Animator_t229_0_0_0;
extern Il2CppType AnimatorStateInfo_t2118_0_0_0;
extern Il2CppType AnimatorStateInfo_t2118_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo StateMachineBehaviour_t2169_StateMachineBehaviour_OnStateEnter_m5218_ParameterInfos[] = 
{
	{"animator", 0, 134218985, &EmptyCustomAttributesCache, &Animator_t229_0_0_0},
	{"stateInfo", 1, 134218986, &EmptyCustomAttributesCache, &AnimatorStateInfo_t2118_0_0_0},
	{"layerIndex", 2, 134218987, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_AnimatorStateInfo_t2118_Int32_t23 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
MethodInfo StateMachineBehaviour_OnStateEnter_m5218_MethodInfo = 
{
	"OnStateEnter"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateEnter_m5218/* method */
	, &StateMachineBehaviour_t2169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_AnimatorStateInfo_t2118_Int32_t23/* invoker_method */
	, StateMachineBehaviour_t2169_StateMachineBehaviour_OnStateEnter_m5218_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1247/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Animator_t229_0_0_0;
extern Il2CppType AnimatorStateInfo_t2118_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo StateMachineBehaviour_t2169_StateMachineBehaviour_OnStateUpdate_m5219_ParameterInfos[] = 
{
	{"animator", 0, 134218988, &EmptyCustomAttributesCache, &Animator_t229_0_0_0},
	{"stateInfo", 1, 134218989, &EmptyCustomAttributesCache, &AnimatorStateInfo_t2118_0_0_0},
	{"layerIndex", 2, 134218990, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_AnimatorStateInfo_t2118_Int32_t23 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
MethodInfo StateMachineBehaviour_OnStateUpdate_m5219_MethodInfo = 
{
	"OnStateUpdate"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateUpdate_m5219/* method */
	, &StateMachineBehaviour_t2169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_AnimatorStateInfo_t2118_Int32_t23/* invoker_method */
	, StateMachineBehaviour_t2169_StateMachineBehaviour_OnStateUpdate_m5219_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1248/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Animator_t229_0_0_0;
extern Il2CppType AnimatorStateInfo_t2118_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo StateMachineBehaviour_t2169_StateMachineBehaviour_OnStateExit_m5220_ParameterInfos[] = 
{
	{"animator", 0, 134218991, &EmptyCustomAttributesCache, &Animator_t229_0_0_0},
	{"stateInfo", 1, 134218992, &EmptyCustomAttributesCache, &AnimatorStateInfo_t2118_0_0_0},
	{"layerIndex", 2, 134218993, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_AnimatorStateInfo_t2118_Int32_t23 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
MethodInfo StateMachineBehaviour_OnStateExit_m5220_MethodInfo = 
{
	"OnStateExit"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateExit_m5220/* method */
	, &StateMachineBehaviour_t2169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_AnimatorStateInfo_t2118_Int32_t23/* invoker_method */
	, StateMachineBehaviour_t2169_StateMachineBehaviour_OnStateExit_m5220_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1249/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Animator_t229_0_0_0;
extern Il2CppType AnimatorStateInfo_t2118_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo StateMachineBehaviour_t2169_StateMachineBehaviour_OnStateMove_m5221_ParameterInfos[] = 
{
	{"animator", 0, 134218994, &EmptyCustomAttributesCache, &Animator_t229_0_0_0},
	{"stateInfo", 1, 134218995, &EmptyCustomAttributesCache, &AnimatorStateInfo_t2118_0_0_0},
	{"layerIndex", 2, 134218996, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_AnimatorStateInfo_t2118_Int32_t23 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
MethodInfo StateMachineBehaviour_OnStateMove_m5221_MethodInfo = 
{
	"OnStateMove"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateMove_m5221/* method */
	, &StateMachineBehaviour_t2169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_AnimatorStateInfo_t2118_Int32_t23/* invoker_method */
	, StateMachineBehaviour_t2169_StateMachineBehaviour_OnStateMove_m5221_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1250/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Animator_t229_0_0_0;
extern Il2CppType AnimatorStateInfo_t2118_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo StateMachineBehaviour_t2169_StateMachineBehaviour_OnStateIK_m5222_ParameterInfos[] = 
{
	{"animator", 0, 134218997, &EmptyCustomAttributesCache, &Animator_t229_0_0_0},
	{"stateInfo", 1, 134218998, &EmptyCustomAttributesCache, &AnimatorStateInfo_t2118_0_0_0},
	{"layerIndex", 2, 134218999, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_AnimatorStateInfo_t2118_Int32_t23 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
MethodInfo StateMachineBehaviour_OnStateIK_m5222_MethodInfo = 
{
	"OnStateIK"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateIK_m5222/* method */
	, &StateMachineBehaviour_t2169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_AnimatorStateInfo_t2118_Int32_t23/* invoker_method */
	, StateMachineBehaviour_t2169_StateMachineBehaviour_OnStateIK_m5222_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1251/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Animator_t229_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo StateMachineBehaviour_t2169_StateMachineBehaviour_OnStateMachineEnter_m5223_ParameterInfos[] = 
{
	{"animator", 0, 134219000, &EmptyCustomAttributesCache, &Animator_t229_0_0_0},
	{"stateMachinePathHash", 1, 134219001, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
MethodInfo StateMachineBehaviour_OnStateMachineEnter_m5223_MethodInfo = 
{
	"OnStateMachineEnter"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateMachineEnter_m5223/* method */
	, &StateMachineBehaviour_t2169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, StateMachineBehaviour_t2169_StateMachineBehaviour_OnStateMachineEnter_m5223_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1252/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Animator_t229_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo StateMachineBehaviour_t2169_StateMachineBehaviour_OnStateMachineExit_m5224_ParameterInfos[] = 
{
	{"animator", 0, 134219002, &EmptyCustomAttributesCache, &Animator_t229_0_0_0},
	{"stateMachinePathHash", 1, 134219003, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Int32_t23 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
MethodInfo StateMachineBehaviour_OnStateMachineExit_m5224_MethodInfo = 
{
	"OnStateMachineExit"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateMachineExit_m5224/* method */
	, &StateMachineBehaviour_t2169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Int32_t23/* invoker_method */
	, StateMachineBehaviour_t2169_StateMachineBehaviour_OnStateMachineExit_m5224_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1253/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* StateMachineBehaviour_t2169_MethodInfos[] =
{
	&StateMachineBehaviour__ctor_m5217_MethodInfo,
	&StateMachineBehaviour_OnStateEnter_m5218_MethodInfo,
	&StateMachineBehaviour_OnStateUpdate_m5219_MethodInfo,
	&StateMachineBehaviour_OnStateExit_m5220_MethodInfo,
	&StateMachineBehaviour_OnStateMove_m5221_MethodInfo,
	&StateMachineBehaviour_OnStateIK_m5222_MethodInfo,
	&StateMachineBehaviour_OnStateMachineEnter_m5223_MethodInfo,
	&StateMachineBehaviour_OnStateMachineExit_m5224_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m49_MethodInfo;
extern MethodInfo Object_GetHashCode_m51_MethodInfo;
extern MethodInfo Object_ToString_m52_MethodInfo;
static MethodInfo* StateMachineBehaviour_t2169_VTable[] =
{
	&Object_Equals_m49_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m51_MethodInfo,
	&Object_ToString_m52_MethodInfo,
	&StateMachineBehaviour_OnStateEnter_m5218_MethodInfo,
	&StateMachineBehaviour_OnStateUpdate_m5219_MethodInfo,
	&StateMachineBehaviour_OnStateExit_m5220_MethodInfo,
	&StateMachineBehaviour_OnStateMove_m5221_MethodInfo,
	&StateMachineBehaviour_OnStateIK_m5222_MethodInfo,
	&StateMachineBehaviour_OnStateMachineEnter_m5223_MethodInfo,
	&StateMachineBehaviour_OnStateMachineExit_m5224_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType StateMachineBehaviour_t2169_0_0_0;
extern Il2CppType StateMachineBehaviour_t2169_1_0_0;
extern TypeInfo ScriptableObject_t2016_il2cpp_TypeInfo;
struct StateMachineBehaviour_t2169;
TypeInfo StateMachineBehaviour_t2169_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "StateMachineBehaviour"/* name */
	, "UnityEngine"/* namespaze */
	, StateMachineBehaviour_t2169_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ScriptableObject_t2016_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &StateMachineBehaviour_t2169_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, StateMachineBehaviour_t2169_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &StateMachineBehaviour_t2169_il2cpp_TypeInfo/* cast_class */
	, &StateMachineBehaviour_t2169_0_0_0/* byval_arg */
	, &StateMachineBehaviour_t2169_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (StateMachineBehaviour_t2169)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048705/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 8/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DblClickSnapping_t2170_il2cpp_TypeInfo;



// Metadata Definition UnityEngine.TextEditor/DblClickSnapping
extern Il2CppType Byte_t779_0_0_1542;
FieldInfo DblClickSnapping_t2170____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Byte_t779_0_0_1542/* type */
	, &DblClickSnapping_t2170_il2cpp_TypeInfo/* parent */
	, offsetof(DblClickSnapping_t2170, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType DblClickSnapping_t2170_0_0_32854;
FieldInfo DblClickSnapping_t2170____WORDS_2_FieldInfo = 
{
	"WORDS"/* name */
	, &DblClickSnapping_t2170_0_0_32854/* type */
	, &DblClickSnapping_t2170_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType DblClickSnapping_t2170_0_0_32854;
FieldInfo DblClickSnapping_t2170____PARAGRAPHS_3_FieldInfo = 
{
	"PARAGRAPHS"/* name */
	, &DblClickSnapping_t2170_0_0_32854/* type */
	, &DblClickSnapping_t2170_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* DblClickSnapping_t2170_FieldInfos[] =
{
	&DblClickSnapping_t2170____value___1_FieldInfo,
	&DblClickSnapping_t2170____WORDS_2_FieldInfo,
	&DblClickSnapping_t2170____PARAGRAPHS_3_FieldInfo,
	NULL
};
static const uint8_t DblClickSnapping_t2170____WORDS_2_DefaultValueData = 0;
extern Il2CppType Byte_t779_0_0_0;
static Il2CppFieldDefaultValueEntry DblClickSnapping_t2170____WORDS_2_DefaultValue = 
{
	&DblClickSnapping_t2170____WORDS_2_FieldInfo/* field */
	, { (char*)&DblClickSnapping_t2170____WORDS_2_DefaultValueData, &Byte_t779_0_0_0 }/* value */

};
static const uint8_t DblClickSnapping_t2170____PARAGRAPHS_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry DblClickSnapping_t2170____PARAGRAPHS_3_DefaultValue = 
{
	&DblClickSnapping_t2170____PARAGRAPHS_3_FieldInfo/* field */
	, { (char*)&DblClickSnapping_t2170____PARAGRAPHS_3_DefaultValueData, &Byte_t779_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* DblClickSnapping_t2170_FieldDefaultValues[] = 
{
	&DblClickSnapping_t2170____WORDS_2_DefaultValue,
	&DblClickSnapping_t2170____PARAGRAPHS_3_DefaultValue,
	NULL
};
static MethodInfo* DblClickSnapping_t2170_MethodInfos[] =
{
	NULL
};
extern MethodInfo Enum_Equals_m1284_MethodInfo;
extern MethodInfo Enum_GetHashCode_m1285_MethodInfo;
extern MethodInfo Enum_ToString_m1286_MethodInfo;
extern MethodInfo Enum_ToString_m1287_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToBoolean_m1288_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToByte_m1289_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToChar_m1290_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDateTime_m1291_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDecimal_m1292_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDouble_m1293_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt16_m1294_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt32_m1295_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt64_m1296_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToSByte_m1297_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToSingle_m1298_MethodInfo;
extern MethodInfo Enum_ToString_m1299_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToType_m1300_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt16_m1301_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt32_m1302_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt64_m1303_MethodInfo;
extern MethodInfo Enum_CompareTo_m1304_MethodInfo;
extern MethodInfo Enum_GetTypeCode_m1305_MethodInfo;
static MethodInfo* DblClickSnapping_t2170_VTable[] =
{
	&Enum_Equals_m1284_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Enum_GetHashCode_m1285_MethodInfo,
	&Enum_ToString_m1286_MethodInfo,
	&Enum_ToString_m1287_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1288_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1289_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1290_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1291_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1292_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1293_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1294_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1295_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1296_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1297_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1298_MethodInfo,
	&Enum_ToString_m1299_MethodInfo,
	&Enum_System_IConvertible_ToType_m1300_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1301_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1302_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1303_MethodInfo,
	&Enum_CompareTo_m1304_MethodInfo,
	&Enum_GetTypeCode_m1305_MethodInfo,
};
extern TypeInfo IFormattable_t289_il2cpp_TypeInfo;
extern TypeInfo IConvertible_t290_il2cpp_TypeInfo;
extern TypeInfo IComparable_t291_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair DblClickSnapping_t2170_InterfacesOffsets[] = 
{
	{ &IFormattable_t289_il2cpp_TypeInfo, 4},
	{ &IConvertible_t290_il2cpp_TypeInfo, 5},
	{ &IComparable_t291_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType DblClickSnapping_t2170_0_0_0;
extern Il2CppType DblClickSnapping_t2170_1_0_0;
extern TypeInfo Enum_t293_il2cpp_TypeInfo;
extern TypeInfo Byte_t779_il2cpp_TypeInfo;
extern TypeInfo TextEditor_t368_il2cpp_TypeInfo;
TypeInfo DblClickSnapping_t2170_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "DblClickSnapping"/* name */
	, ""/* namespaze */
	, DblClickSnapping_t2170_MethodInfos/* methods */
	, NULL/* properties */
	, DblClickSnapping_t2170_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t293_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &TextEditor_t368_il2cpp_TypeInfo/* nested_in */
	, &Byte_t779_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DblClickSnapping_t2170_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Byte_t779_il2cpp_TypeInfo/* cast_class */
	, &DblClickSnapping_t2170_0_0_0/* byval_arg */
	, &DblClickSnapping_t2170_1_0_0/* this_arg */
	, DblClickSnapping_t2170_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, DblClickSnapping_t2170_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DblClickSnapping_t2170)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (uint8_t)/* element_size */
	, sizeof(uint8_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextEditOp_t2171_il2cpp_TypeInfo;



// Metadata Definition UnityEngine.TextEditor/TextEditOp
extern Il2CppType Int32_t23_0_0_1542;
FieldInfo TextEditOp_t2171____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t23_0_0_1542/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditOp_t2171, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MoveLeft_2_FieldInfo = 
{
	"MoveLeft"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MoveRight_3_FieldInfo = 
{
	"MoveRight"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MoveUp_4_FieldInfo = 
{
	"MoveUp"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MoveDown_5_FieldInfo = 
{
	"MoveDown"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MoveLineStart_6_FieldInfo = 
{
	"MoveLineStart"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MoveLineEnd_7_FieldInfo = 
{
	"MoveLineEnd"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MoveTextStart_8_FieldInfo = 
{
	"MoveTextStart"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MoveTextEnd_9_FieldInfo = 
{
	"MoveTextEnd"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MovePageUp_10_FieldInfo = 
{
	"MovePageUp"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MovePageDown_11_FieldInfo = 
{
	"MovePageDown"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MoveGraphicalLineStart_12_FieldInfo = 
{
	"MoveGraphicalLineStart"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MoveGraphicalLineEnd_13_FieldInfo = 
{
	"MoveGraphicalLineEnd"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MoveWordLeft_14_FieldInfo = 
{
	"MoveWordLeft"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MoveWordRight_15_FieldInfo = 
{
	"MoveWordRight"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MoveParagraphForward_16_FieldInfo = 
{
	"MoveParagraphForward"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MoveParagraphBackward_17_FieldInfo = 
{
	"MoveParagraphBackward"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MoveToStartOfNextWord_18_FieldInfo = 
{
	"MoveToStartOfNextWord"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____MoveToEndOfPreviousWord_19_FieldInfo = 
{
	"MoveToEndOfPreviousWord"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectLeft_20_FieldInfo = 
{
	"SelectLeft"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectRight_21_FieldInfo = 
{
	"SelectRight"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectUp_22_FieldInfo = 
{
	"SelectUp"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectDown_23_FieldInfo = 
{
	"SelectDown"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectTextStart_24_FieldInfo = 
{
	"SelectTextStart"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectTextEnd_25_FieldInfo = 
{
	"SelectTextEnd"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectPageUp_26_FieldInfo = 
{
	"SelectPageUp"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectPageDown_27_FieldInfo = 
{
	"SelectPageDown"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____ExpandSelectGraphicalLineStart_28_FieldInfo = 
{
	"ExpandSelectGraphicalLineStart"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____ExpandSelectGraphicalLineEnd_29_FieldInfo = 
{
	"ExpandSelectGraphicalLineEnd"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectGraphicalLineStart_30_FieldInfo = 
{
	"SelectGraphicalLineStart"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectGraphicalLineEnd_31_FieldInfo = 
{
	"SelectGraphicalLineEnd"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectWordLeft_32_FieldInfo = 
{
	"SelectWordLeft"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectWordRight_33_FieldInfo = 
{
	"SelectWordRight"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectToEndOfPreviousWord_34_FieldInfo = 
{
	"SelectToEndOfPreviousWord"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectToStartOfNextWord_35_FieldInfo = 
{
	"SelectToStartOfNextWord"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectParagraphBackward_36_FieldInfo = 
{
	"SelectParagraphBackward"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectParagraphForward_37_FieldInfo = 
{
	"SelectParagraphForward"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____Delete_38_FieldInfo = 
{
	"Delete"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____Backspace_39_FieldInfo = 
{
	"Backspace"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____DeleteWordBack_40_FieldInfo = 
{
	"DeleteWordBack"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____DeleteWordForward_41_FieldInfo = 
{
	"DeleteWordForward"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____DeleteLineBack_42_FieldInfo = 
{
	"DeleteLineBack"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____Cut_43_FieldInfo = 
{
	"Cut"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____Copy_44_FieldInfo = 
{
	"Copy"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____Paste_45_FieldInfo = 
{
	"Paste"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectAll_46_FieldInfo = 
{
	"SelectAll"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____SelectNone_47_FieldInfo = 
{
	"SelectNone"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____ScrollStart_48_FieldInfo = 
{
	"ScrollStart"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____ScrollEnd_49_FieldInfo = 
{
	"ScrollEnd"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____ScrollPageUp_50_FieldInfo = 
{
	"ScrollPageUp"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t2171_0_0_32854;
FieldInfo TextEditOp_t2171____ScrollPageDown_51_FieldInfo = 
{
	"ScrollPageDown"/* name */
	, &TextEditOp_t2171_0_0_32854/* type */
	, &TextEditOp_t2171_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TextEditOp_t2171_FieldInfos[] =
{
	&TextEditOp_t2171____value___1_FieldInfo,
	&TextEditOp_t2171____MoveLeft_2_FieldInfo,
	&TextEditOp_t2171____MoveRight_3_FieldInfo,
	&TextEditOp_t2171____MoveUp_4_FieldInfo,
	&TextEditOp_t2171____MoveDown_5_FieldInfo,
	&TextEditOp_t2171____MoveLineStart_6_FieldInfo,
	&TextEditOp_t2171____MoveLineEnd_7_FieldInfo,
	&TextEditOp_t2171____MoveTextStart_8_FieldInfo,
	&TextEditOp_t2171____MoveTextEnd_9_FieldInfo,
	&TextEditOp_t2171____MovePageUp_10_FieldInfo,
	&TextEditOp_t2171____MovePageDown_11_FieldInfo,
	&TextEditOp_t2171____MoveGraphicalLineStart_12_FieldInfo,
	&TextEditOp_t2171____MoveGraphicalLineEnd_13_FieldInfo,
	&TextEditOp_t2171____MoveWordLeft_14_FieldInfo,
	&TextEditOp_t2171____MoveWordRight_15_FieldInfo,
	&TextEditOp_t2171____MoveParagraphForward_16_FieldInfo,
	&TextEditOp_t2171____MoveParagraphBackward_17_FieldInfo,
	&TextEditOp_t2171____MoveToStartOfNextWord_18_FieldInfo,
	&TextEditOp_t2171____MoveToEndOfPreviousWord_19_FieldInfo,
	&TextEditOp_t2171____SelectLeft_20_FieldInfo,
	&TextEditOp_t2171____SelectRight_21_FieldInfo,
	&TextEditOp_t2171____SelectUp_22_FieldInfo,
	&TextEditOp_t2171____SelectDown_23_FieldInfo,
	&TextEditOp_t2171____SelectTextStart_24_FieldInfo,
	&TextEditOp_t2171____SelectTextEnd_25_FieldInfo,
	&TextEditOp_t2171____SelectPageUp_26_FieldInfo,
	&TextEditOp_t2171____SelectPageDown_27_FieldInfo,
	&TextEditOp_t2171____ExpandSelectGraphicalLineStart_28_FieldInfo,
	&TextEditOp_t2171____ExpandSelectGraphicalLineEnd_29_FieldInfo,
	&TextEditOp_t2171____SelectGraphicalLineStart_30_FieldInfo,
	&TextEditOp_t2171____SelectGraphicalLineEnd_31_FieldInfo,
	&TextEditOp_t2171____SelectWordLeft_32_FieldInfo,
	&TextEditOp_t2171____SelectWordRight_33_FieldInfo,
	&TextEditOp_t2171____SelectToEndOfPreviousWord_34_FieldInfo,
	&TextEditOp_t2171____SelectToStartOfNextWord_35_FieldInfo,
	&TextEditOp_t2171____SelectParagraphBackward_36_FieldInfo,
	&TextEditOp_t2171____SelectParagraphForward_37_FieldInfo,
	&TextEditOp_t2171____Delete_38_FieldInfo,
	&TextEditOp_t2171____Backspace_39_FieldInfo,
	&TextEditOp_t2171____DeleteWordBack_40_FieldInfo,
	&TextEditOp_t2171____DeleteWordForward_41_FieldInfo,
	&TextEditOp_t2171____DeleteLineBack_42_FieldInfo,
	&TextEditOp_t2171____Cut_43_FieldInfo,
	&TextEditOp_t2171____Copy_44_FieldInfo,
	&TextEditOp_t2171____Paste_45_FieldInfo,
	&TextEditOp_t2171____SelectAll_46_FieldInfo,
	&TextEditOp_t2171____SelectNone_47_FieldInfo,
	&TextEditOp_t2171____ScrollStart_48_FieldInfo,
	&TextEditOp_t2171____ScrollEnd_49_FieldInfo,
	&TextEditOp_t2171____ScrollPageUp_50_FieldInfo,
	&TextEditOp_t2171____ScrollPageDown_51_FieldInfo,
	NULL
};
static const int32_t TextEditOp_t2171____MoveLeft_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MoveLeft_2_DefaultValue = 
{
	&TextEditOp_t2171____MoveLeft_2_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MoveLeft_2_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MoveRight_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MoveRight_3_DefaultValue = 
{
	&TextEditOp_t2171____MoveRight_3_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MoveRight_3_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MoveUp_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MoveUp_4_DefaultValue = 
{
	&TextEditOp_t2171____MoveUp_4_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MoveUp_4_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MoveDown_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MoveDown_5_DefaultValue = 
{
	&TextEditOp_t2171____MoveDown_5_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MoveDown_5_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MoveLineStart_6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MoveLineStart_6_DefaultValue = 
{
	&TextEditOp_t2171____MoveLineStart_6_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MoveLineStart_6_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MoveLineEnd_7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MoveLineEnd_7_DefaultValue = 
{
	&TextEditOp_t2171____MoveLineEnd_7_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MoveLineEnd_7_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MoveTextStart_8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MoveTextStart_8_DefaultValue = 
{
	&TextEditOp_t2171____MoveTextStart_8_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MoveTextStart_8_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MoveTextEnd_9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MoveTextEnd_9_DefaultValue = 
{
	&TextEditOp_t2171____MoveTextEnd_9_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MoveTextEnd_9_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MovePageUp_10_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MovePageUp_10_DefaultValue = 
{
	&TextEditOp_t2171____MovePageUp_10_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MovePageUp_10_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MovePageDown_11_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MovePageDown_11_DefaultValue = 
{
	&TextEditOp_t2171____MovePageDown_11_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MovePageDown_11_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MoveGraphicalLineStart_12_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MoveGraphicalLineStart_12_DefaultValue = 
{
	&TextEditOp_t2171____MoveGraphicalLineStart_12_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MoveGraphicalLineStart_12_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MoveGraphicalLineEnd_13_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MoveGraphicalLineEnd_13_DefaultValue = 
{
	&TextEditOp_t2171____MoveGraphicalLineEnd_13_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MoveGraphicalLineEnd_13_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MoveWordLeft_14_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MoveWordLeft_14_DefaultValue = 
{
	&TextEditOp_t2171____MoveWordLeft_14_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MoveWordLeft_14_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MoveWordRight_15_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MoveWordRight_15_DefaultValue = 
{
	&TextEditOp_t2171____MoveWordRight_15_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MoveWordRight_15_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MoveParagraphForward_16_DefaultValueData = 14;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MoveParagraphForward_16_DefaultValue = 
{
	&TextEditOp_t2171____MoveParagraphForward_16_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MoveParagraphForward_16_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MoveParagraphBackward_17_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MoveParagraphBackward_17_DefaultValue = 
{
	&TextEditOp_t2171____MoveParagraphBackward_17_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MoveParagraphBackward_17_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MoveToStartOfNextWord_18_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MoveToStartOfNextWord_18_DefaultValue = 
{
	&TextEditOp_t2171____MoveToStartOfNextWord_18_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MoveToStartOfNextWord_18_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____MoveToEndOfPreviousWord_19_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____MoveToEndOfPreviousWord_19_DefaultValue = 
{
	&TextEditOp_t2171____MoveToEndOfPreviousWord_19_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____MoveToEndOfPreviousWord_19_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectLeft_20_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectLeft_20_DefaultValue = 
{
	&TextEditOp_t2171____SelectLeft_20_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectLeft_20_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectRight_21_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectRight_21_DefaultValue = 
{
	&TextEditOp_t2171____SelectRight_21_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectRight_21_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectUp_22_DefaultValueData = 20;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectUp_22_DefaultValue = 
{
	&TextEditOp_t2171____SelectUp_22_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectUp_22_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectDown_23_DefaultValueData = 21;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectDown_23_DefaultValue = 
{
	&TextEditOp_t2171____SelectDown_23_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectDown_23_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectTextStart_24_DefaultValueData = 22;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectTextStart_24_DefaultValue = 
{
	&TextEditOp_t2171____SelectTextStart_24_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectTextStart_24_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectTextEnd_25_DefaultValueData = 23;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectTextEnd_25_DefaultValue = 
{
	&TextEditOp_t2171____SelectTextEnd_25_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectTextEnd_25_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectPageUp_26_DefaultValueData = 24;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectPageUp_26_DefaultValue = 
{
	&TextEditOp_t2171____SelectPageUp_26_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectPageUp_26_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectPageDown_27_DefaultValueData = 25;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectPageDown_27_DefaultValue = 
{
	&TextEditOp_t2171____SelectPageDown_27_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectPageDown_27_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____ExpandSelectGraphicalLineStart_28_DefaultValueData = 26;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____ExpandSelectGraphicalLineStart_28_DefaultValue = 
{
	&TextEditOp_t2171____ExpandSelectGraphicalLineStart_28_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____ExpandSelectGraphicalLineStart_28_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____ExpandSelectGraphicalLineEnd_29_DefaultValueData = 27;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____ExpandSelectGraphicalLineEnd_29_DefaultValue = 
{
	&TextEditOp_t2171____ExpandSelectGraphicalLineEnd_29_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____ExpandSelectGraphicalLineEnd_29_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectGraphicalLineStart_30_DefaultValueData = 28;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectGraphicalLineStart_30_DefaultValue = 
{
	&TextEditOp_t2171____SelectGraphicalLineStart_30_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectGraphicalLineStart_30_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectGraphicalLineEnd_31_DefaultValueData = 29;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectGraphicalLineEnd_31_DefaultValue = 
{
	&TextEditOp_t2171____SelectGraphicalLineEnd_31_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectGraphicalLineEnd_31_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectWordLeft_32_DefaultValueData = 30;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectWordLeft_32_DefaultValue = 
{
	&TextEditOp_t2171____SelectWordLeft_32_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectWordLeft_32_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectWordRight_33_DefaultValueData = 31;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectWordRight_33_DefaultValue = 
{
	&TextEditOp_t2171____SelectWordRight_33_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectWordRight_33_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectToEndOfPreviousWord_34_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectToEndOfPreviousWord_34_DefaultValue = 
{
	&TextEditOp_t2171____SelectToEndOfPreviousWord_34_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectToEndOfPreviousWord_34_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectToStartOfNextWord_35_DefaultValueData = 33;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectToStartOfNextWord_35_DefaultValue = 
{
	&TextEditOp_t2171____SelectToStartOfNextWord_35_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectToStartOfNextWord_35_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectParagraphBackward_36_DefaultValueData = 34;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectParagraphBackward_36_DefaultValue = 
{
	&TextEditOp_t2171____SelectParagraphBackward_36_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectParagraphBackward_36_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectParagraphForward_37_DefaultValueData = 35;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectParagraphForward_37_DefaultValue = 
{
	&TextEditOp_t2171____SelectParagraphForward_37_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectParagraphForward_37_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____Delete_38_DefaultValueData = 36;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____Delete_38_DefaultValue = 
{
	&TextEditOp_t2171____Delete_38_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____Delete_38_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____Backspace_39_DefaultValueData = 37;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____Backspace_39_DefaultValue = 
{
	&TextEditOp_t2171____Backspace_39_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____Backspace_39_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____DeleteWordBack_40_DefaultValueData = 38;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____DeleteWordBack_40_DefaultValue = 
{
	&TextEditOp_t2171____DeleteWordBack_40_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____DeleteWordBack_40_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____DeleteWordForward_41_DefaultValueData = 39;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____DeleteWordForward_41_DefaultValue = 
{
	&TextEditOp_t2171____DeleteWordForward_41_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____DeleteWordForward_41_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____DeleteLineBack_42_DefaultValueData = 40;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____DeleteLineBack_42_DefaultValue = 
{
	&TextEditOp_t2171____DeleteLineBack_42_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____DeleteLineBack_42_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____Cut_43_DefaultValueData = 41;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____Cut_43_DefaultValue = 
{
	&TextEditOp_t2171____Cut_43_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____Cut_43_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____Copy_44_DefaultValueData = 42;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____Copy_44_DefaultValue = 
{
	&TextEditOp_t2171____Copy_44_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____Copy_44_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____Paste_45_DefaultValueData = 43;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____Paste_45_DefaultValue = 
{
	&TextEditOp_t2171____Paste_45_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____Paste_45_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectAll_46_DefaultValueData = 44;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectAll_46_DefaultValue = 
{
	&TextEditOp_t2171____SelectAll_46_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectAll_46_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____SelectNone_47_DefaultValueData = 45;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____SelectNone_47_DefaultValue = 
{
	&TextEditOp_t2171____SelectNone_47_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____SelectNone_47_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____ScrollStart_48_DefaultValueData = 46;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____ScrollStart_48_DefaultValue = 
{
	&TextEditOp_t2171____ScrollStart_48_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____ScrollStart_48_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____ScrollEnd_49_DefaultValueData = 47;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____ScrollEnd_49_DefaultValue = 
{
	&TextEditOp_t2171____ScrollEnd_49_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____ScrollEnd_49_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____ScrollPageUp_50_DefaultValueData = 48;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____ScrollPageUp_50_DefaultValue = 
{
	&TextEditOp_t2171____ScrollPageUp_50_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____ScrollPageUp_50_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TextEditOp_t2171____ScrollPageDown_51_DefaultValueData = 49;
static Il2CppFieldDefaultValueEntry TextEditOp_t2171____ScrollPageDown_51_DefaultValue = 
{
	&TextEditOp_t2171____ScrollPageDown_51_FieldInfo/* field */
	, { (char*)&TextEditOp_t2171____ScrollPageDown_51_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* TextEditOp_t2171_FieldDefaultValues[] = 
{
	&TextEditOp_t2171____MoveLeft_2_DefaultValue,
	&TextEditOp_t2171____MoveRight_3_DefaultValue,
	&TextEditOp_t2171____MoveUp_4_DefaultValue,
	&TextEditOp_t2171____MoveDown_5_DefaultValue,
	&TextEditOp_t2171____MoveLineStart_6_DefaultValue,
	&TextEditOp_t2171____MoveLineEnd_7_DefaultValue,
	&TextEditOp_t2171____MoveTextStart_8_DefaultValue,
	&TextEditOp_t2171____MoveTextEnd_9_DefaultValue,
	&TextEditOp_t2171____MovePageUp_10_DefaultValue,
	&TextEditOp_t2171____MovePageDown_11_DefaultValue,
	&TextEditOp_t2171____MoveGraphicalLineStart_12_DefaultValue,
	&TextEditOp_t2171____MoveGraphicalLineEnd_13_DefaultValue,
	&TextEditOp_t2171____MoveWordLeft_14_DefaultValue,
	&TextEditOp_t2171____MoveWordRight_15_DefaultValue,
	&TextEditOp_t2171____MoveParagraphForward_16_DefaultValue,
	&TextEditOp_t2171____MoveParagraphBackward_17_DefaultValue,
	&TextEditOp_t2171____MoveToStartOfNextWord_18_DefaultValue,
	&TextEditOp_t2171____MoveToEndOfPreviousWord_19_DefaultValue,
	&TextEditOp_t2171____SelectLeft_20_DefaultValue,
	&TextEditOp_t2171____SelectRight_21_DefaultValue,
	&TextEditOp_t2171____SelectUp_22_DefaultValue,
	&TextEditOp_t2171____SelectDown_23_DefaultValue,
	&TextEditOp_t2171____SelectTextStart_24_DefaultValue,
	&TextEditOp_t2171____SelectTextEnd_25_DefaultValue,
	&TextEditOp_t2171____SelectPageUp_26_DefaultValue,
	&TextEditOp_t2171____SelectPageDown_27_DefaultValue,
	&TextEditOp_t2171____ExpandSelectGraphicalLineStart_28_DefaultValue,
	&TextEditOp_t2171____ExpandSelectGraphicalLineEnd_29_DefaultValue,
	&TextEditOp_t2171____SelectGraphicalLineStart_30_DefaultValue,
	&TextEditOp_t2171____SelectGraphicalLineEnd_31_DefaultValue,
	&TextEditOp_t2171____SelectWordLeft_32_DefaultValue,
	&TextEditOp_t2171____SelectWordRight_33_DefaultValue,
	&TextEditOp_t2171____SelectToEndOfPreviousWord_34_DefaultValue,
	&TextEditOp_t2171____SelectToStartOfNextWord_35_DefaultValue,
	&TextEditOp_t2171____SelectParagraphBackward_36_DefaultValue,
	&TextEditOp_t2171____SelectParagraphForward_37_DefaultValue,
	&TextEditOp_t2171____Delete_38_DefaultValue,
	&TextEditOp_t2171____Backspace_39_DefaultValue,
	&TextEditOp_t2171____DeleteWordBack_40_DefaultValue,
	&TextEditOp_t2171____DeleteWordForward_41_DefaultValue,
	&TextEditOp_t2171____DeleteLineBack_42_DefaultValue,
	&TextEditOp_t2171____Cut_43_DefaultValue,
	&TextEditOp_t2171____Copy_44_DefaultValue,
	&TextEditOp_t2171____Paste_45_DefaultValue,
	&TextEditOp_t2171____SelectAll_46_DefaultValue,
	&TextEditOp_t2171____SelectNone_47_DefaultValue,
	&TextEditOp_t2171____ScrollStart_48_DefaultValue,
	&TextEditOp_t2171____ScrollEnd_49_DefaultValue,
	&TextEditOp_t2171____ScrollPageUp_50_DefaultValue,
	&TextEditOp_t2171____ScrollPageDown_51_DefaultValue,
	NULL
};
static MethodInfo* TextEditOp_t2171_MethodInfos[] =
{
	NULL
};
static MethodInfo* TextEditOp_t2171_VTable[] =
{
	&Enum_Equals_m1284_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Enum_GetHashCode_m1285_MethodInfo,
	&Enum_ToString_m1286_MethodInfo,
	&Enum_ToString_m1287_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1288_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1289_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1290_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1291_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1292_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1293_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1294_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1295_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1296_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1297_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1298_MethodInfo,
	&Enum_ToString_m1299_MethodInfo,
	&Enum_System_IConvertible_ToType_m1300_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1301_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1302_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1303_MethodInfo,
	&Enum_CompareTo_m1304_MethodInfo,
	&Enum_GetTypeCode_m1305_MethodInfo,
};
static Il2CppInterfaceOffsetPair TextEditOp_t2171_InterfacesOffsets[] = 
{
	{ &IFormattable_t289_il2cpp_TypeInfo, 4},
	{ &IConvertible_t290_il2cpp_TypeInfo, 5},
	{ &IComparable_t291_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType TextEditOp_t2171_0_0_0;
extern Il2CppType TextEditOp_t2171_1_0_0;
TypeInfo TextEditOp_t2171_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TextEditOp"/* name */
	, ""/* namespaze */
	, TextEditOp_t2171_MethodInfos/* methods */
	, NULL/* properties */
	, TextEditOp_t2171_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t293_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &TextEditor_t368_il2cpp_TypeInfo/* nested_in */
	, &Int32_t23_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TextEditOp_t2171_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t23_il2cpp_TypeInfo/* cast_class */
	, &TextEditOp_t2171_0_0_0/* byval_arg */
	, &TextEditOp_t2171_1_0_0/* this_arg */
	, TextEditOp_t2171_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, TextEditOp_t2171_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TextEditOp_t2171)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 259/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 51/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo GUIContent_t369_il2cpp_TypeInfo;
extern TypeInfo GUIStyle_t2054_il2cpp_TypeInfo;
extern TypeInfo Rect_t164_il2cpp_TypeInfo;
extern TypeInfo Vector2_t109_il2cpp_TypeInfo;
extern TypeInfo GUIUtility_t2067_il2cpp_TypeInfo;
extern MethodInfo GUIContent__ctor_m4609_MethodInfo;
extern MethodInfo GUIStyle_get_none_m4656_MethodInfo;
extern MethodInfo Vector2_get_zero_m1425_MethodInfo;
extern MethodInfo TextEditor_SelectAll_m5226_MethodInfo;
extern MethodInfo GUIContent_get_text_m1764_MethodInfo;
extern MethodInfo TextEditor_ClearCursorPos_m5225_MethodInfo;
extern MethodInfo GUIContent_set_text_m4611_MethodInfo;
extern MethodInfo TextEditor_DeleteSelection_m5227_MethodInfo;
extern MethodInfo TextEditor_UpdateScrollOffset_m5229_MethodInfo;
extern MethodInfo Rect_get_width_m1605_MethodInfo;
extern MethodInfo Rect_get_height_m1606_MethodInfo;
extern MethodInfo Rect__ctor_m1862_MethodInfo;
extern MethodInfo GUIStyle_GetCursorPixelPosition_m4657_MethodInfo;
extern MethodInfo GUIStyle_get_padding_m4645_MethodInfo;
extern MethodInfo RectOffset_Remove_m4632_MethodInfo;
extern MethodInfo GUIStyle_CalcSize_m4660_MethodInfo;
extern MethodInfo GUIStyle_CalcHeight_m4662_MethodInfo;
extern MethodInfo Vector2__ctor_m1432_MethodInfo;
extern MethodInfo RectOffset_get_left_m2007_MethodInfo;
extern MethodInfo GUIStyle_get_lineHeight_m4654_MethodInfo;
extern MethodInfo RectOffset_get_top_m2008_MethodInfo;
extern MethodInfo RectOffset_get_bottom_m4630_MethodInfo;
extern MethodInfo GUIUtility_set_systemCopyBuffer_m4541_MethodInfo;
extern MethodInfo GUIUtility_get_systemCopyBuffer_m4540_MethodInfo;
extern MethodInfo String_op_Inequality_m1775_MethodInfo;
extern MethodInfo TextEditor_ReplaceNewlinesWithSpaces_m5230_MethodInfo;
extern MethodInfo TextEditor_ReplaceSelection_m5228_MethodInfo;


// System.Void UnityEngine.TextEditor::.ctor()
extern MethodInfo TextEditor__ctor_m1762_MethodInfo;
 void TextEditor__ctor_m1762 (TextEditor_t368 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIContent_t369_il2cpp_TypeInfo));
		GUIContent_t369 * L_0 = (GUIContent_t369 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIContent_t369_il2cpp_TypeInfo));
		GUIContent__ctor_m4609(L_0, /*hidden argument*/&GUIContent__ctor_m4609_MethodInfo);
		__this->___content_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t2054_il2cpp_TypeInfo));
		GUIStyle_t2054 * L_1 = GUIStyle_get_none_m4656(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m4656_MethodInfo);
		__this->___style_5 = L_1;
		Vector2_t109  L_2 = Vector2_get_zero_m1425(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m1425_MethodInfo);
		__this->___scrollOffset_11 = L_2;
		__this->___m_iAltCursorPos_19 = (-1);
		Object__ctor_m1366(__this, /*hidden argument*/&Object__ctor_m1366_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextEditor::ClearCursorPos()
 void TextEditor_ClearCursorPos_m5225 (TextEditor_t368 * __this, MethodInfo* method){
	{
		__this->___hasHorizontalCursorPos_8 = 0;
		__this->___m_iAltCursorPos_19 = (-1);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnFocus()
extern MethodInfo TextEditor_OnFocus_m1766_MethodInfo;
 void TextEditor_OnFocus_m1766 (TextEditor_t368 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___multiline_7);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->___selectPos_2 = L_1;
		__this->___pos_1 = V_0;
		goto IL_0026;
	}

IL_0020:
	{
		TextEditor_SelectAll_m5226(__this, /*hidden argument*/&TextEditor_SelectAll_m5226_MethodInfo);
	}

IL_0026:
	{
		__this->___m_HasFocus_10 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectAll()
 void TextEditor_SelectAll_m5226 (TextEditor_t368 * __this, MethodInfo* method){
	{
		__this->___pos_1 = 0;
		GUIContent_t369 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m1764(L_0, /*hidden argument*/&GUIContent_get_text_m1764_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1749(L_1, /*hidden argument*/&String_get_Length_m1749_MethodInfo);
		__this->___selectPos_2 = L_2;
		TextEditor_ClearCursorPos_m5225(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m5225_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
 bool TextEditor_DeleteSelection_m5227 (TextEditor_t368 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	{
		GUIContent_t369 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m1764(L_0, /*hidden argument*/&GUIContent_get_text_m1764_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1749(L_1, /*hidden argument*/&String_get_Length_m1749_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = (__this->___pos_1);
		if ((((int32_t)L_3) <= ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		__this->___pos_1 = V_0;
	}

IL_0024:
	{
		int32_t L_4 = (__this->___selectPos_2);
		if ((((int32_t)L_4) <= ((int32_t)V_0)))
		{
			goto IL_0037;
		}
	}
	{
		__this->___selectPos_2 = V_0;
	}

IL_0037:
	{
		int32_t L_5 = (__this->___pos_1);
		int32_t L_6 = (__this->___selectPos_2);
		if ((((uint32_t)L_5) != ((uint32_t)L_6)))
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		int32_t L_7 = (__this->___pos_1);
		int32_t L_8 = (__this->___selectPos_2);
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_00c0;
		}
	}
	{
		GUIContent_t369 * L_9 = (__this->___content_4);
		GUIContent_t369 * L_10 = (__this->___content_4);
		NullCheck(L_10);
		String_t* L_11 = GUIContent_get_text_m1764(L_10, /*hidden argument*/&GUIContent_get_text_m1764_MethodInfo);
		int32_t L_12 = (__this->___pos_1);
		NullCheck(L_11);
		String_t* L_13 = String_Substring_m1777(L_11, 0, L_12, /*hidden argument*/&String_Substring_m1777_MethodInfo);
		GUIContent_t369 * L_14 = (__this->___content_4);
		NullCheck(L_14);
		String_t* L_15 = GUIContent_get_text_m1764(L_14, /*hidden argument*/&GUIContent_get_text_m1764_MethodInfo);
		int32_t L_16 = (__this->___selectPos_2);
		GUIContent_t369 * L_17 = (__this->___content_4);
		NullCheck(L_17);
		String_t* L_18 = GUIContent_get_text_m1764(L_17, /*hidden argument*/&GUIContent_get_text_m1764_MethodInfo);
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m1749(L_18, /*hidden argument*/&String_get_Length_m1749_MethodInfo);
		int32_t L_20 = (__this->___selectPos_2);
		NullCheck(L_15);
		String_t* L_21 = String_Substring_m1777(L_15, L_16, ((int32_t)(L_19-L_20)), /*hidden argument*/&String_Substring_m1777_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = String_Concat_m47(NULL /*static, unused*/, L_13, L_21, /*hidden argument*/&String_Concat_m47_MethodInfo);
		NullCheck(L_9);
		GUIContent_set_text_m4611(L_9, L_22, /*hidden argument*/&GUIContent_set_text_m4611_MethodInfo);
		int32_t L_23 = (__this->___pos_1);
		__this->___selectPos_2 = L_23;
		goto IL_0120;
	}

IL_00c0:
	{
		GUIContent_t369 * L_24 = (__this->___content_4);
		GUIContent_t369 * L_25 = (__this->___content_4);
		NullCheck(L_25);
		String_t* L_26 = GUIContent_get_text_m1764(L_25, /*hidden argument*/&GUIContent_get_text_m1764_MethodInfo);
		int32_t L_27 = (__this->___selectPos_2);
		NullCheck(L_26);
		String_t* L_28 = String_Substring_m1777(L_26, 0, L_27, /*hidden argument*/&String_Substring_m1777_MethodInfo);
		GUIContent_t369 * L_29 = (__this->___content_4);
		NullCheck(L_29);
		String_t* L_30 = GUIContent_get_text_m1764(L_29, /*hidden argument*/&GUIContent_get_text_m1764_MethodInfo);
		int32_t L_31 = (__this->___pos_1);
		GUIContent_t369 * L_32 = (__this->___content_4);
		NullCheck(L_32);
		String_t* L_33 = GUIContent_get_text_m1764(L_32, /*hidden argument*/&GUIContent_get_text_m1764_MethodInfo);
		NullCheck(L_33);
		int32_t L_34 = String_get_Length_m1749(L_33, /*hidden argument*/&String_get_Length_m1749_MethodInfo);
		int32_t L_35 = (__this->___pos_1);
		NullCheck(L_30);
		String_t* L_36 = String_Substring_m1777(L_30, L_31, ((int32_t)(L_34-L_35)), /*hidden argument*/&String_Substring_m1777_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_37 = String_Concat_m47(NULL /*static, unused*/, L_28, L_36, /*hidden argument*/&String_Concat_m47_MethodInfo);
		NullCheck(L_24);
		GUIContent_set_text_m4611(L_24, L_37, /*hidden argument*/&GUIContent_set_text_m4611_MethodInfo);
		int32_t L_38 = (__this->___selectPos_2);
		__this->___pos_1 = L_38;
	}

IL_0120:
	{
		TextEditor_ClearCursorPos_m5225(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m5225_MethodInfo);
		return 1;
	}
}
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
 void TextEditor_ReplaceSelection_m5228 (TextEditor_t368 * __this, String_t* ___replace, MethodInfo* method){
	int32_t V_0 = 0;
	{
		TextEditor_DeleteSelection_m5227(__this, /*hidden argument*/&TextEditor_DeleteSelection_m5227_MethodInfo);
		GUIContent_t369 * L_0 = (__this->___content_4);
		GUIContent_t369 * L_1 = (__this->___content_4);
		NullCheck(L_1);
		String_t* L_2 = GUIContent_get_text_m1764(L_1, /*hidden argument*/&GUIContent_get_text_m1764_MethodInfo);
		int32_t L_3 = (__this->___pos_1);
		NullCheck(L_2);
		String_t* L_4 = String_Insert_m1803(L_2, L_3, ___replace, /*hidden argument*/&String_Insert_m1803_MethodInfo);
		NullCheck(L_0);
		GUIContent_set_text_m4611(L_0, L_4, /*hidden argument*/&GUIContent_set_text_m4611_MethodInfo);
		int32_t L_5 = (__this->___pos_1);
		NullCheck(___replace);
		int32_t L_6 = String_get_Length_m1749(___replace, /*hidden argument*/&String_get_Length_m1749_MethodInfo);
		int32_t L_7 = ((int32_t)(L_5+L_6));
		V_0 = L_7;
		__this->___pos_1 = L_7;
		__this->___selectPos_2 = V_0;
		TextEditor_ClearCursorPos_m5225(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m5225_MethodInfo);
		TextEditor_UpdateScrollOffset_m5229(__this, /*hidden argument*/&TextEditor_UpdateScrollOffset_m5229_MethodInfo);
		__this->___m_TextHeightPotentiallyChanged_12 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
 void TextEditor_UpdateScrollOffset_m5229 (TextEditor_t368 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	Rect_t164  V_1 = {0};
	Vector2_t109  V_2 = {0};
	Vector2_t109  V_3 = {0};
	Vector2_t109 * G_B17_0 = {0};
	Vector2_t109 * G_B16_0 = {0};
	float G_B18_0 = 0.0f;
	Vector2_t109 * G_B18_1 = {0};
	{
		int32_t L_0 = (__this->___pos_1);
		V_0 = L_0;
		GUIStyle_t2054 * L_1 = (__this->___style_5);
		Rect_t164 * L_2 = &(__this->___position_6);
		float L_3 = Rect_get_width_m1605(L_2, /*hidden argument*/&Rect_get_width_m1605_MethodInfo);
		Rect_t164 * L_4 = &(__this->___position_6);
		float L_5 = Rect_get_height_m1606(L_4, /*hidden argument*/&Rect_get_height_m1606_MethodInfo);
		Rect_t164  L_6 = {0};
		Rect__ctor_m1862(&L_6, (0.0f), (0.0f), L_3, L_5, /*hidden argument*/&Rect__ctor_m1862_MethodInfo);
		GUIContent_t369 * L_7 = (__this->___content_4);
		NullCheck(L_1);
		Vector2_t109  L_8 = GUIStyle_GetCursorPixelPosition_m4657(L_1, L_6, L_7, V_0, /*hidden argument*/&GUIStyle_GetCursorPixelPosition_m4657_MethodInfo);
		__this->___graphicalCursorPos_13 = L_8;
		GUIStyle_t2054 * L_9 = (__this->___style_5);
		NullCheck(L_9);
		RectOffset_t264 * L_10 = GUIStyle_get_padding_m4645(L_9, /*hidden argument*/&GUIStyle_get_padding_m4645_MethodInfo);
		Rect_t164  L_11 = (__this->___position_6);
		NullCheck(L_10);
		Rect_t164  L_12 = RectOffset_Remove_m4632(L_10, L_11, /*hidden argument*/&RectOffset_Remove_m4632_MethodInfo);
		V_1 = L_12;
		GUIStyle_t2054 * L_13 = (__this->___style_5);
		GUIContent_t369 * L_14 = (__this->___content_4);
		NullCheck(L_13);
		Vector2_t109  L_15 = GUIStyle_CalcSize_m4660(L_13, L_14, /*hidden argument*/&GUIStyle_CalcSize_m4660_MethodInfo);
		V_3 = L_15;
		NullCheck((&V_3));
		float L_16 = ((&V_3)->___x_1);
		GUIStyle_t2054 * L_17 = (__this->___style_5);
		GUIContent_t369 * L_18 = (__this->___content_4);
		Rect_t164 * L_19 = &(__this->___position_6);
		float L_20 = Rect_get_width_m1605(L_19, /*hidden argument*/&Rect_get_width_m1605_MethodInfo);
		NullCheck(L_17);
		float L_21 = GUIStyle_CalcHeight_m4662(L_17, L_18, L_20, /*hidden argument*/&GUIStyle_CalcHeight_m4662_MethodInfo);
		Vector2__ctor_m1432((&V_2), L_16, L_21, /*hidden argument*/&Vector2__ctor_m1432_MethodInfo);
		NullCheck((&V_2));
		float L_22 = ((&V_2)->___x_1);
		Rect_t164 * L_23 = &(__this->___position_6);
		float L_24 = Rect_get_width_m1605(L_23, /*hidden argument*/&Rect_get_width_m1605_MethodInfo);
		if ((((float)L_22) >= ((float)L_24)))
		{
			goto IL_00c3;
		}
	}
	{
		Vector2_t109 * L_25 = &(__this->___scrollOffset_11);
		NullCheck(L_25);
		L_25->___x_1 = (0.0f);
		goto IL_015f;
	}

IL_00c3:
	{
		Vector2_t109 * L_26 = &(__this->___graphicalCursorPos_13);
		NullCheck(L_26);
		float L_27 = (L_26->___x_1);
		Vector2_t109 * L_28 = &(__this->___scrollOffset_11);
		NullCheck(L_28);
		float L_29 = (L_28->___x_1);
		float L_30 = Rect_get_width_m1605((&V_1), /*hidden argument*/&Rect_get_width_m1605_MethodInfo);
		if ((((float)((float)(L_27+(1.0f)))) <= ((float)((float)(L_29+L_30)))))
		{
			goto IL_010a;
		}
	}
	{
		Vector2_t109 * L_31 = &(__this->___scrollOffset_11);
		Vector2_t109 * L_32 = &(__this->___graphicalCursorPos_13);
		NullCheck(L_32);
		float L_33 = (L_32->___x_1);
		float L_34 = Rect_get_width_m1605((&V_1), /*hidden argument*/&Rect_get_width_m1605_MethodInfo);
		NullCheck(L_31);
		L_31->___x_1 = ((float)(L_33-L_34));
	}

IL_010a:
	{
		Vector2_t109 * L_35 = &(__this->___graphicalCursorPos_13);
		NullCheck(L_35);
		float L_36 = (L_35->___x_1);
		Vector2_t109 * L_37 = &(__this->___scrollOffset_11);
		NullCheck(L_37);
		float L_38 = (L_37->___x_1);
		GUIStyle_t2054 * L_39 = (__this->___style_5);
		NullCheck(L_39);
		RectOffset_t264 * L_40 = GUIStyle_get_padding_m4645(L_39, /*hidden argument*/&GUIStyle_get_padding_m4645_MethodInfo);
		NullCheck(L_40);
		int32_t L_41 = RectOffset_get_left_m2007(L_40, /*hidden argument*/&RectOffset_get_left_m2007_MethodInfo);
		if ((((float)L_36) >= ((float)((float)(L_38+(((float)L_41)))))))
		{
			goto IL_015f;
		}
	}
	{
		Vector2_t109 * L_42 = &(__this->___scrollOffset_11);
		Vector2_t109 * L_43 = &(__this->___graphicalCursorPos_13);
		NullCheck(L_43);
		float L_44 = (L_43->___x_1);
		GUIStyle_t2054 * L_45 = (__this->___style_5);
		NullCheck(L_45);
		RectOffset_t264 * L_46 = GUIStyle_get_padding_m4645(L_45, /*hidden argument*/&GUIStyle_get_padding_m4645_MethodInfo);
		NullCheck(L_46);
		int32_t L_47 = RectOffset_get_left_m2007(L_46, /*hidden argument*/&RectOffset_get_left_m2007_MethodInfo);
		NullCheck(L_42);
		L_42->___x_1 = ((float)(L_44-(((float)L_47))));
	}

IL_015f:
	{
		NullCheck((&V_2));
		float L_48 = ((&V_2)->___y_2);
		float L_49 = Rect_get_height_m1606((&V_1), /*hidden argument*/&Rect_get_height_m1606_MethodInfo);
		if ((((float)L_48) >= ((float)L_49)))
		{
			goto IL_0187;
		}
	}
	{
		Vector2_t109 * L_50 = &(__this->___scrollOffset_11);
		NullCheck(L_50);
		L_50->___y_2 = (0.0f);
		goto IL_0259;
	}

IL_0187:
	{
		Vector2_t109 * L_51 = &(__this->___graphicalCursorPos_13);
		NullCheck(L_51);
		float L_52 = (L_51->___y_2);
		GUIStyle_t2054 * L_53 = (__this->___style_5);
		NullCheck(L_53);
		float L_54 = GUIStyle_get_lineHeight_m4654(L_53, /*hidden argument*/&GUIStyle_get_lineHeight_m4654_MethodInfo);
		Vector2_t109 * L_55 = &(__this->___scrollOffset_11);
		NullCheck(L_55);
		float L_56 = (L_55->___y_2);
		float L_57 = Rect_get_height_m1606((&V_1), /*hidden argument*/&Rect_get_height_m1606_MethodInfo);
		GUIStyle_t2054 * L_58 = (__this->___style_5);
		NullCheck(L_58);
		RectOffset_t264 * L_59 = GUIStyle_get_padding_m4645(L_58, /*hidden argument*/&GUIStyle_get_padding_m4645_MethodInfo);
		NullCheck(L_59);
		int32_t L_60 = RectOffset_get_top_m2008(L_59, /*hidden argument*/&RectOffset_get_top_m2008_MethodInfo);
		if ((((float)((float)(L_52+L_54))) <= ((float)((float)(((float)(L_56+L_57))+(((float)L_60)))))))
		{
			goto IL_0204;
		}
	}
	{
		Vector2_t109 * L_61 = &(__this->___scrollOffset_11);
		Vector2_t109 * L_62 = &(__this->___graphicalCursorPos_13);
		NullCheck(L_62);
		float L_63 = (L_62->___y_2);
		float L_64 = Rect_get_height_m1606((&V_1), /*hidden argument*/&Rect_get_height_m1606_MethodInfo);
		GUIStyle_t2054 * L_65 = (__this->___style_5);
		NullCheck(L_65);
		RectOffset_t264 * L_66 = GUIStyle_get_padding_m4645(L_65, /*hidden argument*/&GUIStyle_get_padding_m4645_MethodInfo);
		NullCheck(L_66);
		int32_t L_67 = RectOffset_get_top_m2008(L_66, /*hidden argument*/&RectOffset_get_top_m2008_MethodInfo);
		GUIStyle_t2054 * L_68 = (__this->___style_5);
		NullCheck(L_68);
		float L_69 = GUIStyle_get_lineHeight_m4654(L_68, /*hidden argument*/&GUIStyle_get_lineHeight_m4654_MethodInfo);
		NullCheck(L_61);
		L_61->___y_2 = ((float)(((float)(((float)(L_63-L_64))-(((float)L_67))))+L_69));
	}

IL_0204:
	{
		Vector2_t109 * L_70 = &(__this->___graphicalCursorPos_13);
		NullCheck(L_70);
		float L_71 = (L_70->___y_2);
		Vector2_t109 * L_72 = &(__this->___scrollOffset_11);
		NullCheck(L_72);
		float L_73 = (L_72->___y_2);
		GUIStyle_t2054 * L_74 = (__this->___style_5);
		NullCheck(L_74);
		RectOffset_t264 * L_75 = GUIStyle_get_padding_m4645(L_74, /*hidden argument*/&GUIStyle_get_padding_m4645_MethodInfo);
		NullCheck(L_75);
		int32_t L_76 = RectOffset_get_top_m2008(L_75, /*hidden argument*/&RectOffset_get_top_m2008_MethodInfo);
		if ((((float)L_71) >= ((float)((float)(L_73+(((float)L_76)))))))
		{
			goto IL_0259;
		}
	}
	{
		Vector2_t109 * L_77 = &(__this->___scrollOffset_11);
		Vector2_t109 * L_78 = &(__this->___graphicalCursorPos_13);
		NullCheck(L_78);
		float L_79 = (L_78->___y_2);
		GUIStyle_t2054 * L_80 = (__this->___style_5);
		NullCheck(L_80);
		RectOffset_t264 * L_81 = GUIStyle_get_padding_m4645(L_80, /*hidden argument*/&GUIStyle_get_padding_m4645_MethodInfo);
		NullCheck(L_81);
		int32_t L_82 = RectOffset_get_top_m2008(L_81, /*hidden argument*/&RectOffset_get_top_m2008_MethodInfo);
		NullCheck(L_77);
		L_77->___y_2 = ((float)(L_79-(((float)L_82))));
	}

IL_0259:
	{
		Vector2_t109 * L_83 = &(__this->___scrollOffset_11);
		NullCheck(L_83);
		float L_84 = (L_83->___y_2);
		if ((((float)L_84) <= ((float)(0.0f))))
		{
			goto IL_02cb;
		}
	}
	{
		NullCheck((&V_2));
		float L_85 = ((&V_2)->___y_2);
		Vector2_t109 * L_86 = &(__this->___scrollOffset_11);
		NullCheck(L_86);
		float L_87 = (L_86->___y_2);
		float L_88 = Rect_get_height_m1606((&V_1), /*hidden argument*/&Rect_get_height_m1606_MethodInfo);
		if ((((float)((float)(L_85-L_87))) >= ((float)L_88)))
		{
			goto IL_02cb;
		}
	}
	{
		Vector2_t109 * L_89 = &(__this->___scrollOffset_11);
		NullCheck((&V_2));
		float L_90 = ((&V_2)->___y_2);
		float L_91 = Rect_get_height_m1606((&V_1), /*hidden argument*/&Rect_get_height_m1606_MethodInfo);
		GUIStyle_t2054 * L_92 = (__this->___style_5);
		NullCheck(L_92);
		RectOffset_t264 * L_93 = GUIStyle_get_padding_m4645(L_92, /*hidden argument*/&GUIStyle_get_padding_m4645_MethodInfo);
		NullCheck(L_93);
		int32_t L_94 = RectOffset_get_top_m2008(L_93, /*hidden argument*/&RectOffset_get_top_m2008_MethodInfo);
		GUIStyle_t2054 * L_95 = (__this->___style_5);
		NullCheck(L_95);
		RectOffset_t264 * L_96 = GUIStyle_get_padding_m4645(L_95, /*hidden argument*/&GUIStyle_get_padding_m4645_MethodInfo);
		NullCheck(L_96);
		int32_t L_97 = RectOffset_get_bottom_m4630(L_96, /*hidden argument*/&RectOffset_get_bottom_m4630_MethodInfo);
		NullCheck(L_89);
		L_89->___y_2 = ((float)(((float)(((float)(L_90-L_91))-(((float)L_94))))-(((float)L_97))));
	}

IL_02cb:
	{
		Vector2_t109 * L_98 = &(__this->___scrollOffset_11);
		Vector2_t109 * L_99 = &(__this->___scrollOffset_11);
		NullCheck(L_99);
		float L_100 = (L_99->___y_2);
		G_B16_0 = L_98;
		if ((((float)L_100) >= ((float)(0.0f))))
		{
			G_B17_0 = L_98;
			goto IL_02f0;
		}
	}
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B16_0;
		goto IL_02fb;
	}

IL_02f0:
	{
		Vector2_t109 * L_101 = &(__this->___scrollOffset_11);
		NullCheck(L_101);
		float L_102 = (L_101->___y_2);
		G_B18_0 = L_102;
		G_B18_1 = G_B17_0;
	}

IL_02fb:
	{
		NullCheck(G_B18_1);
		G_B18_1->___y_2 = G_B18_0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::Copy()
extern MethodInfo TextEditor_Copy_m1767_MethodInfo;
 void TextEditor_Copy_m1767 (TextEditor_t368 * __this, MethodInfo* method){
	String_t* V_0 = {0};
	{
		int32_t L_0 = (__this->___selectPos_2);
		int32_t L_1 = (__this->___pos_1);
		if ((((uint32_t)L_0) != ((uint32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_2 = (__this->___isPasswordField_9);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = (__this->___selectPos_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		GUIContent_t369 * L_5 = (__this->___content_4);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m1764(L_5, /*hidden argument*/&GUIContent_get_text_m1764_MethodInfo);
		int32_t L_7 = (__this->___pos_1);
		int32_t L_8 = (__this->___selectPos_2);
		int32_t L_9 = (__this->___pos_1);
		NullCheck(L_6);
		String_t* L_10 = String_Substring_m1777(L_6, L_7, ((int32_t)(L_8-L_9)), /*hidden argument*/&String_Substring_m1777_MethodInfo);
		V_0 = L_10;
		goto IL_007c;
	}

IL_0058:
	{
		GUIContent_t369 * L_11 = (__this->___content_4);
		NullCheck(L_11);
		String_t* L_12 = GUIContent_get_text_m1764(L_11, /*hidden argument*/&GUIContent_get_text_m1764_MethodInfo);
		int32_t L_13 = (__this->___selectPos_2);
		int32_t L_14 = (__this->___pos_1);
		int32_t L_15 = (__this->___selectPos_2);
		NullCheck(L_12);
		String_t* L_16 = String_Substring_m1777(L_12, L_13, ((int32_t)(L_14-L_15)), /*hidden argument*/&String_Substring_m1777_MethodInfo);
		V_0 = L_16;
	}

IL_007c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t2067_il2cpp_TypeInfo));
		GUIUtility_set_systemCopyBuffer_m4541(NULL /*static, unused*/, V_0, /*hidden argument*/&GUIUtility_set_systemCopyBuffer_m4541_MethodInfo);
		return;
	}
}
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
 String_t* TextEditor_ReplaceNewlinesWithSpaces_m5230 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method){
	{
		NullCheck(___value);
		String_t* L_0 = String_Replace_m3469(___value, (String_t*) &_stringLiteral1112, (String_t*) &_stringLiteral210, /*hidden argument*/&String_Replace_m3469_MethodInfo);
		___value = L_0;
		NullCheck(___value);
		String_t* L_1 = String_Replace_m5399(___value, ((int32_t)10), ((int32_t)32), /*hidden argument*/&String_Replace_m5399_MethodInfo);
		___value = L_1;
		NullCheck(___value);
		String_t* L_2 = String_Replace_m5399(___value, ((int32_t)13), ((int32_t)32), /*hidden argument*/&String_Replace_m5399_MethodInfo);
		___value = L_2;
		return ___value;
	}
}
// System.Boolean UnityEngine.TextEditor::Paste()
extern MethodInfo TextEditor_Paste_m1763_MethodInfo;
 bool TextEditor_Paste_m1763 (TextEditor_t368 * __this, MethodInfo* method){
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t2067_il2cpp_TypeInfo));
		String_t* L_0 = GUIUtility_get_systemCopyBuffer_m4540(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_get_systemCopyBuffer_m4540_MethodInfo);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_1 = String_op_Inequality_m1775(NULL /*static, unused*/, V_0, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), /*hidden argument*/&String_op_Inequality_m1775_MethodInfo);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		bool L_2 = (__this->___multiline_7);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_3 = TextEditor_ReplaceNewlinesWithSpaces_m5230(NULL /*static, unused*/, V_0, /*hidden argument*/&TextEditor_ReplaceNewlinesWithSpaces_m5230_MethodInfo);
		V_0 = L_3;
	}

IL_0028:
	{
		TextEditor_ReplaceSelection_m5228(__this, V_0, /*hidden argument*/&TextEditor_ReplaceSelection_m5228_MethodInfo);
		return 1;
	}

IL_0031:
	{
		return 0;
	}
}
// Metadata Definition UnityEngine.TextEditor
extern Il2CppType TouchScreenKeyboard_t199_0_0_6;
FieldInfo TextEditor_t368____keyboardOnScreen_0_FieldInfo = 
{
	"keyboardOnScreen"/* name */
	, &TouchScreenKeyboard_t199_0_0_6/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___keyboardOnScreen_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_6;
FieldInfo TextEditor_t368____pos_1_FieldInfo = 
{
	"pos"/* name */
	, &Int32_t23_0_0_6/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___pos_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_6;
FieldInfo TextEditor_t368____selectPos_2_FieldInfo = 
{
	"selectPos"/* name */
	, &Int32_t23_0_0_6/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___selectPos_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_6;
FieldInfo TextEditor_t368____controlID_3_FieldInfo = 
{
	"controlID"/* name */
	, &Int32_t23_0_0_6/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___controlID_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType GUIContent_t369_0_0_6;
FieldInfo TextEditor_t368____content_4_FieldInfo = 
{
	"content"/* name */
	, &GUIContent_t369_0_0_6/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___content_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType GUIStyle_t2054_0_0_6;
FieldInfo TextEditor_t368____style_5_FieldInfo = 
{
	"style"/* name */
	, &GUIStyle_t2054_0_0_6/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___style_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Rect_t164_0_0_6;
FieldInfo TextEditor_t368____position_6_FieldInfo = 
{
	"position"/* name */
	, &Rect_t164_0_0_6/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___position_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t24_0_0_6;
FieldInfo TextEditor_t368____multiline_7_FieldInfo = 
{
	"multiline"/* name */
	, &Boolean_t24_0_0_6/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___multiline_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t24_0_0_6;
FieldInfo TextEditor_t368____hasHorizontalCursorPos_8_FieldInfo = 
{
	"hasHorizontalCursorPos"/* name */
	, &Boolean_t24_0_0_6/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___hasHorizontalCursorPos_8)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t24_0_0_6;
FieldInfo TextEditor_t368____isPasswordField_9_FieldInfo = 
{
	"isPasswordField"/* name */
	, &Boolean_t24_0_0_6/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___isPasswordField_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t24_0_0_3;
FieldInfo TextEditor_t368____m_HasFocus_10_FieldInfo = 
{
	"m_HasFocus"/* name */
	, &Boolean_t24_0_0_3/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___m_HasFocus_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector2_t109_0_0_6;
FieldInfo TextEditor_t368____scrollOffset_11_FieldInfo = 
{
	"scrollOffset"/* name */
	, &Vector2_t109_0_0_6/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___scrollOffset_11)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t24_0_0_1;
FieldInfo TextEditor_t368____m_TextHeightPotentiallyChanged_12_FieldInfo = 
{
	"m_TextHeightPotentiallyChanged"/* name */
	, &Boolean_t24_0_0_1/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___m_TextHeightPotentiallyChanged_12)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector2_t109_0_0_6;
FieldInfo TextEditor_t368____graphicalCursorPos_13_FieldInfo = 
{
	"graphicalCursorPos"/* name */
	, &Vector2_t109_0_0_6/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___graphicalCursorPos_13)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector2_t109_0_0_6;
FieldInfo TextEditor_t368____graphicalSelectCursorPos_14_FieldInfo = 
{
	"graphicalSelectCursorPos"/* name */
	, &Vector2_t109_0_0_6/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___graphicalSelectCursorPos_14)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t24_0_0_1;
FieldInfo TextEditor_t368____m_MouseDragSelectsWholeWords_15_FieldInfo = 
{
	"m_MouseDragSelectsWholeWords"/* name */
	, &Boolean_t24_0_0_1/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___m_MouseDragSelectsWholeWords_15)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo TextEditor_t368____m_DblClickInitPos_16_FieldInfo = 
{
	"m_DblClickInitPos"/* name */
	, &Int32_t23_0_0_1/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___m_DblClickInitPos_16)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType DblClickSnapping_t2170_0_0_1;
FieldInfo TextEditor_t368____m_DblClickSnap_17_FieldInfo = 
{
	"m_DblClickSnap"/* name */
	, &DblClickSnapping_t2170_0_0_1/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___m_DblClickSnap_17)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t24_0_0_1;
FieldInfo TextEditor_t368____m_bJustSelected_18_FieldInfo = 
{
	"m_bJustSelected"/* name */
	, &Boolean_t24_0_0_1/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___m_bJustSelected_18)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo TextEditor_t368____m_iAltCursorPos_19_FieldInfo = 
{
	"m_iAltCursorPos"/* name */
	, &Int32_t23_0_0_1/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___m_iAltCursorPos_19)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo TextEditor_t368____oldText_20_FieldInfo = 
{
	"oldText"/* name */
	, &String_t_0_0_1/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___oldText_20)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo TextEditor_t368____oldPos_21_FieldInfo = 
{
	"oldPos"/* name */
	, &Int32_t23_0_0_1/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___oldPos_21)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo TextEditor_t368____oldSelectPos_22_FieldInfo = 
{
	"oldSelectPos"/* name */
	, &Int32_t23_0_0_1/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368, ___oldSelectPos_22)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Dictionary_2_t2172_0_0_17;
FieldInfo TextEditor_t368____s_Keyactions_23_FieldInfo = 
{
	"s_Keyactions"/* name */
	, &Dictionary_2_t2172_0_0_17/* type */
	, &TextEditor_t368_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t368_StaticFields, ___s_Keyactions_23)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TextEditor_t368_FieldInfos[] =
{
	&TextEditor_t368____keyboardOnScreen_0_FieldInfo,
	&TextEditor_t368____pos_1_FieldInfo,
	&TextEditor_t368____selectPos_2_FieldInfo,
	&TextEditor_t368____controlID_3_FieldInfo,
	&TextEditor_t368____content_4_FieldInfo,
	&TextEditor_t368____style_5_FieldInfo,
	&TextEditor_t368____position_6_FieldInfo,
	&TextEditor_t368____multiline_7_FieldInfo,
	&TextEditor_t368____hasHorizontalCursorPos_8_FieldInfo,
	&TextEditor_t368____isPasswordField_9_FieldInfo,
	&TextEditor_t368____m_HasFocus_10_FieldInfo,
	&TextEditor_t368____scrollOffset_11_FieldInfo,
	&TextEditor_t368____m_TextHeightPotentiallyChanged_12_FieldInfo,
	&TextEditor_t368____graphicalCursorPos_13_FieldInfo,
	&TextEditor_t368____graphicalSelectCursorPos_14_FieldInfo,
	&TextEditor_t368____m_MouseDragSelectsWholeWords_15_FieldInfo,
	&TextEditor_t368____m_DblClickInitPos_16_FieldInfo,
	&TextEditor_t368____m_DblClickSnap_17_FieldInfo,
	&TextEditor_t368____m_bJustSelected_18_FieldInfo,
	&TextEditor_t368____m_iAltCursorPos_19_FieldInfo,
	&TextEditor_t368____oldText_20_FieldInfo,
	&TextEditor_t368____oldPos_21_FieldInfo,
	&TextEditor_t368____oldSelectPos_22_FieldInfo,
	&TextEditor_t368____s_Keyactions_23_FieldInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::.ctor()
MethodInfo TextEditor__ctor_m1762_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TextEditor__ctor_m1762/* method */
	, &TextEditor_t368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1254/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::ClearCursorPos()
MethodInfo TextEditor_ClearCursorPos_m5225_MethodInfo = 
{
	"ClearCursorPos"/* name */
	, (methodPointerType)&TextEditor_ClearCursorPos_m5225/* method */
	, &TextEditor_t368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1255/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::OnFocus()
MethodInfo TextEditor_OnFocus_m1766_MethodInfo = 
{
	"OnFocus"/* name */
	, (methodPointerType)&TextEditor_OnFocus_m1766/* method */
	, &TextEditor_t368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1256/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::SelectAll()
MethodInfo TextEditor_SelectAll_m5226_MethodInfo = 
{
	"SelectAll"/* name */
	, (methodPointerType)&TextEditor_SelectAll_m5226/* method */
	, &TextEditor_t368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1257/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
MethodInfo TextEditor_DeleteSelection_m5227_MethodInfo = 
{
	"DeleteSelection"/* name */
	, (methodPointerType)&TextEditor_DeleteSelection_m5227/* method */
	, &TextEditor_t368_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1258/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo TextEditor_t368_TextEditor_ReplaceSelection_m5228_ParameterInfos[] = 
{
	{"replace", 0, 134219004, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
MethodInfo TextEditor_ReplaceSelection_m5228_MethodInfo = 
{
	"ReplaceSelection"/* name */
	, (methodPointerType)&TextEditor_ReplaceSelection_m5228/* method */
	, &TextEditor_t368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, TextEditor_t368_TextEditor_ReplaceSelection_m5228_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1259/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
MethodInfo TextEditor_UpdateScrollOffset_m5229_MethodInfo = 
{
	"UpdateScrollOffset"/* name */
	, (methodPointerType)&TextEditor_UpdateScrollOffset_m5229/* method */
	, &TextEditor_t368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1260/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::Copy()
MethodInfo TextEditor_Copy_m1767_MethodInfo = 
{
	"Copy"/* name */
	, (methodPointerType)&TextEditor_Copy_m1767/* method */
	, &TextEditor_t368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1261/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo TextEditor_t368_TextEditor_ReplaceNewlinesWithSpaces_m5230_ParameterInfos[] = 
{
	{"value", 0, 134219005, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
MethodInfo TextEditor_ReplaceNewlinesWithSpaces_m5230_MethodInfo = 
{
	"ReplaceNewlinesWithSpaces"/* name */
	, (methodPointerType)&TextEditor_ReplaceNewlinesWithSpaces_m5230/* method */
	, &TextEditor_t368_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, TextEditor_t368_TextEditor_ReplaceNewlinesWithSpaces_m5230_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1262/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextEditor::Paste()
MethodInfo TextEditor_Paste_m1763_MethodInfo = 
{
	"Paste"/* name */
	, (methodPointerType)&TextEditor_Paste_m1763/* method */
	, &TextEditor_t368_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1263/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TextEditor_t368_MethodInfos[] =
{
	&TextEditor__ctor_m1762_MethodInfo,
	&TextEditor_ClearCursorPos_m5225_MethodInfo,
	&TextEditor_OnFocus_m1766_MethodInfo,
	&TextEditor_SelectAll_m5226_MethodInfo,
	&TextEditor_DeleteSelection_m5227_MethodInfo,
	&TextEditor_ReplaceSelection_m5228_MethodInfo,
	&TextEditor_UpdateScrollOffset_m5229_MethodInfo,
	&TextEditor_Copy_m1767_MethodInfo,
	&TextEditor_ReplaceNewlinesWithSpaces_m5230_MethodInfo,
	&TextEditor_Paste_m1763_MethodInfo,
	NULL
};
extern TypeInfo DblClickSnapping_t2170_il2cpp_TypeInfo;
extern TypeInfo TextEditOp_t2171_il2cpp_TypeInfo;
static TypeInfo* TextEditor_t368_il2cpp_TypeInfo__nestedTypes[3] =
{
	&DblClickSnapping_t2170_il2cpp_TypeInfo,
	&TextEditOp_t2171_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* TextEditor_t368_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType TextEditor_t368_0_0_0;
extern Il2CppType TextEditor_t368_1_0_0;
struct TextEditor_t368;
TypeInfo TextEditor_t368_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TextEditor"/* name */
	, "UnityEngine"/* namespaze */
	, TextEditor_t368_MethodInfos/* methods */
	, NULL/* properties */
	, TextEditor_t368_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, TextEditor_t368_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &TextEditor_t368_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TextEditor_t368_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TextEditor_t368_il2cpp_TypeInfo/* cast_class */
	, &TextEditor_t368_0_0_0/* byval_arg */
	, &TextEditor_t368_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TextEditor_t368)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(TextEditor_t368_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 10/* method_count */
	, 0/* property_count */
	, 24/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextGenerationSettings_t238_il2cpp_TypeInfo;

extern TypeInfo Color32_t288_il2cpp_TypeInfo;
extern TypeInfo ValueType_t26_il2cpp_TypeInfo;
extern TypeInfo Boolean_t24_il2cpp_TypeInfo;
extern TypeInfo Mathf_t316_il2cpp_TypeInfo;
extern MethodInfo Color32_op_Implicit_m1614_MethodInfo;
extern MethodInfo ValueType_Equals_m59_MethodInfo;
extern MethodInfo Mathf_Approximately_m1474_MethodInfo;
extern MethodInfo TextGenerationSettings_CompareColors_m5231_MethodInfo;
extern MethodInfo TextGenerationSettings_CompareVector2_m5232_MethodInfo;
extern MethodInfo Object_op_Equality_m1333_MethodInfo;


// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
 bool TextGenerationSettings_CompareColors_m5231 (TextGenerationSettings_t238 * __this, Color_t132  ___left, Color_t132  ___right, MethodInfo* method){
	Color32_t288  V_0 = {0};
	Color32_t288  V_1 = {0};
	{
		Color32_t288  L_0 = Color32_op_Implicit_m1614(NULL /*static, unused*/, ___left, /*hidden argument*/&Color32_op_Implicit_m1614_MethodInfo);
		V_0 = L_0;
		Color32_t288  L_1 = Color32_op_Implicit_m1614(NULL /*static, unused*/, ___right, /*hidden argument*/&Color32_op_Implicit_m1614_MethodInfo);
		V_1 = L_1;
		Color32_t288  L_2 = V_0;
		Object_t * L_3 = Box(InitializedTypeInfo(&Color32_t288_il2cpp_TypeInfo), &L_2);
		Color32_t288  L_4 = V_1;
		Object_t * L_5 = Box(InitializedTypeInfo(&Color32_t288_il2cpp_TypeInfo), &L_4);
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ValueType_Equals_m59_MethodInfo, L_3, L_5);
		return L_6;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
 bool TextGenerationSettings_CompareVector2_m5232 (TextGenerationSettings_t238 * __this, Vector2_t109  ___left, Vector2_t109  ___right, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		NullCheck((&___left));
		float L_0 = ((&___left)->___x_1);
		NullCheck((&___right));
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t316_il2cpp_TypeInfo));
		bool L_2 = Mathf_Approximately_m1474(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Approximately_m1474_MethodInfo);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		NullCheck((&___left));
		float L_3 = ((&___left)->___y_2);
		NullCheck((&___right));
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t316_il2cpp_TypeInfo));
		bool L_5 = Mathf_Approximately_m1474(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Mathf_Approximately_m1474_MethodInfo);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerationSettings_Equals_m5233_MethodInfo;
 bool TextGenerationSettings_Equals_m5233 (TextGenerationSettings_t238 * __this, TextGenerationSettings_t238  ___other, MethodInfo* method){
	int32_t G_B19_0 = 0;
	{
		Color_t132  L_0 = (__this->___color_1);
		NullCheck((&___other));
		Color_t132  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m5231(__this, L_0, L_1, /*hidden argument*/&TextGenerationSettings_CompareColors_m5231_MethodInfo);
		if (!L_2)
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_3 = (__this->___fontSize_2);
		NullCheck((&___other));
		int32_t L_4 = ((&___other)->___fontSize_2);
		if ((((uint32_t)L_3) != ((uint32_t)L_4)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_5 = (__this->___resizeTextMinSize_8);
		NullCheck((&___other));
		int32_t L_6 = ((&___other)->___resizeTextMinSize_8);
		if ((((uint32_t)L_5) != ((uint32_t)L_6)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_7 = (__this->___resizeTextMaxSize_9);
		NullCheck((&___other));
		int32_t L_8 = ((&___other)->___resizeTextMaxSize_9);
		if ((((uint32_t)L_7) != ((uint32_t)L_8)))
		{
			goto IL_015d;
		}
	}
	{
		float L_9 = (__this->___lineSpacing_3);
		NullCheck((&___other));
		float L_10 = ((&___other)->___lineSpacing_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t316_il2cpp_TypeInfo));
		bool L_11 = Mathf_Approximately_m1474(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&Mathf_Approximately_m1474_MethodInfo);
		if (!L_11)
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_12 = (__this->___fontStyle_5);
		NullCheck((&___other));
		int32_t L_13 = ((&___other)->___fontStyle_5);
		if ((((uint32_t)L_12) != ((uint32_t)L_13)))
		{
			goto IL_015d;
		}
	}
	{
		bool L_14 = (__this->___richText_4);
		NullCheck((&___other));
		bool L_15 = ((&___other)->___richText_4);
		if ((((uint32_t)L_14) != ((uint32_t)L_15)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_16 = (__this->___textAnchor_6);
		NullCheck((&___other));
		int32_t L_17 = ((&___other)->___textAnchor_6);
		if ((((uint32_t)L_16) != ((uint32_t)L_17)))
		{
			goto IL_015d;
		}
	}
	{
		bool L_18 = (__this->___resizeTextForBestFit_7);
		NullCheck((&___other));
		bool L_19 = ((&___other)->___resizeTextForBestFit_7);
		if ((((uint32_t)L_18) != ((uint32_t)L_19)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_20 = (__this->___resizeTextMinSize_8);
		NullCheck((&___other));
		int32_t L_21 = ((&___other)->___resizeTextMinSize_8);
		if ((((uint32_t)L_20) != ((uint32_t)L_21)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_22 = (__this->___resizeTextMaxSize_9);
		NullCheck((&___other));
		int32_t L_23 = ((&___other)->___resizeTextMaxSize_9);
		if ((((uint32_t)L_22) != ((uint32_t)L_23)))
		{
			goto IL_015d;
		}
	}
	{
		bool L_24 = (__this->___resizeTextForBestFit_7);
		NullCheck((&___other));
		bool L_25 = ((&___other)->___resizeTextForBestFit_7);
		if ((((uint32_t)L_24) != ((uint32_t)L_25)))
		{
			goto IL_015d;
		}
	}
	{
		bool L_26 = (__this->___updateBounds_10);
		NullCheck((&___other));
		bool L_27 = ((&___other)->___updateBounds_10);
		if ((((uint32_t)L_26) != ((uint32_t)L_27)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_28 = (__this->___horizontalOverflow_12);
		NullCheck((&___other));
		int32_t L_29 = ((&___other)->___horizontalOverflow_12);
		if ((((uint32_t)L_28) != ((uint32_t)L_29)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_30 = (__this->___verticalOverflow_11);
		NullCheck((&___other));
		int32_t L_31 = ((&___other)->___verticalOverflow_11);
		if ((((uint32_t)L_30) != ((uint32_t)L_31)))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_t109  L_32 = (__this->___generationExtents_13);
		NullCheck((&___other));
		Vector2_t109  L_33 = ((&___other)->___generationExtents_13);
		bool L_34 = TextGenerationSettings_CompareVector2_m5232(__this, L_32, L_33, /*hidden argument*/&TextGenerationSettings_CompareVector2_m5232_MethodInfo);
		if (!L_34)
		{
			goto IL_015d;
		}
	}
	{
		Vector2_t109  L_35 = (__this->___pivot_14);
		NullCheck((&___other));
		Vector2_t109  L_36 = ((&___other)->___pivot_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m5232(__this, L_35, L_36, /*hidden argument*/&TextGenerationSettings_CompareVector2_m5232_MethodInfo);
		if (!L_37)
		{
			goto IL_015d;
		}
	}
	{
		Font_t148 * L_38 = (__this->___font_0);
		NullCheck((&___other));
		Font_t148 * L_39 = ((&___other)->___font_0);
		bool L_40 = Object_op_Equality_m1333(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/&Object_op_Equality_m1333_MethodInfo);
		G_B19_0 = ((int32_t)(L_40));
		goto IL_015e;
	}

IL_015d:
	{
		G_B19_0 = 0;
	}

IL_015e:
	{
		return G_B19_0;
	}
}
// Metadata Definition UnityEngine.TextGenerationSettings
extern Il2CppType Font_t148_0_0_6;
FieldInfo TextGenerationSettings_t238____font_0_FieldInfo = 
{
	"font"/* name */
	, &Font_t148_0_0_6/* type */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t238, ___font_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Color_t132_0_0_6;
FieldInfo TextGenerationSettings_t238____color_1_FieldInfo = 
{
	"color"/* name */
	, &Color_t132_0_0_6/* type */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t238, ___color_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_6;
FieldInfo TextGenerationSettings_t238____fontSize_2_FieldInfo = 
{
	"fontSize"/* name */
	, &Int32_t23_0_0_6/* type */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t238, ___fontSize_2) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t39_0_0_6;
FieldInfo TextGenerationSettings_t238____lineSpacing_3_FieldInfo = 
{
	"lineSpacing"/* name */
	, &Single_t39_0_0_6/* type */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t238, ___lineSpacing_3) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t24_0_0_6;
FieldInfo TextGenerationSettings_t238____richText_4_FieldInfo = 
{
	"richText"/* name */
	, &Boolean_t24_0_0_6/* type */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t238, ___richText_4) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType FontStyle_t340_0_0_6;
FieldInfo TextGenerationSettings_t238____fontStyle_5_FieldInfo = 
{
	"fontStyle"/* name */
	, &FontStyle_t340_0_0_6/* type */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t238, ___fontStyle_5) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextAnchor_t341_0_0_6;
FieldInfo TextGenerationSettings_t238____textAnchor_6_FieldInfo = 
{
	"textAnchor"/* name */
	, &TextAnchor_t341_0_0_6/* type */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t238, ___textAnchor_6) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t24_0_0_6;
FieldInfo TextGenerationSettings_t238____resizeTextForBestFit_7_FieldInfo = 
{
	"resizeTextForBestFit"/* name */
	, &Boolean_t24_0_0_6/* type */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t238, ___resizeTextForBestFit_7) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_6;
FieldInfo TextGenerationSettings_t238____resizeTextMinSize_8_FieldInfo = 
{
	"resizeTextMinSize"/* name */
	, &Int32_t23_0_0_6/* type */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t238, ___resizeTextMinSize_8) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_6;
FieldInfo TextGenerationSettings_t238____resizeTextMaxSize_9_FieldInfo = 
{
	"resizeTextMaxSize"/* name */
	, &Int32_t23_0_0_6/* type */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t238, ___resizeTextMaxSize_9) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t24_0_0_6;
FieldInfo TextGenerationSettings_t238____updateBounds_10_FieldInfo = 
{
	"updateBounds"/* name */
	, &Boolean_t24_0_0_6/* type */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t238, ___updateBounds_10) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType VerticalWrapMode_t343_0_0_6;
FieldInfo TextGenerationSettings_t238____verticalOverflow_11_FieldInfo = 
{
	"verticalOverflow"/* name */
	, &VerticalWrapMode_t343_0_0_6/* type */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t238, ___verticalOverflow_11) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType HorizontalWrapMode_t342_0_0_6;
FieldInfo TextGenerationSettings_t238____horizontalOverflow_12_FieldInfo = 
{
	"horizontalOverflow"/* name */
	, &HorizontalWrapMode_t342_0_0_6/* type */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t238, ___horizontalOverflow_12) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector2_t109_0_0_6;
FieldInfo TextGenerationSettings_t238____generationExtents_13_FieldInfo = 
{
	"generationExtents"/* name */
	, &Vector2_t109_0_0_6/* type */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t238, ___generationExtents_13) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector2_t109_0_0_6;
FieldInfo TextGenerationSettings_t238____pivot_14_FieldInfo = 
{
	"pivot"/* name */
	, &Vector2_t109_0_0_6/* type */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t238, ___pivot_14) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t24_0_0_6;
FieldInfo TextGenerationSettings_t238____generateOutOfBounds_15_FieldInfo = 
{
	"generateOutOfBounds"/* name */
	, &Boolean_t24_0_0_6/* type */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t238, ___generateOutOfBounds_15) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TextGenerationSettings_t238_FieldInfos[] =
{
	&TextGenerationSettings_t238____font_0_FieldInfo,
	&TextGenerationSettings_t238____color_1_FieldInfo,
	&TextGenerationSettings_t238____fontSize_2_FieldInfo,
	&TextGenerationSettings_t238____lineSpacing_3_FieldInfo,
	&TextGenerationSettings_t238____richText_4_FieldInfo,
	&TextGenerationSettings_t238____fontStyle_5_FieldInfo,
	&TextGenerationSettings_t238____textAnchor_6_FieldInfo,
	&TextGenerationSettings_t238____resizeTextForBestFit_7_FieldInfo,
	&TextGenerationSettings_t238____resizeTextMinSize_8_FieldInfo,
	&TextGenerationSettings_t238____resizeTextMaxSize_9_FieldInfo,
	&TextGenerationSettings_t238____updateBounds_10_FieldInfo,
	&TextGenerationSettings_t238____verticalOverflow_11_FieldInfo,
	&TextGenerationSettings_t238____horizontalOverflow_12_FieldInfo,
	&TextGenerationSettings_t238____generationExtents_13_FieldInfo,
	&TextGenerationSettings_t238____pivot_14_FieldInfo,
	&TextGenerationSettings_t238____generateOutOfBounds_15_FieldInfo,
	NULL
};
extern Il2CppType Color_t132_0_0_0;
extern Il2CppType Color_t132_0_0_0;
extern Il2CppType Color_t132_0_0_0;
static ParameterInfo TextGenerationSettings_t238_TextGenerationSettings_CompareColors_m5231_ParameterInfos[] = 
{
	{"left", 0, 134219006, &EmptyCustomAttributesCache, &Color_t132_0_0_0},
	{"right", 1, 134219007, &EmptyCustomAttributesCache, &Color_t132_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Color_t132_Color_t132 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
MethodInfo TextGenerationSettings_CompareColors_m5231_MethodInfo = 
{
	"CompareColors"/* name */
	, (methodPointerType)&TextGenerationSettings_CompareColors_m5231/* method */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Color_t132_Color_t132/* invoker_method */
	, TextGenerationSettings_t238_TextGenerationSettings_CompareColors_m5231_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1264/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Vector2_t109_0_0_0;
extern Il2CppType Vector2_t109_0_0_0;
extern Il2CppType Vector2_t109_0_0_0;
static ParameterInfo TextGenerationSettings_t238_TextGenerationSettings_CompareVector2_m5232_ParameterInfos[] = 
{
	{"left", 0, 134219008, &EmptyCustomAttributesCache, &Vector2_t109_0_0_0},
	{"right", 1, 134219009, &EmptyCustomAttributesCache, &Vector2_t109_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Vector2_t109_Vector2_t109 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
MethodInfo TextGenerationSettings_CompareVector2_m5232_MethodInfo = 
{
	"CompareVector2"/* name */
	, (methodPointerType)&TextGenerationSettings_CompareVector2_m5232/* method */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Vector2_t109_Vector2_t109/* invoker_method */
	, TextGenerationSettings_t238_TextGenerationSettings_CompareVector2_m5232_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1265/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType TextGenerationSettings_t238_0_0_0;
extern Il2CppType TextGenerationSettings_t238_0_0_0;
static ParameterInfo TextGenerationSettings_t238_TextGenerationSettings_Equals_m5233_ParameterInfos[] = 
{
	{"other", 0, 134219010, &EmptyCustomAttributesCache, &TextGenerationSettings_t238_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_TextGenerationSettings_t238 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
MethodInfo TextGenerationSettings_Equals_m5233_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&TextGenerationSettings_Equals_m5233/* method */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_TextGenerationSettings_t238/* invoker_method */
	, TextGenerationSettings_t238_TextGenerationSettings_Equals_m5233_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1266/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TextGenerationSettings_t238_MethodInfos[] =
{
	&TextGenerationSettings_CompareColors_m5231_MethodInfo,
	&TextGenerationSettings_CompareVector2_m5232_MethodInfo,
	&TextGenerationSettings_Equals_m5233_MethodInfo,
	NULL
};
extern MethodInfo ValueType_GetHashCode_m60_MethodInfo;
extern MethodInfo ValueType_ToString_m61_MethodInfo;
static MethodInfo* TextGenerationSettings_t238_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType TextGenerationSettings_t238_1_0_0;
TypeInfo TextGenerationSettings_t238_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TextGenerationSettings"/* name */
	, "UnityEngine"/* namespaze */
	, TextGenerationSettings_t238_MethodInfos/* methods */
	, NULL/* properties */
	, TextGenerationSettings_t238_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TextGenerationSettings_t238_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TextGenerationSettings_t238_il2cpp_TypeInfo/* cast_class */
	, &TextGenerationSettings_t238_0_0_0/* byval_arg */
	, &TextGenerationSettings_t238_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TextGenerationSettings_t238)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 16/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TrackedReference_t2123_il2cpp_TypeInfo;

extern TypeInfo IntPtr_t34_il2cpp_TypeInfo;
extern MethodInfo TrackedReference_op_Equality_m5236_MethodInfo;
extern MethodInfo IntPtr_op_Explicit_m5410_MethodInfo;
extern MethodInfo IntPtr_op_Equality_m5411_MethodInfo;


// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern MethodInfo TrackedReference_Equals_m5234_MethodInfo;
 bool TrackedReference_Equals_m5234 (TrackedReference_t2123 * __this, Object_t * ___o, MethodInfo* method){
	{
		bool L_0 = TrackedReference_op_Equality_m5236(NULL /*static, unused*/, ((TrackedReference_t2123 *)IsInst(___o, InitializedTypeInfo(&TrackedReference_t2123_il2cpp_TypeInfo))), __this, /*hidden argument*/&TrackedReference_op_Equality_m5236_MethodInfo);
		return L_0;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern MethodInfo TrackedReference_GetHashCode_m5235_MethodInfo;
 int32_t TrackedReference_GetHashCode_m5235 (TrackedReference_t2123 * __this, MethodInfo* method){
	{
		IntPtr_t34 L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m5410(NULL /*static, unused*/, L_0, /*hidden argument*/&IntPtr_op_Explicit_m5410_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
 bool TrackedReference_op_Equality_m5236 (Object_t * __this/* static, unused */, TrackedReference_t2123 * ___x, TrackedReference_t2123 * ___y, MethodInfo* method){
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		V_0 = ___x;
		V_1 = ___y;
		if (V_1)
		{
			goto IL_0012;
		}
	}
	{
		if (V_0)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		if (V_1)
		{
			goto IL_0029;
		}
	}
	{
		NullCheck(___x);
		IntPtr_t34 L_0 = (___x->___m_Ptr_0);
		bool L_1 = IntPtr_op_Equality_m5411(NULL /*static, unused*/, L_0, (((IntPtr_t34_StaticFields*)InitializedTypeInfo(&IntPtr_t34_il2cpp_TypeInfo)->static_fields)->___Zero_1), /*hidden argument*/&IntPtr_op_Equality_m5411_MethodInfo);
		return L_1;
	}

IL_0029:
	{
		if (V_0)
		{
			goto IL_0040;
		}
	}
	{
		NullCheck(___y);
		IntPtr_t34 L_2 = (___y->___m_Ptr_0);
		bool L_3 = IntPtr_op_Equality_m5411(NULL /*static, unused*/, L_2, (((IntPtr_t34_StaticFields*)InitializedTypeInfo(&IntPtr_t34_il2cpp_TypeInfo)->static_fields)->___Zero_1), /*hidden argument*/&IntPtr_op_Equality_m5411_MethodInfo);
		return L_3;
	}

IL_0040:
	{
		NullCheck(___x);
		IntPtr_t34 L_4 = (___x->___m_Ptr_0);
		NullCheck(___y);
		IntPtr_t34 L_5 = (___y->___m_Ptr_0);
		bool L_6 = IntPtr_op_Equality_m5411(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&IntPtr_op_Equality_m5411_MethodInfo);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
void TrackedReference_t2123_marshal(const TrackedReference_t2123& unmarshaled, TrackedReference_t2123_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void TrackedReference_t2123_marshal_back(const TrackedReference_t2123_marshaled& marshaled, TrackedReference_t2123& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
void TrackedReference_t2123_marshal_cleanup(TrackedReference_t2123_marshaled& marshaled)
{
}
// Metadata Definition UnityEngine.TrackedReference
extern Il2CppType IntPtr_t34_0_0_3;
FieldInfo TrackedReference_t2123____m_Ptr_0_FieldInfo = 
{
	"m_Ptr"/* name */
	, &IntPtr_t34_0_0_3/* type */
	, &TrackedReference_t2123_il2cpp_TypeInfo/* parent */
	, offsetof(TrackedReference_t2123, ___m_Ptr_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TrackedReference_t2123_FieldInfos[] =
{
	&TrackedReference_t2123____m_Ptr_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo TrackedReference_t2123_TrackedReference_Equals_m5234_ParameterInfos[] = 
{
	{"o", 0, 134219011, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
MethodInfo TrackedReference_Equals_m5234_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&TrackedReference_Equals_m5234/* method */
	, &TrackedReference_t2123_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, TrackedReference_t2123_TrackedReference_Equals_m5234_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1267/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
MethodInfo TrackedReference_GetHashCode_m5235_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&TrackedReference_GetHashCode_m5235/* method */
	, &TrackedReference_t2123_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1268/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType TrackedReference_t2123_0_0_0;
extern Il2CppType TrackedReference_t2123_0_0_0;
extern Il2CppType TrackedReference_t2123_0_0_0;
static ParameterInfo TrackedReference_t2123_TrackedReference_op_Equality_m5236_ParameterInfos[] = 
{
	{"x", 0, 134219012, &EmptyCustomAttributesCache, &TrackedReference_t2123_0_0_0},
	{"y", 1, 134219013, &EmptyCustomAttributesCache, &TrackedReference_t2123_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
MethodInfo TrackedReference_op_Equality_m5236_MethodInfo = 
{
	"op_Equality"/* name */
	, (methodPointerType)&TrackedReference_op_Equality_m5236/* method */
	, &TrackedReference_t2123_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t_Object_t/* invoker_method */
	, TrackedReference_t2123_TrackedReference_op_Equality_m5236_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1269/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TrackedReference_t2123_MethodInfos[] =
{
	&TrackedReference_Equals_m5234_MethodInfo,
	&TrackedReference_GetHashCode_m5235_MethodInfo,
	&TrackedReference_op_Equality_m5236_MethodInfo,
	NULL
};
static MethodInfo* TrackedReference_t2123_VTable[] =
{
	&TrackedReference_Equals_m5234_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&TrackedReference_GetHashCode_m5235_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType TrackedReference_t2123_1_0_0;
struct TrackedReference_t2123;
TypeInfo TrackedReference_t2123_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TrackedReference"/* name */
	, "UnityEngine"/* namespaze */
	, TrackedReference_t2123_MethodInfos/* methods */
	, NULL/* properties */
	, TrackedReference_t2123_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TrackedReference_t2123_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TrackedReference_t2123_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TrackedReference_t2123_il2cpp_TypeInfo/* cast_class */
	, &TrackedReference_t2123_0_0_0/* byval_arg */
	, &TrackedReference_t2123_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)TrackedReference_t2123_marshal/* marshal_to_native_func */
	, (methodPointerType)TrackedReference_t2123_marshal_back/* marshal_from_native_func */
	, (methodPointerType)TrackedReference_t2123_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (TrackedReference_t2123)/* instance_size */
	, 0/* element_size */
	, sizeof(TrackedReference_t2123_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048585/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentListenerMode_t2173_il2cpp_TypeInfo;



// Metadata Definition UnityEngine.Events.PersistentListenerMode
extern Il2CppType Int32_t23_0_0_1542;
FieldInfo PersistentListenerMode_t2173____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t23_0_0_1542/* type */
	, &PersistentListenerMode_t2173_il2cpp_TypeInfo/* parent */
	, offsetof(PersistentListenerMode_t2173, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType PersistentListenerMode_t2173_0_0_32854;
FieldInfo PersistentListenerMode_t2173____EventDefined_2_FieldInfo = 
{
	"EventDefined"/* name */
	, &PersistentListenerMode_t2173_0_0_32854/* type */
	, &PersistentListenerMode_t2173_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType PersistentListenerMode_t2173_0_0_32854;
FieldInfo PersistentListenerMode_t2173____Void_3_FieldInfo = 
{
	"Void"/* name */
	, &PersistentListenerMode_t2173_0_0_32854/* type */
	, &PersistentListenerMode_t2173_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType PersistentListenerMode_t2173_0_0_32854;
FieldInfo PersistentListenerMode_t2173____Object_4_FieldInfo = 
{
	"Object"/* name */
	, &PersistentListenerMode_t2173_0_0_32854/* type */
	, &PersistentListenerMode_t2173_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType PersistentListenerMode_t2173_0_0_32854;
FieldInfo PersistentListenerMode_t2173____Int_5_FieldInfo = 
{
	"Int"/* name */
	, &PersistentListenerMode_t2173_0_0_32854/* type */
	, &PersistentListenerMode_t2173_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType PersistentListenerMode_t2173_0_0_32854;
FieldInfo PersistentListenerMode_t2173____Float_6_FieldInfo = 
{
	"Float"/* name */
	, &PersistentListenerMode_t2173_0_0_32854/* type */
	, &PersistentListenerMode_t2173_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType PersistentListenerMode_t2173_0_0_32854;
FieldInfo PersistentListenerMode_t2173____String_7_FieldInfo = 
{
	"String"/* name */
	, &PersistentListenerMode_t2173_0_0_32854/* type */
	, &PersistentListenerMode_t2173_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType PersistentListenerMode_t2173_0_0_32854;
FieldInfo PersistentListenerMode_t2173____Bool_8_FieldInfo = 
{
	"Bool"/* name */
	, &PersistentListenerMode_t2173_0_0_32854/* type */
	, &PersistentListenerMode_t2173_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* PersistentListenerMode_t2173_FieldInfos[] =
{
	&PersistentListenerMode_t2173____value___1_FieldInfo,
	&PersistentListenerMode_t2173____EventDefined_2_FieldInfo,
	&PersistentListenerMode_t2173____Void_3_FieldInfo,
	&PersistentListenerMode_t2173____Object_4_FieldInfo,
	&PersistentListenerMode_t2173____Int_5_FieldInfo,
	&PersistentListenerMode_t2173____Float_6_FieldInfo,
	&PersistentListenerMode_t2173____String_7_FieldInfo,
	&PersistentListenerMode_t2173____Bool_8_FieldInfo,
	NULL
};
static const int32_t PersistentListenerMode_t2173____EventDefined_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry PersistentListenerMode_t2173____EventDefined_2_DefaultValue = 
{
	&PersistentListenerMode_t2173____EventDefined_2_FieldInfo/* field */
	, { (char*)&PersistentListenerMode_t2173____EventDefined_2_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t PersistentListenerMode_t2173____Void_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry PersistentListenerMode_t2173____Void_3_DefaultValue = 
{
	&PersistentListenerMode_t2173____Void_3_FieldInfo/* field */
	, { (char*)&PersistentListenerMode_t2173____Void_3_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t PersistentListenerMode_t2173____Object_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry PersistentListenerMode_t2173____Object_4_DefaultValue = 
{
	&PersistentListenerMode_t2173____Object_4_FieldInfo/* field */
	, { (char*)&PersistentListenerMode_t2173____Object_4_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t PersistentListenerMode_t2173____Int_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry PersistentListenerMode_t2173____Int_5_DefaultValue = 
{
	&PersistentListenerMode_t2173____Int_5_FieldInfo/* field */
	, { (char*)&PersistentListenerMode_t2173____Int_5_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t PersistentListenerMode_t2173____Float_6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry PersistentListenerMode_t2173____Float_6_DefaultValue = 
{
	&PersistentListenerMode_t2173____Float_6_FieldInfo/* field */
	, { (char*)&PersistentListenerMode_t2173____Float_6_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t PersistentListenerMode_t2173____String_7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry PersistentListenerMode_t2173____String_7_DefaultValue = 
{
	&PersistentListenerMode_t2173____String_7_FieldInfo/* field */
	, { (char*)&PersistentListenerMode_t2173____String_7_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t PersistentListenerMode_t2173____Bool_8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry PersistentListenerMode_t2173____Bool_8_DefaultValue = 
{
	&PersistentListenerMode_t2173____Bool_8_FieldInfo/* field */
	, { (char*)&PersistentListenerMode_t2173____Bool_8_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* PersistentListenerMode_t2173_FieldDefaultValues[] = 
{
	&PersistentListenerMode_t2173____EventDefined_2_DefaultValue,
	&PersistentListenerMode_t2173____Void_3_DefaultValue,
	&PersistentListenerMode_t2173____Object_4_DefaultValue,
	&PersistentListenerMode_t2173____Int_5_DefaultValue,
	&PersistentListenerMode_t2173____Float_6_DefaultValue,
	&PersistentListenerMode_t2173____String_7_DefaultValue,
	&PersistentListenerMode_t2173____Bool_8_DefaultValue,
	NULL
};
static MethodInfo* PersistentListenerMode_t2173_MethodInfos[] =
{
	NULL
};
static MethodInfo* PersistentListenerMode_t2173_VTable[] =
{
	&Enum_Equals_m1284_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Enum_GetHashCode_m1285_MethodInfo,
	&Enum_ToString_m1286_MethodInfo,
	&Enum_ToString_m1287_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1288_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1289_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1290_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1291_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1292_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1293_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1294_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1295_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1296_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1297_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1298_MethodInfo,
	&Enum_ToString_m1299_MethodInfo,
	&Enum_System_IConvertible_ToType_m1300_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1301_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1302_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1303_MethodInfo,
	&Enum_CompareTo_m1304_MethodInfo,
	&Enum_GetTypeCode_m1305_MethodInfo,
};
static Il2CppInterfaceOffsetPair PersistentListenerMode_t2173_InterfacesOffsets[] = 
{
	{ &IFormattable_t289_il2cpp_TypeInfo, 4},
	{ &IConvertible_t290_il2cpp_TypeInfo, 5},
	{ &IComparable_t291_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType PersistentListenerMode_t2173_0_0_0;
extern Il2CppType PersistentListenerMode_t2173_1_0_0;
TypeInfo PersistentListenerMode_t2173_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "PersistentListenerMode"/* name */
	, "UnityEngine.Events"/* namespaze */
	, PersistentListenerMode_t2173_MethodInfos/* methods */
	, NULL/* properties */
	, PersistentListenerMode_t2173_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t293_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Int32_t23_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, PersistentListenerMode_t2173_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t23_il2cpp_TypeInfo/* cast_class */
	, &PersistentListenerMode_t2173_0_0_0/* byval_arg */
	, &PersistentListenerMode_t2173_1_0_0/* this_arg */
	, PersistentListenerMode_t2173_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, PersistentListenerMode_t2173_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PersistentListenerMode_t2173)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 8/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArgumentCache_t2174_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern MethodInfo ArgumentCache__ctor_m5237_MethodInfo;
 void ArgumentCache__ctor_m5237 (ArgumentCache_t2174 * __this, MethodInfo* method){
	{
		Object__ctor_m1366(__this, /*hidden argument*/&Object__ctor_m1366_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern MethodInfo ArgumentCache_get_unityObjectArgument_m5238_MethodInfo;
 Object_t207 * ArgumentCache_get_unityObjectArgument_m5238 (ArgumentCache_t2174 * __this, MethodInfo* method){
	{
		Object_t207 * L_0 = (__this->___m_ObjectArgument_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern MethodInfo ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5239_MethodInfo;
 String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5239 (ArgumentCache_t2174 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern MethodInfo ArgumentCache_get_intArgument_m5240_MethodInfo;
 int32_t ArgumentCache_get_intArgument_m5240 (ArgumentCache_t2174 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___m_IntArgument_2);
		return L_0;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern MethodInfo ArgumentCache_get_floatArgument_m5241_MethodInfo;
 float ArgumentCache_get_floatArgument_m5241 (ArgumentCache_t2174 * __this, MethodInfo* method){
	{
		float L_0 = (__this->___m_FloatArgument_3);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern MethodInfo ArgumentCache_get_stringArgument_m5242_MethodInfo;
 String_t* ArgumentCache_get_stringArgument_m5242 (ArgumentCache_t2174 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->___m_StringArgument_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern MethodInfo ArgumentCache_get_boolArgument_m5243_MethodInfo;
 bool ArgumentCache_get_boolArgument_m5243 (ArgumentCache_t2174 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___m_BoolArgument_5);
		return L_0;
	}
}
// Metadata Definition UnityEngine.Events.ArgumentCache
extern Il2CppType Object_t207_0_0_1;
extern CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_ObjectArgument;
FieldInfo ArgumentCache_t2174____m_ObjectArgument_0_FieldInfo = 
{
	"m_ObjectArgument"/* name */
	, &Object_t207_0_0_1/* type */
	, &ArgumentCache_t2174_il2cpp_TypeInfo/* parent */
	, offsetof(ArgumentCache_t2174, ___m_ObjectArgument_0)/* data */
	, &ArgumentCache_t2174__CustomAttributeCache_m_ObjectArgument/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
extern CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_ObjectArgumentAssemblyTypeName;
FieldInfo ArgumentCache_t2174____m_ObjectArgumentAssemblyTypeName_1_FieldInfo = 
{
	"m_ObjectArgumentAssemblyTypeName"/* name */
	, &String_t_0_0_1/* type */
	, &ArgumentCache_t2174_il2cpp_TypeInfo/* parent */
	, offsetof(ArgumentCache_t2174, ___m_ObjectArgumentAssemblyTypeName_1)/* data */
	, &ArgumentCache_t2174__CustomAttributeCache_m_ObjectArgumentAssemblyTypeName/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
extern CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_IntArgument;
FieldInfo ArgumentCache_t2174____m_IntArgument_2_FieldInfo = 
{
	"m_IntArgument"/* name */
	, &Int32_t23_0_0_1/* type */
	, &ArgumentCache_t2174_il2cpp_TypeInfo/* parent */
	, offsetof(ArgumentCache_t2174, ___m_IntArgument_2)/* data */
	, &ArgumentCache_t2174__CustomAttributeCache_m_IntArgument/* custom_attributes_cache */

};
extern Il2CppType Single_t39_0_0_1;
extern CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_FloatArgument;
FieldInfo ArgumentCache_t2174____m_FloatArgument_3_FieldInfo = 
{
	"m_FloatArgument"/* name */
	, &Single_t39_0_0_1/* type */
	, &ArgumentCache_t2174_il2cpp_TypeInfo/* parent */
	, offsetof(ArgumentCache_t2174, ___m_FloatArgument_3)/* data */
	, &ArgumentCache_t2174__CustomAttributeCache_m_FloatArgument/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
extern CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_StringArgument;
FieldInfo ArgumentCache_t2174____m_StringArgument_4_FieldInfo = 
{
	"m_StringArgument"/* name */
	, &String_t_0_0_1/* type */
	, &ArgumentCache_t2174_il2cpp_TypeInfo/* parent */
	, offsetof(ArgumentCache_t2174, ___m_StringArgument_4)/* data */
	, &ArgumentCache_t2174__CustomAttributeCache_m_StringArgument/* custom_attributes_cache */

};
extern Il2CppType Boolean_t24_0_0_1;
extern CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_BoolArgument;
FieldInfo ArgumentCache_t2174____m_BoolArgument_5_FieldInfo = 
{
	"m_BoolArgument"/* name */
	, &Boolean_t24_0_0_1/* type */
	, &ArgumentCache_t2174_il2cpp_TypeInfo/* parent */
	, offsetof(ArgumentCache_t2174, ___m_BoolArgument_5)/* data */
	, &ArgumentCache_t2174__CustomAttributeCache_m_BoolArgument/* custom_attributes_cache */

};
static FieldInfo* ArgumentCache_t2174_FieldInfos[] =
{
	&ArgumentCache_t2174____m_ObjectArgument_0_FieldInfo,
	&ArgumentCache_t2174____m_ObjectArgumentAssemblyTypeName_1_FieldInfo,
	&ArgumentCache_t2174____m_IntArgument_2_FieldInfo,
	&ArgumentCache_t2174____m_FloatArgument_3_FieldInfo,
	&ArgumentCache_t2174____m_StringArgument_4_FieldInfo,
	&ArgumentCache_t2174____m_BoolArgument_5_FieldInfo,
	NULL
};
static PropertyInfo ArgumentCache_t2174____unityObjectArgument_PropertyInfo = 
{
	&ArgumentCache_t2174_il2cpp_TypeInfo/* parent */
	, "unityObjectArgument"/* name */
	, &ArgumentCache_get_unityObjectArgument_m5238_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArgumentCache_t2174____unityObjectArgumentAssemblyTypeName_PropertyInfo = 
{
	&ArgumentCache_t2174_il2cpp_TypeInfo/* parent */
	, "unityObjectArgumentAssemblyTypeName"/* name */
	, &ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5239_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArgumentCache_t2174____intArgument_PropertyInfo = 
{
	&ArgumentCache_t2174_il2cpp_TypeInfo/* parent */
	, "intArgument"/* name */
	, &ArgumentCache_get_intArgument_m5240_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArgumentCache_t2174____floatArgument_PropertyInfo = 
{
	&ArgumentCache_t2174_il2cpp_TypeInfo/* parent */
	, "floatArgument"/* name */
	, &ArgumentCache_get_floatArgument_m5241_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArgumentCache_t2174____stringArgument_PropertyInfo = 
{
	&ArgumentCache_t2174_il2cpp_TypeInfo/* parent */
	, "stringArgument"/* name */
	, &ArgumentCache_get_stringArgument_m5242_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArgumentCache_t2174____boolArgument_PropertyInfo = 
{
	&ArgumentCache_t2174_il2cpp_TypeInfo/* parent */
	, "boolArgument"/* name */
	, &ArgumentCache_get_boolArgument_m5243_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ArgumentCache_t2174_PropertyInfos[] =
{
	&ArgumentCache_t2174____unityObjectArgument_PropertyInfo,
	&ArgumentCache_t2174____unityObjectArgumentAssemblyTypeName_PropertyInfo,
	&ArgumentCache_t2174____intArgument_PropertyInfo,
	&ArgumentCache_t2174____floatArgument_PropertyInfo,
	&ArgumentCache_t2174____stringArgument_PropertyInfo,
	&ArgumentCache_t2174____boolArgument_PropertyInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.ArgumentCache::.ctor()
MethodInfo ArgumentCache__ctor_m5237_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ArgumentCache__ctor_m5237/* method */
	, &ArgumentCache_t2174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1270/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t207_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
MethodInfo ArgumentCache_get_unityObjectArgument_m5238_MethodInfo = 
{
	"get_unityObjectArgument"/* name */
	, (methodPointerType)&ArgumentCache_get_unityObjectArgument_m5238/* method */
	, &ArgumentCache_t2174_il2cpp_TypeInfo/* declaring_type */
	, &Object_t207_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1271/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
MethodInfo ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5239_MethodInfo = 
{
	"get_unityObjectArgumentAssemblyTypeName"/* name */
	, (methodPointerType)&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5239/* method */
	, &ArgumentCache_t2174_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1272/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
MethodInfo ArgumentCache_get_intArgument_m5240_MethodInfo = 
{
	"get_intArgument"/* name */
	, (methodPointerType)&ArgumentCache_get_intArgument_m5240/* method */
	, &ArgumentCache_t2174_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1273/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t39_0_0_0;
extern void* RuntimeInvoker_Single_t39 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
MethodInfo ArgumentCache_get_floatArgument_m5241_MethodInfo = 
{
	"get_floatArgument"/* name */
	, (methodPointerType)&ArgumentCache_get_floatArgument_m5241/* method */
	, &ArgumentCache_t2174_il2cpp_TypeInfo/* declaring_type */
	, &Single_t39_0_0_0/* return_type */
	, RuntimeInvoker_Single_t39/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1274/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
MethodInfo ArgumentCache_get_stringArgument_m5242_MethodInfo = 
{
	"get_stringArgument"/* name */
	, (methodPointerType)&ArgumentCache_get_stringArgument_m5242/* method */
	, &ArgumentCache_t2174_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1275/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
MethodInfo ArgumentCache_get_boolArgument_m5243_MethodInfo = 
{
	"get_boolArgument"/* name */
	, (methodPointerType)&ArgumentCache_get_boolArgument_m5243/* method */
	, &ArgumentCache_t2174_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1276/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ArgumentCache_t2174_MethodInfos[] =
{
	&ArgumentCache__ctor_m5237_MethodInfo,
	&ArgumentCache_get_unityObjectArgument_m5238_MethodInfo,
	&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5239_MethodInfo,
	&ArgumentCache_get_intArgument_m5240_MethodInfo,
	&ArgumentCache_get_floatArgument_m5241_MethodInfo,
	&ArgumentCache_get_stringArgument_m5242_MethodInfo,
	&ArgumentCache_get_boolArgument_m5243_MethodInfo,
	NULL
};
static MethodInfo* ArgumentCache_t2174_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
};
extern TypeInfo FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo;
extern MethodInfo FormerlySerializedAsAttribute__ctor_m1353_MethodInfo;
extern TypeInfo SerializeField_t300_il2cpp_TypeInfo;
extern MethodInfo SerializeField__ctor_m1354_MethodInfo;
void ArgumentCache_t2174_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t299 * tmp;
		tmp = (FormerlySerializedAsAttribute_t299 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m1353(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), &FormerlySerializedAsAttribute__ctor_m1353_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t300 * tmp;
		tmp = (SerializeField_t300 *)il2cpp_codegen_object_new (&SerializeField_t300_il2cpp_TypeInfo);
		SerializeField__ctor_m1354(tmp, &SerializeField__ctor_m1354_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void ArgumentCache_t2174_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t299 * tmp;
		tmp = (FormerlySerializedAsAttribute_t299 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m1353(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), &FormerlySerializedAsAttribute__ctor_m1353_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t300 * tmp;
		tmp = (SerializeField_t300 *)il2cpp_codegen_object_new (&SerializeField_t300_il2cpp_TypeInfo);
		SerializeField__ctor_m1354(tmp, &SerializeField__ctor_m1354_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void ArgumentCache_t2174_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t300 * tmp;
		tmp = (SerializeField_t300 *)il2cpp_codegen_object_new (&SerializeField_t300_il2cpp_TypeInfo);
		SerializeField__ctor_m1354(tmp, &SerializeField__ctor_m1354_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t299 * tmp;
		tmp = (FormerlySerializedAsAttribute_t299 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m1353(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), &FormerlySerializedAsAttribute__ctor_m1353_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void ArgumentCache_t2174_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t300 * tmp;
		tmp = (SerializeField_t300 *)il2cpp_codegen_object_new (&SerializeField_t300_il2cpp_TypeInfo);
		SerializeField__ctor_m1354(tmp, &SerializeField__ctor_m1354_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t299 * tmp;
		tmp = (FormerlySerializedAsAttribute_t299 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m1353(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), &FormerlySerializedAsAttribute__ctor_m1353_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void ArgumentCache_t2174_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t300 * tmp;
		tmp = (SerializeField_t300 *)il2cpp_codegen_object_new (&SerializeField_t300_il2cpp_TypeInfo);
		SerializeField__ctor_m1354(tmp, &SerializeField__ctor_m1354_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t299 * tmp;
		tmp = (FormerlySerializedAsAttribute_t299 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m1353(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), &FormerlySerializedAsAttribute__ctor_m1353_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void ArgumentCache_t2174_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t300 * tmp;
		tmp = (SerializeField_t300 *)il2cpp_codegen_object_new (&SerializeField_t300_il2cpp_TypeInfo);
		SerializeField__ctor_m1354(tmp, &SerializeField__ctor_m1354_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_ObjectArgument = {
2,
NULL,
&ArgumentCache_t2174_CustomAttributesCacheGenerator_m_ObjectArgument
};
CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_ObjectArgumentAssemblyTypeName = {
2,
NULL,
&ArgumentCache_t2174_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName
};
CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_IntArgument = {
2,
NULL,
&ArgumentCache_t2174_CustomAttributesCacheGenerator_m_IntArgument
};
CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_FloatArgument = {
2,
NULL,
&ArgumentCache_t2174_CustomAttributesCacheGenerator_m_FloatArgument
};
CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_StringArgument = {
2,
NULL,
&ArgumentCache_t2174_CustomAttributesCacheGenerator_m_StringArgument
};
CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_BoolArgument = {
1,
NULL,
&ArgumentCache_t2174_CustomAttributesCacheGenerator_m_BoolArgument
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType ArgumentCache_t2174_0_0_0;
extern Il2CppType ArgumentCache_t2174_1_0_0;
struct ArgumentCache_t2174;
extern CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_ObjectArgument;
extern CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_ObjectArgumentAssemblyTypeName;
extern CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_IntArgument;
extern CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_FloatArgument;
extern CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_StringArgument;
extern CustomAttributesCache ArgumentCache_t2174__CustomAttributeCache_m_BoolArgument;
TypeInfo ArgumentCache_t2174_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ArgumentCache"/* name */
	, "UnityEngine.Events"/* namespaze */
	, ArgumentCache_t2174_MethodInfos/* methods */
	, ArgumentCache_t2174_PropertyInfos/* properties */
	, ArgumentCache_t2174_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ArgumentCache_t2174_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ArgumentCache_t2174_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ArgumentCache_t2174_il2cpp_TypeInfo/* cast_class */
	, &ArgumentCache_t2174_0_0_0/* byval_arg */
	, &ArgumentCache_t2174_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ArgumentCache_t2174)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 6/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BaseInvokableCall_t2175_il2cpp_TypeInfo;

extern TypeInfo ArgumentNullException_t911_il2cpp_TypeInfo;
extern MethodInfo ArgumentNullException__ctor_m3738_MethodInfo;
extern MethodInfo Delegate_get_Method_m5412_MethodInfo;
extern MethodInfo MethodBase_get_IsStatic_m5413_MethodInfo;
extern MethodInfo Delegate_get_Target_m5414_MethodInfo;


// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern MethodInfo BaseInvokableCall__ctor_m5244_MethodInfo;
 void BaseInvokableCall__ctor_m5244 (BaseInvokableCall_t2175 * __this, MethodInfo* method){
	{
		Object__ctor_m1366(__this, /*hidden argument*/&Object__ctor_m1366_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern MethodInfo BaseInvokableCall__ctor_m5245_MethodInfo;
 void BaseInvokableCall__ctor_m5245 (BaseInvokableCall_t2175 * __this, Object_t * ___target, MethodInfo_t517 * ___function, MethodInfo* method){
	{
		Object__ctor_m1366(__this, /*hidden argument*/&Object__ctor_m1366_MethodInfo);
		if (___target)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t911 * L_0 = (ArgumentNullException_t911 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t911_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3738(L_0, (String_t*) &_stringLiteral1113, /*hidden argument*/&ArgumentNullException__ctor_m3738_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0017:
	{
		if (___function)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t911 * L_1 = (ArgumentNullException_t911 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t911_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m3738(L_1, (String_t*) &_stringLiteral1114, /*hidden argument*/&ArgumentNullException__ctor_m3738_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern MethodInfo BaseInvokableCall_AllowInvoke_m5246_MethodInfo;
 bool BaseInvokableCall_AllowInvoke_m5246 (Object_t * __this/* static, unused */, Delegate_t352 * ___delegate, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		NullCheck(___delegate);
		MethodInfo_t517 * L_0 = Delegate_get_Method_m5412(___delegate, /*hidden argument*/&Delegate_get_Method_m5412_MethodInfo);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m5413_MethodInfo, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		NullCheck(___delegate);
		Object_t * L_2 = Delegate_get_Target_m5414(___delegate, /*hidden argument*/&Delegate_get_Target_m5414_MethodInfo);
		G_B3_0 = ((((int32_t)((((Object_t *)L_2) == ((Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.BaseInvokableCall
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
MethodInfo BaseInvokableCall__ctor_m5244_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BaseInvokableCall__ctor_m5244/* method */
	, &BaseInvokableCall_t2175_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1277/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo BaseInvokableCall_t2175_BaseInvokableCall__ctor_m5245_ParameterInfos[] = 
{
	{"target", 0, 134219014, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"function", 1, 134219015, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo BaseInvokableCall__ctor_m5245_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BaseInvokableCall__ctor_m5245/* method */
	, &BaseInvokableCall_t2175_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Object_t/* invoker_method */
	, BaseInvokableCall_t2175_BaseInvokableCall__ctor_m5245_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1278/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t315_0_0_0;
extern Il2CppType ObjectU5BU5D_t315_0_0_0;
static ParameterInfo BaseInvokableCall_t2175_BaseInvokableCall_Invoke_m5415_ParameterInfos[] = 
{
	{"args", 0, 134219016, &EmptyCustomAttributesCache, &ObjectU5BU5D_t315_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[])
MethodInfo BaseInvokableCall_Invoke_m5415_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &BaseInvokableCall_t2175_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, BaseInvokableCall_t2175_BaseInvokableCall_Invoke_m5415_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1279/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo BaseInvokableCall_t2175_BaseInvokableCall_ThrowOnInvalidArg_m5416_ParameterInfos[] = 
{
	{"arg", 0, 134219017, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern Il2CppGenericContainer BaseInvokableCall_ThrowOnInvalidArg_m5416_Il2CppGenericContainer;
extern TypeInfo BaseInvokableCall_ThrowOnInvalidArg_m5416_gp_T_0_il2cpp_TypeInfo;
Il2CppGenericParamFull BaseInvokableCall_ThrowOnInvalidArg_m5416_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { { &BaseInvokableCall_ThrowOnInvalidArg_m5416_Il2CppGenericContainer, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* BaseInvokableCall_ThrowOnInvalidArg_m5416_Il2CppGenericParametersArray[1] = 
{
	&BaseInvokableCall_ThrowOnInvalidArg_m5416_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_m5416_MethodInfo;
Il2CppGenericContainer BaseInvokableCall_ThrowOnInvalidArg_m5416_Il2CppGenericContainer = { { NULL, NULL }, NULL, &BaseInvokableCall_ThrowOnInvalidArg_m5416_MethodInfo, 1, 1, BaseInvokableCall_ThrowOnInvalidArg_m5416_Il2CppGenericParametersArray };
extern Il2CppType BaseInvokableCall_ThrowOnInvalidArg_m5416_gp_0_0_0_0;
static Il2CppRGCTXDefinition BaseInvokableCall_ThrowOnInvalidArg_m5416_RGCTXData[3] = 
{
	{ IL2CPP_RGCTX_DATA_CLASS, &BaseInvokableCall_ThrowOnInvalidArg_m5416_gp_0_0_0_0 }/* Class Definition */,
	{ IL2CPP_RGCTX_DATA_TYPE, &BaseInvokableCall_ThrowOnInvalidArg_m5416_gp_0_0_0_0 }/* Type Definition */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg(System.Object)
MethodInfo BaseInvokableCall_ThrowOnInvalidArg_m5416_MethodInfo = 
{
	"ThrowOnInvalidArg"/* name */
	, NULL/* method */
	, &BaseInvokableCall_t2175_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, BaseInvokableCall_t2175_BaseInvokableCall_ThrowOnInvalidArg_m5416_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 148/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, true/* is_generic */
	, false/* is_inflated */
	, 1280/* token */
	, BaseInvokableCall_ThrowOnInvalidArg_m5416_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &BaseInvokableCall_ThrowOnInvalidArg_m5416_Il2CppGenericContainer/* genericContainer */

};
extern Il2CppType Delegate_t352_0_0_0;
extern Il2CppType Delegate_t352_0_0_0;
static ParameterInfo BaseInvokableCall_t2175_BaseInvokableCall_AllowInvoke_m5246_ParameterInfos[] = 
{
	{"delegate", 0, 134219018, &EmptyCustomAttributesCache, &Delegate_t352_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
MethodInfo BaseInvokableCall_AllowInvoke_m5246_MethodInfo = 
{
	"AllowInvoke"/* name */
	, (methodPointerType)&BaseInvokableCall_AllowInvoke_m5246/* method */
	, &BaseInvokableCall_t2175_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, BaseInvokableCall_t2175_BaseInvokableCall_AllowInvoke_m5246_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 148/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1281/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo BaseInvokableCall_t2175_BaseInvokableCall_Find_m5417_ParameterInfos[] = 
{
	{"targetObj", 0, 134219019, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219020, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo BaseInvokableCall_Find_m5417_MethodInfo = 
{
	"Find"/* name */
	, NULL/* method */
	, &BaseInvokableCall_t2175_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t_Object_t/* invoker_method */
	, BaseInvokableCall_t2175_BaseInvokableCall_Find_m5417_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1282/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* BaseInvokableCall_t2175_MethodInfos[] =
{
	&BaseInvokableCall__ctor_m5244_MethodInfo,
	&BaseInvokableCall__ctor_m5245_MethodInfo,
	&BaseInvokableCall_Invoke_m5415_MethodInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_m5416_MethodInfo,
	&BaseInvokableCall_AllowInvoke_m5246_MethodInfo,
	&BaseInvokableCall_Find_m5417_MethodInfo,
	NULL
};
static MethodInfo* BaseInvokableCall_t2175_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	NULL,
	NULL,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType BaseInvokableCall_t2175_0_0_0;
extern Il2CppType BaseInvokableCall_t2175_1_0_0;
struct BaseInvokableCall_t2175;
TypeInfo BaseInvokableCall_t2175_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "BaseInvokableCall"/* name */
	, "UnityEngine.Events"/* namespaze */
	, BaseInvokableCall_t2175_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &BaseInvokableCall_t2175_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, BaseInvokableCall_t2175_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &BaseInvokableCall_t2175_il2cpp_TypeInfo/* cast_class */
	, &BaseInvokableCall_t2175_0_0_0/* byval_arg */
	, &BaseInvokableCall_t2175_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BaseInvokableCall_t2175)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_t2176_il2cpp_TypeInfo;

extern TypeInfo UnityAction_t158_il2cpp_TypeInfo;
extern TypeInfo Void_t22_il2cpp_TypeInfo;
extern Il2CppType UnityAction_t158_0_0_0;
extern MethodInfo Type_GetTypeFromHandle_m1586_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m5418_MethodInfo;
extern MethodInfo Delegate_Combine_m1629_MethodInfo;
extern MethodInfo UnityAction_Invoke_m1596_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCall__ctor_m5247_MethodInfo;
 void InvokableCall__ctor_m5247 (InvokableCall_t2176 * __this, Object_t * ___target, MethodInfo_t517 * ___theFunction, MethodInfo* method){
	{
		BaseInvokableCall__ctor_m5245(__this, ___target, ___theFunction, /*hidden argument*/&BaseInvokableCall__ctor_m5245_MethodInfo);
		UnityAction_t158 * L_0 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m1586(NULL /*static, unused*/, LoadTypeToken(&UnityAction_t158_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1586_MethodInfo);
		Delegate_t352 * L_2 = Delegate_CreateDelegate_m5418(NULL /*static, unused*/, L_1, ___target, ___theFunction, /*hidden argument*/&Delegate_CreateDelegate_m5418_MethodInfo);
		Delegate_t352 * L_3 = Delegate_Combine_m1629(NULL /*static, unused*/, L_0, ((UnityAction_t158 *)IsInst(L_2, InitializedTypeInfo(&UnityAction_t158_il2cpp_TypeInfo))), /*hidden argument*/&Delegate_Combine_m1629_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_t158 *)Castclass(L_3, InitializedTypeInfo(&UnityAction_t158_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern MethodInfo InvokableCall_Invoke_m5248_MethodInfo;
 void InvokableCall_Invoke_m5248 (InvokableCall_t2176 * __this, ObjectU5BU5D_t315* ___args, MethodInfo* method){
	{
		UnityAction_t158 * L_0 = (__this->___Delegate_0);
		bool L_1 = BaseInvokableCall_AllowInvoke_m5246(NULL /*static, unused*/, L_0, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m5246_MethodInfo);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_t158 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&UnityAction_Invoke_m1596_MethodInfo, L_2);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCall_Find_m5249_MethodInfo;
 bool InvokableCall_Find_m5249 (InvokableCall_t2176 * __this, Object_t * ___targetObj, MethodInfo_t517 * ___method, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		UnityAction_t158 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m5414(L_0, /*hidden argument*/&Delegate_get_Target_m5414_MethodInfo);
		if ((((Object_t *)L_1) != ((Object_t *)___targetObj)))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_t158 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		MethodInfo_t517 * L_3 = Delegate_get_Method_m5412(L_2, /*hidden argument*/&Delegate_get_Method_m5412_MethodInfo);
		G_B3_0 = ((((MethodInfo_t517 *)L_3) == ((MethodInfo_t517 *)___method))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// Metadata Definition UnityEngine.Events.InvokableCall
extern Il2CppType UnityAction_t158_0_0_1;
FieldInfo InvokableCall_t2176____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_t158_0_0_1/* type */
	, &InvokableCall_t2176_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_t2176, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_t2176_FieldInfos[] =
{
	&InvokableCall_t2176____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo InvokableCall_t2176_InvokableCall__ctor_m5247_ParameterInfos[] = 
{
	{"target", 0, 134219021, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219022, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall__ctor_m5247_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall__ctor_m5247/* method */
	, &InvokableCall_t2176_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Object_t/* invoker_method */
	, InvokableCall_t2176_InvokableCall__ctor_m5247_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1283/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t315_0_0_0;
static ParameterInfo InvokableCall_t2176_InvokableCall_Invoke_m5248_ParameterInfos[] = 
{
	{"args", 0, 134219023, &EmptyCustomAttributesCache, &ObjectU5BU5D_t315_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
MethodInfo InvokableCall_Invoke_m5248_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_Invoke_m5248/* method */
	, &InvokableCall_t2176_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InvokableCall_t2176_InvokableCall_Invoke_m5248_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1284/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo InvokableCall_t2176_InvokableCall_Find_m5249_ParameterInfos[] = 
{
	{"targetObj", 0, 134219024, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219025, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_Find_m5249_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_Find_m5249/* method */
	, &InvokableCall_t2176_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t_Object_t/* invoker_method */
	, InvokableCall_t2176_InvokableCall_Find_m5249_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1285/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* InvokableCall_t2176_MethodInfos[] =
{
	&InvokableCall__ctor_m5247_MethodInfo,
	&InvokableCall_Invoke_m5248_MethodInfo,
	&InvokableCall_Find_m5249_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_t2176_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&InvokableCall_Invoke_m5248_MethodInfo,
	&InvokableCall_Find_m5249_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_t2176_0_0_0;
extern Il2CppType InvokableCall_t2176_1_0_0;
struct InvokableCall_t2176;
TypeInfo InvokableCall_t2176_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_t2176_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_t2176_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t2175_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_t2176_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_t2176_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_t2176_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_t2176_0_0_0/* byval_arg */
	, &InvokableCall_t2176_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_t2176)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
extern Il2CppGenericContainer InvokableCall_1_t2177_Il2CppGenericContainer;
extern TypeInfo InvokableCall_1_t2177_gp_T1_0_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_1_t2177_gp_T1_0_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_1_t2177_Il2CppGenericContainer, 0}, {NULL, "T1", 0, 0, NULL} };
static Il2CppGenericParamFull* InvokableCall_1_t2177_Il2CppGenericParametersArray[1] = 
{
	&InvokableCall_1_t2177_gp_T1_0_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo InvokableCall_1_t2177_il2cpp_TypeInfo;
Il2CppGenericContainer InvokableCall_1_t2177_Il2CppGenericContainer = { { NULL, NULL }, NULL, &InvokableCall_1_t2177_il2cpp_TypeInfo, 1, 0, InvokableCall_1_t2177_Il2CppGenericParametersArray };
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo InvokableCall_1_t2177_InvokableCall_1__ctor_m5419_ParameterInfos[] = 
{
	{"target", 0, 134219026, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219027, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`1::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m5419_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &InvokableCall_1_t2177_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_1_t2177_InvokableCall_1__ctor_m5419_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1286/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_1_t2261_0_0_0;
extern Il2CppType UnityAction_1_t2261_0_0_0;
static ParameterInfo InvokableCall_1_t2177_InvokableCall_1__ctor_m5420_ParameterInfos[] = 
{
	{"callback", 0, 134219028, &EmptyCustomAttributesCache, &UnityAction_1_t2261_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`1::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m5420_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &InvokableCall_1_t2177_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_1_t2177_InvokableCall_1__ctor_m5420_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1287/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t315_0_0_0;
static ParameterInfo InvokableCall_1_t2177_InvokableCall_1_Invoke_m5421_ParameterInfos[] = 
{
	{"args", 0, 134219029, &EmptyCustomAttributesCache, &ObjectU5BU5D_t315_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`1::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m5421_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &InvokableCall_1_t2177_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_1_t2177_InvokableCall_1_Invoke_m5421_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1288/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo InvokableCall_1_t2177_InvokableCall_1_Find_m5422_ParameterInfos[] = 
{
	{"targetObj", 0, 134219030, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219031, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
// System.Boolean UnityEngine.Events.InvokableCall`1::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m5422_MethodInfo = 
{
	"Find"/* name */
	, NULL/* method */
	, &InvokableCall_1_t2177_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_1_t2177_InvokableCall_1_Find_m5422_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1289/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* InvokableCall_1_t2177_MethodInfos[] =
{
	&InvokableCall_1__ctor_m5419_MethodInfo,
	&InvokableCall_1__ctor_m5420_MethodInfo,
	&InvokableCall_1_Invoke_m5421_MethodInfo,
	&InvokableCall_1_Find_m5422_MethodInfo,
	NULL
};
extern Il2CppType UnityAction_1_t2261_0_0_1;
FieldInfo InvokableCall_1_t2177____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t2261_0_0_1/* type */
	, &InvokableCall_1_t2177_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t2177_FieldInfos[] =
{
	&InvokableCall_1_t2177____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t2177_0_0_0;
extern Il2CppType InvokableCall_1_t2177_1_0_0;
struct InvokableCall_1_t2177;
TypeInfo InvokableCall_1_t2177_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t2177_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t2177_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t2177_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &InvokableCall_1_t2177_0_0_0/* byval_arg */
	, &InvokableCall_1_t2177_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &InvokableCall_1_t2177_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
extern Il2CppGenericContainer InvokableCall_2_t2178_Il2CppGenericContainer;
extern TypeInfo InvokableCall_2_t2178_gp_T1_0_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_2_t2178_gp_T1_0_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_2_t2178_Il2CppGenericContainer, 0}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo InvokableCall_2_t2178_gp_T2_1_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_2_t2178_gp_T2_1_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_2_t2178_Il2CppGenericContainer, 1}, {NULL, "T2", 0, 0, NULL} };
static Il2CppGenericParamFull* InvokableCall_2_t2178_Il2CppGenericParametersArray[2] = 
{
	&InvokableCall_2_t2178_gp_T1_0_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_2_t2178_gp_T2_1_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo InvokableCall_2_t2178_il2cpp_TypeInfo;
Il2CppGenericContainer InvokableCall_2_t2178_Il2CppGenericContainer = { { NULL, NULL }, NULL, &InvokableCall_2_t2178_il2cpp_TypeInfo, 2, 0, InvokableCall_2_t2178_Il2CppGenericParametersArray };
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo InvokableCall_2_t2178_InvokableCall_2__ctor_m5423_ParameterInfos[] = 
{
	{"target", 0, 134219032, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219033, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`2::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_2__ctor_m5423_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &InvokableCall_2_t2178_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_2_t2178_InvokableCall_2__ctor_m5423_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1290/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t315_0_0_0;
static ParameterInfo InvokableCall_2_t2178_InvokableCall_2_Invoke_m5424_ParameterInfos[] = 
{
	{"args", 0, 134219034, &EmptyCustomAttributesCache, &ObjectU5BU5D_t315_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`2::Invoke(System.Object[])
MethodInfo InvokableCall_2_Invoke_m5424_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &InvokableCall_2_t2178_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_2_t2178_InvokableCall_2_Invoke_m5424_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1291/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo InvokableCall_2_t2178_InvokableCall_2_Find_m5425_ParameterInfos[] = 
{
	{"targetObj", 0, 134219035, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219036, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
// System.Boolean UnityEngine.Events.InvokableCall`2::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_2_Find_m5425_MethodInfo = 
{
	"Find"/* name */
	, NULL/* method */
	, &InvokableCall_2_t2178_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_2_t2178_InvokableCall_2_Find_m5425_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1292/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* InvokableCall_2_t2178_MethodInfos[] =
{
	&InvokableCall_2__ctor_m5423_MethodInfo,
	&InvokableCall_2_Invoke_m5424_MethodInfo,
	&InvokableCall_2_Find_m5425_MethodInfo,
	NULL
};
extern Il2CppType UnityAction_2_t2264_0_0_1;
FieldInfo InvokableCall_2_t2178____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_2_t2264_0_0_1/* type */
	, &InvokableCall_2_t2178_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_2_t2178_FieldInfos[] =
{
	&InvokableCall_2_t2178____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_2_t2178_0_0_0;
extern Il2CppType InvokableCall_2_t2178_1_0_0;
struct InvokableCall_2_t2178;
TypeInfo InvokableCall_2_t2178_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`2"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_2_t2178_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_2_t2178_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_2_t2178_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &InvokableCall_2_t2178_0_0_0/* byval_arg */
	, &InvokableCall_2_t2178_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &InvokableCall_2_t2178_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
extern Il2CppGenericContainer InvokableCall_3_t2179_Il2CppGenericContainer;
extern TypeInfo InvokableCall_3_t2179_gp_T1_0_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_3_t2179_gp_T1_0_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_3_t2179_Il2CppGenericContainer, 0}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo InvokableCall_3_t2179_gp_T2_1_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_3_t2179_gp_T2_1_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_3_t2179_Il2CppGenericContainer, 1}, {NULL, "T2", 0, 0, NULL} };
extern TypeInfo InvokableCall_3_t2179_gp_T3_2_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_3_t2179_gp_T3_2_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_3_t2179_Il2CppGenericContainer, 2}, {NULL, "T3", 0, 0, NULL} };
static Il2CppGenericParamFull* InvokableCall_3_t2179_Il2CppGenericParametersArray[3] = 
{
	&InvokableCall_3_t2179_gp_T1_0_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_3_t2179_gp_T2_1_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_3_t2179_gp_T3_2_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo InvokableCall_3_t2179_il2cpp_TypeInfo;
Il2CppGenericContainer InvokableCall_3_t2179_Il2CppGenericContainer = { { NULL, NULL }, NULL, &InvokableCall_3_t2179_il2cpp_TypeInfo, 3, 0, InvokableCall_3_t2179_Il2CppGenericParametersArray };
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo InvokableCall_3_t2179_InvokableCall_3__ctor_m5426_ParameterInfos[] = 
{
	{"target", 0, 134219037, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219038, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`3::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_3__ctor_m5426_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &InvokableCall_3_t2179_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_3_t2179_InvokableCall_3__ctor_m5426_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1293/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t315_0_0_0;
static ParameterInfo InvokableCall_3_t2179_InvokableCall_3_Invoke_m5427_ParameterInfos[] = 
{
	{"args", 0, 134219039, &EmptyCustomAttributesCache, &ObjectU5BU5D_t315_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`3::Invoke(System.Object[])
MethodInfo InvokableCall_3_Invoke_m5427_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &InvokableCall_3_t2179_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_3_t2179_InvokableCall_3_Invoke_m5427_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1294/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo InvokableCall_3_t2179_InvokableCall_3_Find_m5428_ParameterInfos[] = 
{
	{"targetObj", 0, 134219040, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219041, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
// System.Boolean UnityEngine.Events.InvokableCall`3::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_3_Find_m5428_MethodInfo = 
{
	"Find"/* name */
	, NULL/* method */
	, &InvokableCall_3_t2179_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_3_t2179_InvokableCall_3_Find_m5428_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1295/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* InvokableCall_3_t2179_MethodInfos[] =
{
	&InvokableCall_3__ctor_m5426_MethodInfo,
	&InvokableCall_3_Invoke_m5427_MethodInfo,
	&InvokableCall_3_Find_m5428_MethodInfo,
	NULL
};
extern Il2CppType UnityAction_3_t2268_0_0_1;
FieldInfo InvokableCall_3_t2179____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_3_t2268_0_0_1/* type */
	, &InvokableCall_3_t2179_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_3_t2179_FieldInfos[] =
{
	&InvokableCall_3_t2179____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_3_t2179_0_0_0;
extern Il2CppType InvokableCall_3_t2179_1_0_0;
struct InvokableCall_3_t2179;
TypeInfo InvokableCall_3_t2179_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`3"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_3_t2179_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_3_t2179_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_3_t2179_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &InvokableCall_3_t2179_0_0_0/* byval_arg */
	, &InvokableCall_3_t2179_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &InvokableCall_3_t2179_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
extern Il2CppGenericContainer InvokableCall_4_t2180_Il2CppGenericContainer;
extern TypeInfo InvokableCall_4_t2180_gp_T1_0_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_4_t2180_gp_T1_0_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_4_t2180_Il2CppGenericContainer, 0}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo InvokableCall_4_t2180_gp_T2_1_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_4_t2180_gp_T2_1_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_4_t2180_Il2CppGenericContainer, 1}, {NULL, "T2", 0, 0, NULL} };
extern TypeInfo InvokableCall_4_t2180_gp_T3_2_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_4_t2180_gp_T3_2_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_4_t2180_Il2CppGenericContainer, 2}, {NULL, "T3", 0, 0, NULL} };
extern TypeInfo InvokableCall_4_t2180_gp_T4_3_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_4_t2180_gp_T4_3_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_4_t2180_Il2CppGenericContainer, 3}, {NULL, "T4", 0, 0, NULL} };
static Il2CppGenericParamFull* InvokableCall_4_t2180_Il2CppGenericParametersArray[4] = 
{
	&InvokableCall_4_t2180_gp_T1_0_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_4_t2180_gp_T2_1_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_4_t2180_gp_T3_2_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_4_t2180_gp_T4_3_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo InvokableCall_4_t2180_il2cpp_TypeInfo;
Il2CppGenericContainer InvokableCall_4_t2180_Il2CppGenericContainer = { { NULL, NULL }, NULL, &InvokableCall_4_t2180_il2cpp_TypeInfo, 4, 0, InvokableCall_4_t2180_Il2CppGenericParametersArray };
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo InvokableCall_4_t2180_InvokableCall_4__ctor_m5429_ParameterInfos[] = 
{
	{"target", 0, 134219042, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219043, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`4::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_4__ctor_m5429_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &InvokableCall_4_t2180_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_4_t2180_InvokableCall_4__ctor_m5429_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1296/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t315_0_0_0;
static ParameterInfo InvokableCall_4_t2180_InvokableCall_4_Invoke_m5430_ParameterInfos[] = 
{
	{"args", 0, 134219044, &EmptyCustomAttributesCache, &ObjectU5BU5D_t315_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`4::Invoke(System.Object[])
MethodInfo InvokableCall_4_Invoke_m5430_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &InvokableCall_4_t2180_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_4_t2180_InvokableCall_4_Invoke_m5430_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1297/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo InvokableCall_4_t2180_InvokableCall_4_Find_m5431_ParameterInfos[] = 
{
	{"targetObj", 0, 134219045, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219046, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
// System.Boolean UnityEngine.Events.InvokableCall`4::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_4_Find_m5431_MethodInfo = 
{
	"Find"/* name */
	, NULL/* method */
	, &InvokableCall_4_t2180_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_4_t2180_InvokableCall_4_Find_m5431_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1298/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* InvokableCall_4_t2180_MethodInfos[] =
{
	&InvokableCall_4__ctor_m5429_MethodInfo,
	&InvokableCall_4_Invoke_m5430_MethodInfo,
	&InvokableCall_4_Find_m5431_MethodInfo,
	NULL
};
extern Il2CppType UnityAction_4_t2273_0_0_1;
FieldInfo InvokableCall_4_t2180____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_4_t2273_0_0_1/* type */
	, &InvokableCall_4_t2180_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_4_t2180_FieldInfos[] =
{
	&InvokableCall_4_t2180____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_4_t2180_0_0_0;
extern Il2CppType InvokableCall_4_t2180_1_0_0;
struct InvokableCall_4_t2180;
TypeInfo InvokableCall_4_t2180_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`4"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_4_t2180_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_4_t2180_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_4_t2180_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &InvokableCall_4_t2180_0_0_0/* byval_arg */
	, &InvokableCall_4_t2180_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &InvokableCall_4_t2180_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
extern Il2CppGenericContainer CachedInvokableCall_1_t2181_Il2CppGenericContainer;
extern TypeInfo CachedInvokableCall_1_t2181_gp_T_0_il2cpp_TypeInfo;
Il2CppGenericParamFull CachedInvokableCall_1_t2181_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { { &CachedInvokableCall_1_t2181_Il2CppGenericContainer, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* CachedInvokableCall_1_t2181_Il2CppGenericParametersArray[1] = 
{
	&CachedInvokableCall_1_t2181_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo CachedInvokableCall_1_t2181_il2cpp_TypeInfo;
Il2CppGenericContainer CachedInvokableCall_1_t2181_Il2CppGenericContainer = { { NULL, NULL }, NULL, &CachedInvokableCall_1_t2181_il2cpp_TypeInfo, 1, 0, CachedInvokableCall_1_t2181_Il2CppGenericParametersArray };
extern Il2CppType Object_t207_0_0_0;
extern Il2CppType Object_t207_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
extern Il2CppType CachedInvokableCall_1_t2181_gp_0_0_0_0;
extern Il2CppType CachedInvokableCall_1_t2181_gp_0_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2181_CachedInvokableCall_1__ctor_m5432_ParameterInfos[] = 
{
	{"target", 0, 134219047, &EmptyCustomAttributesCache, &Object_t207_0_0_0},
	{"theFunction", 1, 134219048, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
	{"argument", 2, 134219049, &EmptyCustomAttributesCache, &CachedInvokableCall_1_t2181_gp_0_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.CachedInvokableCall`1::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m5432_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &CachedInvokableCall_1_t2181_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, CachedInvokableCall_1_t2181_CachedInvokableCall_1__ctor_m5432_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1299/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t315_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2181_CachedInvokableCall_1_Invoke_m5433_ParameterInfos[] = 
{
	{"args", 0, 134219050, &EmptyCustomAttributesCache, &ObjectU5BU5D_t315_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.CachedInvokableCall`1::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m5433_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &CachedInvokableCall_1_t2181_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, CachedInvokableCall_1_t2181_CachedInvokableCall_1_Invoke_m5433_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1300/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CachedInvokableCall_1_t2181_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m5432_MethodInfo,
	&CachedInvokableCall_1_Invoke_m5433_MethodInfo,
	NULL
};
extern Il2CppType ObjectU5BU5D_t315_0_0_33;
FieldInfo CachedInvokableCall_1_t2181____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t315_0_0_33/* type */
	, &CachedInvokableCall_1_t2181_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t2181_FieldInfos[] =
{
	&CachedInvokableCall_1_t2181____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t2181_0_0_0;
extern Il2CppType CachedInvokableCall_1_t2181_1_0_0;
struct CachedInvokableCall_1_t2181;
TypeInfo CachedInvokableCall_1_t2181_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t2181_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t2181_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t2181_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &CachedInvokableCall_1_t2181_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t2181_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &CachedInvokableCall_1_t2181_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEventCallState_t2182_il2cpp_TypeInfo;



// Metadata Definition UnityEngine.Events.UnityEventCallState
extern Il2CppType Int32_t23_0_0_1542;
FieldInfo UnityEventCallState_t2182____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t23_0_0_1542/* type */
	, &UnityEventCallState_t2182_il2cpp_TypeInfo/* parent */
	, offsetof(UnityEventCallState_t2182, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UnityEventCallState_t2182_0_0_32854;
FieldInfo UnityEventCallState_t2182____Off_2_FieldInfo = 
{
	"Off"/* name */
	, &UnityEventCallState_t2182_0_0_32854/* type */
	, &UnityEventCallState_t2182_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UnityEventCallState_t2182_0_0_32854;
FieldInfo UnityEventCallState_t2182____EditorAndRuntime_3_FieldInfo = 
{
	"EditorAndRuntime"/* name */
	, &UnityEventCallState_t2182_0_0_32854/* type */
	, &UnityEventCallState_t2182_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UnityEventCallState_t2182_0_0_32854;
FieldInfo UnityEventCallState_t2182____RuntimeOnly_4_FieldInfo = 
{
	"RuntimeOnly"/* name */
	, &UnityEventCallState_t2182_0_0_32854/* type */
	, &UnityEventCallState_t2182_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityEventCallState_t2182_FieldInfos[] =
{
	&UnityEventCallState_t2182____value___1_FieldInfo,
	&UnityEventCallState_t2182____Off_2_FieldInfo,
	&UnityEventCallState_t2182____EditorAndRuntime_3_FieldInfo,
	&UnityEventCallState_t2182____RuntimeOnly_4_FieldInfo,
	NULL
};
static const int32_t UnityEventCallState_t2182____Off_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry UnityEventCallState_t2182____Off_2_DefaultValue = 
{
	&UnityEventCallState_t2182____Off_2_FieldInfo/* field */
	, { (char*)&UnityEventCallState_t2182____Off_2_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t UnityEventCallState_t2182____EditorAndRuntime_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry UnityEventCallState_t2182____EditorAndRuntime_3_DefaultValue = 
{
	&UnityEventCallState_t2182____EditorAndRuntime_3_FieldInfo/* field */
	, { (char*)&UnityEventCallState_t2182____EditorAndRuntime_3_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t UnityEventCallState_t2182____RuntimeOnly_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry UnityEventCallState_t2182____RuntimeOnly_4_DefaultValue = 
{
	&UnityEventCallState_t2182____RuntimeOnly_4_FieldInfo/* field */
	, { (char*)&UnityEventCallState_t2182____RuntimeOnly_4_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UnityEventCallState_t2182_FieldDefaultValues[] = 
{
	&UnityEventCallState_t2182____Off_2_DefaultValue,
	&UnityEventCallState_t2182____EditorAndRuntime_3_DefaultValue,
	&UnityEventCallState_t2182____RuntimeOnly_4_DefaultValue,
	NULL
};
static MethodInfo* UnityEventCallState_t2182_MethodInfos[] =
{
	NULL
};
static MethodInfo* UnityEventCallState_t2182_VTable[] =
{
	&Enum_Equals_m1284_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Enum_GetHashCode_m1285_MethodInfo,
	&Enum_ToString_m1286_MethodInfo,
	&Enum_ToString_m1287_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1288_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1289_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1290_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1291_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1292_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1293_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1294_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1295_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1296_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1297_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1298_MethodInfo,
	&Enum_ToString_m1299_MethodInfo,
	&Enum_System_IConvertible_ToType_m1300_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1301_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1302_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1303_MethodInfo,
	&Enum_CompareTo_m1304_MethodInfo,
	&Enum_GetTypeCode_m1305_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityEventCallState_t2182_InterfacesOffsets[] = 
{
	{ &IFormattable_t289_il2cpp_TypeInfo, 4},
	{ &IConvertible_t290_il2cpp_TypeInfo, 5},
	{ &IComparable_t291_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityEventCallState_t2182_0_0_0;
extern Il2CppType UnityEventCallState_t2182_1_0_0;
TypeInfo UnityEventCallState_t2182_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEventCallState"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEventCallState_t2182_MethodInfos/* methods */
	, NULL/* properties */
	, UnityEventCallState_t2182_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t293_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Int32_t23_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityEventCallState_t2182_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t23_il2cpp_TypeInfo/* cast_class */
	, &UnityEventCallState_t2182_0_0_0/* byval_arg */
	, &UnityEventCallState_t2182_1_0_0/* this_arg */
	, UnityEventCallState_t2182_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UnityEventCallState_t2182_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityEventCallState_t2182)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentCall_t2183_il2cpp_TypeInfo;

extern TypeInfo UnityEventBase_t2184_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t517_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t2275_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t2276_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t2277_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t2278_il2cpp_TypeInfo;
extern TypeInfo Object_t207_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t508_il2cpp_TypeInfo;
extern TypeInfo ConstructorInfo_t520_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t315_il2cpp_TypeInfo;
extern Il2CppType CachedInvokableCall_1_t2181_0_0_0;
extern MethodInfo PersistentCall_get_target_m5251_MethodInfo;
extern MethodInfo Object_op_Inequality_m1336_MethodInfo;
extern MethodInfo PersistentCall_get_methodName_m5252_MethodInfo;
extern MethodInfo String_IsNullOrEmpty_m1807_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_m5267_MethodInfo;
extern MethodInfo UnityEventBase_GetDelegate_m5434_MethodInfo;
extern MethodInfo PersistentCall_GetObjectCall_m5257_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m5435_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m5436_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m5437_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m5438_MethodInfo;
extern MethodInfo Type_GetType_m5439_MethodInfo;
extern MethodInfo Type_MakeGenericType_m5440_MethodInfo;
extern MethodInfo Type_GetConstructor_m5441_MethodInfo;
extern MethodInfo Object_GetType_m1462_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m5442_MethodInfo;
extern MethodInfo ConstructorInfo_Invoke_m5443_MethodInfo;


// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern MethodInfo PersistentCall__ctor_m5250_MethodInfo;
 void PersistentCall__ctor_m5250 (PersistentCall_t2183 * __this, MethodInfo* method){
	{
		ArgumentCache_t2174 * L_0 = (ArgumentCache_t2174 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentCache_t2174_il2cpp_TypeInfo));
		ArgumentCache__ctor_m5237(L_0, /*hidden argument*/&ArgumentCache__ctor_m5237_MethodInfo);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m1366(__this, /*hidden argument*/&Object__ctor_m1366_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
 Object_t207 * PersistentCall_get_target_m5251 (PersistentCall_t2183 * __this, MethodInfo* method){
	{
		Object_t207 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
 String_t* PersistentCall_get_methodName_m5252 (PersistentCall_t2183 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern MethodInfo PersistentCall_get_mode_m5253_MethodInfo;
 int32_t PersistentCall_get_mode_m5253 (PersistentCall_t2183 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern MethodInfo PersistentCall_get_arguments_m5254_MethodInfo;
 ArgumentCache_t2174 * PersistentCall_get_arguments_m5254 (PersistentCall_t2183 * __this, MethodInfo* method){
	{
		ArgumentCache_t2174 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern MethodInfo PersistentCall_IsValid_m5255_MethodInfo;
 bool PersistentCall_IsValid_m5255 (PersistentCall_t2183 * __this, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		Object_t207 * L_0 = PersistentCall_get_target_m5251(__this, /*hidden argument*/&PersistentCall_get_target_m5251_MethodInfo);
		bool L_1 = Object_op_Inequality_m1336(NULL /*static, unused*/, L_0, (Object_t207 *)NULL, /*hidden argument*/&Object_op_Inequality_m1336_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m5252(__this, /*hidden argument*/&PersistentCall_get_methodName_m5252_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_IsNullOrEmpty_m1807(NULL /*static, unused*/, L_2, /*hidden argument*/&String_IsNullOrEmpty_m1807_MethodInfo);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern MethodInfo PersistentCall_GetRuntimeCall_m5256_MethodInfo;
 BaseInvokableCall_t2175 * PersistentCall_GetRuntimeCall_m5256 (PersistentCall_t2183 * __this, UnityEventBase_t2184 * ___theEvent, MethodInfo* method){
	MethodInfo_t517 * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->___m_CallState_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		if (___theEvent)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t2175 *)NULL;
	}

IL_0013:
	{
		NullCheck(___theEvent);
		MethodInfo_t517 * L_1 = UnityEventBase_FindMethod_m5267(___theEvent, __this, /*hidden argument*/&UnityEventBase_FindMethod_m5267_MethodInfo);
		V_0 = L_1;
		if (V_0)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t2175 *)NULL;
	}

IL_0023:
	{
		int32_t L_2 = (__this->___m_Mode_2);
		V_1 = L_2;
		if (V_1 == 0)
		{
			goto IL_0051;
		}
		if (V_1 == 1)
		{
			goto IL_00d2;
		}
		if (V_1 == 2)
		{
			goto IL_005f;
		}
		if (V_1 == 3)
		{
			goto IL_008a;
		}
		if (V_1 == 4)
		{
			goto IL_0072;
		}
		if (V_1 == 5)
		{
			goto IL_00a2;
		}
		if (V_1 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		Object_t207 * L_3 = PersistentCall_get_target_m5251(__this, /*hidden argument*/&PersistentCall_get_target_m5251_MethodInfo);
		NullCheck(___theEvent);
		BaseInvokableCall_t2175 * L_4 = (BaseInvokableCall_t2175 *)VirtFuncInvoker2< BaseInvokableCall_t2175 *, Object_t *, MethodInfo_t517 * >::Invoke(&UnityEventBase_GetDelegate_m5434_MethodInfo, ___theEvent, L_3, V_0);
		return L_4;
	}

IL_005f:
	{
		Object_t207 * L_5 = PersistentCall_get_target_m5251(__this, /*hidden argument*/&PersistentCall_get_target_m5251_MethodInfo);
		ArgumentCache_t2174 * L_6 = (__this->___m_Arguments_3);
		BaseInvokableCall_t2175 * L_7 = PersistentCall_GetObjectCall_m5257(NULL /*static, unused*/, L_5, V_0, L_6, /*hidden argument*/&PersistentCall_GetObjectCall_m5257_MethodInfo);
		return L_7;
	}

IL_0072:
	{
		Object_t207 * L_8 = PersistentCall_get_target_m5251(__this, /*hidden argument*/&PersistentCall_get_target_m5251_MethodInfo);
		ArgumentCache_t2174 * L_9 = (__this->___m_Arguments_3);
		NullCheck(L_9);
		float L_10 = ArgumentCache_get_floatArgument_m5241(L_9, /*hidden argument*/&ArgumentCache_get_floatArgument_m5241_MethodInfo);
		CachedInvokableCall_1_t2275 * L_11 = (CachedInvokableCall_1_t2275 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CachedInvokableCall_1_t2275_il2cpp_TypeInfo));
		CachedInvokableCall_1__ctor_m5435(L_11, L_8, V_0, L_10, /*hidden argument*/&CachedInvokableCall_1__ctor_m5435_MethodInfo);
		return L_11;
	}

IL_008a:
	{
		Object_t207 * L_12 = PersistentCall_get_target_m5251(__this, /*hidden argument*/&PersistentCall_get_target_m5251_MethodInfo);
		ArgumentCache_t2174 * L_13 = (__this->___m_Arguments_3);
		NullCheck(L_13);
		int32_t L_14 = ArgumentCache_get_intArgument_m5240(L_13, /*hidden argument*/&ArgumentCache_get_intArgument_m5240_MethodInfo);
		CachedInvokableCall_1_t2276 * L_15 = (CachedInvokableCall_1_t2276 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CachedInvokableCall_1_t2276_il2cpp_TypeInfo));
		CachedInvokableCall_1__ctor_m5436(L_15, L_12, V_0, L_14, /*hidden argument*/&CachedInvokableCall_1__ctor_m5436_MethodInfo);
		return L_15;
	}

IL_00a2:
	{
		Object_t207 * L_16 = PersistentCall_get_target_m5251(__this, /*hidden argument*/&PersistentCall_get_target_m5251_MethodInfo);
		ArgumentCache_t2174 * L_17 = (__this->___m_Arguments_3);
		NullCheck(L_17);
		String_t* L_18 = ArgumentCache_get_stringArgument_m5242(L_17, /*hidden argument*/&ArgumentCache_get_stringArgument_m5242_MethodInfo);
		CachedInvokableCall_1_t2277 * L_19 = (CachedInvokableCall_1_t2277 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CachedInvokableCall_1_t2277_il2cpp_TypeInfo));
		CachedInvokableCall_1__ctor_m5437(L_19, L_16, V_0, L_18, /*hidden argument*/&CachedInvokableCall_1__ctor_m5437_MethodInfo);
		return L_19;
	}

IL_00ba:
	{
		Object_t207 * L_20 = PersistentCall_get_target_m5251(__this, /*hidden argument*/&PersistentCall_get_target_m5251_MethodInfo);
		ArgumentCache_t2174 * L_21 = (__this->___m_Arguments_3);
		NullCheck(L_21);
		bool L_22 = ArgumentCache_get_boolArgument_m5243(L_21, /*hidden argument*/&ArgumentCache_get_boolArgument_m5243_MethodInfo);
		CachedInvokableCall_1_t2278 * L_23 = (CachedInvokableCall_1_t2278 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CachedInvokableCall_1_t2278_il2cpp_TypeInfo));
		CachedInvokableCall_1__ctor_m5438(L_23, L_20, V_0, L_22, /*hidden argument*/&CachedInvokableCall_1__ctor_m5438_MethodInfo);
		return L_23;
	}

IL_00d2:
	{
		Object_t207 * L_24 = PersistentCall_get_target_m5251(__this, /*hidden argument*/&PersistentCall_get_target_m5251_MethodInfo);
		InvokableCall_t2176 * L_25 = (InvokableCall_t2176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCall_t2176_il2cpp_TypeInfo));
		InvokableCall__ctor_m5247(L_25, L_24, V_0, /*hidden argument*/&InvokableCall__ctor_m5247_MethodInfo);
		return L_25;
	}

IL_00df:
	{
		return (BaseInvokableCall_t2175 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
 BaseInvokableCall_t2175 * PersistentCall_GetObjectCall_m5257 (Object_t * __this/* static, unused */, Object_t207 * ___target, MethodInfo_t517 * ___method, ArgumentCache_t2174 * ___arguments, MethodInfo* method){
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t520 * V_3 = {0};
	Object_t207 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m1586(NULL /*static, unused*/, LoadTypeToken(&Object_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1586_MethodInfo);
		V_0 = L_0;
		NullCheck(___arguments);
		String_t* L_1 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5239(___arguments, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5239_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_2 = String_IsNullOrEmpty_m1807(NULL /*static, unused*/, L_1, /*hidden argument*/&String_IsNullOrEmpty_m1807_MethodInfo);
		if (L_2)
		{
			goto IL_0039;
		}
	}
	{
		NullCheck(___arguments);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5239(___arguments, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5239_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_4 = Type_GetType_m5439(NULL /*static, unused*/, L_3, 0, /*hidden argument*/&Type_GetType_m5439_MethodInfo);
		Type_t * L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_6 = Type_GetTypeFromHandle_m1586(NULL /*static, unused*/, LoadTypeToken(&Object_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1586_MethodInfo);
		G_B3_0 = L_6;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_7 = Type_GetTypeFromHandle_m1586(NULL /*static, unused*/, LoadTypeToken(&CachedInvokableCall_1_t2181_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1586_MethodInfo);
		V_1 = L_7;
		TypeU5BU5D_t508* L_8 = ((TypeU5BU5D_t508*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t508_il2cpp_TypeInfo), 1));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, V_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_8, 0)) = (Type_t *)V_0;
		NullCheck(V_1);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t508* >::Invoke(&Type_MakeGenericType_m5440_MethodInfo, V_1, L_8);
		V_2 = L_9;
		TypeU5BU5D_t508* L_10 = ((TypeU5BU5D_t508*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t508_il2cpp_TypeInfo), 3));
		Type_t * L_11 = Type_GetTypeFromHandle_m1586(NULL /*static, unused*/, LoadTypeToken(&Object_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1586_MethodInfo);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0)) = (Type_t *)L_11;
		TypeU5BU5D_t508* L_12 = L_10;
		Type_t * L_13 = Type_GetTypeFromHandle_m1586(NULL /*static, unused*/, LoadTypeToken(&MethodInfo_t517_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1586_MethodInfo);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		ArrayElementTypeCheck (L_12, L_13);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_12, 1)) = (Type_t *)L_13;
		TypeU5BU5D_t508* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
		ArrayElementTypeCheck (L_14, V_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_14, 2)) = (Type_t *)V_0;
		NullCheck(V_2);
		ConstructorInfo_t520 * L_15 = (ConstructorInfo_t520 *)VirtFuncInvoker1< ConstructorInfo_t520 *, TypeU5BU5D_t508* >::Invoke(&Type_GetConstructor_m5441_MethodInfo, V_2, L_14);
		V_3 = L_15;
		NullCheck(___arguments);
		Object_t207 * L_16 = ArgumentCache_get_unityObjectArgument_m5238(___arguments, /*hidden argument*/&ArgumentCache_get_unityObjectArgument_m5238_MethodInfo);
		V_4 = L_16;
		bool L_17 = Object_op_Inequality_m1336(NULL /*static, unused*/, V_4, (Object_t207 *)NULL, /*hidden argument*/&Object_op_Inequality_m1336_MethodInfo);
		if (!L_17)
		{
			goto IL_00aa;
		}
	}
	{
		NullCheck(V_4);
		Type_t * L_18 = Object_GetType_m1462(V_4, /*hidden argument*/&Object_GetType_m1462_MethodInfo);
		NullCheck(V_0);
		bool L_19 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m5442_MethodInfo, V_0, L_18);
		if (L_19)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t207 *)NULL;
	}

IL_00aa:
	{
		ObjectU5BU5D_t315* L_20 = ((ObjectU5BU5D_t315*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t315_il2cpp_TypeInfo), 3));
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, ___target);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 0)) = (Object_t *)___target;
		ObjectU5BU5D_t315* L_21 = L_20;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 1);
		ArrayElementTypeCheck (L_21, ___method);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 1)) = (Object_t *)___method;
		ObjectU5BU5D_t315* L_22 = L_21;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 2);
		ArrayElementTypeCheck (L_22, V_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_22, 2)) = (Object_t *)V_4;
		NullCheck(V_3);
		Object_t * L_23 = ConstructorInfo_Invoke_m5443(V_3, L_22, /*hidden argument*/&ConstructorInfo_Invoke_m5443_MethodInfo);
		return ((BaseInvokableCall_t2175 *)IsInst(L_23, InitializedTypeInfo(&BaseInvokableCall_t2175_il2cpp_TypeInfo)));
	}
}
// Metadata Definition UnityEngine.Events.PersistentCall
extern Il2CppType Object_t207_0_0_1;
extern CustomAttributesCache PersistentCall_t2183__CustomAttributeCache_m_Target;
FieldInfo PersistentCall_t2183____m_Target_0_FieldInfo = 
{
	"m_Target"/* name */
	, &Object_t207_0_0_1/* type */
	, &PersistentCall_t2183_il2cpp_TypeInfo/* parent */
	, offsetof(PersistentCall_t2183, ___m_Target_0)/* data */
	, &PersistentCall_t2183__CustomAttributeCache_m_Target/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
extern CustomAttributesCache PersistentCall_t2183__CustomAttributeCache_m_MethodName;
FieldInfo PersistentCall_t2183____m_MethodName_1_FieldInfo = 
{
	"m_MethodName"/* name */
	, &String_t_0_0_1/* type */
	, &PersistentCall_t2183_il2cpp_TypeInfo/* parent */
	, offsetof(PersistentCall_t2183, ___m_MethodName_1)/* data */
	, &PersistentCall_t2183__CustomAttributeCache_m_MethodName/* custom_attributes_cache */

};
extern Il2CppType PersistentListenerMode_t2173_0_0_1;
extern CustomAttributesCache PersistentCall_t2183__CustomAttributeCache_m_Mode;
FieldInfo PersistentCall_t2183____m_Mode_2_FieldInfo = 
{
	"m_Mode"/* name */
	, &PersistentListenerMode_t2173_0_0_1/* type */
	, &PersistentCall_t2183_il2cpp_TypeInfo/* parent */
	, offsetof(PersistentCall_t2183, ___m_Mode_2)/* data */
	, &PersistentCall_t2183__CustomAttributeCache_m_Mode/* custom_attributes_cache */

};
extern Il2CppType ArgumentCache_t2174_0_0_1;
extern CustomAttributesCache PersistentCall_t2183__CustomAttributeCache_m_Arguments;
FieldInfo PersistentCall_t2183____m_Arguments_3_FieldInfo = 
{
	"m_Arguments"/* name */
	, &ArgumentCache_t2174_0_0_1/* type */
	, &PersistentCall_t2183_il2cpp_TypeInfo/* parent */
	, offsetof(PersistentCall_t2183, ___m_Arguments_3)/* data */
	, &PersistentCall_t2183__CustomAttributeCache_m_Arguments/* custom_attributes_cache */

};
extern Il2CppType UnityEventCallState_t2182_0_0_1;
extern CustomAttributesCache PersistentCall_t2183__CustomAttributeCache_m_CallState;
FieldInfo PersistentCall_t2183____m_CallState_4_FieldInfo = 
{
	"m_CallState"/* name */
	, &UnityEventCallState_t2182_0_0_1/* type */
	, &PersistentCall_t2183_il2cpp_TypeInfo/* parent */
	, offsetof(PersistentCall_t2183, ___m_CallState_4)/* data */
	, &PersistentCall_t2183__CustomAttributeCache_m_CallState/* custom_attributes_cache */

};
static FieldInfo* PersistentCall_t2183_FieldInfos[] =
{
	&PersistentCall_t2183____m_Target_0_FieldInfo,
	&PersistentCall_t2183____m_MethodName_1_FieldInfo,
	&PersistentCall_t2183____m_Mode_2_FieldInfo,
	&PersistentCall_t2183____m_Arguments_3_FieldInfo,
	&PersistentCall_t2183____m_CallState_4_FieldInfo,
	NULL
};
static PropertyInfo PersistentCall_t2183____target_PropertyInfo = 
{
	&PersistentCall_t2183_il2cpp_TypeInfo/* parent */
	, "target"/* name */
	, &PersistentCall_get_target_m5251_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo PersistentCall_t2183____methodName_PropertyInfo = 
{
	&PersistentCall_t2183_il2cpp_TypeInfo/* parent */
	, "methodName"/* name */
	, &PersistentCall_get_methodName_m5252_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo PersistentCall_t2183____mode_PropertyInfo = 
{
	&PersistentCall_t2183_il2cpp_TypeInfo/* parent */
	, "mode"/* name */
	, &PersistentCall_get_mode_m5253_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo PersistentCall_t2183____arguments_PropertyInfo = 
{
	&PersistentCall_t2183_il2cpp_TypeInfo/* parent */
	, "arguments"/* name */
	, &PersistentCall_get_arguments_m5254_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* PersistentCall_t2183_PropertyInfos[] =
{
	&PersistentCall_t2183____target_PropertyInfo,
	&PersistentCall_t2183____methodName_PropertyInfo,
	&PersistentCall_t2183____mode_PropertyInfo,
	&PersistentCall_t2183____arguments_PropertyInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.PersistentCall::.ctor()
MethodInfo PersistentCall__ctor_m5250_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PersistentCall__ctor_m5250/* method */
	, &PersistentCall_t2183_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1301/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t207_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
MethodInfo PersistentCall_get_target_m5251_MethodInfo = 
{
	"get_target"/* name */
	, (methodPointerType)&PersistentCall_get_target_m5251/* method */
	, &PersistentCall_t2183_il2cpp_TypeInfo/* declaring_type */
	, &Object_t207_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1302/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Events.PersistentCall::get_methodName()
MethodInfo PersistentCall_get_methodName_m5252_MethodInfo = 
{
	"get_methodName"/* name */
	, (methodPointerType)&PersistentCall_get_methodName_m5252/* method */
	, &PersistentCall_t2183_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1303/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType PersistentListenerMode_t2173_0_0_0;
extern void* RuntimeInvoker_PersistentListenerMode_t2173 (MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
MethodInfo PersistentCall_get_mode_m5253_MethodInfo = 
{
	"get_mode"/* name */
	, (methodPointerType)&PersistentCall_get_mode_m5253/* method */
	, &PersistentCall_t2183_il2cpp_TypeInfo/* declaring_type */
	, &PersistentListenerMode_t2173_0_0_0/* return_type */
	, RuntimeInvoker_PersistentListenerMode_t2173/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1304/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ArgumentCache_t2174_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
MethodInfo PersistentCall_get_arguments_m5254_MethodInfo = 
{
	"get_arguments"/* name */
	, (methodPointerType)&PersistentCall_get_arguments_m5254/* method */
	, &PersistentCall_t2183_il2cpp_TypeInfo/* declaring_type */
	, &ArgumentCache_t2174_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1305/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
MethodInfo PersistentCall_IsValid_m5255_MethodInfo = 
{
	"IsValid"/* name */
	, (methodPointerType)&PersistentCall_IsValid_m5255/* method */
	, &PersistentCall_t2183_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1306/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityEventBase_t2184_0_0_0;
extern Il2CppType UnityEventBase_t2184_0_0_0;
static ParameterInfo PersistentCall_t2183_PersistentCall_GetRuntimeCall_m5256_ParameterInfos[] = 
{
	{"theEvent", 0, 134219051, &EmptyCustomAttributesCache, &UnityEventBase_t2184_0_0_0},
};
extern Il2CppType BaseInvokableCall_t2175_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
MethodInfo PersistentCall_GetRuntimeCall_m5256_MethodInfo = 
{
	"GetRuntimeCall"/* name */
	, (methodPointerType)&PersistentCall_GetRuntimeCall_m5256/* method */
	, &PersistentCall_t2183_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t2175_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PersistentCall_t2183_PersistentCall_GetRuntimeCall_m5256_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1307/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t207_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
extern Il2CppType ArgumentCache_t2174_0_0_0;
static ParameterInfo PersistentCall_t2183_PersistentCall_GetObjectCall_m5257_ParameterInfos[] = 
{
	{"target", 0, 134219052, &EmptyCustomAttributesCache, &Object_t207_0_0_0},
	{"method", 1, 134219053, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
	{"arguments", 2, 134219054, &EmptyCustomAttributesCache, &ArgumentCache_t2174_0_0_0},
};
extern Il2CppType BaseInvokableCall_t2175_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
MethodInfo PersistentCall_GetObjectCall_m5257_MethodInfo = 
{
	"GetObjectCall"/* name */
	, (methodPointerType)&PersistentCall_GetObjectCall_m5257/* method */
	, &PersistentCall_t2183_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t2175_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, PersistentCall_t2183_PersistentCall_GetObjectCall_m5257_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1308/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PersistentCall_t2183_MethodInfos[] =
{
	&PersistentCall__ctor_m5250_MethodInfo,
	&PersistentCall_get_target_m5251_MethodInfo,
	&PersistentCall_get_methodName_m5252_MethodInfo,
	&PersistentCall_get_mode_m5253_MethodInfo,
	&PersistentCall_get_arguments_m5254_MethodInfo,
	&PersistentCall_IsValid_m5255_MethodInfo,
	&PersistentCall_GetRuntimeCall_m5256_MethodInfo,
	&PersistentCall_GetObjectCall_m5257_MethodInfo,
	NULL
};
static MethodInfo* PersistentCall_t2183_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
};
void PersistentCall_t2183_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t300 * tmp;
		tmp = (SerializeField_t300 *)il2cpp_codegen_object_new (&SerializeField_t300_il2cpp_TypeInfo);
		SerializeField__ctor_m1354(tmp, &SerializeField__ctor_m1354_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t299 * tmp;
		tmp = (FormerlySerializedAsAttribute_t299 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m1353(tmp, il2cpp_codegen_string_new_wrapper("instance"), &FormerlySerializedAsAttribute__ctor_m1353_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void PersistentCall_t2183_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t299 * tmp;
		tmp = (FormerlySerializedAsAttribute_t299 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m1353(tmp, il2cpp_codegen_string_new_wrapper("methodName"), &FormerlySerializedAsAttribute__ctor_m1353_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t300 * tmp;
		tmp = (SerializeField_t300 *)il2cpp_codegen_object_new (&SerializeField_t300_il2cpp_TypeInfo);
		SerializeField__ctor_m1354(tmp, &SerializeField__ctor_m1354_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void PersistentCall_t2183_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t299 * tmp;
		tmp = (FormerlySerializedAsAttribute_t299 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m1353(tmp, il2cpp_codegen_string_new_wrapper("mode"), &FormerlySerializedAsAttribute__ctor_m1353_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t300 * tmp;
		tmp = (SerializeField_t300 *)il2cpp_codegen_object_new (&SerializeField_t300_il2cpp_TypeInfo);
		SerializeField__ctor_m1354(tmp, &SerializeField__ctor_m1354_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void PersistentCall_t2183_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t299 * tmp;
		tmp = (FormerlySerializedAsAttribute_t299 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m1353(tmp, il2cpp_codegen_string_new_wrapper("arguments"), &FormerlySerializedAsAttribute__ctor_m1353_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t300 * tmp;
		tmp = (SerializeField_t300 *)il2cpp_codegen_object_new (&SerializeField_t300_il2cpp_TypeInfo);
		SerializeField__ctor_m1354(tmp, &SerializeField__ctor_m1354_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void PersistentCall_t2183_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t299 * tmp;
		tmp = (FormerlySerializedAsAttribute_t299 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m1353(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), &FormerlySerializedAsAttribute__ctor_m1353_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t300 * tmp;
		tmp = (SerializeField_t300 *)il2cpp_codegen_object_new (&SerializeField_t300_il2cpp_TypeInfo);
		SerializeField__ctor_m1354(tmp, &SerializeField__ctor_m1354_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t299 * tmp;
		tmp = (FormerlySerializedAsAttribute_t299 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m1353(tmp, il2cpp_codegen_string_new_wrapper("enabled"), &FormerlySerializedAsAttribute__ctor_m1353_MethodInfo);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache PersistentCall_t2183__CustomAttributeCache_m_Target = {
2,
NULL,
&PersistentCall_t2183_CustomAttributesCacheGenerator_m_Target
};
CustomAttributesCache PersistentCall_t2183__CustomAttributeCache_m_MethodName = {
2,
NULL,
&PersistentCall_t2183_CustomAttributesCacheGenerator_m_MethodName
};
CustomAttributesCache PersistentCall_t2183__CustomAttributeCache_m_Mode = {
2,
NULL,
&PersistentCall_t2183_CustomAttributesCacheGenerator_m_Mode
};
CustomAttributesCache PersistentCall_t2183__CustomAttributeCache_m_Arguments = {
2,
NULL,
&PersistentCall_t2183_CustomAttributesCacheGenerator_m_Arguments
};
CustomAttributesCache PersistentCall_t2183__CustomAttributeCache_m_CallState = {
3,
NULL,
&PersistentCall_t2183_CustomAttributesCacheGenerator_m_CallState
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType PersistentCall_t2183_0_0_0;
extern Il2CppType PersistentCall_t2183_1_0_0;
struct PersistentCall_t2183;
extern CustomAttributesCache PersistentCall_t2183__CustomAttributeCache_m_Target;
extern CustomAttributesCache PersistentCall_t2183__CustomAttributeCache_m_MethodName;
extern CustomAttributesCache PersistentCall_t2183__CustomAttributeCache_m_Mode;
extern CustomAttributesCache PersistentCall_t2183__CustomAttributeCache_m_Arguments;
extern CustomAttributesCache PersistentCall_t2183__CustomAttributeCache_m_CallState;
TypeInfo PersistentCall_t2183_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "PersistentCall"/* name */
	, "UnityEngine.Events"/* namespaze */
	, PersistentCall_t2183_MethodInfos/* methods */
	, PersistentCall_t2183_PropertyInfos/* properties */
	, PersistentCall_t2183_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &PersistentCall_t2183_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, PersistentCall_t2183_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PersistentCall_t2183_il2cpp_TypeInfo/* cast_class */
	, &PersistentCall_t2183_0_0_0/* byval_arg */
	, &PersistentCall_t2183_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PersistentCall_t2183)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 8/* method_count */
	, 4/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentCallGroup_t2186_il2cpp_TypeInfo;

extern TypeInfo List_1_t2185_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t2279_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t31_il2cpp_TypeInfo;
extern MethodInfo List_1__ctor_m5444_MethodInfo;
extern MethodInfo List_1_GetEnumerator_m5445_MethodInfo;
extern MethodInfo Enumerator_get_Current_m5446_MethodInfo;
extern MethodInfo InvokableCallList_AddPersistentInvokableCall_m5261_MethodInfo;
extern MethodInfo Enumerator_MoveNext_m5447_MethodInfo;
extern MethodInfo IDisposable_Dispose_m81_MethodInfo;


// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern MethodInfo PersistentCallGroup__ctor_m5258_MethodInfo;
 void PersistentCallGroup__ctor_m5258 (PersistentCallGroup_t2186 * __this, MethodInfo* method){
	{
		Object__ctor_m1366(__this, /*hidden argument*/&Object__ctor_m1366_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&List_1_t2185_il2cpp_TypeInfo));
		List_1_t2185 * L_0 = (List_1_t2185 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t2185_il2cpp_TypeInfo));
		List_1__ctor_m5444(L_0, /*hidden argument*/&List_1__ctor_m5444_MethodInfo);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern MethodInfo PersistentCallGroup_Initialize_m5259_MethodInfo;
 void PersistentCallGroup_Initialize_m5259 (PersistentCallGroup_t2186 * __this, InvokableCallList_t2187 * ___invokableList, UnityEventBase_t2184 * ___unityEventBase, MethodInfo* method){
	PersistentCall_t2183 * V_0 = {0};
	Enumerator_t2279  V_1 = {0};
	BaseInvokableCall_t2175 * V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t35 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t35 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		List_1_t2185 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		Enumerator_t2279  L_1 = List_1_GetEnumerator_m5445(L_0, /*hidden argument*/&List_1_GetEnumerator_m5445_MethodInfo);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			PersistentCall_t2183 * L_2 = Enumerator_get_Current_m5446((&V_1), /*hidden argument*/&Enumerator_get_Current_m5446_MethodInfo);
			V_0 = L_2;
			NullCheck(V_0);
			bool L_3 = PersistentCall_IsValid_m5255(V_0, /*hidden argument*/&PersistentCall_IsValid_m5255_MethodInfo);
			if (L_3)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			NullCheck(V_0);
			BaseInvokableCall_t2175 * L_4 = PersistentCall_GetRuntimeCall_m5256(V_0, ___unityEventBase, /*hidden argument*/&PersistentCall_GetRuntimeCall_m5256_MethodInfo);
			V_2 = L_4;
			if (!V_2)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			NullCheck(___invokableList);
			InvokableCallList_AddPersistentInvokableCall_m5261(___invokableList, V_2, /*hidden argument*/&InvokableCallList_AddPersistentInvokableCall_m5261_MethodInfo);
		}

IL_003e:
		{
			bool L_5 = Enumerator_MoveNext_m5447((&V_1), /*hidden argument*/&Enumerator_MoveNext_m5447_MethodInfo);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			// IL_004a: leave IL_005b
			leaveInstructions[0] = 0x5B; // 1
			THROW_SENTINEL(IL_005b);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_004f;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t35 *)e.ex;
		goto IL_004f;
	}

IL_004f:
	{ // begin finally (depth: 1)
		Enumerator_t2279  L_6 = V_1;
		Object_t * L_7 = Box(InitializedTypeInfo(&Enumerator_t2279_il2cpp_TypeInfo), &L_6);
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m81_MethodInfo, L_7);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x5B:
				goto IL_005b;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t35 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_005b:
	{
		return;
	}
}
// Metadata Definition UnityEngine.Events.PersistentCallGroup
extern Il2CppType List_1_t2185_0_0_1;
extern CustomAttributesCache PersistentCallGroup_t2186__CustomAttributeCache_m_Calls;
FieldInfo PersistentCallGroup_t2186____m_Calls_0_FieldInfo = 
{
	"m_Calls"/* name */
	, &List_1_t2185_0_0_1/* type */
	, &PersistentCallGroup_t2186_il2cpp_TypeInfo/* parent */
	, offsetof(PersistentCallGroup_t2186, ___m_Calls_0)/* data */
	, &PersistentCallGroup_t2186__CustomAttributeCache_m_Calls/* custom_attributes_cache */

};
static FieldInfo* PersistentCallGroup_t2186_FieldInfos[] =
{
	&PersistentCallGroup_t2186____m_Calls_0_FieldInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
MethodInfo PersistentCallGroup__ctor_m5258_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PersistentCallGroup__ctor_m5258/* method */
	, &PersistentCallGroup_t2186_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1309/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType InvokableCallList_t2187_0_0_0;
extern Il2CppType InvokableCallList_t2187_0_0_0;
extern Il2CppType UnityEventBase_t2184_0_0_0;
static ParameterInfo PersistentCallGroup_t2186_PersistentCallGroup_Initialize_m5259_ParameterInfos[] = 
{
	{"invokableList", 0, 134219055, &EmptyCustomAttributesCache, &InvokableCallList_t2187_0_0_0},
	{"unityEventBase", 1, 134219056, &EmptyCustomAttributesCache, &UnityEventBase_t2184_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
MethodInfo PersistentCallGroup_Initialize_m5259_MethodInfo = 
{
	"Initialize"/* name */
	, (methodPointerType)&PersistentCallGroup_Initialize_m5259/* method */
	, &PersistentCallGroup_t2186_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Object_t/* invoker_method */
	, PersistentCallGroup_t2186_PersistentCallGroup_Initialize_m5259_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1310/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PersistentCallGroup_t2186_MethodInfos[] =
{
	&PersistentCallGroup__ctor_m5258_MethodInfo,
	&PersistentCallGroup_Initialize_m5259_MethodInfo,
	NULL
};
static MethodInfo* PersistentCallGroup_t2186_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
};
void PersistentCallGroup_t2186_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t299 * tmp;
		tmp = (FormerlySerializedAsAttribute_t299 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m1353(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), &FormerlySerializedAsAttribute__ctor_m1353_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t300 * tmp;
		tmp = (SerializeField_t300 *)il2cpp_codegen_object_new (&SerializeField_t300_il2cpp_TypeInfo);
		SerializeField__ctor_m1354(tmp, &SerializeField__ctor_m1354_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache PersistentCallGroup_t2186__CustomAttributeCache_m_Calls = {
2,
NULL,
&PersistentCallGroup_t2186_CustomAttributesCacheGenerator_m_Calls
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType PersistentCallGroup_t2186_0_0_0;
extern Il2CppType PersistentCallGroup_t2186_1_0_0;
struct PersistentCallGroup_t2186;
extern CustomAttributesCache PersistentCallGroup_t2186__CustomAttributeCache_m_Calls;
TypeInfo PersistentCallGroup_t2186_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "PersistentCallGroup"/* name */
	, "UnityEngine.Events"/* namespaze */
	, PersistentCallGroup_t2186_MethodInfos/* methods */
	, NULL/* properties */
	, PersistentCallGroup_t2186_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &PersistentCallGroup_t2186_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, PersistentCallGroup_t2186_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PersistentCallGroup_t2186_il2cpp_TypeInfo/* cast_class */
	, &PersistentCallGroup_t2186_0_0_0/* byval_arg */
	, &PersistentCallGroup_t2186_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PersistentCallGroup_t2186)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCallList_t2187_il2cpp_TypeInfo;

extern TypeInfo List_1_t2188_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t2280_il2cpp_TypeInfo;
extern MethodInfo List_1__ctor_m5448_MethodInfo;
extern MethodInfo List_1_Add_m5449_MethodInfo;
extern MethodInfo List_1_get_Item_m5450_MethodInfo;
extern MethodInfo BaseInvokableCall_Find_m5417_MethodInfo;
extern MethodInfo List_1_get_Count_m5451_MethodInfo;
extern MethodInfo List_1_Contains_m5452_MethodInfo;
extern MethodInfo Predicate_1__ctor_m5453_MethodInfo;
extern MethodInfo List_1_RemoveAll_m5454_MethodInfo;
extern MethodInfo List_1_Clear_m5455_MethodInfo;
extern MethodInfo List_1_AddRange_m5456_MethodInfo;
extern MethodInfo BaseInvokableCall_Invoke_m5415_MethodInfo;


// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern MethodInfo InvokableCallList__ctor_m5260_MethodInfo;
 void InvokableCallList__ctor_m5260 (InvokableCallList_t2187 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&List_1_t2188_il2cpp_TypeInfo));
		List_1_t2188 * L_0 = (List_1_t2188 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t2188_il2cpp_TypeInfo));
		List_1__ctor_m5448(L_0, /*hidden argument*/&List_1__ctor_m5448_MethodInfo);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t2188 * L_1 = (List_1_t2188 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t2188_il2cpp_TypeInfo));
		List_1__ctor_m5448(L_1, /*hidden argument*/&List_1__ctor_m5448_MethodInfo);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t2188 * L_2 = (List_1_t2188 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t2188_il2cpp_TypeInfo));
		List_1__ctor_m5448(L_2, /*hidden argument*/&List_1__ctor_m5448_MethodInfo);
		__this->___m_ExecutingCalls_2 = L_2;
		Object__ctor_m1366(__this, /*hidden argument*/&Object__ctor_m1366_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
 void InvokableCallList_AddPersistentInvokableCall_m5261 (InvokableCallList_t2187 * __this, BaseInvokableCall_t2175 * ___call, MethodInfo* method){
	{
		List_1_t2188 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t2175 * >::Invoke(&List_1_Add_m5449_MethodInfo, L_0, ___call);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern MethodInfo InvokableCallList_AddListener_m5262_MethodInfo;
 void InvokableCallList_AddListener_m5262 (InvokableCallList_t2187 * __this, BaseInvokableCall_t2175 * ___call, MethodInfo* method){
	{
		List_1_t2188 * L_0 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t2175 * >::Invoke(&List_1_Add_m5449_MethodInfo, L_0, ___call);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCallList_RemoveListener_m5263_MethodInfo;
 void InvokableCallList_RemoveListener_m5263 (InvokableCallList_t2187 * __this, Object_t * ___targetObj, MethodInfo_t517 * ___method, MethodInfo* method){
	List_1_t2188 * V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&List_1_t2188_il2cpp_TypeInfo));
		List_1_t2188 * L_0 = (List_1_t2188 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t2188_il2cpp_TypeInfo));
		List_1__ctor_m5448(L_0, /*hidden argument*/&List_1__ctor_m5448_MethodInfo);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t2188 * L_1 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_1);
		BaseInvokableCall_t2175 * L_2 = (BaseInvokableCall_t2175 *)VirtFuncInvoker1< BaseInvokableCall_t2175 *, int32_t >::Invoke(&List_1_get_Item_m5450_MethodInfo, L_1, V_1);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker2< bool, Object_t *, MethodInfo_t517 * >::Invoke(&BaseInvokableCall_Find_m5417_MethodInfo, L_2, ___targetObj, ___method);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t2188 * L_4 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_4);
		BaseInvokableCall_t2175 * L_5 = (BaseInvokableCall_t2175 *)VirtFuncInvoker1< BaseInvokableCall_t2175 *, int32_t >::Invoke(&List_1_get_Item_m5450_MethodInfo, L_4, V_1);
		NullCheck(V_0);
		VirtActionInvoker1< BaseInvokableCall_t2175 * >::Invoke(&List_1_Add_m5449_MethodInfo, V_0, L_5);
	}

IL_0037:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_003b:
	{
		List_1_t2188 * L_6 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&List_1_get_Count_m5451_MethodInfo, L_6);
		if ((((int32_t)V_1) < ((int32_t)L_7)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t2188 * L_8 = (__this->___m_RuntimeCalls_1);
		List_1_t2188 * L_9 = V_0;
		IntPtr_t34 L_10 = { GetVirtualMethodInfo(L_9, &List_1_Contains_m5452_MethodInfo) };
		Predicate_1_t2280 * L_11 = (Predicate_1_t2280 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Predicate_1_t2280_il2cpp_TypeInfo));
		Predicate_1__ctor_m5453(L_11, L_9, L_10, /*hidden argument*/&Predicate_1__ctor_m5453_MethodInfo);
		NullCheck(L_8);
		List_1_RemoveAll_m5454(L_8, L_11, /*hidden argument*/&List_1_RemoveAll_m5454_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern MethodInfo InvokableCallList_ClearPersistent_m5264_MethodInfo;
 void InvokableCallList_ClearPersistent_m5264 (InvokableCallList_t2187 * __this, MethodInfo* method){
	{
		List_1_t2188 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(&List_1_Clear_m5455_MethodInfo, L_0);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern MethodInfo InvokableCallList_Invoke_m5265_MethodInfo;
 void InvokableCallList_Invoke_m5265 (InvokableCallList_t2187 * __this, ObjectU5BU5D_t315* ___parameters, MethodInfo* method){
	int32_t V_0 = 0;
	{
		List_1_t2188 * L_0 = (__this->___m_ExecutingCalls_2);
		List_1_t2188 * L_1 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		List_1_AddRange_m5456(L_0, L_1, /*hidden argument*/&List_1_AddRange_m5456_MethodInfo);
		List_1_t2188 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t2188 * L_3 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_2);
		List_1_AddRange_m5456(L_2, L_3, /*hidden argument*/&List_1_AddRange_m5456_MethodInfo);
		V_0 = 0;
		goto IL_003f;
	}

IL_0029:
	{
		List_1_t2188 * L_4 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_4);
		BaseInvokableCall_t2175 * L_5 = (BaseInvokableCall_t2175 *)VirtFuncInvoker1< BaseInvokableCall_t2175 *, int32_t >::Invoke(&List_1_get_Item_m5450_MethodInfo, L_4, V_0);
		NullCheck(L_5);
		VirtActionInvoker1< ObjectU5BU5D_t315* >::Invoke(&BaseInvokableCall_Invoke_m5415_MethodInfo, L_5, ___parameters);
		V_0 = ((int32_t)(V_0+1));
	}

IL_003f:
	{
		List_1_t2188 * L_6 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&List_1_get_Count_m5451_MethodInfo, L_6);
		if ((((int32_t)V_0) < ((int32_t)L_7)))
		{
			goto IL_0029;
		}
	}
	{
		List_1_t2188 * L_8 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(&List_1_Clear_m5455_MethodInfo, L_8);
		return;
	}
}
// Metadata Definition UnityEngine.Events.InvokableCallList
extern Il2CppType List_1_t2188_0_0_33;
FieldInfo InvokableCallList_t2187____m_PersistentCalls_0_FieldInfo = 
{
	"m_PersistentCalls"/* name */
	, &List_1_t2188_0_0_33/* type */
	, &InvokableCallList_t2187_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCallList_t2187, ___m_PersistentCalls_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType List_1_t2188_0_0_33;
FieldInfo InvokableCallList_t2187____m_RuntimeCalls_1_FieldInfo = 
{
	"m_RuntimeCalls"/* name */
	, &List_1_t2188_0_0_33/* type */
	, &InvokableCallList_t2187_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCallList_t2187, ___m_RuntimeCalls_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType List_1_t2188_0_0_33;
FieldInfo InvokableCallList_t2187____m_ExecutingCalls_2_FieldInfo = 
{
	"m_ExecutingCalls"/* name */
	, &List_1_t2188_0_0_33/* type */
	, &InvokableCallList_t2187_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCallList_t2187, ___m_ExecutingCalls_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCallList_t2187_FieldInfos[] =
{
	&InvokableCallList_t2187____m_PersistentCalls_0_FieldInfo,
	&InvokableCallList_t2187____m_RuntimeCalls_1_FieldInfo,
	&InvokableCallList_t2187____m_ExecutingCalls_2_FieldInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
MethodInfo InvokableCallList__ctor_m5260_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCallList__ctor_m5260/* method */
	, &InvokableCallList_t2187_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1311/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType BaseInvokableCall_t2175_0_0_0;
static ParameterInfo InvokableCallList_t2187_InvokableCallList_AddPersistentInvokableCall_m5261_ParameterInfos[] = 
{
	{"call", 0, 134219057, &EmptyCustomAttributesCache, &BaseInvokableCall_t2175_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
MethodInfo InvokableCallList_AddPersistentInvokableCall_m5261_MethodInfo = 
{
	"AddPersistentInvokableCall"/* name */
	, (methodPointerType)&InvokableCallList_AddPersistentInvokableCall_m5261/* method */
	, &InvokableCallList_t2187_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InvokableCallList_t2187_InvokableCallList_AddPersistentInvokableCall_m5261_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1312/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType BaseInvokableCall_t2175_0_0_0;
static ParameterInfo InvokableCallList_t2187_InvokableCallList_AddListener_m5262_ParameterInfos[] = 
{
	{"call", 0, 134219058, &EmptyCustomAttributesCache, &BaseInvokableCall_t2175_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
MethodInfo InvokableCallList_AddListener_m5262_MethodInfo = 
{
	"AddListener"/* name */
	, (methodPointerType)&InvokableCallList_AddListener_m5262/* method */
	, &InvokableCallList_t2187_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InvokableCallList_t2187_InvokableCallList_AddListener_m5262_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1313/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo InvokableCallList_t2187_InvokableCallList_RemoveListener_m5263_ParameterInfos[] = 
{
	{"targetObj", 0, 134219059, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219060, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCallList_RemoveListener_m5263_MethodInfo = 
{
	"RemoveListener"/* name */
	, (methodPointerType)&InvokableCallList_RemoveListener_m5263/* method */
	, &InvokableCallList_t2187_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Object_t/* invoker_method */
	, InvokableCallList_t2187_InvokableCallList_RemoveListener_m5263_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1314/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
MethodInfo InvokableCallList_ClearPersistent_m5264_MethodInfo = 
{
	"ClearPersistent"/* name */
	, (methodPointerType)&InvokableCallList_ClearPersistent_m5264/* method */
	, &InvokableCallList_t2187_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1315/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t315_0_0_0;
static ParameterInfo InvokableCallList_t2187_InvokableCallList_Invoke_m5265_ParameterInfos[] = 
{
	{"parameters", 0, 134219061, &EmptyCustomAttributesCache, &ObjectU5BU5D_t315_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
MethodInfo InvokableCallList_Invoke_m5265_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCallList_Invoke_m5265/* method */
	, &InvokableCallList_t2187_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, InvokableCallList_t2187_InvokableCallList_Invoke_m5265_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1316/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* InvokableCallList_t2187_MethodInfos[] =
{
	&InvokableCallList__ctor_m5260_MethodInfo,
	&InvokableCallList_AddPersistentInvokableCall_m5261_MethodInfo,
	&InvokableCallList_AddListener_m5262_MethodInfo,
	&InvokableCallList_RemoveListener_m5263_MethodInfo,
	&InvokableCallList_ClearPersistent_m5264_MethodInfo,
	&InvokableCallList_Invoke_m5265_MethodInfo,
	NULL
};
static MethodInfo* InvokableCallList_t2187_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCallList_t2187_1_0_0;
struct InvokableCallList_t2187;
TypeInfo InvokableCallList_t2187_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCallList"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCallList_t2187_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCallList_t2187_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCallList_t2187_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCallList_t2187_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCallList_t2187_il2cpp_TypeInfo/* cast_class */
	, &InvokableCallList_t2187_0_0_0/* byval_arg */
	, &InvokableCallList_t2187_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCallList_t2187)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Single_t39_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t2254_il2cpp_TypeInfo;
extern TypeInfo Binder_t2255_il2cpp_TypeInfo;
extern TypeInfo ParameterModifierU5BU5D_t2256_il2cpp_TypeInfo;
extern TypeInfo ParameterModifier_t2257_il2cpp_TypeInfo;
extern Il2CppType Single_t39_0_0_0;
extern MethodInfo Type_get_AssemblyQualifiedName_m5457_MethodInfo;
extern MethodInfo UnityEventBase_DirtyPersistentCalls_m5269_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_m5268_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_Impl_m5458_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m5274_MethodInfo;
extern MethodInfo UnityEventBase_RebuildPersistentCallsIfNeeded_m5270_MethodInfo;
extern MethodInfo Type_get_FullName_m5459_MethodInfo;
extern MethodInfo Type_GetMethod_m5460_MethodInfo;
extern MethodInfo Type_get_IsPrimitive_m3357_MethodInfo;
extern MethodInfo Type_get_BaseType_m5381_MethodInfo;


// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern MethodInfo UnityEventBase__ctor_m5266_MethodInfo;
 void UnityEventBase__ctor_m5266 (UnityEventBase_t2184 * __this, MethodInfo* method){
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m1366(__this, /*hidden argument*/&Object__ctor_m1366_MethodInfo);
		InvokableCallList_t2187 * L_0 = (InvokableCallList_t2187 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCallList_t2187_il2cpp_TypeInfo));
		InvokableCallList__ctor_m5260(L_0, /*hidden argument*/&InvokableCallList__ctor_m5260_MethodInfo);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t2186 * L_1 = (PersistentCallGroup_t2186 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PersistentCallGroup_t2186_il2cpp_TypeInfo));
		PersistentCallGroup__ctor_m5258(L_1, /*hidden argument*/&PersistentCallGroup__ctor_m5258_MethodInfo);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m1462(__this, /*hidden argument*/&Object_GetType_m1462_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m5457_MethodInfo, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1359_MethodInfo;
 void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1359 (UnityEventBase_t2184 * __this, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m1360_MethodInfo;
 void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m1360 (UnityEventBase_t2184 * __this, MethodInfo* method){
	{
		UnityEventBase_DirtyPersistentCalls_m5269(__this, /*hidden argument*/&UnityEventBase_DirtyPersistentCalls_m5269_MethodInfo);
		Type_t * L_0 = Object_GetType_m1462(__this, /*hidden argument*/&Object_GetType_m1462_MethodInfo);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m5457_MethodInfo, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
 MethodInfo_t517 * UnityEventBase_FindMethod_m5267 (UnityEventBase_t2184 * __this, PersistentCall_t2183 * ___call, MethodInfo* method){
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m1586(NULL /*static, unused*/, LoadTypeToken(&Object_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1586_MethodInfo);
		V_0 = L_0;
		NullCheck(___call);
		ArgumentCache_t2174 * L_1 = PersistentCall_get_arguments_m5254(___call, /*hidden argument*/&PersistentCall_get_arguments_m5254_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5239(L_1, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5239_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_IsNullOrEmpty_m1807(NULL /*static, unused*/, L_2, /*hidden argument*/&String_IsNullOrEmpty_m1807_MethodInfo);
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		NullCheck(___call);
		ArgumentCache_t2174 * L_4 = PersistentCall_get_arguments_m5254(___call, /*hidden argument*/&PersistentCall_get_arguments_m5254_MethodInfo);
		NullCheck(L_4);
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5239(L_4, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5239_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_6 = Type_GetType_m5439(NULL /*static, unused*/, L_5, 0, /*hidden argument*/&Type_GetType_m5439_MethodInfo);
		Type_t * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetTypeFromHandle_m1586(NULL /*static, unused*/, LoadTypeToken(&Object_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1586_MethodInfo);
		G_B3_0 = L_8;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		NullCheck(___call);
		String_t* L_9 = PersistentCall_get_methodName_m5252(___call, /*hidden argument*/&PersistentCall_get_methodName_m5252_MethodInfo);
		NullCheck(___call);
		Object_t207 * L_10 = PersistentCall_get_target_m5251(___call, /*hidden argument*/&PersistentCall_get_target_m5251_MethodInfo);
		NullCheck(___call);
		int32_t L_11 = PersistentCall_get_mode_m5253(___call, /*hidden argument*/&PersistentCall_get_mode_m5253_MethodInfo);
		MethodInfo_t517 * L_12 = UnityEventBase_FindMethod_m5268(__this, L_9, L_10, L_11, V_0, /*hidden argument*/&UnityEventBase_FindMethod_m5268_MethodInfo);
		return L_12;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
 MethodInfo_t517 * UnityEventBase_FindMethod_m5268 (UnityEventBase_t2184 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, MethodInfo* method){
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t508* G_B10_2 = {0};
	TypeU5BU5D_t508* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t508* G_B9_2 = {0};
	TypeU5BU5D_t508* G_B9_3 = {0};
	String_t* G_B9_4 = {0};
	Object_t * G_B9_5 = {0};
	{
		V_0 = ___mode;
		if (V_0 == 0)
		{
			goto IL_0029;
		}
		if (V_0 == 1)
		{
			goto IL_0032;
		}
		if (V_0 == 2)
		{
			goto IL_00ac;
		}
		if (V_0 == 3)
		{
			goto IL_005b;
		}
		if (V_0 == 4)
		{
			goto IL_0040;
		}
		if (V_0 == 5)
		{
			goto IL_0091;
		}
		if (V_0 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		MethodInfo_t517 * L_0 = (MethodInfo_t517 *)VirtFuncInvoker2< MethodInfo_t517 *, String_t*, Object_t * >::Invoke(&UnityEventBase_FindMethod_Impl_m5458_MethodInfo, __this, ___name, ___listener);
		return L_0;
	}

IL_0032:
	{
		MethodInfo_t517 * L_1 = UnityEventBase_GetValidMethodInfo_m5274(NULL /*static, unused*/, ___listener, ___name, ((TypeU5BU5D_t508*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t508_il2cpp_TypeInfo), 0)), /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m5274_MethodInfo);
		return L_1;
	}

IL_0040:
	{
		TypeU5BU5D_t508* L_2 = ((TypeU5BU5D_t508*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t508_il2cpp_TypeInfo), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m1586(NULL /*static, unused*/, LoadTypeToken(&Single_t39_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1586_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		MethodInfo_t517 * L_4 = UnityEventBase_GetValidMethodInfo_m5274(NULL /*static, unused*/, ___listener, ___name, L_2, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m5274_MethodInfo);
		return L_4;
	}

IL_005b:
	{
		TypeU5BU5D_t508* L_5 = ((TypeU5BU5D_t508*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t508_il2cpp_TypeInfo), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_6 = Type_GetTypeFromHandle_m1586(NULL /*static, unused*/, LoadTypeToken(&Int32_t23_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1586_MethodInfo);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_6);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, 0)) = (Type_t *)L_6;
		MethodInfo_t517 * L_7 = UnityEventBase_GetValidMethodInfo_m5274(NULL /*static, unused*/, ___listener, ___name, L_5, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m5274_MethodInfo);
		return L_7;
	}

IL_0076:
	{
		TypeU5BU5D_t508* L_8 = ((TypeU5BU5D_t508*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t508_il2cpp_TypeInfo), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_9 = Type_GetTypeFromHandle_m1586(NULL /*static, unused*/, LoadTypeToken(&Boolean_t24_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1586_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_8, 0)) = (Type_t *)L_9;
		MethodInfo_t517 * L_10 = UnityEventBase_GetValidMethodInfo_m5274(NULL /*static, unused*/, ___listener, ___name, L_8, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m5274_MethodInfo);
		return L_10;
	}

IL_0091:
	{
		TypeU5BU5D_t508* L_11 = ((TypeU5BU5D_t508*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t508_il2cpp_TypeInfo), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_12 = Type_GetTypeFromHandle_m1586(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1586_MethodInfo);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_12;
		MethodInfo_t517 * L_13 = UnityEventBase_GetValidMethodInfo_m5274(NULL /*static, unused*/, ___listener, ___name, L_11, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m5274_MethodInfo);
		return L_13;
	}

IL_00ac:
	{
		TypeU5BU5D_t508* L_14 = ((TypeU5BU5D_t508*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t508_il2cpp_TypeInfo), 1));
		Type_t * L_15 = ___argumentType;
		G_B9_0 = L_15;
		G_B9_1 = 0;
		G_B9_2 = L_14;
		G_B9_3 = L_14;
		G_B9_4 = ___name;
		G_B9_5 = ___listener;
		if (L_15)
		{
			G_B10_0 = L_15;
			G_B10_1 = 0;
			G_B10_2 = L_14;
			G_B10_3 = L_14;
			G_B10_4 = ___name;
			G_B10_5 = ___listener;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_16 = Type_GetTypeFromHandle_m1586(NULL /*static, unused*/, LoadTypeToken(&Object_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1586_MethodInfo);
		G_B10_0 = L_16;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		NullCheck(G_B10_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_2, G_B10_1);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(G_B10_2, G_B10_1)) = (Type_t *)G_B10_0;
		MethodInfo_t517 * L_17 = UnityEventBase_GetValidMethodInfo_m5274(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m5274_MethodInfo);
		return L_17;
	}

IL_00d0:
	{
		return (MethodInfo_t517 *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
 void UnityEventBase_DirtyPersistentCalls_m5269 (UnityEventBase_t2184 * __this, MethodInfo* method){
	{
		InvokableCallList_t2187 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m5264(L_0, /*hidden argument*/&InvokableCallList_ClearPersistent_m5264_MethodInfo);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
 void UnityEventBase_RebuildPersistentCallsIfNeeded_m5270 (UnityEventBase_t2184 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t2186 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t2187 * L_2 = (__this->___m_Calls_0);
		NullCheck(L_1);
		PersistentCallGroup_Initialize_m5259(L_1, L_2, __this, /*hidden argument*/&PersistentCallGroup_Initialize_m5259_MethodInfo);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern MethodInfo UnityEventBase_AddCall_m5271_MethodInfo;
 void UnityEventBase_AddCall_m5271 (UnityEventBase_t2184 * __this, BaseInvokableCall_t2175 * ___call, MethodInfo* method){
	{
		InvokableCallList_t2187 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_AddListener_m5262(L_0, ___call, /*hidden argument*/&InvokableCallList_AddListener_m5262_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern MethodInfo UnityEventBase_RemoveListener_m5272_MethodInfo;
 void UnityEventBase_RemoveListener_m5272 (UnityEventBase_t2184 * __this, Object_t * ___targetObj, MethodInfo_t517 * ___method, MethodInfo* method){
	{
		InvokableCallList_t2187 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m5263(L_0, ___targetObj, ___method, /*hidden argument*/&InvokableCallList_RemoveListener_m5263_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern MethodInfo UnityEventBase_Invoke_m5273_MethodInfo;
 void UnityEventBase_Invoke_m5273 (UnityEventBase_t2184 * __this, ObjectU5BU5D_t315* ___parameters, MethodInfo* method){
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m5270(__this, /*hidden argument*/&UnityEventBase_RebuildPersistentCallsIfNeeded_m5270_MethodInfo);
		InvokableCallList_t2187 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_Invoke_m5265(L_0, ___parameters, /*hidden argument*/&InvokableCallList_Invoke_m5265_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern MethodInfo UnityEventBase_ToString_m1358_MethodInfo;
 String_t* UnityEventBase_ToString_m1358 (UnityEventBase_t2184 * __this, MethodInfo* method){
	{
		String_t* L_0 = Object_ToString_m1367(__this, /*hidden argument*/&Object_ToString_m1367_MethodInfo);
		Type_t * L_1 = Object_GetType_m1462(__this, /*hidden argument*/&Object_GetType_m1462_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m5459_MethodInfo, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m1718(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral210, L_2, /*hidden argument*/&String_Concat_m1718_MethodInfo);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
 MethodInfo_t517 * UnityEventBase_GetValidMethodInfo_m5274 (Object_t * __this/* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t508* ___argumentTypes, MethodInfo* method){
	Type_t * V_0 = {0};
	MethodInfo_t517 * V_1 = {0};
	ParameterInfoU5BU5D_t930* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t523 * V_5 = {0};
	ParameterInfoU5BU5D_t930* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		NullCheck(___obj);
		Type_t * L_0 = Object_GetType_m1462(___obj, /*hidden argument*/&Object_GetType_m1462_MethodInfo);
		V_0 = L_0;
		goto IL_008e;
	}

IL_000c:
	{
		NullCheck(V_0);
		MethodInfo_t517 * L_1 = (MethodInfo_t517 *)VirtFuncInvoker5< MethodInfo_t517 *, String_t*, int32_t, Binder_t2255 *, TypeU5BU5D_t508*, ParameterModifierU5BU5D_t2256* >::Invoke(&Type_GetMethod_m5460_MethodInfo, V_0, ___functionName, ((int32_t)52), (Binder_t2255 *)NULL, ___argumentTypes, (ParameterModifierU5BU5D_t2256*)(ParameterModifierU5BU5D_t2256*)NULL);
		V_1 = L_1;
		if (!V_1)
		{
			goto IL_0087;
		}
	}
	{
		NullCheck(V_1);
		ParameterInfoU5BU5D_t930* L_2 = (ParameterInfoU5BU5D_t930*)VirtFuncInvoker0< ParameterInfoU5BU5D_t930* >::Invoke(&MethodBase_GetParameters_m3374_MethodInfo, V_1);
		V_2 = L_2;
		V_3 = 1;
		V_4 = 0;
		V_6 = V_2;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		NullCheck(V_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_6, V_7);
		int32_t L_3 = V_7;
		V_5 = (*(ParameterInfo_t523 **)(ParameterInfo_t523 **)SZArrayLdElema(V_6, L_3));
		NullCheck(___argumentTypes);
		IL2CPP_ARRAY_BOUNDS_CHECK(___argumentTypes, V_4);
		int32_t L_4 = V_4;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(___argumentTypes, L_4));
		NullCheck(V_5);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m3382_MethodInfo, V_5);
		V_9 = L_5;
		NullCheck(V_8);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m3357_MethodInfo, V_8);
		NullCheck(V_9);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m3357_MethodInfo, V_9);
		V_3 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		if (V_3)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		V_4 = ((int32_t)(V_4+1));
		V_7 = ((int32_t)(V_7+1));
	}

IL_0074:
	{
		NullCheck(V_6);
		if ((((int32_t)V_7) < ((int32_t)(((int32_t)(((Array_t *)V_6)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		if (!V_3)
		{
			goto IL_0087;
		}
	}
	{
		return V_1;
	}

IL_0087:
	{
		NullCheck(V_0);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m5381_MethodInfo, V_0);
		V_0 = L_8;
	}

IL_008e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_9 = Type_GetTypeFromHandle_m1586(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m1586_MethodInfo);
		if ((((Type_t *)V_0) == ((Type_t *)L_9)))
		{
			goto IL_00a4;
		}
	}
	{
		if (V_0)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (MethodInfo_t517 *)NULL;
	}
}
// Metadata Definition UnityEngine.Events.UnityEventBase
extern Il2CppType InvokableCallList_t2187_0_0_1;
FieldInfo UnityEventBase_t2184____m_Calls_0_FieldInfo = 
{
	"m_Calls"/* name */
	, &InvokableCallList_t2187_0_0_1/* type */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* parent */
	, offsetof(UnityEventBase_t2184, ___m_Calls_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType PersistentCallGroup_t2186_0_0_1;
extern CustomAttributesCache UnityEventBase_t2184__CustomAttributeCache_m_PersistentCalls;
FieldInfo UnityEventBase_t2184____m_PersistentCalls_1_FieldInfo = 
{
	"m_PersistentCalls"/* name */
	, &PersistentCallGroup_t2186_0_0_1/* type */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* parent */
	, offsetof(UnityEventBase_t2184, ___m_PersistentCalls_1)/* data */
	, &UnityEventBase_t2184__CustomAttributeCache_m_PersistentCalls/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
extern CustomAttributesCache UnityEventBase_t2184__CustomAttributeCache_m_TypeName;
FieldInfo UnityEventBase_t2184____m_TypeName_2_FieldInfo = 
{
	"m_TypeName"/* name */
	, &String_t_0_0_1/* type */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* parent */
	, offsetof(UnityEventBase_t2184, ___m_TypeName_2)/* data */
	, &UnityEventBase_t2184__CustomAttributeCache_m_TypeName/* custom_attributes_cache */

};
extern Il2CppType Boolean_t24_0_0_1;
FieldInfo UnityEventBase_t2184____m_CallsDirty_3_FieldInfo = 
{
	"m_CallsDirty"/* name */
	, &Boolean_t24_0_0_1/* type */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* parent */
	, offsetof(UnityEventBase_t2184, ___m_CallsDirty_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityEventBase_t2184_FieldInfos[] =
{
	&UnityEventBase_t2184____m_Calls_0_FieldInfo,
	&UnityEventBase_t2184____m_PersistentCalls_1_FieldInfo,
	&UnityEventBase_t2184____m_TypeName_2_FieldInfo,
	&UnityEventBase_t2184____m_CallsDirty_3_FieldInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
MethodInfo UnityEventBase__ctor_m5266_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityEventBase__ctor_m5266/* method */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1317/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1359_MethodInfo = 
{
	"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize"/* name */
	, (methodPointerType)&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1359/* method */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1318/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m1360_MethodInfo = 
{
	"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize"/* name */
	, (methodPointerType)&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m1360/* method */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1319/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityEventBase_t2184_UnityEventBase_FindMethod_Impl_m5458_ParameterInfos[] = 
{
	{"name", 0, 134219062, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"targetObj", 1, 134219063, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType MethodInfo_t517_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
MethodInfo UnityEventBase_FindMethod_Impl_m5458_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, NULL/* method */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t517_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEventBase_t2184_UnityEventBase_FindMethod_Impl_m5458_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1476/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1320/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo UnityEventBase_t2184_UnityEventBase_GetDelegate_m5434_ParameterInfos[] = 
{
	{"target", 0, 134219064, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219065, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType BaseInvokableCall_t2175_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
MethodInfo UnityEventBase_GetDelegate_m5434_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t2175_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEventBase_t2184_UnityEventBase_GetDelegate_m5434_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1475/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1321/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType PersistentCall_t2183_0_0_0;
static ParameterInfo UnityEventBase_t2184_UnityEventBase_FindMethod_m5267_ParameterInfos[] = 
{
	{"call", 0, 134219066, &EmptyCustomAttributesCache, &PersistentCall_t2183_0_0_0},
};
extern Il2CppType MethodInfo_t517_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
MethodInfo UnityEventBase_FindMethod_m5267_MethodInfo = 
{
	"FindMethod"/* name */
	, (methodPointerType)&UnityEventBase_FindMethod_m5267/* method */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t517_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, UnityEventBase_t2184_UnityEventBase_FindMethod_m5267_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1322/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType PersistentListenerMode_t2173_0_0_0;
extern Il2CppType Type_t_0_0_0;
extern Il2CppType Type_t_0_0_0;
static ParameterInfo UnityEventBase_t2184_UnityEventBase_FindMethod_m5268_ParameterInfos[] = 
{
	{"name", 0, 134219067, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"listener", 1, 134219068, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"mode", 2, 134219069, &EmptyCustomAttributesCache, &PersistentListenerMode_t2173_0_0_0},
	{"argumentType", 3, 134219070, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern Il2CppType MethodInfo_t517_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t23_Object_t (MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
MethodInfo UnityEventBase_FindMethod_m5268_MethodInfo = 
{
	"FindMethod"/* name */
	, (methodPointerType)&UnityEventBase_FindMethod_m5268/* method */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t517_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t23_Object_t/* invoker_method */
	, UnityEventBase_t2184_UnityEventBase_FindMethod_m5268_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1323/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
MethodInfo UnityEventBase_DirtyPersistentCalls_m5269_MethodInfo = 
{
	"DirtyPersistentCalls"/* name */
	, (methodPointerType)&UnityEventBase_DirtyPersistentCalls_m5269/* method */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1324/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
MethodInfo UnityEventBase_RebuildPersistentCallsIfNeeded_m5270_MethodInfo = 
{
	"RebuildPersistentCallsIfNeeded"/* name */
	, (methodPointerType)&UnityEventBase_RebuildPersistentCallsIfNeeded_m5270/* method */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1325/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType BaseInvokableCall_t2175_0_0_0;
static ParameterInfo UnityEventBase_t2184_UnityEventBase_AddCall_m5271_ParameterInfos[] = 
{
	{"call", 0, 134219071, &EmptyCustomAttributesCache, &BaseInvokableCall_t2175_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
MethodInfo UnityEventBase_AddCall_m5271_MethodInfo = 
{
	"AddCall"/* name */
	, (methodPointerType)&UnityEventBase_AddCall_m5271/* method */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, UnityEventBase_t2184_UnityEventBase_AddCall_m5271_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1326/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo UnityEventBase_t2184_UnityEventBase_RemoveListener_m5272_ParameterInfos[] = 
{
	{"targetObj", 0, 134219072, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219073, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
MethodInfo UnityEventBase_RemoveListener_m5272_MethodInfo = 
{
	"RemoveListener"/* name */
	, (methodPointerType)&UnityEventBase_RemoveListener_m5272/* method */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_Object_t/* invoker_method */
	, UnityEventBase_t2184_UnityEventBase_RemoveListener_m5272_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 132/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1327/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t315_0_0_0;
static ParameterInfo UnityEventBase_t2184_UnityEventBase_Invoke_m5273_ParameterInfos[] = 
{
	{"parameters", 0, 134219074, &EmptyCustomAttributesCache, &ObjectU5BU5D_t315_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
MethodInfo UnityEventBase_Invoke_m5273_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityEventBase_Invoke_m5273/* method */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, UnityEventBase_t2184_UnityEventBase_Invoke_m5273_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 132/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1328/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Events.UnityEventBase::ToString()
MethodInfo UnityEventBase_ToString_m1358_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&UnityEventBase_ToString_m1358/* method */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1329/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType TypeU5BU5D_t508_0_0_0;
extern Il2CppType TypeU5BU5D_t508_0_0_0;
static ParameterInfo UnityEventBase_t2184_UnityEventBase_GetValidMethodInfo_m5274_ParameterInfos[] = 
{
	{"obj", 0, 134219075, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"functionName", 1, 134219076, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"argumentTypes", 2, 134219077, &EmptyCustomAttributesCache, &TypeU5BU5D_t508_0_0_0},
};
extern Il2CppType MethodInfo_t517_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
MethodInfo UnityEventBase_GetValidMethodInfo_m5274_MethodInfo = 
{
	"GetValidMethodInfo"/* name */
	, (methodPointerType)&UnityEventBase_GetValidMethodInfo_m5274/* method */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t517_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEventBase_t2184_UnityEventBase_GetValidMethodInfo_m5274_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1330/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityEventBase_t2184_MethodInfos[] =
{
	&UnityEventBase__ctor_m5266_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1359_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m1360_MethodInfo,
	&UnityEventBase_FindMethod_Impl_m5458_MethodInfo,
	&UnityEventBase_GetDelegate_m5434_MethodInfo,
	&UnityEventBase_FindMethod_m5267_MethodInfo,
	&UnityEventBase_FindMethod_m5268_MethodInfo,
	&UnityEventBase_DirtyPersistentCalls_m5269_MethodInfo,
	&UnityEventBase_RebuildPersistentCallsIfNeeded_m5270_MethodInfo,
	&UnityEventBase_AddCall_m5271_MethodInfo,
	&UnityEventBase_RemoveListener_m5272_MethodInfo,
	&UnityEventBase_Invoke_m5273_MethodInfo,
	&UnityEventBase_ToString_m1358_MethodInfo,
	&UnityEventBase_GetValidMethodInfo_m5274_MethodInfo,
	NULL
};
static MethodInfo* UnityEventBase_t2184_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&UnityEventBase_ToString_m1358_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1359_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m1360_MethodInfo,
	NULL,
	NULL,
};
extern TypeInfo ISerializationCallbackReceiver_t301_il2cpp_TypeInfo;
static TypeInfo* UnityEventBase_t2184_InterfacesTypeInfos[] = 
{
	&ISerializationCallbackReceiver_t301_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair UnityEventBase_t2184_InterfacesOffsets[] = 
{
	{ &ISerializationCallbackReceiver_t301_il2cpp_TypeInfo, 4},
};
void UnityEventBase_t2184_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t299 * tmp;
		tmp = (FormerlySerializedAsAttribute_t299 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m1353(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), &FormerlySerializedAsAttribute__ctor_m1353_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t300 * tmp;
		tmp = (SerializeField_t300 *)il2cpp_codegen_object_new (&SerializeField_t300_il2cpp_TypeInfo);
		SerializeField__ctor_m1354(tmp, &SerializeField__ctor_m1354_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void UnityEventBase_t2184_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t300 * tmp;
		tmp = (SerializeField_t300 *)il2cpp_codegen_object_new (&SerializeField_t300_il2cpp_TypeInfo);
		SerializeField__ctor_m1354(tmp, &SerializeField__ctor_m1354_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache UnityEventBase_t2184__CustomAttributeCache_m_PersistentCalls = {
2,
NULL,
&UnityEventBase_t2184_CustomAttributesCacheGenerator_m_PersistentCalls
};
CustomAttributesCache UnityEventBase_t2184__CustomAttributeCache_m_TypeName = {
1,
NULL,
&UnityEventBase_t2184_CustomAttributesCacheGenerator_m_TypeName
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityEventBase_t2184_1_0_0;
struct UnityEventBase_t2184;
extern CustomAttributesCache UnityEventBase_t2184__CustomAttributeCache_m_PersistentCalls;
extern CustomAttributesCache UnityEventBase_t2184__CustomAttributeCache_m_TypeName;
TypeInfo UnityEventBase_t2184_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEventBase"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEventBase_t2184_MethodInfos/* methods */
	, NULL/* properties */
	, UnityEventBase_t2184_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* element_class */
	, UnityEventBase_t2184_InterfacesTypeInfos/* implemented_interfaces */
	, UnityEventBase_t2184_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* cast_class */
	, &UnityEventBase_t2184_0_0_0/* byval_arg */
	, &UnityEventBase_t2184_1_0_0/* this_arg */
	, UnityEventBase_t2184_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityEventBase_t2184)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056897/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 14/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_t138_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern MethodInfo UnityEvent__ctor_m1543_MethodInfo;
 void UnityEvent__ctor_m1543 (UnityEvent_t138 * __this, MethodInfo* method){
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t315*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t315_il2cpp_TypeInfo), 0));
		UnityEventBase__ctor_m5266(__this, /*hidden argument*/&UnityEventBase__ctor_m5266_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern MethodInfo UnityEvent_FindMethod_Impl_m1544_MethodInfo;
 MethodInfo_t517 * UnityEvent_FindMethod_Impl_m1544 (UnityEvent_t138 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method){
	{
		MethodInfo_t517 * L_0 = UnityEventBase_GetValidMethodInfo_m5274(NULL /*static, unused*/, ___targetObj, ___name, ((TypeU5BU5D_t508*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t508_il2cpp_TypeInfo), 0)), /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m5274_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern MethodInfo UnityEvent_GetDelegate_m1545_MethodInfo;
 BaseInvokableCall_t2175 * UnityEvent_GetDelegate_m1545 (UnityEvent_t138 * __this, Object_t * ___target, MethodInfo_t517 * ___theFunction, MethodInfo* method){
	{
		InvokableCall_t2176 * L_0 = (InvokableCall_t2176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCall_t2176_il2cpp_TypeInfo));
		InvokableCall__ctor_m5247(L_0, ___target, ___theFunction, /*hidden argument*/&InvokableCall__ctor_m5247_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern MethodInfo UnityEvent_Invoke_m1548_MethodInfo;
 void UnityEvent_Invoke_m1548 (UnityEvent_t138 * __this, MethodInfo* method){
	{
		ObjectU5BU5D_t315* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m5273(__this, L_0, /*hidden argument*/&UnityEventBase_Invoke_m5273_MethodInfo);
		return;
	}
}
// Metadata Definition UnityEngine.Events.UnityEvent
extern Il2CppType ObjectU5BU5D_t315_0_0_33;
FieldInfo UnityEvent_t138____m_InvokeArray_4_FieldInfo = 
{
	"m_InvokeArray"/* name */
	, &ObjectU5BU5D_t315_0_0_33/* type */
	, &UnityEvent_t138_il2cpp_TypeInfo/* parent */
	, offsetof(UnityEvent_t138, ___m_InvokeArray_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityEvent_t138_FieldInfos[] =
{
	&UnityEvent_t138____m_InvokeArray_4_FieldInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
MethodInfo UnityEvent__ctor_m1543_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityEvent__ctor_m1543/* method */
	, &UnityEvent_t138_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1331/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityEvent_t138_UnityEvent_FindMethod_Impl_m1544_ParameterInfos[] = 
{
	{"name", 0, 134219078, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"targetObj", 1, 134219079, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType MethodInfo_t517_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
MethodInfo UnityEvent_FindMethod_Impl_m1544_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, (methodPointerType)&UnityEvent_FindMethod_Impl_m1544/* method */
	, &UnityEvent_t138_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t517_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEvent_t138_UnityEvent_FindMethod_Impl_m1544_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1332/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo UnityEvent_t138_UnityEvent_GetDelegate_m1545_ParameterInfos[] = 
{
	{"target", 0, 134219080, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219081, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType BaseInvokableCall_t2175_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
MethodInfo UnityEvent_GetDelegate_m1545_MethodInfo = 
{
	"GetDelegate"/* name */
	, (methodPointerType)&UnityEvent_GetDelegate_m1545/* method */
	, &UnityEvent_t138_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t2175_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEvent_t138_UnityEvent_GetDelegate_m1545_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1333/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
MethodInfo UnityEvent_Invoke_m1548_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityEvent_Invoke_m1548/* method */
	, &UnityEvent_t138_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1334/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityEvent_t138_MethodInfos[] =
{
	&UnityEvent__ctor_m1543_MethodInfo,
	&UnityEvent_FindMethod_Impl_m1544_MethodInfo,
	&UnityEvent_GetDelegate_m1545_MethodInfo,
	&UnityEvent_Invoke_m1548_MethodInfo,
	NULL
};
static MethodInfo* UnityEvent_t138_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&UnityEventBase_ToString_m1358_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1359_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m1360_MethodInfo,
	&UnityEvent_FindMethod_Impl_m1544_MethodInfo,
	&UnityEvent_GetDelegate_m1545_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityEvent_t138_InterfacesOffsets[] = 
{
	{ &ISerializationCallbackReceiver_t301_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityEvent_t138_0_0_0;
extern Il2CppType UnityEvent_t138_1_0_0;
struct UnityEvent_t138;
TypeInfo UnityEvent_t138_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEvent"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEvent_t138_MethodInfos/* methods */
	, NULL/* properties */
	, UnityEvent_t138_FieldInfos/* fields */
	, NULL/* events */
	, &UnityEventBase_t2184_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityEvent_t138_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityEvent_t138_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityEvent_t138_il2cpp_TypeInfo/* cast_class */
	, &UnityEvent_t138_0_0_0/* byval_arg */
	, &UnityEvent_t138_1_0_0/* this_arg */
	, UnityEvent_t138_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityEvent_t138)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
extern Il2CppGenericContainer UnityEvent_1_t2189_Il2CppGenericContainer;
extern TypeInfo UnityEvent_1_t2189_gp_T0_0_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_1_t2189_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_1_t2189_Il2CppGenericContainer, 0}, {NULL, "T0", 0, 0, NULL} };
static Il2CppGenericParamFull* UnityEvent_1_t2189_Il2CppGenericParametersArray[1] = 
{
	&UnityEvent_1_t2189_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo UnityEvent_1_t2189_il2cpp_TypeInfo;
Il2CppGenericContainer UnityEvent_1_t2189_Il2CppGenericContainer = { { NULL, NULL }, NULL, &UnityEvent_1_t2189_il2cpp_TypeInfo, 1, 0, UnityEvent_1_t2189_Il2CppGenericParametersArray };
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityEvent`1::.ctor()
MethodInfo UnityEvent_1__ctor_m5461_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityEvent_1_t2189_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1335/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_1_t2282_0_0_0;
extern Il2CppType UnityAction_1_t2282_0_0_0;
static ParameterInfo UnityEvent_1_t2189_UnityEvent_1_AddListener_m5462_ParameterInfos[] = 
{
	{"call", 0, 134219082, &EmptyCustomAttributesCache, &UnityAction_1_t2282_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityEvent`1::AddListener(UnityEngine.Events.UnityAction`1<T0>)
MethodInfo UnityEvent_1_AddListener_m5462_MethodInfo = 
{
	"AddListener"/* name */
	, NULL/* method */
	, &UnityEvent_1_t2189_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t2189_UnityEvent_1_AddListener_m5462_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1336/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_1_t2282_0_0_0;
static ParameterInfo UnityEvent_1_t2189_UnityEvent_1_RemoveListener_m5463_ParameterInfos[] = 
{
	{"call", 0, 134219083, &EmptyCustomAttributesCache, &UnityAction_1_t2282_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityEvent`1::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
MethodInfo UnityEvent_1_RemoveListener_m5463_MethodInfo = 
{
	"RemoveListener"/* name */
	, NULL/* method */
	, &UnityEvent_1_t2189_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t2189_UnityEvent_1_RemoveListener_m5463_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1337/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityEvent_1_t2189_UnityEvent_1_FindMethod_Impl_m5464_ParameterInfos[] = 
{
	{"name", 0, 134219084, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"targetObj", 1, 134219085, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType MethodInfo_t517_0_0_0;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1::FindMethod_Impl(System.String,System.Object)
MethodInfo UnityEvent_1_FindMethod_Impl_m5464_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, NULL/* method */
	, &UnityEvent_1_t2189_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t517_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t2189_UnityEvent_1_FindMethod_Impl_m5464_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1338/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo UnityEvent_1_t2189_UnityEvent_1_GetDelegate_m5465_ParameterInfos[] = 
{
	{"target", 0, 134219086, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219087, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType BaseInvokableCall_t2175_0_0_0;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1::GetDelegate(System.Object,System.Reflection.MethodInfo)
MethodInfo UnityEvent_1_GetDelegate_m5465_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEvent_1_t2189_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t2175_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t2189_UnityEvent_1_GetDelegate_m5465_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1339/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_1_t2282_0_0_0;
static ParameterInfo UnityEvent_1_t2189_UnityEvent_1_GetDelegate_m5466_ParameterInfos[] = 
{
	{"action", 0, 134219088, &EmptyCustomAttributesCache, &UnityAction_1_t2282_0_0_0},
};
extern Il2CppType BaseInvokableCall_t2175_0_0_0;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
MethodInfo UnityEvent_1_GetDelegate_m5466_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEvent_1_t2189_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t2175_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t2189_UnityEvent_1_GetDelegate_m5466_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1340/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityEvent_1_t2189_gp_0_0_0_0;
extern Il2CppType UnityEvent_1_t2189_gp_0_0_0_0;
static ParameterInfo UnityEvent_1_t2189_UnityEvent_1_Invoke_m5467_ParameterInfos[] = 
{
	{"arg0", 0, 134219089, &EmptyCustomAttributesCache, &UnityEvent_1_t2189_gp_0_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityEvent`1::Invoke(T0)
MethodInfo UnityEvent_1_Invoke_m5467_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &UnityEvent_1_t2189_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t2189_UnityEvent_1_Invoke_m5467_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1341/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityEvent_1_t2189_MethodInfos[] =
{
	&UnityEvent_1__ctor_m5461_MethodInfo,
	&UnityEvent_1_AddListener_m5462_MethodInfo,
	&UnityEvent_1_RemoveListener_m5463_MethodInfo,
	&UnityEvent_1_FindMethod_Impl_m5464_MethodInfo,
	&UnityEvent_1_GetDelegate_m5465_MethodInfo,
	&UnityEvent_1_GetDelegate_m5466_MethodInfo,
	&UnityEvent_1_Invoke_m5467_MethodInfo,
	NULL
};
extern Il2CppType ObjectU5BU5D_t315_0_0_33;
FieldInfo UnityEvent_1_t2189____m_InvokeArray_4_FieldInfo = 
{
	"m_InvokeArray"/* name */
	, &ObjectU5BU5D_t315_0_0_33/* type */
	, &UnityEvent_1_t2189_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityEvent_1_t2189_FieldInfos[] =
{
	&UnityEvent_1_t2189____m_InvokeArray_4_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityEvent_1_t2189_0_0_0;
extern Il2CppType UnityEvent_1_t2189_1_0_0;
struct UnityEvent_1_t2189;
TypeInfo UnityEvent_1_t2189_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEvent`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEvent_1_t2189_MethodInfos/* methods */
	, NULL/* properties */
	, UnityEvent_1_t2189_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityEvent_1_t2189_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &UnityEvent_1_t2189_0_0_0/* byval_arg */
	, &UnityEvent_1_t2189_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &UnityEvent_1_t2189_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056897/* flags */
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
	, 7/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
extern Il2CppGenericContainer UnityEvent_2_t2190_Il2CppGenericContainer;
extern TypeInfo UnityEvent_2_t2190_gp_T0_0_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_2_t2190_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_2_t2190_Il2CppGenericContainer, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo UnityEvent_2_t2190_gp_T1_1_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_2_t2190_gp_T1_1_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_2_t2190_Il2CppGenericContainer, 1}, {NULL, "T1", 0, 0, NULL} };
static Il2CppGenericParamFull* UnityEvent_2_t2190_Il2CppGenericParametersArray[2] = 
{
	&UnityEvent_2_t2190_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_2_t2190_gp_T1_1_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo UnityEvent_2_t2190_il2cpp_TypeInfo;
Il2CppGenericContainer UnityEvent_2_t2190_Il2CppGenericContainer = { { NULL, NULL }, NULL, &UnityEvent_2_t2190_il2cpp_TypeInfo, 2, 0, UnityEvent_2_t2190_Il2CppGenericParametersArray };
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityEvent`2::.ctor()
MethodInfo UnityEvent_2__ctor_m5468_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityEvent_2_t2190_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1342/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityEvent_2_t2190_UnityEvent_2_FindMethod_Impl_m5469_ParameterInfos[] = 
{
	{"name", 0, 134219090, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"targetObj", 1, 134219091, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType MethodInfo_t517_0_0_0;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2::FindMethod_Impl(System.String,System.Object)
MethodInfo UnityEvent_2_FindMethod_Impl_m5469_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, NULL/* method */
	, &UnityEvent_2_t2190_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t517_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_2_t2190_UnityEvent_2_FindMethod_Impl_m5469_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1343/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo UnityEvent_2_t2190_UnityEvent_2_GetDelegate_m5470_ParameterInfos[] = 
{
	{"target", 0, 134219092, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219093, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType BaseInvokableCall_t2175_0_0_0;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2::GetDelegate(System.Object,System.Reflection.MethodInfo)
MethodInfo UnityEvent_2_GetDelegate_m5470_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEvent_2_t2190_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t2175_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_2_t2190_UnityEvent_2_GetDelegate_m5470_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1344/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityEvent_2_t2190_MethodInfos[] =
{
	&UnityEvent_2__ctor_m5468_MethodInfo,
	&UnityEvent_2_FindMethod_Impl_m5469_MethodInfo,
	&UnityEvent_2_GetDelegate_m5470_MethodInfo,
	NULL
};
extern Il2CppType ObjectU5BU5D_t315_0_0_33;
FieldInfo UnityEvent_2_t2190____m_InvokeArray_4_FieldInfo = 
{
	"m_InvokeArray"/* name */
	, &ObjectU5BU5D_t315_0_0_33/* type */
	, &UnityEvent_2_t2190_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityEvent_2_t2190_FieldInfos[] =
{
	&UnityEvent_2_t2190____m_InvokeArray_4_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityEvent_2_t2190_0_0_0;
extern Il2CppType UnityEvent_2_t2190_1_0_0;
struct UnityEvent_2_t2190;
TypeInfo UnityEvent_2_t2190_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEvent`2"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEvent_2_t2190_MethodInfos/* methods */
	, NULL/* properties */
	, UnityEvent_2_t2190_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityEvent_2_t2190_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &UnityEvent_2_t2190_0_0_0/* byval_arg */
	, &UnityEvent_2_t2190_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &UnityEvent_2_t2190_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056897/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
extern Il2CppGenericContainer UnityEvent_3_t2191_Il2CppGenericContainer;
extern TypeInfo UnityEvent_3_t2191_gp_T0_0_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_3_t2191_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_3_t2191_Il2CppGenericContainer, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo UnityEvent_3_t2191_gp_T1_1_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_3_t2191_gp_T1_1_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_3_t2191_Il2CppGenericContainer, 1}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo UnityEvent_3_t2191_gp_T2_2_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_3_t2191_gp_T2_2_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_3_t2191_Il2CppGenericContainer, 2}, {NULL, "T2", 0, 0, NULL} };
static Il2CppGenericParamFull* UnityEvent_3_t2191_Il2CppGenericParametersArray[3] = 
{
	&UnityEvent_3_t2191_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_3_t2191_gp_T1_1_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_3_t2191_gp_T2_2_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo UnityEvent_3_t2191_il2cpp_TypeInfo;
Il2CppGenericContainer UnityEvent_3_t2191_Il2CppGenericContainer = { { NULL, NULL }, NULL, &UnityEvent_3_t2191_il2cpp_TypeInfo, 3, 0, UnityEvent_3_t2191_Il2CppGenericParametersArray };
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityEvent`3::.ctor()
MethodInfo UnityEvent_3__ctor_m5471_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityEvent_3_t2191_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1345/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityEvent_3_t2191_UnityEvent_3_FindMethod_Impl_m5472_ParameterInfos[] = 
{
	{"name", 0, 134219094, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"targetObj", 1, 134219095, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType MethodInfo_t517_0_0_0;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3::FindMethod_Impl(System.String,System.Object)
MethodInfo UnityEvent_3_FindMethod_Impl_m5472_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, NULL/* method */
	, &UnityEvent_3_t2191_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t517_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_3_t2191_UnityEvent_3_FindMethod_Impl_m5472_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1346/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo UnityEvent_3_t2191_UnityEvent_3_GetDelegate_m5473_ParameterInfos[] = 
{
	{"target", 0, 134219096, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219097, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType BaseInvokableCall_t2175_0_0_0;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3::GetDelegate(System.Object,System.Reflection.MethodInfo)
MethodInfo UnityEvent_3_GetDelegate_m5473_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEvent_3_t2191_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t2175_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_3_t2191_UnityEvent_3_GetDelegate_m5473_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1347/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityEvent_3_t2191_MethodInfos[] =
{
	&UnityEvent_3__ctor_m5471_MethodInfo,
	&UnityEvent_3_FindMethod_Impl_m5472_MethodInfo,
	&UnityEvent_3_GetDelegate_m5473_MethodInfo,
	NULL
};
extern Il2CppType ObjectU5BU5D_t315_0_0_33;
FieldInfo UnityEvent_3_t2191____m_InvokeArray_4_FieldInfo = 
{
	"m_InvokeArray"/* name */
	, &ObjectU5BU5D_t315_0_0_33/* type */
	, &UnityEvent_3_t2191_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityEvent_3_t2191_FieldInfos[] =
{
	&UnityEvent_3_t2191____m_InvokeArray_4_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityEvent_3_t2191_0_0_0;
extern Il2CppType UnityEvent_3_t2191_1_0_0;
struct UnityEvent_3_t2191;
TypeInfo UnityEvent_3_t2191_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEvent`3"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEvent_3_t2191_MethodInfos/* methods */
	, NULL/* properties */
	, UnityEvent_3_t2191_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityEvent_3_t2191_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &UnityEvent_3_t2191_0_0_0/* byval_arg */
	, &UnityEvent_3_t2191_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &UnityEvent_3_t2191_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056897/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
extern Il2CppGenericContainer UnityEvent_4_t2192_Il2CppGenericContainer;
extern TypeInfo UnityEvent_4_t2192_gp_T0_0_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_4_t2192_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_4_t2192_Il2CppGenericContainer, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo UnityEvent_4_t2192_gp_T1_1_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_4_t2192_gp_T1_1_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_4_t2192_Il2CppGenericContainer, 1}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo UnityEvent_4_t2192_gp_T2_2_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_4_t2192_gp_T2_2_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_4_t2192_Il2CppGenericContainer, 2}, {NULL, "T2", 0, 0, NULL} };
extern TypeInfo UnityEvent_4_t2192_gp_T3_3_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_4_t2192_gp_T3_3_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_4_t2192_Il2CppGenericContainer, 3}, {NULL, "T3", 0, 0, NULL} };
static Il2CppGenericParamFull* UnityEvent_4_t2192_Il2CppGenericParametersArray[4] = 
{
	&UnityEvent_4_t2192_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_4_t2192_gp_T1_1_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_4_t2192_gp_T2_2_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_4_t2192_gp_T3_3_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo UnityEvent_4_t2192_il2cpp_TypeInfo;
Il2CppGenericContainer UnityEvent_4_t2192_Il2CppGenericContainer = { { NULL, NULL }, NULL, &UnityEvent_4_t2192_il2cpp_TypeInfo, 4, 0, UnityEvent_4_t2192_Il2CppGenericParametersArray };
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityEvent`4::.ctor()
MethodInfo UnityEvent_4__ctor_m5474_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityEvent_4_t2192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1348/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityEvent_4_t2192_UnityEvent_4_FindMethod_Impl_m5475_ParameterInfos[] = 
{
	{"name", 0, 134219098, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"targetObj", 1, 134219099, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType MethodInfo_t517_0_0_0;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4::FindMethod_Impl(System.String,System.Object)
MethodInfo UnityEvent_4_FindMethod_Impl_m5475_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, NULL/* method */
	, &UnityEvent_4_t2192_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t517_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_4_t2192_UnityEvent_4_FindMethod_Impl_m5475_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1349/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t517_0_0_0;
static ParameterInfo UnityEvent_4_t2192_UnityEvent_4_GetDelegate_m5476_ParameterInfos[] = 
{
	{"target", 0, 134219100, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219101, &EmptyCustomAttributesCache, &MethodInfo_t517_0_0_0},
};
extern Il2CppType BaseInvokableCall_t2175_0_0_0;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4::GetDelegate(System.Object,System.Reflection.MethodInfo)
MethodInfo UnityEvent_4_GetDelegate_m5476_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEvent_4_t2192_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t2175_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_4_t2192_UnityEvent_4_GetDelegate_m5476_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1350/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityEvent_4_t2192_MethodInfos[] =
{
	&UnityEvent_4__ctor_m5474_MethodInfo,
	&UnityEvent_4_FindMethod_Impl_m5475_MethodInfo,
	&UnityEvent_4_GetDelegate_m5476_MethodInfo,
	NULL
};
extern Il2CppType ObjectU5BU5D_t315_0_0_33;
FieldInfo UnityEvent_4_t2192____m_InvokeArray_4_FieldInfo = 
{
	"m_InvokeArray"/* name */
	, &ObjectU5BU5D_t315_0_0_33/* type */
	, &UnityEvent_4_t2192_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityEvent_4_t2192_FieldInfos[] =
{
	&UnityEvent_4_t2192____m_InvokeArray_4_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityEvent_4_t2192_0_0_0;
extern Il2CppType UnityEvent_4_t2192_1_0_0;
struct UnityEvent_4_t2192;
TypeInfo UnityEvent_4_t2192_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEvent`4"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEvent_4_t2192_MethodInfos/* methods */
	, NULL/* properties */
	, UnityEvent_4_t2192_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityEvent_4_t2192_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &UnityEvent_4_t2192_0_0_0/* byval_arg */
	, &UnityEvent_4_t2192_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &UnityEvent_4_t2192_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056897/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UserAuthorizationDialog_t2193_il2cpp_TypeInfo;

extern MethodInfo MonoBehaviour__ctor_m41_MethodInfo;


// System.Void UnityEngine.UserAuthorizationDialog::.ctor()
extern MethodInfo UserAuthorizationDialog__ctor_m5275_MethodInfo;
 void UserAuthorizationDialog__ctor_m5275 (UserAuthorizationDialog_t2193 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/&MonoBehaviour__ctor_m41_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::Start()
extern MethodInfo UserAuthorizationDialog_Start_m5276_MethodInfo;
 void UserAuthorizationDialog_Start_m5276 (UserAuthorizationDialog_t2193 * __this, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::OnGUI()
extern MethodInfo UserAuthorizationDialog_OnGUI_m5277_MethodInfo;
 void UserAuthorizationDialog_OnGUI_m5277 (UserAuthorizationDialog_t2193 * __this, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::DoUserAuthorizationDialog(System.Int32)
extern MethodInfo UserAuthorizationDialog_DoUserAuthorizationDialog_m5278_MethodInfo;
 void UserAuthorizationDialog_DoUserAuthorizationDialog_m5278 (UserAuthorizationDialog_t2193 * __this, int32_t ___windowID, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition UnityEngine.UserAuthorizationDialog
extern Il2CppType Int32_t23_0_0_32849;
FieldInfo UserAuthorizationDialog_t2193____width_2_FieldInfo = 
{
	"width"/* name */
	, &Int32_t23_0_0_32849/* type */
	, &UserAuthorizationDialog_t2193_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_32849;
FieldInfo UserAuthorizationDialog_t2193____height_3_FieldInfo = 
{
	"height"/* name */
	, &Int32_t23_0_0_32849/* type */
	, &UserAuthorizationDialog_t2193_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Rect_t164_0_0_1;
FieldInfo UserAuthorizationDialog_t2193____windowRect_4_FieldInfo = 
{
	"windowRect"/* name */
	, &Rect_t164_0_0_1/* type */
	, &UserAuthorizationDialog_t2193_il2cpp_TypeInfo/* parent */
	, offsetof(UserAuthorizationDialog_t2193, ___windowRect_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Texture_t162_0_0_1;
FieldInfo UserAuthorizationDialog_t2193____warningIcon_5_FieldInfo = 
{
	"warningIcon"/* name */
	, &Texture_t162_0_0_1/* type */
	, &UserAuthorizationDialog_t2193_il2cpp_TypeInfo/* parent */
	, offsetof(UserAuthorizationDialog_t2193, ___warningIcon_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UserAuthorizationDialog_t2193_FieldInfos[] =
{
	&UserAuthorizationDialog_t2193____width_2_FieldInfo,
	&UserAuthorizationDialog_t2193____height_3_FieldInfo,
	&UserAuthorizationDialog_t2193____windowRect_4_FieldInfo,
	&UserAuthorizationDialog_t2193____warningIcon_5_FieldInfo,
	NULL
};
static const int32_t UserAuthorizationDialog_t2193____width_2_DefaultValueData = 385;
static Il2CppFieldDefaultValueEntry UserAuthorizationDialog_t2193____width_2_DefaultValue = 
{
	&UserAuthorizationDialog_t2193____width_2_FieldInfo/* field */
	, { (char*)&UserAuthorizationDialog_t2193____width_2_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t UserAuthorizationDialog_t2193____height_3_DefaultValueData = 155;
static Il2CppFieldDefaultValueEntry UserAuthorizationDialog_t2193____height_3_DefaultValue = 
{
	&UserAuthorizationDialog_t2193____height_3_FieldInfo/* field */
	, { (char*)&UserAuthorizationDialog_t2193____height_3_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UserAuthorizationDialog_t2193_FieldDefaultValues[] = 
{
	&UserAuthorizationDialog_t2193____width_2_DefaultValue,
	&UserAuthorizationDialog_t2193____height_3_DefaultValue,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UserAuthorizationDialog::.ctor()
MethodInfo UserAuthorizationDialog__ctor_m5275_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UserAuthorizationDialog__ctor_m5275/* method */
	, &UserAuthorizationDialog_t2193_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1351/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UserAuthorizationDialog::Start()
MethodInfo UserAuthorizationDialog_Start_m5276_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&UserAuthorizationDialog_Start_m5276/* method */
	, &UserAuthorizationDialog_t2193_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1352/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UserAuthorizationDialog::OnGUI()
MethodInfo UserAuthorizationDialog_OnGUI_m5277_MethodInfo = 
{
	"OnGUI"/* name */
	, (methodPointerType)&UserAuthorizationDialog_OnGUI_m5277/* method */
	, &UserAuthorizationDialog_t2193_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1353/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo UserAuthorizationDialog_t2193_UserAuthorizationDialog_DoUserAuthorizationDialog_m5278_ParameterInfos[] = 
{
	{"windowID", 0, 134219102, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UserAuthorizationDialog::DoUserAuthorizationDialog(System.Int32)
MethodInfo UserAuthorizationDialog_DoUserAuthorizationDialog_m5278_MethodInfo = 
{
	"DoUserAuthorizationDialog"/* name */
	, (methodPointerType)&UserAuthorizationDialog_DoUserAuthorizationDialog_m5278/* method */
	, &UserAuthorizationDialog_t2193_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, UserAuthorizationDialog_t2193_UserAuthorizationDialog_DoUserAuthorizationDialog_m5278_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1354/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UserAuthorizationDialog_t2193_MethodInfos[] =
{
	&UserAuthorizationDialog__ctor_m5275_MethodInfo,
	&UserAuthorizationDialog_Start_m5276_MethodInfo,
	&UserAuthorizationDialog_OnGUI_m5277_MethodInfo,
	&UserAuthorizationDialog_DoUserAuthorizationDialog_m5278_MethodInfo,
	NULL
};
static MethodInfo* UserAuthorizationDialog_t2193_VTable[] =
{
	&Object_Equals_m49_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m51_MethodInfo,
	&Object_ToString_m52_MethodInfo,
};
extern TypeInfo AddComponentMenu_t298_il2cpp_TypeInfo;
extern MethodInfo AddComponentMenu__ctor_m1352_MethodInfo;
void UserAuthorizationDialog_t2193_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t298 * tmp;
		tmp = (AddComponentMenu_t298 *)il2cpp_codegen_object_new (&AddComponentMenu_t298_il2cpp_TypeInfo);
		AddComponentMenu__ctor_m1352(tmp, il2cpp_codegen_string_new_wrapper(""), &AddComponentMenu__ctor_m1352_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache UserAuthorizationDialog_t2193__CustomAttributeCache = {
1,
NULL,
&UserAuthorizationDialog_t2193_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UserAuthorizationDialog_t2193_0_0_0;
extern Il2CppType UserAuthorizationDialog_t2193_1_0_0;
extern TypeInfo MonoBehaviour_t3_il2cpp_TypeInfo;
struct UserAuthorizationDialog_t2193;
extern CustomAttributesCache UserAuthorizationDialog_t2193__CustomAttributeCache;
TypeInfo UserAuthorizationDialog_t2193_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UserAuthorizationDialog"/* name */
	, "UnityEngine"/* namespaze */
	, UserAuthorizationDialog_t2193_MethodInfos/* methods */
	, NULL/* properties */
	, UserAuthorizationDialog_t2193_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t3_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UserAuthorizationDialog_t2193_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UserAuthorizationDialog_t2193_VTable/* vtable */
	, &UserAuthorizationDialog_t2193__CustomAttributeCache/* custom_attributes_cache */
	, &UserAuthorizationDialog_t2193_il2cpp_TypeInfo/* cast_class */
	, &UserAuthorizationDialog_t2193_0_0_0/* byval_arg */
	, &UserAuthorizationDialog_t2193_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UserAuthorizationDialog_t2193_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UserAuthorizationDialog_t2193)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultValueAttribute_t2194_il2cpp_TypeInfo;

extern MethodInfo DefaultValueAttribute_get_Value_m5280_MethodInfo;


// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern MethodInfo DefaultValueAttribute__ctor_m5279_MethodInfo;
 void DefaultValueAttribute__ctor_m5279 (DefaultValueAttribute_t2194 * __this, String_t* ___value, MethodInfo* method){
	{
		Attribute__ctor_m3409(__this, /*hidden argument*/&Attribute__ctor_m3409_MethodInfo);
		__this->___DefaultValue_0 = ___value;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
 Object_t * DefaultValueAttribute_get_Value_m5280 (DefaultValueAttribute_t2194 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern MethodInfo DefaultValueAttribute_Equals_m5281_MethodInfo;
 bool DefaultValueAttribute_Equals_m5281 (DefaultValueAttribute_t2194 * __this, Object_t * ___obj, MethodInfo* method){
	DefaultValueAttribute_t2194 * V_0 = {0};
	{
		V_0 = ((DefaultValueAttribute_t2194 *)IsInst(___obj, InitializedTypeInfo(&DefaultValueAttribute_t2194_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		NullCheck(V_0);
		Object_t * L_1 = DefaultValueAttribute_get_Value_m5280(V_0, /*hidden argument*/&DefaultValueAttribute_get_Value_m5280_MethodInfo);
		return ((((Object_t *)L_1) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(V_0);
		Object_t * L_3 = DefaultValueAttribute_get_Value_m5280(V_0, /*hidden argument*/&DefaultValueAttribute_get_Value_m5280_MethodInfo);
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1356_MethodInfo, L_2, L_3);
		return L_4;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern MethodInfo DefaultValueAttribute_GetHashCode_m5282_MethodInfo;
 int32_t DefaultValueAttribute_GetHashCode_m5282 (DefaultValueAttribute_t2194 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m3411(__this, /*hidden argument*/&Attribute_GetHashCode_m3411_MethodInfo);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1357_MethodInfo, L_2);
		return L_3;
	}
}
// Metadata Definition UnityEngine.Internal.DefaultValueAttribute
extern Il2CppType Object_t_0_0_1;
FieldInfo DefaultValueAttribute_t2194____DefaultValue_0_FieldInfo = 
{
	"DefaultValue"/* name */
	, &Object_t_0_0_1/* type */
	, &DefaultValueAttribute_t2194_il2cpp_TypeInfo/* parent */
	, offsetof(DefaultValueAttribute_t2194, ___DefaultValue_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* DefaultValueAttribute_t2194_FieldInfos[] =
{
	&DefaultValueAttribute_t2194____DefaultValue_0_FieldInfo,
	NULL
};
static PropertyInfo DefaultValueAttribute_t2194____Value_PropertyInfo = 
{
	&DefaultValueAttribute_t2194_il2cpp_TypeInfo/* parent */
	, "Value"/* name */
	, &DefaultValueAttribute_get_Value_m5280_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* DefaultValueAttribute_t2194_PropertyInfos[] =
{
	&DefaultValueAttribute_t2194____Value_PropertyInfo,
	NULL
};
extern Il2CppType String_t_0_0_0;
static ParameterInfo DefaultValueAttribute_t2194_DefaultValueAttribute__ctor_m5279_ParameterInfos[] = 
{
	{"value", 0, 134219103, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
MethodInfo DefaultValueAttribute__ctor_m5279_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultValueAttribute__ctor_m5279/* method */
	, &DefaultValueAttribute_t2194_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, DefaultValueAttribute_t2194_DefaultValueAttribute__ctor_m5279_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1355/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
MethodInfo DefaultValueAttribute_get_Value_m5280_MethodInfo = 
{
	"get_Value"/* name */
	, (methodPointerType)&DefaultValueAttribute_get_Value_m5280/* method */
	, &DefaultValueAttribute_t2194_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1356/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo DefaultValueAttribute_t2194_DefaultValueAttribute_Equals_m5281_ParameterInfos[] = 
{
	{"obj", 0, 134219104, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
MethodInfo DefaultValueAttribute_Equals_m5281_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&DefaultValueAttribute_Equals_m5281/* method */
	, &DefaultValueAttribute_t2194_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Object_t/* invoker_method */
	, DefaultValueAttribute_t2194_DefaultValueAttribute_Equals_m5281_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1357/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t23_0_0_0;
extern void* RuntimeInvoker_Int32_t23 (MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
MethodInfo DefaultValueAttribute_GetHashCode_m5282_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&DefaultValueAttribute_GetHashCode_m5282/* method */
	, &DefaultValueAttribute_t2194_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t23_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t23/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1358/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* DefaultValueAttribute_t2194_MethodInfos[] =
{
	&DefaultValueAttribute__ctor_m5279_MethodInfo,
	&DefaultValueAttribute_get_Value_m5280_MethodInfo,
	&DefaultValueAttribute_Equals_m5281_MethodInfo,
	&DefaultValueAttribute_GetHashCode_m5282_MethodInfo,
	NULL
};
static MethodInfo* DefaultValueAttribute_t2194_VTable[] =
{
	&DefaultValueAttribute_Equals_m5281_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&DefaultValueAttribute_GetHashCode_m5282_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultValueAttribute_t2194_InterfacesOffsets[] = 
{
	{ &_Attribute_t945_il2cpp_TypeInfo, 4},
};
void DefaultValueAttribute_t2194_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t946 * tmp;
		tmp = (AttributeUsageAttribute_t946 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t946_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m3412(tmp, 18432, &AttributeUsageAttribute__ctor_m3412_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache DefaultValueAttribute_t2194__CustomAttributeCache = {
1,
NULL,
&DefaultValueAttribute_t2194_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType DefaultValueAttribute_t2194_0_0_0;
extern Il2CppType DefaultValueAttribute_t2194_1_0_0;
struct DefaultValueAttribute_t2194;
extern CustomAttributesCache DefaultValueAttribute_t2194__CustomAttributeCache;
TypeInfo DefaultValueAttribute_t2194_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultValueAttribute"/* name */
	, "UnityEngine.Internal"/* namespaze */
	, DefaultValueAttribute_t2194_MethodInfos/* methods */
	, DefaultValueAttribute_t2194_PropertyInfos/* properties */
	, DefaultValueAttribute_t2194_FieldInfos/* fields */
	, NULL/* events */
	, &Attribute_t539_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &DefaultValueAttribute_t2194_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultValueAttribute_t2194_VTable/* vtable */
	, &DefaultValueAttribute_t2194__CustomAttributeCache/* custom_attributes_cache */
	, &DefaultValueAttribute_t2194_il2cpp_TypeInfo/* cast_class */
	, &DefaultValueAttribute_t2194_0_0_0/* byval_arg */
	, &DefaultValueAttribute_t2194_1_0_0/* this_arg */
	, DefaultValueAttribute_t2194_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultValueAttribute_t2194)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExcludeFromDocsAttribute_t2195_il2cpp_TypeInfo;



// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern MethodInfo ExcludeFromDocsAttribute__ctor_m5283_MethodInfo;
 void ExcludeFromDocsAttribute__ctor_m5283 (ExcludeFromDocsAttribute_t2195 * __this, MethodInfo* method){
	{
		Attribute__ctor_m3409(__this, /*hidden argument*/&Attribute__ctor_m3409_MethodInfo);
		return;
	}
}
// Metadata Definition UnityEngine.Internal.ExcludeFromDocsAttribute
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
MethodInfo ExcludeFromDocsAttribute__ctor_m5283_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExcludeFromDocsAttribute__ctor_m5283/* method */
	, &ExcludeFromDocsAttribute_t2195_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1359/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ExcludeFromDocsAttribute_t2195_MethodInfos[] =
{
	&ExcludeFromDocsAttribute__ctor_m5283_MethodInfo,
	NULL
};
static MethodInfo* ExcludeFromDocsAttribute_t2195_VTable[] =
{
	&Attribute_Equals_m3410_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Attribute_GetHashCode_m3411_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
};
static Il2CppInterfaceOffsetPair ExcludeFromDocsAttribute_t2195_InterfacesOffsets[] = 
{
	{ &_Attribute_t945_il2cpp_TypeInfo, 4},
};
void ExcludeFromDocsAttribute_t2195_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t946 * tmp;
		tmp = (AttributeUsageAttribute_t946 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t946_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m3412(tmp, 64, &AttributeUsageAttribute__ctor_m3412_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache ExcludeFromDocsAttribute_t2195__CustomAttributeCache = {
1,
NULL,
&ExcludeFromDocsAttribute_t2195_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType ExcludeFromDocsAttribute_t2195_0_0_0;
extern Il2CppType ExcludeFromDocsAttribute_t2195_1_0_0;
struct ExcludeFromDocsAttribute_t2195;
extern CustomAttributesCache ExcludeFromDocsAttribute_t2195__CustomAttributeCache;
TypeInfo ExcludeFromDocsAttribute_t2195_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExcludeFromDocsAttribute"/* name */
	, "UnityEngine.Internal"/* namespaze */
	, ExcludeFromDocsAttribute_t2195_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Attribute_t539_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ExcludeFromDocsAttribute_t2195_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ExcludeFromDocsAttribute_t2195_VTable/* vtable */
	, &ExcludeFromDocsAttribute_t2195__CustomAttributeCache/* custom_attributes_cache */
	, &ExcludeFromDocsAttribute_t2195_il2cpp_TypeInfo/* cast_class */
	, &ExcludeFromDocsAttribute_t2195_0_0_0/* byval_arg */
	, &ExcludeFromDocsAttribute_t2195_1_0_0/* this_arg */
	, ExcludeFromDocsAttribute_t2195_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExcludeFromDocsAttribute_t2195)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
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
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
 void FormerlySerializedAsAttribute__ctor_m1353 (FormerlySerializedAsAttribute_t299 * __this, String_t* ___oldName, MethodInfo* method){
	{
		Attribute__ctor_m3409(__this, /*hidden argument*/&Attribute__ctor_m3409_MethodInfo);
		__this->___m_oldName_0 = ___oldName;
		return;
	}
}
// Metadata Definition UnityEngine.Serialization.FormerlySerializedAsAttribute
extern Il2CppType String_t_0_0_1;
FieldInfo FormerlySerializedAsAttribute_t299____m_oldName_0_FieldInfo = 
{
	"m_oldName"/* name */
	, &String_t_0_0_1/* type */
	, &FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo/* parent */
	, offsetof(FormerlySerializedAsAttribute_t299, ___m_oldName_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* FormerlySerializedAsAttribute_t299_FieldInfos[] =
{
	&FormerlySerializedAsAttribute_t299____m_oldName_0_FieldInfo,
	NULL
};
extern Il2CppType String_t_0_0_0;
static ParameterInfo FormerlySerializedAsAttribute_t299_FormerlySerializedAsAttribute__ctor_m1353_ParameterInfos[] = 
{
	{"oldName", 0, 134219105, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
MethodInfo FormerlySerializedAsAttribute__ctor_m1353_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FormerlySerializedAsAttribute__ctor_m1353/* method */
	, &FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, FormerlySerializedAsAttribute_t299_FormerlySerializedAsAttribute__ctor_m1353_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1360/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* FormerlySerializedAsAttribute_t299_MethodInfos[] =
{
	&FormerlySerializedAsAttribute__ctor_m1353_MethodInfo,
	NULL
};
static MethodInfo* FormerlySerializedAsAttribute_t299_VTable[] =
{
	&Attribute_Equals_m3410_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Attribute_GetHashCode_m3411_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
};
static Il2CppInterfaceOffsetPair FormerlySerializedAsAttribute_t299_InterfacesOffsets[] = 
{
	{ &_Attribute_t945_il2cpp_TypeInfo, 4},
};
void FormerlySerializedAsAttribute_t299_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t946 * tmp;
		tmp = (AttributeUsageAttribute_t946 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t946_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m3412(tmp, 256, &AttributeUsageAttribute__ctor_m3412_MethodInfo);
		AttributeUsageAttribute_set_AllowMultiple_m3414(tmp, true, &AttributeUsageAttribute_set_AllowMultiple_m3414_MethodInfo);
		AttributeUsageAttribute_set_Inherited_m3413(tmp, false, &AttributeUsageAttribute_set_Inherited_m3413_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache FormerlySerializedAsAttribute_t299__CustomAttributeCache = {
1,
NULL,
&FormerlySerializedAsAttribute_t299_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType FormerlySerializedAsAttribute_t299_0_0_0;
extern Il2CppType FormerlySerializedAsAttribute_t299_1_0_0;
struct FormerlySerializedAsAttribute_t299;
extern CustomAttributesCache FormerlySerializedAsAttribute_t299__CustomAttributeCache;
TypeInfo FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "FormerlySerializedAsAttribute"/* name */
	, "UnityEngine.Serialization"/* namespaze */
	, FormerlySerializedAsAttribute_t299_MethodInfos/* methods */
	, NULL/* properties */
	, FormerlySerializedAsAttribute_t299_FieldInfos/* fields */
	, NULL/* events */
	, &Attribute_t539_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, FormerlySerializedAsAttribute_t299_VTable/* vtable */
	, &FormerlySerializedAsAttribute_t299__CustomAttributeCache/* custom_attributes_cache */
	, &FormerlySerializedAsAttribute_t299_il2cpp_TypeInfo/* cast_class */
	, &FormerlySerializedAsAttribute_t299_0_0_0/* byval_arg */
	, &FormerlySerializedAsAttribute_t299_1_0_0/* this_arg */
	, FormerlySerializedAsAttribute_t299_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FormerlySerializedAsAttribute_t299)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeInferenceRules_t2196_il2cpp_TypeInfo;



// Metadata Definition UnityEngineInternal.TypeInferenceRules
extern Il2CppType Int32_t23_0_0_1542;
FieldInfo TypeInferenceRules_t2196____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t23_0_0_1542/* type */
	, &TypeInferenceRules_t2196_il2cpp_TypeInfo/* parent */
	, offsetof(TypeInferenceRules_t2196, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TypeInferenceRules_t2196_0_0_32854;
FieldInfo TypeInferenceRules_t2196____TypeReferencedByFirstArgument_2_FieldInfo = 
{
	"TypeReferencedByFirstArgument"/* name */
	, &TypeInferenceRules_t2196_0_0_32854/* type */
	, &TypeInferenceRules_t2196_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TypeInferenceRules_t2196_0_0_32854;
FieldInfo TypeInferenceRules_t2196____TypeReferencedBySecondArgument_3_FieldInfo = 
{
	"TypeReferencedBySecondArgument"/* name */
	, &TypeInferenceRules_t2196_0_0_32854/* type */
	, &TypeInferenceRules_t2196_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TypeInferenceRules_t2196_0_0_32854;
FieldInfo TypeInferenceRules_t2196____ArrayOfTypeReferencedByFirstArgument_4_FieldInfo = 
{
	"ArrayOfTypeReferencedByFirstArgument"/* name */
	, &TypeInferenceRules_t2196_0_0_32854/* type */
	, &TypeInferenceRules_t2196_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TypeInferenceRules_t2196_0_0_32854;
FieldInfo TypeInferenceRules_t2196____TypeOfFirstArgument_5_FieldInfo = 
{
	"TypeOfFirstArgument"/* name */
	, &TypeInferenceRules_t2196_0_0_32854/* type */
	, &TypeInferenceRules_t2196_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TypeInferenceRules_t2196_FieldInfos[] =
{
	&TypeInferenceRules_t2196____value___1_FieldInfo,
	&TypeInferenceRules_t2196____TypeReferencedByFirstArgument_2_FieldInfo,
	&TypeInferenceRules_t2196____TypeReferencedBySecondArgument_3_FieldInfo,
	&TypeInferenceRules_t2196____ArrayOfTypeReferencedByFirstArgument_4_FieldInfo,
	&TypeInferenceRules_t2196____TypeOfFirstArgument_5_FieldInfo,
	NULL
};
static const int32_t TypeInferenceRules_t2196____TypeReferencedByFirstArgument_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry TypeInferenceRules_t2196____TypeReferencedByFirstArgument_2_DefaultValue = 
{
	&TypeInferenceRules_t2196____TypeReferencedByFirstArgument_2_FieldInfo/* field */
	, { (char*)&TypeInferenceRules_t2196____TypeReferencedByFirstArgument_2_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TypeInferenceRules_t2196____TypeReferencedBySecondArgument_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry TypeInferenceRules_t2196____TypeReferencedBySecondArgument_3_DefaultValue = 
{
	&TypeInferenceRules_t2196____TypeReferencedBySecondArgument_3_FieldInfo/* field */
	, { (char*)&TypeInferenceRules_t2196____TypeReferencedBySecondArgument_3_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TypeInferenceRules_t2196____ArrayOfTypeReferencedByFirstArgument_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry TypeInferenceRules_t2196____ArrayOfTypeReferencedByFirstArgument_4_DefaultValue = 
{
	&TypeInferenceRules_t2196____ArrayOfTypeReferencedByFirstArgument_4_FieldInfo/* field */
	, { (char*)&TypeInferenceRules_t2196____ArrayOfTypeReferencedByFirstArgument_4_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static const int32_t TypeInferenceRules_t2196____TypeOfFirstArgument_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry TypeInferenceRules_t2196____TypeOfFirstArgument_5_DefaultValue = 
{
	&TypeInferenceRules_t2196____TypeOfFirstArgument_5_FieldInfo/* field */
	, { (char*)&TypeInferenceRules_t2196____TypeOfFirstArgument_5_DefaultValueData, &Int32_t23_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* TypeInferenceRules_t2196_FieldDefaultValues[] = 
{
	&TypeInferenceRules_t2196____TypeReferencedByFirstArgument_2_DefaultValue,
	&TypeInferenceRules_t2196____TypeReferencedBySecondArgument_3_DefaultValue,
	&TypeInferenceRules_t2196____ArrayOfTypeReferencedByFirstArgument_4_DefaultValue,
	&TypeInferenceRules_t2196____TypeOfFirstArgument_5_DefaultValue,
	NULL
};
static MethodInfo* TypeInferenceRules_t2196_MethodInfos[] =
{
	NULL
};
static MethodInfo* TypeInferenceRules_t2196_VTable[] =
{
	&Enum_Equals_m1284_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Enum_GetHashCode_m1285_MethodInfo,
	&Enum_ToString_m1286_MethodInfo,
	&Enum_ToString_m1287_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m1288_MethodInfo,
	&Enum_System_IConvertible_ToByte_m1289_MethodInfo,
	&Enum_System_IConvertible_ToChar_m1290_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m1291_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m1292_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m1293_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m1294_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m1295_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m1296_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m1297_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m1298_MethodInfo,
	&Enum_ToString_m1299_MethodInfo,
	&Enum_System_IConvertible_ToType_m1300_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m1301_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m1302_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m1303_MethodInfo,
	&Enum_CompareTo_m1304_MethodInfo,
	&Enum_GetTypeCode_m1305_MethodInfo,
};
static Il2CppInterfaceOffsetPair TypeInferenceRules_t2196_InterfacesOffsets[] = 
{
	{ &IFormattable_t289_il2cpp_TypeInfo, 4},
	{ &IConvertible_t290_il2cpp_TypeInfo, 5},
	{ &IComparable_t291_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType TypeInferenceRules_t2196_0_0_0;
extern Il2CppType TypeInferenceRules_t2196_1_0_0;
TypeInfo TypeInferenceRules_t2196_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TypeInferenceRules"/* name */
	, "UnityEngineInternal"/* namespaze */
	, TypeInferenceRules_t2196_MethodInfos/* methods */
	, NULL/* properties */
	, TypeInferenceRules_t2196_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t293_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Int32_t23_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TypeInferenceRules_t2196_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t23_il2cpp_TypeInfo/* cast_class */
	, &TypeInferenceRules_t2196_0_0_0/* byval_arg */
	, &TypeInferenceRules_t2196_1_0_0/* this_arg */
	, TypeInferenceRules_t2196_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, TypeInferenceRules_t2196_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TypeInferenceRules_t2196)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeInferenceRuleAttribute_t2197_il2cpp_TypeInfo;

extern MethodInfo TypeInferenceRuleAttribute__ctor_m5285_MethodInfo;


// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern MethodInfo TypeInferenceRuleAttribute__ctor_m5284_MethodInfo;
 void TypeInferenceRuleAttribute__ctor_m5284 (TypeInferenceRuleAttribute_t2197 * __this, int32_t ___rule, MethodInfo* method){
	{
		int32_t L_0 = ___rule;
		Object_t * L_1 = Box(InitializedTypeInfo(&TypeInferenceRules_t2196_il2cpp_TypeInfo), &L_0);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1286_MethodInfo, L_1);
		TypeInferenceRuleAttribute__ctor_m5285(__this, L_2, /*hidden argument*/&TypeInferenceRuleAttribute__ctor_m5285_MethodInfo);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
 void TypeInferenceRuleAttribute__ctor_m5285 (TypeInferenceRuleAttribute_t2197 * __this, String_t* ___rule, MethodInfo* method){
	{
		Attribute__ctor_m3409(__this, /*hidden argument*/&Attribute__ctor_m3409_MethodInfo);
		__this->____rule_0 = ___rule;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern MethodInfo TypeInferenceRuleAttribute_ToString_m5286_MethodInfo;
 String_t* TypeInferenceRuleAttribute_ToString_m5286 (TypeInferenceRuleAttribute_t2197 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// Metadata Definition UnityEngineInternal.TypeInferenceRuleAttribute
extern Il2CppType String_t_0_0_33;
FieldInfo TypeInferenceRuleAttribute_t2197_____rule_0_FieldInfo = 
{
	"_rule"/* name */
	, &String_t_0_0_33/* type */
	, &TypeInferenceRuleAttribute_t2197_il2cpp_TypeInfo/* parent */
	, offsetof(TypeInferenceRuleAttribute_t2197, ____rule_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TypeInferenceRuleAttribute_t2197_FieldInfos[] =
{
	&TypeInferenceRuleAttribute_t2197_____rule_0_FieldInfo,
	NULL
};
extern Il2CppType TypeInferenceRules_t2196_0_0_0;
static ParameterInfo TypeInferenceRuleAttribute_t2197_TypeInferenceRuleAttribute__ctor_m5284_ParameterInfos[] = 
{
	{"rule", 0, 134219106, &EmptyCustomAttributesCache, &TypeInferenceRules_t2196_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Int32_t23 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
MethodInfo TypeInferenceRuleAttribute__ctor_m5284_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TypeInferenceRuleAttribute__ctor_m5284/* method */
	, &TypeInferenceRuleAttribute_t2197_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Int32_t23/* invoker_method */
	, TypeInferenceRuleAttribute_t2197_TypeInferenceRuleAttribute__ctor_m5284_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1361/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo TypeInferenceRuleAttribute_t2197_TypeInferenceRuleAttribute__ctor_m5285_ParameterInfos[] = 
{
	{"rule", 0, 134219107, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
MethodInfo TypeInferenceRuleAttribute__ctor_m5285_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TypeInferenceRuleAttribute__ctor_m5285/* method */
	, &TypeInferenceRuleAttribute_t2197_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, TypeInferenceRuleAttribute_t2197_TypeInferenceRuleAttribute__ctor_m5285_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1362/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
MethodInfo TypeInferenceRuleAttribute_ToString_m5286_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&TypeInferenceRuleAttribute_ToString_m5286/* method */
	, &TypeInferenceRuleAttribute_t2197_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1363/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TypeInferenceRuleAttribute_t2197_MethodInfos[] =
{
	&TypeInferenceRuleAttribute__ctor_m5284_MethodInfo,
	&TypeInferenceRuleAttribute__ctor_m5285_MethodInfo,
	&TypeInferenceRuleAttribute_ToString_m5286_MethodInfo,
	NULL
};
static MethodInfo* TypeInferenceRuleAttribute_t2197_VTable[] =
{
	&Attribute_Equals_m3410_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Attribute_GetHashCode_m3411_MethodInfo,
	&TypeInferenceRuleAttribute_ToString_m5286_MethodInfo,
};
static Il2CppInterfaceOffsetPair TypeInferenceRuleAttribute_t2197_InterfacesOffsets[] = 
{
	{ &_Attribute_t945_il2cpp_TypeInfo, 4},
};
void TypeInferenceRuleAttribute_t2197_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t946 * tmp;
		tmp = (AttributeUsageAttribute_t946 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t946_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m3412(tmp, 64, &AttributeUsageAttribute__ctor_m3412_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache TypeInferenceRuleAttribute_t2197__CustomAttributeCache = {
1,
NULL,
&TypeInferenceRuleAttribute_t2197_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType TypeInferenceRuleAttribute_t2197_0_0_0;
extern Il2CppType TypeInferenceRuleAttribute_t2197_1_0_0;
struct TypeInferenceRuleAttribute_t2197;
extern CustomAttributesCache TypeInferenceRuleAttribute_t2197__CustomAttributeCache;
TypeInfo TypeInferenceRuleAttribute_t2197_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TypeInferenceRuleAttribute"/* name */
	, "UnityEngineInternal"/* namespaze */
	, TypeInferenceRuleAttribute_t2197_MethodInfos/* methods */
	, NULL/* properties */
	, TypeInferenceRuleAttribute_t2197_FieldInfos/* fields */
	, NULL/* events */
	, &Attribute_t539_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TypeInferenceRuleAttribute_t2197_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TypeInferenceRuleAttribute_t2197_VTable/* vtable */
	, &TypeInferenceRuleAttribute_t2197__CustomAttributeCache/* custom_attributes_cache */
	, &TypeInferenceRuleAttribute_t2197_il2cpp_TypeInfo/* cast_class */
	, &TypeInferenceRuleAttribute_t2197_0_0_0/* byval_arg */
	, &TypeInferenceRuleAttribute_t2197_1_0_0/* this_arg */
	, TypeInferenceRuleAttribute_t2197_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TypeInferenceRuleAttribute_t2197)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericStack_t2052_il2cpp_TypeInfo;

extern MethodInfo Stack__ctor_m5477_MethodInfo;


// System.Void UnityEngineInternal.GenericStack::.ctor()
extern MethodInfo GenericStack__ctor_m5287_MethodInfo;
 void GenericStack__ctor_m5287 (GenericStack_t2052 * __this, MethodInfo* method){
	{
		Stack__ctor_m5477(__this, /*hidden argument*/&Stack__ctor_m5477_MethodInfo);
		return;
	}
}
// Metadata Definition UnityEngineInternal.GenericStack
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngineInternal.GenericStack::.ctor()
MethodInfo GenericStack__ctor_m5287_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericStack__ctor_m5287/* method */
	, &GenericStack_t2052_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1364/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* GenericStack_t2052_MethodInfos[] =
{
	&GenericStack__ctor_m5287_MethodInfo,
	NULL
};
extern MethodInfo Stack_GetEnumerator_m5478_MethodInfo;
extern MethodInfo Stack_get_Count_m5479_MethodInfo;
extern MethodInfo Stack_get_IsSynchronized_m5480_MethodInfo;
extern MethodInfo Stack_get_SyncRoot_m5481_MethodInfo;
extern MethodInfo Stack_CopyTo_m5482_MethodInfo;
extern MethodInfo Stack_Clear_m5316_MethodInfo;
extern MethodInfo Stack_Peek_m5483_MethodInfo;
extern MethodInfo Stack_Pop_m5484_MethodInfo;
extern MethodInfo Stack_Push_m5312_MethodInfo;
static MethodInfo* GenericStack_t2052_VTable[] =
{
	&Object_Equals_m1356_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m1357_MethodInfo,
	&Object_ToString_m1367_MethodInfo,
	&Stack_GetEnumerator_m5478_MethodInfo,
	&Stack_get_Count_m5479_MethodInfo,
	&Stack_get_IsSynchronized_m5480_MethodInfo,
	&Stack_get_SyncRoot_m5481_MethodInfo,
	&Stack_CopyTo_m5482_MethodInfo,
	&Stack_get_Count_m5479_MethodInfo,
	&Stack_get_IsSynchronized_m5480_MethodInfo,
	&Stack_get_SyncRoot_m5481_MethodInfo,
	&Stack_Clear_m5316_MethodInfo,
	&Stack_CopyTo_m5482_MethodInfo,
	&Stack_GetEnumerator_m5478_MethodInfo,
	&Stack_Peek_m5483_MethodInfo,
	&Stack_Pop_m5484_MethodInfo,
	&Stack_Push_m5312_MethodInfo,
};
extern TypeInfo IEnumerable_t545_il2cpp_TypeInfo;
extern TypeInfo ICloneable_t365_il2cpp_TypeInfo;
extern TypeInfo ICollection_t1193_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericStack_t2052_InterfacesOffsets[] = 
{
	{ &IEnumerable_t545_il2cpp_TypeInfo, 4},
	{ &ICloneable_t365_il2cpp_TypeInfo, 5},
	{ &ICollection_t1193_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType GenericStack_t2052_0_0_0;
extern Il2CppType GenericStack_t2052_1_0_0;
extern TypeInfo Stack_t2198_il2cpp_TypeInfo;
struct GenericStack_t2052;
TypeInfo GenericStack_t2052_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericStack"/* name */
	, "UnityEngineInternal"/* namespaze */
	, GenericStack_t2052_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Stack_t2198_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericStack_t2052_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericStack_t2052_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericStack_t2052_il2cpp_TypeInfo/* cast_class */
	, &GenericStack_t2052_0_0_0/* byval_arg */
	, &GenericStack_t2052_1_0_0/* this_arg */
	, GenericStack_t2052_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericStack_t2052)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
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
	, 18/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern MethodInfo UnityAction__ctor_m1771_MethodInfo;
 void UnityAction__ctor_m1771 (UnityAction_t158 * __this, Object_t * ___object, IntPtr_t34 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
 void UnityAction_Invoke_m1596 (UnityAction_t158 * __this, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m1596((UnityAction_t158 *)__this->___prev_9, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
void pinvoke_delegate_wrapper_UnityAction_t158(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo UnityAction_BeginInvoke_m5288_MethodInfo;
 Object_t * UnityAction_BeginInvoke_m5288 (UnityAction_t158 * __this, AsyncCallback_t64 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern MethodInfo UnityAction_EndInvoke_m5289_MethodInfo;
 void UnityAction_EndInvoke_m5289 (UnityAction_t158 * __this, Object_t * ___result, MethodInfo* method){
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// Metadata Definition UnityEngine.Events.UnityAction
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t34_0_0_0;
extern Il2CppType IntPtr_t34_0_0_0;
static ParameterInfo UnityAction_t158_UnityAction__ctor_m1771_ParameterInfos[] = 
{
	{"object", 0, 134219108, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219109, &EmptyCustomAttributesCache, &IntPtr_t34_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t_IntPtr_t34 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction__ctor_m1771_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction__ctor_m1771/* method */
	, &UnityAction_t158_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t_IntPtr_t34/* invoker_method */
	, UnityAction_t158_UnityAction__ctor_m1771_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1365/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction::Invoke()
MethodInfo UnityAction_Invoke_m1596_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_Invoke_m1596/* method */
	, &UnityAction_t158_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1366/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType AsyncCallback_t64_0_0_0;
extern Il2CppType AsyncCallback_t64_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_t158_UnityAction_BeginInvoke_m5288_ParameterInfos[] = 
{
	{"callback", 0, 134219110, &EmptyCustomAttributesCache, &AsyncCallback_t64_0_0_0},
	{"object", 1, 134219111, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t63_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
MethodInfo UnityAction_BeginInvoke_m5288_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_BeginInvoke_m5288/* method */
	, &UnityAction_t158_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t63_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_t158_UnityAction_BeginInvoke_m5288_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1367/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t63_0_0_0;
extern Il2CppType IAsyncResult_t63_0_0_0;
static ParameterInfo UnityAction_t158_UnityAction_EndInvoke_m5289_ParameterInfos[] = 
{
	{"result", 0, 134219112, &EmptyCustomAttributesCache, &IAsyncResult_t63_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_EndInvoke_m5289_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_EndInvoke_m5289/* method */
	, &UnityAction_t158_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, UnityAction_t158_UnityAction_EndInvoke_m5289_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1368/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityAction_t158_MethodInfos[] =
{
	&UnityAction__ctor_m1771_MethodInfo,
	&UnityAction_Invoke_m1596_MethodInfo,
	&UnityAction_BeginInvoke_m5288_MethodInfo,
	&UnityAction_EndInvoke_m5289_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m1732_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m1733_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m1734_MethodInfo;
extern MethodInfo MulticastDelegate_DynamicInvokeImpl_m1735_MethodInfo;
extern MethodInfo Delegate_Clone_m1736_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m1737_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m1738_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m1739_MethodInfo;
static MethodInfo* UnityAction_t158_VTable[] =
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
	&UnityAction_Invoke_m1596_MethodInfo,
	&UnityAction_BeginInvoke_m5288_MethodInfo,
	&UnityAction_EndInvoke_m5289_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_t158_InterfacesOffsets[] = 
{
	{ &ICloneable_t365_il2cpp_TypeInfo, 4},
	{ &ISerializable_t366_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_t158_1_0_0;
extern TypeInfo MulticastDelegate_t195_il2cpp_TypeInfo;
struct UnityAction_t158;
TypeInfo UnityAction_t158_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_t158_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t195_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_t158_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_t158_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_t158_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_t158_0_0_0/* byval_arg */
	, &UnityAction_t158_1_0_0/* this_arg */
	, UnityAction_t158_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_UnityAction_t158/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_t158)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
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
extern Il2CppGenericContainer UnityAction_1_t2199_Il2CppGenericContainer;
extern TypeInfo UnityAction_1_t2199_gp_T0_0_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_1_t2199_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_1_t2199_Il2CppGenericContainer, 0}, {NULL, "T0", 0, 0, NULL} };
static Il2CppGenericParamFull* UnityAction_1_t2199_Il2CppGenericParametersArray[1] = 
{
	&UnityAction_1_t2199_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo UnityAction_1_t2199_il2cpp_TypeInfo;
Il2CppGenericContainer UnityAction_1_t2199_Il2CppGenericContainer = { { NULL, NULL }, NULL, &UnityAction_1_t2199_il2cpp_TypeInfo, 1, 0, UnityAction_1_t2199_Il2CppGenericParametersArray };
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t34_0_0_0;
static ParameterInfo UnityAction_1_t2199_UnityAction_1__ctor_m5485_ParameterInfos[] = 
{
	{"object", 0, 134219113, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219114, &EmptyCustomAttributesCache, &IntPtr_t34_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityAction`1::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m5485_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityAction_1_t2199_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_1_t2199_UnityAction_1__ctor_m5485_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1369/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_1_t2199_gp_0_0_0_0;
extern Il2CppType UnityAction_1_t2199_gp_0_0_0_0;
static ParameterInfo UnityAction_1_t2199_UnityAction_1_Invoke_m5486_ParameterInfos[] = 
{
	{"arg0", 0, 134219115, &EmptyCustomAttributesCache, &UnityAction_1_t2199_gp_0_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityAction`1::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m5486_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &UnityAction_1_t2199_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_1_t2199_UnityAction_1_Invoke_m5486_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1370/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_1_t2199_gp_0_0_0_0;
extern Il2CppType AsyncCallback_t64_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t2199_UnityAction_1_BeginInvoke_m5487_ParameterInfos[] = 
{
	{"arg0", 0, 134219116, &EmptyCustomAttributesCache, &UnityAction_1_t2199_gp_0_0_0_0},
	{"callback", 1, 134219117, &EmptyCustomAttributesCache, &AsyncCallback_t64_0_0_0},
	{"object", 2, 134219118, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t63_0_0_0;
// System.IAsyncResult UnityEngine.Events.UnityAction`1::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m5487_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &UnityAction_1_t2199_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t63_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_1_t2199_UnityAction_1_BeginInvoke_m5487_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1371/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t63_0_0_0;
static ParameterInfo UnityAction_1_t2199_UnityAction_1_EndInvoke_m5488_ParameterInfos[] = 
{
	{"result", 0, 134219119, &EmptyCustomAttributesCache, &IAsyncResult_t63_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityAction`1::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m5488_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &UnityAction_1_t2199_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_1_t2199_UnityAction_1_EndInvoke_m5488_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1372/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityAction_1_t2199_MethodInfos[] =
{
	&UnityAction_1__ctor_m5485_MethodInfo,
	&UnityAction_1_Invoke_m5486_MethodInfo,
	&UnityAction_1_BeginInvoke_m5487_MethodInfo,
	&UnityAction_1_EndInvoke_m5488_MethodInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t2199_0_0_0;
extern Il2CppType UnityAction_1_t2199_1_0_0;
struct UnityAction_1_t2199;
TypeInfo UnityAction_1_t2199_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t2199_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t2199_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &UnityAction_1_t2199_0_0_0/* byval_arg */
	, &UnityAction_1_t2199_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &UnityAction_1_t2199_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
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
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
extern Il2CppGenericContainer UnityAction_2_t2200_Il2CppGenericContainer;
extern TypeInfo UnityAction_2_t2200_gp_T0_0_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_2_t2200_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_2_t2200_Il2CppGenericContainer, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo UnityAction_2_t2200_gp_T1_1_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_2_t2200_gp_T1_1_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_2_t2200_Il2CppGenericContainer, 1}, {NULL, "T1", 0, 0, NULL} };
static Il2CppGenericParamFull* UnityAction_2_t2200_Il2CppGenericParametersArray[2] = 
{
	&UnityAction_2_t2200_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
	&UnityAction_2_t2200_gp_T1_1_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo UnityAction_2_t2200_il2cpp_TypeInfo;
Il2CppGenericContainer UnityAction_2_t2200_Il2CppGenericContainer = { { NULL, NULL }, NULL, &UnityAction_2_t2200_il2cpp_TypeInfo, 2, 0, UnityAction_2_t2200_Il2CppGenericParametersArray };
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t34_0_0_0;
static ParameterInfo UnityAction_2_t2200_UnityAction_2__ctor_m5489_ParameterInfos[] = 
{
	{"object", 0, 134219120, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219121, &EmptyCustomAttributesCache, &IntPtr_t34_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityAction`2::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_2__ctor_m5489_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityAction_2_t2200_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_2_t2200_UnityAction_2__ctor_m5489_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1373/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_2_t2200_gp_0_0_0_0;
extern Il2CppType UnityAction_2_t2200_gp_0_0_0_0;
extern Il2CppType UnityAction_2_t2200_gp_1_0_0_0;
extern Il2CppType UnityAction_2_t2200_gp_1_0_0_0;
static ParameterInfo UnityAction_2_t2200_UnityAction_2_Invoke_m5490_ParameterInfos[] = 
{
	{"arg0", 0, 134219122, &EmptyCustomAttributesCache, &UnityAction_2_t2200_gp_0_0_0_0},
	{"arg1", 1, 134219123, &EmptyCustomAttributesCache, &UnityAction_2_t2200_gp_1_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityAction`2::Invoke(T0,T1)
MethodInfo UnityAction_2_Invoke_m5490_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &UnityAction_2_t2200_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_2_t2200_UnityAction_2_Invoke_m5490_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1374/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_2_t2200_gp_0_0_0_0;
extern Il2CppType UnityAction_2_t2200_gp_1_0_0_0;
extern Il2CppType AsyncCallback_t64_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_2_t2200_UnityAction_2_BeginInvoke_m5491_ParameterInfos[] = 
{
	{"arg0", 0, 134219124, &EmptyCustomAttributesCache, &UnityAction_2_t2200_gp_0_0_0_0},
	{"arg1", 1, 134219125, &EmptyCustomAttributesCache, &UnityAction_2_t2200_gp_1_0_0_0},
	{"callback", 2, 134219126, &EmptyCustomAttributesCache, &AsyncCallback_t64_0_0_0},
	{"object", 3, 134219127, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t63_0_0_0;
// System.IAsyncResult UnityEngine.Events.UnityAction`2::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
MethodInfo UnityAction_2_BeginInvoke_m5491_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &UnityAction_2_t2200_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t63_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_2_t2200_UnityAction_2_BeginInvoke_m5491_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1375/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t63_0_0_0;
static ParameterInfo UnityAction_2_t2200_UnityAction_2_EndInvoke_m5492_ParameterInfos[] = 
{
	{"result", 0, 134219128, &EmptyCustomAttributesCache, &IAsyncResult_t63_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityAction`2::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_2_EndInvoke_m5492_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &UnityAction_2_t2200_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_2_t2200_UnityAction_2_EndInvoke_m5492_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1376/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityAction_2_t2200_MethodInfos[] =
{
	&UnityAction_2__ctor_m5489_MethodInfo,
	&UnityAction_2_Invoke_m5490_MethodInfo,
	&UnityAction_2_BeginInvoke_m5491_MethodInfo,
	&UnityAction_2_EndInvoke_m5492_MethodInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_2_t2200_0_0_0;
extern Il2CppType UnityAction_2_t2200_1_0_0;
struct UnityAction_2_t2200;
TypeInfo UnityAction_2_t2200_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`2"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_2_t2200_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_2_t2200_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &UnityAction_2_t2200_0_0_0/* byval_arg */
	, &UnityAction_2_t2200_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &UnityAction_2_t2200_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
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
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
extern Il2CppGenericContainer UnityAction_3_t2201_Il2CppGenericContainer;
extern TypeInfo UnityAction_3_t2201_gp_T0_0_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_3_t2201_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_3_t2201_Il2CppGenericContainer, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo UnityAction_3_t2201_gp_T1_1_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_3_t2201_gp_T1_1_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_3_t2201_Il2CppGenericContainer, 1}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo UnityAction_3_t2201_gp_T2_2_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_3_t2201_gp_T2_2_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_3_t2201_Il2CppGenericContainer, 2}, {NULL, "T2", 0, 0, NULL} };
static Il2CppGenericParamFull* UnityAction_3_t2201_Il2CppGenericParametersArray[3] = 
{
	&UnityAction_3_t2201_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
	&UnityAction_3_t2201_gp_T1_1_il2cpp_TypeInfo_GenericParamFull,
	&UnityAction_3_t2201_gp_T2_2_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo UnityAction_3_t2201_il2cpp_TypeInfo;
Il2CppGenericContainer UnityAction_3_t2201_Il2CppGenericContainer = { { NULL, NULL }, NULL, &UnityAction_3_t2201_il2cpp_TypeInfo, 3, 0, UnityAction_3_t2201_Il2CppGenericParametersArray };
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t34_0_0_0;
static ParameterInfo UnityAction_3_t2201_UnityAction_3__ctor_m5493_ParameterInfos[] = 
{
	{"object", 0, 134219129, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219130, &EmptyCustomAttributesCache, &IntPtr_t34_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityAction`3::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_3__ctor_m5493_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityAction_3_t2201_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_3_t2201_UnityAction_3__ctor_m5493_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1377/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_3_t2201_gp_0_0_0_0;
extern Il2CppType UnityAction_3_t2201_gp_0_0_0_0;
extern Il2CppType UnityAction_3_t2201_gp_1_0_0_0;
extern Il2CppType UnityAction_3_t2201_gp_1_0_0_0;
extern Il2CppType UnityAction_3_t2201_gp_2_0_0_0;
extern Il2CppType UnityAction_3_t2201_gp_2_0_0_0;
static ParameterInfo UnityAction_3_t2201_UnityAction_3_Invoke_m5494_ParameterInfos[] = 
{
	{"arg0", 0, 134219131, &EmptyCustomAttributesCache, &UnityAction_3_t2201_gp_0_0_0_0},
	{"arg1", 1, 134219132, &EmptyCustomAttributesCache, &UnityAction_3_t2201_gp_1_0_0_0},
	{"arg2", 2, 134219133, &EmptyCustomAttributesCache, &UnityAction_3_t2201_gp_2_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityAction`3::Invoke(T0,T1,T2)
MethodInfo UnityAction_3_Invoke_m5494_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &UnityAction_3_t2201_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_3_t2201_UnityAction_3_Invoke_m5494_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1378/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_3_t2201_gp_0_0_0_0;
extern Il2CppType UnityAction_3_t2201_gp_1_0_0_0;
extern Il2CppType UnityAction_3_t2201_gp_2_0_0_0;
extern Il2CppType AsyncCallback_t64_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_3_t2201_UnityAction_3_BeginInvoke_m5495_ParameterInfos[] = 
{
	{"arg0", 0, 134219134, &EmptyCustomAttributesCache, &UnityAction_3_t2201_gp_0_0_0_0},
	{"arg1", 1, 134219135, &EmptyCustomAttributesCache, &UnityAction_3_t2201_gp_1_0_0_0},
	{"arg2", 2, 134219136, &EmptyCustomAttributesCache, &UnityAction_3_t2201_gp_2_0_0_0},
	{"callback", 3, 134219137, &EmptyCustomAttributesCache, &AsyncCallback_t64_0_0_0},
	{"object", 4, 134219138, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t63_0_0_0;
// System.IAsyncResult UnityEngine.Events.UnityAction`3::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
MethodInfo UnityAction_3_BeginInvoke_m5495_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &UnityAction_3_t2201_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t63_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_3_t2201_UnityAction_3_BeginInvoke_m5495_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1379/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t63_0_0_0;
static ParameterInfo UnityAction_3_t2201_UnityAction_3_EndInvoke_m5496_ParameterInfos[] = 
{
	{"result", 0, 134219139, &EmptyCustomAttributesCache, &IAsyncResult_t63_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityAction`3::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_3_EndInvoke_m5496_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &UnityAction_3_t2201_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_3_t2201_UnityAction_3_EndInvoke_m5496_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1380/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityAction_3_t2201_MethodInfos[] =
{
	&UnityAction_3__ctor_m5493_MethodInfo,
	&UnityAction_3_Invoke_m5494_MethodInfo,
	&UnityAction_3_BeginInvoke_m5495_MethodInfo,
	&UnityAction_3_EndInvoke_m5496_MethodInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_3_t2201_0_0_0;
extern Il2CppType UnityAction_3_t2201_1_0_0;
struct UnityAction_3_t2201;
TypeInfo UnityAction_3_t2201_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`3"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_3_t2201_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_3_t2201_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &UnityAction_3_t2201_0_0_0/* byval_arg */
	, &UnityAction_3_t2201_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &UnityAction_3_t2201_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
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
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
extern Il2CppGenericContainer UnityAction_4_t2202_Il2CppGenericContainer;
extern TypeInfo UnityAction_4_t2202_gp_T0_0_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_4_t2202_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_4_t2202_Il2CppGenericContainer, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo UnityAction_4_t2202_gp_T1_1_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_4_t2202_gp_T1_1_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_4_t2202_Il2CppGenericContainer, 1}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo UnityAction_4_t2202_gp_T2_2_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_4_t2202_gp_T2_2_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_4_t2202_Il2CppGenericContainer, 2}, {NULL, "T2", 0, 0, NULL} };
extern TypeInfo UnityAction_4_t2202_gp_T3_3_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_4_t2202_gp_T3_3_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_4_t2202_Il2CppGenericContainer, 3}, {NULL, "T3", 0, 0, NULL} };
static Il2CppGenericParamFull* UnityAction_4_t2202_Il2CppGenericParametersArray[4] = 
{
	&UnityAction_4_t2202_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
	&UnityAction_4_t2202_gp_T1_1_il2cpp_TypeInfo_GenericParamFull,
	&UnityAction_4_t2202_gp_T2_2_il2cpp_TypeInfo_GenericParamFull,
	&UnityAction_4_t2202_gp_T3_3_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo UnityAction_4_t2202_il2cpp_TypeInfo;
Il2CppGenericContainer UnityAction_4_t2202_Il2CppGenericContainer = { { NULL, NULL }, NULL, &UnityAction_4_t2202_il2cpp_TypeInfo, 4, 0, UnityAction_4_t2202_Il2CppGenericParametersArray };
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t34_0_0_0;
static ParameterInfo UnityAction_4_t2202_UnityAction_4__ctor_m5497_ParameterInfos[] = 
{
	{"object", 0, 134219140, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219141, &EmptyCustomAttributesCache, &IntPtr_t34_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityAction`4::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_4__ctor_m5497_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityAction_4_t2202_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_4_t2202_UnityAction_4__ctor_m5497_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1381/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_4_t2202_gp_0_0_0_0;
extern Il2CppType UnityAction_4_t2202_gp_0_0_0_0;
extern Il2CppType UnityAction_4_t2202_gp_1_0_0_0;
extern Il2CppType UnityAction_4_t2202_gp_1_0_0_0;
extern Il2CppType UnityAction_4_t2202_gp_2_0_0_0;
extern Il2CppType UnityAction_4_t2202_gp_2_0_0_0;
extern Il2CppType UnityAction_4_t2202_gp_3_0_0_0;
extern Il2CppType UnityAction_4_t2202_gp_3_0_0_0;
static ParameterInfo UnityAction_4_t2202_UnityAction_4_Invoke_m5498_ParameterInfos[] = 
{
	{"arg0", 0, 134219142, &EmptyCustomAttributesCache, &UnityAction_4_t2202_gp_0_0_0_0},
	{"arg1", 1, 134219143, &EmptyCustomAttributesCache, &UnityAction_4_t2202_gp_1_0_0_0},
	{"arg2", 2, 134219144, &EmptyCustomAttributesCache, &UnityAction_4_t2202_gp_2_0_0_0},
	{"arg3", 3, 134219145, &EmptyCustomAttributesCache, &UnityAction_4_t2202_gp_3_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityAction`4::Invoke(T0,T1,T2,T3)
MethodInfo UnityAction_4_Invoke_m5498_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &UnityAction_4_t2202_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_4_t2202_UnityAction_4_Invoke_m5498_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1382/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_4_t2202_gp_0_0_0_0;
extern Il2CppType UnityAction_4_t2202_gp_1_0_0_0;
extern Il2CppType UnityAction_4_t2202_gp_2_0_0_0;
extern Il2CppType UnityAction_4_t2202_gp_3_0_0_0;
extern Il2CppType AsyncCallback_t64_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_4_t2202_UnityAction_4_BeginInvoke_m5499_ParameterInfos[] = 
{
	{"arg0", 0, 134219146, &EmptyCustomAttributesCache, &UnityAction_4_t2202_gp_0_0_0_0},
	{"arg1", 1, 134219147, &EmptyCustomAttributesCache, &UnityAction_4_t2202_gp_1_0_0_0},
	{"arg2", 2, 134219148, &EmptyCustomAttributesCache, &UnityAction_4_t2202_gp_2_0_0_0},
	{"arg3", 3, 134219149, &EmptyCustomAttributesCache, &UnityAction_4_t2202_gp_3_0_0_0},
	{"callback", 4, 134219150, &EmptyCustomAttributesCache, &AsyncCallback_t64_0_0_0},
	{"object", 5, 134219151, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t63_0_0_0;
// System.IAsyncResult UnityEngine.Events.UnityAction`4::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
MethodInfo UnityAction_4_BeginInvoke_m5499_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &UnityAction_4_t2202_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t63_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_4_t2202_UnityAction_4_BeginInvoke_m5499_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1383/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t63_0_0_0;
static ParameterInfo UnityAction_4_t2202_UnityAction_4_EndInvoke_m5500_ParameterInfos[] = 
{
	{"result", 0, 134219152, &EmptyCustomAttributesCache, &IAsyncResult_t63_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
// System.Void UnityEngine.Events.UnityAction`4::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_4_EndInvoke_m5500_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &UnityAction_4_t2202_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_4_t2202_UnityAction_4_EndInvoke_m5500_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1384/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityAction_4_t2202_MethodInfos[] =
{
	&UnityAction_4__ctor_m5497_MethodInfo,
	&UnityAction_4_Invoke_m5498_MethodInfo,
	&UnityAction_4_BeginInvoke_m5499_MethodInfo,
	&UnityAction_4_EndInvoke_m5500_MethodInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_4_t2202_0_0_0;
extern Il2CppType UnityAction_4_t2202_1_0_0;
struct UnityAction_4_t2202;
TypeInfo UnityAction_4_t2202_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`4"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_4_t2202_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_4_t2202_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &UnityAction_4_t2202_0_0_0/* byval_arg */
	, &UnityAction_4_t2202_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &UnityAction_4_t2202_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
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
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
