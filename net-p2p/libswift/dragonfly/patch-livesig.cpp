--- livesig.cpp.orig	2019-03-02 21:05:03 UTC
+++ livesig.cpp
@@ -603,7 +603,7 @@ static int opensslrsa_verify2(EVP_PKEY *
     rsa = EVP_PKEY_get1_RSA(pkey);
     if (rsa == NULL)
         return 0;
-#if OPENSSL_VERSION_NUMBER >= 0x10100005L
+#if OPENSSL_VERSION_NUMBER >= 0x10100005L && !defined(LIBRESSL_VERSION_NUMBER)
     bits = BN_num_bits(RSA_get0_e(rsa));
 #else
     bits = BN_num_bits(rsa->e);
@@ -706,7 +706,7 @@ static int opensslrsa_todns(struct evbuf
     if (rsa == NULL)
         return 0;
 
-#if OPENSSL_VERSION_NUMBER >= 0x10100005L
+#if OPENSSL_VERSION_NUMBER >= 0x10100005L && !defined(LIBRESSL_VERSION_NUMBER)
     e_bytes = BN_num_bytes(RSA_get0_e(rsa));
     mod_bytes = BN_num_bytes(RSA_get0_n(rsa));
 #else
@@ -724,7 +724,7 @@ static int opensslrsa_todns(struct evbuf
     }
 
     unsigned char *space = new unsigned char[e_bytes];
-#if OPENSSL_VERSION_NUMBER >= 0x10100005L
+#if OPENSSL_VERSION_NUMBER >= 0x10100005L && !defined(LIBRESSL_VERSION_NUMBER)
     BN_bn2bin(RSA_get0_e(rsa), space);
 #else
     BN_bn2bin(rsa->e, space);
@@ -733,7 +733,7 @@ static int opensslrsa_todns(struct evbuf
     delete[] space;
 
     space = new unsigned char[mod_bytes];
-#if OPENSSL_VERSION_NUMBER >= 0x10100005L
+#if OPENSSL_VERSION_NUMBER >= 0x10100005L && !defined(LIBRESSL_VERSION_NUMBER)
     BN_bn2bin(RSA_get0_n(rsa), space);
 #else
     BN_bn2bin(rsa->n, space);
@@ -903,7 +903,7 @@ static int opensslecdsa_sign(popt_live_s
         return 0;
     }
 
-#if OPENSSL_VERSION_NUMBER >= 0x10100005L
+#if OPENSSL_VERSION_NUMBER >= 0x10100005L && !defined(LIBRESSL_VERSION_NUMBER)
     BN_bn2bin_fixed(ECDSA_SIG_get0_r(ecdsasig), sigdata, siglen / 2);
     BN_bn2bin_fixed(ECDSA_SIG_get0_s(ecdsasig), sigdata+siglen/2, siglen / 2);
 #else
