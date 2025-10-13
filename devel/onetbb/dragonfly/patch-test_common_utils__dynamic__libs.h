--- test/common/utils_dynamic_libs.h.orig	Thu Oct 31 17:23:11 2024
+++ test/common/utils_dynamic_libs.h	Mon Oct
@@ -58,7 +58,7 @@ namespace utils {
 #define EXT ".dylib"
 #endif
 // Android SDK build system does not support .so file name versioning
-#elif __FreeBSD__ || __NetBSD__ || __OpenBSD__ || __sun || _AIX || __ANDROID__
+#elif __FreeBSD__ || __NetBSD__ || __OpenBSD__ || __sun || _AIX || __ANDROID__ || __DragonFly__
 #define EXT ".so"
 #elif __unix__  // Order of these elif's matters!
 #define EXT __TBB_STRING(.so.2)
