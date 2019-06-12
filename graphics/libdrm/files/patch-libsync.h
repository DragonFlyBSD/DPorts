--- libsync.h.orig	2019-04-19 15:52:29 UTC
+++ libsync.h
@@ -35,6 +35,9 @@
 #include <sys/ioctl.h>
 #include <sys/poll.h>
 #include <unistd.h>
+#ifndef ETIME
+#define ETIME ETIMEDOUT
+#endif
 
 #if defined(__cplusplus)
 extern "C" {
