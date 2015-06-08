#pragma once

// System.Runtime.InteropServices.Marshal
struct Marshal_t3411;
// System.Array
struct Array_t;
// System.Byte[]
struct ByteU5BU5D_t433;
// System.Char[]
struct CharU5BU5D_t200;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
 void Marshal__cctor_m10818 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
 void Marshal_copy_from_unmanaged_m10819 (Object_t * __this/* static, unused */, IntPtr_t34 ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
 void Marshal_Copy_m10820 (Object_t * __this/* static, unused */, IntPtr_t34 ___source, ByteU5BU5D_t433* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
 void Marshal_Copy_m10821 (Object_t * __this/* static, unused */, IntPtr_t34 ___source, CharU5BU5D_t200* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
