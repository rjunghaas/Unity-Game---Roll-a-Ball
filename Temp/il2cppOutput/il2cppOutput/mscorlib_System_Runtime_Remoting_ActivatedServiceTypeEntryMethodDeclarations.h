﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ActivatedServiceTypeEntry
struct ActivatedServiceTypeEntry_t1354;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ActivatedServiceTypeEntry::.ctor(System.String,System.String)
extern "C" void ActivatedServiceTypeEntry__ctor_m8111 (ActivatedServiceTypeEntry_t1354 * __this, String_t* ___typeName, String_t* ___assemblyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ActivatedServiceTypeEntry::get_ObjectType()
extern "C" Type_t * ActivatedServiceTypeEntry_get_ObjectType_m8112 (ActivatedServiceTypeEntry_t1354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ActivatedServiceTypeEntry::ToString()
extern "C" String_t* ActivatedServiceTypeEntry_ToString_m8113 (ActivatedServiceTypeEntry_t1354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
