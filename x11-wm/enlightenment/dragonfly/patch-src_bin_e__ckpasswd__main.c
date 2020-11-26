--- src/bin/e_ckpasswd_main.c.orig	2020-07-26 16:39:12 UTC
+++ src/bin/e_ckpasswd_main.c
@@ -40,7 +40,7 @@ _check_auth(uid_t id, const char *guess)
 
 
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <security/pam_constants.h>
 
 static int
