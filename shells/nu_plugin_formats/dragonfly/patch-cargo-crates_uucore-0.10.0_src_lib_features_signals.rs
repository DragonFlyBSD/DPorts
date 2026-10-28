--- cargo-crates/uucore-0.10.0/src/lib/features/signals.rs.orig
+++ cargo-crates/uucore-0.10.0/src/lib/features/signals.rs
@@ -85,7 +85,7 @@
 
 */
 
-#[cfg(any(target_vendor = "apple", target_os = "freebsd"))]
+#[cfg(any(target_vendor = "apple", target_os = "freebsd", target_os = "dragonfly"))]
 pub static ALL_SIGNALS: [&str; 32] = [
     "EXIT", "HUP", "INT", "QUIT", "ILL", "TRAP", "ABRT", "EMT", "FPE", "KILL", "BUS", "SEGV",
     "SYS", "PIPE", "ALRM", "TERM", "URG", "STOP", "TSTP", "CONT", "CHLD", "TTIN", "TTOU", "IO",
