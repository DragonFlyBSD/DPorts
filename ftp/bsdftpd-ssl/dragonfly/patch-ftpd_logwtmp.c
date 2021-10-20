--- ftpd/logwtmp.c.intermediate	2019-08-04 12:30:42.000000000 +0000
+++ ftpd/logwtmp.c
@@ -49,7 +49,7 @@ __FBSDID("$FreeBSD: src/libexec/ftpd/log
 #include <sys/socket.h>
 
 #include <sys/param.h>
-#if __FreeBSD_version < 900007
+#if defined(__FreeBSD__) && __FreeBSD_version < 900007
 #include <fcntl.h>
 #include <time.h>
 #if 1 /* Original FreeBSD 5.0 code */
