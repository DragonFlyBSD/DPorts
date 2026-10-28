--- src/packet.cpp.orig	2026-10-26 06:34:47 UTC
+++ src/packet.cpp
@@ -28,7 +28,7 @@
 #include <stdio.h>
 #ifdef __APPLE__
 #include <sys/malloc.h>
-#elif __FreeBSD__
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdlib.h>
 #else
 #include <malloc.h>
