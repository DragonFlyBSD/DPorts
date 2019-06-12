--- cargo-crates/termios-0.2.2/src/os/mod.rs.orig	2016-01-20 16:52:20 UTC
+++ cargo-crates/termios-0.2.2/src/os/mod.rs
@@ -2,10 +2,12 @@
 
 #[cfg(target_os = "linux")] pub use self::linux as target;
 #[cfg(target_os = "macos")] pub use self::macos as target;
+#[cfg(target_os = "dragonfly")] pub use self::dragonfly as target;
 #[cfg(target_os = "freebsd")] pub use self::freebsd as target;
 #[cfg(target_os = "openbsd")] pub use self::openbsd as target;
 
 #[cfg(target_os = "linux")] pub mod linux;
 #[cfg(target_os = "macos")] pub mod macos;
+#[cfg(target_os = "dragonfly")] pub mod dragonfly;
 #[cfg(target_os = "freebsd")] pub mod freebsd;
 #[cfg(target_os = "openbsd")] pub mod openbsd;
