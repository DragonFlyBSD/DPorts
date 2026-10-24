--- cargo-crates/rustix-1.1.4/src/pty.rs.orig
+++ cargo-crates/rustix-1.1.4/src/pty.rs
@@ -125,6 +125,7 @@
         apple,
         linux_like,
         target_os = "freebsd",
+        target_os = "dragonfly",
         target_os = "fuchsia",
         target_os = "illumos"
     )
