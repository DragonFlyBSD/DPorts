--- src/interface.c.orig
+++ src/interface.c
@@ -1453,7 +1453,7 @@
 };
 
 // SIGPWR does not exist on FreeBSD or Apple, while it is a synonym for SIGINFO on Linux
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__APPLE__)
 #define SIGPWR SIGINFO
 #endif
 
