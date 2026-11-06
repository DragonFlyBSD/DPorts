--- src/nss.c.orig	2020-06-26 00:04:20 UTC
+++ src/nss.c
@@ -147,7 +147,7 @@ enum nss_status _nss_mdns_gethostbyname_impl(const cha
     }
 }
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 enum nss_status _nss_mdns_gethostbyname4_r(const char* name,
                                            struct gaih_addrtuple** pat,
                                            char* buffer, size_t buflen,
