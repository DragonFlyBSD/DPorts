--- include/ZeroTierDebug.h.orig	2019-09-22 13:57:26 UTC
+++ include/ZeroTierDebug.h
@@ -79,6 +79,9 @@
 #ifdef __FreeBSD__
   #define ZT_THREAD_ID (long)0 // (long)gettid()
 #endif
+#ifdef __DragonFly__
+  #define ZT_THREAD_ID (long)0 // (long)gettid()
+#endif
 #ifdef _WIN32
   #define ZT_THREAD_ID (long)0 // 
 #endif
@@ -99,7 +102,7 @@
 			#define DEBUG_INFO(fmt, ...) fprintf(stderr, ZT_GRN "INFO [%ld]: %17s:%5d:%25s: " fmt "\n" \
 					ZT_RESET, ZT_THREAD_ID, ZT_FILENAME, __LINE__, __FUNCTION__, __VA_ARGS__)
 		#endif
-		#if defined(__linux__) or defined(__APPLE__) or defined(__FreeBSD__)
+		#if defined(__linux__) or defined(__APPLE__) or defined(__FreeBSD__) or defined(__DragonFly__)
 			#define DEBUG_INFO(fmt, args ...) fprintf(stderr, ZT_GRN "INFO [%ld]: %17s:%5d:%25s: " fmt "\n" \
 					ZT_RESET, ZT_THREAD_ID, ZT_FILENAME, __LINE__, __FUNCTION__, ##args)
 		#endif
