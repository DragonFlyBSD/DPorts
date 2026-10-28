--- cargo-crates/dns-lookup-3.0.1/src/err.rs.orig
+++ cargo-crates/dns-lookup-3.0.1/src/err.rs
@@ -112,7 +112,7 @@
             c::EAI_MEMORY => LookupErrorKind::Memory,
             c::EAI_NONAME => LookupErrorKind::NoName,
             // FreeBSD has no EAI_NODATA, so don't match it on that platform.
-            #[cfg(not(any(target_os = "freebsd", target_os = "emscripten")))]
+            #[cfg(not(any(target_os = "freebsd", target_os = "dragonfly", target_os = "emscripten")))]
             c::EAI_NODATA => LookupErrorKind::NoData,
             c::EAI_SERVICE => LookupErrorKind::Service,
             c::EAI_SOCKTYPE => LookupErrorKind::Socktype,
