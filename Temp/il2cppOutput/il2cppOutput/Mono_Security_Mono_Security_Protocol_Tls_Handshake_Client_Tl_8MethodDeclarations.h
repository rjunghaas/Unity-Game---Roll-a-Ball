﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
struct TlsServerHelloDone_t747;
// Mono.Security.Protocol.Tls.Context
struct Context_t688;
// System.Byte[]
struct ByteU5BU5D_t601;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerHelloDone__ctor_m3935 (TlsServerHelloDone_t747 * __this, Context_t688 * ___context, ByteU5BU5D_t601* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
extern "C" void TlsServerHelloDone_ProcessAsSsl3_m3936 (TlsServerHelloDone_t747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
extern "C" void TlsServerHelloDone_ProcessAsTls1_m3937 (TlsServerHelloDone_t747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
