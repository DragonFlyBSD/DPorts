--- axalib/tls.c.orig	2018-10-22 20:12:01 UTC
+++ axalib/tls.c
@@ -27,6 +27,7 @@
 #include <pthread.h>
 #include <sys/stat.h>
 #include <unistd.h>
+#include <stdint.h>
 #include <string.h>
 
 
@@ -167,11 +168,20 @@ get_ssl_pemsg(axa_emsg_t *emsg, SSL *ssl
 static unsigned long
 __attribute__((used)) id_function(void)
 {
+#ifdef __clang__
 #pragma clang diagnostic push
 #pragma clang diagnostic ignored "-Wbad-function-cast"
+#else
+#pragma GCC diagnostic push
+#pragma GCC diagnostic ignored "-Wbad-function-cast"
+#endif
 	/* pthread_t is a pointer on some systems including FreeBSD */
-	return ((unsigned long)pthread_self());
+	return ((uintptr_t)pthread_self());
+#ifdef __clang__
 #pragma clang diagnostic pop
+#else
+#pragma GCC diagnostic pop
+#endif
 }
 
 /* Lock or unlock a static (created at initialization) lock for OpenSSL
