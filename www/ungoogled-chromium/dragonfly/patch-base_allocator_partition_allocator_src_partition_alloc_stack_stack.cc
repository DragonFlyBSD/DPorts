diff --git base/allocator/partition_allocator/src/partition_alloc/stack/stack.cc base/allocator/partition_allocator/src/partition_alloc/stack/stack.cc
index 7d3b5baebfc5..66f1af0dbf88 100644
--- base/allocator/partition_allocator/src/partition_alloc/stack/stack.cc
+++ base/allocator/partition_allocator/src/partition_alloc/stack/stack.cc
@@ -63,7 +63,7 @@ void* GetStackTop() {
   return reinterpret_cast<uint8_t*>(ss.ss_sp);
 }
 
-#elif PA_BUILDFLAG(IS_FREEBSD)
+#elif PA_BUILDFLAG(IS_FREEBSD) || PA_BUILDFLAG(IS_DRAGONFLY)
 
 void* GetStackTop() {
    pthread_attr_t attr;
