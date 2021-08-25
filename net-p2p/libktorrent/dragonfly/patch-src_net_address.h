--- src/net/address.h.orig	2021-07-05 18:56:39 UTC
+++ src/net/address.h
@@ -24,6 +24,7 @@
 #include <ktorrent_export.h>
 #include <netinet/in.h>
 #include <util/constants.h>
+#include <sys/socket.h>
 
 namespace net
 {
