--- platform/posix/random.c.orig	2020-12-15 21:48:46 UTC
+++ platform/posix/random.c
@@ -15,7 +15,7 @@ static _Thread_local struct chacha_ctx s
 
 /* just lifted from the getrandom manpage, on others
  * (osx, fbsd, openbsd) we assume that we have this one */
-#ifdef __LINUX
+#if defined(__LINUX) || defined(__DragonFly__)
 
 /* normally defined in unistd.h, but that one also pulls in
  * getentropy of its own, though not always available..., */
