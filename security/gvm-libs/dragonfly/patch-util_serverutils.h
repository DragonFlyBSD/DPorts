--- util/serverutils.h.orig	2021-02-01 15:20:11 UTC
+++ util/serverutils.h
@@ -32,7 +32,7 @@
 #include <gnutls/gnutls.h> /* for gnutls_session_t, gnutls_certificate_cred... */
 #include <stdarg.h>        /* for va_list */
 #include <sys/param.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 #include <netinet/ip.h>
