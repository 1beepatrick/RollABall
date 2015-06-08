#pragma once
// Parse.ParseInstallation
struct ParseInstallation_t637;
// System.Object
struct Object_t;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t639;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t575;
// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>
struct PartialAccessor_1_t476;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t470;
// Parse.ParseObject
#include "Parse_Unity_Parse_ParseObject.h"
// Parse.ParseInstallation
struct ParseInstallation_t637  : public ParseObject_t21
{
};
struct ParseInstallation_t637_StaticFields{
	// System.Boolean Parse.ParseInstallation::currentInstallationMatchesDisk
	bool ___currentInstallationMatchesDisk_30;
	// Parse.ParseInstallation Parse.ParseInstallation::currentInstallation
	ParseInstallation_t637 * ___currentInstallation_31;
	// System.Object Parse.ParseInstallation::currentInstallationMutex
	Object_t * ___currentInstallationMutex_32;
	// System.Collections.Generic.HashSet`1<System.String> Parse.ParseInstallation::readOnlyKeys
	HashSet_1_t639 * ___readOnlyKeys_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Parse.ParseInstallation::tzNameMap
	Dictionary_2_t575 * ___tzNameMap_34;
	// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task> Parse.ParseInstallation::CS$<>9__CachedAnonymousMethodDelegate90
	PartialAccessor_1_t476 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate90_35;
	// System.Action`1<System.Threading.Tasks.Task> Parse.ParseInstallation::CS$<>9__CachedAnonymousMethodDelegate91
	Action_1_t470 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate91_36;
};
