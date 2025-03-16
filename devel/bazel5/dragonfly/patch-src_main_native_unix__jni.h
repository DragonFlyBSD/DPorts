--- src/main/native/unix_jni.h.orig	Tue Jan  1 00:00:00 1980
+++ src/main/native/unix_jni.h	Tue Mar
@@ -37,7 +37,8 @@ namespace blaze_jni {
 #define CHECK_EQ(a, b) CHECK((a) == (b))
 #define CHECK_NEQ(a, b) CHECK((a) != (b))
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || \
+    defined(__DragonFly__)
 // stat64 is deprecated on OS X/BSD.
 typedef struct stat portable_stat_struct;
 #define portable_stat ::stat
