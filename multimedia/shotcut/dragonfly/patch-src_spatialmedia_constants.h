--- src/spatialmedia/constants.h.intermediate	2020-11-14 11:52:57.000000000 +0000
+++ src/spatialmedia/constants.h
@@ -35,7 +35,7 @@
 #  define htole64(x) qtoLittleEndian(x)
 #  define be64toh(x) qFromBigEndian(x)
 #  define le64toh(x) qFromLittleEndian(x)
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/endian.h>
 #else
 #  include <endian.h>
