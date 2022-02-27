--- test/common/utils_dynamic_libs.h.orig	2021-10-04 09:50:18 UTC
+++ test/common/utils_dynamic_libs.h
@@ -50,7 +50,7 @@ namespace utils {
 #if __APPLE__
 #define EXT ".dylib"
 // Android SDK build system does not support .so file name versioning
-#elif __FreeBSD__ || __NetBSD__ || __sun || _AIX || __ANDROID__
+#elif __FreeBSD__ || __NetBSD__ || __sun || _AIX || __ANDROID__ || __DragonFly__
 #define EXT ".so"
 #elif __unix__  // Order of these elif's matters!
 #define EXT __TBB_STRING(.so.2)
