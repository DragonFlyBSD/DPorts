--- src/3rdparty/chromium/base/allocator/allocator_shim_default_dispatch_to_glibc.cc.intermediate	2018-05-26 13:48:33.000000000 +0000
+++ src/3rdparty/chromium/base/allocator/allocator_shim_default_dispatch_to_glibc.cc
@@ -5,7 +5,9 @@
 #include "base/allocator/allocator_shim.h"
 #include <stdio.h>
 #include <stdlib.h>
+#ifndef __DragonFly__
 #include <malloc_np.h>
+#endif
 
 // This translation unit defines a default dispatch for the allocator shim which
 // routes allocations to libc functions.
@@ -15,6 +17,9 @@ extern "C" {
 void* __malloc(size_t size);
 void* __calloc(size_t n, size_t size);
 void* __realloc(void* address, size_t size);
+#ifdef __DragonFly__
+int __posix_memalign(void **ptr, size_t alignment, size_t size);
+#endif
 void* __memalign(size_t alignment, size_t size) {
   void *ret;
   if (__posix_memalign(&ret, alignment, size) != 0) {
@@ -54,7 +59,11 @@ void GlibcFree(const AllocatorDispatch*,
 size_t GlibcGetSizeEstimate(const AllocatorDispatch*, void* address) {
   // TODO(siggi, primiano): malloc_usable_size may need redirection in the
   //     presence of interposing shims that divert allocations.
+#ifdef __DragonFly__
+  return 0;
+#else
   return malloc_usable_size(address);
+#endif
 }
 
 }  // namespace
