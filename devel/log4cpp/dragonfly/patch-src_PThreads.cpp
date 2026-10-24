--- src/PThreads.cpp.orig
+++ src/PThreads.cpp
@@ -5,6 +5,7 @@
  */
 
 #include <cstdlib>
+#include <cstdint>
 #include <log4cpp/threading/Threading.hh>
 
 #if defined(LOG4CPP_HAVE_THREADING) && defined(LOG4CPP_USE_PTHREADS)
@@ -15,11 +16,11 @@
         std::string getThreadId() {
             char buffer[4 * sizeof(long)];
             int bufsize = sizeof(buffer) / sizeof(buffer[0]);
-            int n = ::snprintf(buffer, bufsize, "%lu", pthread_self()); // thread id unsigned
+            int n = ::snprintf(buffer, bufsize, "%ju", (uintmax_t)pthread_self()); // thread id unsigned
             if (n >= bufsize) {
                 // escape to heap allocation
                 char* buff_alloc;
-                int size = ::asprintf(&buff_alloc, "%lu", pthread_self()); // thread id unsigned
+                int size = ::asprintf(&buff_alloc, "%ju", (uintmax_t)pthread_self()); // thread id unsigned
                 if (size < 0) {
                     throw std::bad_alloc();
                 }
