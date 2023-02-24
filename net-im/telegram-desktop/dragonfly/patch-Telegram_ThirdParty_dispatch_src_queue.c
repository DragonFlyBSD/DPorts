--- Telegram/ThirdParty/dispatch/src/queue.c.orig	2022-06-06 20:33:13 UTC
+++ Telegram/ThirdParty/dispatch/src/queue.c
@@ -7298,7 +7298,7 @@ _gettid(void)
 {
 	return (pid_t)syscall(SYS_gettid);
 }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 DISPATCH_ALWAYS_INLINE
 static inline pid_t
 _gettid(void)
