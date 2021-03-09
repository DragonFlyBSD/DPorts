--- smapi/h/compiler.h.orig	2020-04-22 12:18:38 UTC
+++ smapi/h/compiler.h
@@ -700,7 +700,7 @@ int qq(void)
     #define __unix__
 #endif
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
     #if !defined(__UNIX__)
         #define __UNIX__
     #endif
