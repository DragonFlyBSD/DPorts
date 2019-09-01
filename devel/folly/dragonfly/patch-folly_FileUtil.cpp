--- folly/FileUtil.cpp.orig	2019-06-17 05:36:48 UTC
+++ folly/FileUtil.cpp
@@ -76,7 +76,7 @@ int dup2NoInt(int oldfd, int newfd) {
 int fdatasyncNoInt(int fd) {
 #if defined(__APPLE__)
   return int(wrapNoInt(fcntl, fd, F_FULLFSYNC));
-#elif defined(__FreeBSD__) || defined(_MSC_VER)
+#elif defined(__FreeBSD__) || defined(_MSC_VER) || defined(__DragonFly__)
   return int(wrapNoInt(fsync, fd));
 #else
   return int(wrapNoInt(fdatasync, fd));
