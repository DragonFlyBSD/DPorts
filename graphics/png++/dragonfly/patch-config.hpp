--- config.hpp.orig	2019-07-20 06:07:07 UTC
+++ config.hpp
@@ -49,7 +49,7 @@
 #include <machine/endian.h>
 #include <sys/_endian.h>
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <machine/endian.h>
 #include <sys/endian.h>
