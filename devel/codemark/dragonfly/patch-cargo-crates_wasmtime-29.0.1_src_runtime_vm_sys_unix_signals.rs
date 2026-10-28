--- cargo-crates/wasmtime-29.0.1/src/runtime/vm/sys/unix/signals.rs.orig
+++ cargo-crates/wasmtime-29.0.1/src/runtime/vm/sys/unix/signals.rs
@@ -81,7 +81,7 @@
 
     // Sometimes we need to handle SIGBUS too:
     // - On Darwin, guard page accesses are raised as SIGBUS.
-    if cfg!(target_os = "macos") || cfg!(target_os = "freebsd") {
+    if cfg!(target_os = "macos") || cfg!(target_os = "freebsd") || cfg!(target_os = "dragonfly") {
         f(addr_of_mut!(PREV_SIGBUS), libc::SIGBUS);
     }
 
@@ -315,7 +315,7 @@
                 pc: (*cx.uc_mcontext).__ss.__pc as usize,
                 fp: (*cx.uc_mcontext).__ss.__fp as usize,
             }
-        } else if #[cfg(all(target_os = "freebsd", target_arch = "x86_64"))] {
+        } else if #[cfg(all(any(target_os = "freebsd", target_os = "dragonfly"), target_arch = "x86_64"))] {
             let cx = &*(cx as *const libc::ucontext_t);
             TrapRegisters {
                 pc: cx.uc_mcontext.mc_rip as usize,
