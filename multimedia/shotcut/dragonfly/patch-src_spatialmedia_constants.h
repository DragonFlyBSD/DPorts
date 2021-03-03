--- src/spatialmedia/constants.h.intermediate	2021-03-03 04:52:44.000000000 +0000
+++ src/spatialmedia/constants.h
@@ -34,9 +34,9 @@
 #  define htole64(x) qtoLittleEndian(x)
 #  define be64toh(x) qFromBigEndian(x)
 #  define le64toh(x) qFromLittleEndian(x)
-#elif !defined(__FreeBSD__)
+#elif !defined(__FreeBSD__) && !defined(__DragonFly__)
 #  include <endian.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/endian.h>
 #endif
 
