--- cargo-crates/aws-lc-sys-0.39.0/aws-lc/include/openssl/target.h.orig	2006-07-24 01:21:28 UTC
+++ cargo-crates/aws-lc-sys-0.39.0/aws-lc/include/openssl/target.h
@@ -166,6 +166,10 @@
 #define OPENSSL_ANDROID
 #endif
 
+#if defined(__DragonFly__)
+#define OPENSSL_DRAGONFLY
+#endif
+
 #if defined(__FreeBSD__)
 #define OPENSSL_FREEBSD
 #endif
