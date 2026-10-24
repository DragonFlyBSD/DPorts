--- src/include/linux/tpm.h.intermediate	2026-09-05 02:48:17 UTC
+++ src/include/linux/tpm.h
@@ -18,7 +18,7 @@
 
 #if (defined (__linux) || defined (linux))
 #include <linux/ioctl.h>
-#elif (defined (__OpenBSD__) || defined (__FreeBSD__))
+#elif (defined (__OpenBSD__) || defined (__FreeBSD__) || defined (__DragonFly__))
 #include <sys/ioctl.h>
 #elif (defined (SOLARIS))
 #include <sys/ioccom.h>
