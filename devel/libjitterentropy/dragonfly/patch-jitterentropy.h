--- jitterentropy.h.orig
+++ jitterentropy.h
@@ -154,7 +154,7 @@
 #endif
 #endif
 
-#if defined(__MINGW32__) || defined(__APPLE__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__MINGW32__) || defined(__APPLE__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #define JENT_PTHREAD
 #endif
 
