--- src/inotifywatch.c.intermediate	2022-01-25 12:18:14.000000000 +0000
+++ src/inotifywatch.c
@@ -11,7 +11,7 @@
 #include <errno.h>
 #include <fcntl.h>
 #include <getopt.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <pthread.h>
 #endif // __FreeBSD__
 #include <limits.h>
@@ -99,13 +99,13 @@ int main(int argc, char **argv) {
     char *inc_iregex = NULL;
     int rc;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     sigset_t set, oset;
 #endif // __FreeBSD__
 
     signal(SIGINT, handle_impatient_user);
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     // Block some signals in libinotify's worker thread, so that
     // handle_signal runs in the context of the main thread and
     // the 'done' flag is actually honored.
@@ -150,7 +150,7 @@ int main(int argc, char **argv) {
 	    return EXIT_FAILURE;
     }
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     pthread_sigmask(SIG_SETMASK, &oset, NULL);
 #endif // __FreeBSD__
 
