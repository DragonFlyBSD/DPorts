--- source/blender/blenloader/intern/readfile.h.orig	2019-07-24 07:41:39 UTC
+++ source/blender/blenloader/intern/readfile.h
@@ -53,7 +53,7 @@ enum eFileDataFlag {
 #  pragma GCC poison off_t
 #endif
 
-#if defined(_MSC_VER) || defined(__APPLE__) || defined(__HAIKU__)
+#if defined(_MSC_VER) || defined(__APPLE__) || defined(__HAIKU__) || defined(__DragonFly__)
 typedef int64_t off64_t;
 #endif
 
