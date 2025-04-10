--- TSRM/TSRM.h.orig	Wed Mar 12 01:55:56 2025
+++ TSRM/TSRM.h	Thu Apr
@@ -152,7 +152,8 @@ TSRM_API bool tsrm_is_managed_thread(void);
 # define __has_attribute(x) 0
 #endif
 
-#if !__has_attribute(tls_model) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__MUSL__) || defined(__HAIKU__)
+#if !__has_attribute(tls_model) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__MUSL__) || defined(__HAIKU__) || \
+	defined(__DragonFly__)
 # define TSRM_TLS_MODEL_ATTR
 # define TSRM_TLS_MODEL_DEFAULT
 #elif __PIC__
