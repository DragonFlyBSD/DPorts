--- src/usyslog.c.intermediate	2019-05-15 15:05:07.000000000 +0000
+++ src/usyslog.c
@@ -23,7 +23,7 @@
 
 #if __APPLE__
 #include <malloc/malloc.h>
-#elif !defined(__FreeBSD__)
+#elif !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 
