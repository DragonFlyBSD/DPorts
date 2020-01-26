--- kernel/log.h.orig	2019-08-26 08:37:53 UTC
+++ kernel/log.h
@@ -165,7 +165,7 @@ static inline void log_assert_worker(boo
 // This is the magic behind the code coverage counters
 // ---------------------------------------------------
 
-#if defined(YOSYS_ENABLE_COVER) && (defined(__linux__) || defined(__FreeBSD__))
+#if defined(YOSYS_ENABLE_COVER) && (defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__))
 
 #define cover(_id) do { \
     static CoverData __d __attribute__((section("yosys_cover_list"), aligned(1), used)) = { __FILE__, __FUNCTION__, _id, __LINE__, 0 }; \
