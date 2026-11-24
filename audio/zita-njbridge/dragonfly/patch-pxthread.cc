--- pxthread.cc.orig
+++ pxthread.cc
@@ -25,7 +25,7 @@
 // ----------------------------------------------------------------------------
 
 
-#if defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__GNU__) || defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__GNU__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 
 Pxthread::Pxthread (void)
