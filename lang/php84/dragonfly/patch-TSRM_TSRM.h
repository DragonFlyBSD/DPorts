--- TSRM/TSRM.h.orig	2026-09-22 15:00:02 UTC
+++ TSRM/TSRM.h
@@ -153,7 +153,7 @@ TSRM_API bool tsrm_is_managed_thread(void);
 #endif
 
 #if !__has_attribute(tls_model) || defined(__FreeBSD__) || defined(__NetBSD__) \
-	|| defined(__MUSL__) || defined(__HAIKU__) || defined(_AIX)
+	|| defined(__MUSL__) || defined(__HAIKU__) || defined(_AIX) || defined(__DragonFly__)
 # define TSRM_TLS_MODEL_ATTR
 # define TSRM_TLS_MODEL_DEFAULT
 #elif __PIC__
