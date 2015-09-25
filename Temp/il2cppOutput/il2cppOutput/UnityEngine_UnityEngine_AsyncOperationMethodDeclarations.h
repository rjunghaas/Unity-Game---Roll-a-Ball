#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t368;
struct AsyncOperation_t368_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m2371 (AsyncOperation_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2372 (AsyncOperation_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m2373 (AsyncOperation_t368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AsyncOperation_t368_marshal(const AsyncOperation_t368& unmarshaled, AsyncOperation_t368_marshaled& marshaled);
extern "C" void AsyncOperation_t368_marshal_back(const AsyncOperation_t368_marshaled& marshaled, AsyncOperation_t368& unmarshaled);
extern "C" void AsyncOperation_t368_marshal_cleanup(AsyncOperation_t368_marshaled& marshaled);
