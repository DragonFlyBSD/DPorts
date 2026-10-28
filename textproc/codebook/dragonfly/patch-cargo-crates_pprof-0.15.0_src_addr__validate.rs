--- cargo-crates/pprof-0.15.0/src/addr_validate.rs.orig
+++ cargo-crates/pprof-0.15.0/src/addr_validate.rs
@@ -28,7 +28,7 @@
 }
 
 #[inline]
-#[cfg(any(target_os = "macos", target_os = "freebsd"))]
+#[cfg(any(target_os = "macos", target_os = "freebsd", target_os = "dragonfly"))]
 fn create_pipe() -> nix::Result<(i32, i32)> {
     use nix::fcntl::{fcntl, FcntlArg, FdFlag, OFlag};
     use nix::unistd::pipe;
