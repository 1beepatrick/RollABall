#pragma once

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t3470;
// System.MarshalByRefObject
struct MarshalByRefObject_t2801;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3467;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
 void ClientIdentity__ctor_m11049 (ClientIdentity_t3470 * __this, String_t* ___objectUri, ObjRef_t3467 * ___objRef, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
 MarshalByRefObject_t2801 * ClientIdentity_get_ClientProxy_m11050 (ClientIdentity_t3470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
 void ClientIdentity_set_ClientProxy_m11051 (ClientIdentity_t3470 * __this, MarshalByRefObject_t2801 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
 ObjRef_t3467 * ClientIdentity_CreateObjRef_m11052 (ClientIdentity_t3470 * __this, Type_t * ___requestedType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
 String_t* ClientIdentity_get_TargetUri_m11053 (ClientIdentity_t3470 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
