#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t159;
struct Coroutine_t159_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2056 (Coroutine_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2057 (Coroutine_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2058 (Coroutine_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t159_marshal(const Coroutine_t159& unmarshaled, Coroutine_t159_marshaled& marshaled);
extern "C" void Coroutine_t159_marshal_back(const Coroutine_t159_marshaled& marshaled, Coroutine_t159& unmarshaled);
extern "C" void Coroutine_t159_marshal_cleanup(Coroutine_t159_marshaled& marshaled);
