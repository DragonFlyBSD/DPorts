--- src/ioslaves/file/sharefd_p.h.orig	2018-04-07 19:36:33 UTC
+++ src/ioslaves/file/sharefd_p.h
@@ -20,6 +20,7 @@
 
 #include <sys/un.h>
 #include <iostream>
+#include <cstring>
 #include <unistd.h>
 #include <sys/socket.h>
 #include <string.h>
