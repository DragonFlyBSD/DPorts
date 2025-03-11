diff --git v8/src/base/platform/condition-variable.cc v8/src/base/platform/condition-variable.cc
index 7c5d8f7f27a4..e90711a07a9b 100644
--- v8/src/base/platform/condition-variable.cc
+++ v8/src/base/platform/condition-variable.cc
@@ -19,7 +19,7 @@ namespace base {
 #if V8_OS_POSIX
 
 ConditionVariable::ConditionVariable() {
-#if (V8_OS_FREEBSD || V8_OS_NETBSD || V8_OS_OPENBSD || \
+#if (V8_OS_FREEBSD || V8_OS_NETBSD || V8_OS_OPENBSD || V8_OS_DRAGONFLYBSD || \
      (V8_OS_LINUX && V8_LIBC_GLIBC))
   // On Free/Net/OpenBSD and Linux with glibc we can change the time
   // source for pthread_cond_timedwait() to use the monotonic clock.
@@ -95,7 +95,7 @@ bool ConditionVariable::WaitFor(Mutex* mutex, const TimeDelta& rel_time) {
   result = pthread_cond_timedwait_relative_np(
       &native_handle_, &mutex->native_handle(), &ts);
 #else
-#if (V8_OS_FREEBSD || V8_OS_NETBSD || V8_OS_OPENBSD || \
+#if (V8_OS_FREEBSD || V8_OS_NETBSD || V8_OS_OPENBSD || V8_OS_DRAGONFLYBSD || \
      (V8_OS_LINUX && V8_LIBC_GLIBC))
   // On Free/Net/OpenBSD and Linux with glibc we can change the time
   // source for pthread_cond_timedwait() to use the monotonic clock.
