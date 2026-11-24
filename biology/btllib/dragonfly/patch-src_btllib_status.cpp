--- src/btllib/status.cpp.orig
+++ src/btllib/status.cpp
@@ -84,7 +84,7 @@
   char buf[buflen];
 // POSIX and GNU implementation of strerror_r differ, even in function signature
 // and so we need to check which one is used
-#if __APPLE__ || __FreeBSD__  ||                                         \
+#if __APPLE__ || __FreeBSD__ || __DragonFly__ ||                                       \
   ((_POSIX_C_SOURCE >= 200112L || _XOPEN_SOURCE >= 600) && !_GNU_SOURCE)
   strerror_r(errno, buf, buflen);
   return buf;
