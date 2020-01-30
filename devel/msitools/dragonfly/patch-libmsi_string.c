--- libmsi/string.c.intermediate	2020-01-27 16:16:38.000000000 +0000
+++ libmsi/string.c
@@ -22,7 +22,7 @@
 
 #include <stdarg.h>
 #include <assert.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/endian.h>
 #else
 #  include <endian.h>
