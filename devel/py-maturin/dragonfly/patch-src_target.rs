--- src/target.rs.orig	2022-08-14 11:03:56 UTC
+++ src/target.rs
@@ -499,6 +499,11 @@ impl Target {
         self.os == Os::Linux
     }
 
+    /// Returns true if the current platform is dragonfly
+    pub fn is_dragonfly(&self) -> bool {
+        self.os == Os::Dragonfly
+    }
+
     /// Returns true if the current platform is freebsd
     pub fn is_freebsd(&self) -> bool {
         self.os == Os::FreeBsd
