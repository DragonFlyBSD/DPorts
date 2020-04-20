--- src/security/security_util.c.orig	2019-11-26 21:17:34 UTC
+++ src/security/security_util.c
@@ -54,7 +54,7 @@ VIR_LOG_INIT("security.security_util");
  */
 #if defined(__linux__)
 # define XATTR_NAMESPACE "trusted"
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 # define XATTR_NAMESPACE "system"
 #endif
 
