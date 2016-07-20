--- libs/libmythtv/yuv2rgb.cpp.orig	2015-06-16 19:03:30.000000000 +0300
+++ libs/libmythtv/yuv2rgb.cpp
@@ -407,6 +407,11 @@ yuv2rgb_fun yuv2rgb_init_mmx (int bpp, i
 #define C_GU (13954 >> (16 - SCALE_BITS))
 #define C_GV (34903 >> (16 - SCALE_BITS))
 
+#if defined(__DragonFly__)
+#undef  UCHAR_MAX
+#define UCHAR_MAX  (int)0xff
+#endif
+
 #if defined(__FreeBSD__)
 // HACK: this is actually only needed on AMD64 at the moment,
 //       but is doesn't hurt the other architectures.
