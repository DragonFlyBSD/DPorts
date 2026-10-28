--- usr/lib/common/loadsave.c.orig	2026-10-26 02:22:43 UTC
+++ usr/lib/common/loadsave.c
@@ -308,7 +308,7 @@ CK_RV init_data_store(STDLL_TokData_t *tokdata, char *directory,
         tokdata->pk_dir = NULL;
     }
 
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
     if ((pkdir = secure_getenv("PKCS_APP_STORE")) != NULL) {
 #else
     if ((pkdir = getenv("PKCS_APP_STORE")) != NULL) {
