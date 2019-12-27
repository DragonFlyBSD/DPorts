--- src/util-fmemopen.c.orig	2019-10-14 11:25:49 UTC
+++ src/util-fmemopen.c
@@ -33,7 +33,7 @@
 #define USE_FMEM_WRAPPER 1
 #endif
 
-#ifdef __OpenBSD__
+#if defined __OpenBSD__ || defined __DragonFly__
 #define USE_FMEM_WRAPPER 1
 #endif
 
