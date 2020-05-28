--- cargo-crates/openssl-0.10.20/build.rs.orig	2018-09-23 17:28:52 UTC
+++ cargo-crates/openssl-0.10.20/build.rs
@@ -53,5 +53,21 @@ fn main() {
         if version >= 0x2_08_00_00_0 {
             println!("cargo:rustc-cfg=libressl280");
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
