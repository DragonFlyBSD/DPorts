--- third_party/perfetto/include/perfetto/base/build_config.h.orig	2026-09-09 12:00:00 UTC
+++ third_party/perfetto/include/perfetto/base/build_config.h
@@ -148,7 +148,7 @@
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_QNX() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_APPLE_TVOS() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_FREEBSD() 0
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_ANDROID() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_LINUX() 1
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_LINUX_BUT_NOT_QNX() 1
