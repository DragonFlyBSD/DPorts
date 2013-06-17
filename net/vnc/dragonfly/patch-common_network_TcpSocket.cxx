--- ../common/network/TcpSocket.cxx.orig	2008-10-16 17:16:20.000000000 +0200
+++ ../common/network/TcpSocket.cxx	2013-01-22 17:24:31.339902000 +0100
@@ -37,6 +37,7 @@
 #include <fcntl.h>
 #endif
 
+#include <stdlib.h>
 #include <network/TcpSocket.h>
 #include <rfb/util.h>
 #include <rfb/LogWriter.h>
