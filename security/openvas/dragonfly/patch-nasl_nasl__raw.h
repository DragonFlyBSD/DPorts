--- nasl/nasl_raw.h.orig
+++ nasl/nasl_raw.h
@@ -31,7 +31,7 @@
 #include <netinet/tcp.h>
 #include <netinet/udp.h>
 #include <sys/param.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #include <netinet/ip.h>
 #endif
