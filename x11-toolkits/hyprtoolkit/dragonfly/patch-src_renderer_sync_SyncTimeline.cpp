--- src/renderer/sync/SyncTimeline.cpp.orig
+++ src/renderer/sync/SyncTimeline.cpp
@@ -57,7 +57,7 @@
 }
 
 std::optional<bool> CSyncTimeline::check(uint64_t point, uint32_t flags) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     constexpr int ETIME_ERR = ETIMEDOUT;
 #else
     constexpr int ETIME_ERR = ETIME;
