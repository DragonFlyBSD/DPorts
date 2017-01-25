--- base/logging.cpp.orig	2017-01-25 08:56:50.000000000 +0200
+++ base/logging.cpp
@@ -69,6 +69,10 @@
 #elif defined(_WIN32)
 #include <windows.h>
 #elif defined(__DragonFly__)
+#include <sys/param.h>
+#if __DragonFly_version >= 400709
+#include <sys/lwp.h>
+#endif
 #include <unistd.h>
 #elif defined(__FreeBSD__)
 #include <pthread_np.h>
