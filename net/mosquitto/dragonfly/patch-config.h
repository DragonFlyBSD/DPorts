--- config.h.orig	2021-06-11 10:05:57.793647000 +0200
+++ config.h	2021-06-11 10:05:49.883825000 +0200
@@ -6,7 +6,7 @@
 
 #ifdef __APPLE__
 #  define __DARWIN_C_SOURCE
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__SYMBIAN32__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__SYMBIAN32__) || defined(__DragonFly__)
 #  define _XOPEN_SOURCE 700
 #  define __BSD_VISIBLE 1
 #  define HAVE_NETINET_IN_H
