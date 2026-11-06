--- src/ext-libnss.h.orig	2026-09-01 21:20:00 UTC
+++ src/ext-libnss.h
@@ -41,7 +41,7 @@ typedef struct {
 } kadnode_nss_response_t;
 
 // Define prototypes for nss function we're going to export (fixes GCC warnings)
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 enum nss_status _nss_kadnode_gethostbyname4_r(const char*, struct gaih_addrtuple**,
                                            char*, size_t, int*, int*, int32_t*);
 #endif
