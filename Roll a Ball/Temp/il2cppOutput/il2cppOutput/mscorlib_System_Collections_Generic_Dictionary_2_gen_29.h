#pragma once
// System.Int32[]
struct Int32U5BU5D_t2359;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3998;
// System.String[]
struct StringU5BU5D_t42;
// System.DateTime[]
struct DateTimeU5BU5D_t4088;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t4136;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.DictionaryEntry>
struct Transform_1_t7805;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.DateTime>
struct Dictionary_2_t1825  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::table
	Int32U5BU5D_t2359* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::linkSlots
	LinkU5BU5D_t3998* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::keySlots
	StringU5BU5D_t42* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::valueSlots
	DateTimeU5BU5D_t4088* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::serialization_info
	SerializationInfo_t2166 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t1825_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE_0;
	// System.Single System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR_1;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::NO_SLOT
	int32_t ___NO_SLOT_2;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::HASH_FLAG
	int32_t ___HASH_FLAG_3;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::<>f__am$cacheB
	Transform_1_t7805 * ___U3CU3Ef__am$cacheB_15;
};
