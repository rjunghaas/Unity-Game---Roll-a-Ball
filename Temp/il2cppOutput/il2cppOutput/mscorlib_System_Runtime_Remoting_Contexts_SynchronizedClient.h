﻿#pragma once
#include <stdint.h>
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1299;
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t1304;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Contexts.SynchronizedClientContextSink
struct  SynchronizedClientContextSink_t1307  : public Object_t
{
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::_next
	Object_t * ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::_att
	SynchronizationAttribute_t1304 * ____att_1;
};
