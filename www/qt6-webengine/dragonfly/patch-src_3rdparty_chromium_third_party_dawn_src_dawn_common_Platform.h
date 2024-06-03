diff --git third_party/dawn/src/dawn/common/Platform.h third_party/dawn/src/dawn/common/Platform.h
index 608865b6c79..2179ab88f8c 100644
--- src/3rdparty/chromium/third_party/dawn/src/dawn/common/Platform.h
+++ src/3rdparty/chromium/third_party/dawn/src/dawn/common/Platform.h
@@ -45,7 +45,7 @@
 #error "Unsupported Windows platform."
 #endif
 
-#elif defined(__OpenBSD__) || defined(__FreeBSD__)
+#elif defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define DAWN_PLATFORM_IS_LINUX 1
 #define DAWN_PLATFORM_IS_BSD 1
 #define DAWN_PLATFORM_IS_POSIX 1
diff --git third_party/ffmpeg/stdatomic.h third_party/ffmpeg/stdatomic.h
new file mode 100644
index 00000000000..b4845a74e49
