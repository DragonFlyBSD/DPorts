--- hotspot/src/share/vm/utilities/macros.hpp.orig	2012-08-10 18:28:55.000000000 +0200
+++ hotspot/src/share/vm/utilities/macros.hpp	2012-12-28 11:42:17.581456000 +0100
@@ -161,7 +161,8 @@
 #define NOT_WINDOWS(code) code
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || \
+    defined(__APPLE__) || defined(__DragonFly__)
 #define BSD_ONLY(code) code
 #define NOT_BSD(code)
 #else
