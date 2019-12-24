--- src/httpserver.cpp.orig	2018-10-07 10:01:23 UTC
+++ src/httpserver.cpp
@@ -22,6 +22,7 @@
 #include <sys/stat.h>
 #include <signal.h>
 #include <future>
+#include <deque>	// for std::deque
 
 #include <event2/thread.h>
 #include <event2/buffer.h>
