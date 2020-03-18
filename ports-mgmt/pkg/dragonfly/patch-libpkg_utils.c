--- libpkg/utils.c.orig	2020-03-18 16:04:00.640256000 -0700
+++ libpkg/utils.c	2020-03-18 16:04:15.180910000 -0700
@@ -823,11 +823,5 @@
 int
 get_socketpair(int *pipe)
 {
-	int st = SOCK_DGRAM;
-
-#ifdef HAVE_DECL_SOCK_SEQPACKET
-	st = SOCK_SEQPACKET;
-#endif
-
-	return (socketpair(AF_UNIX, st, 0, pipe));
+	return (socketpair(AF_UNIX, SOCK_STREAM, 0, pipe));
 }
