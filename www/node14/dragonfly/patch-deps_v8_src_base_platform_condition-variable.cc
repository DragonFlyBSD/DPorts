--- deps/v8/src/base/platform/condition-variable.cc.orig	2021-02-09 14:11:20 UTC
+++ deps/v8/src/base/platform/condition-variable.cc
@@ -15,7 +15,7 @@ namespace base {
 #if V8_OS_POSIX
 
 ConditionVariable::ConditionVariable() {
-#if (V8_OS_FREEBSD || V8_OS_NETBSD || V8_OS_OPENBSD || \
+#if (V8_OS_FREEBSD || V8_OS_NETBSD || V8_OS_OPENBSD || __DragonFly__ || \
      (V8_OS_LINUX && V8_LIBC_GLIBC))
   // On Free/Net/OpenBSD and Linux with glibc we can change the time
   // source for pthread_cond_timedwait() to use the monotonic clock.
@@ -91,7 +91,7 @@ bool ConditionVariable::WaitFor(Mutex* m
   result = pthread_cond_timedwait_relative_np(
       &native_handle_, &mutex->native_handle(), &ts);
 #else
-#if (V8_OS_FREEBSD || V8_OS_NETBSD || V8_OS_OPENBSD || \
+#if (V8_OS_FREEBSD || V8_OS_NETBSD || V8_OS_OPENBSD || __DragonFly__ || \
      (V8_OS_LINUX && V8_LIBC_GLIBC))
   // On Free/Net/OpenBSD and Linux with glibc we can change the time
   // source for pthread_cond_timedwait() to use the monotonic clock.
