--- vendor/libc/src/lib.rs.orig	2019-11-04 17:34:41 UTC
+++ vendor/libc/src/lib.rs
@@ -21,7 +21,7 @@
     feature = "rustc-dep-of-std",
     feature(cfg_target_vendor, link_cfg, no_core)
 )]
-#![cfg_attr(libc_thread_local, feature(thread_local))]
+#![feature(thread_local)]
 // Enable extra lints:
 #![cfg_attr(feature = "extra_traits", deny(missing_debug_implementations))]
 #![deny(missing_copy_implementations, safe_packed_borrows)]
