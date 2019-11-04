--- vendor/openssl-sys/build/cfgs.rs.intermediate	2019-11-02 19:50:02 UTC
+++ vendor/openssl-sys/build/cfgs.rs
@@ -28,6 +28,22 @@ pub fn get(openssl_version: Option<u64>,
         if libressl_version >= 0x2_09_01_00_0 {
             cfgs.push("libressl291");
         }
+
+        if libressl_version >= 0x2_09_02_00_0 {
+            cfgs.push("libressl292");
+        }
+
+        if libressl_version >= 0x3_00_00_00_0 {
+            cfgs.push("libressl300");
+        }
+
+        if libressl_version >= 0x3_00_01_00_0 {
+            cfgs.push("libressl301");
+        }
+
+        if libressl_version >= 0x3_00_02_00_0 {
+            cfgs.push("libressl302");
+        }
     } else {
         let openssl_version = openssl_version.unwrap();
 
