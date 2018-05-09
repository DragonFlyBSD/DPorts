--- src/actions.cpp.intermediate	2018-05-09 09:39:48.000000000 +0300
+++ src/actions.cpp
@@ -2048,7 +2048,7 @@ namespace {
  #if defined(__APPLE__)
   /* This is the critical section object (statically allocated). */
   static pthread_mutex_t cs =  PTHREAD_RECURSIVE_MUTEX_INITIALIZER;
- #elif defined(__FreeBSD__)
+ #elif defined(__FreeBSD__) || defined(__DragonFly__)
   static pthread_mutex_t cs =  PTHREAD_MUTEX_INITIALIZER;
  #else
   static pthread_mutex_t cs =  PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP;
