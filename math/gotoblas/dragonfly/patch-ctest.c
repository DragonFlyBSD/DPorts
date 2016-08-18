--- ctest.c.orig	2010-01-28 21:28:24.000000000 +0200
+++ ctest.c
@@ -34,6 +34,10 @@ COMPILER_GNU
 OS_LINUX
 #endif
 
+#if defined(__DragonFly__)
+OS_DRAGONFLY
+#endif
+
 #if defined(__FreeBSD__)
 OS_FreeBSD
 #endif
