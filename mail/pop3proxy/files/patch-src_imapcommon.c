
$FreeBSD: mail/pop3proxy/files/patch-src_imapcommon.c 300896 2012-07-14 13:54:48Z beat $

--- src/imapcommon.c.orig
+++ src/imapcommon.c
@@ -121,6 +121,7 @@
 #include <errno.h>
 
 #include <openssl/evp.h>
+#include <openssl/md5.h>
 
 #include <pthread.h>
 #include <sys/types.h>
