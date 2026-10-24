--- huskylib/huskylib/UNIX.h.orig
+++ huskylib/huskylib/UNIX.h
@@ -59,7 +59,8 @@
 #if (defined(__APPLE__) && defined(__MACH__)) || defined(__NetBSD__) || \
     defined(__FreeBSD__) || defined(_AIX) || defined(__SUN__) || \
     defined(__LINUX__) || defined(__osf__) || defined(__hpux) || \
-    defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__QNXNTO__)
+    defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__QNXNTO__) || \
+    defined(__DragonFly__)
     #define mymkdir(a) mkdir((a), S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH)
 #else
     #define mymkdir(a) __mkdir((a), S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH)
