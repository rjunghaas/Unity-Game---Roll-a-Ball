#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t710;
// System.AsyncCallback
struct AsyncCallback_t152;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t601;
// System.IO.Stream
struct Stream_t712;
// System.Exception
struct Exception_t295;
// System.Threading.WaitHandle
struct WaitHandle_t763;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3634 (ReceiveRecordAsyncResult_t710 * __this, AsyncCallback_t152 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t601* ___initialBuffer, Stream_t712 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t712 * ReceiveRecordAsyncResult_get_Record_m3635 (ReceiveRecordAsyncResult_t710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t601* ReceiveRecordAsyncResult_get_ResultingBuffer_m3636 (ReceiveRecordAsyncResult_t710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t601* ReceiveRecordAsyncResult_get_InitialBuffer_m3637 (ReceiveRecordAsyncResult_t710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3638 (ReceiveRecordAsyncResult_t710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t295 * ReceiveRecordAsyncResult_get_AsyncException_m3639 (ReceiveRecordAsyncResult_t710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3640 (ReceiveRecordAsyncResult_t710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t763 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3641 (ReceiveRecordAsyncResult_t710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3642 (ReceiveRecordAsyncResult_t710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3643 (ReceiveRecordAsyncResult_t710 * __this, Exception_t295 * ___ex, ByteU5BU5D_t601* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3644 (ReceiveRecordAsyncResult_t710 * __this, Exception_t295 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3645 (ReceiveRecordAsyncResult_t710 * __this, ByteU5BU5D_t601* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
