--- crates/simd/build.rs.orig
+++ crates/simd/build.rs
@@ -33,7 +33,9 @@
             build.opt_level(3);
             build.compile("simd_cshim");
         }
-        "x86_64" => {
+        // DragonFly: AVX-512 is unsupported (and base binutils cannot
+        // assemble AVX-512 FP16), so the FP16 shim is not built there.
+        "x86_64" if var("CARGO_CFG_TARGET_OS")? != "dragonfly" => {
             let mut build = cc::Build::new();
             build.file("./cshim/x86_64_fp16.c");
             build.opt_level(3);
