--- ext/nanogui/ext/coro/coro.c.orig	2016-10-15 20:12:12 UTC
+++ ext/nanogui/ext/coro/coro.c
@@ -534,7 +534,7 @@ coro_transfer (coro_context *prev, coro_
 {
   pthread_cond_signal (&next->cv);
   pthread_cond_wait (&prev->cv, &coro_mutex);
-#if __FreeBSD__ /* freebsd is of course broken and needs manual testcancel calls... yay... */
+#if __FreeBSD__ || __DragonFly__ /* freebsd is of course broken and needs manual testcancel calls... yay... */
   pthread_testcancel ();
 #endif
 }
