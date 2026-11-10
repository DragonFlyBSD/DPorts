--- storage/innobase/include/detail/ut/large_page_alloc-linux.h.orig	2026-06-30 16:11:51 UTC
+++ storage/innobase/include/detail/ut/large_page_alloc-linux.h
@@ -53,7 +53,7 @@ inline void *large_page_aligned_alloc(size_t n_bytes) 
   // mmap will internally round n_bytes to the multiple of huge-page size if it
   // is not already
   int mmap_flags = MAP_PRIVATE | MAP_ANON;
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
   mmap_flags |= MAP_HUGETLB;
 #endif
   void *ptr = mmap(nullptr, n_bytes, PROT_READ | PROT_WRITE, mmap_flags, -1, 0);
