--- xbmc/network/DNSNameCache.cpp.orig	Sat Mar  1 15:41:49 2025
+++ xbmc/network/DNSNameCache.cpp	Sat Mar  1 15:42:04 2025
@@ -24,7 +24,7 @@
 #include <netdb.h>
 #include <netinet/in.h>
 
-#if defined(TARGET_FREEBSD)
+#if defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 #include <sys/socket.h>
 #endif
 
