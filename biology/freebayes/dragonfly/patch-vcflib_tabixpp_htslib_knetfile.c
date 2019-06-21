--- vcflib/tabixpp/htslib/knetfile.c.orig	2016-04-22 08:45:12 UTC
+++ vcflib/tabixpp/htslib/knetfile.c
@@ -42,6 +42,7 @@
 #ifndef _WIN32
 #include <netdb.h>
 #include <arpa/inet.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #endif
 
