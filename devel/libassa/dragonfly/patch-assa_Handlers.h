--- assa/Handlers.h.orig	2006-07-20 05:30:54.000000000 +0300
+++ assa/Handlers.h
@@ -32,7 +32,7 @@ namespace ASSA {
  */
 
 
-#if defined (__FreeBSD__) || defined(__FreeBSD_kernel__) || defined (__NetBSD__)
+#if defined (__FreeBSD__) || defined(__FreeBSD_kernel__) || defined (__NetBSD__) || defined (__DragonFly__)
 #   define ASSAIOSIG SIGIO
 #else
 #   define ASSAIOSIG SIGPOLL
