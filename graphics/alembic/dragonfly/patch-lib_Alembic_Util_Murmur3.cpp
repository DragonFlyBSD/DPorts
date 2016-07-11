--- lib/Alembic/Util/Murmur3.cpp.intermediate	2016-07-09 17:42:17 UTC
+++ lib/Alembic/Util/Murmur3.cpp
@@ -41,7 +41,7 @@
 
 #ifdef __APPLE__
 #include <machine/endian.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #elif !defined(_MSC_VER)
 #include <endian.h>
