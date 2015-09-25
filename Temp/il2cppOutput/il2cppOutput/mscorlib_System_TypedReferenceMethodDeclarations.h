﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.TypedReference
#include "mscorlib_System_TypedReference.h"

// System.Boolean System.TypedReference::Equals(System.Object)
extern "C" bool TypedReference_Equals_m5922 (TypedReference_t1011 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TypedReference::GetHashCode()
extern "C" int32_t TypedReference_GetHashCode_m5923 (TypedReference_t1011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
