--- a/libsi/headers.h
+++ b/libsi/headers.h
@@ -17,7 +17,11 @@
 #ifndef LIBSI_HEADERS_H
 #define LIBSI_HEADERS_H
 
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+#include <sys/endian.h>
+#else
 #include <endian.h>
+#endif
 
 namespace SI {
 
