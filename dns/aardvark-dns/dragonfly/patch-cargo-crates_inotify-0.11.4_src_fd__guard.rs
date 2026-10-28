--- cargo-crates/inotify-0.11.4/src/fd_guard.rs.orig
+++ cargo-crates/inotify-0.11.4/src/fd_guard.rs
@@ -126,5 +126,17 @@
     ) as i64
 }
 
-#[cfg(not(any(target_os = "linux", target_os = "android", target_os = "freebsd")))]
+// DragonFly has no kcmp(2); only identical descriptors compare equal there
+// (as FreeBSD's patch for inotify 0.11.2 did on such platforms).
+#[cfg(target_os = "dragonfly")]
+unsafe fn kcmp_file(_current_process: u32, _fd1: RawFd, _fd2: RawFd) -> i64 {
+    1
+}
+
+#[cfg(not(any(
+    target_os = "linux",
+    target_os = "android",
+    target_os = "freebsd",
+    target_os = "dragonfly"
+)))]
 compile_error!("FdGuard equality requires kcmp support; add a target-specific kcmp_file implementation for this platform");
