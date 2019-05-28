--- tests/common/UnitTestpp/config.h.orig	2016-10-28 19:20:12 UTC
+++ tests/common/UnitTestpp/config.h
@@ -50,7 +50,7 @@
 #endif
 
 #if defined(unix) || defined(__unix__) || defined(__unix) || defined(linux) || \
-    defined(__APPLE__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD__)
+    defined(__APPLE__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
     #define UNITTEST_POSIX
 #endif
 
