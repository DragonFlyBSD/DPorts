--- src/log.c.orig	2018-01-17 09:22:33 UTC
+++ src/log.c
@@ -362,7 +362,7 @@ void log_errnumf_fileline(const drool_lo
 
     memset(errbuf, 0, sizeof(errbuf));
 
-#if ((_POSIX_C_SOURCE >= 200112L || _XOPEN_SOURCE >= 600) && !_GNU_SOURCE) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if ((_POSIX_C_SOURCE >= 200112L || _XOPEN_SOURCE >= 600) && !_GNU_SOURCE) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__DragonFly__)
     /* XSI-compliant version */
     {
         int ret = strerror_r(errnum, errbuf, sizeof(errbuf));
