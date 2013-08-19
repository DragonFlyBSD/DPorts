--- tac_plus/tac_plus.h.orig	2000-10-26 12:41:54.000000000 +0000
+++ tac_plus/tac_plus.h
@@ -856,7 +856,6 @@ extern const int sys_nerr;
 #define strerror(n) \
     (((n) >= 0 && (n) < sys_nerr) ? sys_errlist[n] : "unknown error")
 #endif
-extern int errno;
 extern int sendauth_fn();
 extern int sendpass_fn();
 extern int enable_fn();
