--- Telegram/ThirdParty/dispatch/src/shims/hw_config.h.orig	2022-06-06 20:33:13 UTC
+++ Telegram/ThirdParty/dispatch/src/shims/hw_config.h
@@ -197,6 +197,8 @@ _dispatch_hw_get_config(_dispatch_hw_con
 	}
 #elif defined(__FreeBSD__)
 	(void)c; name = "kern.smp.cpus";
+#elif defined(__DragonFly__)
+	(void)c; name = "hw.ncpu";
 #elif defined(__OpenBSD__)
 	(void)c;
 #endif
