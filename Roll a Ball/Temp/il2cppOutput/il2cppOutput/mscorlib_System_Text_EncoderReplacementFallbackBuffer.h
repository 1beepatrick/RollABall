#pragma once
// System.String
struct String_t;
// System.Text.EncoderFallbackBuffer
#include "mscorlib_System_Text_EncoderFallbackBuffer.h"
// System.Text.EncoderReplacementFallbackBuffer
struct EncoderReplacementFallbackBuffer_t3600  : public EncoderFallbackBuffer_t3587
{
	// System.String System.Text.EncoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_0;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.Boolean System.Text.EncoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_2;
};
