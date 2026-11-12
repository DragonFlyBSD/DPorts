--- third_party/rust/mtu/build.rs.orig	2026-10-22 23:18:00 UTC
+++ third_party/rust/mtu/build.rs
@@ -9,6 +9,7 @@
         bsd: {
             any(
                 target_os = "freebsd",
+                target_os = "dragonfly",
                 target_os = "openbsd",
                 target_os = "netbsd",
                 target_os = "solaris"
