diff --git third_party/dawn/src/dawn/common/Platform.h third_party/dawn/src/dawn/common/Platform.h
index 7833c5322f9..2fca89f0383 100644
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
