--- src/libc_override_gcc_and_weak.h.orig	2021-02-15 00:12:51 UTC
+++ src/libc_override_gcc_and_weak.h
@@ -231,7 +231,7 @@ extern "C" {
   size_t malloc_usable_size(const void* p) __THROW
          ALIAS(tc_malloc_size);
 #else
-  size_t malloc_usable_size(void* p) __THROW      ALIAS(tc_malloc_size);
+  size_t malloc_usable_size(const void* p) __THROW      ALIAS(tc_malloc_size);
 #endif
 }   // extern "C"
 
