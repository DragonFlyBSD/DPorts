--- include/czmq_prelude.h.orig	2015-04-11 20:32:16.000000000 +0300
+++ include/czmq_prelude.h
@@ -159,7 +159,7 @@
 #elif (defined (Mips))
 #   define __UTYPE_MIPS
 #   define __UNIX__
-#elif (defined (FreeBSD) || defined (__FreeBSD__))
+#elif (defined (FreeBSD) || defined (__FreeBSD__) || defined(__DragonFly__))
 #   define __UTYPE_FREEBSD
 #   define __UNIX__
 #elif (defined (NetBSD) || defined (__NetBSD__))
