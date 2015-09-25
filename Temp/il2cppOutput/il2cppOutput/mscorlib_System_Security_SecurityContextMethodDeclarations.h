#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t1467;
// System.Threading.CompressedStack
struct CompressedStack_t1468;

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m8787 (SecurityContext_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m8788 (SecurityContext_t1467 * __this, SecurityContext_t1467 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t1467 * SecurityContext_Capture_m8789 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m8790 (SecurityContext_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t1468 * SecurityContext_get_CompressedStack_m8791 (SecurityContext_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
