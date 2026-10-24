--- include/quickcpplib/ringbuffer_log.hpp.orig
+++ include/quickcpplib/ringbuffer_log.hpp
@@ -73,7 +73,7 @@
 #include <spawn.h>
 #include <sys/wait.h>
 #include <unistd.h>
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 extern "C" char **environ;
 #endif
 #endif
