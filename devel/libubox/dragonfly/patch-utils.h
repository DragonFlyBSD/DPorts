--- utils.h.intermediate	2019-05-09 19:12:21.000000000 +0000
+++ utils.h
@@ -81,7 +81,7 @@ int clock_gettime(int type, struct times
 #elif defined(__APPLE__)
 #include <machine/endian.h>
 #include <machine/byte_order.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #else
 #include <machine/endian.h>
