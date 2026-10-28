--- cargo-crates/rustix-1.1.4/src/backend/libc/net/sockopt.rs.orig
+++ cargo-crates/rustix-1.1.4/src/backend/libc/net/sockopt.rs
@@ -652,7 +652,7 @@
     setsockopt(fd, c::IPPROTO_IP, c::IP_ADD_MEMBERSHIP, mreqn)
 }
 
-#[cfg(any(apple, freebsdlike, linux_like, solarish, target_os = "aix"))]
+#[cfg(any(apple, target_os = "freebsd", linux_like, solarish, target_os = "aix"))]
 #[inline]
 pub(crate) fn set_ip_add_source_membership(
     fd: BorrowedFd<'_>,
@@ -664,7 +664,7 @@
     setsockopt(fd, c::IPPROTO_IP, c::IP_ADD_SOURCE_MEMBERSHIP, mreq_source)
 }
 
-#[cfg(any(apple, freebsdlike, linux_like, solarish, target_os = "aix"))]
+#[cfg(any(apple, target_os = "freebsd", linux_like, solarish, target_os = "aix"))]
 #[inline]
 pub(crate) fn set_ip_drop_source_membership(
     fd: BorrowedFd<'_>,
@@ -1324,7 +1324,7 @@
     }
 }
 
-#[cfg(any(apple, freebsdlike, linux_like, solarish, target_os = "aix"))]
+#[cfg(any(apple, target_os = "freebsd", linux_like, solarish, target_os = "aix"))]
 #[inline]
 fn to_imr_source(
     multiaddr: &Ipv4Addr,
