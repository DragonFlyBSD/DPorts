--- cargo-crates/region-3.0.2/src/os/mod.rs.orig
+++ cargo-crates/region-3.0.2/src/os/mod.rs
@@ -28,6 +28,12 @@
 #[cfg(target_os = "freebsd")]
 pub use self::freebsd::*;
 
+#[cfg(target_os = "dragonfly")]
+mod dragonfly;
+
+#[cfg(target_os = "dragonfly")]
+pub use self::dragonfly::*;
+
 #[cfg(target_os = "illumos")]
 mod illumos;
 
