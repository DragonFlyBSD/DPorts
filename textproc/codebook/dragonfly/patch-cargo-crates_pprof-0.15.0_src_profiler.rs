--- cargo-crates/pprof-0.15.0/src/profiler.rs.orig
+++ cargo-crates/pprof-0.15.0/src/profiler.rs
@@ -238,7 +238,7 @@
                 let errno = *libc::__errno();
                 Self(errno)
             }
-            #[cfg(target_os = "linux")]
+            #[cfg(any(target_os = "linux", target_os = "dragonfly"))]
             {
                 let errno = *libc::__errno_location();
                 Self(errno)
@@ -259,7 +259,7 @@
             {
                 *libc::__errno() = self.0;
             }
-            #[cfg(target_os = "linux")]
+            #[cfg(any(target_os = "linux", target_os = "dragonfly"))]
             {
                 *libc::__errno_location() = self.0;
             }
@@ -304,7 +304,10 @@
                 let addr =
                     unsafe { (*ucontext).uc_mcontext.gregs[libc::REG_RIP as usize] as usize };
 
-                #[cfg(all(target_arch = "x86_64", target_os = "freebsd"))]
+                #[cfg(all(
+                    target_arch = "x86_64",
+                    any(target_os = "freebsd", target_os = "dragonfly")
+                ))]
                 let addr = unsafe { (*ucontext).uc_mcontext.mc_rip as usize };
 
                 #[cfg(all(target_arch = "x86_64", target_os = "macos"))]
