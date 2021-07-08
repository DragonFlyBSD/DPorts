--- src/missing.cc.orig	2021-07-08 11:17:51.355975000 +0200
+++ src/missing.cc	2021-07-08 11:18:10.725535000 +0200
@@ -119,7 +119,7 @@
 
 #endif /* HAVE_SYS_RESOURCE_H */
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
         /* Use sysconf() function provided by the system if it is known to be
          * async-signal safe.
          */
