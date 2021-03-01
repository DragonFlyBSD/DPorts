--- src/unix/getmode.cc.orig	2020-03-30 12:54:20 UTC
+++ src/unix/getmode.cc
@@ -2,7 +2,7 @@
 #include "utils.h"
 
 #if (defined(__APPLE__) && defined(__MACH__)) || defined(__OpenBSD__) ||       \
-    defined(__FreeBSD__) || defined(__NetBSD__)
+    defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #include <string.h> /* for strmode */
 #include <unistd.h> /* for getmode / setmode */
 #else
