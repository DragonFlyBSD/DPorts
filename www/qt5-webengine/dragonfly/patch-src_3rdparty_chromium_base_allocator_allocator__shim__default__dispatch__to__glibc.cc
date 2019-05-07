--- src/3rdparty/chromium/base/allocator/allocator_shim_default_dispatch_to_glibc.cc.intermediate	2019-05-06 09:08:07.000000000 +0000
+++ src/3rdparty/chromium/base/allocator/allocator_shim_default_dispatch_to_glibc.cc
@@ -6,7 +6,9 @@
 
 #include <stdio.h>
 #include <stdlib.h>
+#ifndef __DragonFly__
 #include <malloc_np.h>
+#endif
 
 // This translation unit defines a default dispatch for the allocator shim which
 // routes allocations to libc functions.
@@ -16,6 +18,9 @@ extern "C" {
 void* __malloc(size_t size);
 void* __calloc(size_t n, size_t size);
 void* __realloc(void* address, size_t size);
+#ifdef __DragonFly__
+int __posix_memalign(void **ptr, size_t alignment, size_t size);
+#endif
 void* __memalign(size_t alignment, size_t size) {
   void *ret;
   if (__posix_memalign(&ret, alignment, size) != 0) {
@@ -66,7 +71,11 @@ size_t GlibcGetSizeEstimate(const Alloca
                             void* context) {
   // TODO(siggi, primiano): malloc_usable_size may need redirection in the
   //     presence of interposing shims that divert allocations.
+#ifdef __DragonFly__
+  return 0; // only for samplers and profilers that track heap usage etc
+#else
   return malloc_usable_size(address);
+#endif
 }
 
 }  // namespace
