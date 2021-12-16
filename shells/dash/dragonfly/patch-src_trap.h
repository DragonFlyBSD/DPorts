--- src/trap.h.orig	2021-05-17 06:40:16 UTC
+++ src/trap.h
@@ -49,6 +49,10 @@ void dotrap(void);
 void setinteractive(int);
 void exitshell(void) __attribute__((__noreturn__));
 int decode_signal(const char *, int);
+#ifdef __DragonFly__
+/* avoid clashing with sigblockall(3) on DragonFly BSD */
+#define sigblockall sigblockall_dash
+#endif
 void sigblockall(sigset_t *oldmask);
 
 static inline int have_traps(void)
