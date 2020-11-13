--- daemon/pty_open.c.orig	2020-10-02 13:16:55 UTC
+++ daemon/pty_open.c
@@ -82,7 +82,7 @@
  * force openpty(3) on BSD
  * https://bugzilla.gnome.org/show_bug.cgi?id=722001
  */
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #undef HAVE_UNIX98_PTY
 #endif
 
