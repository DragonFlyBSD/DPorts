--- Telegram/ThirdParty/dispatch/private/private.h.orig	2022-06-06 20:33:13 UTC
+++ Telegram/ThirdParty/dispatch/private/private.h
@@ -177,7 +177,7 @@ void _dispatch_prohibit_transition_to_mu
 
 #if TARGET_OS_MAC
 #define DISPATCH_COCOA_COMPAT 1
-#elif defined(__linux__) || defined(__FreeBSD__) || defined(_WIN32)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(_WIN32) || defined(__DragonFly__)
 #define DISPATCH_COCOA_COMPAT 1
 #else
 #define DISPATCH_COCOA_COMPAT 0
@@ -189,7 +189,7 @@ void _dispatch_prohibit_transition_to_mu
 
 #if TARGET_OS_MAC
 typedef mach_port_t dispatch_runloop_handle_t;
-#elif defined(__linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 typedef int dispatch_runloop_handle_t;
 #elif defined(_WIN32)
 typedef void *dispatch_runloop_handle_t;
