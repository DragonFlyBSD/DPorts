--- screen.c.intermediate	2019-03-20 18:11:54 UTC
+++ screen.c
@@ -13,7 +13,11 @@
 
 #if TERMIO
 # ifdef BSD4_4
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include <sys/termios.h>
+#else
+#include <termios.h>
+#endif
 # else
 #include <termio.h>
 # endif
