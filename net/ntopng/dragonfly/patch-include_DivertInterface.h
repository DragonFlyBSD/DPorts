--- include/DivertInterface.h.orig	2016-06-27 15:12:56.000000000 +0300
+++ include/DivertInterface.h
@@ -19,7 +19,7 @@
  *
  */
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 
 #ifndef _DIVERT_INTEFACE_H_
 #define _DIVERT_INTEFACE_H_
