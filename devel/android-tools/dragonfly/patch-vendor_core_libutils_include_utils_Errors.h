--- vendor/core/libutils/include/utils/Errors.h.orig	2022-06-10 23:11:16 UTC
+++ vendor/core/libutils/include/utils/Errors.h
@@ -21,6 +21,8 @@
 #include <sys/types.h>
 #include <string>
 
+#define ENODATA ECONNREFUSED
+
 namespace android {
 
 /**
