--- src/start/self_exe.inc.orig	2021-10-24 04:18:16 UTC
+++ src/start/self_exe.inc
@@ -48,7 +48,7 @@ static char *get_self_path(char *exec_fi
 # undef USE_GENERIC_GET_SELF_PATH
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 # include <sys/sysctl.h>
 # include <errno.h>
 static char *get_self_path(char *exec_file)
