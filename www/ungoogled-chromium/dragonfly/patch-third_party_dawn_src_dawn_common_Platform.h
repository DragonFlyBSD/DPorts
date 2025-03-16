diff --git third_party/dawn/src/dawn/common/Platform.h third_party/dawn/src/dawn/common/Platform.h
index 916b25f93750..8563a12d13ff 100644
--- third_party/dawn/src/dawn/common/Platform.h
+++ third_party/dawn/src/dawn/common/Platform.h
@@ -59,7 +59,7 @@
 #error "Unsupported Windows platform."
 #endif
 
-#elif defined(__OpenBSD__) || defined(__FreeBSD__)
+#elif defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define DAWN_PLATFORM_IS_LINUX 1
 #define DAWN_PLATFORM_IS_BSD 1
 #define DAWN_PLATFORM_IS_POSIX 1
