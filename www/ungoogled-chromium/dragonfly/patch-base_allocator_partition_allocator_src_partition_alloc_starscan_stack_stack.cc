diff --git base/allocator/partition_allocator/src/partition_alloc/starscan/stack/stack.cc base/allocator/partition_allocator/src/partition_alloc/starscan/stack/stack.cc
index f0b1f1b0554..070d356cd28 100644
--- base/allocator/partition_allocator/src/partition_alloc/starscan/stack/stack.cc
+++ base/allocator/partition_allocator/src/partition_alloc/starscan/stack/stack.cc
@@ -63,7 +63,7 @@ void* GetStackTop() {
   return reinterpret_cast<uint8_t*>(ss.ss_sp);
 }
 
-#elif defined(OS_FREEBSD)
+#elif defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
 
 void* GetStackTop() {
    pthread_attr_t attr;
