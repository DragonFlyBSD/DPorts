--- src/System/Link/pipe_link.cpp.intermediate	2019-06-07 12:56:47.000000000 +0000
+++ src/System/Link/pipe_link.cpp
@@ -30,7 +30,7 @@
 #include <signal.h>
 #include <sys/wait.h>
 #endif
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 
