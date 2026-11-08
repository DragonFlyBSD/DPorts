--- src/zm_local_camera.cpp.orig
+++ src/zm_local_camera.cpp
@@ -29,7 +29,7 @@
 #if ZM_HAS_V4L2
 
 /* Workaround for GNU/kFreeBSD and FreeBSD */
-#if defined(__FreeBSD_kernel__) || defined(__FreeBSD__)
+#if defined(__FreeBSD_kernel__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #ifndef ENODATA
 #define ENODATA ENOATTR
 #endif
