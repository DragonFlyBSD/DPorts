--- src/basic/macro.h.orig	2021-01-06 13:56:51 UTC
+++ src/basic/macro.h
@@ -70,7 +70,7 @@
 #define ALIGN4(l) (((l) + 3) & ~3)
 #define ALIGN8(l) (((l) + 7) & ~7)
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #undef ALIGN
 #endif
 
