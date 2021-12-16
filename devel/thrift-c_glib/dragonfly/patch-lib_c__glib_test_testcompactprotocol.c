--- lib/c_glib/test/testcompactprotocol.c.orig	2021-02-04 23:07:31 UTC
+++ lib/c_glib/test/testcompactprotocol.c
@@ -20,7 +20,7 @@
 /* Disable string-function optimizations when glibc is used, as these produce
    compiler warnings about string length when a string function is used inside
    a call to g_assert () */
-#if !defined(__APPLE__) && !defined(__FreeBSD__) && \
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__) && \
     !defined(__OpenBSD__) && !defined(__NetBSD__)
 #include <features.h>
 #endif
