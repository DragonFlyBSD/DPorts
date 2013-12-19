$FreeBSD: java/openjdk7/files/patch-src-os-bsd-vm-os_bsd.cpp 335863 2013-12-08 04:11:54Z glewis $

--- hotspot/src/os/bsd/vm/os_bsd.cpp.orig	2010-02-21 20:07:54.000000000 -0800
+++ hotspot/src/os/bsd/vm/os_bsd.cpp	2010-02-21 20:08:41.000000000 -0800
@@ -358,7 +358,7 @@
  *        7: The default directories, normally /lib and /usr/lib.
  */
 #ifndef DEFAULT_LIBPATH
-#define DEFAULT_LIBPATH "/lib:/usr/lib"
+#define DEFAULT_LIBPATH "/lib:/usr/lib:%%LOCALBASE%%/lib"
 #endif
 
 #define EXTENSIONS_DIR  "/lib/ext"
