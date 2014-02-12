
$FreeBSD: head/mail/pop3proxy/files/patch-src_imapcommon.c 340725 2014-01-22 17:40:44Z mat $

--- src/imapcommon.c.orig
+++ src/imapcommon.c
@@ -121,6 +121,7 @@
 #include <errno.h>
 
 #include <openssl/evp.h>
+#include <openssl/md5.h>
 
 #include <pthread.h>
 #include <sys/types.h>
