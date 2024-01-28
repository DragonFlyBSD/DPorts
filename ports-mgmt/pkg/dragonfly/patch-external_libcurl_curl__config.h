--- external/libcurl/curl_config.h.orig	2023-11-13 13:48:44 UTC
+++ external/libcurl/curl_config.h
@@ -11,7 +11,13 @@
 #define CURL_CA_FALLBACK 1
 
 /* Location of default ca path */
-#define CURL_CA_PATH "/etc/ssl/certs/"
+/*
+ * XXX(tuxillo): No clue why specifying CA Path makes curl not find
+ * the certificates in that dir.
+ * Not specifying the bundle or the CA path makes curl default to the
+ * SSL lib itself.
+ */
+/* #define CURL_CA_PATH "/etc/ssl/certs/" */
 
 /* Default SSL backend */
 /* #undef CURL_DEFAULT_SSL_BACKEND */
@@ -476,7 +482,6 @@
 
 /* if you have the functions SSL_CTX_set_srp_username and
    SSL_CTX_set_srp_password */
-#define HAVE_OPENSSL_SRP 1
 
 /* Define to 1 if you have the <openssl/ssl.h> header file. */
 #define HAVE_OPENSSL_SSL_H 1
@@ -587,7 +592,6 @@
 /* #undef HAVE_SSL_H */
 
 /* Define to 1 if you have the `SSL_set0_wbio' function. */
-#define HAVE_SSL_SET0_WBIO 1
 
 /* Define to 1 if you have the <stdatomic.h> header file. */
 #define HAVE_STDATOMIC_H 1
@@ -897,6 +901,9 @@
 /* Use OpenLDAP-specific code */
 /* #undef USE_OPENLDAP */
 
+/* engine disabled */
+#define OPENSSL_NO_ENGINE 1
+
 /* if OpenSSL is in use */
 #define USE_OPENSSL 1
 
