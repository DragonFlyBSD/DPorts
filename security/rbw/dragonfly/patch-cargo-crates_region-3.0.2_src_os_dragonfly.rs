--- cargo-crates/region-3.0.2/src/os/dragonfly.rs.orig
+++ cargo-crates/region-3.0.2/src/os/dragonfly.rs
@@ -0,0 +1,24 @@
+use crate::{Error, Region, Result};
+use std::io;
+
+// DragonFly has neither kinfo_getvmmap(3) nor a KERN_PROC_VMMAP sysctl, so
+// region queries are not supported; allocation, protection and locking are.
+pub struct QueryIter;
+
+impl QueryIter {
+  pub fn new(_origin: *const (), _size: usize) -> Result<QueryIter> {
+    Err(Error::SystemCall(io::Error::from_raw_os_error(libc::ENOSYS)))
+  }
+
+  pub fn upper_bound(&self) -> usize {
+    0
+  }
+}
+
+impl Iterator for QueryIter {
+  type Item = Result<Region>;
+
+  fn next(&mut self) -> Option<Self::Item> {
+    None
+  }
+}
