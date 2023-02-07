--- utils/s2n_asn1_time.c.orig	2022-12-12 20:59:26 UTC
+++ utils/s2n_asn1_time.c
@@ -49,7 +49,7 @@ typedef enum parser_state {
 static inline long get_gmt_offset(struct tm *t)
 {
 /* See: https://sourceware.org/git/?p=glibc.git;a=blob;f=include/features.h;h=ba272078cf2263ec88e039fda7524c136a4a7953;hb=HEAD */
-#if defined(__USE_MISC) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__ANDROID__) \
+#if defined(__USE_MISC) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__ANDROID__) \
         || defined(ANDROID) || defined(__APPLE__) && defined(__MACH__)
     return t->tm_gmtoff;
 #else
