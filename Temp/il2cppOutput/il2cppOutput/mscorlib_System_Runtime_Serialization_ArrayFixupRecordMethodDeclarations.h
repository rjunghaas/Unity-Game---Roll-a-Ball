#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t1399;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1397;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1391;

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C" void ArrayFixupRecord__ctor_m8333 (ArrayFixupRecord_t1399 * __this, ObjectRecord_t1397 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t1397 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void ArrayFixupRecord_FixupImpl_m8334 (ArrayFixupRecord_t1399 * __this, ObjectManager_t1391 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
