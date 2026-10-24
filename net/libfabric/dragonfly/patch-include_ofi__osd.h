--- include/ofi_osd.h.orig	2022-07-26 00:00:00 UTC
+++ include/ofi_osd.h
@@ -59,7 +59,7 @@
 #ifdef __APPLE__
 #include <osx/osd.h>
 #include <unix/osd.h>
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 #include <freebsd/osd.h>
 #include <unix/osd.h>
 #elif defined _WIN32
