--- src/3rdparty/chromium/third_party/perfetto/include/perfetto/base/build_config.h.intermediate	2026-09-17 08:38:24 UTC
+++ src/3rdparty/chromium/third_party/perfetto/include/perfetto/base/build_config.h
@@ -64,7 +64,7 @@
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_IOS() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_APPLE_TVOS() 0
 #endif
-#elif defined(__linux__) || defined(__OpenBSD__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_ANDROID() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_LINUX() 1
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_BSD() 1
