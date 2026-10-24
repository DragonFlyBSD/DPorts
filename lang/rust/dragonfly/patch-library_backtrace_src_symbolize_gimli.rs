--- library/backtrace/src/symbolize/gimli.rs.orig
+++ library/backtrace/src/symbolize/gimli.rs
@@ -35,6 +35,7 @@
     } else if #[cfg(any(
         target_os = "android",
         target_os = "freebsd",
+        target_os = "dragonfly",
         target_os = "fuchsia",
         target_os = "haiku",
         target_os = "hurd",
@@ -226,6 +227,7 @@
             target_os = "linux",
             target_os = "fuchsia",
             target_os = "freebsd",
+            target_os = "dragonfly",
             target_os = "hurd",
             target_os = "openbsd",
             target_os = "netbsd",
