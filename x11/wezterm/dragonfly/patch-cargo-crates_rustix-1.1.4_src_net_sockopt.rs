--- cargo-crates/rustix-1.1.4/src/net/sockopt.rs.orig
+++ cargo-crates/rustix-1.1.4/src/net/sockopt.rs
@@ -1079,7 +1079,7 @@
 /// See the [module-level documentation] for more.
 ///
 /// [module-level documentation]: self#references-for-get_ip_-and-set_ip_-functions
-#[cfg(any(apple, freebsdlike, linux_like, solarish, target_os = "aix"))]
+#[cfg(any(apple, target_os = "freebsd", linux_like, solarish, target_os = "aix"))]
 #[inline]
 #[doc(alias = "IP_ADD_SOURCE_MEMBERSHIP")]
 pub fn set_ip_add_source_membership<Fd: AsFd>(
@@ -1101,7 +1101,7 @@
 /// See the [module-level documentation] for more.
 ///
 /// [module-level documentation]: self#references-for-get_ip_-and-set_ip_-functions
-#[cfg(any(apple, freebsdlike, linux_like, solarish, target_os = "aix"))]
+#[cfg(any(apple, target_os = "freebsd", linux_like, solarish, target_os = "aix"))]
 #[inline]
 #[doc(alias = "IP_DROP_SOURCE_MEMBERSHIP")]
 pub fn set_ip_drop_source_membership<Fd: AsFd>(
