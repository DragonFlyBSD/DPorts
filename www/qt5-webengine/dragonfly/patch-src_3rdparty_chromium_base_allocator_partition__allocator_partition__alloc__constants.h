--- src/3rdparty/chromium/base/allocator/partition_allocator/partition_alloc_constants.h.orig	2023-11-20 12:43:11 UTC
+++ src/3rdparty/chromium/base/allocator/partition_allocator/partition_alloc_constants.h
@@ -197,7 +197,7 @@ NumPartitionPagesPerSuperPage() {
 // platforms, as Chrome's requirement is C++14 as of 2020.
 #if defined(__STDCPP_DEFAULT_NEW_ALIGNMENT__)
 static constexpr size_t kAlignment =
-    std::max(alignof(std::max_align_t), __STDCPP_DEFAULT_NEW_ALIGNMENT__);
+    std::max<unsigned>(alignof(std::max_align_t), __STDCPP_DEFAULT_NEW_ALIGNMENT__);
 #else
 static constexpr size_t kAlignment = alignof(std::max_align_t);
 #endif
