--- src/xcwcp/receiver.h.orig
+++ src/xcwcp/receiver.h
@@ -21,7 +21,7 @@
 
 #include <QMouseEvent>
 #include <QKeyEvent>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/time.h>
 #endif
 
