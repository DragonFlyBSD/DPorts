--- vendor/core/libutils/include/utils/FileMap.h.orig	2022-06-10 23:11:16 UTC
+++ vendor/core/libutils/include/utils/FileMap.h
@@ -32,6 +32,8 @@
 #include <windows.h>
 #endif
 
+typedef off_t   off64_t;
+
 namespace android {
 
 /*
