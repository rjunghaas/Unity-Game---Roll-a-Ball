﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t563;
// System.Object
struct Object_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t546;
// System.IAsyncResult
struct IAsyncResult_t151;
// System.AsyncCallback
struct AsyncCallback_t152;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UnhandledExceptionEventHandler__ctor_m2942 (UnhandledExceptionEventHandler_t563 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C" void UnhandledExceptionEventHandler_Invoke_m10044 (UnhandledExceptionEventHandler_t563 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t546 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t563(Il2CppObject* delegate, Object_t * ___sender, UnhandledExceptionEventArgs_t546 * ___e);
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * UnhandledExceptionEventHandler_BeginInvoke_m10045 (UnhandledExceptionEventHandler_t563 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t546 * ___e, AsyncCallback_t152 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UnhandledExceptionEventHandler_EndInvoke_m10046 (UnhandledExceptionEventHandler_t563 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
