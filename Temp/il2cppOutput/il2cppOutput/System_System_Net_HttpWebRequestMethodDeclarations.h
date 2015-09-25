#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t707;
// System.Uri
struct Uri_t791;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t559;
// System.Net.ServicePoint
struct ServicePoint_t792;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m4205 (HttpWebRequest_t707 * __this, Uri_t791 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m4206 (HttpWebRequest_t707 * __this, SerializationInfo_t559 * ___serializationInfo, StreamingContext_t560  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m4207 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m4208 (HttpWebRequest_t707 * __this, SerializationInfo_t559 * ___serializationInfo, StreamingContext_t560  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t791 * HttpWebRequest_get_Address_m4055 (HttpWebRequest_t707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t792 * HttpWebRequest_get_ServicePoint_m4059 (HttpWebRequest_t707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t792 * HttpWebRequest_GetServicePoint_m4209 (HttpWebRequest_t707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m4210 (HttpWebRequest_t707 * __this, SerializationInfo_t559 * ___serializationInfo, StreamingContext_t560  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
