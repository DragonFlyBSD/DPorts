--- compat.c.orig
+++ compat.c
@@ -1,6 +1,6 @@
 
 #if !defined(__FreeBSD__) && !defined(__OpenBSD__) && \
-	!defined(__NetBSD__) && !defined(__linux__)
+	!defined(__NetBSD__) && !defined(__linux__) && !defined(__DragonFly__)
 
 #include <string.h>
 
