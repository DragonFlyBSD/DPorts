--- base/threading/platform_thread_posix.cc.orig	2023-03-10 11:01:21 UTC
+++ base/threading/platform_thread_posix.cc
@@ -77,7 +77,7 @@ void* ThreadFunc(void* params) {
     if (!thread_params->joinable)
       base::DisallowSingleton();
 
-#if !BUILDFLAG(IS_NACL)
+#if !BUILDFLAG(IS_NACL) && !BUILDFLAG(IS_BSD)
 #if BUILDFLAG(USE_PARTITION_ALLOC_AS_MALLOC) && BUILDFLAG(USE_STARSCAN)
     partition_alloc::internal::PCScan::NotifyThreadCreated(
         partition_alloc::internal::GetStackPointer());
@@ -379,6 +379,9 @@ void SetCurrentThreadTypeImpl(ThreadType thread_type,
                               MessagePumpType pump_type_hint) {
 #if BUILDFLAG(IS_NACL)
   NOTIMPLEMENTED();
+// avoid pledge(2) violation
+#elif BUILDFLAG(IS_BSD)
+   NOTIMPLEMENTED();
 #else
   if (internal::SetCurrentThreadTypeForPlatform(thread_type, pump_type_hint))
     return;
