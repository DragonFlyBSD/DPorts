--- util/passwordbasedauthentication.h.intermediate	2022-01-25 16:54:25.000000000 +0000
+++ util/passwordbasedauthentication.h
@@ -18,7 +18,7 @@
 #ifndef _GVM_PASSWORDBASEDAUTHENTICATION_H
 #define _GVM_PASSWORDBASEDAUTHENTICATION_H
 
-#if defined(__FreeBSD__) && __FreeBSD__ < 12
+#if (defined(__FreeBSD__) && __FreeBSD__ < 12) || defined(__DragonFly__)
 #define HAS_CRYPT_R 0
 #else
 #define HAS_CRYPT_R 1
