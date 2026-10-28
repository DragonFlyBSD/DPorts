--- cargo-crates/trash-5.2.5/src/freedesktop.rs.orig
+++ cargo-crates/trash-5.2.5/src/freedesktop.rs
@@ -809,7 +809,12 @@
         }
     }
     let mut fs_infos: *mut libc::statfs = std::ptr::null_mut();
-    let count = unsafe { libc::getmntinfo(&mut fs_infos, libc::MNT_WAIT) };
+    // The libc crate has no MNT_WAIT for DragonFly; <sys/mount.h> has 1.
+    #[cfg(target_os = "dragonfly")]
+    const MNT_WAIT: libc::c_int = 1;
+    #[cfg(not(target_os = "dragonfly"))]
+    const MNT_WAIT: libc::c_int = libc::MNT_WAIT;
+    let count = unsafe { libc::getmntinfo(&mut fs_infos, MNT_WAIT) };
     if count < 1 {
         return Ok(Vec::new());
     }
