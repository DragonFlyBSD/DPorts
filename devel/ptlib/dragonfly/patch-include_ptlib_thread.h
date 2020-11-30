--- include/ptlib/thread.h.orig	2013-08-14 23:20:32 UTC
+++ include/ptlib/thread.h
@@ -409,6 +409,8 @@ class PThread : public PObject
 // Include definition of platform dependent thread ID format
 #if defined(_WIN32) && !defined(_WIN32_WCE)
   #define PTHREAD_ID_FMT "%u"
+#elif defined(__DragonFly__)
+  #define PTHREAD_ID_FMT "%p"
 #else
   #define PTHREAD_ID_FMT "0x%lx"
 #endif
