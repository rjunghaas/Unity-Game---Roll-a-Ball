#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t309;
struct WaitForSeconds_t309_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m1612 (WaitForSeconds_t309 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void WaitForSeconds_t309_marshal(const WaitForSeconds_t309& unmarshaled, WaitForSeconds_t309_marshaled& marshaled);
extern "C" void WaitForSeconds_t309_marshal_back(const WaitForSeconds_t309_marshaled& marshaled, WaitForSeconds_t309& unmarshaled);
extern "C" void WaitForSeconds_t309_marshal_cleanup(WaitForSeconds_t309_marshaled& marshaled);
