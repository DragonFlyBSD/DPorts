--- src/io.c.orig
+++ src/io.c
@@ -23,7 +23,7 @@
 
 #include "log.h"
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 int
 io_signal(int fd, int sig)
 {
