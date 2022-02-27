--- src/tbbmalloc/frontend.cpp.orig	2021-10-04 09:50:18 UTC
+++ src/tbbmalloc/frontend.cpp
@@ -709,7 +709,7 @@ MallocMutex RecursiveMallocCallProtector
 std::atomic<pthread_t> RecursiveMallocCallProtector::owner_thread;
 std::atomic<void*> RecursiveMallocCallProtector::autoObjPtr;
 bool        RecursiveMallocCallProtector::mallocRecursionDetected;
-#if __FreeBSD__
+#if __FreeBSD__ || __DragonFly__
 bool        RecursiveMallocCallProtector::canUsePthread;
 #endif
 
