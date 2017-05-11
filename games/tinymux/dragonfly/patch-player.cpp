--- player.cpp.orig	2017-01-01 13:39:32 UTC
+++ player.cpp
@@ -598,7 +598,7 @@ const UTF8 *mux_crypt(const UTF8 *szPass
     case CRYPT_CLEARTEXT:
         return szPassword;
 
-#ifdef UNIX_DIGEST
+#if defined(UNIX_DIGEST) && !defined(OPENSSL_NO_SHA0)
     case CRYPT_P6H_XX:
         return p6h_xx_crypt(szPassword);
 #endif
