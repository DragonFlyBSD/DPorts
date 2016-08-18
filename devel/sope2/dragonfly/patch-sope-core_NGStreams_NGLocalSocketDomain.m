--- sope-core/NGStreams/NGLocalSocketDomain.m.orig	2016-07-06 14:34:57.000000000 +0300
+++ sope-core/NGStreams/NGLocalSocketDomain.m
@@ -25,7 +25,7 @@
 #include "NGLocalSocketAddress.h"
 #include "NGSocket.h"
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/types.h>
 #  include <sys/socket.h>
 #else
