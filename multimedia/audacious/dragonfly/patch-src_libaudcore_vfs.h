--- src/libaudcore/vfs.h.orig	2015-11-07 23:03:12 UTC
+++ src/libaudcore/vfs.h
@@ -66,6 +66,9 @@ constexpr VFSSeekType to_vfs_seek_type (
 
 #endif // WANT_VFS_STDIO_COMPAT
 
+#include <stdio.h>
+#undef feof
+
 class VFSImpl
 {
 public:
