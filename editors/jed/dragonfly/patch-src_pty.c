--- src/pty.c.orig
+++ src/pty.c
@@ -21,7 +21,7 @@
 #include <errno.h>
 
 #ifdef HAVE_GRANTPT
-# if !defined (__linux__) && !defined(__CYGWIN__) && !defined(__FreeBSD__) && !defined(_AIX)
+# if !defined (__linux__) && !defined(__CYGWIN__) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(_AIX)
 #  define USE_SYSV_PTYS
 #  include <sys/types.h>
 #  include <stropts.h>
