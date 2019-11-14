--- jam.h.orig	2004-06-23 17:45:36 UTC
+++ jam.h
@@ -227,7 +227,9 @@
 # define OSMINOR "OS=CYGWIN"
 # define OS_CYGWIN
 # endif
-# ifdef __FreeBSD__
+# if defined __FreeBSD__ || defined __DragonFly__
+# include <sys/wait.h>
+# include <unistd.h>
 # define OSMINOR "OS=FREEBSD"
 # define OS_FREEBSD
 # endif
