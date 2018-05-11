--- core/file.cpp.orig	2014-03-10 13:44:59.000000000 +0000
+++ core/file.cpp
@@ -22,7 +22,7 @@
 #endif
 
 
-extern "C" void *memcpy(void *, const void *, uint);
+extern "C" void *memcpy(void *, const void *, size_t);
 
 
 class FileData
