--- src/hotspot/os/posix/os_posix.cpp.orig	2019-10-16 18:31:09 UTC
+++ src/hotspot/os/posix/os_posix.cpp
@@ -249,7 +249,7 @@ static int util_posix_fallocate(int fd,
     return ftruncate(fd, len);
   }
   return -1;
-#elif defined(__OpenBSD__)
+#elif defined(__OpenBSD__) || defined(__DragonFly__) /* XXX posix_fallocate() */
   struct stat s;
   if (fstat(fd, &s) == -1)
     return -1;
