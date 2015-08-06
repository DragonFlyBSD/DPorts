--- hotspot/src/os/bsd/vm/osThread_bsd.cpp.orig	2015-08-05 07:39:27 UTC
+++ hotspot/src/os/bsd/vm/osThread_bsd.cpp
@@ -30,7 +30,8 @@
 
 void OSThread::pd_initialize() {
   assert(this != NULL, "check");
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) \
+ || defined(__OpenBSD__) || defined(__DragonFly__)
   _thread_id        = 0;
 #else
   _thread_id        = NULL;
