--- src/record.h.intermediate	2019-09-05 07:48:37.000000000 +0000
+++ src/record.h
@@ -69,7 +69,7 @@
 #include <netinet/tcp.h>
 
 #ifndef __linux__
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <netinet/in_pcb.h>
 #endif
 #include <netinet/ip_var.h>
