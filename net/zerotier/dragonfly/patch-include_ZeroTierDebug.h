--- include/ZeroTierDebug.h.orig	2023-09-14 19:09:26 UTC
+++ include/ZeroTierDebug.h
@@ -63,7 +63,7 @@
 #ifdef __APPLE__
   #define ZT_THREAD_ID (long)0 // (long)gettid()
 #endif
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   #define ZT_THREAD_ID (long)0 // (long)gettid()
 #endif
 #ifdef _WIN32
@@ -86,7 +86,7 @@
 			#define DEBUG_INFO(fmt, ...) fprintf(stderr, ZT_GRN "INFO [%ld]: %17s:%5d:%25s: " fmt "\n" \
 					ZT_RESET, ZT_THREAD_ID, ZT_FILENAME, __LINE__, __FUNCTION__, __VA_ARGS__)
 		#endif
-		#if defined(__linux__) or defined(__APPLE__) or defined(__FreeBSD__)
+		#if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 			#define DEBUG_INFO(fmt, args ...) fprintf(stderr, ZT_GRN "INFO [%ld]: %17s:%5d:%25s: " fmt "\n" \
 					ZT_RESET, ZT_THREAD_ID, ZT_FILENAME, __LINE__, __FUNCTION__, ##args)
 		#endif
