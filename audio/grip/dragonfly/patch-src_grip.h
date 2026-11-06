--- src/grip.h.orig	2022-02-10 11:19:23 UTC
+++ src/grip.h
@@ -47,7 +47,7 @@
 
 #define RRand(range) (random()%(range))
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__GLIBC__) || defined(__NetBSD__) || defined(__osf__)  /* __osf__ ?? */
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__GLIBC__) || defined(__NetBSD__) || defined(__osf__)  /* __osf__ ?? */
 
 #define MAILER "/usr/sbin/sendmail -i -t"
 
