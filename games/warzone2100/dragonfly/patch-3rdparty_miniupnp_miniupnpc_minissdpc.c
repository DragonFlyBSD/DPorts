--- 3rdparty/miniupnp/miniupnpc/minissdpc.c.orig	2020-07-19 16:57:21 UTC
+++ 3rdparty/miniupnp/miniupnpc/minissdpc.c
@@ -10,7 +10,7 @@
 #include <string.h>
 #include <stdlib.h>
 #include <sys/types.h>
-#if defined (__NetBSD__)
+#if defined (__NetBSD__) || defined(__DragonFly__)
 #include <net/if.h>
 #endif
 #if defined(_WIN32) || defined(__amigaos__) || defined(__amigaos4__)
