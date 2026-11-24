--- widget/look-cool.c.orig
+++ widget/look-cool.c
@@ -11,7 +11,7 @@
 #include <my_string.h>
 #include <stdlib.h>
 #include <stdarg.h>
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/sysmacros.h>
 #endif
 
