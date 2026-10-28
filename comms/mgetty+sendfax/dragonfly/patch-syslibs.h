--- syslibs.h.orig	2026-10-26 06:38:11 UTC
+++ syslibs.h
@@ -7,7 +7,7 @@
 #include <stdlib.h>
 #endif
 
-#if !defined( __bsdi__ ) && !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(NeXT) && !defined(__MACH__)
+#if !defined( __bsdi__ ) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__OpenBSD__) && !defined(NeXT) && !defined(__MACH__)
 #include <malloc.h>
 #endif
 
