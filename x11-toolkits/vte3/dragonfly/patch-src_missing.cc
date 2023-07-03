--- src/missing.cc.orig	2023-05-05 23:13:58.937014000 +0200
+++ src/missing.cc	2023-05-05 23:14:12.257232000 +0200
@@ -124,7 +124,7 @@ getrlimit_NOFILE_max(void)
 
 #endif /* HAVE_SYS_RESOURCE_H */
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
         /* Use sysconf() function provided by the system if it is known to be
          * async-signal safe.
          */
