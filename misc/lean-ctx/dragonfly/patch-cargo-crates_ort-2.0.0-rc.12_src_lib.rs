--- cargo-crates/ort-2.0.0-rc.12/src/lib.rs.orig
+++ cargo-crates/ort-2.0.0-rc.12/src/lib.rs
@@ -189,7 +189,7 @@
 				Ok(s) if !s.is_empty() => s,
 				#[cfg(target_os = "windows")]
 				_ => "onnxruntime.dll".to_owned(),
-				#[cfg(any(target_os = "linux", target_os = "android", target_os = "freebsd"))]
+				#[cfg(any(target_os = "linux", target_os = "android", target_os = "freebsd", target_os = "dragonfly"))]
 				_ => "libonnxruntime.so".to_owned(),
 				#[cfg(any(target_os = "macos", target_os = "ios"))]
 				_ => "libonnxruntime.dylib".to_owned()
