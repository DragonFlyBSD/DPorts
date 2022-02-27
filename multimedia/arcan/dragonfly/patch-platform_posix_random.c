--- platform/posix/random.c.orig	2021-11-18 17:05:27 UTC
+++ platform/posix/random.c
@@ -15,7 +15,7 @@ static _Thread_local struct chacha_ctx s
 
 /* just lifted from the getrandom manpage, on others
  * (osx, fbsd, openbsd) we assume that we have this one */
-#if defined(__LINUX) || defined(__DragonFly__)
+#if defined(__LINUX)
 
 /* normally defined in unistd.h, but that one also pulls in
  * getentropy of its own, though not always available..., */
@@ -40,7 +40,7 @@ failure:
 	errno = EIO;
 	return -1;
 }
-#elif defined(__FreeBSD__) && __FreeBSD__ < 12
+#elif defined(__FreeBSD_kernel) && __FreeBSD__ < 12
 #include <sys/sysctl.h>
 extern int __sysctl(int*, u_int, void*, size_t*, void*, size_t);
 static int getentropy(void* buf, size_t buflen)
@@ -66,7 +66,7 @@ out:
 	return 0;
 }
 
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <unistd.h>
 #else
 #include <sys/random.h>
