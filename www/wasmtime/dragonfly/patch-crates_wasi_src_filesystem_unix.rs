--- crates/wasi/src/filesystem/unix.rs.orig
+++ crates/wasi/src/filesystem/unix.rs
@@ -17,6 +17,7 @@
 pub(crate) fn get_flags(file: &File) -> io::Result<DescriptorFlags> {
     let flags = fcntl_getfl(file)?;
     let mut ret = DescriptorFlags::empty();
+    #[cfg(not(target_os = "dragonfly"))]
     ret.set(
         DescriptorFlags::REQUESTED_WRITE_SYNC,
         flags.contains(OFlags::DSYNC),
@@ -25,7 +26,7 @@
         DescriptorFlags::FILE_INTEGRITY_SYNC,
         flags.contains(OFlags::SYNC),
     );
-    #[cfg(not(any(target_vendor = "apple", target_os = "freebsd")))]
+    #[cfg(not(any(target_vendor = "apple", target_os = "freebsd", target_os = "dragonfly")))]
     ret.set(
         DescriptorFlags::DATA_INTEGRITY_SYNC,
         flags.contains(OFlags::RSYNC),
