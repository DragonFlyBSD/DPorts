--- hwy/detect_targets.h.orig
+++ hwy/detect_targets.h
@@ -385,6 +385,18 @@
 #endif  // HWY_ARCH_S390X
 #endif  // HWY_BROKEN_Z14
 
+// DragonFly does not support AVX-512: the kernel does not enable its XCR0
+// state, and base binutils cannot assemble AVX-512 FP16. Never compile or
+// dispatch to a 512-bit target there.
+#ifndef HWY_BROKEN_DRAGONFLY  // allow override
+#if defined(__DragonFly__)
+#define HWY_BROKEN_DRAGONFLY \
+  (HWY_AVX3 | HWY_AVX3_DL | HWY_AVX3_ZEN4 | HWY_AVX3_SPR | HWY_AVX10_2)
+#else
+#define HWY_BROKEN_DRAGONFLY 0
+#endif
+#endif  // HWY_BROKEN_DRAGONFLY
+
 // Allow the user to override this without any guarantee of success.
 #ifndef HWY_BROKEN_TARGETS
 
@@ -394,7 +406,8 @@
    HWY_BROKEN_ARM7_BIG_ENDIAN | HWY_BROKEN_ARM7_WITHOUT_VFP4 |             \
    HWY_BROKEN_NEON_BF16 | HWY_BROKEN_SVE | HWY_BROKEN_SVE2 |               \
    HWY_BROKEN_SVE2_128 | HWY_BROKEN_PPC10 | HWY_BROKEN_PPC_32BIT |         \
-   HWY_BROKEN_RVV | HWY_BROKEN_LOONGARCH | HWY_BROKEN_Z14)
+   HWY_BROKEN_RVV | HWY_BROKEN_LOONGARCH | HWY_BROKEN_Z14 |               \
+   HWY_BROKEN_DRAGONFLY)
 
 #endif  // HWY_BROKEN_TARGETS
 
