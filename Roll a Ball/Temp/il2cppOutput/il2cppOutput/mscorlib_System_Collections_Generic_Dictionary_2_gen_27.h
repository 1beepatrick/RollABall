#pragma once
// System.Int32[]
struct Int32U5BU5D_t2359;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3998;
// System.String[]
struct StringU5BU5D_t42;
// System.Single[]
struct SingleU5BU5D_t2110;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t4136;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Single,System.Collections.DictionaryEntry>
struct Transform_1_t7698;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t1823  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,System.Single>::table
	Int32U5BU5D_t2359* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,System.Single>::linkSlots
	LinkU5BU5D_t3998* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,System.Single>::keySlots
	StringU5BU5D_t42* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,System.Single>::valueSlots
	SingleU5BU5D_t2110* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Single>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Single>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Single>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Single>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Single>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,System.Single>::serialization_info
	SerializationInfo_t2166 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Single>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t1823_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Single>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE_0;
	// System.Single System.Collections.Generic.Dictionary`2<System.String,System.Single>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR_1;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Single>::NO_SLOT
	int32_t ___NO_SLOT_2;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Single>::HASH_FLAG
	int32_t ___HASH_FLAG_3;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,System.Single>::<>f__am$cacheB
	Transform_1_t7698 * ___U3CU3Ef__am$cacheB_15;
};
