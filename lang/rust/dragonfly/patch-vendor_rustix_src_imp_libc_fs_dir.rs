--- vendor/rustix/src/imp/libc/fs/dir.rs.orig	2022-09-19 15:35:02 UTC
+++ vendor/rustix/src/imp/libc/fs/dir.rs
@@ -25,6 +25,7 @@ use alloc::borrow::ToOwned;
     target_os = "l4re",
     target_os = "linux",
     target_os = "openbsd",
+    target_os = "dragonfly",
 )))]
 use c::dirent as libc_dirent;
 #[cfg(not(any(
@@ -106,7 +107,7 @@ impl Dir {
             unsafe {
                 // We have our own copy of OpenBSD's dirent; check that the
                 // layout minimally matches libc's.
-                #[cfg(target_os = "openbsd")]
+                #[cfg(any(target_os = "openbsd", target_os = "dragonfly"))]
                 check_dirent_layout(&*dirent_ptr);
 
                 let result = DirEntry {
@@ -172,10 +173,18 @@ unsafe fn read_dirent(input: &libc_diren
     )))]
     let d_ino = input.d_ino;
 
-    #[cfg(any(target_os = "freebsd", target_os = "netbsd", target_os = "openbsd"))]
+    #[cfg(any(
+        target_os = "freebsd",
+	target_os = "netbsd",
+	target_os = "openbsd",
+	target_os = "dragonfly",
+    ))]
     let d_fileno = input.d_fileno;
 
-    #[cfg(not(target_os = "wasi"))]
+    #[cfg(not(any(
+	target_os = "wasi",
+	target_os = "dragonfly"
+    )))]
     let d_reclen = input.d_reclen;
 
     #[cfg(any(
@@ -184,6 +193,7 @@ unsafe fn read_dirent(input: &libc_diren
         target_os = "openbsd",
         target_os = "ios",
         target_os = "macos",
+        target_os = "dragonfly",
     ))]
     let d_namlen = input.d_namlen;
 
@@ -213,9 +223,17 @@ unsafe fn read_dirent(input: &libc_diren
             target_os = "openbsd",
         )))]
         d_ino,
-        #[cfg(any(target_os = "freebsd", target_os = "netbsd", target_os = "openbsd"))]
+        #[cfg(any(
+	    target_os = "freebsd",
+	    target_os = "netbsd",
+	    target_os = "openbsd",
+	    target_os = "dragonfly"
+	))]
         d_fileno,
-        #[cfg(not(target_os = "wasi"))]
+        #[cfg(not(any(
+	    target_os = "wasi",
+	    target_os = "dragonfly"
+        )))]
         d_reclen,
         #[cfg(any(
             target_os = "freebsd",
@@ -223,6 +241,7 @@ unsafe fn read_dirent(input: &libc_diren
             target_os = "macos",
             target_os = "netbsd",
             target_os = "openbsd",
+            target_os = "dragonfly",
         ))]
         d_namlen,
         #[cfg(any(target_os = "ios", target_os = "macos"))]
@@ -239,6 +258,10 @@ unsafe fn read_dirent(input: &libc_diren
         d_name: zeroed(),
         #[cfg(target_os = "openbsd")]
         __d_padding: zeroed(),
+        #[cfg(target_os = "dragonfly")]
+        __unused1: zeroed(),
+        #[cfg(target_os = "dragonfly")]
+        __unused2: zeroed()
     };
 
     // Copy from d_name, reading up to and including the first NUL.
@@ -338,6 +361,65 @@ impl DirEntry {
     }
 }
 
+/// libc's DragonFly BSD `dirent` has a private field so we can't construct it
+/// directly, so we declare it ourselves to make all fields accessible.
+/// Shamelessly copied from OpenBSD code
+#[cfg(target_os = "dragonfly")]
+#[repr(C)]
+#[derive(Debug)]
+struct libc_dirent {
+    d_fileno: c::ino_t,
+    d_namlen: u16,
+    d_type: u8,
+    __unused1: u8,
+    __unused2: u32,
+    d_name: [c::c_char; 256],
+}
+
+/// We have our own copy of DragonFly BSD's dirent; check that the layout
+/// minimally matches libc's.
+/// Shamelessly copied from OpenBSD code
+#[cfg(target_os = "dragonfly")]
+fn check_dirent_layout(dirent: &c::dirent) {
+    use crate::utils::as_ptr;
+    use core::mem::{align_of, size_of};
+
+    // Check that the basic layouts match.
+    assert_eq!(size_of::<libc_dirent>(), size_of::<c::dirent>());
+    assert_eq!(align_of::<libc_dirent>(), align_of::<c::dirent>());
+
+    // Check that the field offsets match.
+    assert_eq!(
+        {
+            let z = libc_dirent {
+                d_fileno: 0_u64,
+                d_namlen: 0_u16,
+                d_type: 0_u8,
+		__unused1: 0_u8,
+		__unused2: 0_u32,
+                d_name: [0 as c::c_char; 256],
+            };
+            let base = as_ptr(&z) as usize;
+            (
+                (as_ptr(&z.d_fileno) as usize) - base,
+                (as_ptr(&z.d_namlen) as usize) - base,
+                (as_ptr(&z.d_type) as usize) - base,
+                (as_ptr(&z.d_name) as usize) - base,
+            )
+        },
+        {
+            let z = dirent;
+            let base = as_ptr(z) as usize;
+            (
+                (as_ptr(&z.d_fileno) as usize) - base,
+                (as_ptr(&z.d_namlen) as usize) - base,
+                (as_ptr(&z.d_type) as usize) - base,
+                (as_ptr(&z.d_name) as usize) - base,
+            )
+        }
+    );
+}
+
 /// libc's OpenBSD `dirent` has a private field so we can't construct it
 /// directly, so we declare it ourselves to make all fields accessible.
 #[cfg(target_os = "openbsd")]
