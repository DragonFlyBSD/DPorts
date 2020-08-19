--- include/my_pthread.h.orig	2020-06-23 15:10:16 UTC
+++ include/my_pthread.h
@@ -196,6 +196,10 @@ static inline int my_sigwait(sigset_t *s
   *sig= sigwaitinfo(set, &siginfo);
   *code= siginfo.si_code;
   return *sig < 0 ?  errno : 0;
+/* XXX */
+#ifndef SI_KERNEL
+#define SI_KERNEL 128
+#endif
 #else
 #define SI_KERNEL 128
   *code= 0;
