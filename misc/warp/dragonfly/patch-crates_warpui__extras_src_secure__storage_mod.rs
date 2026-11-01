--- crates/warpui_extras/src/secure_storage/mod.rs.orig
+++ crates/warpui_extras/src/secure_storage/mod.rs
@@ -6,7 +6,7 @@
 
 #[cfg(not(target_family = "wasm"))]
 #[cfg_attr(target_os = "macos", path = "mac.rs")]
-#[cfg_attr(any(target_os = "linux", target_os = "freebsd"), path = "linux.rs")]
+#[cfg_attr(any(target_os = "linux", target_os = "freebsd", target_os = "dragonfly"), path = "linux.rs")]
 #[cfg_attr(target_os = "windows", path = "windows.rs")]
 mod imp;
 mod noop;
@@ -60,7 +60,7 @@
     ctx.add_singleton_model(|_| -> Model { Box::new(noop::SecureStorage::new(service_name)) });
 }
 
-#[cfg(any(target_os = "linux", target_os = "freebsd"))]
+#[cfg(any(target_os = "linux", target_os = "freebsd", target_os = "dragonfly"))]
 pub fn register_with_fallback(
     service_name: &str,
     fallback_dir: std::path::PathBuf,
