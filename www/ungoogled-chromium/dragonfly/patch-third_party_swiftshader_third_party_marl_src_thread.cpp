diff --git third_party/swiftshader/third_party/marl/src/thread.cpp third_party/swiftshader/third_party/marl/src/thread.cpp
index b87ab0b41bb..46525bc2367 100644
--- third_party/swiftshader/third_party/marl/src/thread.cpp
+++ third_party/swiftshader/third_party/marl/src/thread.cpp
@@ -36,7 +36,7 @@
 #include <pthread.h>
 #include <unistd.h>
 #include <thread>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <pthread.h>
 #include <pthread_np.h>
 #include <unistd.h>
@@ -442,7 +442,7 @@ void Thread::setName(const char* fmt, ...) {
 
 #if defined(__APPLE__)
   pthread_setname_np(name);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   pthread_set_name_np(pthread_self(), name);
 #elif !defined(__Fuchsia__) && !defined(__EMSCRIPTEN__) && !defined(__OpenBSD__) && !defined(__FreeBSD__)
   pthread_setname_np(pthread_self(), name);
