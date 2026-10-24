-- Increase the Rust recursion limit for the chroma-index crate so it can
-- compile its deeply nested async types on FreeBSD without overflowing the
-- compiler's trait/query solver depth limit.
-- This is needed because rustc 1.96.0 hits "queries overflow the depth limit!"
-- when computing the layout of async fn bodies in metadata/types.
--- rust/index/src/lib.rs.orig	2026-07-15 01:13:52 UTC
+++ rust/index/src/lib.rs
@@ -1,3 +1,5 @@
+#![recursion_limit = "256"]
+
 pub mod config;
 pub mod fulltext;
 mod hnsw;
