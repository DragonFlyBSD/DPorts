--- sope-core/NGStreams/NGInternetSocketAddress.m.orig	2019-02-01 19:05:29 UTC
+++ sope-core/NGStreams/NGInternetSocketAddress.m
@@ -48,7 +48,8 @@
 #include "NGInternetSocketDomain.h"
 #include "common.h"
 
-#if defined(HAVE_GETHOSTBYNAME_R) && !defined(linux) && !defined(__FreeBSD__) && !defined(__GLIBC__)
+#if defined(HAVE_GETHOSTBYNAME_R) && !defined(linux) && !defined(__FreeBSD__) && \
+	!defined(__GLIBC__) && !defined(__DragonFly__)
 #define USE_GETHOSTBYNAME_R 1
 #endif
 
