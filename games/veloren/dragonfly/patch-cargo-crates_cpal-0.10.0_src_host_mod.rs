--- cargo-crates/cpal-0.10.0/src/host/mod.rs.orig	2019-07-05 18:30:36 UTC
+++ cargo-crates/cpal-0.10.0/src/host/mod.rs
@@ -1,4 +1,4 @@
-#[cfg(any(target_os = "linux", target_os = "freebsd"))]
+#[cfg(any(target_os = "linux", target_os = "dragonfly", target_os = "freebsd"))]
 pub(crate) mod alsa;
 #[cfg(all(windows, feature = "asio"))]
 pub(crate) mod asio;
