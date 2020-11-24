--- mux6676.c.intermediate	2020-11-24 06:50:37.000000000 +0000
+++ mux6676.c
@@ -28,6 +28,8 @@
 #include <unistd.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
+#include <arpa/inet.h>
+#include <string.h>
 #endif
 /*
 **  -----------------
