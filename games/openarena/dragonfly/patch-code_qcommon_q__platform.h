--- code/qcommon/q_platform.h.intermediate	2013-08-31 15:21:11.572850000 +0000
+++ code/qcommon/q_platform.h
@@ -177,7 +177,8 @@ Foundation, Inc., 51 Franklin St, Fifth
 
 //=================================================================== BSD ===
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) \
+ || defined(__DragonFly__)
 
 #include <sys/types.h>
 #include <machine/endian.h>
@@ -186,7 +187,7 @@ Foundation, Inc., 51 Franklin St, Fifth
   #define __BSD__
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define OS_STRING "freebsd"
 #elif defined(__OpenBSD__)
 #define OS_STRING "openbsd"
