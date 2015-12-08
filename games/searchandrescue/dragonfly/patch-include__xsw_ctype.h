--- include/xsw_ctype.h.orig	2004-08-06 01:34:20.000000000 +0300
+++ include/xsw_ctype.h
@@ -1,7 +1,7 @@
 // xsw_ctype.h
 // This is intended as a prototype for files using the global/ctype.cpp file.
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 # if defined(__cplusplus) || defined(c_plusplus)
 
 /* Most systems should have this defined.
