--- src/target.rs.orig	Mon Jul 24 01:21:28 2006
+++ src/target.rs	Sun Apr
@@ -128,6 +128,10 @@ impl Target {
         self.os.eq_ignore_ascii_case("freebsd")
     }
 
+    fn is_dragonfly(&self) -> bool {
+        self.os.eq_ignore_ascii_case("dragonfly")
+    }
+
     fn is_haiku(&self) -> bool {
         self.os.eq_ignore_ascii_case("haiku")
     }
@@ -137,7 +141,7 @@ impl Target {
     }
 
     pub fn default_libdir(&self) -> PathBuf {
-        if self.is_target_overridden || self.is_freebsd() {
+        if self.is_target_overridden || self.is_freebsd() || self.is_dragonfly() {
             return "lib".into();
         }
 
