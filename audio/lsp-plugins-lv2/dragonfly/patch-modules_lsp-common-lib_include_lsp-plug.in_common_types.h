--- modules/lsp-common-lib/include/lsp-plug.in/common/types.h.orig
+++ modules/lsp-common-lib/include/lsp-plug.in/common/types.h
@@ -378,7 +378,7 @@
     #define IF_PLATFORM_OPENBSD(...)    __VA_ARGS__
 #endif /* __FreeBSD__ */
 
-#if defined(__bsd__) || defined(__bsd) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(freebsd) || defined(openbsd) || defined(bsdi) || defined(__darwin__)
+#if defined(__bsd__) || defined(__bsd) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(freebsd) || defined(openbsd) || defined(bsdi) || defined(__darwin__) || defined(__DragonFly__)
     #define PLATFORM_BSD
     #define IF_PLATFORM_BSD(...)        __VA_ARGS__
 #endif /* __bsd__ */
