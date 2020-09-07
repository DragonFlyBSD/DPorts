--- Utilities/cmlibuv/src/unix/core.c.orig	2020-08-20 12:20:32 UTC
+++ Utilities/cmlibuv/src/unix/core.c
@@ -73,8 +73,8 @@ extern char** environ;
 # include <sys/filio.h>
 # include <sys/wait.h>
 # include <sys/param.h>
-# include <sys/cpuset.h>
 # if defined(__FreeBSD__)
+# include <sys/cpuset.h>
 #  define uv__accept4 accept4
 # endif
 # if defined(__NetBSD__)
