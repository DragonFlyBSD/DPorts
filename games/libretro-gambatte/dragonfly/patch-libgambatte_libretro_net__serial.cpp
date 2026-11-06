--- libgambatte/libretro/net_serial.cpp.orig	2026-05-15 13:24:09 UTC
+++ libgambatte/libretro/net_serial.cpp
@@ -12,6 +12,7 @@
 #else
 #include <sys/socket.h>
 #include <sys/ioctl.h>
+#include <sys/select.h>
 #include <netinet/in.h>
 #include <netdb.h>
 #endif
