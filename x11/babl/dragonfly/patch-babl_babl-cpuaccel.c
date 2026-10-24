--- babl/babl-cpuaccel.c.orig
+++ babl/babl-cpuaccel.c
@@ -306,6 +306,7 @@
       if (ebx & ARCH_X86_INTEL_FEATURE_BMI2)
         caps |= BABL_CPU_ACCEL_X86_BMI2;
 
+#ifndef __DragonFly__ /* DragonFly does not enable AVX-512 register state */
       if (ebx & ARCH_X86_INTEL_FEATURE_AVX512F)
         caps |= BABL_CPU_ACCEL_X86_AVX512F;
       if (ebx & ARCH_X86_INTEL_FEATURE_AVX512DQ)
@@ -316,6 +317,7 @@
         caps |= BABL_CPU_ACCEL_X86_AVX512BW;
       if (ebx & ARCH_X86_INTEL_FEATURE_AVX512VL)
         caps |= BABL_CPU_ACCEL_X86_AVX512VL;
+#endif
     }
 #endif /* USE_SSE */
 
