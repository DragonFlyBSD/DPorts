--- cargo-crates/openssl-sys-0.9.49/build/main.rs.orig	2019-08-16 02:18:38 UTC
+++ cargo-crates/openssl-sys-0.9.49/build/main.rs
@@ -202,6 +202,8 @@ See rust-openssl README for more informa
             (2, 9, 0) => ('2', '9', '0'),
             (2, 9, _) => ('2', '9', 'x'),
             (3, 0, 0) => ('3', '0', '0'),
+            (3, 0, 1) => ('3', '0', '1'),
+            (3, 0, _) => ('3', '0', 'x'),
             _ => version_error(),
         };
 
@@ -242,7 +244,7 @@ fn version_error() -> ! {
         "
 
 This crate is only compatible with OpenSSL 1.0.1 through 1.1.1, or LibreSSL 2.5
-through 2.9.x, but a different version of OpenSSL was found. The build is now aborting
+through 3.0.x, but a different version of OpenSSL was found. The build is now aborting
 due to this version mismatch.
 
 "
