--- cargo-crates/openssl-0.10.23/build.rs.orig	2019-05-09 01:41:17 UTC
+++ cargo-crates/openssl-0.10.23/build.rs
@@ -61,5 +61,21 @@ fn main() {
         if version >= 0x2_09_01_00_0 {
             println!("cargo:rustc-cfg=libressl291");
         }
+
+        if version >= 0x2_09_02_00_0 {
+            println!("cargo:rustc-cfg=libressl292");
+        }
+
+        if version >= 0x3_00_00_00_0 {
+            println!("cargo:rustc-cfg=libressl300");
+        }
+
+        if version >= 0x3_00_01_00_0 {
+            println!("cargo:rustc-cfg=libressl301");
+        }
+
+        if version >= 0x3_00_02_00_0 {
+            println!("cargo:rustc-cfg=libressl302");
+        }
     }
 }
