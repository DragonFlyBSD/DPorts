--- src/util.c.orig	2020-06-26 00:04:20 UTC
+++ src/util.c
@@ -211,7 +211,7 @@ enum nss_status convert_userdata_for_name_to_hostent(c
     return NSS_STATUS_SUCCESS;
 }
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 enum nss_status convert_userdata_to_addrtuple(const userdata_t* u,
                                               const char* name,
                                               struct gaih_addrtuple** pat,
