diff --git base/allocator/partition_allocator/starscan/stack/stack.cc base/allocator/partition_allocator/starscan/stack/stack.cc
index bd8cfa63b1e..f853e29135c 100644
--- src/3rdparty/chromium/base/allocator/partition_allocator/starscan/stack/stack.cc
+++ src/3rdparty/chromium/base/allocator/partition_allocator/starscan/stack/stack.cc
@@ -62,7 +62,7 @@ void* GetStackTop() {
   return reinterpret_cast<uint8_t*>(ss.ss_sp);
 }
 
-#elif defined(OS_FREEBSD)
+#elif defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
 
 void* GetStackTop() {
    pthread_attr_t attr;
