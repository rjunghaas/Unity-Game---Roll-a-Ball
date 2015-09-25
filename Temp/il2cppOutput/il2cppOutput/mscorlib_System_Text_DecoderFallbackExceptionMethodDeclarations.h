﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderFallbackException
struct DecoderFallbackException_t1484;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t601;

// System.Void System.Text.DecoderFallbackException::.ctor()
extern "C" void DecoderFallbackException__ctor_m8872 (DecoderFallbackException_t1484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderFallbackException::.ctor(System.String)
extern "C" void DecoderFallbackException__ctor_m8873 (DecoderFallbackException_t1484 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderFallbackException::.ctor(System.String,System.Byte[],System.Int32)
extern "C" void DecoderFallbackException__ctor_m8874 (DecoderFallbackException_t1484 * __this, String_t* ___message, ByteU5BU5D_t601* ___bytesUnknown, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
