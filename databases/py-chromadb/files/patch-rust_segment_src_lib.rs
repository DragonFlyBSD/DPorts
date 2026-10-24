-- Increase the Rust recursion limit for the chroma-segment crate so it can
-- compile its deeply nested async types on FreeBSD without overflowing the
-- compiler's trait/query solver depth limit.
-- This is needed because rustc 1.96.0 hits "queries overflow the depth limit!"
-- when computing the layout of async fn bodies in blockfile_metadata.
--- rust/segment/src/lib.rs.orig	2006-07-24 01:21:28 UTC
+++ rust/segment/src/lib.rs
@@ -1,3 +1,5 @@
+#![recursion_limit = "256"]
+
 pub mod blockfile_metadata;
 pub mod blockfile_record;
 pub mod bloom_filter;
