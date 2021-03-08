--- src/html.c.orig	2020-11-07 16:19:44 UTC
+++ src/html.c
@@ -14,7 +14,7 @@ extern int gettimeofday(struct timeval *
 
 // OSX has no pthread_tryjoin_np, so we can't do our
 // asynchronous timers under OSX, which is really no great loss.
-#if defined(__APPLE__) || defined(__ANDROID__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__ANDROID__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define pthread_tryjoin_np pthread_join
 #endif
 
