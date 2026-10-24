--- tls/s2n_ktls_io.c.orig	2026-06-24 17:11:17 UTC
+++ tls/s2n_ktls_io.c
@@ -16,7 +16,7 @@
 /* kTLS I/O is not supported on Windows. */
 #ifndef _WIN32
 
-    #if defined(__FreeBSD__) || defined(__APPLE__)
+    #if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
         /* https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/sys_socket.h.html
      * The POSIX standard does not define the CMSG_LEN and CMSG_SPACE macros. FreeBSD
      * and APPLE check and disable these macros if the _POSIX_C_SOURCE flag is set.
