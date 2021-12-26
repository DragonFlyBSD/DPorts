--- popper/pop_tls_openssl.c.intermediate	2021-12-26 09:52:59.000000000 +0000
+++ popper/pop_tls_openssl.c
@@ -51,6 +51,7 @@
 #include <fcntl.h>
 #include <setjmp.h>
 #include <signal.h>
+#include <string.h> /* for strcpy() */
 
 #ifdef HAVE_UNISTD_H
 #  include <unistd.h>
