--- restinio/sendfile_defs_posix.hpp.orig	2026-09-03 05:39:12 UTC
+++ restinio/sendfile_defs_posix.hpp
@@ -19,7 +19,7 @@
 namespace restinio
 {
 
-#if defined( __FreeBSD__ )
+#if defined( __FreeBSD__ ) || defined( __DragonFly__ )
 	#define RESTINIO_FREEBSD_TARGET
 #elif defined(__APPLE__) && defined( __MACH__ )
 	#define RESTINIO_MACOS_TARGET
