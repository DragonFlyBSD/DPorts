--- src/security/security_dac.c.orig	2016-01-17 01:24:09 UTC
+++ src/security/security_dac.c
@@ -1425,7 +1425,7 @@ virSecurityDACGetProcessLabelInternal(pi
     VIR_FREE(path);
     return ret;
 }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && ! defined __DragonFly__
 static int
 virSecurityDACGetProcessLabelInternal(pid_t pid,
                                       virSecurityLabelPtr seclabel)
