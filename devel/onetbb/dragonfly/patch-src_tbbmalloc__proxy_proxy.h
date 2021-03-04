--- src/tbbmalloc_proxy/proxy.h.orig	2020-12-08 11:00:57 UTC
+++ src/tbbmalloc_proxy/proxy.h
@@ -22,7 +22,7 @@
 
 // MALLOC_UNIXLIKE_OVERLOAD_ENABLED depends on MALLOC_CHECK_RECURSION stuff
 // TODO: limit MALLOC_CHECK_RECURSION to *_OVERLOAD_ENABLED only
-#if __linux__ || __APPLE__ || __sun || __FreeBSD__ || MALLOC_UNIXLIKE_OVERLOAD_ENABLED
+#if __linux__ || __APPLE__ || __sun || __FreeBSD__ || __DragonFly__ || MALLOC_UNIXLIKE_OVERLOAD_ENABLED
 #define MALLOC_CHECK_RECURSION 1
 #endif
 
