--- vendor/openssl/build.rs.intermediate	2019-11-02 16:50:25 UTC
+++ vendor/openssl/build.rs
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
