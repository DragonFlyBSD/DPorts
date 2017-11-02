--- deps/openssl/config/opensslconf.h.orig	2017-10-24 19:09:59 UTC
+++ deps/openssl/config/opensslconf.h
@@ -98,7 +98,7 @@
 #endif
 
 #undef OPENSSL_BSD
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined __DragonFly__
 # define OPENSSL_BSD 1
 #endif
 
