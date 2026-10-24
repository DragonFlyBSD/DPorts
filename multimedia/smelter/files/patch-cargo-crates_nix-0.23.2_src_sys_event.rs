-- Fix compilation on FreeBSD by adapting nix 0.23.2's kevent definitions to
-- the modern libc crate, which uses i64 for data and requires the ext field.
-- This follows the same approach as nix-rust/nix PR #1716, which future-proofed
-- the kevent ABI for FreeBSD.
-- See: https://github.com/nix-rust/nix/pull/1716
--
--- cargo-crates/nix-0.23.2/src/sys/event.rs.orig	2006-07-24 01:21:28 UTC
+++ cargo-crates/nix-0.23.2/src/sys/event.rs
@@ -21,12 +21,12 @@ type type_of_udata = *mut libc::c_void;
           target_os = "ios", target_os = "macos",
           target_os = "openbsd"))]
 type type_of_udata = *mut libc::c_void;
-#[cfg(any(target_os = "dragonfly", target_os = "freebsd",
+#[cfg(any(target_os = "dragonfly",
           target_os = "ios", target_os = "macos"))]
 type type_of_data = intptr_t;
 #[cfg(any(target_os = "netbsd"))]
 type type_of_udata = intptr_t;
-#[cfg(any(target_os = "netbsd", target_os = "openbsd"))]
+#[cfg(any(target_os = "netbsd", target_os = "openbsd", target_os = "freebsd"))]
 type type_of_data = i64;
 
 #[cfg(target_os = "netbsd")]
@@ -229,7 +229,9 @@ impl KEvent {
             flags: flags.bits(),
             fflags: fflags.bits(),
             data: data as type_of_data,
-            udata: udata as type_of_udata
+            udata: udata as type_of_udata,
+            #[cfg(target_os = "freebsd")]
+            ext: [0; 4],
         } }
     }
 
