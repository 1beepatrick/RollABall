﻿#pragma once
// System.Int32[]
struct Int32U5BU5D_t2359;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3998;
// System.Int64[]
struct Int64U5BU5D_t3138;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t5106;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2166;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t10309;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t10310  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::table
	Int32U5BU5D_t2359* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::linkSlots
	LinkU5BU5D_t3998* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::keySlots
	Int64U5BU5D_t3138* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::valueSlots
	Int32U5BU5D_t2359* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::serialization_info
	SerializationInfo_t2166 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t10310_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE_0;
	// System.Single System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR_1;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::NO_SLOT
	int32_t ___NO_SLOT_2;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::HASH_FLAG
	int32_t ___HASH_FLAG_3;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::<>f__am$cacheB
	Transform_1_t10309 * ___U3CU3Ef__am$cacheB_15;
};
