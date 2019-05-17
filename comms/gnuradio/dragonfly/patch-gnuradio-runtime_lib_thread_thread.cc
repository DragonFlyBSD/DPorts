--- gnuradio-runtime/lib/thread/thread.cc.orig	2019-03-09 13:28:14 UTC
+++ gnuradio-runtime/lib/thread/thread.cc
@@ -166,7 +166,7 @@ namespace gr {
 
 
 #elif defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__) || \
-  defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__GNU__)
+  defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__GNU__) || defined(__DragonFly__)
 
 namespace gr {
   namespace thread {
