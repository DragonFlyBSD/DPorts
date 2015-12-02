--- common.h.orig	2014-01-10 20:53:30.000000000 +0200
+++ common.h
@@ -350,7 +350,7 @@ void InfoString_Print(char *buffer);
 
 // strlcat and strlcpy, from OpenBSD
 // Most (all?) BSDs already have them
-#if defined(__OpenBSD__) || defined(__NetBSD__) || defined(__FreeBSD__) || defined(MACOSX)
+#if defined(__OpenBSD__) || defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(MACOSX)
 # define HAVE_STRLCAT 1
 # define HAVE_STRLCPY 1
 #endif
