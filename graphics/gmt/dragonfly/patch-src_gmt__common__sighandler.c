--- src/gmt_common_sighandler.c.orig	2020-09-01 20:27:30 UTC
+++ src/gmt_common_sighandler.c
@@ -64,7 +64,7 @@ void backtrace_symbols_fd(void *const *b
 # else
 #  define UC_IP(uc) ((void *) (uc)->uc_mcontext->ss.eip)
 # endif
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 # ifdef __x86_64__
 #  define UC_IP(uc) ((void *) (uc)->uc_mcontext.mc_rip)
 # elif defined( __arm__)
