--- cargo-crates/system-interface-0.27.2/src/fs/file_io_ext.rs.orig
+++ cargo-crates/system-interface-0.27.2/src/fs/file_io_ext.rs
@@ -7,6 +7,7 @@
     target_os = "ios",
     target_os = "macos",
     target_os = "netbsd",
+    target_os = "dragonfly",
     target_os = "openbsd",
     target_os = "redox",
 )))]
@@ -16,6 +17,7 @@
 #[cfg(not(any(
     windows,
     target_os = "netbsd",
+    target_os = "dragonfly",
     target_os = "redox",
     target_os = "openbsd"
 )))]
@@ -35,6 +37,7 @@
     target_os = "ios",
     target_os = "macos",
     target_os = "netbsd",
+    target_os = "dragonfly",
     target_os = "openbsd",
     target_os = "redox"
 )))]
@@ -61,6 +64,7 @@
     target_os = "ios",
     target_os = "macos",
     target_os = "netbsd",
+    target_os = "dragonfly",
     target_os = "openbsd",
     target_os = "redox"
 ))]
@@ -407,6 +411,7 @@
         target_os = "ios",
         target_os = "macos",
         target_os = "netbsd",
+        target_os = "dragonfly",
         target_os = "openbsd",
         target_os = "redox"
     )))]
@@ -441,7 +446,7 @@
         Ok(fcntl_rdadvise(self, offset, len)?)
     }
 
-    #[cfg(any(target_os = "netbsd", target_os = "redox", target_os = "openbsd"))]
+    #[cfg(any(target_os = "netbsd", target_os = "dragonfly", target_os = "redox", target_os = "openbsd"))]
     #[inline]
     fn advise(&self, _offset: u64, _len: u64, _advice: Advice) -> io::Result<()> {
         // Netbsd lacks `posix_fadvise` and doesn't have an obvious replacement,
@@ -449,7 +454,7 @@
         Ok(())
     }
 
-    #[cfg(not(any(target_os = "netbsd", target_os = "redox", target_os = "openbsd")))]
+    #[cfg(not(any(target_os = "netbsd", target_os = "dragonfly", target_os = "redox", target_os = "openbsd")))]
     #[inline]
     fn allocate(&self, offset: u64, len: u64) -> io::Result<()> {
         Ok(fallocate(self, FallocateFlags::empty(), offset, len)?)
@@ -460,6 +465,12 @@
         todo!("NetBSD 7.0 supports posix_fallocate; add bindings for it")
     }
 
+    #[cfg(target_os = "dragonfly")]
+    fn allocate(&self, _offset: u64, _len: u64) -> io::Result<()> {
+        // rustix has no posix_fallocate binding for DragonFly
+        Err(io::ErrorKind::Unsupported.into())
+    }
+
     #[cfg(target_os = "openbsd")]
     fn allocate(&self, _offset: u64, _len: u64) -> io::Result<()> {
         todo!("OpenBSD does not support posix_fallocate; figure out what to do")
