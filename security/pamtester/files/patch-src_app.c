--- src/app.c.orig	2005-09-20 05:55:34 UTC
+++ src/app.c
@@ -62,6 +62,9 @@
 
 #ifdef HAVE_SECURITY_PAM_MISC_H
 #include <security/pam_misc.h>
+#else
+#include <security/openpam.h>
+#define misc_conv	openpam_ttyconv
 #endif
 
 #ifdef HAVE_PAM_PAM_MISC_H
@@ -446,6 +449,15 @@ int pamtester_app_run(pamtester_app_t *params)
 			err_msg = xmalloc(sizeof("Unsupported operation \"\"") + strlen(op->name));
 			sprintf(err_msg, "Unsupported operation \"%s\"", op->name);
 			goto out;
+		}
+
+		char **envlist = pam_getenvlist(pamh);
+		if (envlist != NULL) {
+			for (int i = 0; envlist[i] != NULL; ++i) {
+				printf("%s: returned env: %s\n", params->app_name, envlist[i]);
+				free(envlist[i]);
+			}
+			free(envlist);
 		}
 	}
 
