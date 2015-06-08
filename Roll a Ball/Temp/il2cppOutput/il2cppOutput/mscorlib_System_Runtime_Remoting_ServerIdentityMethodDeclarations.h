#pragma once

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3156;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3427;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3467;

// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
 void ServerIdentity__ctor_m11098 (ServerIdentity_t3156 * __this, String_t* ___objectUri, Context_t3427 * ___context, Type_t * ___objectType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
 Type_t * ServerIdentity_get_ObjectType_m11099 (ServerIdentity_t3156 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
 ObjRef_t3467 * ServerIdentity_CreateObjRef_m11100 (ServerIdentity_t3156 * __this, Type_t * ___requestedType, MethodInfo* method) IL2CPP_METHOD_ATTR;
