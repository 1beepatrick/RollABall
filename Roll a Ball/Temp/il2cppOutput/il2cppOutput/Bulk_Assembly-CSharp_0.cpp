#include "il2cpp_precompiled_header.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CModuleU3E_t0_il2cpp_TypeInfo;



// Metadata Definition <Module>
static MethodInfo* U3CModuleU3E_t0_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType U3CModuleU3E_t0_0_0_0;
extern Il2CppType U3CModuleU3E_t0_1_0_0;
struct U3CModuleU3E_t0;
TypeInfo U3CModuleU3E_t0_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "<Module>"/* name */
	, ""/* namespaze */
	, U3CModuleU3E_t0_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &U3CModuleU3E_t0_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &U3CModuleU3E_t0_il2cpp_TypeInfo/* cast_class */
	, &U3CModuleU3E_t0_0_0_0/* byval_arg */
	, &U3CModuleU3E_t0_1_0_0/* this_arg */
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
	, sizeof (U3CModuleU3E_t0)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 0/* flags */
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
	, 0/* method_count */
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
extern TypeInfo BallScore_t2_il2cpp_TypeInfo;

extern TypeInfo ParseObject_t21_il2cpp_TypeInfo;
extern TypeInfo Void_t22_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo PlayerControle_t13_il2cpp_TypeInfo;
extern TypeInfo Int32_t23_il2cpp_TypeInfo;
extern TypeInfo Text_t1_il2cpp_TypeInfo;
extern MethodInfo MonoBehaviour__ctor_m41_MethodInfo;
extern MethodInfo BallScore_SetHighScoreText_m4_MethodInfo;
extern MethodInfo ParseObject__ctor_m42_MethodInfo;
extern MethodInfo ParseObject_set_Item_m43_MethodInfo;
extern MethodInfo ParseObject_SaveAsync_m44_MethodInfo;
extern MethodInfo Debug_Log_m45_MethodInfo;
extern MethodInfo Int32_ToString_m46_MethodInfo;
extern MethodInfo String_Concat_m47_MethodInfo;
extern MethodInfo Text_set_text_m48_MethodInfo;


// System.Void BallScore::.ctor()
extern MethodInfo BallScore__ctor_m0_MethodInfo;
 void BallScore__ctor_m0 (BallScore_t2 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/&MonoBehaviour__ctor_m41_MethodInfo);
		return;
	}
}
// System.Void BallScore::Start()
extern MethodInfo BallScore_Start_m1_MethodInfo;
 void BallScore_Start_m1 (BallScore_t2 * __this, MethodInfo* method){
	{
		BallScore_SetHighScoreText_m4(__this, /*hidden argument*/&BallScore_SetHighScoreText_m4_MethodInfo);
		return;
	}
}
// System.Void BallScore::OnSave()
extern MethodInfo BallScore_OnSave_m2_MethodInfo;
 void BallScore_OnSave_m2 (BallScore_t2 * __this, MethodInfo* method){
	{
		__this->___parseNeedsUpdate_2 = 1;
		return;
	}
}
// System.Void BallScore::Update()
extern MethodInfo BallScore_Update_m3_MethodInfo;
 void BallScore_Update_m3 (BallScore_t2 * __this, MethodInfo* method){
	ParseObject_t21 * V_0 = {0};
	{
		bool L_0 = (__this->___parseNeedsUpdate_2);
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ParseObject_t21_il2cpp_TypeInfo));
		ParseObject_t21 * L_1 = (ParseObject_t21 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ParseObject_t21_il2cpp_TypeInfo));
		ParseObject__ctor_m42(L_1, (String_t*) &_stringLiteral1, /*hidden argument*/&ParseObject__ctor_m42_MethodInfo);
		V_0 = L_1;
		NullCheck(V_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(&ParseObject_set_Item_m43_MethodInfo, V_0, (String_t*) &_stringLiteral2, (String_t*) &_stringLiteral2);
		int32_t L_2 = (((PlayerControle_t13_StaticFields*)InitializedTypeInfo(&PlayerControle_t13_il2cpp_TypeInfo)->static_fields)->___count_6);
		Object_t * L_3 = Box(InitializedTypeInfo(&Int32_t23_il2cpp_TypeInfo), &L_2);
		NullCheck(V_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(&ParseObject_set_Item_m43_MethodInfo, V_0, (String_t*) &_stringLiteral3, L_3);
		NullCheck(V_0);
		ParseObject_SaveAsync_m44(V_0, /*hidden argument*/&ParseObject_SaveAsync_m44_MethodInfo);
		Debug_Log_m45(NULL /*static, unused*/, (String_t*) &_stringLiteral4, /*hidden argument*/&Debug_Log_m45_MethodInfo);
		__this->___parseNeedsUpdate_2 = 0;
	}

IL_0053:
	{
		return;
	}
}
// System.Void BallScore::SetHighScoreText()
 void BallScore_SetHighScoreText_m4 (BallScore_t2 * __this, MethodInfo* method){
	{
		Text_t1 * L_0 = (__this->___highScoreText_3);
		String_t* L_1 = Int32_ToString_m46((&((PlayerControle_t13_StaticFields*)InitializedTypeInfo(&PlayerControle_t13_il2cpp_TypeInfo)->static_fields)->___count_6), /*hidden argument*/&Int32_ToString_m46_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m47(NULL /*static, unused*/, (String_t*) &_stringLiteral5, L_1, /*hidden argument*/&String_Concat_m47_MethodInfo);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(&Text_set_text_m48_MethodInfo, L_0, L_2);
		return;
	}
}
// Metadata Definition BallScore
extern Il2CppType Boolean_t24_0_0_6;
FieldInfo BallScore_t2____parseNeedsUpdate_2_FieldInfo = 
{
	"parseNeedsUpdate"/* name */
	, &Boolean_t24_0_0_6/* type */
	, &BallScore_t2_il2cpp_TypeInfo/* parent */
	, offsetof(BallScore_t2, ___parseNeedsUpdate_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Text_t1_0_0_6;
FieldInfo BallScore_t2____highScoreText_3_FieldInfo = 
{
	"highScoreText"/* name */
	, &Text_t1_0_0_6/* type */
	, &BallScore_t2_il2cpp_TypeInfo/* parent */
	, offsetof(BallScore_t2, ___highScoreText_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* BallScore_t2_FieldInfos[] =
{
	&BallScore_t2____parseNeedsUpdate_2_FieldInfo,
	&BallScore_t2____highScoreText_3_FieldInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void BallScore::.ctor()
MethodInfo BallScore__ctor_m0_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BallScore__ctor_m0/* method */
	, &BallScore_t2_il2cpp_TypeInfo/* declaring_type */
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
	, 1/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void BallScore::Start()
MethodInfo BallScore_Start_m1_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&BallScore_Start_m1/* method */
	, &BallScore_t2_il2cpp_TypeInfo/* declaring_type */
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
	, 2/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void BallScore::OnSave()
MethodInfo BallScore_OnSave_m2_MethodInfo = 
{
	"OnSave"/* name */
	, (methodPointerType)&BallScore_OnSave_m2/* method */
	, &BallScore_t2_il2cpp_TypeInfo/* declaring_type */
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
	, 3/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void BallScore::Update()
MethodInfo BallScore_Update_m3_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&BallScore_Update_m3/* method */
	, &BallScore_t2_il2cpp_TypeInfo/* declaring_type */
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
	, 4/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void BallScore::SetHighScoreText()
MethodInfo BallScore_SetHighScoreText_m4_MethodInfo = 
{
	"SetHighScoreText"/* name */
	, (methodPointerType)&BallScore_SetHighScoreText_m4/* method */
	, &BallScore_t2_il2cpp_TypeInfo/* declaring_type */
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
	, 5/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* BallScore_t2_MethodInfos[] =
{
	&BallScore__ctor_m0_MethodInfo,
	&BallScore_Start_m1_MethodInfo,
	&BallScore_OnSave_m2_MethodInfo,
	&BallScore_Update_m3_MethodInfo,
	&BallScore_SetHighScoreText_m4_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m49_MethodInfo;
extern MethodInfo Object_Finalize_m50_MethodInfo;
extern MethodInfo Object_GetHashCode_m51_MethodInfo;
extern MethodInfo Object_ToString_m52_MethodInfo;
static MethodInfo* BallScore_t2_VTable[] =
{
	&Object_Equals_m49_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m51_MethodInfo,
	&Object_ToString_m52_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType BallScore_t2_0_0_0;
extern Il2CppType BallScore_t2_1_0_0;
extern TypeInfo MonoBehaviour_t3_il2cpp_TypeInfo;
struct BallScore_t2;
TypeInfo BallScore_t2_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "BallScore"/* name */
	, ""/* namespaze */
	, BallScore_t2_MethodInfos/* methods */
	, NULL/* properties */
	, BallScore_t2_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t3_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &BallScore_t2_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, BallScore_t2_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &BallScore_t2_il2cpp_TypeInfo/* cast_class */
	, &BallScore_t2_0_0_0/* byval_arg */
	, &BallScore_t2_1_0_0/* this_arg */
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
	, sizeof (BallScore_t2)/* instance_size */
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
	, 5/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraControler_t5_il2cpp_TypeInfo;

extern MethodInfo Component_get_transform_m53_MethodInfo;
extern MethodInfo Transform_get_position_m54_MethodInfo;
extern MethodInfo GameObject_get_transform_m55_MethodInfo;
extern MethodInfo Vector3_op_Subtraction_m56_MethodInfo;
extern MethodInfo Vector3_op_Addition_m57_MethodInfo;
extern MethodInfo Transform_set_position_m58_MethodInfo;


// System.Void CameraControler::.ctor()
extern MethodInfo CameraControler__ctor_m5_MethodInfo;
 void CameraControler__ctor_m5 (CameraControler_t5 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/&MonoBehaviour__ctor_m41_MethodInfo);
		return;
	}
}
// System.Void CameraControler::Start()
extern MethodInfo CameraControler_Start_m6_MethodInfo;
 void CameraControler_Start_m6 (CameraControler_t5 * __this, MethodInfo* method){
	{
		Transform_t25 * L_0 = Component_get_transform_m53(__this, /*hidden argument*/&Component_get_transform_m53_MethodInfo);
		NullCheck(L_0);
		Vector3_t6  L_1 = Transform_get_position_m54(L_0, /*hidden argument*/&Transform_get_position_m54_MethodInfo);
		GameObject_t4 * L_2 = (__this->___player_2);
		NullCheck(L_2);
		Transform_t25 * L_3 = GameObject_get_transform_m55(L_2, /*hidden argument*/&GameObject_get_transform_m55_MethodInfo);
		NullCheck(L_3);
		Vector3_t6  L_4 = Transform_get_position_m54(L_3, /*hidden argument*/&Transform_get_position_m54_MethodInfo);
		Vector3_t6  L_5 = Vector3_op_Subtraction_m56(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/&Vector3_op_Subtraction_m56_MethodInfo);
		__this->___offset_3 = L_5;
		return;
	}
}
// System.Void CameraControler::LateUpdate()
extern MethodInfo CameraControler_LateUpdate_m7_MethodInfo;
 void CameraControler_LateUpdate_m7 (CameraControler_t5 * __this, MethodInfo* method){
	{
		Transform_t25 * L_0 = Component_get_transform_m53(__this, /*hidden argument*/&Component_get_transform_m53_MethodInfo);
		GameObject_t4 * L_1 = (__this->___player_2);
		NullCheck(L_1);
		Transform_t25 * L_2 = GameObject_get_transform_m55(L_1, /*hidden argument*/&GameObject_get_transform_m55_MethodInfo);
		NullCheck(L_2);
		Vector3_t6  L_3 = Transform_get_position_m54(L_2, /*hidden argument*/&Transform_get_position_m54_MethodInfo);
		Vector3_t6  L_4 = (__this->___offset_3);
		Vector3_t6  L_5 = Vector3_op_Addition_m57(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Addition_m57_MethodInfo);
		NullCheck(L_0);
		Transform_set_position_m58(L_0, L_5, /*hidden argument*/&Transform_set_position_m58_MethodInfo);
		return;
	}
}
// Metadata Definition CameraControler
extern Il2CppType GameObject_t4_0_0_6;
FieldInfo CameraControler_t5____player_2_FieldInfo = 
{
	"player"/* name */
	, &GameObject_t4_0_0_6/* type */
	, &CameraControler_t5_il2cpp_TypeInfo/* parent */
	, offsetof(CameraControler_t5, ___player_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector3_t6_0_0_1;
FieldInfo CameraControler_t5____offset_3_FieldInfo = 
{
	"offset"/* name */
	, &Vector3_t6_0_0_1/* type */
	, &CameraControler_t5_il2cpp_TypeInfo/* parent */
	, offsetof(CameraControler_t5, ___offset_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CameraControler_t5_FieldInfos[] =
{
	&CameraControler_t5____player_2_FieldInfo,
	&CameraControler_t5____offset_3_FieldInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void CameraControler::.ctor()
MethodInfo CameraControler__ctor_m5_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CameraControler__ctor_m5/* method */
	, &CameraControler_t5_il2cpp_TypeInfo/* declaring_type */
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
	, 6/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void CameraControler::Start()
MethodInfo CameraControler_Start_m6_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&CameraControler_Start_m6/* method */
	, &CameraControler_t5_il2cpp_TypeInfo/* declaring_type */
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
	, 7/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void CameraControler::LateUpdate()
MethodInfo CameraControler_LateUpdate_m7_MethodInfo = 
{
	"LateUpdate"/* name */
	, (methodPointerType)&CameraControler_LateUpdate_m7/* method */
	, &CameraControler_t5_il2cpp_TypeInfo/* declaring_type */
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
	, 8/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CameraControler_t5_MethodInfos[] =
{
	&CameraControler__ctor_m5_MethodInfo,
	&CameraControler_Start_m6_MethodInfo,
	&CameraControler_LateUpdate_m7_MethodInfo,
	NULL
};
static MethodInfo* CameraControler_t5_VTable[] =
{
	&Object_Equals_m49_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m51_MethodInfo,
	&Object_ToString_m52_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CameraControler_t5_0_0_0;
extern Il2CppType CameraControler_t5_1_0_0;
struct CameraControler_t5;
TypeInfo CameraControler_t5_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CameraControler"/* name */
	, ""/* namespaze */
	, CameraControler_t5_MethodInfos/* methods */
	, NULL/* properties */
	, CameraControler_t5_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t3_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CameraControler_t5_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CameraControler_t5_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CameraControler_t5_il2cpp_TypeInfo/* cast_class */
	, &CameraControler_t5_0_0_0/* byval_arg */
	, &CameraControler_t5_1_0_0/* this_arg */
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
	, sizeof (CameraControler_t5)/* instance_size */
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
	, 3/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ScoreEntry_t7_il2cpp_TypeInfo;



// Conversion methods for marshalling of: GlobalScoreboard/ScoreEntry
void ScoreEntry_t7_marshal(const ScoreEntry_t7& unmarshaled, ScoreEntry_t7_marshaled& marshaled)
{
	marshaled.___score_0 = unmarshaled.___score_0;
	marshaled.___name_1 = il2cpp_codegen_marshal_string(unmarshaled.___name_1);
}
void ScoreEntry_t7_marshal_back(const ScoreEntry_t7_marshaled& marshaled, ScoreEntry_t7& unmarshaled)
{
	unmarshaled.___score_0 = marshaled.___score_0;
	unmarshaled.___name_1 = il2cpp_codegen_marshal_string_result(marshaled.___name_1);
}
// Conversion method for clean up from marshalling of: GlobalScoreboard/ScoreEntry
void ScoreEntry_t7_marshal_cleanup(ScoreEntry_t7_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_1);
	marshaled.___name_1 = NULL;
}
// Metadata Definition GlobalScoreboard/ScoreEntry
extern Il2CppType Int32_t23_0_0_6;
FieldInfo ScoreEntry_t7____score_0_FieldInfo = 
{
	"score"/* name */
	, &Int32_t23_0_0_6/* type */
	, &ScoreEntry_t7_il2cpp_TypeInfo/* parent */
	, offsetof(ScoreEntry_t7, ___score_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_6;
FieldInfo ScoreEntry_t7____name_1_FieldInfo = 
{
	"name"/* name */
	, &String_t_0_0_6/* type */
	, &ScoreEntry_t7_il2cpp_TypeInfo/* parent */
	, offsetof(ScoreEntry_t7, ___name_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ScoreEntry_t7_FieldInfos[] =
{
	&ScoreEntry_t7____score_0_FieldInfo,
	&ScoreEntry_t7____name_1_FieldInfo,
	NULL
};
static MethodInfo* ScoreEntry_t7_MethodInfos[] =
{
	NULL
};
extern MethodInfo ValueType_Equals_m59_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m60_MethodInfo;
extern MethodInfo ValueType_ToString_m61_MethodInfo;
static MethodInfo* ScoreEntry_t7_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType ScoreEntry_t7_0_0_0;
extern Il2CppType ScoreEntry_t7_1_0_0;
extern TypeInfo ValueType_t26_il2cpp_TypeInfo;
extern TypeInfo GlobalScoreboard_t9_il2cpp_TypeInfo;
TypeInfo ScoreEntry_t7_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "ScoreEntry"/* name */
	, ""/* namespaze */
	, ScoreEntry_t7_MethodInfos/* methods */
	, NULL/* properties */
	, ScoreEntry_t7_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &GlobalScoreboard_t9_il2cpp_TypeInfo/* nested_in */
	, &ScoreEntry_t7_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ScoreEntry_t7_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ScoreEntry_t7_il2cpp_TypeInfo/* cast_class */
	, &ScoreEntry_t7_0_0_0/* byval_arg */
	, &ScoreEntry_t7_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)ScoreEntry_t7_marshal/* marshal_to_native_func */
	, (methodPointerType)ScoreEntry_t7_marshal_back/* marshal_from_native_func */
	, (methodPointerType)ScoreEntry_t7_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (ScoreEntry_t7)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof(ScoreEntry_t7_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048842/* flags */
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
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo List_1_t8_il2cpp_TypeInfo;
extern TypeInfo Action_1_t27_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t28_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t30_il2cpp_TypeInfo;
extern TypeInfo Boolean_t24_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t31_il2cpp_TypeInfo;
extern MethodInfo List_1__ctor_m62_MethodInfo;
extern MethodInfo ParseObject_GetQuery_m63_MethodInfo;
extern MethodInfo ParseQuery_1_WhereExists_m64_MethodInfo;
extern MethodInfo ParseQuery_1_OrderByDescending_m65_MethodInfo;
extern MethodInfo ParseQuery_1_Limit_m66_MethodInfo;
extern MethodInfo ParseQuery_1_FindAsync_m67_MethodInfo;
extern MethodInfo GlobalScoreboard_U3CAwakeU3Em__0_m12_MethodInfo;
extern MethodInfo Action_1__ctor_m68_MethodInfo;
extern MethodInfo Task_1_ContinueWith_m69_MethodInfo;
extern MethodInfo Enumerable_Take_TisScoreEntry_t7_m70_MethodInfo;
extern MethodInfo Enumerable_Any_TisScoreEntry_t7_m71_MethodInfo;
extern MethodInfo Enumerable_Last_TisScoreEntry_t7_m72_MethodInfo;
extern MethodInfo List_1_Clear_m73_MethodInfo;
extern MethodInfo Task_1_get_Result_m74_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m75_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m76_MethodInfo;
extern MethodInfo ParseObject_Get_TisInt32_t23_m77_MethodInfo;
extern MethodInfo ParseObject_Get_TisString_t_m78_MethodInfo;
extern MethodInfo List_1_Add_m79_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m80_MethodInfo;
extern MethodInfo IDisposable_Dispose_m81_MethodInfo;
struct Enumerable_t32;
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<GlobalScoreboard/ScoreEntry>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<GlobalScoreboard/ScoreEntry>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
 Object_t* Enumerable_Take_TisScoreEntry_t7_m70 (Object_t * __this/* static, unused */, Object_t* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Enumerable_t32;
// Declaration System.Boolean System.Linq.Enumerable::Any<GlobalScoreboard/ScoreEntry>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Boolean System.Linq.Enumerable::Any<GlobalScoreboard/ScoreEntry>(System.Collections.Generic.IEnumerable`1<!!0>)
 bool Enumerable_Any_TisScoreEntry_t7_m71 (Object_t * __this/* static, unused */, Object_t* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Enumerable_t32;
// Declaration !!0 System.Linq.Enumerable::Last<GlobalScoreboard/ScoreEntry>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0 System.Linq.Enumerable::Last<GlobalScoreboard/ScoreEntry>(System.Collections.Generic.IEnumerable`1<!!0>)
 ScoreEntry_t7  Enumerable_Last_TisScoreEntry_t7_m72 (Object_t * __this/* static, unused */, Object_t* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct ParseObject_t21;
// Declaration !!0 Parse.ParseObject::Get<System.Int32>(System.String)
// !!0 Parse.ParseObject::Get<System.Int32>(System.String)
 int32_t ParseObject_Get_TisInt32_t23_m77 (ParseObject_t21 * __this, String_t* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct ParseObject_t21;
struct ParseObject_t21;
// Declaration !!0 Parse.ParseObject::Get<System.Object>(System.String)
// !!0 Parse.ParseObject::Get<System.Object>(System.String)
 Object_t * ParseObject_Get_TisObject_t_m82_gshared (ParseObject_t21 * __this, String_t* p0, MethodInfo* method);
#define ParseObject_Get_TisObject_t_m82(__this, p0, method) (Object_t *)ParseObject_Get_TisObject_t_m82_gshared((ParseObject_t21 *)__this, (String_t*)p0, method)
// Declaration !!0 Parse.ParseObject::Get<System.String>(System.String)
// !!0 Parse.ParseObject::Get<System.String>(System.String)
#define ParseObject_Get_TisString_t_m78(__this, p0, method) (String_t*)ParseObject_Get_TisObject_t_m82_gshared((ParseObject_t21 *)__this, (String_t*)p0, method)


// System.Void GlobalScoreboard::.ctor()
extern MethodInfo GlobalScoreboard__ctor_m8_MethodInfo;
 void GlobalScoreboard__ctor_m8 (GlobalScoreboard_t9 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&List_1_t8_il2cpp_TypeInfo));
		List_1_t8 * L_0 = (List_1_t8 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t8_il2cpp_TypeInfo));
		List_1__ctor_m62(L_0, /*hidden argument*/&List_1__ctor_m62_MethodInfo);
		__this->___topScores_2 = L_0;
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/&MonoBehaviour__ctor_m41_MethodInfo);
		return;
	}
}
// System.Void GlobalScoreboard::Awake()
extern MethodInfo GlobalScoreboard_Awake_m9_MethodInfo;
 void GlobalScoreboard_Awake_m9 (GlobalScoreboard_t9 * __this, MethodInfo* method){
	ParseQuery_1_t33 * V_0 = {0};
	Task_1_t10 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ParseObject_t21_il2cpp_TypeInfo));
		ParseQuery_1_t33 * L_0 = ParseObject_GetQuery_m63(NULL /*static, unused*/, (String_t*) &_stringLiteral1, /*hidden argument*/&ParseObject_GetQuery_m63_MethodInfo);
		NullCheck(L_0);
		ParseQuery_1_t33 * L_1 = ParseQuery_1_WhereExists_m64(L_0, (String_t*) &_stringLiteral2, /*hidden argument*/&ParseQuery_1_WhereExists_m64_MethodInfo);
		NullCheck(L_1);
		ParseQuery_1_t33 * L_2 = ParseQuery_1_WhereExists_m64(L_1, (String_t*) &_stringLiteral3, /*hidden argument*/&ParseQuery_1_WhereExists_m64_MethodInfo);
		NullCheck(L_2);
		ParseQuery_1_t33 * L_3 = ParseQuery_1_OrderByDescending_m65(L_2, (String_t*) &_stringLiteral3, /*hidden argument*/&ParseQuery_1_OrderByDescending_m65_MethodInfo);
		NullCheck(L_3);
		ParseQuery_1_t33 * L_4 = ParseQuery_1_Limit_m66(L_3, 5, /*hidden argument*/&ParseQuery_1_Limit_m66_MethodInfo);
		V_0 = L_4;
		NullCheck(V_0);
		Task_1_t10 * L_5 = ParseQuery_1_FindAsync_m67(V_0, /*hidden argument*/&ParseQuery_1_FindAsync_m67_MethodInfo);
		V_1 = L_5;
		IntPtr_t34 L_6 = { &GlobalScoreboard_U3CAwakeU3Em__0_m12_MethodInfo };
		Action_1_t27 * L_7 = (Action_1_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Action_1_t27_il2cpp_TypeInfo));
		Action_1__ctor_m68(L_7, __this, L_6, /*hidden argument*/&Action_1__ctor_m68_MethodInfo);
		NullCheck(V_1);
		Task_1_ContinueWith_m69(V_1, L_7, /*hidden argument*/&Task_1_ContinueWith_m69_MethodInfo);
		return;
	}
}
// System.Boolean GlobalScoreboard::IsHighScore(System.Int32)
extern MethodInfo GlobalScoreboard_IsHighScore_m10_MethodInfo;
 bool GlobalScoreboard_IsHighScore_m10 (GlobalScoreboard_t9 * __this, int32_t ___score, MethodInfo* method){
	Object_t* V_0 = {0};
	ScoreEntry_t7  V_1 = {0};
	{
		List_1_t8 * L_0 = (__this->___topScores_2);
		Object_t* L_1 = Enumerable_Take_TisScoreEntry_t7_m70(NULL /*static, unused*/, L_0, 5, /*hidden argument*/&Enumerable_Take_TisScoreEntry_t7_m70_MethodInfo);
		V_0 = L_1;
		bool L_2 = Enumerable_Any_TisScoreEntry_t7_m71(NULL /*static, unused*/, V_0, /*hidden argument*/&Enumerable_Any_TisScoreEntry_t7_m71_MethodInfo);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		ScoreEntry_t7  L_3 = Enumerable_Last_TisScoreEntry_t7_m72(NULL /*static, unused*/, V_0, /*hidden argument*/&Enumerable_Last_TisScoreEntry_t7_m72_MethodInfo);
		V_1 = L_3;
		NullCheck((&V_1));
		int32_t L_4 = ((&V_1)->___score_0);
		return ((((int32_t)___score) > ((int32_t)L_4))? 1 : 0);
	}

IL_002a:
	{
		return 1;
	}
}
// System.Collections.Generic.List`1<GlobalScoreboard/ScoreEntry> GlobalScoreboard::GetScores()
extern MethodInfo GlobalScoreboard_GetScores_m11_MethodInfo;
 List_1_t8 * GlobalScoreboard_GetScores_m11 (GlobalScoreboard_t9 * __this, MethodInfo* method){
	{
		List_1_t8 * L_0 = (__this->___topScores_2);
		return L_0;
	}
}
// System.Void GlobalScoreboard::<Awake>m__0(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>)
 void GlobalScoreboard_U3CAwakeU3Em__0_m12 (GlobalScoreboard_t9 * __this, Task_1_t10 * ___t, MethodInfo* method){
	ParseObject_t21 * V_0 = {0};
	Object_t* V_1 = {0};
	ScoreEntry_t7  V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t35 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t35 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		List_1_t8 * L_0 = (__this->___topScores_2);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(&List_1_Clear_m73_MethodInfo, L_0);
		NullCheck(___t);
		Object_t* L_1 = Task_1_get_Result_m74(___t, /*hidden argument*/&Task_1_get_Result_m74_MethodInfo);
		NullCheck(L_1);
		Object_t* L_2 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(&IEnumerable_1_GetEnumerator_m75_MethodInfo, L_1);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005b;
		}

IL_001c:
		{
			NullCheck(V_1);
			ParseObject_t21 * L_3 = (ParseObject_t21 *)InterfaceFuncInvoker0< ParseObject_t21 * >::Invoke(&IEnumerator_1_get_Current_m76_MethodInfo, V_1);
			V_0 = L_3;
			List_1_t8 * L_4 = (__this->___topScores_2);
			Initobj (&ScoreEntry_t7_il2cpp_TypeInfo, (&V_2));
			NullCheck(V_0);
			int32_t L_5 = ParseObject_Get_TisInt32_t23_m77(V_0, (String_t*) &_stringLiteral3, /*hidden argument*/&ParseObject_Get_TisInt32_t23_m77_MethodInfo);
			NullCheck((&V_2));
			(&V_2)->___score_0 = L_5;
			NullCheck(V_0);
			String_t* L_6 = ParseObject_Get_TisString_t_m78(V_0, (String_t*) &_stringLiteral2, /*hidden argument*/&ParseObject_Get_TisString_t_m78_MethodInfo);
			NullCheck((&V_2));
			(&V_2)->___name_1 = L_6;
			NullCheck(L_4);
			VirtActionInvoker1< ScoreEntry_t7  >::Invoke(&List_1_Add_m79_MethodInfo, L_4, V_2);
		}

IL_005b:
		{
			NullCheck(V_1);
			bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m80_MethodInfo, V_1);
			if (L_7)
			{
				goto IL_001c;
			}
		}

IL_0066:
		{
			// IL_0066: leave IL_0076
			leaveInstructions[0] = 0x76; // 1
			THROW_SENTINEL(IL_0076);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_006b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t35 *)e.ex;
		goto IL_006b;
	}

IL_006b:
	{ // begin finally (depth: 1)
		{
			if (V_1)
			{
				goto IL_006f;
			}
		}

IL_006e:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x76:
					goto IL_0076;
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
		}

IL_006f:
		{
			NullCheck(V_1);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m81_MethodInfo, V_1);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x76:
					goto IL_0076;
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
		}
	} // end finally (depth: 1)

IL_0076:
	{
		return;
	}
}
// Metadata Definition GlobalScoreboard
extern Il2CppType List_1_t8_0_0_1;
FieldInfo GlobalScoreboard_t9____topScores_2_FieldInfo = 
{
	"topScores"/* name */
	, &List_1_t8_0_0_1/* type */
	, &GlobalScoreboard_t9_il2cpp_TypeInfo/* parent */
	, offsetof(GlobalScoreboard_t9, ___topScores_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* GlobalScoreboard_t9_FieldInfos[] =
{
	&GlobalScoreboard_t9____topScores_2_FieldInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void GlobalScoreboard::.ctor()
MethodInfo GlobalScoreboard__ctor_m8_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GlobalScoreboard__ctor_m8/* method */
	, &GlobalScoreboard_t9_il2cpp_TypeInfo/* declaring_type */
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
	, 9/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void GlobalScoreboard::Awake()
MethodInfo GlobalScoreboard_Awake_m9_MethodInfo = 
{
	"Awake"/* name */
	, (methodPointerType)&GlobalScoreboard_Awake_m9/* method */
	, &GlobalScoreboard_t9_il2cpp_TypeInfo/* declaring_type */
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
	, 10/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t23_0_0_0;
extern Il2CppType Int32_t23_0_0_0;
static ParameterInfo GlobalScoreboard_t9_GlobalScoreboard_IsHighScore_m10_ParameterInfos[] = 
{
	{"score", 0, 134217729, &EmptyCustomAttributesCache, &Int32_t23_0_0_0},
};
extern Il2CppType Boolean_t24_0_0_0;
extern void* RuntimeInvoker_Boolean_t24_Int32_t23 (MethodInfo* method, void* obj, void** args);
// System.Boolean GlobalScoreboard::IsHighScore(System.Int32)
MethodInfo GlobalScoreboard_IsHighScore_m10_MethodInfo = 
{
	"IsHighScore"/* name */
	, (methodPointerType)&GlobalScoreboard_IsHighScore_m10/* method */
	, &GlobalScoreboard_t9_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t24_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t24_Int32_t23/* invoker_method */
	, GlobalScoreboard_t9_GlobalScoreboard_IsHighScore_m10_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 11/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType List_1_t8_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.List`1<GlobalScoreboard/ScoreEntry> GlobalScoreboard::GetScores()
MethodInfo GlobalScoreboard_GetScores_m11_MethodInfo = 
{
	"GetScores"/* name */
	, (methodPointerType)&GlobalScoreboard_GetScores_m11/* method */
	, &GlobalScoreboard_t9_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t8_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 12/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Task_1_t10_0_0_0;
extern Il2CppType Task_1_t10_0_0_0;
static ParameterInfo GlobalScoreboard_t9_GlobalScoreboard_U3CAwakeU3Em__0_m12_ParameterInfos[] = 
{
	{"t", 0, 134217730, &EmptyCustomAttributesCache, &Task_1_t10_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache GlobalScoreboard_t9__CustomAttributeCache_GlobalScoreboard_U3CAwakeU3Em__0_m12;
// System.Void GlobalScoreboard::<Awake>m__0(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>)
MethodInfo GlobalScoreboard_U3CAwakeU3Em__0_m12_MethodInfo = 
{
	"<Awake>m__0"/* name */
	, (methodPointerType)&GlobalScoreboard_U3CAwakeU3Em__0_m12/* method */
	, &GlobalScoreboard_t9_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, GlobalScoreboard_t9_GlobalScoreboard_U3CAwakeU3Em__0_m12_ParameterInfos/* parameters */
	, &GlobalScoreboard_t9__CustomAttributeCache_GlobalScoreboard_U3CAwakeU3Em__0_m12/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 13/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* GlobalScoreboard_t9_MethodInfos[] =
{
	&GlobalScoreboard__ctor_m8_MethodInfo,
	&GlobalScoreboard_Awake_m9_MethodInfo,
	&GlobalScoreboard_IsHighScore_m10_MethodInfo,
	&GlobalScoreboard_GetScores_m11_MethodInfo,
	&GlobalScoreboard_U3CAwakeU3Em__0_m12_MethodInfo,
	NULL
};
extern TypeInfo ScoreEntry_t7_il2cpp_TypeInfo;
static TypeInfo* GlobalScoreboard_t9_il2cpp_TypeInfo__nestedTypes[2] =
{
	&ScoreEntry_t7_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* GlobalScoreboard_t9_VTable[] =
{
	&Object_Equals_m49_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m51_MethodInfo,
	&Object_ToString_m52_MethodInfo,
};
extern TypeInfo CompilerGeneratedAttribute_t36_il2cpp_TypeInfo;
extern MethodInfo CompilerGeneratedAttribute__ctor_m83_MethodInfo;
void GlobalScoreboard_t9_CustomAttributesCacheGenerator_GlobalScoreboard_U3CAwakeU3Em__0_m12(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t36 * tmp;
		tmp = (CompilerGeneratedAttribute_t36 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t36_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m83(tmp, &CompilerGeneratedAttribute__ctor_m83_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache GlobalScoreboard_t9__CustomAttributeCache_GlobalScoreboard_U3CAwakeU3Em__0_m12 = {
1,
NULL,
&GlobalScoreboard_t9_CustomAttributesCacheGenerator_GlobalScoreboard_U3CAwakeU3Em__0_m12
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GlobalScoreboard_t9_0_0_0;
extern Il2CppType GlobalScoreboard_t9_1_0_0;
struct GlobalScoreboard_t9;
extern CustomAttributesCache GlobalScoreboard_t9__CustomAttributeCache_GlobalScoreboard_U3CAwakeU3Em__0_m12;
TypeInfo GlobalScoreboard_t9_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GlobalScoreboard"/* name */
	, ""/* namespaze */
	, GlobalScoreboard_t9_MethodInfos/* methods */
	, NULL/* properties */
	, GlobalScoreboard_t9_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t3_il2cpp_TypeInfo/* parent */
	, GlobalScoreboard_t9_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &GlobalScoreboard_t9_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GlobalScoreboard_t9_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GlobalScoreboard_t9_il2cpp_TypeInfo/* cast_class */
	, &GlobalScoreboard_t9_0_0_0/* byval_arg */
	, &GlobalScoreboard_t9_1_0_0/* this_arg */
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
	, sizeof (GlobalScoreboard_t9)/* instance_size */
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
	, 5/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LevelManager_t11_il2cpp_TypeInfo;

extern MethodInfo Application_LoadLevel_m84_MethodInfo;
extern MethodInfo MonoBehaviour_print_m85_MethodInfo;
extern MethodInfo Application_Quit_m86_MethodInfo;


// System.Void LevelManager::.ctor()
extern MethodInfo LevelManager__ctor_m13_MethodInfo;
 void LevelManager__ctor_m13 (LevelManager_t11 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/&MonoBehaviour__ctor_m41_MethodInfo);
		return;
	}
}
// System.Void LevelManager::LoadLevel(System.String)
extern MethodInfo LevelManager_LoadLevel_m14_MethodInfo;
 void LevelManager_LoadLevel_m14 (LevelManager_t11 * __this, String_t* ___name, MethodInfo* method){
	{
		Application_LoadLevel_m84(NULL /*static, unused*/, ___name, /*hidden argument*/&Application_LoadLevel_m84_MethodInfo);
		return;
	}
}
// System.Void LevelManager::QuitReqest()
extern MethodInfo LevelManager_QuitReqest_m15_MethodInfo;
 void LevelManager_QuitReqest_m15 (LevelManager_t11 * __this, MethodInfo* method){
	{
		MonoBehaviour_print_m85(NULL /*static, unused*/, (String_t*) &_stringLiteral6, /*hidden argument*/&MonoBehaviour_print_m85_MethodInfo);
		Application_Quit_m86(NULL /*static, unused*/, /*hidden argument*/&Application_Quit_m86_MethodInfo);
		return;
	}
}
// Metadata Definition LevelManager
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void LevelManager::.ctor()
MethodInfo LevelManager__ctor_m13_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LevelManager__ctor_m13/* method */
	, &LevelManager_t11_il2cpp_TypeInfo/* declaring_type */
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
	, 14/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo LevelManager_t11_LevelManager_LoadLevel_m14_ParameterInfos[] = 
{
	{"name", 0, 134217731, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void LevelManager::LoadLevel(System.String)
MethodInfo LevelManager_LoadLevel_m14_MethodInfo = 
{
	"LoadLevel"/* name */
	, (methodPointerType)&LevelManager_LoadLevel_m14/* method */
	, &LevelManager_t11_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, LevelManager_t11_LevelManager_LoadLevel_m14_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 15/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void LevelManager::QuitReqest()
MethodInfo LevelManager_QuitReqest_m15_MethodInfo = 
{
	"QuitReqest"/* name */
	, (methodPointerType)&LevelManager_QuitReqest_m15/* method */
	, &LevelManager_t11_il2cpp_TypeInfo/* declaring_type */
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
	, 16/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* LevelManager_t11_MethodInfos[] =
{
	&LevelManager__ctor_m13_MethodInfo,
	&LevelManager_LoadLevel_m14_MethodInfo,
	&LevelManager_QuitReqest_m15_MethodInfo,
	NULL
};
static MethodInfo* LevelManager_t11_VTable[] =
{
	&Object_Equals_m49_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m51_MethodInfo,
	&Object_ToString_m52_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType LevelManager_t11_0_0_0;
extern Il2CppType LevelManager_t11_1_0_0;
struct LevelManager_t11;
TypeInfo LevelManager_t11_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "LevelManager"/* name */
	, ""/* namespaze */
	, LevelManager_t11_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MonoBehaviour_t3_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &LevelManager_t11_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, LevelManager_t11_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &LevelManager_t11_il2cpp_TypeInfo/* cast_class */
	, &LevelManager_t11_0_0_0/* byval_arg */
	, &LevelManager_t11_1_0_0/* this_arg */
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
	, sizeof (LevelManager_t11)/* instance_size */
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
	, 3/* method_count */
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

extern TypeInfo Input_t37_il2cpp_TypeInfo;
extern MethodInfo Component_GetComponent_TisRigidbody_t12_m87_MethodInfo;
extern MethodInfo PlayerControle_SetCountText_m21_MethodInfo;
extern MethodInfo Input_GetAxis_m88_MethodInfo;
extern MethodInfo Vector3__ctor_m89_MethodInfo;
extern MethodInfo Vector3_op_Multiply_m90_MethodInfo;
extern MethodInfo Rigidbody_AddForce_m91_MethodInfo;
extern MethodInfo Component_get_gameObject_m92_MethodInfo;
extern MethodInfo GameObject_CompareTag_m93_MethodInfo;
extern MethodInfo GameObject_SetActive_m94_MethodInfo;
struct Component_t38;
struct Component_t38;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
 Object_t * Component_GetComponent_TisObject_t_m95_gshared (Component_t38 * __this, MethodInfo* method);
#define Component_GetComponent_TisObject_t_m95(__this, method) (Object_t *)Component_GetComponent_TisObject_t_m95_gshared((Component_t38 *)__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t12_m87(__this, method) (Rigidbody_t12 *)Component_GetComponent_TisObject_t_m95_gshared((Component_t38 *)__this, method)


// System.Void PlayerControle::.ctor()
extern MethodInfo PlayerControle__ctor_m16_MethodInfo;
 void PlayerControle__ctor_m16 (PlayerControle_t13 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/&MonoBehaviour__ctor_m41_MethodInfo);
		return;
	}
}
// System.Void PlayerControle::Start()
extern MethodInfo PlayerControle_Start_m17_MethodInfo;
 void PlayerControle_Start_m17 (PlayerControle_t13 * __this, MethodInfo* method){
	{
		Rigidbody_t12 * L_0 = Component_GetComponent_TisRigidbody_t12_m87(__this, /*hidden argument*/&Component_GetComponent_TisRigidbody_t12_m87_MethodInfo);
		__this->___rb_5 = L_0;
		((PlayerControle_t13_StaticFields*)InitializedTypeInfo(&PlayerControle_t13_il2cpp_TypeInfo)->static_fields)->___count_6 = 0;
		PlayerControle_SetCountText_m21(__this, /*hidden argument*/&PlayerControle_SetCountText_m21_MethodInfo);
		Text_t1 * L_1 = (__this->___winText_4);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(&Text_set_text_m48_MethodInfo, L_1, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2));
		return;
	}
}
// System.Void PlayerControle::Update()
extern MethodInfo PlayerControle_Update_m18_MethodInfo;
 void PlayerControle_Update_m18 (PlayerControle_t13 * __this, MethodInfo* method){
	{
		return;
	}
}
// System.Void PlayerControle::FixedUpdate()
extern MethodInfo PlayerControle_FixedUpdate_m19_MethodInfo;
 void PlayerControle_FixedUpdate_m19 (PlayerControle_t13 * __this, MethodInfo* method){
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t6  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t37_il2cpp_TypeInfo));
		float L_0 = Input_GetAxis_m88(NULL /*static, unused*/, (String_t*) &_stringLiteral7, /*hidden argument*/&Input_GetAxis_m88_MethodInfo);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m88(NULL /*static, unused*/, (String_t*) &_stringLiteral8, /*hidden argument*/&Input_GetAxis_m88_MethodInfo);
		V_1 = L_1;
		Vector3__ctor_m89((&V_2), V_0, (0.0f), V_1, /*hidden argument*/&Vector3__ctor_m89_MethodInfo);
		Rigidbody_t12 * L_2 = (__this->___rb_5);
		float L_3 = (__this->___speed_2);
		Vector3_t6  L_4 = Vector3_op_Multiply_m90(NULL /*static, unused*/, V_2, L_3, /*hidden argument*/&Vector3_op_Multiply_m90_MethodInfo);
		NullCheck(L_2);
		Rigidbody_AddForce_m91(L_2, L_4, /*hidden argument*/&Rigidbody_AddForce_m91_MethodInfo);
		return;
	}
}
// System.Void PlayerControle::OnTriggerEnter(UnityEngine.Collider)
extern MethodInfo PlayerControle_OnTriggerEnter_m20_MethodInfo;
 void PlayerControle_OnTriggerEnter_m20 (PlayerControle_t13 * __this, Collider_t14 * ___other, MethodInfo* method){
	{
		NullCheck(___other);
		GameObject_t4 * L_0 = Component_get_gameObject_m92(___other, /*hidden argument*/&Component_get_gameObject_m92_MethodInfo);
		NullCheck(L_0);
		bool L_1 = GameObject_CompareTag_m93(L_0, (String_t*) &_stringLiteral9, /*hidden argument*/&GameObject_CompareTag_m93_MethodInfo);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		NullCheck(___other);
		GameObject_t4 * L_2 = Component_get_gameObject_m92(___other, /*hidden argument*/&Component_get_gameObject_m92_MethodInfo);
		NullCheck(L_2);
		GameObject_SetActive_m94(L_2, 0, /*hidden argument*/&GameObject_SetActive_m94_MethodInfo);
		((PlayerControle_t13_StaticFields*)InitializedTypeInfo(&PlayerControle_t13_il2cpp_TypeInfo)->static_fields)->___count_6 = ((int32_t)((((PlayerControle_t13_StaticFields*)InitializedTypeInfo(&PlayerControle_t13_il2cpp_TypeInfo)->static_fields)->___count_6)+1));
		PlayerControle_SetCountText_m21(__this, /*hidden argument*/&PlayerControle_SetCountText_m21_MethodInfo);
	}

IL_0033:
	{
		return;
	}
}
// System.Void PlayerControle::SetCountText()
 void PlayerControle_SetCountText_m21 (PlayerControle_t13 * __this, MethodInfo* method){
	{
		Text_t1 * L_0 = (__this->___countText_3);
		String_t* L_1 = Int32_ToString_m46((&((PlayerControle_t13_StaticFields*)InitializedTypeInfo(&PlayerControle_t13_il2cpp_TypeInfo)->static_fields)->___count_6), /*hidden argument*/&Int32_ToString_m46_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m47(NULL /*static, unused*/, (String_t*) &_stringLiteral10, L_1, /*hidden argument*/&String_Concat_m47_MethodInfo);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(&Text_set_text_m48_MethodInfo, L_0, L_2);
		int32_t L_3 = (__this->___lvlCount_7);
		if ((((int32_t)(((PlayerControle_t13_StaticFields*)InitializedTypeInfo(&PlayerControle_t13_il2cpp_TypeInfo)->static_fields)->___count_6)) < ((int32_t)L_3)))
		{
			goto IL_003f;
		}
	}
	{
		Text_t1 * L_4 = (__this->___winText_4);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(&Text_set_text_m48_MethodInfo, L_4, (String_t*) &_stringLiteral11);
	}

IL_003f:
	{
		return;
	}
}
// Metadata Definition PlayerControle
extern Il2CppType Single_t39_0_0_6;
FieldInfo PlayerControle_t13____speed_2_FieldInfo = 
{
	"speed"/* name */
	, &Single_t39_0_0_6/* type */
	, &PlayerControle_t13_il2cpp_TypeInfo/* parent */
	, offsetof(PlayerControle_t13, ___speed_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Text_t1_0_0_6;
FieldInfo PlayerControle_t13____countText_3_FieldInfo = 
{
	"countText"/* name */
	, &Text_t1_0_0_6/* type */
	, &PlayerControle_t13_il2cpp_TypeInfo/* parent */
	, offsetof(PlayerControle_t13, ___countText_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Text_t1_0_0_6;
FieldInfo PlayerControle_t13____winText_4_FieldInfo = 
{
	"winText"/* name */
	, &Text_t1_0_0_6/* type */
	, &PlayerControle_t13_il2cpp_TypeInfo/* parent */
	, offsetof(PlayerControle_t13, ___winText_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Rigidbody_t12_0_0_1;
FieldInfo PlayerControle_t13____rb_5_FieldInfo = 
{
	"rb"/* name */
	, &Rigidbody_t12_0_0_1/* type */
	, &PlayerControle_t13_il2cpp_TypeInfo/* parent */
	, offsetof(PlayerControle_t13, ___rb_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_22;
FieldInfo PlayerControle_t13____count_6_FieldInfo = 
{
	"count"/* name */
	, &Int32_t23_0_0_22/* type */
	, &PlayerControle_t13_il2cpp_TypeInfo/* parent */
	, offsetof(PlayerControle_t13_StaticFields, ___count_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_6;
FieldInfo PlayerControle_t13____lvlCount_7_FieldInfo = 
{
	"lvlCount"/* name */
	, &Int32_t23_0_0_6/* type */
	, &PlayerControle_t13_il2cpp_TypeInfo/* parent */
	, offsetof(PlayerControle_t13, ___lvlCount_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* PlayerControle_t13_FieldInfos[] =
{
	&PlayerControle_t13____speed_2_FieldInfo,
	&PlayerControle_t13____countText_3_FieldInfo,
	&PlayerControle_t13____winText_4_FieldInfo,
	&PlayerControle_t13____rb_5_FieldInfo,
	&PlayerControle_t13____count_6_FieldInfo,
	&PlayerControle_t13____lvlCount_7_FieldInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void PlayerControle::.ctor()
MethodInfo PlayerControle__ctor_m16_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PlayerControle__ctor_m16/* method */
	, &PlayerControle_t13_il2cpp_TypeInfo/* declaring_type */
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
	, 17/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void PlayerControle::Start()
MethodInfo PlayerControle_Start_m17_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&PlayerControle_Start_m17/* method */
	, &PlayerControle_t13_il2cpp_TypeInfo/* declaring_type */
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
	, 18/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void PlayerControle::Update()
MethodInfo PlayerControle_Update_m18_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&PlayerControle_Update_m18/* method */
	, &PlayerControle_t13_il2cpp_TypeInfo/* declaring_type */
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
	, 19/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void PlayerControle::FixedUpdate()
MethodInfo PlayerControle_FixedUpdate_m19_MethodInfo = 
{
	"FixedUpdate"/* name */
	, (methodPointerType)&PlayerControle_FixedUpdate_m19/* method */
	, &PlayerControle_t13_il2cpp_TypeInfo/* declaring_type */
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
	, 20/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Collider_t14_0_0_0;
extern Il2CppType Collider_t14_0_0_0;
static ParameterInfo PlayerControle_t13_PlayerControle_OnTriggerEnter_m20_ParameterInfos[] = 
{
	{"other", 0, 134217732, &EmptyCustomAttributesCache, &Collider_t14_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void PlayerControle::OnTriggerEnter(UnityEngine.Collider)
MethodInfo PlayerControle_OnTriggerEnter_m20_MethodInfo = 
{
	"OnTriggerEnter"/* name */
	, (methodPointerType)&PlayerControle_OnTriggerEnter_m20/* method */
	, &PlayerControle_t13_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, PlayerControle_t13_PlayerControle_OnTriggerEnter_m20_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 21/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void PlayerControle::SetCountText()
MethodInfo PlayerControle_SetCountText_m21_MethodInfo = 
{
	"SetCountText"/* name */
	, (methodPointerType)&PlayerControle_SetCountText_m21/* method */
	, &PlayerControle_t13_il2cpp_TypeInfo/* declaring_type */
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
	, 22/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PlayerControle_t13_MethodInfos[] =
{
	&PlayerControle__ctor_m16_MethodInfo,
	&PlayerControle_Start_m17_MethodInfo,
	&PlayerControle_Update_m18_MethodInfo,
	&PlayerControle_FixedUpdate_m19_MethodInfo,
	&PlayerControle_OnTriggerEnter_m20_MethodInfo,
	&PlayerControle_SetCountText_m21_MethodInfo,
	NULL
};
static MethodInfo* PlayerControle_t13_VTable[] =
{
	&Object_Equals_m49_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m51_MethodInfo,
	&Object_ToString_m52_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType PlayerControle_t13_0_0_0;
extern Il2CppType PlayerControle_t13_1_0_0;
struct PlayerControle_t13;
TypeInfo PlayerControle_t13_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "PlayerControle"/* name */
	, ""/* namespaze */
	, PlayerControle_t13_MethodInfos/* methods */
	, NULL/* properties */
	, PlayerControle_t13_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t3_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &PlayerControle_t13_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, PlayerControle_t13_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PlayerControle_t13_il2cpp_TypeInfo/* cast_class */
	, &PlayerControle_t13_0_0_0/* byval_arg */
	, &PlayerControle_t13_1_0_0/* this_arg */
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
	, sizeof (PlayerControle_t13)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(PlayerControle_t13_StaticFields)/* static_fields_size */
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
	, 6/* method_count */
	, 0/* property_count */
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
extern TypeInfo Rotator_t15_il2cpp_TypeInfo;

extern TypeInfo Vector3_t6_il2cpp_TypeInfo;
extern MethodInfo Time_get_deltaTime_m96_MethodInfo;
extern MethodInfo Transform_Rotate_m97_MethodInfo;


// System.Void Rotator::.ctor()
extern MethodInfo Rotator__ctor_m22_MethodInfo;
 void Rotator__ctor_m22 (Rotator_t15 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/&MonoBehaviour__ctor_m41_MethodInfo);
		return;
	}
}
// System.Void Rotator::Start()
extern MethodInfo Rotator_Start_m23_MethodInfo;
 void Rotator_Start_m23 (Rotator_t15 * __this, MethodInfo* method){
	{
		return;
	}
}
// System.Void Rotator::Update()
extern MethodInfo Rotator_Update_m24_MethodInfo;
 void Rotator_Update_m24 (Rotator_t15 * __this, MethodInfo* method){
	{
		Transform_t25 * L_0 = Component_get_transform_m53(__this, /*hidden argument*/&Component_get_transform_m53_MethodInfo);
		Vector3_t6  L_1 = {0};
		Vector3__ctor_m89(&L_1, (15.0f), (30.0f), (45.0f), /*hidden argument*/&Vector3__ctor_m89_MethodInfo);
		float L_2 = Time_get_deltaTime_m96(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m96_MethodInfo);
		Vector3_t6  L_3 = Vector3_op_Multiply_m90(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Vector3_op_Multiply_m90_MethodInfo);
		NullCheck(L_0);
		Transform_Rotate_m97(L_0, L_3, /*hidden argument*/&Transform_Rotate_m97_MethodInfo);
		return;
	}
}
// Metadata Definition Rotator
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void Rotator::.ctor()
MethodInfo Rotator__ctor_m22_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Rotator__ctor_m22/* method */
	, &Rotator_t15_il2cpp_TypeInfo/* declaring_type */
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
	, 23/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void Rotator::Start()
MethodInfo Rotator_Start_m23_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&Rotator_Start_m23/* method */
	, &Rotator_t15_il2cpp_TypeInfo/* declaring_type */
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
	, 24/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void Rotator::Update()
MethodInfo Rotator_Update_m24_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&Rotator_Update_m24/* method */
	, &Rotator_t15_il2cpp_TypeInfo/* declaring_type */
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
	, 25/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Rotator_t15_MethodInfos[] =
{
	&Rotator__ctor_m22_MethodInfo,
	&Rotator_Start_m23_MethodInfo,
	&Rotator_Update_m24_MethodInfo,
	NULL
};
static MethodInfo* Rotator_t15_VTable[] =
{
	&Object_Equals_m49_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m51_MethodInfo,
	&Object_ToString_m52_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType Rotator_t15_0_0_0;
extern Il2CppType Rotator_t15_1_0_0;
struct Rotator_t15;
TypeInfo Rotator_t15_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "Rotator"/* name */
	, ""/* namespaze */
	, Rotator_t15_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MonoBehaviour_t3_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Rotator_t15_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Rotator_t15_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Rotator_t15_il2cpp_TypeInfo/* cast_class */
	, &Rotator_t15_0_0_0/* byval_arg */
	, &Rotator_t15_1_0_0/* this_arg */
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
	, sizeof (Rotator_t15)/* instance_size */
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
	, 3/* method_count */
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
extern TypeInfo ScoreEntry_t16_il2cpp_TypeInfo;



// Conversion methods for marshalling of: HighScores/ScoreEntry
void ScoreEntry_t16_marshal(const ScoreEntry_t16& unmarshaled, ScoreEntry_t16_marshaled& marshaled)
{
	marshaled.___ballScore_0 = unmarshaled.___ballScore_0;
	marshaled.___userName_1 = il2cpp_codegen_marshal_string(unmarshaled.___userName_1);
}
void ScoreEntry_t16_marshal_back(const ScoreEntry_t16_marshaled& marshaled, ScoreEntry_t16& unmarshaled)
{
	unmarshaled.___ballScore_0 = marshaled.___ballScore_0;
	unmarshaled.___userName_1 = il2cpp_codegen_marshal_string_result(marshaled.___userName_1);
}
// Conversion method for clean up from marshalling of: HighScores/ScoreEntry
void ScoreEntry_t16_marshal_cleanup(ScoreEntry_t16_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___userName_1);
	marshaled.___userName_1 = NULL;
}
// Metadata Definition HighScores/ScoreEntry
extern Il2CppType Int32_t23_0_0_6;
FieldInfo ScoreEntry_t16____ballScore_0_FieldInfo = 
{
	"ballScore"/* name */
	, &Int32_t23_0_0_6/* type */
	, &ScoreEntry_t16_il2cpp_TypeInfo/* parent */
	, offsetof(ScoreEntry_t16, ___ballScore_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_6;
FieldInfo ScoreEntry_t16____userName_1_FieldInfo = 
{
	"userName"/* name */
	, &String_t_0_0_6/* type */
	, &ScoreEntry_t16_il2cpp_TypeInfo/* parent */
	, offsetof(ScoreEntry_t16, ___userName_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ScoreEntry_t16_FieldInfos[] =
{
	&ScoreEntry_t16____ballScore_0_FieldInfo,
	&ScoreEntry_t16____userName_1_FieldInfo,
	NULL
};
static MethodInfo* ScoreEntry_t16_MethodInfos[] =
{
	NULL
};
static MethodInfo* ScoreEntry_t16_VTable[] =
{
	&ValueType_Equals_m59_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&ValueType_GetHashCode_m60_MethodInfo,
	&ValueType_ToString_m61_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType ScoreEntry_t16_0_0_0;
extern Il2CppType ScoreEntry_t16_1_0_0;
extern TypeInfo HighScores_t17_il2cpp_TypeInfo;
TypeInfo ScoreEntry_t16_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "ScoreEntry"/* name */
	, ""/* namespaze */
	, ScoreEntry_t16_MethodInfos/* methods */
	, NULL/* properties */
	, ScoreEntry_t16_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t26_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &HighScores_t17_il2cpp_TypeInfo/* nested_in */
	, &ScoreEntry_t16_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ScoreEntry_t16_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ScoreEntry_t16_il2cpp_TypeInfo/* cast_class */
	, &ScoreEntry_t16_0_0_0/* byval_arg */
	, &ScoreEntry_t16_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)ScoreEntry_t16_marshal/* marshal_to_native_func */
	, (methodPointerType)ScoreEntry_t16_marshal_back/* marshal_from_native_func */
	, (methodPointerType)ScoreEntry_t16_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (ScoreEntry_t16)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof(ScoreEntry_t16_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048842/* flags */
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
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo HighScores_U3CAwakeU3Em__1_m30_MethodInfo;
extern MethodInfo String_Concat_m98_MethodInfo;


// System.Void HighScores::.ctor()
extern MethodInfo HighScores__ctor_m25_MethodInfo;
 void HighScores__ctor_m25 (HighScores_t17 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/&MonoBehaviour__ctor_m41_MethodInfo);
		return;
	}
}
// System.Void HighScores::Awake()
extern MethodInfo HighScores_Awake_m26_MethodInfo;
 void HighScores_Awake_m26 (HighScores_t17 * __this, MethodInfo* method){
	ParseQuery_1_t33 * V_0 = {0};
	Task_1_t10 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ParseObject_t21_il2cpp_TypeInfo));
		ParseQuery_1_t33 * L_0 = ParseObject_GetQuery_m63(NULL /*static, unused*/, (String_t*) &_stringLiteral1, /*hidden argument*/&ParseObject_GetQuery_m63_MethodInfo);
		NullCheck(L_0);
		ParseQuery_1_t33 * L_1 = ParseQuery_1_WhereExists_m64(L_0, (String_t*) &_stringLiteral2, /*hidden argument*/&ParseQuery_1_WhereExists_m64_MethodInfo);
		NullCheck(L_1);
		ParseQuery_1_t33 * L_2 = ParseQuery_1_WhereExists_m64(L_1, (String_t*) &_stringLiteral3, /*hidden argument*/&ParseQuery_1_WhereExists_m64_MethodInfo);
		NullCheck(L_2);
		ParseQuery_1_t33 * L_3 = ParseQuery_1_OrderByDescending_m65(L_2, (String_t*) &_stringLiteral3, /*hidden argument*/&ParseQuery_1_OrderByDescending_m65_MethodInfo);
		NullCheck(L_3);
		ParseQuery_1_t33 * L_4 = ParseQuery_1_Limit_m66(L_3, 5, /*hidden argument*/&ParseQuery_1_Limit_m66_MethodInfo);
		V_0 = L_4;
		NullCheck(V_0);
		Task_1_t10 * L_5 = ParseQuery_1_FindAsync_m67(V_0, /*hidden argument*/&ParseQuery_1_FindAsync_m67_MethodInfo);
		V_1 = L_5;
		IntPtr_t34 L_6 = { &HighScores_U3CAwakeU3Em__1_m30_MethodInfo };
		Action_1_t27 * L_7 = (Action_1_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Action_1_t27_il2cpp_TypeInfo));
		Action_1__ctor_m68(L_7, __this, L_6, /*hidden argument*/&Action_1__ctor_m68_MethodInfo);
		NullCheck(V_1);
		Task_1_ContinueWith_m69(V_1, L_7, /*hidden argument*/&Task_1_ContinueWith_m69_MethodInfo);
		return;
	}
}
// System.Void HighScores::Start()
extern MethodInfo HighScores_Start_m27_MethodInfo;
 void HighScores_Start_m27 (HighScores_t17 * __this, MethodInfo* method){
	{
		return;
	}
}
// System.Void HighScores::SetScoreBoardText()
extern MethodInfo HighScores_SetScoreBoardText_m28_MethodInfo;
 void HighScores_SetScoreBoardText_m28 (HighScores_t17 * __this, MethodInfo* method){
	{
		return;
	}
}
// System.Void HighScores::Update()
extern MethodInfo HighScores_Update_m29_MethodInfo;
 void HighScores_Update_m29 (HighScores_t17 * __this, MethodInfo* method){
	ParseObject_t21 * V_0 = {0};
	{
		bool L_0 = (__this->___scoreNeedsUpdate_3);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		__this->___scoreNeedsUpdate_3 = 0;
	}

IL_0012:
	{
		bool L_1 = (__this->___parseNeedsUpdate_2);
		if (!L_1)
		{
			goto IL_0065;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ParseObject_t21_il2cpp_TypeInfo));
		ParseObject_t21 * L_2 = (ParseObject_t21 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ParseObject_t21_il2cpp_TypeInfo));
		ParseObject__ctor_m42(L_2, (String_t*) &_stringLiteral1, /*hidden argument*/&ParseObject__ctor_m42_MethodInfo);
		V_0 = L_2;
		NullCheck(V_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(&ParseObject_set_Item_m43_MethodInfo, V_0, (String_t*) &_stringLiteral2, (String_t*) &_stringLiteral2);
		int32_t L_3 = (((PlayerControle_t13_StaticFields*)InitializedTypeInfo(&PlayerControle_t13_il2cpp_TypeInfo)->static_fields)->___count_6);
		Object_t * L_4 = Box(InitializedTypeInfo(&Int32_t23_il2cpp_TypeInfo), &L_3);
		NullCheck(V_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(&ParseObject_set_Item_m43_MethodInfo, V_0, (String_t*) &_stringLiteral3, L_4);
		NullCheck(V_0);
		ParseObject_SaveAsync_m44(V_0, /*hidden argument*/&ParseObject_SaveAsync_m44_MethodInfo);
		Debug_Log_m45(NULL /*static, unused*/, (String_t*) &_stringLiteral4, /*hidden argument*/&Debug_Log_m45_MethodInfo);
		__this->___parseNeedsUpdate_2 = 0;
	}

IL_0065:
	{
		return;
	}
}
// System.Void HighScores::<Awake>m__1(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>)
 void HighScores_U3CAwakeU3Em__1_m30 (HighScores_t17 * __this, Task_1_t10 * ___t, MethodInfo* method){
	ParseObject_t21 * V_0 = {0};
	Object_t* V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t35 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t35 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		NullCheck(___t);
		Object_t* L_0 = Task_1_get_Result_m74(___t, /*hidden argument*/&Task_1_get_Result_m74_MethodInfo);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(&IEnumerable_1_GetEnumerator_m75_MethodInfo, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0066;
		}

IL_0011:
		{
			NullCheck(V_1);
			ParseObject_t21 * L_2 = (ParseObject_t21 *)InterfaceFuncInvoker0< ParseObject_t21 * >::Invoke(&IEnumerator_1_get_Current_m76_MethodInfo, V_1);
			V_0 = L_2;
			NullCheck(V_0);
			String_t* L_3 = ParseObject_Get_TisString_t_m78(V_0, (String_t*) &_stringLiteral2, /*hidden argument*/&ParseObject_Get_TisString_t_m78_MethodInfo);
			NullCheck(V_0);
			int32_t L_4 = ParseObject_Get_TisInt32_t23_m77(V_0, (String_t*) &_stringLiteral3, /*hidden argument*/&ParseObject_Get_TisInt32_t23_m77_MethodInfo);
			int32_t L_5 = L_4;
			Object_t * L_6 = Box(InitializedTypeInfo(&Int32_t23_il2cpp_TypeInfo), &L_5);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			String_t* L_7 = String_Concat_m98(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/&String_Concat_m98_MethodInfo);
			Debug_Log_m45(NULL /*static, unused*/, L_7, /*hidden argument*/&Debug_Log_m45_MethodInfo);
			NullCheck(V_0);
			String_t* L_8 = ParseObject_Get_TisString_t_m78(V_0, (String_t*) &_stringLiteral2, /*hidden argument*/&ParseObject_Get_TisString_t_m78_MethodInfo);
			__this->___userName_4 = L_8;
			NullCheck(V_0);
			int32_t L_9 = ParseObject_Get_TisInt32_t23_m77(V_0, (String_t*) &_stringLiteral3, /*hidden argument*/&ParseObject_Get_TisInt32_t23_m77_MethodInfo);
			__this->___ballScore_5 = L_9;
			__this->___scoreNeedsUpdate_3 = 1;
		}

IL_0066:
		{
			NullCheck(V_1);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m80_MethodInfo, V_1);
			if (L_10)
			{
				goto IL_0011;
			}
		}

IL_0071:
		{
			// IL_0071: leave IL_0081
			leaveInstructions[0] = 0x81; // 1
			THROW_SENTINEL(IL_0081);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0076;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t35 *)e.ex;
		goto IL_0076;
	}

IL_0076:
	{ // begin finally (depth: 1)
		{
			if (V_1)
			{
				goto IL_007a;
			}
		}

IL_0079:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x81:
					goto IL_0081;
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
		}

IL_007a:
		{
			NullCheck(V_1);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m81_MethodInfo, V_1);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x81:
					goto IL_0081;
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
		}
	} // end finally (depth: 1)

IL_0081:
	{
		return;
	}
}
// Metadata Definition HighScores
extern Il2CppType Boolean_t24_0_0_6;
FieldInfo HighScores_t17____parseNeedsUpdate_2_FieldInfo = 
{
	"parseNeedsUpdate"/* name */
	, &Boolean_t24_0_0_6/* type */
	, &HighScores_t17_il2cpp_TypeInfo/* parent */
	, offsetof(HighScores_t17, ___parseNeedsUpdate_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t24_0_0_6;
FieldInfo HighScores_t17____scoreNeedsUpdate_3_FieldInfo = 
{
	"scoreNeedsUpdate"/* name */
	, &Boolean_t24_0_0_6/* type */
	, &HighScores_t17_il2cpp_TypeInfo/* parent */
	, offsetof(HighScores_t17, ___scoreNeedsUpdate_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo HighScores_t17____userName_4_FieldInfo = 
{
	"userName"/* name */
	, &String_t_0_0_1/* type */
	, &HighScores_t17_il2cpp_TypeInfo/* parent */
	, offsetof(HighScores_t17, ___userName_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_1;
FieldInfo HighScores_t17____ballScore_5_FieldInfo = 
{
	"ballScore"/* name */
	, &Int32_t23_0_0_1/* type */
	, &HighScores_t17_il2cpp_TypeInfo/* parent */
	, offsetof(HighScores_t17, ___ballScore_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType GameObject_t4_0_0_6;
FieldInfo HighScores_t17____newHighScorePanel_6_FieldInfo = 
{
	"newHighScorePanel"/* name */
	, &GameObject_t4_0_0_6/* type */
	, &HighScores_t17_il2cpp_TypeInfo/* parent */
	, offsetof(HighScores_t17, ___newHighScorePanel_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* HighScores_t17_FieldInfos[] =
{
	&HighScores_t17____parseNeedsUpdate_2_FieldInfo,
	&HighScores_t17____scoreNeedsUpdate_3_FieldInfo,
	&HighScores_t17____userName_4_FieldInfo,
	&HighScores_t17____ballScore_5_FieldInfo,
	&HighScores_t17____newHighScorePanel_6_FieldInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void HighScores::.ctor()
MethodInfo HighScores__ctor_m25_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&HighScores__ctor_m25/* method */
	, &HighScores_t17_il2cpp_TypeInfo/* declaring_type */
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
	, 26/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void HighScores::Awake()
MethodInfo HighScores_Awake_m26_MethodInfo = 
{
	"Awake"/* name */
	, (methodPointerType)&HighScores_Awake_m26/* method */
	, &HighScores_t17_il2cpp_TypeInfo/* declaring_type */
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
	, 27/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void HighScores::Start()
MethodInfo HighScores_Start_m27_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&HighScores_Start_m27/* method */
	, &HighScores_t17_il2cpp_TypeInfo/* declaring_type */
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
	, 28/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void HighScores::SetScoreBoardText()
MethodInfo HighScores_SetScoreBoardText_m28_MethodInfo = 
{
	"SetScoreBoardText"/* name */
	, (methodPointerType)&HighScores_SetScoreBoardText_m28/* method */
	, &HighScores_t17_il2cpp_TypeInfo/* declaring_type */
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
	, 29/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void HighScores::Update()
MethodInfo HighScores_Update_m29_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&HighScores_Update_m29/* method */
	, &HighScores_t17_il2cpp_TypeInfo/* declaring_type */
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
	, 30/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Task_1_t10_0_0_0;
static ParameterInfo HighScores_t17_HighScores_U3CAwakeU3Em__1_m30_ParameterInfos[] = 
{
	{"t", 0, 134217733, &EmptyCustomAttributesCache, &Task_1_t10_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache HighScores_t17__CustomAttributeCache_HighScores_U3CAwakeU3Em__1_m30;
// System.Void HighScores::<Awake>m__1(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>)
MethodInfo HighScores_U3CAwakeU3Em__1_m30_MethodInfo = 
{
	"<Awake>m__1"/* name */
	, (methodPointerType)&HighScores_U3CAwakeU3Em__1_m30/* method */
	, &HighScores_t17_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, HighScores_t17_HighScores_U3CAwakeU3Em__1_m30_ParameterInfos/* parameters */
	, &HighScores_t17__CustomAttributeCache_HighScores_U3CAwakeU3Em__1_m30/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 31/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* HighScores_t17_MethodInfos[] =
{
	&HighScores__ctor_m25_MethodInfo,
	&HighScores_Awake_m26_MethodInfo,
	&HighScores_Start_m27_MethodInfo,
	&HighScores_SetScoreBoardText_m28_MethodInfo,
	&HighScores_Update_m29_MethodInfo,
	&HighScores_U3CAwakeU3Em__1_m30_MethodInfo,
	NULL
};
extern TypeInfo ScoreEntry_t16_il2cpp_TypeInfo;
static TypeInfo* HighScores_t17_il2cpp_TypeInfo__nestedTypes[2] =
{
	&ScoreEntry_t16_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* HighScores_t17_VTable[] =
{
	&Object_Equals_m49_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m51_MethodInfo,
	&Object_ToString_m52_MethodInfo,
};
void HighScores_t17_CustomAttributesCacheGenerator_HighScores_U3CAwakeU3Em__1_m30(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t36 * tmp;
		tmp = (CompilerGeneratedAttribute_t36 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t36_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m83(tmp, &CompilerGeneratedAttribute__ctor_m83_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache HighScores_t17__CustomAttributeCache_HighScores_U3CAwakeU3Em__1_m30 = {
1,
NULL,
&HighScores_t17_CustomAttributesCacheGenerator_HighScores_U3CAwakeU3Em__1_m30
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType HighScores_t17_0_0_0;
extern Il2CppType HighScores_t17_1_0_0;
struct HighScores_t17;
extern CustomAttributesCache HighScores_t17__CustomAttributeCache_HighScores_U3CAwakeU3Em__1_m30;
TypeInfo HighScores_t17_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "HighScores"/* name */
	, ""/* namespaze */
	, HighScores_t17_MethodInfos/* methods */
	, NULL/* properties */
	, HighScores_t17_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t3_il2cpp_TypeInfo/* parent */
	, HighScores_t17_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &HighScores_t17_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, HighScores_t17_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &HighScores_t17_il2cpp_TypeInfo/* cast_class */
	, &HighScores_t17_0_0_0/* byval_arg */
	, &HighScores_t17_1_0_0/* this_arg */
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
	, sizeof (HighScores_t17)/* instance_size */
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
	, 6/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SavePanaleActivator_t19_il2cpp_TypeInfo;

extern MethodInfo SavePanaleActivator_U3CAwakeU3Em__2_m37_MethodInfo;
extern MethodInfo SavePanaleActivator_SetHigh_m33_MethodInfo;
extern MethodInfo SavePanaleActivator_SetLow_m34_MethodInfo;


// System.Void SavePanaleActivator::.ctor()
extern MethodInfo SavePanaleActivator__ctor_m31_MethodInfo;
 void SavePanaleActivator__ctor_m31 (SavePanaleActivator_t19 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/&MonoBehaviour__ctor_m41_MethodInfo);
		return;
	}
}
// System.Void SavePanaleActivator::Awake()
extern MethodInfo SavePanaleActivator_Awake_m32_MethodInfo;
 void SavePanaleActivator_Awake_m32 (SavePanaleActivator_t19 * __this, MethodInfo* method){
	ParseQuery_1_t33 * V_0 = {0};
	Task_1_t10 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ParseObject_t21_il2cpp_TypeInfo));
		ParseQuery_1_t33 * L_0 = ParseObject_GetQuery_m63(NULL /*static, unused*/, (String_t*) &_stringLiteral1, /*hidden argument*/&ParseObject_GetQuery_m63_MethodInfo);
		NullCheck(L_0);
		ParseQuery_1_t33 * L_1 = ParseQuery_1_WhereExists_m64(L_0, (String_t*) &_stringLiteral2, /*hidden argument*/&ParseQuery_1_WhereExists_m64_MethodInfo);
		NullCheck(L_1);
		ParseQuery_1_t33 * L_2 = ParseQuery_1_WhereExists_m64(L_1, (String_t*) &_stringLiteral3, /*hidden argument*/&ParseQuery_1_WhereExists_m64_MethodInfo);
		NullCheck(L_2);
		ParseQuery_1_t33 * L_3 = ParseQuery_1_OrderByDescending_m65(L_2, (String_t*) &_stringLiteral3, /*hidden argument*/&ParseQuery_1_OrderByDescending_m65_MethodInfo);
		NullCheck(L_3);
		ParseQuery_1_t33 * L_4 = ParseQuery_1_Limit_m66(L_3, 5, /*hidden argument*/&ParseQuery_1_Limit_m66_MethodInfo);
		V_0 = L_4;
		NullCheck(V_0);
		Task_1_t10 * L_5 = ParseQuery_1_FindAsync_m67(V_0, /*hidden argument*/&ParseQuery_1_FindAsync_m67_MethodInfo);
		V_1 = L_5;
		IntPtr_t34 L_6 = { &SavePanaleActivator_U3CAwakeU3Em__2_m37_MethodInfo };
		Action_1_t27 * L_7 = (Action_1_t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Action_1_t27_il2cpp_TypeInfo));
		Action_1__ctor_m68(L_7, __this, L_6, /*hidden argument*/&Action_1__ctor_m68_MethodInfo);
		NullCheck(V_1);
		Task_1_ContinueWith_m69(V_1, L_7, /*hidden argument*/&Task_1_ContinueWith_m69_MethodInfo);
		return;
	}
}
// System.Void SavePanaleActivator::SetHigh()
 void SavePanaleActivator_SetHigh_m33 (SavePanaleActivator_t19 * __this, MethodInfo* method){
	{
		GameObject_t4 * L_0 = (__this->___newHighScorePanel_4);
		NullCheck(L_0);
		GameObject_SetActive_m94(L_0, 1, /*hidden argument*/&GameObject_SetActive_m94_MethodInfo);
		return;
	}
}
// System.Void SavePanaleActivator::SetLow()
 void SavePanaleActivator_SetLow_m34 (SavePanaleActivator_t19 * __this, MethodInfo* method){
	{
		GameObject_t4 * L_0 = (__this->___newHighScorePanel_4);
		NullCheck(L_0);
		GameObject_SetActive_m94(L_0, 0, /*hidden argument*/&GameObject_SetActive_m94_MethodInfo);
		return;
	}
}
// System.Void SavePanaleActivator::Start()
extern MethodInfo SavePanaleActivator_Start_m35_MethodInfo;
 void SavePanaleActivator_Start_m35 (SavePanaleActivator_t19 * __this, MethodInfo* method){
	{
		__this->___playerScore_6 = (((PlayerControle_t13_StaticFields*)InitializedTypeInfo(&PlayerControle_t13_il2cpp_TypeInfo)->static_fields)->___count_6);
		GameObject_t4 * L_0 = (__this->___newHighScorePanel_4);
		NullCheck(L_0);
		GameObject_SetActive_m94(L_0, 0, /*hidden argument*/&GameObject_SetActive_m94_MethodInfo);
		return;
	}
}
// System.Void SavePanaleActivator::Update()
extern MethodInfo SavePanaleActivator_Update_m36_MethodInfo;
 void SavePanaleActivator_Update_m36 (SavePanaleActivator_t19 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___score_5);
		int32_t L_1 = (__this->___playerScore_6);
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		SavePanaleActivator_SetHigh_m33(__this, /*hidden argument*/&SavePanaleActivator_SetHigh_m33_MethodInfo);
	}

IL_0017:
	{
		int32_t L_2 = (__this->___score_5);
		int32_t L_3 = (__this->___playerScore_6);
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		SavePanaleActivator_SetLow_m34(__this, /*hidden argument*/&SavePanaleActivator_SetLow_m34_MethodInfo);
	}

IL_002e:
	{
		return;
	}
}
// System.Void SavePanaleActivator::<Awake>m__2(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>)
 void SavePanaleActivator_U3CAwakeU3Em__2_m37 (SavePanaleActivator_t19 * __this, Task_1_t10 * ___t, MethodInfo* method){
	ParseObject_t21 * V_0 = {0};
	Object_t* V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t35 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t35 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		NullCheck(___t);
		Object_t* L_0 = Task_1_get_Result_m74(___t, /*hidden argument*/&Task_1_get_Result_m74_MethodInfo);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(&IEnumerable_1_GetEnumerator_m75_MethodInfo, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0011:
		{
			NullCheck(V_1);
			ParseObject_t21 * L_2 = (ParseObject_t21 *)InterfaceFuncInvoker0< ParseObject_t21 * >::Invoke(&IEnumerator_1_get_Current_m76_MethodInfo, V_1);
			V_0 = L_2;
			NullCheck(V_0);
			int32_t L_3 = ParseObject_Get_TisInt32_t23_m77(V_0, (String_t*) &_stringLiteral3, /*hidden argument*/&ParseObject_Get_TisInt32_t23_m77_MethodInfo);
			__this->___score_5 = L_3;
			NullCheck(V_0);
			String_t* L_4 = ParseObject_Get_TisString_t_m78(V_0, (String_t*) &_stringLiteral2, /*hidden argument*/&ParseObject_Get_TisString_t_m78_MethodInfo);
			__this->___name_7 = L_4;
			int32_t L_5 = (__this->___score_5);
			int32_t L_6 = L_5;
			Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t23_il2cpp_TypeInfo), &L_6);
			Debug_Log_m45(NULL /*static, unused*/, L_7, /*hidden argument*/&Debug_Log_m45_MethodInfo);
		}

IL_004a:
		{
			NullCheck(V_1);
			bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m80_MethodInfo, V_1);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_0055:
		{
			// IL_0055: leave IL_0065
			leaveInstructions[0] = 0x65; // 1
			THROW_SENTINEL(IL_0065);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_005a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t35 *)e.ex;
		goto IL_005a;
	}

IL_005a:
	{ // begin finally (depth: 1)
		{
			if (V_1)
			{
				goto IL_005e;
			}
		}

IL_005d:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x65:
					goto IL_0065;
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
		}

IL_005e:
		{
			NullCheck(V_1);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m81_MethodInfo, V_1);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x65:
					goto IL_0065;
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
		}
	} // end finally (depth: 1)

IL_0065:
	{
		return;
	}
}
// Metadata Definition SavePanaleActivator
extern Il2CppType Button_t18_0_0_6;
FieldInfo SavePanaleActivator_t19____highScore_2_FieldInfo = 
{
	"highScore"/* name */
	, &Button_t18_0_0_6/* type */
	, &SavePanaleActivator_t19_il2cpp_TypeInfo/* parent */
	, offsetof(SavePanaleActivator_t19, ___highScore_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Button_t18_0_0_6;
FieldInfo SavePanaleActivator_t19____lowScore_3_FieldInfo = 
{
	"lowScore"/* name */
	, &Button_t18_0_0_6/* type */
	, &SavePanaleActivator_t19_il2cpp_TypeInfo/* parent */
	, offsetof(SavePanaleActivator_t19, ___lowScore_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType GameObject_t4_0_0_6;
FieldInfo SavePanaleActivator_t19____newHighScorePanel_4_FieldInfo = 
{
	"newHighScorePanel"/* name */
	, &GameObject_t4_0_0_6/* type */
	, &SavePanaleActivator_t19_il2cpp_TypeInfo/* parent */
	, offsetof(SavePanaleActivator_t19, ___newHighScorePanel_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_6;
FieldInfo SavePanaleActivator_t19____score_5_FieldInfo = 
{
	"score"/* name */
	, &Int32_t23_0_0_6/* type */
	, &SavePanaleActivator_t19_il2cpp_TypeInfo/* parent */
	, offsetof(SavePanaleActivator_t19, ___score_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t23_0_0_6;
FieldInfo SavePanaleActivator_t19____playerScore_6_FieldInfo = 
{
	"playerScore"/* name */
	, &Int32_t23_0_0_6/* type */
	, &SavePanaleActivator_t19_il2cpp_TypeInfo/* parent */
	, offsetof(SavePanaleActivator_t19, ___playerScore_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_6;
FieldInfo SavePanaleActivator_t19____name_7_FieldInfo = 
{
	"name"/* name */
	, &String_t_0_0_6/* type */
	, &SavePanaleActivator_t19_il2cpp_TypeInfo/* parent */
	, offsetof(SavePanaleActivator_t19, ___name_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* SavePanaleActivator_t19_FieldInfos[] =
{
	&SavePanaleActivator_t19____highScore_2_FieldInfo,
	&SavePanaleActivator_t19____lowScore_3_FieldInfo,
	&SavePanaleActivator_t19____newHighScorePanel_4_FieldInfo,
	&SavePanaleActivator_t19____score_5_FieldInfo,
	&SavePanaleActivator_t19____playerScore_6_FieldInfo,
	&SavePanaleActivator_t19____name_7_FieldInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void SavePanaleActivator::.ctor()
MethodInfo SavePanaleActivator__ctor_m31_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SavePanaleActivator__ctor_m31/* method */
	, &SavePanaleActivator_t19_il2cpp_TypeInfo/* declaring_type */
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
	, 32/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void SavePanaleActivator::Awake()
MethodInfo SavePanaleActivator_Awake_m32_MethodInfo = 
{
	"Awake"/* name */
	, (methodPointerType)&SavePanaleActivator_Awake_m32/* method */
	, &SavePanaleActivator_t19_il2cpp_TypeInfo/* declaring_type */
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
	, 33/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void SavePanaleActivator::SetHigh()
MethodInfo SavePanaleActivator_SetHigh_m33_MethodInfo = 
{
	"SetHigh"/* name */
	, (methodPointerType)&SavePanaleActivator_SetHigh_m33/* method */
	, &SavePanaleActivator_t19_il2cpp_TypeInfo/* declaring_type */
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
	, 34/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void SavePanaleActivator::SetLow()
MethodInfo SavePanaleActivator_SetLow_m34_MethodInfo = 
{
	"SetLow"/* name */
	, (methodPointerType)&SavePanaleActivator_SetLow_m34/* method */
	, &SavePanaleActivator_t19_il2cpp_TypeInfo/* declaring_type */
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
	, 35/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void SavePanaleActivator::Start()
MethodInfo SavePanaleActivator_Start_m35_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&SavePanaleActivator_Start_m35/* method */
	, &SavePanaleActivator_t19_il2cpp_TypeInfo/* declaring_type */
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
	, 36/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void SavePanaleActivator::Update()
MethodInfo SavePanaleActivator_Update_m36_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&SavePanaleActivator_Update_m36/* method */
	, &SavePanaleActivator_t19_il2cpp_TypeInfo/* declaring_type */
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
	, 37/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Task_1_t10_0_0_0;
static ParameterInfo SavePanaleActivator_t19_SavePanaleActivator_U3CAwakeU3Em__2_m37_ParameterInfos[] = 
{
	{"t", 0, 134217734, &EmptyCustomAttributesCache, &Task_1_t10_0_0_0},
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache SavePanaleActivator_t19__CustomAttributeCache_SavePanaleActivator_U3CAwakeU3Em__2_m37;
// System.Void SavePanaleActivator::<Awake>m__2(System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<Parse.ParseObject>>)
MethodInfo SavePanaleActivator_U3CAwakeU3Em__2_m37_MethodInfo = 
{
	"<Awake>m__2"/* name */
	, (methodPointerType)&SavePanaleActivator_U3CAwakeU3Em__2_m37/* method */
	, &SavePanaleActivator_t19_il2cpp_TypeInfo/* declaring_type */
	, &Void_t22_0_0_0/* return_type */
	, RuntimeInvoker_Void_t22_Object_t/* invoker_method */
	, SavePanaleActivator_t19_SavePanaleActivator_U3CAwakeU3Em__2_m37_ParameterInfos/* parameters */
	, &SavePanaleActivator_t19__CustomAttributeCache_SavePanaleActivator_U3CAwakeU3Em__2_m37/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 38/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* SavePanaleActivator_t19_MethodInfos[] =
{
	&SavePanaleActivator__ctor_m31_MethodInfo,
	&SavePanaleActivator_Awake_m32_MethodInfo,
	&SavePanaleActivator_SetHigh_m33_MethodInfo,
	&SavePanaleActivator_SetLow_m34_MethodInfo,
	&SavePanaleActivator_Start_m35_MethodInfo,
	&SavePanaleActivator_Update_m36_MethodInfo,
	&SavePanaleActivator_U3CAwakeU3Em__2_m37_MethodInfo,
	NULL
};
static MethodInfo* SavePanaleActivator_t19_VTable[] =
{
	&Object_Equals_m49_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m51_MethodInfo,
	&Object_ToString_m52_MethodInfo,
};
void SavePanaleActivator_t19_CustomAttributesCacheGenerator_SavePanaleActivator_U3CAwakeU3Em__2_m37(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t36 * tmp;
		tmp = (CompilerGeneratedAttribute_t36 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t36_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m83(tmp, &CompilerGeneratedAttribute__ctor_m83_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache SavePanaleActivator_t19__CustomAttributeCache_SavePanaleActivator_U3CAwakeU3Em__2_m37 = {
1,
NULL,
&SavePanaleActivator_t19_CustomAttributesCacheGenerator_SavePanaleActivator_U3CAwakeU3Em__2_m37
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType SavePanaleActivator_t19_0_0_0;
extern Il2CppType SavePanaleActivator_t19_1_0_0;
struct SavePanaleActivator_t19;
extern CustomAttributesCache SavePanaleActivator_t19__CustomAttributeCache_SavePanaleActivator_U3CAwakeU3Em__2_m37;
TypeInfo SavePanaleActivator_t19_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "SavePanaleActivator"/* name */
	, ""/* namespaze */
	, SavePanaleActivator_t19_MethodInfos/* methods */
	, NULL/* properties */
	, SavePanaleActivator_t19_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t3_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &SavePanaleActivator_t19_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, SavePanaleActivator_t19_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &SavePanaleActivator_t19_il2cpp_TypeInfo/* cast_class */
	, &SavePanaleActivator_t19_0_0_0/* byval_arg */
	, &SavePanaleActivator_t19_1_0_0/* this_arg */
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
	, sizeof (SavePanaleActivator_t19)/* instance_size */
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
	, 7/* method_count */
	, 0/* property_count */
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
extern TypeInfo ViewScoreBoard_t20_il2cpp_TypeInfo;

extern TypeInfo IEnumerable_1_t40_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t41_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t42_il2cpp_TypeInfo;
extern MethodInfo GameObject_GetComponent_TisText_t1_m99_MethodInfo;
extern MethodInfo List_1_get_Count_m100_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m101_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m102_MethodInfo;
extern MethodInfo String_Concat_m103_MethodInfo;
struct GameObject_t4;
struct GameObject_t4;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
 Object_t * GameObject_GetComponent_TisObject_t_m104_gshared (GameObject_t4 * __this, MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m104(__this, method) (Object_t *)GameObject_GetComponent_TisObject_t_m104_gshared((GameObject_t4 *)__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t1_m99(__this, method) (Text_t1 *)GameObject_GetComponent_TisObject_t_m104_gshared((GameObject_t4 *)__this, method)


// System.Void ViewScoreBoard::.ctor()
extern MethodInfo ViewScoreBoard__ctor_m38_MethodInfo;
 void ViewScoreBoard__ctor_m38 (ViewScoreBoard_t20 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m41(__this, /*hidden argument*/&MonoBehaviour__ctor_m41_MethodInfo);
		return;
	}
}
// System.Void ViewScoreBoard::Start()
extern MethodInfo ViewScoreBoard_Start_m39_MethodInfo;
 void ViewScoreBoard_Start_m39 (ViewScoreBoard_t20 * __this, MethodInfo* method){
	{
		GameObject_t4 * L_0 = Component_get_gameObject_m92(__this, /*hidden argument*/&Component_get_gameObject_m92_MethodInfo);
		NullCheck(L_0);
		Text_t1 * L_1 = GameObject_GetComponent_TisText_t1_m99(L_0, /*hidden argument*/&GameObject_GetComponent_TisText_t1_m99_MethodInfo);
		__this->___scoreString_4 = L_1;
		return;
	}
}
// System.Void ViewScoreBoard::Update()
extern MethodInfo ViewScoreBoard_Update_m40_MethodInfo;
 void ViewScoreBoard_Update_m40 (ViewScoreBoard_t20 * __this, MethodInfo* method){
	List_1_t8 * V_0 = {0};
	String_t* V_1 = {0};
	ScoreEntry_t7  V_2 = {0};
	Object_t* V_3 = {0};
	String_t* V_4 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t35 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t35 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		GlobalScoreboard_t9 * L_0 = (__this->___scoreboard_2);
		NullCheck(L_0);
		List_1_t8 * L_1 = GlobalScoreboard_GetScores_m11(L_0, /*hidden argument*/&GlobalScoreboard_GetScores_m11_MethodInfo);
		V_0 = L_1;
		NullCheck(V_0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&List_1_get_Count_m100_MethodInfo, V_0);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_009b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		V_1 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		Object_t* L_3 = Enumerable_Take_TisScoreEntry_t7_m70(NULL /*static, unused*/, V_0, 5, /*hidden argument*/&Enumerable_Take_TisScoreEntry_t7_m70_MethodInfo);
		NullCheck(L_3);
		Object_t* L_4 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(&IEnumerable_1_GetEnumerator_m101_MethodInfo, L_3);
		V_3 = L_4;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0074;
		}

IL_0030:
		{
			NullCheck(V_3);
			ScoreEntry_t7  L_5 = (ScoreEntry_t7 )InterfaceFuncInvoker0< ScoreEntry_t7  >::Invoke(&IEnumerator_1_get_Current_m102_MethodInfo, V_3);
			V_2 = L_5;
			V_4 = V_1;
			StringU5BU5D_t42* L_6 = ((StringU5BU5D_t42*)SZArrayNew(InitializedTypeInfo(&StringU5BU5D_t42_il2cpp_TypeInfo), 5));
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
			ArrayElementTypeCheck (L_6, V_4);
			*((String_t**)(String_t**)SZArrayLdElema(L_6, 0)) = (String_t*)V_4;
			StringU5BU5D_t42* L_7 = L_6;
			NullCheck((&V_2));
			String_t* L_8 = ((&V_2)->___name_1);
			NullCheck(L_7);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
			ArrayElementTypeCheck (L_7, L_8);
			*((String_t**)(String_t**)SZArrayLdElema(L_7, 1)) = (String_t*)L_8;
			StringU5BU5D_t42* L_9 = L_7;
			NullCheck(L_9);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 2);
			ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral12);
			*((String_t**)(String_t**)SZArrayLdElema(L_9, 2)) = (String_t*)(String_t*) &_stringLiteral12;
			StringU5BU5D_t42* L_10 = L_9;
			NullCheck((&V_2));
			int32_t* L_11 = &((&V_2)->___score_0);
			String_t* L_12 = Int32_ToString_m46(L_11, /*hidden argument*/&Int32_ToString_m46_MethodInfo);
			NullCheck(L_10);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
			ArrayElementTypeCheck (L_10, L_12);
			*((String_t**)(String_t**)SZArrayLdElema(L_10, 3)) = (String_t*)L_12;
			StringU5BU5D_t42* L_13 = L_10;
			NullCheck(L_13);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
			ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral13);
			*((String_t**)(String_t**)SZArrayLdElema(L_13, 4)) = (String_t*)(String_t*) &_stringLiteral13;
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			String_t* L_14 = String_Concat_m103(NULL /*static, unused*/, L_13, /*hidden argument*/&String_Concat_m103_MethodInfo);
			V_1 = L_14;
		}

IL_0074:
		{
			NullCheck(V_3);
			bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m80_MethodInfo, V_3);
			if (L_15)
			{
				goto IL_0030;
			}
		}

IL_007f:
		{
			// IL_007f: leave IL_008f
			leaveInstructions[0] = 0x8F; // 1
			THROW_SENTINEL(IL_008f);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0084;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t35 *)e.ex;
		goto IL_0084;
	}

IL_0084:
	{ // begin finally (depth: 1)
		{
			if (V_3)
			{
				goto IL_0088;
			}
		}

IL_0087:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x8F:
					goto IL_008f;
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
		}

IL_0088:
		{
			NullCheck(V_3);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m81_MethodInfo, V_3);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x8F:
					goto IL_008f;
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
		}
	} // end finally (depth: 1)

IL_008f:
	{
		Text_t1 * L_16 = (__this->___scoresText_3);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(&Text_set_text_m48_MethodInfo, L_16, V_1);
	}

IL_009b:
	{
		return;
	}
}
// Metadata Definition ViewScoreBoard
extern Il2CppType GlobalScoreboard_t9_0_0_6;
FieldInfo ViewScoreBoard_t20____scoreboard_2_FieldInfo = 
{
	"scoreboard"/* name */
	, &GlobalScoreboard_t9_0_0_6/* type */
	, &ViewScoreBoard_t20_il2cpp_TypeInfo/* parent */
	, offsetof(ViewScoreBoard_t20, ___scoreboard_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Text_t1_0_0_6;
FieldInfo ViewScoreBoard_t20____scoresText_3_FieldInfo = 
{
	"scoresText"/* name */
	, &Text_t1_0_0_6/* type */
	, &ViewScoreBoard_t20_il2cpp_TypeInfo/* parent */
	, offsetof(ViewScoreBoard_t20, ___scoresText_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Text_t1_0_0_1;
FieldInfo ViewScoreBoard_t20____scoreString_4_FieldInfo = 
{
	"scoreString"/* name */
	, &Text_t1_0_0_1/* type */
	, &ViewScoreBoard_t20_il2cpp_TypeInfo/* parent */
	, offsetof(ViewScoreBoard_t20, ___scoreString_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ViewScoreBoard_t20_FieldInfos[] =
{
	&ViewScoreBoard_t20____scoreboard_2_FieldInfo,
	&ViewScoreBoard_t20____scoresText_3_FieldInfo,
	&ViewScoreBoard_t20____scoreString_4_FieldInfo,
	NULL
};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void ViewScoreBoard::.ctor()
MethodInfo ViewScoreBoard__ctor_m38_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ViewScoreBoard__ctor_m38/* method */
	, &ViewScoreBoard_t20_il2cpp_TypeInfo/* declaring_type */
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
	, 39/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void ViewScoreBoard::Start()
MethodInfo ViewScoreBoard_Start_m39_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&ViewScoreBoard_Start_m39/* method */
	, &ViewScoreBoard_t20_il2cpp_TypeInfo/* declaring_type */
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
	, 40/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t22_0_0_0;
extern void* RuntimeInvoker_Void_t22 (MethodInfo* method, void* obj, void** args);
// System.Void ViewScoreBoard::Update()
MethodInfo ViewScoreBoard_Update_m40_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&ViewScoreBoard_Update_m40/* method */
	, &ViewScoreBoard_t20_il2cpp_TypeInfo/* declaring_type */
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
	, 41/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ViewScoreBoard_t20_MethodInfos[] =
{
	&ViewScoreBoard__ctor_m38_MethodInfo,
	&ViewScoreBoard_Start_m39_MethodInfo,
	&ViewScoreBoard_Update_m40_MethodInfo,
	NULL
};
static MethodInfo* ViewScoreBoard_t20_VTable[] =
{
	&Object_Equals_m49_MethodInfo,
	&Object_Finalize_m50_MethodInfo,
	&Object_GetHashCode_m51_MethodInfo,
	&Object_ToString_m52_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType ViewScoreBoard_t20_0_0_0;
extern Il2CppType ViewScoreBoard_t20_1_0_0;
struct ViewScoreBoard_t20;
TypeInfo ViewScoreBoard_t20_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "ViewScoreBoard"/* name */
	, ""/* namespaze */
	, ViewScoreBoard_t20_MethodInfos/* methods */
	, NULL/* properties */
	, ViewScoreBoard_t20_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t3_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ViewScoreBoard_t20_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ViewScoreBoard_t20_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ViewScoreBoard_t20_il2cpp_TypeInfo/* cast_class */
	, &ViewScoreBoard_t20_0_0_0/* byval_arg */
	, &ViewScoreBoard_t20_1_0_0/* this_arg */
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
	, sizeof (ViewScoreBoard_t20)/* instance_size */
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
	, 3/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
