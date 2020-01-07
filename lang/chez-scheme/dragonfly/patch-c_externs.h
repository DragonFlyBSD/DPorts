--- c/externs.h.orig	2019-03-21 22:05:24 UTC
+++ c/externs.h
@@ -24,6 +24,10 @@
 #include <string.h>
 #include <errno.h>
 
+#ifdef __DragonFly__
+#include <sys/timespec.h>
+#endif
+
 #ifndef WIN32
 #include <unistd.h>
 
