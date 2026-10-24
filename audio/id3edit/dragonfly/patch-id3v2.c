--- id3v2.c.orig	2024-12-01 15:46:24 UTC
+++ id3v2.c
@@ -11,6 +11,8 @@
 #include <crc32.h>
 #ifdef __APPLE__
 #include "macos_endian.h"
+#else
+#include <endian.h>
 #endif
 
 bool OPT_PrintHeader = false;
