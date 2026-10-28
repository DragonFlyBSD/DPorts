--- src/tcti-tabrmd.c.orig
+++ src/tcti-tabrmd.c
@@ -123,7 +123,7 @@
     }
 }
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #ifndef POLLRDHUP
 #define POLLRDHUP 0x0
 #endif
