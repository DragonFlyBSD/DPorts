--- output.h.orig	2019-08-24 22:25:32 UTC
+++ output.h
@@ -162,6 +162,12 @@
    "N/A")
 
 
+#ifdef __DragonFly__
+#ifndef IPPROTO_SCTP
+#define IPPROTO_SCTP 132
+#endif
+#endif
+
 void memprint(const char *addr, size_t bytes);
 
 /* Write some information (printf style args) to the given log stream(s).
