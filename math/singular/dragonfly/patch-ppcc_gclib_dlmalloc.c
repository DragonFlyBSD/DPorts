--- ppcc/gclib/dlmalloc.c.orig	2020-01-24 09:42:54 UTC
+++ ppcc/gclib/dlmalloc.c
@@ -606,7 +606,7 @@ Void_t* memcpy();
 
 
 #ifdef LACKS_UNISTD_H
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 #if __STD_C
 extern Void_t*     sbrk(ptrdiff_t);
 #else
