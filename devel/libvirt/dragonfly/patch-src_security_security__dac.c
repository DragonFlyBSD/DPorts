--- src/security/security_dac.c.orig	2018-03-27 12:54:04 UTC
+++ src/security/security_dac.c
@@ -1963,7 +1963,7 @@ virSecurityDACGetProcessLabelInternal(pi
     VIR_FREE(path);
     return ret;
 }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
 static int
 virSecurityDACGetProcessLabelInternal(pid_t pid,
                                       virSecurityLabelPtr seclabel)
