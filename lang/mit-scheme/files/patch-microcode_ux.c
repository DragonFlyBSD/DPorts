
$FreeBSD: lang/mit-scheme/files/patch-microcode_ux.c 310285 2013-01-12 16:58:37Z olgeni $

--- microcode/ux.c.orig
+++ microcode/ux.c
@@ -785,9 +785,7 @@
                          unsigned long min_result,
                          unsigned long max_result)
 {
-  void * addr = (mmap_heap_malloc_try (min_result, request, true));
-  if (addr == 0)
-    addr = (mmap_heap_malloc_try (min_result, request, false));
+  void * addr = (mmap_heap_malloc_try (min_result, request, false));
   return addr;
 }
 
