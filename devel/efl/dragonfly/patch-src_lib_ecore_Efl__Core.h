--- src/lib/ecore/Efl_Core.h.orig	2020-06-17 07:47:44 UTC
+++ src/lib/ecore/Efl_Core.h
@@ -36,7 +36,7 @@
 # define WIN32_LEAN_AND_MEAN
 # include <winsock2.h>
 # undef WIN32_LEAN_AND_MEAN
-#elif defined (__FreeBSD__) || defined (__OpenBSD__)
+#elif defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__DragonFly__)
 # include <sys/select.h>
 # include <signal.h>
 #elif defined (__ANDROID__)
