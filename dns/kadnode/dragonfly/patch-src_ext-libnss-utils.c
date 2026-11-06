--- src/ext-libnss-utils.c.orig	2026-09-01 21:20:00 UTC
+++ src/ext-libnss-utils.c
@@ -67,7 +67,7 @@ enum nss_status convert_userdata_for_name_to_hostent(c
     return NSS_STATUS_SUCCESS;
 }
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 enum nss_status convert_kadnode_nss_response_to_addrtuple(const kadnode_nss_response_t* u,
                                               const char* name,
                                               struct gaih_addrtuple** pat,
