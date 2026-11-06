--- src/ext-libnss-utils.h.orig	2026-09-01 21:20:00 UTC
+++ src/ext-libnss-utils.h
@@ -25,7 +25,7 @@
 #include <netdb.h>
 #include <nss.h>
 #include <stdio.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 #include <resolv.h>
@@ -69,7 +69,7 @@ enum nss_status convert_userdata_for_name_to_hostent(c
 
 // Converts from the userdata struct into the gaih_addrtuple format, used by
 // gethostbyaddr4_r.
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 enum nss_status convert_kadnode_nss_response_to_addrtuple(const kadnode_nss_response_t* u,
                                               const char* name,
                                               struct gaih_addrtuple** pat,
