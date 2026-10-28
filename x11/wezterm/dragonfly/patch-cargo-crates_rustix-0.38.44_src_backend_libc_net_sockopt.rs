--- cargo-crates/rustix-0.38.44/src/backend/libc/net/sockopt.rs.orig
+++ cargo-crates/rustix-0.38.44/src/backend/libc/net/sockopt.rs
@@ -558,7 +558,7 @@
     setsockopt(fd, c::IPPROTO_IP, c::IP_ADD_MEMBERSHIP, mreqn)
 }
 
-#[cfg(any(apple, freebsdlike, linux_like, solarish, target_os = "aix"))]
+#[cfg(any(apple, target_os = "freebsd", linux_like, solarish, target_os = "aix"))]
 #[inline]
 pub(crate) fn set_ip_add_source_membership(
     fd: BorrowedFd<'_>,
@@ -570,7 +570,7 @@
     setsockopt(fd, c::IPPROTO_IP, c::IP_ADD_SOURCE_MEMBERSHIP, mreq_source)
 }
 
-#[cfg(any(apple, freebsdlike, linux_like, solarish, target_os = "aix"))]
+#[cfg(any(apple, target_os = "freebsd", linux_like, solarish, target_os = "aix"))]
 #[inline]
 pub(crate) fn set_ip_drop_source_membership(
     fd: BorrowedFd<'_>,
@@ -1166,7 +1166,7 @@
     }
 }
 
-#[cfg(any(apple, freebsdlike, linux_like, solarish, target_os = "aix"))]
+#[cfg(any(apple, target_os = "freebsd", linux_like, solarish, target_os = "aix"))]
 #[inline]
 fn to_imr_source(
     multiaddr: &Ipv4Addr,
