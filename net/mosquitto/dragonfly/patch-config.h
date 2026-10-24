--- config.h.orig	2026-10-01 00:00:00 UTC
+++ config.h
@@ -6,7 +6,7 @@
 
 #ifdef __APPLE__
 #  define __DARWIN_C_SOURCE
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #  define HAVE_NETINET_IN_H
 #elif defined(__QNX__)
 #  define _XOPEN_SOURCE 600
