--- cargo-crates/nix-0.11.0/src/errno.rs.orig	2018-01-30 17:00:29 UTC
+++ cargo-crates/nix-0.11.0/src/errno.rs
@@ -522,9 +522,6 @@ fn desc(errno: Errno) -> &'static str {
         EIPSEC          => "IPsec processing failure",
 
         #[cfg(target_os = "dragonfly")]
-        EUNUSED94 | EUNUSED95 | EUNUSED96 | EUNUSED97 | EUNUSED98 => "Unused",
-
-        #[cfg(target_os = "dragonfly")]
         EASYNC          => "Async",
     }
 }
@@ -1373,11 +1370,6 @@ mod consts {
         ENOLINK         = libc::ENOLINK,
         EPROTO          = libc::EPROTO,
         ENOMEDIUM       = libc::ENOMEDIUM,
-        EUNUSED94       = libc::EUNUSED94,
-        EUNUSED95       = libc::EUNUSED95,
-        EUNUSED96       = libc::EUNUSED96,
-        EUNUSED97       = libc::EUNUSED97,
-        EUNUSED98       = libc::EUNUSED98,
         EASYNC          = libc::EASYNC,
     }
 
@@ -1485,11 +1477,6 @@ mod consts {
             libc::ENOLINK => ENOLINK,
             libc::EPROTO => EPROTO,
             libc::ENOMEDIUM => ENOMEDIUM,
-            libc::EUNUSED94 => EUNUSED94,
-            libc::EUNUSED95 => EUNUSED95,
-            libc::EUNUSED96 => EUNUSED96,
-            libc::EUNUSED97 => EUNUSED97,
-            libc::EUNUSED98 => EUNUSED98,
             libc::EASYNC => EASYNC,
             _   => UnknownErrno,
         }
