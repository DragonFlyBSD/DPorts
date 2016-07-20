--- libs/libmythtv/recorders/mpegrecorder.cpp.orig	2015-06-16 19:03:30.000000000 +0300
+++ libs/libmythtv/recorders/mpegrecorder.cpp
@@ -946,7 +946,7 @@ void MpegRecorder::run(void)
 
     bool has_select = true;
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     // HACK. FreeBSD PVR150/500 driver doesn't currently support select()
     has_select = false;
 #endif
