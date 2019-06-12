--- src/sockwrap/sockwrap.h.orig	2011-12-04 14:24:51 UTC
+++ src/sockwrap/sockwrap.h
@@ -24,7 +24,7 @@
 #include "core/config.h"
 #include "core/callback.h"
 
-#if defined(__FreeBSD__) || defined(__FreeBSD) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__FreeBSD) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/socket.h>
 #endif
