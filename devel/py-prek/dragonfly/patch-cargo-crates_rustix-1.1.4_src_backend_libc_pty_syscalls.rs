--- cargo-crates/rustix-1.1.4/src/backend/libc/pty/syscalls.rs.orig
+++ cargo-crates/rustix-1.1.4/src/backend/libc/pty/syscalls.rs
@@ -10,6 +10,7 @@
         apple,
         linux_like,
         target_os = "freebsd",
+        target_os = "dragonfly",
         target_os = "fuchsia",
         target_os = "illumos"
     )
@@ -36,6 +37,7 @@
         apple,
         linux_like,
         target_os = "freebsd",
+        target_os = "dragonfly",
         target_os = "fuchsia",
         target_os = "illumos"
     )
@@ -70,6 +72,23 @@
             }
         };
 
+        // DragonFly has only the non-reentrant `ptsname`.
+        #[cfg(target_os = "dragonfly")]
+        let r = unsafe {
+            let name = c::ptsname(borrowed_fd(fd));
+            if name.is_null() {
+                libc_errno::errno().0
+            } else {
+                let bytes = CStr::from_ptr(name).to_bytes_with_nul();
+                if bytes.len() > buffer.len() {
+                    c::ERANGE
+                } else {
+                    buffer[..bytes.len()].copy_from_slice(bytes);
+                    0
+                }
+            }
+        };
+
         // macOS 10.13.4 has `ptsname_r`; use it if we have it, otherwise fall
         // back to calling the underlying ioctl directly.
         #[cfg(apple)]
