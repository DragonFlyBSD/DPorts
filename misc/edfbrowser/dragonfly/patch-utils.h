--- utils.h.orig
+++ utils.h
@@ -148,7 +148,7 @@
  * plus the length of src. While this may seem somewhat confusing,
  * it was done to make truncation detection simple."
  */
-#if defined(__APPLE__) || defined(__MACH__) || defined(__APPLE_CC__) || defined(__FreeBSD__) || defined(__HAIKU__) || ((__GLIBC__ >= 2) && (__GLIBC_MINOR__ >= 38)) || (__GLIBC__ >= 3)
+#if defined(__APPLE__) || defined(__MACH__) || defined(__APPLE_CC__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__HAIKU__) || ((__GLIBC__ >= 2) && (__GLIBC_MINOR__ >= 38)) || (__GLIBC__ >= 3)
 /* nothing here */
 #else
 #define HAS_NO_STRLC
