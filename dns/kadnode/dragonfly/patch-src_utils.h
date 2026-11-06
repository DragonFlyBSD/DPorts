--- src/utils.h.orig	2026-09-01 21:20:00 UTC
+++ src/utils.h
@@ -5,6 +5,7 @@
 #include <sys/time.h>
 #include <stdbool.h>
 #include <netinet/in.h>
+#include <sys/socket.h>
 
 // Number of elements in an array
 #define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))
