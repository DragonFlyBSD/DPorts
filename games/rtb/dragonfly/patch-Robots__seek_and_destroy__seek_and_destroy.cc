--- Robots/seek_and_destroy/seek_and_destroy.cc.orig	2005-01-10 20:35:30.000000000 +0200
+++ Robots/seek_and_destroy/seek_and_destroy.cc
@@ -6,6 +6,7 @@
 #include <unistd.h>
 #include <signal.h>
 #include <stdlib.h>
+#include <cstring>
 
 #ifdef TIME_WITH_SYS_TIME 
 # include <sys/time.h>
