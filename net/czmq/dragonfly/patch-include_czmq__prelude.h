--- include/czmq_prelude.h.orig	2018-03-22 22:18:37 UTC
+++ include/czmq_prelude.h
@@ -165,7 +165,7 @@
 #elif (defined (Mips))
 #   define __UTYPE_MIPS
 #   define __UNIX__
-#elif (defined (FreeBSD) || defined (__FreeBSD__) || defined (__FreeBSD_kernel__))
+#elif (defined (FreeBSD) || defined (__FreeBSD__) || defined (__DragonFly__) || defined (__FreeBSD_kernel__))
 #   define __UTYPE_FREEBSD
 #   define __UNIX__
 #elif (defined (NetBSD) || defined (__NetBSD__))
