--- src/pipewire/thread-loop.c.orig	2021-06-15 23:59:44.884134000 +0200
+++ src/pipewire/thread-loop.c	2021-06-16 00:00:16.253419000 +0200
@@ -36,7 +36,7 @@
 #define pw_thread_loop_events_emit(o,m,v,...) spa_hook_list_call(&o->listener_list, struct pw_thread_loop_events, m, v, ##__VA_ARGS__)
 #define pw_thread_loop_events_destroy(o)	pw_thread_loop_events_emit(o, destroy, 0)
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <pthread_np.h>
 #define pthread_setname_np pthread_set_name_np
 #endif
