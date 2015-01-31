--- gio/gcredentialsprivate.h.orig	2014-09-04 17:26:06 UTC
+++ gio/gcredentialsprivate.h
@@ -31,7 +31,7 @@
 #define G_CREDENTIALS_SOCKET_GET_CREDENTIALS_SUPPORTED 1
 #define G_CREDENTIALS_SPOOFING_SUPPORTED 1
 
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__GNU__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__GNU__) || defined(__DragonFly__)
 #define G_CREDENTIALS_SUPPORTED 1
 #define G_CREDENTIALS_USE_FREEBSD_CMSGCRED 1
 #define G_CREDENTIALS_NATIVE_TYPE G_CREDENTIALS_TYPE_FREEBSD_CMSGCRED
