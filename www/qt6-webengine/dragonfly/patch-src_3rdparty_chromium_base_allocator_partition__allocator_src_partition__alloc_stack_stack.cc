--- src/3rdparty/chromium/base/allocator/partition_allocator/src/partition_alloc/stack/stack.cc.intermediate	2026-09-17 07:06:56 UTC
+++ src/3rdparty/chromium/base/allocator/partition_allocator/src/partition_alloc/stack/stack.cc
@@ -68,7 +68,7 @@ void* GetStackTop() {
   return reinterpret_cast<uint8_t*>(ss.ss_sp);
 }
 
-#elif PA_BUILDFLAG(IS_FREEBSD)
+#elif PA_BUILDFLAG(IS_FREEBSD) || PA_BUILDFLAG(IS_DRAGONFLY)
 
 void* GetStackTop() {
    pthread_attr_t attr;
