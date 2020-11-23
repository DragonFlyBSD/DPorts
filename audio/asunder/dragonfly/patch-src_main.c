--- src/main.c.orig	2019-08-14 08:11:10 UTC
+++ src/main.c
@@ -20,6 +20,7 @@ Foundation; version 2 of the licence.
 
 #include <sys/types.h>
 #include <sys/stat.h>
+#include <arpa/inet.h>
 #include <fcntl.h>
 #include <sys/ioctl.h>
 #include <unistd.h>
