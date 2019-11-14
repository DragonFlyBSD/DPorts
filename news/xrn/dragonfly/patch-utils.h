--- utils.h.orig	2008-11-28 19:48:24 UTC
+++ utils.h
@@ -50,6 +50,8 @@
 #include <sys/stat.h>
 #include <sys/wait.h>
 #include <string.h>
+#include <stdlib.h>
+#include <unistd.h>
 
 #if defined(sun) || defined(__hpux) || defined(aiws) || \
 	defined(_POSIX_SOURCE) || defined(SVR4) || defined(__uxp__)
