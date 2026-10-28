--- cargo-crates/rustix-0.38.44/src/net/sockopt.rs.orig
+++ cargo-crates/rustix-0.38.44/src/net/sockopt.rs
@@ -812,7 +812,7 @@
 /// See the [module-level documentation] for more.
 ///
 /// [module-level documentation]: self#references-for-get_ip_-and-set_ip_-functions
-#[cfg(any(apple, freebsdlike, linux_like, solarish, target_os = "aix"))]
+#[cfg(any(apple, target_os = "freebsd", linux_like, solarish, target_os = "aix"))]
 #[inline]
 #[doc(alias = "IP_ADD_SOURCE_MEMBERSHIP")]
 pub fn set_ip_add_source_membership<Fd: AsFd>(
@@ -834,7 +834,7 @@
 /// See the [module-level documentation] for more.
 ///
 /// [module-level documentation]: self#references-for-get_ip_-and-set_ip_-functions
-#[cfg(any(apple, freebsdlike, linux_like, solarish, target_os = "aix"))]
+#[cfg(any(apple, target_os = "freebsd", linux_like, solarish, target_os = "aix"))]
 #[inline]
 #[doc(alias = "IP_DROP_SOURCE_MEMBERSHIP")]
 pub fn set_ip_drop_source_membership<Fd: AsFd>(
