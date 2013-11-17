--- hotspot/src/share/vm/utilities/macros.hpp.orig	2013-11-14 23:36:45.483844000 +0000
+++ hotspot/src/share/vm/utilities/macros.hpp
@@ -161,7 +161,8 @@
 #define NOT_WINDOWS(code) code
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || \
+    defined(__APPLE__) || defined(__DragonFly__)
 #define BSD_ONLY(code) code
 #define NOT_BSD(code)
 #else
@@ -177,7 +178,8 @@
 #define NOT_WIN64(code) code
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) \
+ || defined(__APPLE__) || defined(__DragonFly__)
 #define BSD_ONLY(code) code
 #define NOT_BSD(code)
 #else
