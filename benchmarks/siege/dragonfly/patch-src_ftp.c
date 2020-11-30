--- src/ftp.c.orig	2020-07-10 17:56:33 UTC
+++ src/ftp.c
@@ -22,6 +22,7 @@
  */
 #include <setup.h>
 #include <stdio.h>
+#include <stdint.h>
 #include <util.h>
 #include <ftp.h>
 #include <load.h>
@@ -146,7 +147,7 @@ ftp_stor(CONN *C, URL U)
 {
   size_t  len;
   char    *file;
-  size_t  id = pthread_self();
+  size_t  id = (uintptr_t)pthread_self();
   int     num = 2;
   char    **parts;
  
