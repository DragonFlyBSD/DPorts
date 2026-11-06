--- libk3bdevice/k3bdevice.h.orig	2026-11-05 10:31:45 UTC
+++ libk3bdevice/k3bdevice.h
@@ -15,7 +15,7 @@
 #include <qglobal.h>
 #include <QVarLengthArray>
 
-#if defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #undef Q_OS_LINUX
 #define Q_OS_FREEBSD 1
 #endif
