--- lib/Alembic/Util/Murmur3.cpp.orig	2020-09-22 14:21:24.255889000 +0200
+++ lib/Alembic/Util/Murmur3.cpp	2020-09-22 14:21:38.056208000 +0200
@@ -39,7 +39,7 @@
 #include <Alembic/Util/Murmur3.h>
 #include <Alembic/Util/PlainOldDataType.h>
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <machine/endian.h>
 #elif !defined(_MSC_VER)
 #include <endian.h>
