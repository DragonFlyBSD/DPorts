diff --git base/allocator/partition_allocator/starscan/stack/stack.cc base/allocator/partition_allocator/starscan/stack/stack.cc
index 959f3f0cd67..07187b12fb4 100644
--- base/allocator/partition_allocator/starscan/stack/stack.cc
+++ base/allocator/partition_allocator/starscan/stack/stack.cc
@@ -63,7 +63,7 @@ void* GetStackTop() {
   return reinterpret_cast<uint8_t*>(ss.ss_sp);
 }
 
-#elif defined(OS_FREEBSD)
+#elif defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
 
 void* GetStackTop() {
    pthread_attr_t attr;
