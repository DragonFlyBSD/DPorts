--- src/missing.cc.orig	2020-10-08 12:30:11 UTC
+++ src/missing.cc
@@ -113,7 +113,7 @@ getrlimit_NOFILE_max(void)
 
 #endif /* HAVE_SYS_RESOURCE_H */
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
         /* Use sysconf() function provided by the system if it is known to be
          * async-signal safe.
          */
