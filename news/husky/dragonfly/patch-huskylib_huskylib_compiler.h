--- huskylib/huskylib/compiler.h.orig	2011-11-14 21:38:47.000000000 +0000
+++ huskylib/huskylib/compiler.h
@@ -756,7 +756,8 @@ int qq(void)
 #  define __UNIX__
 #endif
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) \
+ || defined(__DragonFly__)
 #  if !defined(__UNIX__)
 #    define __UNIX__
 #  endif
