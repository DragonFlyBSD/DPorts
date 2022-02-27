--- pxr/base/arch/assumptions.cpp.intermediate	2022-01-26 05:43:19.000000000 +0000
+++ pxr/base/arch/assumptions.cpp
@@ -53,6 +53,9 @@ Arch_ObtainCacheLineSize()
 #if defined(ARCH_OS_LINUX)
     return sysconf(_SC_LEVEL1_DCACHE_LINESIZE);
 #elif defined(ARCH_OS_FREEBSD)
+#ifndef CACHE_LINE_SIZE
+#define CACHE_LINE_SIZE (1<<6)
+#endif
     return CACHE_LINE_SIZE;
 #elif defined(ARCH_OS_DARWIN)
     size_t cacheLineSize = 0;
