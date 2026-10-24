--- cargo-crates/aws-lc-sys-0.39.0/aws-lc/crypto/rand_extra/internal.h.orig	2006-07-24 01:21:28 UTC
+++ cargo-crates/aws-lc-sys-0.39.0/aws-lc/crypto/rand_extra/internal.h
@@ -11,7 +11,8 @@
 #elif defined(OPENSSL_WINDOWS)
 #define OPENSSL_RAND_WINDOWS
 #elif defined(OPENSSL_MACOS) || defined(OPENSSL_OPENBSD) || \
-    defined(OPENSSL_FREEBSD)  || defined(OPENSSL_NETBSD) || \
+    defined(OPENSSL_FREEBSD) || defined(OPENSSL_DRAGONFLY) || \
+    defined(OPENSSL_NETBSD) || \
     defined(OPENSSL_SOLARIS) || defined(OPENSSL_WASM) || \
     (defined(OPENSSL_LINUX) && !defined(HAVE_LINUX_RANDOM_H))
 #define OPENSSL_RAND_GETENTROPY
