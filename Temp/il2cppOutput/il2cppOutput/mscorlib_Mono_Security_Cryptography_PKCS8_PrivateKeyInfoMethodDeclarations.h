#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1058;
// System.Byte[]
struct ByteU5BU5D_t601;
// System.Security.Cryptography.RSA
struct RSA_t652;
// System.Security.Cryptography.DSA
struct DSA_t659;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m6211 (PrivateKeyInfo_t1058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m6212 (PrivateKeyInfo_t1058 * __this, ByteU5BU5D_t601* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t601* PrivateKeyInfo_get_PrivateKey_m6213 (PrivateKeyInfo_t1058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m6214 (PrivateKeyInfo_t1058 * __this, ByteU5BU5D_t601* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t601* PrivateKeyInfo_RemoveLeadingZero_m6215 (Object_t * __this /* static, unused */, ByteU5BU5D_t601* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t601* PrivateKeyInfo_Normalize_m6216 (Object_t * __this /* static, unused */, ByteU5BU5D_t601* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t652 * PrivateKeyInfo_DecodeRSA_m6217 (Object_t * __this /* static, unused */, ByteU5BU5D_t601* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t659 * PrivateKeyInfo_DecodeDSA_m6218 (Object_t * __this /* static, unused */, ByteU5BU5D_t601* ___privateKey, DSAParameters_t762  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
