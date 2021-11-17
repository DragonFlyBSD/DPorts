--- OrthancFramework/Sources/Endianness.h.orig	2021-11-14 16:43:16.301315000 +0100
+++ OrthancFramework/Sources/Endianness.h	2021-11-14 16:43:43.210716000 +0100
@@ -83,7 +83,7 @@
  ** FREEBSD ARCHITECTURES
  ********************************************************************/
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #  define ORTHANC_HAS_BUILTIN_BYTE_SWAP 1
 #  include <arpa/inet.h>
 #endif
