-- Increase Rust query recursion limit for the chroma-blockstore crate so it
-- can compile its deeply nested async generic types on FreeBSD without
-- overflowing the compiler's trait/query solver depth limit.
-- This is needed because rustc 1.96.0 hits "queries overflow the depth limit!"
-- when computing the layout of async fn bodies in this crate.
--- rust/blockstore/src/lib.rs.orig	2026-07-15 01:09:10 UTC
+++ rust/blockstore/src/lib.rs
@@ -1,3 +1,5 @@
+#![recursion_limit = "256"]
+
 pub mod types;
 
 pub mod arrow;
