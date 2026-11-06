--- src/nss.h.orig	2020-06-26 00:04:20 UTC
+++ src/nss.h
@@ -34,7 +34,7 @@
 #endif
 
 // Define prototypes for nss function we're going to export (fixes GCC warnings)
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 enum nss_status _nss_mdns_gethostbyname4_r(const char*, struct gaih_addrtuple**,
                                            char*, size_t, int*, int*, int32_t*);
 #endif
