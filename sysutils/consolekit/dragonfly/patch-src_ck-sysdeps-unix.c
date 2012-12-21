--- src/ck-sysdeps-unix.c.intermediate	2012-12-21 16:47:09.278461000 +0100
+++ src/ck-sysdeps-unix.c	2012-12-21 16:48:26.725089000 +0100
@@ -128,7 +128,7 @@
 {
 #ifdef __linux__
         struct vt_stat vts;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
         int vers;
 #endif
         int  kb_ok;
@@ -136,7 +136,7 @@
         errno = 0;
 #ifdef __linux__
         kb_ok = (ioctl (fd, VT_GETSTATE, &vts) == 0);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined (__DragonFly__)
         kb_ok = (ioctl (fd, CONS_GETVERS, &vers) == 0);
 #else
         kb_ok = 1;
