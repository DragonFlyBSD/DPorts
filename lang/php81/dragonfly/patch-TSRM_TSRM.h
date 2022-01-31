--- TSRM/TSRM.h.orig	2021-12-15 02:00:45 UTC
+++ TSRM/TSRM.h
@@ -147,7 +147,7 @@ TSRM_API const char *tsrm_api_name(void)
 # define __has_attribute(x) 0
 #endif
 
-#if !__has_attribute(tls_model) || defined(__FreeBSD__) || defined(__MUSL__)
+#if !__has_attribute(tls_model) || defined(__FreeBSD__) || defined(__MUSL__) || defined(__DragonFly__)
 # define TSRM_TLS_MODEL_ATTR
 #elif __PIC__
 # define TSRM_TLS_MODEL_ATTR __attribute__((tls_model("initial-exec")))
