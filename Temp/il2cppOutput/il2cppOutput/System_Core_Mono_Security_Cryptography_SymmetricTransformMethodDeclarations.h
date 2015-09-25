﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.SymmetricTransform
struct SymmetricTransform_t599;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t600;
// System.Byte[]
struct ByteU5BU5D_t601;
// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
extern "C" void SymmetricTransform__ctor_m3031 (SymmetricTransform_t599 * __this, SymmetricAlgorithm_t600 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t601* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::System.IDisposable.Dispose()
extern "C" void SymmetricTransform_System_IDisposable_Dispose_m3032 (SymmetricTransform_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Finalize()
extern "C" void SymmetricTransform_Finalize_m3033 (SymmetricTransform_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean)
extern "C" void SymmetricTransform_Dispose_m3034 (SymmetricTransform_t599 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_CanReuseTransform()
extern "C" bool SymmetricTransform_get_CanReuseTransform_m3035 (SymmetricTransform_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_Transform_m3036 (SymmetricTransform_t599 * __this, ByteU5BU5D_t601* ___input, ByteU5BU5D_t601* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CBC(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_CBC_m3037 (SymmetricTransform_t599 * __this, ByteU5BU5D_t601* ___input, ByteU5BU5D_t601* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CFB(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_CFB_m3038 (SymmetricTransform_t599 * __this, ByteU5BU5D_t601* ___input, ByteU5BU5D_t601* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::OFB(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_OFB_m3039 (SymmetricTransform_t599 * __this, ByteU5BU5D_t601* ___input, ByteU5BU5D_t601* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CTS(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_CTS_m3040 (SymmetricTransform_t599 * __this, ByteU5BU5D_t601* ___input, ByteU5BU5D_t601* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CheckInput(System.Byte[],System.Int32,System.Int32)
extern "C" void SymmetricTransform_CheckInput_m3041 (SymmetricTransform_t599 * __this, ByteU5BU5D_t601* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t SymmetricTransform_TransformBlock_m3042 (SymmetricTransform_t599 * __this, ByteU5BU5D_t601* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t601* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_KeepLastBlock()
extern "C" bool SymmetricTransform_get_KeepLastBlock_m3043 (SymmetricTransform_t599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t SymmetricTransform_InternalTransformBlock_m3044 (SymmetricTransform_t599 * __this, ByteU5BU5D_t601* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t601* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Random(System.Byte[],System.Int32,System.Int32)
extern "C" void SymmetricTransform_Random_m3045 (SymmetricTransform_t599 * __this, ByteU5BU5D_t601* ___buffer, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ThrowBadPaddingException(System.Security.Cryptography.PaddingMode,System.Int32,System.Int32)
extern "C" void SymmetricTransform_ThrowBadPaddingException_m3046 (SymmetricTransform_t599 * __this, int32_t ___padding, int32_t ___length, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t601* SymmetricTransform_FinalEncrypt_m3047 (SymmetricTransform_t599 * __this, ByteU5BU5D_t601* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalDecrypt(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t601* SymmetricTransform_FinalDecrypt_m3048 (SymmetricTransform_t599 * __this, ByteU5BU5D_t601* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t601* SymmetricTransform_TransformFinalBlock_m3049 (SymmetricTransform_t599 * __this, ByteU5BU5D_t601* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
