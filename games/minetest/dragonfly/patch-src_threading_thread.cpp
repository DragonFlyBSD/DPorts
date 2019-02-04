--- src/threading/thread.cpp.orig	2018-06-10 15:18:11 UTC
+++ src/threading/thread.cpp
@@ -44,7 +44,7 @@ DEALINGS IN THE SOFTWARE.
 	#include <unistd.h>
 	#include <sys/time.h>
 
-	#if defined(__FreeBSD__) || defined(__APPLE__)
+	#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 		#include <sys/types.h>
 		#include <sys/sysctl.h>
 	#elif defined(_GNU_SOURCE)
@@ -56,7 +56,7 @@ DEALINGS IN THE SOFTWARE.
 // for setName
 #if defined(__linux__)
 	#include <sys/prctl.h>
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 	#include <pthread_np.h>
 #elif defined(_MSC_VER)
 	struct THREADNAME_INFO {
@@ -287,7 +287,7 @@ void Thread::setName(const std::string &
 	// distributions are still runing 2.11 and previous versions.
 	prctl(PR_SET_NAME, name.c_str());
 
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 
 	pthread_set_name_np(pthread_self(), name.c_str());
 
