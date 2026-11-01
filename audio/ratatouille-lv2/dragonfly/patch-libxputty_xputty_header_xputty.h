--- libxputty/xputty/header/xputty.h.orig
+++ libxputty/xputty/header/xputty.h
@@ -30,7 +30,7 @@
 #ifndef XPUTTY1_H_
 #define XPUTTY1_H_
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #ifndef _OS_UNIX_
 #define _OS_UNIX_ 1
 #endif
