
$FreeBSD: head/security/openscep/files/patch-lib_proxy.c 340725 2014-01-22 17:40:44Z mat $

--- lib/proxy.c.orig
+++ lib/proxy.c
@@ -10,6 +10,7 @@
 #include <scep.h>
 #include <proxy.h>
 #include <openssl/evp.h>
+#include <openssl/md5.h>
 
 /*
  * proxy_authenticator	compute the proxy authenticator hash value
