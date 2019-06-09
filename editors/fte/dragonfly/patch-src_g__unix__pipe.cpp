--- src/g_unix_pipe.cpp.orig	2011-07-07 17:16:12 UTC
+++ src/g_unix_pipe.cpp
@@ -6,6 +6,7 @@
 #include <assert.h>
 #include <fcntl.h>
 #include <signal.h>
+#include <sys/select.h>
 #include <sys/wait.h>
 #include <stdio.h>
 
