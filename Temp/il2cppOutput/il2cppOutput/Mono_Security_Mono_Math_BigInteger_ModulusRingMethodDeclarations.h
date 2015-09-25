#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t624;
// Mono.Math.BigInteger
struct BigInteger_t625;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m3095 (ModulusRing_t624 * __this, BigInteger_t625 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m3096 (ModulusRing_t624 * __this, BigInteger_t625 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t625 * ModulusRing_Multiply_m3097 (ModulusRing_t624 * __this, BigInteger_t625 * ___a, BigInteger_t625 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t625 * ModulusRing_Difference_m3098 (ModulusRing_t624 * __this, BigInteger_t625 * ___a, BigInteger_t625 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t625 * ModulusRing_Pow_m3099 (ModulusRing_t624 * __this, BigInteger_t625 * ___a, BigInteger_t625 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t625 * ModulusRing_Pow_m3100 (ModulusRing_t624 * __this, uint32_t ___b, BigInteger_t625 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
