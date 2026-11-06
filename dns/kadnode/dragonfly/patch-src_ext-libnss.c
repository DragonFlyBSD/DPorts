--- src/ext-libnss.c.orig	2026-09-01 21:20:00 UTC
+++ src/ext-libnss.c
@@ -14,7 +14,7 @@
 #include <stdlib.h>
 #include <arpa/inet.h>
 #include <stdbool.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <nsswitch.h>
 #include <stdarg.h>
 #include <sys/param.h>
@@ -176,7 +176,7 @@ enum nss_status _nss_kadnode_gethostbyname_impl(const 
     }
 }
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 enum nss_status _nss_kadnode_gethostbyname4_r(const char* name,
                                            struct gaih_addrtuple** pat,
                                            char* buffer, size_t buflen,
