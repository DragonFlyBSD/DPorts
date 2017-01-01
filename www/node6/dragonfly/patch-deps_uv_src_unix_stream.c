--- deps/uv/src/unix/stream.c.orig	2016-05-17 19:52:55 UTC
+++ deps/uv/src/unix/stream.c
@@ -962,8 +962,8 @@ uv_handle_type uv__handle_type(int fd) {
     return UV_UNKNOWN_HANDLE;
 
   if (type == SOCK_STREAM) {
-#if defined(_AIX)
-    /* on AIX the getsockname call returns an empty sa structure
+#if defined(_AIX) || defined(__DragonFly__)
+    /* on AIX/DragonFly the getsockname call returns an empty sa structure
      * for sockets of type AF_UNIX.  For all other types it will
      * return a properly filled in structure.
      */
