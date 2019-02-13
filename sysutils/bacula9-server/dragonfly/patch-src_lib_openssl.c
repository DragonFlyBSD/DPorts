--- src/lib/openssl.c.orig	2018-02-16 08:36:24.092583000 -0600
+++ src/lib/openssl.c	2018-02-16 08:37:23.795454000 -0600
@@ -69,7 +69,7 @@
    }
 }
 
-#if (OPENSSL_VERSION_NUMBER < 0x10100000L)
+#if ( (OPENSSL_VERSION_NUMBER < 0x10100000L) || defined(LIBRESSL_VERSION_NUMBER) )
 /* Array of mutexes for use with OpenSSL static locking */
 static pthread_mutex_t *mutexes;
 
@@ -263,7 +263,7 @@
 {
    int stat = 0;
 
-#if (OPENSSL_VERSION_NUMBER < 0x10100000L)
+#if ( (OPENSSL_VERSION_NUMBER < 0x10100000L) || defined(LIBRESSL_VERSION_NUMBER) )
    if ((stat = openssl_init_threads()) != 0) {
       berrno be;
       Jmsg1(NULL, M_ABORT, 0,
@@ -310,7 +310,7 @@
       Jmsg0(NULL, M_ERROR, 0, _("Failed to save OpenSSL PRNG\n"));
    }
 
-#if (OPENSSL_VERSION_NUMBER < 0x10100000L)
+#if ( (OPENSSL_VERSION_NUMBER < 0x10100000L) || defined(LIBRESSL_VERSION_NUMBER) )
    openssl_cleanup_threads();
 
    /* Free libssl and libcrypto error strings */
