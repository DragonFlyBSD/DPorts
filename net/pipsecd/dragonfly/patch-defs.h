--- defs.h.orig	1999-04-10 01:30:44.000000000 +0200
+++ defs.h
@@ -3,7 +3,7 @@
 #ifndef _DEFS_H
 #define _DEFS_H
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define HAVE_SA_LEN
 #define NEED_IPID_SWAP
 #define NEED_IPLEN_FIX
