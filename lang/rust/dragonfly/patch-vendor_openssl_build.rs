--- vendor/openssl/build.rs.orig	2020-05-05 01:35:39 UTC
+++ vendor/openssl/build.rs
@@ -61,5 +61,25 @@ fn main() {
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
+
+        if version >= 0x3_01_01_00_0 {
+            println!("cargo:rustc-cfg=libressl302");
+        }
     }
 }
