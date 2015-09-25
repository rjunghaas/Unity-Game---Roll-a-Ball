#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t833;
// System.Net.WebRequest
struct WebRequest_t796;
// System.Uri
struct Uri_t791;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m4194 (FileWebRequestCreator_t833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t796 * FileWebRequestCreator_Create_m4195 (FileWebRequestCreator_t833 * __this, Uri_t791 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
