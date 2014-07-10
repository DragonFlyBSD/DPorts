--- hotspot/src/os/bsd/vm/osThread_bsd.cpp.orig	2014-07-08 04:33:23.938038000 +0000
+++ hotspot/src/os/bsd/vm/osThread_bsd.cpp	2014-07-08 04:30:36.775219000 +0000
@@ -30,7 +30,7 @@
 
 void OSThread::pd_initialize() {
   assert(this != NULL, "check");
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
   _thread_id        = 0;
 #else
   _thread_id        = NULL;
