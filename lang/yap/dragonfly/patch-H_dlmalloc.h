--- H/dlmalloc.h.orig	2010-10-18 11:48:20.000000000 +0300
+++ H/dlmalloc.h
@@ -346,7 +346,7 @@ extern "C" {
 
 
 #ifdef LACKS_UNISTD_H
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__OpenBSD__) && !defined(__NetBSD__)
 #if __STD_C
 extern Void_t*     sbrk(ptrdiff_t);
 #else
