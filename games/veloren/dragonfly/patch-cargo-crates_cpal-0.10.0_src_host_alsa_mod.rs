--- cargo-crates/cpal-0.10.0/src/host/alsa/mod.rs.orig	2019-07-05 18:30:36 UTC
+++ cargo-crates/cpal-0.10.0/src/host/alsa/mod.rs
@@ -34,7 +34,7 @@ pub type SupportedOutputFormats = VecInt
 
 mod enumerate;
 
-/// The default linux and freebsd host type.
+/// The default linux, dragonfly and freebsd host type.
 #[derive(Debug)]
 pub struct Host;
 
@@ -50,7 +50,7 @@ impl HostTrait for Host {
     type EventLoop = EventLoop;
 
     fn is_available() -> bool {
-        // Assume ALSA is always available on linux/freebsd.
+        // Assume ALSA is always available on linux/dragonfly/freebsd.
         true
     }
 
