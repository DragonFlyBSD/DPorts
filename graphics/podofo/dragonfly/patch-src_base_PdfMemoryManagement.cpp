--- src/base/PdfMemoryManagement.cpp.intermediate	2016-06-25 01:24:58 UTC
+++ src/base/PdfMemoryManagement.cpp
@@ -44,7 +44,7 @@
 #endif
 #endif // _WIN32
 
-#ifdef __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
 #if __WORDSIZE == 64
 #define SIZE_MAX UINT64_MAX
 #else
