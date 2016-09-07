hmmmmm between 1.0.2h and 1.1.0 changed structures to functions:
cryptodev_aes_ctr_192 -> cryptodev_aes_192_ctr
cryptodev_aes_256_ctr -> cryptodev_aes_256_ctr

but not in cryptodev_engine_ciphers()...

--- crypto/engine/eng_cryptodev.c.orig	2016-08-25 18:29:20.000000000 +0300
+++ crypto/engine/eng_cryptodev.c
@@ -42,9 +42,9 @@
 #include <openssl/crypto.h>
 
 #if (defined(__unix__) || defined(unix)) && !defined(USG) && \
-        (defined(OpenBSD) || defined(__FreeBSD__))
+        (defined(OpenBSD) || defined(__FreeBSD__) || defined(__DragonFly__))
 # include <sys/param.h>
-# if (OpenBSD >= 200112) || ((__FreeBSD_version >= 470101 && __FreeBSD_version < 500000) || __FreeBSD_version >= 500041)
+# if (OpenBSD >= 200112) || ((__FreeBSD_version >= 470101 && __FreeBSD_version < 500000) || __FreeBSD_version >= 500041) || defined(__DragonFly__)
 #  define HAVE_CRYPTODEV
 # endif
 # if (OpenBSD >= 200110)
@@ -856,10 +856,10 @@ cryptodev_engine_ciphers(ENGINE *e, cons
         *cipher = cryptodev_aes_ctr();
         break;
     case NID_aes_192_ctr:
-        *cipher = cryptodev_aes_ctr_192();
+        *cipher = cryptodev_aes_192_ctr();
         break;
     case NID_aes_256_ctr:
-        *cipher = cryptodev_aes_ctr_256();
+        *cipher = cryptodev_aes_256_ctr();
         break;
 # endif
     default:
