--- dsp/v4f_IIR2.h.orig
+++ dsp/v4f_IIR2.h
@@ -34,6 +34,8 @@
 
 #if defined(__APPLE__) || defined(__FreeBSD__)
 inline float exp10f(float f) {return __builtin_exp10f(f);}
+#elif defined(__DragonFly__)
+inline float exp10f(float f) {return powf(10.f, f);}
 #endif
 
 class RBJv4
