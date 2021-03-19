--- sope-core/NGStreams/NGInternetSocketAddress.m.orig	2020-10-07 15:09:14 UTC
+++ sope-core/NGStreams/NGInternetSocketAddress.m
@@ -48,7 +48,7 @@
 #include "NGInternetSocketDomain.h"
 #include "common.h"
 
-#if defined(HAVE_GETHOSTBYNAME_R) && !defined(linux) && !defined(__FreeBSD__) && !defined(__GLIBC__)
+#if defined(HAVE_GETHOSTBYNAME_R) && !defined(linux) && !defined(__FreeBSD__) && !defined(__GLIBC__) && !defined(__DragonFly__)
 #define USE_GETHOSTBYNAME_R 1
 #endif
 
