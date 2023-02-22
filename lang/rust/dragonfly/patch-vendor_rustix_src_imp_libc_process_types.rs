--- vendor/rustix/src/imp/libc/process/types.rs.orig	2022-09-19 15:35:02 UTC
+++ vendor/rustix/src/imp/libc/process/types.rs
@@ -197,6 +197,7 @@ pub enum Signal {
         target_os = "macos",
         target_os = "netbsd",
         target_os = "openbsd",
+        target_os = "dragonfly",
         all(
             any(target_os = "android", target_os = "linux"),
             any(target_arch = "mips", target_arch = "mips64"),
@@ -239,6 +240,7 @@ pub enum Signal {
         target_os = "macos",
         target_os = "netbsd",
         target_os = "openbsd",
+        target_os = "dragonfly",
     )))]
     #[doc(alias = "Pwr")]
     Power = c::SIGPWR,
@@ -274,6 +276,7 @@ impl Signal {
                 target_os = "macos",
                 target_os = "netbsd",
                 target_os = "openbsd",
+                target_os = "dragonfly",
                 all(
                     any(target_os = "android", target_os = "linux"),
                     any(target_arch = "mips", target_arch = "mips64"),
@@ -299,6 +302,7 @@ impl Signal {
                 target_os = "macos",
                 target_os = "netbsd",
                 target_os = "openbsd",
+                target_os = "dragonfly",
             )))]
             c::SIGPWR => Some(Self::Power),
             c::SIGSYS => Some(Self::Sys),
@@ -354,8 +358,12 @@ pub(crate) fn raw_cpu_set_new() -> RawCp
 
 #[cfg(any(
     target_os = "android",
-    target_os = "dragonfly",
     target_os = "fuchsia",
     target_os = "linux",
 ))]
+
 pub(crate) const CPU_SETSIZE: usize = c::CPU_SETSIZE as usize;
+
+/// XXX: This is wrong, but can't do much else right now
+#[cfg(target_os = "dragonfly")]
+pub(crate) const CPU_SETSIZE: usize = 256;
