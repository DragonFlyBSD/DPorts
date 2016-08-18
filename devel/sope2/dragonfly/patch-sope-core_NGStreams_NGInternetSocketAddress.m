--- sope-core/NGStreams/NGInternetSocketAddress.m.orig	2016-07-06 14:34:57.000000000 +0300
+++ sope-core/NGStreams/NGInternetSocketAddress.m
@@ -48,7 +48,7 @@
 #include "NGInternetSocketDomain.h"
 #include "common.h"
 
-#if defined(HAVE_GETHOSTBYNAME_R) && !defined(linux) && !defined(__FreeBSD__) && !defined(__GLIBC__)
+#if defined(HAVE_GETHOSTBYNAME_R) && !defined(linux) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__GLIBC__)
 #define USE_GETHOSTBYNAME_R 1
 #endif
 
