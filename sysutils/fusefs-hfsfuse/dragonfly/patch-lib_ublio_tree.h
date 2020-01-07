--- lib/ublio/tree.h.orig	2018-01-18 14:20:39 UTC
+++ lib/ublio/tree.h
@@ -30,7 +30,7 @@
 #ifndef	_SYS_TREE_H_
 #define	_SYS_TREE_H_
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/cdefs.h>
 #elif !defined(__unused)
   #if __GNUC__ == 2 && __GNUC_MINOR__ >= 7 || __GNUC__ > 2
