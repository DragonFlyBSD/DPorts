--- utils/s2n_asn1_time.c.orig	2022-10-19 19:41:33.551661000 +0200
+++ utils/s2n_asn1_time.c	2022-10-19 19:41:56.851130000 +0200
@@ -48,7 +48,7 @@
 static inline long get_gmt_offset(struct tm *t) {
 
 /* See: https://sourceware.org/git/?p=glibc.git;a=blob;f=include/features.h;h=ba272078cf2263ec88e039fda7524c136a4a7953;hb=HEAD */
-#if defined(__USE_MISC) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__ANDROID__) || defined(ANDROID) || defined(__APPLE__) && defined(__MACH__)
+#if defined(__USE_MISC) || defined(__DragonFly__) ||  defined(__FreeBSD__) || defined(__NetBSD__) || defined(__ANDROID__) || defined(ANDROID) || defined(__APPLE__) && defined(__MACH__)
     return t->tm_gmtoff;
 #else
     return t->__tm_gmtoff;
