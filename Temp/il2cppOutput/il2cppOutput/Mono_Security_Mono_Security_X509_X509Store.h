﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t656;
// System.Collections.ArrayList
struct ArrayList_t632;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.X509Store
struct  X509Store_t668  : public Object_t
{
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t656 * ____certificates_1;
	// System.Collections.ArrayList Mono.Security.X509.X509Store::_crls
	ArrayList_t632 * ____crls_2;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_3;
};
