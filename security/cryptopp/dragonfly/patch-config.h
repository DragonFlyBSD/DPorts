--- config.h.intermediate	2016-12-09 21:29:58 UTC
+++ config.h
@@ -539,7 +539,7 @@ NAMESPACE_END
 	#define CRYPTOPP_MM_MALLOC_AVAILABLE
 #elif defined(__APPLE__)
 	#define CRYPTOPP_APPLE_MALLOC_AVAILABLE
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 	#define CRYPTOPP_MALLOC_ALIGNMENT_IS_16
 #elif defined(__linux__) || defined(__sun__) || defined(__CYGWIN__)
 	#define CRYPTOPP_MEMALIGN_AVAILABLE
@@ -637,7 +637,7 @@ NAMESPACE_END
 #define CRYPTOPP_UNIX_AVAILABLE
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #define CRYPTOPP_BSD_AVAILABLE
 #endif
 
