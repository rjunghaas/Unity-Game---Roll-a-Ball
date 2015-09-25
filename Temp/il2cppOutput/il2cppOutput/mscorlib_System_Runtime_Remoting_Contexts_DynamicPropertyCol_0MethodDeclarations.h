﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t1297;
// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t1301;
// System.String
struct String_t;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t1319;

// System.Void System.Runtime.Remoting.Contexts.DynamicPropertyCollection::.ctor()
extern "C" void DynamicPropertyCollection__ctor_m7892 (DynamicPropertyCollection_t1297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::get_HasProperties()
extern "C" bool DynamicPropertyCollection_get_HasProperties_m7893 (DynamicPropertyCollection_t1297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty)
extern "C" bool DynamicPropertyCollection_RegisterDynamicProperty_m7894 (DynamicPropertyCollection_t1297 * __this, Object_t * ___prop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.DynamicPropertyCollection::UnregisterDynamicProperty(System.String)
extern "C" bool DynamicPropertyCollection_UnregisterDynamicProperty_m7895 (DynamicPropertyCollection_t1297 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.DynamicPropertyCollection::NotifyMessage(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
extern "C" void DynamicPropertyCollection_NotifyMessage_m7896 (DynamicPropertyCollection_t1297 * __this, bool ___start, Object_t * ___msg, bool ___client_site, bool ___async, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Contexts.DynamicPropertyCollection::FindProperty(System.String)
extern "C" int32_t DynamicPropertyCollection_FindProperty_m7897 (DynamicPropertyCollection_t1297 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
