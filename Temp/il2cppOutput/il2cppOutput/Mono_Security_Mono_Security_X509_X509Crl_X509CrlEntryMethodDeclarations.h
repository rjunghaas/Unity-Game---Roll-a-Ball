﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t665;
// Mono.Security.ASN1
struct ASN1_t631;
// System.Byte[]
struct ByteU5BU5D_t601;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t660;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C" void X509CrlEntry__ctor_m3376 (X509CrlEntry_t665 * __this, ASN1_t631 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C" ByteU5BU5D_t601* X509CrlEntry_get_SerialNumber_m3377 (X509CrlEntry_t665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C" DateTime_t505  X509CrlEntry_get_RevocationDate_m3378 (X509CrlEntry_t665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C" X509ExtensionCollection_t660 * X509CrlEntry_get_Extensions_m3379 (X509CrlEntry_t665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
