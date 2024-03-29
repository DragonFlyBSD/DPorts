--- src/tbbmalloc/tbbmalloc.cpp.orig	2023-11-17 16:23:05 UTC
+++ src/tbbmalloc/tbbmalloc.cpp
@@ -43,7 +43,7 @@ namespace internal {
 #define MALLOCLIB_NAME "tbbmalloc" DEBUG_SUFFIX ".dll"
 #elif __APPLE__
 #define MALLOCLIB_NAME "libtbbmalloc" DEBUG_SUFFIX ".2.dylib"
-#elif __FreeBSD__ || __NetBSD__ || __OpenBSD__ || __sun || _AIX || __ANDROID__
+#elif __FreeBSD__ || __NetBSD__ || __OpenBSD__ || __sun || _AIX || __ANDROID__ || __DragonFly__
 #define MALLOCLIB_NAME "libtbbmalloc" DEBUG_SUFFIX ".so"
 #elif __unix__
 #define MALLOCLIB_NAME "libtbbmalloc" DEBUG_SUFFIX  __TBB_STRING(.so.2)
