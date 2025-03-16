--- include/common.h.orig	Wed Dec  6 17:20:36 2023
+++ include/common.h	Thu Dec
@@ -77,9 +77,9 @@ static void write_neutral_s32(u8 * data, s32 value) {
     #define prefetchw(address) __builtin_prefetch((const void *)(address), 1, 0)
 #elif defined(_M_IX86) || defined(_M_AMD64) || defined(__x86_64__) || defined(i386) || defined(__i386__) || \
     defined(__i386)
-    #include <intrin.h>
+    #include <x86intrin.h>
     #define prefetch(address) _mm_prefetch((const void *)(address), _MM_HINT_NTA)
-    #define prefetchw(address) _m_prefetchw((const void *)(address))
+    #define prefetchw(address) _m_prefetchw((void *)(address))
 #elif defined(_M_ARM) || defined(__ARM_ARCH_7__) || defined(__ARM_ARCH_7A__) || defined(__ARM_ARCH_7R__) || \
     defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7S__)
     #include <intrin.h>
