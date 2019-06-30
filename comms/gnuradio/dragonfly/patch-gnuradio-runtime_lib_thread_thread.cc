--- gnuradio-runtime/lib/thread/thread.cc.orig	2019-05-29 03:34:08 UTC
+++ gnuradio-runtime/lib/thread/thread.cc
@@ -167,7 +167,7 @@ namespace gr {
 
 #elif defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__) || \
   defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__GNU__) || \
-  defined(__NetBSD__)
+  defined(__NetBSD__) || defined(__DragonFly__)
 
 namespace gr {
   namespace thread {
