--- libs/libmythbase/loggingserver.cpp.orig	2015-06-16 19:03:30.000000000 +0300
+++ libs/libmythbase/loggingserver.cpp
@@ -42,7 +42,7 @@ using namespace std;
 #include <signal.h>
 
 // Various ways to get to thread's tid
-#if defined(linux)
+#if defined(linux) || defined(__DragonFly__)
 #include <sys/syscall.h>
 #elif defined(__FreeBSD__)
 extern "C" {
