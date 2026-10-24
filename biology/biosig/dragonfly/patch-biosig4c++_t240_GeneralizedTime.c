--- biosig4c++/t240/GeneralizedTime.c.orig	2026-10-23 00:00:00 UTC
+++ biosig4c++/t240/GeneralizedTime.c
@@ -51,7 +51,7 @@
  * Where to look for offset from GMT, Phase I.
  * Several platforms are known.
  */
-#if defined(__FreeBSD__)				\
+#if defined(__FreeBSD__) || defined(__DragonFly__)	\
 	|| (defined(__GNUC__) && defined(__APPLE_CC__))	\
 	|| (defined __GLIBC__ && __GLIBC__ >= 2)
 #undef	HAVE_TM_GMTOFF
