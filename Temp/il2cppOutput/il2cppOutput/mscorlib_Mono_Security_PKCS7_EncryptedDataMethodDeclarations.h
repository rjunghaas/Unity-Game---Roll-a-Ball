﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1077;
// Mono.Security.ASN1
struct ASN1_t1065;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1076;
// System.Byte[]
struct ByteU5BU5D_t601;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m6371 (EncryptedData_t1077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m6372 (EncryptedData_t1077 * __this, ASN1_t1065 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t1076 * EncryptedData_get_EncryptionAlgorithm_m6373 (EncryptedData_t1077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t601* EncryptedData_get_EncryptedContent_m6374 (EncryptedData_t1077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
