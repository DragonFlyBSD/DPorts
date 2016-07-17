--- src/unix/tty.c.orig	2016-05-16 21:22:19 UTC
+++ src/unix/tty.c
@@ -268,14 +268,14 @@ uv_handle_type uv_guess_handle(uv_file f
       return UV_UDP;
 
   if (type == SOCK_STREAM) {
-#if defined(_AIX)
-    /* on AIX the getsockname call returns an empty sa structure
+#if defined(_AIX) || defined(__DragonFly__)
+    /* on AIX/DragonFly the getsockname call returns an empty sa structure
      * for sockets of type AF_UNIX.  For all other types it will
      * return a properly filled in structure.
      */
     if (len == 0)
       return UV_NAMED_PIPE;
-#endif /* defined(_AIX) */
+#endif /* defined(_AIX) || defined(__DragonFly__) */
 
     if (sa.sa_family == AF_INET || sa.sa_family == AF_INET6)
       return UV_TCP;
