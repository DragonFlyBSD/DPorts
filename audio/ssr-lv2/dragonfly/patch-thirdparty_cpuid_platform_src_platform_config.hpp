--- thirdparty/cpuid/platform/src/platform/config.hpp.intermediate	2021-12-21 12:05:55.000000000 +0000
+++ thirdparty/cpuid/platform/src/platform/config.hpp
@@ -16,7 +16,7 @@
     #if defined(__ANDROID__)
         #define PLATFORM_ANDROID 1
     #endif
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     #define PLATFORM_FREEBSD 1
 #elif defined(_WIN32)
     #define PLATFORM_WINDOWS 1
