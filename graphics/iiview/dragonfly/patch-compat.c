--- compat.c.orig	2014-12-11 17:11:25.000000000 +0200
+++ compat.c
@@ -1,5 +1,5 @@
 
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 
 #include <string.h>
 
