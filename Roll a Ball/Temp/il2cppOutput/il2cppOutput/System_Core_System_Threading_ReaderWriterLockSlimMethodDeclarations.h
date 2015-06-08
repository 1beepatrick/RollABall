#pragma once

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t618;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t2365;
// System.Threading.ReaderWriterLockSlim/LockDetails
struct LockDetails_t2364;

// System.Void System.Threading.ReaderWriterLockSlim::.ctor()
 void ReaderWriterLockSlim__ctor_m3755 (ReaderWriterLockSlim_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::.cctor()
 void ReaderWriterLockSlim__cctor_m5636 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterReadLock()
 void ReaderWriterLockSlim_EnterReadLock_m3645 (ReaderWriterLockSlim_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterReadLock(System.Int32)
 bool ReaderWriterLockSlim_TryEnterReadLock_m5637 (ReaderWriterLockSlim_t618 * __this, int32_t ___millisecondsTimeout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitReadLock()
 void ReaderWriterLockSlim_ExitReadLock_m3647 (ReaderWriterLockSlim_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterWriteLock()
 void ReaderWriterLockSlim_EnterWriteLock_m3652 (ReaderWriterLockSlim_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterWriteLock(System.Int32)
 bool ReaderWriterLockSlim_TryEnterWriteLock_m5638 (ReaderWriterLockSlim_t618 * __this, int32_t ___millisecondsTimeout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitWriteLock()
 void ReaderWriterLockSlim_ExitWriteLock_m3654 (ReaderWriterLockSlim_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterUpgradeableReadLock()
 void ReaderWriterLockSlim_EnterUpgradeableReadLock_m3648 (ReaderWriterLockSlim_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterUpgradeableReadLock(System.Int32)
 bool ReaderWriterLockSlim_TryEnterUpgradeableReadLock_m5639 (ReaderWriterLockSlim_t618 * __this, int32_t ___millisecondsTimeout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitUpgradeableReadLock()
 void ReaderWriterLockSlim_ExitUpgradeableReadLock_m3655 (ReaderWriterLockSlim_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::Dispose()
 void ReaderWriterLockSlim_Dispose_m5640 (ReaderWriterLockSlim_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsWriteLockHeld()
 bool ReaderWriterLockSlim_get_IsWriteLockHeld_m4076 (ReaderWriterLockSlim_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsUpgradeableReadLockHeld()
 bool ReaderWriterLockSlim_get_IsUpgradeableReadLockHeld_m5641 (ReaderWriterLockSlim_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveUpgradeCount()
 int32_t ReaderWriterLockSlim_get_RecursiveUpgradeCount_m5642 (ReaderWriterLockSlim_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveWriteCount()
 int32_t ReaderWriterLockSlim_get_RecursiveWriteCount_m5643 (ReaderWriterLockSlim_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLock()
 void ReaderWriterLockSlim_EnterMyLock_m5644 (ReaderWriterLockSlim_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLockSpin()
 void ReaderWriterLockSlim_EnterMyLockSpin_m5645 (ReaderWriterLockSlim_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitMyLock()
 void ReaderWriterLockSlim_ExitMyLock_m5646 (ReaderWriterLockSlim_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaiters()
 void ReaderWriterLockSlim_ExitAndWakeUpAppropriateWaiters_m5647 (ReaderWriterLockSlim_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::LazyCreateEvent(System.Threading.EventWaitHandle&,System.Boolean)
 void ReaderWriterLockSlim_LazyCreateEvent_m5648 (ReaderWriterLockSlim_t618 * __this, EventWaitHandle_t2365 ** ___waitEvent, bool ___makeAutoResetEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::WaitOnEvent(System.Threading.EventWaitHandle,System.UInt32&,System.Int32)
 bool ReaderWriterLockSlim_WaitOnEvent_m5649 (ReaderWriterLockSlim_t618 * __this, EventWaitHandle_t2365 * ___waitEvent, uint32_t* ___numWaiters, int32_t ___millisecondsTimeout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ReaderWriterLockSlim/LockDetails System.Threading.ReaderWriterLockSlim::GetReadLockDetails(System.Int32,System.Boolean)
 LockDetails_t2364 * ReaderWriterLockSlim_GetReadLockDetails_m5650 (ReaderWriterLockSlim_t618 * __this, int32_t ___threadId, bool ___create, MethodInfo* method) IL2CPP_METHOD_ATTR;
