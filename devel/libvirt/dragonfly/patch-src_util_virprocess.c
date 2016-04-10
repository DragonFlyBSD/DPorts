--- src/util/virprocess.c.orig	2016-02-24 01:55:16 UTC
+++ src/util/virprocess.c
@@ -987,7 +987,7 @@ int virProcessGetStartTime(pid_t pid,
     VIR_FREE(buf);
     return ret;
 }
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) && ! defined __DragonFly__
 int virProcessGetStartTime(pid_t pid,
                            unsigned long long *timestamp)
 {
