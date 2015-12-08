--- sources/darkplaces/common.h.orig	2009-07-08 11:32:32.000000000 +0300
+++ sources/darkplaces/common.h
@@ -349,7 +349,7 @@ void InfoString_Print(char *buffer);
 
 // strlcat and strlcpy, from OpenBSD
 // Most (all?) BSDs already have them
-#if defined(__OpenBSD__) || defined(__NetBSD__) || defined(__FreeBSD__) || defined(MACOSX)
+#if defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(MACOSX)
 # define HAVE_STRLCAT 1
 # define HAVE_STRLCPY 1
 #endif
