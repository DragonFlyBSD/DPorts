--- cargo-crates/polling-2.2.0/src/kqueue.rs.orig
+++ cargo-crates/polling-2.2.0/src/kqueue.rs
@@ -85,7 +85,6 @@
                 fflags: 0,
                 data: 0,
                 udata: ev.key as _,
-                ext: [0, 0, 0, 0],
             },
             libc::kevent {
                 ident: fd as _,
@@ -94,7 +93,6 @@
                 fflags: 0,
                 data: 0,
                 udata: ev.key as _,
-                ext: [0, 0, 0, 0],
             },
         ];
 
@@ -205,7 +203,6 @@
             fflags: 0,
             data: 0,
             udata: 0 as _,
-            ext: [0, 0, 0, 0],
         };
         let list = vec![ev; 1000].into_boxed_slice();
         let len = 0;
