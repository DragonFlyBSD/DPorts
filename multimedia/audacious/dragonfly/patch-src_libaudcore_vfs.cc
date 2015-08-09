--- src/libaudcore/vfs.cc.orig	2015-05-30 22:27:01 UTC
+++ src/libaudcore/vfs.cc
@@ -35,6 +35,7 @@
 #include "plugins-internal.h"
 #include "runtime.h"
 #include "vfs_local.h"
+#undef feof
 
 static TransportPlugin * lookup_transport (const char * scheme)
 {
