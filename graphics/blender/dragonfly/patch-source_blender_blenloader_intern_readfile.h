--- source/blender/blenloader/intern/readfile.h.orig	2020-02-11 14:26:31 UTC
+++ source/blender/blenloader/intern/readfile.h
@@ -53,7 +53,8 @@ enum eFileDataFlag {
 #  pragma GCC poison off_t
 #endif
 
-#if defined(_MSC_VER) || defined(__APPLE__) || defined(__HAIKU__) || defined(__NetBSD__)
+#if defined(_MSC_VER) || defined(__APPLE__) || defined(__HAIKU__) || defined(__NetBSD__) || \
+  defined(__DragonFly__)
 typedef int64_t off64_t;
 #endif
 
