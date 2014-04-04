--- daemon/main.c.orig	2012-04-07 22:50:09.000000000 +0000
+++ daemon/main.c
@@ -147,7 +147,7 @@ void set_signal_handlers(void)
 	sigaction(SIGUSR2, &sa, NULL);
 }
 
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 static int ppoll(struct pollfd *fds, nfds_t nfds, const struct timespec *timeout, const sigset_t *sigmask)
 {
 	int ready;
