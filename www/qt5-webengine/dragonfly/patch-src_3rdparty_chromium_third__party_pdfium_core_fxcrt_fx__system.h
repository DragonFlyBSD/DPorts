--- src/3rdparty/chromium/third_party/pdfium/core/fxcrt/fx_system.h.intermediate	2019-05-06 10:32:16.000000000 +0000
+++ src/3rdparty/chromium/third_party/pdfium/core/fxcrt/fx_system.h
@@ -41,7 +41,7 @@
 #elif defined(_WIN64)
 #define _FX_OS_ _FX_OS_WIN64_
 #define _FX_PLATFORM_ _FX_PLATFORM_WINDOWS_
-#elif defined(__linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define _FX_OS_ _FX_OS_LINUX_
 #define _FX_PLATFORM_ _FX_PLATFORM_LINUX_
 #elif defined(__APPLE__)
