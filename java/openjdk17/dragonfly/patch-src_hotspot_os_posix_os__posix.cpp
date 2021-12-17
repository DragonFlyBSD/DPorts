--- src/hotspot/os/posix/os_posix.cpp.orig	2021-09-14 03:59:48 UTC
+++ src/hotspot/os/posix/os_posix.cpp
@@ -285,7 +285,7 @@ static int util_posix_fallocate(int fd,
     return ftruncate(fd, len);
   }
   return -1;
-#elif defined(__OpenBSD__)
+#elif defined(__OpenBSD__) || defined(__DragonFly__) /* XXX posix_fallocate() */
   struct stat s;
   if (fstat(fd, &s) == -1)
     return -1;
