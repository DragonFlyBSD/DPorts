--- widget/remotefs.c.orig
+++ widget/remotefs.c
@@ -44,7 +44,7 @@
 #ifndef MSWIN
 #include <sys/socket.h>
 #include <sys/signal.h>
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/sysmacros.h>
 #endif
 #include <netinet/in.h>
