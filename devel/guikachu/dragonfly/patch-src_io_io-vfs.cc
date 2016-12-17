--- src/io/io-vfs.cc.orig	2006-10-07 01:35:44.000000000 +0300
+++ src/io/io-vfs.cc
@@ -27,6 +27,7 @@
 #include <libgnomevfsmm/handle.h>
 #include <libgnomevfsmm/uri.h>
 #include <libgnomevfsmm/utils.h>
+#include <cstring> // for memcpy
 
 using namespace Guikachu;
 
