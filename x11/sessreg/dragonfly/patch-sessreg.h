--- sessreg.h.orig	2011-06-26 18:30:31.000000000 +0200
+++ sessreg.h	2013-01-05 23:35:01.745611000 +0100
@@ -76,7 +76,8 @@
 #endif
 
 #ifdef CSRG_BASED
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if !defined(__FreeBSD__) && !defined(__OpenBSD__) \
+ && !defined(__DragonFly__)
 /* *BSD doesn't like a ':0' type entry in utmp */
 #define NO_UTMP
 #endif
