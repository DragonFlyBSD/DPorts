--- src/config.h.orig
+++ src/config.h
@@ -861,11 +861,11 @@
 #endif
 
 
-#if (defined(__NetBSD__) || defined(__FreeBSD) || defined(sgi)|| \
+#if (defined(__NetBSD__) || defined(__FreeBSD) || defined(sgi)|| defined(__DragonFly__) || \
 	defined(FreeBSD) || defined(__FreeBSD__) || defined(__bsdi__) || \
 	defined(__OpenBSD__))
 
-#if (defined(sgi) || defined(__NetBSD__) || defined(__OpenBSD__))
+#if (defined(sgi) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__))
 #define RLIMIT_OFILE RLIMIT_NOFILE
 #endif
 #define ICMPHDR icmp
