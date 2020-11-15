--- tests/common/UnitTestpp/config.h.orig	2020-04-25 00:44:16 UTC
+++ tests/common/UnitTestpp/config.h
@@ -50,7 +50,7 @@
 #endif
 
 #if defined(unix) || defined(__unix__) || defined(__unix) || defined(linux) || defined(__APPLE__) ||                   \
-    defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD__)
+    defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define UNITTEST_POSIX
 #endif
 
