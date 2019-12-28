--- libradius/porting.h.orig	2005-04-11 21:42:47 UTC
+++ libradius/porting.h
@@ -1,7 +1,7 @@
 #ifndef __PORTING_H__
 #define __PORTING_H__
 
-#if !defined(__FreeBSD__) && !defined(__linux__)
+#if !defined(__FreeBSD__) && !defined(__linux__) && !defined(__DragonFly__)
 typedef unsigned int u_int32_t;
 #endif
 
