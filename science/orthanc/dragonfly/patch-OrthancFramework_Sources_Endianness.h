--- OrthancFramework/Sources/Endianness.h.orig	2022-10-29 18:11:24.650580000 +0200
+++ OrthancFramework/Sources/Endianness.h	2022-10-29 18:11:44.680140000 +0200
@@ -84,9 +84,10 @@
  ** FREEBSD ARCHITECTURES
  ********************************************************************/
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #  define ORTHANC_HAS_BUILTIN_BYTE_SWAP 1
 #  include <arpa/inet.h>
+#  include <endian.h>
 #endif
 
 
