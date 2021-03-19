--- ircd/engine_select.c.orig	2019-03-17 18:20:37 UTC
+++ ircd/engine_select.c
@@ -23,7 +23,7 @@
 #include "config.h"
 
 /* On BSD, define FD_SETSIZE to what we want before including sys/types.h */
-#if  defined(__FreeBSD__) || defined(__NetBSD__) || defined(__bsdi__)
+#if  defined(__FreeBSD__) || defined(__NetBSD__) || defined(__bsdi__) || defined(__DragonFly__)
 # if !defined(FD_SETSIZE)
 #  define FD_SETSIZE ((MAXCONNECTIONS)+4)
 # endif
