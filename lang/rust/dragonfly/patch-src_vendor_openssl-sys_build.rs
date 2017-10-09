--- src/vendor/openssl-sys/build.rs.orig	2017-07-17 23:36:29 UTC
+++ src/vendor/openssl-sys/build.rs
@@ -240,8 +240,12 @@ fn validate_headers(include_dirs: &[Path
 #include <openssl/opensslv.h>
 #include <openssl/opensslconf.h>
 
-#if LIBRESSL_VERSION_NUMBER >= 0x20505000
+#if LIBRESSL_VERSION_NUMBER >= 0x20601000
 RUST_LIBRESSL_NEW
+#elif LIBRESSL_VERSION_NUMBER >= 0x20600000
+RUST_LIBRESSL_260
+#elif LIBRESSL_VERSION_NUMBER >= 0x20505000
+RUST_LIBRESSL_255
 #elif LIBRESSL_VERSION_NUMBER >= 0x20504000
 RUST_LIBRESSL_254
 #elif LIBRESSL_VERSION_NUMBER >= 0x20503000
@@ -347,6 +351,18 @@ See rust-openssl README for more informa
         println!("cargo:libressl=true");
         println!("cargo:version=101");
         Version::Libressl
+    } else if expanded.contains("RUST_LIBRESSL_255") {
+        println!("cargo:rustc-cfg=libressl");
+        println!("cargo:rustc-cfg=libressl255");
+        println!("cargo:libressl=true");
+        println!("cargo:version=101");
+        Version::Libressl
+    } else if expanded.contains("RUST_LIBRESSL_260") {
+        println!("cargo:rustc-cfg=libressl");
+        println!("cargo:rustc-cfg=libressl260");
+        println!("cargo:libressl=true");
+        println!("cargo:version=101");
+        Version::Libressl
     } else if expanded.contains("RUST_OPENSSL_110") {
         println!("cargo:rustc-cfg=ossl110");
         println!("cargo:version=110");
@@ -363,7 +379,7 @@ See rust-openssl README for more informa
         panic!("
 
 This crate is only compatible with OpenSSL 1.0.1, 1.0.2, and 1.1.0, or LibreSSL
-2.5.0, 2.5.1, 2.5.2, 2.5.3, and 2.5.4, but a different version of OpenSSL was
+2.5, and 2.6.0, but a different version of OpenSSL was
 found. The build is now aborting due to this version mismatch.
 
 ");
