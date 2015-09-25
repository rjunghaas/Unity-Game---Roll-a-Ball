#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1357;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1356;
// System.MarshalByRefObject
struct MarshalByRefObject_t849;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C" void ClientIdentity__ctor_m8124 (ClientIdentity_t1357 * __this, String_t* ___objectUri, ObjRef_t1356 * ___objRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C" MarshalByRefObject_t849 * ClientIdentity_get_ClientProxy_m8125 (ClientIdentity_t1357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C" void ClientIdentity_set_ClientProxy_m8126 (ClientIdentity_t1357 * __this, MarshalByRefObject_t849 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t1356 * ClientIdentity_CreateObjRef_m8127 (ClientIdentity_t1357 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m8128 (ClientIdentity_t1357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
