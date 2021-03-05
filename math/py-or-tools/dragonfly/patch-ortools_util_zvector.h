--- ortools/util/zvector.h.intermediate	2020-09-24 22:30:12 UTC
+++ ortools/util/zvector.h
@@ -17,7 +17,7 @@
 #if defined(__APPLE__) && defined(__GNUC__)
 #include <machine/endian.h>
 #elif !defined(_MSC_VER)
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #else
 #include <endian.h>
