--- src/PThreads.cpp.orig	2017-07-13 05:39:11 UTC
+++ src/PThreads.cpp
@@ -6,6 +6,7 @@
 
 #include <log4cpp/threading/Threading.hh>
 #include <cstdlib>
+#include <cstdint>
 
 #if defined(LOG4CPP_HAVE_THREADING) && defined(LOG4CPP_USE_PTHREADS)
 
@@ -15,11 +16,11 @@ namespace log4cpp {
         std::string getThreadId() {
             char buffer[4*sizeof(long)];
             int bufsize = sizeof(buffer)/sizeof(buffer[0]);
-            int n = ::snprintf(buffer, bufsize, "%lu", pthread_self());	// thread id unsigned
+            int n = ::snprintf(buffer, bufsize, "%ju", (uintmax_t)pthread_self());	// thread id unsigned
             if (n >= bufsize) {
             	// escape to heap allocation
 				char *buff_alloc;
-				int size = ::asprintf(&buff_alloc, "%lu", pthread_self());	// thread id unsigned
+				int size = ::asprintf(&buff_alloc, "%ju", (uintmax_t)pthread_self());	// thread id unsigned
 				if (size < 0) {
 					throw std::bad_alloc();
 				}
