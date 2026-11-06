--- rts/CheckVectorSupport.c.orig	2026-03-26 05:06:13 UTC
+++ rts/CheckVectorSupport.c
@@ -27,6 +27,8 @@ int checkVectorSupport(void) {
 
     // SSE
     supports_V16 = edx & (1 << 25);
+    // OSXSAVE: the OS manages XCR0 and xgetbv may be used
+    int osxsave = ecx & (1 << 27);
 
     // Check for AVX2 and AVX512-F
     eax = 7;
@@ -43,6 +45,19 @@ int checkVectorSupport(void) {
     // AVX-512F
     supports_V64 = ebx & (1 << 16);
 
+    // The CPU flags are not enough: the OS must also save the YMM (and for
+    // AVX-512 the opmask and ZMM) state, or using those registers traps.
+    unsigned int xcr0 = 0, xcr0_hi;
+    if (osxsave) {
+        __asm__ __volatile__ ("xgetbv" : "=a" (xcr0), "=d" (xcr0_hi) : "c" (0));
+    }
+    if ((xcr0 & 0x6) != 0x6) {
+        supports_V32 = 0;
+    }
+    if ((xcr0 & 0xe6) != 0xe6) {
+        supports_V64 = 0;
+    }
+
   // Detect AArch64 support
   #elif defined(__aarch64__)
     // AArch64 supports NEON (128-bit vectors) by default.
