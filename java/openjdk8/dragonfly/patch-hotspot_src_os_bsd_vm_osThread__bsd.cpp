--- hotspot/src/os/bsd/vm/osThread_bsd.cpp.orig	2015-03-18 10:07:31 UTC
+++ hotspot/src/os/bsd/vm/osThread_bsd.cpp
@@ -30,7 +30,7 @@
 
 void OSThread::pd_initialize() {
   assert(this != NULL, "check");
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
   _thread_id        = 0;
 #else
   _thread_id        = NULL;
