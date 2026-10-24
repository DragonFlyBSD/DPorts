--- third_party/rust/mtu/build.rs.orig	2026-09-04 00:01:30 UTC
+++ third_party/rust/mtu/build.rs
@@ -14,6 +14,7 @@ fn main() {
         bsd: {
             any(
                 target_os = "freebsd",
+                target_os = "dragonfly",
                 target_os = "openbsd",
                 target_os = "netbsd",
                 target_os = "solaris"
