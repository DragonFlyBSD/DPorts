--- libxputty/xputty/header/xfilepicker.h.orig
+++ libxputty/xputty/header/xfilepicker.h
@@ -43,7 +43,7 @@
 #ifndef XFILEPICKER_H_
 #define XFILEPICKER_H_
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #ifndef _OS_UNIX_
 #define _OS_UNIX_ 1
 #endif
