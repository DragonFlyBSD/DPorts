--- src/vsearch.h.orig	2019-05-10 14:55:49 UTC
+++ src/vsearch.h
@@ -150,6 +150,16 @@
 #include <byteswap.h>
 #include <sys/resource.h>
 
+#elif __DragonFly__
+
+#define PROG_OS "dragonfly"
+#include <sys/sysinfo.h>
+#include <sys/resource.h>
+#include <sys/endian.h>
+#define bswap_16(x) bswap16(x)
+#define bswap_32(x) bswap32(x)
+#define bswap_64(x) bswap64(x)
+
 #elif __FreeBSD__
 
 #define PROG_OS "freebsd"
