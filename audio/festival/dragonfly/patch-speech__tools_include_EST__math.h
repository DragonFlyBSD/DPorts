--- speech_tools/include/EST_math.h.orig	2006-08-03 13:49:35.000000000 +0000
+++ speech_tools/include/EST_math.h
@@ -104,6 +104,10 @@ extern "C" {
 #define isnan(X) __isnan(X)
 #endif
 
+#if defined(__DragonFly__)
+#define isnanf(X) __isnanf(X)
+#endif
+
 /* FreeBSD *and other 4.4 based systems require anything, isnanf is defined */
 #if defined(__FreeBSD__)
 
