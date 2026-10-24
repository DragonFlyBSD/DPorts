--- Source/Shared/CPUFeatures.cpp.intermediate	2026-09-05 09:07:23 UTC
+++ Source/Shared/CPUFeatures.cpp
@@ -1,7 +1,7 @@
 #include "All.h"
 #include "CPUFeatures.h"
 
-#if defined(PLATFORM_LINUX)
+#if defined(PLATFORM_LINUX) && !defined(__DragonFly__)
     #include <sys/auxv.h>
 
     #if defined(__arm__) && defined(__linux__)
@@ -10,7 +10,7 @@
         #ifndef HWCAP_NEON
             #define HWCAP_NEON (1 << 12)
         #endif
-    #elif defined(__riscv)
+    #elif defined(__riscv) && defined(__linux__)
         #include <asm/hwcap.h>
 
         #ifndef COMPAT_HWCAP_ISA_V
@@ -187,6 +187,7 @@ bool GetNeonSupported()
 #if defined(__ARM_NEON) || defined(__ARM_NEON__) || defined(__aarch64__) || defined(_M_ARM64) || defined(_M_ARM64EC)
     return true;
 #elif defined(__arm__) && defined(PLATFORM_LINUX)
+#if defined(__linux__) || defined(__FreeBSD__)
 #ifdef __linux__
     return getauxval(AT_HWCAP) & HWCAP_NEON;
 #elif defined(__FreeBSD__)
@@ -198,13 +199,16 @@ bool GetNeonSupported()
 #else
     return false;
 #endif
+#else
+    return false;
+#endif
 }
 
 bool GetRVVSupported()
 {
 #if defined(__riscv_v)
     return true;
-#elif defined(__riscv) && defined(PLATFORM_LINUX)
+#elif defined(__riscv) && defined(PLATFORM_LINUX) && defined(__linux__)
     return getauxval(AT_HWCAP) & COMPAT_HWCAP_ISA_V;
 #else
     return false;
