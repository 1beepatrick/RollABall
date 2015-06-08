#pragma once

// Parse.ParseObject
struct ParseObject_t21;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t581;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t462;
// Parse.ParseACL
struct ParseACL_t533;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t448;
// System.Type
struct Type_t;
// System.Func`1<Parse.ParseObject>
struct Func_1_t630;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t457;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t28;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>
struct IDictionary_2_t631;
// System.Threading.Tasks.Task
struct Task_t438;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t602;
// System.Collections.Generic.IList`1<Parse.ParseObject>
struct IList_1_t632;
// System.Collections.Generic.ICollection`1<Parse.ParseObject>
struct ICollection_1_t633;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t490;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t634;
// System.Collections.IEnumerator
struct IEnumerator_t30;
// Parse.ParseQuery`1<Parse.ParseObject>
struct ParseQuery_1_t33;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t456;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t635;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t556;
// Parse.ParseFile
struct ParseFile_t572;
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void Parse.ParseObject::.ctor()
 void ParseObject__ctor_m2531 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::.ctor(System.String)
 void ParseObject__ctor_m42 (ParseObject_t21 * __this, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::Create(System.String)
 ParseObject_t21 * ParseObject_Create_m2532 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::CreateWithoutData(System.String,System.String)
 ParseObject_t21 * ParseObject_CreateWithoutData_m2533 (Object_t * __this/* static, unused */, String_t* ___className, String_t* ___objectId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::GetFieldForPropertyName(System.Type,System.String)
 String_t* ParseObject_GetFieldForPropertyName_m2534 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::SetDefaultValues()
 void ParseObject_SetDefaultValues_m2535 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::GetClassName(System.Type)
 String_t* ParseObject_GetClassName_m2536 (Object_t * __this/* static, unused */, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`1<Parse.ParseObject> Parse.ParseObject::GetFactory(System.String)
 Func_1_t630 * ParseObject_GetFactory_m2537 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::UnregisterSubclass(System.String)
 void ParseObject_UnregisterSubclass_m2538 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.ParseObject::GetType(System.String)
 Type_t * ParseObject_GetType_m2539 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Revert()
 void ParseObject_Revert_m2540 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterFetch(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseObject_MergeAfterFetch_m2541 (ParseObject_t21 * __this, Object_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterFailedSave(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>)
 void ParseObject_MergeAfterFailedSave_m2542 (ParseObject_t21 * __this, Object_t* ___operationsBeforeSave, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterSave(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseObject_MergeAfterSave_m2543 (ParseObject_t21 * __this, Object_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeMagicFields(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseObject_MergeMagicFields_m2544 (ParseObject_t21 * __this, Object_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeFromServer(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseObject_MergeFromServer_m2545 (ParseObject_t21 * __this, Object_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeFromObject(Parse.ParseObject)
 void ParseObject_MergeFromObject_m2546 (ParseObject_t21 * __this, ParseObject_t21 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_HasDirtyChildren()
 bool ParseObject_get_HasDirtyChildren_m2547 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckpointMutableContainer(System.Object)
 void ParseObject_CheckpointMutableContainer_m2548 (ParseObject_t21 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckForChangesToMutableContainer(System.String,System.Object)
 void ParseObject_CheckForChangesToMutableContainer_m2549 (ParseObject_t21 * __this, String_t* ___key, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckForChangesToMutableContainers()
 void ParseObject_CheckForChangesToMutableContainers_m2550 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject> Parse.ParseObject::FindUnsavedChildren()
 Object_t* ParseObject_FindUnsavedChildren_m2551 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject> Parse.ParseObject::CollectFetchedObjects()
 Object_t* ParseObject_CollectFetchedObjects_m2552 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::ToJSONObjectForSaving(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>)
 Object_t* ParseObject_ToJSONObjectForSaving_m2553 (ParseObject_t21 * __this, Object_t* ___operations, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::ServerDataToJSONObjectForSerialization()
 Object_t* ParseObject_ServerDataToJSONObjectForSerialization_m2554 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation> Parse.ParseObject::StartSave()
 Object_t* ParseObject_StartSave_m2555 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_t438 * ParseObject_SaveAsync_m2556 (ParseObject_t21 * __this, Task_t438 * ___toAwait, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync()
 Task_t438 * ParseObject_SaveAsync_m44 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync(System.Threading.CancellationToken)
 Task_t438 * ParseObject_SaveAsync_m2557 (ParseObject_t21 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_1_t602 * ParseObject_FetchAsyncInternal_m2558 (ParseObject_t21 * __this, Task_t438 * ___toAwait, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeepSaveAsync(System.Object,System.String,System.Threading.CancellationToken)
 Task_t438 * ParseObject_DeepSaveAsync_m2559 (Object_t * __this/* static, unused */, Object_t * ___obj, String_t* ___sessionToken, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchAsyncInternal(System.Threading.CancellationToken)
 Task_1_t602 * ParseObject_FetchAsyncInternal_m2560 (ParseObject_t21 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchIfNeededAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_1_t602 * ParseObject_FetchIfNeededAsyncInternal_m2561 (ParseObject_t21 * __this, Task_t438 * ___toAwait, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchIfNeededAsyncInternal(System.Threading.CancellationToken)
 Task_1_t602 * ParseObject_FetchIfNeededAsyncInternal_m2562 (ParseObject_t21 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_t438 * ParseObject_DeleteAsync_m2563 (ParseObject_t21 * __this, Task_t438 * ___toAwait, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync()
 Task_t438 * ParseObject_DeleteAsync_m2564 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync(System.Threading.CancellationToken)
 Task_t438 * ParseObject_DeleteAsync_m2565 (ParseObject_t21 * __this, CancellationToken_t436  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CollectDirtyChildren(System.Object,System.Collections.Generic.IList`1<Parse.ParseObject>,System.Collections.Generic.ICollection`1<Parse.ParseObject>,System.Collections.Generic.ICollection`1<Parse.ParseObject>)
 void ParseObject_CollectDirtyChildren_m2566 (Object_t * __this/* static, unused */, Object_t * ___node, Object_t* ___dirtyChildren, Object_t* ___seen, Object_t* ___seenNew, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CollectDirtyChildren(System.Object,System.Collections.Generic.IList`1<Parse.ParseObject>)
 void ParseObject_CollectDirtyChildren_m2567 (Object_t * __this/* static, unused */, Object_t * ___node, Object_t* ___dirtyChildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CanBeSerializedAsValue(System.Object)
 bool ParseObject_CanBeSerializedAsValue_m2568 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_CanBeSerialized()
 bool ParseObject_get_CanBeSerialized_m2569 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Remove(System.String)
 void ParseObject_Remove_m2570 (ParseObject_t21 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::ApplyOperations(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
 void ParseObject_ApplyOperations_m2571 (ParseObject_t21 * __this, Object_t* ___operations, Object_t* ___map, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::RebuildEstimatedData()
 void ParseObject_RebuildEstimatedData_m2572 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::PerformOperation(System.String,Parse.Internal.IParseFieldOperation)
 void ParseObject_PerformOperation_m2573 (ParseObject_t21 * __this, String_t* ___key, Object_t * ___operation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnSettingValue(System.String&,System.Object&)
 void ParseObject_OnSettingValue_m2574 (ParseObject_t21 * __this, String_t** ___key, Object_t ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseObject::get_Item(System.String)
 Object_t * ParseObject_get_Item_m2575 (ParseObject_t21 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_Item(System.String,System.Object)
 void ParseObject_set_Item_m43 (ParseObject_t21 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Set(System.String,System.Object)
 void ParseObject_Set_m2576 (ParseObject_t21 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String)
 void ParseObject_Increment_m2577 (ParseObject_t21 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String,System.Int64)
 void ParseObject_Increment_m2578 (ParseObject_t21 * __this, String_t* ___key, int64_t ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String,System.Double)
 void ParseObject_Increment_m2579 (ParseObject_t21 * __this, String_t* ___key, double ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddToList(System.String,System.Object)
 void ParseObject_AddToList_m2580 (ParseObject_t21 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddUniqueToList(System.String,System.Object)
 void ParseObject_AddUniqueToList_m2581 (ParseObject_t21 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::ContainsKey(System.String)
 bool ParseObject_ContainsKey_m2582 (ParseObject_t21 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsDataAvailable()
 bool ParseObject_get_IsDataAvailable_m2583 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CheckIsDataAvailable(System.String)
 bool ParseObject_CheckIsDataAvailable_m2584 (ParseObject_t21 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckGetAccess(System.String)
 void ParseObject_CheckGetAccess_m2585 (ParseObject_t21 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckKeyIsMutable(System.String)
 void ParseObject_CheckKeyIsMutable_m2586 (ParseObject_t21 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::IsKeyMutable(System.String)
 bool ParseObject_IsKeyMutable_m2587 (ParseObject_t21 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::HasSameId(Parse.ParseObject)
 bool ParseObject_HasSameId_m2588 (ParseObject_t21 * __this, ParseObject_t21 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation> Parse.ParseObject::get_CurrentOperations()
 Object_t* ParseObject_get_CurrentOperations_m2589 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.ParseObject::get_Keys()
 Object_t* ParseObject_get_Keys_m2590 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddToHashedObjects(System.Object)
 void ParseObject_AddToHashedObjects_m2591 (ParseObject_t21 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseACL Parse.ParseObject::get_ACL()
 ParseACL_t533 * ParseObject_get_ACL_m2592 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ACL(Parse.ParseACL)
 void ParseObject_set_ACL_m2593 (ParseObject_t21 * __this, ParseACL_t533 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsNew()
 bool ParseObject_get_IsNew_m2594 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_IsNew(System.Boolean)
 void ParseObject_set_IsNew_m2595 (ParseObject_t21 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParseObject::get_UpdatedAt()
 Nullable_1_t629  ParseObject_get_UpdatedAt_m2596 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_UpdatedAt(System.Nullable`1<System.DateTime>)
 void ParseObject_set_UpdatedAt_m2597 (ParseObject_t21 * __this, Nullable_1_t629  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParseObject::get_CreatedAt()
 Nullable_1_t629  ParseObject_get_CreatedAt_m2598 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_CreatedAt(System.Nullable`1<System.DateTime>)
 void ParseObject_set_CreatedAt_m2599 (ParseObject_t21 * __this, Nullable_1_t629  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsDirty()
 bool ParseObject_get_IsDirty_m2600 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_IsDirty(System.Boolean)
 void ParseObject_set_IsDirty_m2601 (ParseObject_t21 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::IsKeyDirty(System.String)
 bool ParseObject_IsKeyDirty_m2602 (ParseObject_t21 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CheckIsDirty(System.Boolean)
 bool ParseObject_CheckIsDirty_m2603 (ParseObject_t21 * __this, bool ___considerChildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::get_ObjectId()
 String_t* ParseObject_get_ObjectId_m2604 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ObjectId(System.String)
 void ParseObject_set_ObjectId_m2605 (ParseObject_t21 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::SetObjectIdInternal(System.String)
 void ParseObject_SetObjectIdInternal_m2606 (ParseObject_t21 * __this, String_t* ___objectId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::get_ClassName()
 String_t* ParseObject_get_ClassName_m2607 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ClassName(System.String)
 void ParseObject_set_ClassName_m2608 (ParseObject_t21 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Add(System.String,System.Object)
 void ParseObject_Add_m2609 (ParseObject_t21 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Parse.ParseObject::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator()
 Object_t* ParseObject_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_GetEnumerator_m2610 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.ParseObject::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ParseObject_System_Collections_IEnumerable_GetEnumerator_m2611 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseObject> Parse.ParseObject::GetQuery(System.String)
 ParseQuery_1_t33 * ParseObject_GetQuery_m63 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Parse.ParseObject::get_PropertyMappings()
 Object_t* ParseObject_get_PropertyMappings_m2612 (ParseObject_t21 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnFieldsChanged(System.Collections.Generic.IEnumerable`1<System.String>)
 void ParseObject_OnFieldsChanged_m2613 (ParseObject_t21 * __this, Object_t* ___fieldNames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnPropertyChanged(System.String)
 void ParseObject_OnPropertyChanged_m2614 (ParseObject_t21 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
 void ParseObject_add_PropertyChanged_m2615 (ParseObject_t21 * __this, PropertyChangedEventHandler_t635 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
 void ParseObject_remove_PropertyChanged_m2616 (ParseObject_t21 * __this, PropertyChangedEventHandler_t635 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::<MergeFromObject>b__5(System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>)
 String_t* ParseObject_U3CMergeFromObjectU3Eb__5_m2617 (Object_t * __this/* static, unused */, KeyValuePair_2_t636  ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.ParseObject::<MergeFromObject>b__6(System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>)
 Object_t * ParseObject_U3CMergeFromObjectU3Eb__6_m2618 (Object_t * __this/* static, unused */, KeyValuePair_2_t636  ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<FindUnsavedChildren>b__9(Parse.ParseObject)
 bool ParseObject_U3CFindUnsavedChildrenU3Eb__9_m2619 (Object_t * __this/* static, unused */, ParseObject_t21 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<CollectFetchedObjects>b__b(Parse.ParseObject)
 bool ParseObject_U3CCollectFetchedObjectsU3Eb__b_m2620 (Object_t * __this/* static, unused */, ParseObject_t21 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::<CollectFetchedObjects>b__c(Parse.ParseObject)
 String_t* ParseObject_U3CCollectFetchedObjectsU3Eb__c_m2621 (Object_t * __this/* static, unused */, ParseObject_t21 * ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::<CollectFetchedObjects>b__d(Parse.ParseObject)
 ParseObject_t21 * ParseObject_U3CCollectFetchedObjectsU3Eb__d_m2622 (Object_t * __this/* static, unused */, ParseObject_t21 * ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::<FetchAsyncInternal>b__1b(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 ParseObject_t21 * ParseObject_U3CFetchAsyncInternalU3Eb__1b_m2623 (ParseObject_t21 * __this, Task_1_t556 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<DeepSaveAsync>b__20(Parse.ParseFile)
 bool ParseObject_U3CDeepSaveAsyncU3Eb__20_m2624 (Object_t * __this/* static, unused */, ParseFile_t572 * ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<DeleteAsync>b__7a(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 bool ParseObject_U3CDeleteAsyncU3Eb__7a_m2625 (ParseObject_t21 * __this, Task_1_t556 * ____, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<CanBeSerializedAsValue>b__80(Parse.ParseObject)
 bool ParseObject_U3CCanBeSerializedAsValueU3Eb__80_m2626 (Object_t * __this/* static, unused */, ParseObject_t21 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::.cctor()
 void ParseObject__cctor_m2627 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<.cctor>b__8b()
 bool ParseObject_U3C_cctorU3Eb__8b_m2628 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
