--- Telegram/ThirdParty/dispatch/os/generic_unix_base.h.orig	2022-06-06 20:33:13 UTC
+++ Telegram/ThirdParty/dispatch/os/generic_unix_base.h
@@ -17,7 +17,7 @@
 #include <sys/sysmacros.h>
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libutil.h>
 #include <fcntl.h>
 #endif
