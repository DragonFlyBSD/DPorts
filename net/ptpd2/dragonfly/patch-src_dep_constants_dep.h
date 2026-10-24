--- src/dep/constants_dep.h.orig	2015-06-29 18:11:09.000000000 +0300
+++ src/dep/constants_dep.h
@@ -16,7 +16,7 @@
 /* platform dependent */
 
 #if !defined(linux) && !defined(__NetBSD__) && !defined(__FreeBSD__) && \
-  !defined(__APPLE__) && !defined(__OpenBSD__) && !defined(__sun)
+  !defined(__APPLE__) && !defined(__OpenBSD__) && !defined(__sun) && !defined(__DragonFly__)
 #error PTPD hasn't been ported to this OS - should be possible \
 if it's POSIX compatible, if you succeed, report it to ptpd-devel@sourceforge.net
 #endif
@@ -34,7 +34,7 @@ if it's POSIX compatible, if you succeed
 #define octet ether_addr_octet
 #endif /* linux */
 
-#if defined(__NetBSD__) || defined(__FreeBSD__) || defined(__APPLE__) || defined(__OpenBSD__) || defined(__sun)
+#if defined(__NetBSD__) || defined(__FreeBSD__) || defined(__APPLE__) || defined(__OpenBSD__) || defined(__sun) || defined(__DragonFly__)
 # include <sys/types.h>
 # include <sys/socket.h>
 #ifdef HAVE_SYS_SOCKIO_H
