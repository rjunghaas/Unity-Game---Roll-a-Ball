﻿#pragma once
#include <stdint.h>
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1020;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Threading.WaitHandle
struct  WaitHandle_t763  : public MarshalByRefObject_t849
{
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t1020 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;
};
struct WaitHandle_t763_StaticFields{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	IntPtr_t ___InvalidHandle_3;
};
