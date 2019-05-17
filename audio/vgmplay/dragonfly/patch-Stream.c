--- Stream.c.intermediate	2019-05-07 08:45:50.000000000 +0000
+++ Stream.c
@@ -16,7 +16,7 @@
 #include <fcntl.h>
 #ifdef __NetBSD__
 #include <sys/audioio.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/soundcard.h>
 #elif defined(__APPLE__) || defined(__OpenBSD__)
 // nothing
