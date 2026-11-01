--- libxputty/xputty/xwidget-linux.c.orig
+++ libxputty/xputty/xwidget-linux.c
@@ -19,7 +19,7 @@
  *
  */
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #ifndef _OS_UNIX_
 #define _OS_UNIX_ 1
 #endif
