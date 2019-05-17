--- src/cryptopp/config.h.orig	2019-02-21 22:21:59.00 UTC
+++ src/cryptopp/config.h
@@ -510,7 +510,7 @@ NAMESPACE_END
 	#define CRYPTOPP_MM_MALLOC_AVAILABLE
 #elif defined(__APPLE__)
 	#define CRYPTOPP_APPLE_MALLOC_AVAILABLE
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 	#define CRYPTOPP_MALLOC_ALIGNMENT_IS_16
 #elif defined(__linux__) || defined(__sun__) || defined(__CYGWIN__)
 	#define CRYPTOPP_MEMALIGN_AVAILABLE
@@ -601,7 +601,7 @@ NAMESPACE_END
 #define CRYPTOPP_UNIX_AVAILABLE
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #define CRYPTOPP_BSD_AVAILABLE
 #endif
 
