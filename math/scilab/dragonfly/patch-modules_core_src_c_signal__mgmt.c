--- modules/core/src/c/signal_mgmt.c.orig	2015-03-31 09:31:23 UTC
+++ modules/core/src/c/signal_mgmt.c
@@ -335,9 +335,11 @@ static void sig_fatal(int signum, siginf
                     case SI_QUEUE:
                         si_code_str = "Sigqueue() signal";
                         break;
+#ifdef __FreeBSD__
                     case SI_USER:
                         si_code_str = "User function (kill, sigsend, abort, etc.)";
                         break;
+#endif
 #ifdef SI_KERNEL
                     case SI_KERNEL:
                         si_code_str = "Kernel signal";
