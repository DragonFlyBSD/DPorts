--- src/3rdparty/chromium/base/allocator/allocator_shim_default_dispatch_to_glibc.cc.orig	2020-04-21 11:07:25 UTC
+++ src/3rdparty/chromium/base/allocator/allocator_shim_default_dispatch_to_glibc.cc
@@ -7,7 +7,9 @@
 #include <dlfcn.h>
 #include <stdio.h>
 #include <stdlib.h>
+#ifndef __DragonFly__
 #include <malloc_np.h>
+#endif
 
 // This translation unit defines a default dispatch for the allocator shim which
 // routes allocations to libc functions.
@@ -17,6 +19,9 @@ extern "C" {
 void* __malloc(size_t size);
 void* __calloc(size_t n, size_t size);
 void* __realloc(void* address, size_t len);
+#ifdef __DragonFly__
+int __posix_memalign(void **ptr, size_t alignment, size_t size);
+#endif
 void* __memalign(size_t alignment, size_t size) {
   void *ret;
   if (__posix_memalign(&ret, alignment, size) != 0) {
