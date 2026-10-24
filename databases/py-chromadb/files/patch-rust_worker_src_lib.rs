-- Increase the Rust recursion limit for the chroma-worker crate so it can
-- compile its deeply nested async types on FreeBSD without overflowing the
-- compiler's trait/query solver depth limit.
-- This is needed because rustc 1.96.0 hits "queries overflow the depth limit!"
-- when computing the layout of async blocks in execution/operators.
--- rust/worker/src/lib.rs.orig	2026-07-12 02:43:26 UTC
+++ rust/worker/src/lib.rs
@@ -1,3 +1,5 @@
+#![recursion_limit = "256"]
+
 mod compactor;
 mod server;
 mod utils;
