--- src/main/native/unix_jni.h.orig	1979-12-31 23:00:00 UTC
+++ src/main/native/unix_jni.h
@@ -31,7 +31,7 @@
       } \
     } while (0)
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 // stat64 is deprecated on OS X/BSD.
 typedef struct stat portable_stat_struct;
 #define portable_stat ::stat
@@ -42,7 +42,7 @@ typedef struct stat64 portable_stat_stru
 #define portable_lstat ::lstat64
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define ENODATA ENOATTR
 #endif
 
