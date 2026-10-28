--- crates/simd/src/floating_f16.rs.orig
+++ crates/simd/src/floating_f16.rs
@@ -634,7 +634,7 @@
 
     #[cfg_attr(feature = "internal", simd_macros::public)]
     #[inline]
-    #[cfg(target_arch = "x86_64")]
+    #[cfg(all(target_arch = "x86_64", not(target_os = "dragonfly")))]
     #[crate::target_cpu(enable = "v4")]
     #[target_feature(enable = "avx512fp16")]
     fn reduce_sum_of_xy_v4_avx512fp16(lhs: &[f16], rhs: &[f16]) -> f32 {
@@ -649,7 +649,7 @@
         unsafe { f(n, a, b) }
     }
 
-    #[cfg(all(target_arch = "x86_64", test))]
+    #[cfg(all(target_arch = "x86_64", not(target_os = "dragonfly"), test))]
     #[test]
     #[cfg_attr(miri, ignore)]
     fn reduce_sum_of_xy_v4_avx512fp16_test() {
@@ -892,7 +892,7 @@
         }
     }
 
-    #[crate::multiversion(@"v4:avx512fp16", @"v4", @"v3", #[cfg(target_endian = "little")] @"a3.512", @"a2:fp16", "z17", "z16", "z15", "z14", "z13", "p9", "p8", "p7", "r1")]
+    #[crate::multiversion(#[cfg(not(target_os = "dragonfly"))] @"v4:avx512fp16", @"v4", @"v3", #[cfg(target_endian = "little")] @"a3.512", @"a2:fp16", "z17", "z16", "z15", "z14", "z13", "p9", "p8", "p7", "r1")]
     pub fn reduce_sum_of_xy(lhs: &[f16], rhs: &[f16]) -> f32 {
         assert!(lhs.len() == rhs.len());
         let n = lhs.len();
@@ -910,7 +910,7 @@
 
     #[cfg_attr(feature = "internal", simd_macros::public)]
     #[inline]
-    #[cfg(target_arch = "x86_64")]
+    #[cfg(all(target_arch = "x86_64", not(target_os = "dragonfly")))]
     #[crate::target_cpu(enable = "v4")]
     #[target_feature(enable = "avx512fp16")]
     fn reduce_sum_of_d2_v4_avx512fp16(lhs: &[f16], rhs: &[f16]) -> f32 {
@@ -925,7 +925,7 @@
         unsafe { f(n, a, b) }
     }
 
-    #[cfg(all(target_arch = "x86_64", test))]
+    #[cfg(all(target_arch = "x86_64", not(target_os = "dragonfly"), test))]
     #[test]
     #[cfg_attr(miri, ignore)]
     fn reduce_sum_of_d2_v4_avx512fp16_test() {
@@ -1177,7 +1177,7 @@
         }
     }
 
-    #[crate::multiversion(@"v4:avx512fp16", @"v4", @"v3", #[cfg(target_endian = "little")] @"a3.512", @"a2:fp16", "z17", "z16", "z15", "z14", "z13", "p9", "p8", "p7", "r1")]
+    #[crate::multiversion(#[cfg(not(target_os = "dragonfly"))] @"v4:avx512fp16", @"v4", @"v3", #[cfg(target_endian = "little")] @"a3.512", @"a2:fp16", "z17", "z16", "z15", "z14", "z13", "p9", "p8", "p7", "r1")]
     pub fn reduce_sum_of_d2(lhs: &[f16], rhs: &[f16]) -> f32 {
         assert!(lhs.len() == rhs.len());
         let n = lhs.len();
