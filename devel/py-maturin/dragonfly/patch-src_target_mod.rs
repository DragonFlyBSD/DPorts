--- src/target/mod.rs.orig	2006-07-24 01:21:28 UTC
+++ src/target/mod.rs
@@ -617,6 +617,11 @@ impl Target {
         self.os == Os::Linux
     }
 
+    /// Returns true if the current platform is dragonfly
+    pub fn is_dragonfly(&self) -> bool {
+        self.os == Os::Dragonfly
+    }
+
     /// Returns true if the current platform is freebsd
     #[inline]
     pub fn is_freebsd(&self) -> bool {
