--- src/zm_comms.h.orig	2021-06-22 18:35:13 UTC
+++ src/zm_comms.h
@@ -29,6 +29,7 @@
 #include <sys/un.h>
 #include <unistd.h>
 #include <vector>
+#include <cstring> // for strerror()
 
 #if defined(BSD)
 #include <sys/socket.h>
