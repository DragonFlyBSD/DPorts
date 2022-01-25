--- src/tbb/allocator.cpp.orig	2021-10-04 09:50:18 UTC
+++ src/tbb/allocator.cpp
@@ -101,7 +101,7 @@ static const dynamic_link_descriptor Mal
 #define MALLOCLIB_NAME "tbbmalloc" DEBUG_SUFFIX ".dll"
 #elif __APPLE__
 #define MALLOCLIB_NAME "libtbbmalloc" DEBUG_SUFFIX ".dylib"
-#elif __FreeBSD__ || __NetBSD__ || __OpenBSD__ || __sun || _AIX || __ANDROID__
+#elif __FreeBSD__ || __NetBSD__ || __OpenBSD__ || __sun || _AIX || __ANDROID__ || __DragonFly__
 #define MALLOCLIB_NAME "libtbbmalloc" DEBUG_SUFFIX ".so"
 #elif __unix__  // Note that order of these #elif's is important!
 #define MALLOCLIB_NAME "libtbbmalloc" DEBUG_SUFFIX ".so.2"
