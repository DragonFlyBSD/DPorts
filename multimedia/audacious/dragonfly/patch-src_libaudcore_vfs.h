--- src/libaudcore/vfs.h.orig	2015-05-30 22:27:01 UTC
+++ src/libaudcore/vfs.h
@@ -66,6 +66,8 @@ constexpr VFSSeekType to_vfs_seek_type (
 
 #endif // WANT_VFS_STDIO_COMPAT
 
+#undef feof
+
 class VFSImpl
 {
 public:
