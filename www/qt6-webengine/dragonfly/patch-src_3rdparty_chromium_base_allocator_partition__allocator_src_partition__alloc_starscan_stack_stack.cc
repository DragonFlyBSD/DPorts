--- src/3rdparty/chromium/base/allocator/partition_allocator/src/partition_alloc/starscan/stack/stack.cc.intermediate	Thu Nov  6 18:44:00 2025
+++ src/3rdparty/chromium/base/allocator/partition_allocator/src/partition_alloc/starscan/stack/stack.cc	Thu Nov
@@ -63,7 +63,7 @@ void* GetStackTop() {
   return reinterpret_cast<uint8_t*>(ss.ss_sp);
 }
 
-#elif defined(OS_FREEBSD)
+#elif defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
 
 void* GetStackTop() {
    pthread_attr_t attr;
