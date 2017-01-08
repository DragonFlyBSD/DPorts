F--- src/signals-unix.c.orig	2016-09-20 05:54:21.000000000 +0300
+++ src/signals-unix.c
@@ -22,7 +22,7 @@
 // Figure out the best signals/timers to use for this platform
 #ifdef __APPLE__ // Darwin's mach ports allow signal-free thread management
 #define HAVE_MACH
-#elif defined(__FreeBSD__) // generic bsd
+#elif defined(__FreeBSD__) || defined(__DragonFly__) // generic bsd
 #define HAVE_ITIMER
 #else // generic linux
 #define HAVE_TIMER
@@ -156,11 +156,14 @@ static void allocate_segv_handler(void)
     }
 }
 
+#ifndef __DragonFly__
 static unw_context_t *volatile signal_context;
+#endif
 static pthread_mutex_t in_signal_lock;
 static pthread_cond_t exit_signal_cond;
 static pthread_cond_t signal_caught_cond;
 
+#ifndef __DragonFly__
 static void jl_thread_suspend_and_get_state(int tid, unw_context_t **ctx)
 {
     pthread_mutex_lock(&in_signal_lock);
@@ -182,6 +185,7 @@ static void jl_thread_resume(int tid, in
     assert(jl_atomic_load_acquire(&ptls2->signal_request) == 0);
     pthread_mutex_unlock(&in_signal_lock);
 }
+#endif
 
 // Throw jl_interrupt_exception if the master thread is in a signal async region
 // or if SIGINT happens too often.
@@ -205,7 +209,9 @@ void usr2_handler(int sig, siginfo_t *in
     jl_ptls_t ptls = jl_get_ptls_states();
     sig_atomic_t request = jl_atomic_exchange(&ptls->signal_request, 0);
     if (request == 1) {
+#ifndef __DragonFly__
         signal_context = jl_to_bt_context(ctx);
+#endif
 
         pthread_mutex_lock(&in_signal_lock);
         pthread_cond_broadcast(&signal_caught_cond);
@@ -366,7 +372,9 @@ static void *signal_listener(void *arg)
     static uintptr_t bt_data[JL_MAX_BT_SIZE + 1];
     static size_t bt_size = 0;
     sigset_t sset;
+#ifndef __DragonFly__
     unw_context_t *signal_context;
+#endif
     int sig, critical, profile;
     int i;
     jl_sigsetset(&sset);
@@ -406,6 +414,7 @@ static void *signal_listener(void *arg)
         bt_size = 0;
         // sample each thread, round-robin style in reverse order
         // (so that thread zero gets notified last)
+#ifndef __DragonFly__
         for (i = jl_n_threads; i-- > 0; ) {
             // notify thread to stop
             jl_thread_suspend_and_get_state(i, &signal_context);
@@ -437,6 +446,7 @@ static void *signal_listener(void *arg)
             // notify thread to resume
             jl_thread_resume(i, sig);
         }
+#endif
 
         // this part is async with the running of the rest of the program
         // and must be thread-safe, but not necessarily signal-handler safe