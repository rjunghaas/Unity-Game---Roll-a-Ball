#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t1136;
// System.Text.DecoderFallback
struct DecoderFallback_t1480;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1481;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m8854 (Decoder_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m8855 (Decoder_t1136 * __this, DecoderFallback_t1480 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1481 * Decoder_get_FallbackBuffer_m8856 (Decoder_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
