--- sql/mysqld.cc.intermediate	2019-05-27 08:19:25.000000000 +0000
+++ sql/mysqld.cc
@@ -4676,7 +4676,7 @@ static void init_ssl() {
 }
 
 static int init_ssl_communication() {
-#ifndef HAVE_WOLFSSL
+#if !defined(HAVE_WOLFSSL) && !defined(LIBRESSL_VERSION_NUMBER)
   char ssl_err_string[OPENSSL_ERROR_LENGTH] = {'\0'};
   int ret_fips_mode = set_fips_mode(opt_ssl_fips_mode, ssl_err_string);
   if (ret_fips_mode != 1) {
