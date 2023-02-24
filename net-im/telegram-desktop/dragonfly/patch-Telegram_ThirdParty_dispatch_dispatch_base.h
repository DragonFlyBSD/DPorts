--- Telegram/ThirdParty/dispatch/dispatch/base.h.orig	2022-06-06 20:33:13 UTC
+++ Telegram/ThirdParty/dispatch/dispatch/base.h
@@ -170,6 +170,14 @@
 #define DISPATCH_FREEBSD_UNAVAILABLE()
 #endif
 
+#ifdef __DragonFly__
+#define DISPATCH_DRAGONFLY_UNAVAILABLE() \
+		DISPATCH_UNAVAILABLE_MSG( \
+		"This interface is unavailable on DragonFly BSD systems")
+#else
+#define DISPATCH_DRAGONFLY_UNAVAILABLE()
+#endif
+
 #ifndef DISPATCH_ALIAS_V2
 #if TARGET_OS_MAC
 #define DISPATCH_ALIAS_V2(sym)	 __asm__("_" #sym "$V2")
