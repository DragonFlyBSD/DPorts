--- config.h.orig	2018-09-25 15:27:43 UTC
+++ config.h
@@ -5,7 +5,7 @@
 
 #ifdef __APPLE__
 #  define __DARWIN_C_SOURCE
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__SYMBIAN32__) || defined(__QNX__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__SYMBIAN32__) || defined(__QNX__) || defined(__DragonFly__)
 #  define _XOPEN_SOURCE 700
 #  define __BSD_VISIBLE 1
 #  define HAVE_NETINET_IN_H
