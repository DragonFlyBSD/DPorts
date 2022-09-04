--- src/kj/async.h.orig	2022-05-25 12:55:57 UTC
+++ src/kj/async.h
@@ -28,7 +28,7 @@
 KJ_BEGIN_HEADER
 
 #ifndef KJ_USE_FIBERS
-  #if __BIONIC__ || __FreeBSD__ || __OpenBSD__ || KJ_NO_EXCEPTIONS
+  #if __BIONIC__ || __FreeBSD__ || __OpenBSD__ || __DragonFly__ || KJ_NO_EXCEPTIONS
     // These platforms don't support fibers.
     #define KJ_USE_FIBERS 0
   #else
