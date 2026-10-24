--- src/bootstrap/src/core/builder/mod.rs.orig
+++ src/bootstrap/src/core/builder/mod.rs
@@ -1143,7 +1143,7 @@
     /// Returns if `std` should be statically linked into `rustc_driver`.
     /// It's currently not done on `windows-gnu` due to linker bugs.
     pub fn link_std_into_rustc_driver(&self, target: TargetSelection) -> bool {
-        !target.triple.ends_with("-windows-gnu")
+        !target.triple.ends_with("-windows-gnu") && !target.triple.ends_with("dragonfly")
     }
 
     /// Obtain a compiler at a given stage and for a given host (i.e., this is the target that the
