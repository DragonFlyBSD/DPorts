--- cargo-crates/zeromq-src-0.2.6+4.3.4/src/lib.rs.orig	2026-10-26 01:32:26 UTC
+++ cargo-crates/zeromq-src-0.2.6+4.3.4/src/lib.rs
@@ -415,7 +415,7 @@ impl Build {
             if target.contains("musl") {
                 has_strlcpy = true;
             }
-        } else if target.contains("freebsd") {
+        } else if target.contains("freebsd") || target.contains("dragonfly") {
             create_platform_hpp_shim(&mut build);
             build.define("ZMQ_IOTHREAD_POLLER_USE_KQUEUE", "1");
             build.define("ZMQ_POLL_BASED_ON_POLL", "1");
