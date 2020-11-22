--- spw303v.c.orig	2011-12-22 14:21:03 UTC
+++ spw303v.c
@@ -25,6 +25,7 @@
 #include <time.h>
 #include <unistd.h>
 #include <sys/stat.h>
+#include <arpa/inet.h> /* for ntohl() */
 
 #define IMAGE_LEN 10                   /* Length of Length Field */
 #define ADDRESS_LEN 12                 /* Length of Address field */
