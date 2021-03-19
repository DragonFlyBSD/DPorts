--- thrill/mem/malloc_tracker.cpp.orig	2020-04-06 07:06:39 UTC
+++ thrill/mem/malloc_tracker.cpp
@@ -19,7 +19,7 @@
 #include <tlx/backtrace.hpp>
 #include <tlx/define.hpp>
 
-#if __linux__ || __APPLE__ || __FreeBSD__
+#if __linux__ || __APPLE__ || __FreeBSD__ || defined(__DragonFly__)
 
 #include <dlfcn.h>
 
@@ -388,7 +388,7 @@ void StartMemProfiler(common::ProfileThr
 /******************************************************************************/
 // Initialize function pointers to the real underlying malloc implementation.
 
-#if __linux__ || __APPLE__ || __FreeBSD__
+#if __linux__ || __APPLE__ || __FreeBSD__ || __DragonFly__
 
 ATTRIBUTE_NO_SANITIZE
 static __attribute__ ((constructor)) void init() { // NOLINT
@@ -747,6 +747,8 @@ static void preinit_free(void* ptr) {
 #define MALLOC_USABLE_SIZE malloc_size
 #include <malloc/malloc.h>
 
+#elif __DragonFly__
+#define NOEXCEPT
 #elif __FreeBSD__
 
 #define NOEXCEPT
