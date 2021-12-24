--- src/tss2-tcti/tcti-pcap-builder.c.orig	2021-05-10 15:40:45 UTC
+++ src/tss2-tcti/tcti-pcap-builder.c
@@ -24,7 +24,7 @@
 #define LOGMODULE tcti
 #include "util/log.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define CLOCK_MONOTONIC_RAW CLOCK_MONOTONIC
 #endif
 
