--- src/platform/BSD/sched.c.orig
+++ src/platform/BSD/sched.c
@@ -76,10 +76,14 @@
 		return 0;
 	}
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+#ifdef NOTE_SECONDS
 	EV_SET(&timer_event, 0x01, EVFILT_TIMER, EV_ADD, NOTE_SECONDS,
 				 sleeptime, NULL);
+#else
+	EV_SET(&timer_event, 0x01, EVFILT_TIMER, EV_ADD, 0, sleeptime * 1000, NULL);
 #endif
+#endif
 
 	if (kevent(kqueue_fd, &timer_event, 1, NULL, 0 , NULL) < 0){
 		errorx("kevent timer %d ", (int)timer_event.ident);
@@ -134,7 +138,7 @@
 	/* Click signal */
 	add_signal(SIGIO);
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   /* Real-time signals for blocks */
   for (int sig = SIGRTMIN + 1; sig <= SIGRTMAX; ++sig) {
     debug("provide signal %d (%s)", sig, strsignal(sig));
@@ -252,7 +256,7 @@
 				/* Child(ren) dead?*/
 				bar_poll_exited(bar);
 				json_print_bar(bar);
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 			} else if (recv.ident > SIGRTMIN && recv.ident <= SIGRTMAX) {
 				/* Blocks signaled? */
 				bar_poll_signaled(bar, recv.ident - SIGRTMIN);
