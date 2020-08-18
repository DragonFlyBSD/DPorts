--- modules/fileio/includes/os_wfopen.h.intermediate	2020-08-17 19:04:24.000000000 +0000
+++ modules/fileio/includes/os_wfopen.h
@@ -25,7 +25,7 @@
 #endif
 
 // Linux
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define os_wfopen       linux_fopen
 FILE* linux_fopen(const wchar_t* _pstFilename, const wchar_t* _pstMode);
 #endif
