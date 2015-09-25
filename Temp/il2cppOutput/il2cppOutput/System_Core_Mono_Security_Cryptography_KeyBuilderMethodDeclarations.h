﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t598;
// System.Byte[]
struct ByteU5BU5D_t601;

// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::get_Rng()
extern "C" RandomNumberGenerator_t598 * KeyBuilder_get_Rng_m3028 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
extern "C" ByteU5BU5D_t601* KeyBuilder_Key_m3029 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::IV(System.Int32)
extern "C" ByteU5BU5D_t601* KeyBuilder_IV_m3030 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
