--- interface/utils.h.intemediate	2013-01-17 17:41:22.474322000 +0100
+++ interface/utils.h	2013-01-17 17:41:37.584343000 +0100
@@ -1,6 +1,6 @@
 #ifdef LINUX
 #include <endian.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <machine/endian.h>
 #endif
 
