--- cargo-crates/ring-0.16.15/src/rand.rs.orig	2021-06-16 15:05:38.469378000 +0200
+++ cargo-crates/ring-0.16.15/src/rand.rs	2021-06-16 15:06:53.727659000 +0200
@@ -157,7 +157,7 @@
 impl sealed::SecureRandom for SystemRandom {
     #[inline(always)]
     fn fill_impl(&self, dest: &mut [u8]) -> Result<(), error::Unspecified> {
-        fill_impl(dest)
+        self.fill_impl(dest)
     }
 }
 
