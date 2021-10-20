--- bbftpd_crypt.c.intermediate	2021-03-10 08:13:02.000000000 +0000
+++ bbftpd_crypt.c
@@ -85,7 +85,7 @@ void sendcrypt()
     /*
     ** Now extract the public key in order to send it
     */
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     lenkey  = BN_bn2mpi(myrsa->n,pubkey) ;
     lenexpo = BN_bn2mpi(myrsa->e,pubexponent) ;
 #else
