--- src/main/listen.c.orig
+++ src/main/listen.c
@@ -59,7 +59,7 @@
 #ifdef WITH_TLS
 #include <netinet/tcp.h>
 
-#  if defined(__APPLE__) || defined(__FreeBSD__) || defined(__illumos__) || defined(__sun__)
+#  if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__illumos__) || defined(__sun__)
 #    if !defined(SOL_TCP) && defined(IPPROTO_TCP)
 #      define SOL_TCP IPPROTO_TCP
 #    endif
