--- src/unix/glw_unix.h.orig
+++ src/unix/glw_unix.h
@@ -18,7 +18,7 @@
  *
  */
 #ifndef __linux__
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #error You shouldnt be including this file on non-unix platforms
 #endif
 #endif
