--- nasl/nasl_raw.h.orig	2021-02-01 15:26:51 UTC
+++ nasl/nasl_raw.h
@@ -43,7 +43,7 @@
 #include <netinet/tcp.h>
 #include <netinet/udp.h>
 #include <sys/param.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #include <netinet/ip.h>
 #endif
