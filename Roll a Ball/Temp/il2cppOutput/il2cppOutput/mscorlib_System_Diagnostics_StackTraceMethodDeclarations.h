#pragma once

// System.Diagnostics.StackTrace
struct StackTrace_t2165;
// System.Exception
struct Exception_t35;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t3284;
// System.Diagnostics.StackFrame
struct StackFrame_t2258;
// System.String
struct String_t;

// System.Void System.Diagnostics.StackTrace::.ctor()
 void StackTrace__ctor_m9837 (StackTrace_t2165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
 void StackTrace__ctor_m5394 (StackTrace_t2165 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
 void StackTrace__ctor_m9838 (StackTrace_t2165 * __this, Exception_t35 * ___e, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
 void StackTrace__ctor_m9839 (StackTrace_t2165 * __this, Exception_t35 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean,System.Boolean)
 void StackTrace__ctor_m9840 (StackTrace_t2165 * __this, Exception_t35 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, bool ___returnNativeFrames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
 void StackTrace_init_frames_m9841 (StackTrace_t2165 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
 StackFrameU5BU5D_t3284* StackTrace_get_trace_m9842 (Object_t * __this/* static, unused */, Exception_t35 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackTrace::get_FrameCount()
 int32_t StackTrace_get_FrameCount_m5407 (StackTrace_t2165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32)
 StackFrame_t2258 * StackTrace_GetFrame_m5401 (StackTrace_t2165 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackTrace::ToString()
 String_t* StackTrace_ToString_m9843 (StackTrace_t2165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
