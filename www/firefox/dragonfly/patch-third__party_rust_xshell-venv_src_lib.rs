--- third_party/rust/xshell-venv/src/lib.rs.orig	2026-11-05 08:54:38 UTC
+++ third_party/rust/xshell-venv/src/lib.rs
@@ -417,6 +417,9 @@
     }
 
     pub fn write(&mut self) -> io::Result<FileLockWriteGuard<'_>> {
+        #[cfg(target_os = "dragonfly")]
+        dfly_flock(&self.file, 0x02)?; // LOCK_EX
+        #[cfg(not(target_os = "dragonfly"))]
         self.file.lock()?;
         Ok(FileLockWriteGuard::new(&mut self.file))
     }
@@ -435,8 +438,25 @@
 impl Drop for FileLockWriteGuard<'_> {
     #[inline]
     fn drop(&mut self) {
+        #[cfg(target_os = "dragonfly")]
+        let _ = dfly_flock(self.guard, 0x08); // LOCK_UN
+        #[cfg(not(target_os = "dragonfly"))]
         let _ = self.guard.unlock().ok();
+    }
+}
+
+// std's File::lock() and unlock() return Unsupported on DragonFly.
+#[cfg(target_os = "dragonfly")]
+fn dfly_flock(file: &File, operation: i32) -> io::Result<()> {
+    use std::os::fd::AsRawFd;
+    unsafe extern "C" {
+        fn flock(fd: i32, operation: i32) -> i32;
     }
+    if unsafe { flock(file.as_raw_fd(), operation) } == 0 {
+        Ok(())
+    } else {
+        Err(io::Error::last_os_error())
+    }
 }
 
 #[cfg(all(unix, test))]
