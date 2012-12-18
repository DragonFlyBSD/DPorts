
$FreeBSD: ports/mail/pop3proxy/files/patch-src_imapcommon.c,v 1.2 2012/11/17 05:59:10 svnexp Exp $

--- src/imapcommon.c.orig
+++ src/imapcommon.c
@@ -121,6 +121,7 @@
 #include <errno.h>
 
 #include <openssl/evp.h>
+#include <openssl/md5.h>
 
 #include <pthread.h>
 #include <sys/types.h>
