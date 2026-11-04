--- src/security/security_util.c.orig	2026-10-01 09:02:52 UTC
+++ src/security/security_util.c
@@ -53,7 +53,7 @@
  */
 #if defined(__linux__)
 # define XATTR_NAMESPACE "trusted"
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 # define XATTR_NAMESPACE "system"
 #endif
 
