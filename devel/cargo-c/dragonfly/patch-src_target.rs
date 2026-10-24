--- src/target.rs.orig	2006-07-24 01:21:28 UTC
+++ src/target.rs
@@ -155,6 +155,10 @@ impl Target {
         self.os.eq_ignore_ascii_case("freebsd")
     }
 
+    fn is_dragonfly(&self) -> bool {
+        self.os.eq_ignore_ascii_case("dragonfly")
+    }
+
     fn is_haiku(&self) -> bool {
         self.os.eq_ignore_ascii_case("haiku")
     }
@@ -164,7 +168,7 @@ impl Target {
     }
 
     pub fn default_libdir(&self) -> PathBuf {
-        if self.is_freebsd() {
+        if self.is_freebsd() || self.is_dragonfly() {
             return "lib".into();
         }
 
