--- libs/libmyth/mediamonitor-unix.cpp.orig	2015-06-16 19:03:30.000000000 +0300
+++ libs/libmyth/mediamonitor-unix.cpp
@@ -53,7 +53,7 @@ extern "C" {
 #ifndef MNTTYPE_ISO9660
 #ifdef linux
 #define MNTTYPE_ISO9660 "iso9660"
-#elif defined(__FreeBSD__) || CONFIG_DARWIN || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || CONFIG_DARWIN || defined(__OpenBSD__) || defined(__DragonFly__)
 #define MNTTYPE_ISO9660 "cd9660"
 #endif
 #endif
