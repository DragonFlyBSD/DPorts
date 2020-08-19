--- tasks/task_autodetect_blissbox.c.orig	2020-03-20 16:34:45 UTC
+++ tasks/task_autodetect_blissbox.c
@@ -27,7 +27,7 @@
 #include "tasks_internal.h"
 
 #ifdef HAVE_LIBUSB
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libusb.h>
 #else
 #include <libusb-1.0/libusb.h>
