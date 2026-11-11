--- ares/n64/vulkan/parallel-rdp/util/timer.cpp.orig
+++ ares/n64/vulkan/parallel-rdp/util/timer.cpp
@@ -107,7 +107,7 @@
 	return int64_t(double(li.QuadPart) * static_qpc_freq.inv_freq);
 #else
 	struct timespec ts = {};
-#if defined(ANDROID) || defined(__FreeBSD__)
+#if defined(ANDROID) || (defined(__FreeBSD__) || defined(__DragonFly__))
 	constexpr auto timebase = CLOCK_MONOTONIC;
 #else
 	constexpr auto timebase = CLOCK_MONOTONIC_RAW;
