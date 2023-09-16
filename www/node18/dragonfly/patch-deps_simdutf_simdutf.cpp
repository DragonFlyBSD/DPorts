--- deps/simdutf/simdutf.cpp.orig	2023-04-12 04:09:14 UTC
+++ deps/simdutf/simdutf.cpp
@@ -1,8 +1,8 @@
-/* auto-generated on 2023-02-24 17:01:43 -0500. Do not edit! */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf.cpp
+/* auto-generated on 2023-09-16 08:50:50 +0000. Do not edit! */
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf.cpp
 /* begin file src/simdutf.cpp */
 #include "simdutf.h"
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=implementation.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=implementation.cpp
 /* begin file src/implementation.cpp */
 #include <initializer_list>
 #include <climits>
@@ -26,7 +26,7 @@ std::string toBinaryString(T b) {
 
 // Implementations
 // The best choice should always come first!
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/arm64.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/arm64.h
 /* begin file src/simdutf/arm64.h */
 #ifndef SIMDUTF_ARM64_H
 #define SIMDUTF_ARM64_H
@@ -53,7 +53,7 @@ namespace arm64 {
 } // namespace arm64
 } // namespace simdutf
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/arm64/implementation.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/arm64/implementation.h
 /* begin file src/simdutf/arm64/implementation.h */
 #ifndef SIMDUTF_ARM64_IMPLEMENTATION_H
 #define SIMDUTF_ARM64_IMPLEMENTATION_H
@@ -130,14 +130,14 @@ public:
 #endif // SIMDUTF_ARM64_IMPLEMENTATION_H
 /* end file src/simdutf/arm64/implementation.h */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/arm64/begin.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/arm64/begin.h
 /* begin file src/simdutf/arm64/begin.h */
 // redefining SIMDUTF_IMPLEMENTATION to "arm64"
 // #define SIMDUTF_IMPLEMENTATION arm64
 /* end file src/simdutf/arm64/begin.h */
 
 // Declarations
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/arm64/intrinsics.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/arm64/intrinsics.h
 /* begin file src/simdutf/arm64/intrinsics.h */
 #ifndef SIMDUTF_ARM64_INTRINSICS_H
 #define SIMDUTF_ARM64_INTRINSICS_H
@@ -149,7 +149,7 @@ public:
 
 #endif //  SIMDUTF_ARM64_INTRINSICS_H
 /* end file src/simdutf/arm64/intrinsics.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/arm64/bitmanipulation.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/arm64/bitmanipulation.h
 /* begin file src/simdutf/arm64/bitmanipulation.h */
 #ifndef SIMDUTF_ARM64_BITMANIPULATION_H
 #define SIMDUTF_ARM64_BITMANIPULATION_H
@@ -169,7 +169,7 @@ simdutf_really_inline int count_ones(uin
 
 #endif // SIMDUTF_ARM64_BITMANIPULATION_H
 /* end file src/simdutf/arm64/bitmanipulation.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/arm64/simd.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/arm64/simd.h
 /* begin file src/simdutf/arm64/simd.h */
 #ifndef SIMDUTF_ARM64_SIMD_H
 #define SIMDUTF_ARM64_SIMD_H
@@ -782,7 +782,7 @@ simdutf_really_inline int16x8_t make_int
       ).to_bitmask();
     }
   }; // struct simd8x64<T>
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/arm64/simd16-inl.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/arm64/simd16-inl.h
 /* begin file src/simdutf/arm64/simd16-inl.h */
 template<typename T>
 struct simd16;
@@ -1097,7 +1097,7 @@ simdutf_really_inline simd16<int16_t>::o
 #endif // SIMDUTF_ARM64_SIMD_H
 /* end file src/simdutf/arm64/simd.h */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/arm64/end.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/arm64/end.h
 /* begin file src/simdutf/arm64/end.h */
 /* end file src/simdutf/arm64/end.h */
 
@@ -1105,7 +1105,7 @@ simdutf_really_inline simd16<int16_t>::o
 
 #endif // SIMDUTF_ARM64_H
 /* end file src/simdutf/arm64.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/icelake.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/icelake.h
 /* begin file src/simdutf/icelake.h */
 #ifndef SIMDUTF_ICELAKE_H
 #define SIMDUTF_ICELAKE_H
@@ -1157,7 +1157,7 @@ namespace icelake {
 //
 // These two need to be included outside SIMDUTF_TARGET_REGION
 //
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/icelake/intrinsics.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/icelake/intrinsics.h
 /* begin file src/simdutf/icelake/intrinsics.h */
 #ifndef SIMDUTF_ICELAKE_INTRINSICS_H
 #define SIMDUTF_ICELAKE_INTRINSICS_H
@@ -1268,7 +1268,7 @@ inline __m512i _mm512_set_epi8(uint8_t a
 
 #endif // SIMDUTF_HASWELL_INTRINSICS_H
 /* end file src/simdutf/icelake/intrinsics.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/icelake/implementation.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/icelake/implementation.h
 /* begin file src/simdutf/icelake/implementation.h */
 #ifndef SIMDUTF_ICELAKE_IMPLEMENTATION_H
 #define SIMDUTF_ICELAKE_IMPLEMENTATION_H
@@ -1351,7 +1351,7 @@ public:
 //
 // The rest need to be inside the region
 //
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/icelake/begin.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/icelake/begin.h
 /* begin file src/simdutf/icelake/begin.h */
 // redefining SIMDUTF_IMPLEMENTATION to "icelake"
 // #define SIMDUTF_IMPLEMENTATION icelake
@@ -1367,7 +1367,7 @@ SIMDUTF_DISABLE_GCC_WARNING(-Wmaybe-unin
 #endif // end of workaround
 /* end file src/simdutf/icelake/begin.h */
 // Declarations
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/icelake/bitmanipulation.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/icelake/bitmanipulation.h
 /* begin file src/simdutf/icelake/bitmanipulation.h */
 #ifndef SIMDUTF_ICELAKE_BITMANIPULATION_H
 #define SIMDUTF_ICELAKE_BITMANIPULATION_H
@@ -1393,7 +1393,7 @@ simdutf_really_inline long long int coun
 
 #endif // SIMDUTF_ICELAKE_BITMANIPULATION_H
 /* end file src/simdutf/icelake/bitmanipulation.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/icelake/end.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/icelake/end.h
 /* begin file src/simdutf/icelake/end.h */
 #if SIMDUTF_CAN_ALWAYS_RUN_ICELAKE
 // nothing needed.
@@ -1412,7 +1412,7 @@ SIMDUTF_POP_DISABLE_WARNINGS
 #endif // SIMDUTF_IMPLEMENTATION_ICELAKE
 #endif // SIMDUTF_ICELAKE_H
 /* end file src/simdutf/icelake.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/haswell.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/haswell.h
 /* begin file src/simdutf/haswell.h */
 #ifndef SIMDUTF_HASWELL_H
 #define SIMDUTF_HASWELL_H
@@ -1458,7 +1458,7 @@ namespace haswell {
 //
 // These two need to be included outside SIMDUTF_TARGET_REGION
 //
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/haswell/implementation.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/haswell/implementation.h
 /* begin file src/simdutf/haswell/implementation.h */
 #ifndef SIMDUTF_HASWELL_IMPLEMENTATION_H
 #define SIMDUTF_HASWELL_IMPLEMENTATION_H
@@ -1537,7 +1537,7 @@ public:
 
 #endif // SIMDUTF_HASWELL_IMPLEMENTATION_H
 /* end file src/simdutf/haswell/implementation.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/haswell/intrinsics.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/haswell/intrinsics.h
 /* begin file src/simdutf/haswell/intrinsics.h */
 #ifndef SIMDUTF_HASWELL_INTRINSICS_H
 #define SIMDUTF_HASWELL_INTRINSICS_H
@@ -1607,7 +1607,7 @@ SIMDUTF_POP_DISABLE_WARNINGS
 //
 // The rest need to be inside the region
 //
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/haswell/begin.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/haswell/begin.h
 /* begin file src/simdutf/haswell/begin.h */
 // redefining SIMDUTF_IMPLEMENTATION to "haswell"
 // #define SIMDUTF_IMPLEMENTATION haswell
@@ -1623,7 +1623,7 @@ SIMDUTF_DISABLE_GCC_WARNING(-Wmaybe-unin
 #endif // end of workaround
 /* end file src/simdutf/haswell/begin.h */
 // Declarations
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/haswell/bitmanipulation.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/haswell/bitmanipulation.h
 /* begin file src/simdutf/haswell/bitmanipulation.h */
 #ifndef SIMDUTF_HASWELL_BITMANIPULATION_H
 #define SIMDUTF_HASWELL_BITMANIPULATION_H
@@ -1649,7 +1649,7 @@ simdutf_really_inline long long int coun
 
 #endif // SIMDUTF_HASWELL_BITMANIPULATION_H
 /* end file src/simdutf/haswell/bitmanipulation.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/haswell/simd.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/haswell/simd.h
 /* begin file src/simdutf/haswell/simd.h */
 #ifndef SIMDUTF_HASWELL_SIMD_H
 #define SIMDUTF_HASWELL_SIMD_H
@@ -2045,7 +2045,7 @@ namespace simd {
     }
   }; // struct simd8x64<T>
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/haswell/simd16-inl.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/haswell/simd16-inl.h
 /* begin file src/simdutf/haswell/simd16-inl.h */
 #ifdef __GNUC__
 #if __GNUC__ < 8
@@ -2325,7 +2325,7 @@ struct simd16<uint16_t>: base16_numeric<
 #endif // SIMDUTF_HASWELL_SIMD_H
 /* end file src/simdutf/haswell/simd.h */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/haswell/end.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/haswell/end.h
 /* begin file src/simdutf/haswell/end.h */
 #if SIMDUTF_CAN_ALWAYS_RUN_HASWELL
 // nothing needed.
@@ -2342,7 +2342,7 @@ SIMDUTF_POP_DISABLE_WARNINGS
 #endif // SIMDUTF_IMPLEMENTATION_HASWELL
 #endif // SIMDUTF_HASWELL_COMMON_H
 /* end file src/simdutf/haswell.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/westmere.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/westmere.h
 /* begin file src/simdutf/westmere.h */
 #ifndef SIMDUTF_WESTMERE_H
 #define SIMDUTF_WESTMERE_H
@@ -2383,7 +2383,7 @@ namespace westmere {
 //
 // These two need to be included outside SIMDUTF_TARGET_REGION
 //
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/westmere/implementation.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/westmere/implementation.h
 /* begin file src/simdutf/westmere/implementation.h */
 #ifndef SIMDUTF_WESTMERE_IMPLEMENTATION_H
 #define SIMDUTF_WESTMERE_IMPLEMENTATION_H
@@ -2460,7 +2460,7 @@ public:
 
 #endif // SIMDUTF_WESTMERE_IMPLEMENTATION_H
 /* end file src/simdutf/westmere/implementation.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/westmere/intrinsics.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/westmere/intrinsics.h
 /* begin file src/simdutf/westmere/intrinsics.h */
 #ifndef SIMDUTF_WESTMERE_INTRINSICS_H
 #define SIMDUTF_WESTMERE_INTRINSICS_H
@@ -2510,7 +2510,7 @@ SIMDUTF_POP_DISABLE_WARNINGS
 //
 // The rest need to be inside the region
 //
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/westmere/begin.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/westmere/begin.h
 /* begin file src/simdutf/westmere/begin.h */
 // redefining SIMDUTF_IMPLEMENTATION to "westmere"
 // #define SIMDUTF_IMPLEMENTATION westmere
@@ -2523,7 +2523,7 @@ SIMDUTF_TARGET_WESTMERE
 /* end file src/simdutf/westmere/begin.h */
 
 // Declarations
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/westmere/bitmanipulation.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/westmere/bitmanipulation.h
 /* begin file src/simdutf/westmere/bitmanipulation.h */
 #ifndef SIMDUTF_WESTMERE_BITMANIPULATION_H
 #define SIMDUTF_WESTMERE_BITMANIPULATION_H
@@ -2549,7 +2549,7 @@ simdutf_really_inline long long int coun
 
 #endif // SIMDUTF_WESTMERE_BITMANIPULATION_H
 /* end file src/simdutf/westmere/bitmanipulation.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/westmere/simd.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/westmere/simd.h
 /* begin file src/simdutf/westmere/simd.h */
 #ifndef SIMDUTF_WESTMERE_SIMD_H
 #define SIMDUTF_WESTMERE_SIMD_H
@@ -2993,7 +2993,7 @@ namespace simd {
     }
   }; // struct simd8x64<T>
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/westmere/simd16-inl.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/westmere/simd16-inl.h
 /* begin file src/simdutf/westmere/simd16-inl.h */
 template<typename T>
 struct simd16;
@@ -3270,7 +3270,7 @@ template<typename T>
 #endif // SIMDUTF_WESTMERE_SIMD_INPUT_H
 /* end file src/simdutf/westmere/simd.h */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/westmere/end.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/westmere/end.h
 /* begin file src/simdutf/westmere/end.h */
 #if SIMDUTF_CAN_ALWAYS_RUN_WESTMERE
 // nothing needed.
@@ -3283,7 +3283,7 @@ SIMDUTF_UNTARGET_REGION
 #endif // SIMDUTF_IMPLEMENTATION_WESTMERE
 #endif // SIMDUTF_WESTMERE_COMMON_H
 /* end file src/simdutf/westmere.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/ppc64.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/ppc64.h
 /* begin file src/simdutf/ppc64.h */
 #ifndef SIMDUTF_PPC64_H
 #define SIMDUTF_PPC64_H
@@ -3310,7 +3310,7 @@ namespace ppc64 {
 } // namespace ppc64
 } // namespace simdutf
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/ppc64/implementation.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/ppc64/implementation.h
 /* begin file src/simdutf/ppc64/implementation.h */
 #ifndef SIMDUTF_PPC64_IMPLEMENTATION_H
 #define SIMDUTF_PPC64_IMPLEMENTATION_H
@@ -3389,14 +3389,14 @@ public:
 #endif // SIMDUTF_PPC64_IMPLEMENTATION_H
 /* end file src/simdutf/ppc64/implementation.h */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/ppc64/begin.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/ppc64/begin.h
 /* begin file src/simdutf/ppc64/begin.h */
 // redefining SIMDUTF_IMPLEMENTATION to "ppc64"
 // #define SIMDUTF_IMPLEMENTATION ppc64
 /* end file src/simdutf/ppc64/begin.h */
 
 // Declarations
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/ppc64/intrinsics.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/ppc64/intrinsics.h
 /* begin file src/simdutf/ppc64/intrinsics.h */
 #ifndef SIMDUTF_PPC64_INTRINSICS_H
 #define SIMDUTF_PPC64_INTRINSICS_H
@@ -3417,7 +3417,7 @@ public:
 
 #endif //  SIMDUTF_PPC64_INTRINSICS_H
 /* end file src/simdutf/ppc64/intrinsics.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/ppc64/bitmanipulation.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/ppc64/bitmanipulation.h
 /* begin file src/simdutf/ppc64/bitmanipulation.h */
 #ifndef SIMDUTF_PPC64_BITMANIPULATION_H
 #define SIMDUTF_PPC64_BITMANIPULATION_H
@@ -3443,7 +3443,7 @@ simdutf_really_inline int count_ones(uin
 
 #endif // SIMDUTF_PPC64_BITMANIPULATION_H
 /* end file src/simdutf/ppc64/bitmanipulation.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/ppc64/simd.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/ppc64/simd.h
 /* begin file src/simdutf/ppc64/simd.h */
 #ifndef SIMDUTF_PPC64_SIMD_H
 #define SIMDUTF_PPC64_SIMD_H
@@ -3935,7 +3935,7 @@ template <typename T> struct simd8x64 {
 #endif // SIMDUTF_PPC64_SIMD_INPUT_H
 /* end file src/simdutf/ppc64/simd.h */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/ppc64/end.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/ppc64/end.h
 /* begin file src/simdutf/ppc64/end.h */
 /* end file src/simdutf/ppc64/end.h */
 
@@ -3943,7 +3943,7 @@ template <typename T> struct simd8x64 {
 
 #endif // SIMDUTF_PPC64_H
 /* end file src/simdutf/ppc64.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/fallback.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/fallback.h
 /* begin file src/simdutf/fallback.h */
 #ifndef SIMDUTF_FALLBACK_H
 #define SIMDUTF_FALLBACK_H
@@ -3972,7 +3972,7 @@ namespace fallback {
 } // namespace fallback
 } // namespace simdutf
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/fallback/implementation.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/fallback/implementation.h
 /* begin file src/simdutf/fallback/implementation.h */
 #ifndef SIMDUTF_FALLBACK_IMPLEMENTATION_H
 #define SIMDUTF_FALLBACK_IMPLEMENTATION_H
@@ -4053,14 +4053,14 @@ public:
 #endif // SIMDUTF_FALLBACK_IMPLEMENTATION_H
 /* end file src/simdutf/fallback/implementation.h */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/fallback/begin.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/fallback/begin.h
 /* begin file src/simdutf/fallback/begin.h */
 // redefining SIMDUTF_IMPLEMENTATION to "fallback"
 // #define SIMDUTF_IMPLEMENTATION fallback
 /* end file src/simdutf/fallback/begin.h */
 
 // Declarations
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/fallback/bitmanipulation.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/fallback/bitmanipulation.h
 /* begin file src/simdutf/fallback/bitmanipulation.h */
 #ifndef SIMDUTF_FALLBACK_BITMANIPULATION_H
 #define SIMDUTF_FALLBACK_BITMANIPULATION_H
@@ -4095,7 +4095,7 @@ static unsigned char _BitScanReverse64(u
 #endif // SIMDUTF_FALLBACK_BITMANIPULATION_H
 /* end file src/simdutf/fallback/bitmanipulation.h */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/fallback/end.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/fallback/end.h
 /* begin file src/simdutf/fallback/end.h */
 /* end file src/simdutf/fallback/end.h */
 
@@ -4984,7 +4984,7 @@ const implementation * builtin_implement
 } // namespace simdutf
 
 /* end file src/implementation.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=encoding_types.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=encoding_types.cpp
 /* begin file src/encoding_types.cpp */
 
 namespace simdutf {
@@ -5046,7 +5046,7 @@ encoding_type check_bom(const char* byte
 }
 }
 /* end file src/encoding_types.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=error.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=error.cpp
 /* begin file src/error.cpp */
 namespace simdutf {
 
@@ -5058,7 +5058,7 @@ namespace simdutf {
 /* end file src/error.cpp */
 // The large tables should be included once and they
 // should not depend on a kernel.
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=tables/utf8_to_utf16_tables.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=tables/utf8_to_utf16_tables.h
 /* begin file src/tables/utf8_to_utf16_tables.h */
 #ifndef SIMDUTF_UTF8_TO_UTF16_TABLES_H
 #define SIMDUTF_UTF8_TO_UTF16_TABLES_H
@@ -9397,7 +9397,7 @@ const uint8_t utf8bigindex[4096][2] =
 
 #endif // SIMDUTF_UTF8_TO_UTF16_TABLES_H
 /* end file src/tables/utf8_to_utf16_tables.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=tables/utf16_to_utf8_tables.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=tables/utf16_to_utf8_tables.h
 /* begin file src/tables/utf16_to_utf8_tables.h */
 // file generated by scripts/sse_convert_utf16_to_utf8.py
 #ifndef SIMDUTF_UTF16_TO_UTF8_TABLES_H
@@ -9938,7 +9938,7 @@ namespace utf16_to_utf8 {
 // End of tables.
 
 // The scalar routines should be included once.
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=scalar/ascii.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=scalar/ascii.h
 /* begin file src/scalar/ascii.h */
 #ifndef SIMDUTF_ASCII_H
 #define SIMDUTF_ASCII_H
@@ -9999,7 +9999,7 @@ inline simdutf_warn_unused result valida
 
 #endif
 /* end file src/scalar/ascii.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=scalar/utf8.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=scalar/utf8.h
 /* begin file src/scalar/utf8.h */
 #ifndef SIMDUTF_UTF8_H
 #define SIMDUTF_UTF8_H
@@ -10189,7 +10189,7 @@ inline size_t utf16_length_from_utf8(con
 
 #endif
 /* end file src/scalar/utf8.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=scalar/utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=scalar/utf16.h
 /* begin file src/scalar/utf16.h */
 #ifndef SIMDUTF_UTF16_H
 #define SIMDUTF_UTF16_H
@@ -10303,7 +10303,7 @@ simdutf_really_inline void change_endian
 
 #endif
 /* end file src/scalar/utf16.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=scalar/utf32.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=scalar/utf32.h
 /* begin file src/scalar/utf32.h */
 #ifndef SIMDUTF_UTF32_H
 #define SIMDUTF_UTF32_H
@@ -10378,7 +10378,7 @@ inline size_t utf16_length_from_utf32(co
 #endif
 /* end file src/scalar/utf32.h */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=scalar/utf32_to_utf8/valid_utf32_to_utf8.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=scalar/utf32_to_utf8/valid_utf32_to_utf8.h
 /* begin file src/scalar/utf32_to_utf8/valid_utf32_to_utf8.h */
 #ifndef SIMDUTF_VALID_UTF32_TO_UTF8_H
 #define SIMDUTF_VALID_UTF32_TO_UTF8_H
@@ -10445,7 +10445,7 @@ inline size_t convert_valid(const char32
 
 #endif
 /* end file src/scalar/utf32_to_utf8/valid_utf32_to_utf8.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=scalar/utf32_to_utf8/utf32_to_utf8.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=scalar/utf32_to_utf8/utf32_to_utf8.h
 /* begin file src/scalar/utf32_to_utf8/utf32_to_utf8.h */
 #ifndef SIMDUTF_UTF32_TO_UTF8_H
 #define SIMDUTF_UTF32_TO_UTF8_H
@@ -10561,7 +10561,7 @@ inline result convert_with_errors(const
 #endif
 /* end file src/scalar/utf32_to_utf8/utf32_to_utf8.h */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=scalar/utf32_to_utf16/valid_utf32_to_utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=scalar/utf32_to_utf16/valid_utf32_to_utf16.h
 /* begin file src/scalar/utf32_to_utf16/valid_utf32_to_utf16.h */
 #ifndef SIMDUTF_VALID_UTF32_TO_UTF16_H
 #define SIMDUTF_VALID_UTF32_TO_UTF16_H
@@ -10606,7 +10606,7 @@ inline size_t convert_valid(const char32
 
 #endif
 /* end file src/scalar/utf32_to_utf16/valid_utf32_to_utf16.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=scalar/utf32_to_utf16/utf32_to_utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=scalar/utf32_to_utf16/utf32_to_utf16.h
 /* begin file src/scalar/utf32_to_utf16/utf32_to_utf16.h */
 #ifndef SIMDUTF_UTF32_TO_UTF16_H
 #define SIMDUTF_UTF32_TO_UTF16_H
@@ -10682,7 +10682,7 @@ inline result convert_with_errors(const
 #endif
 /* end file src/scalar/utf32_to_utf16/utf32_to_utf16.h */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=scalar/utf16_to_utf8/valid_utf16_to_utf8.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=scalar/utf16_to_utf8/valid_utf16_to_utf8.h
 /* begin file src/scalar/utf16_to_utf8/valid_utf16_to_utf8.h */
 #ifndef SIMDUTF_VALID_UTF16_TO_UTF8_H
 #define SIMDUTF_VALID_UTF16_TO_UTF8_H
@@ -10757,7 +10757,7 @@ inline size_t convert_valid(const char16
 
 #endif
 /* end file src/scalar/utf16_to_utf8/valid_utf16_to_utf8.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=scalar/utf16_to_utf8/utf16_to_utf8.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=scalar/utf16_to_utf8/utf16_to_utf8.h
 /* begin file src/scalar/utf16_to_utf8/utf16_to_utf8.h */
 #ifndef SIMDUTF_UTF16_TO_UTF8_H
 #define SIMDUTF_UTF16_TO_UTF8_H
@@ -10893,7 +10893,7 @@ inline result convert_with_errors(const
 #endif
 /* end file src/scalar/utf16_to_utf8/utf16_to_utf8.h */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=scalar/utf16_to_utf32/valid_utf16_to_utf32.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=scalar/utf16_to_utf32/valid_utf16_to_utf32.h
 /* begin file src/scalar/utf16_to_utf32/valid_utf16_to_utf32.h */
 #ifndef SIMDUTF_VALID_UTF16_TO_UTF32_H
 #define SIMDUTF_VALID_UTF16_TO_UTF32_H
@@ -10935,7 +10935,7 @@ inline size_t convert_valid(const char16
 
 #endif
 /* end file src/scalar/utf16_to_utf32/valid_utf16_to_utf32.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=scalar/utf16_to_utf32/utf16_to_utf32.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=scalar/utf16_to_utf32/utf16_to_utf32.h
 /* begin file src/scalar/utf16_to_utf32/utf16_to_utf32.h */
 #ifndef SIMDUTF_UTF16_TO_UTF32_H
 #define SIMDUTF_UTF16_TO_UTF32_H
@@ -11007,7 +11007,7 @@ inline result convert_with_errors(const
 #endif
 /* end file src/scalar/utf16_to_utf32/utf16_to_utf32.h */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=scalar/utf8_to_utf16/valid_utf8_to_utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=scalar/utf8_to_utf16/valid_utf8_to_utf16.h
 /* begin file src/scalar/utf8_to_utf16/valid_utf8_to_utf16.h */
 #ifndef SIMDUTF_VALID_UTF8_TO_UTF16_H
 #define SIMDUTF_VALID_UTF8_TO_UTF16_H
@@ -11092,7 +11092,7 @@ inline size_t convert_valid(const char*
 
 #endif
 /* end file src/scalar/utf8_to_utf16/valid_utf8_to_utf16.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=scalar/utf8_to_utf16/utf8_to_utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=scalar/utf8_to_utf16/utf8_to_utf16.h
 /* begin file src/scalar/utf8_to_utf16/utf8_to_utf16.h */
 #ifndef SIMDUTF_UTF8_TO_UTF16_H
 #define SIMDUTF_UTF8_TO_UTF16_H
@@ -11340,7 +11340,7 @@ inline result rewind_and_convert_with_er
 #endif
 /* end file src/scalar/utf8_to_utf16/utf8_to_utf16.h */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=scalar/utf8_to_utf32/valid_utf8_to_utf32.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=scalar/utf8_to_utf32/valid_utf8_to_utf32.h
 /* begin file src/scalar/utf8_to_utf32/valid_utf8_to_utf32.h */
 #ifndef SIMDUTF_VALID_UTF8_TO_UTF32_H
 #define SIMDUTF_VALID_UTF8_TO_UTF32_H
@@ -11406,7 +11406,7 @@ inline size_t convert_valid(const char*
 
 #endif
 /* end file src/scalar/utf8_to_utf32/valid_utf8_to_utf32.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=scalar/utf8_to_utf32/utf8_to_utf32.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=scalar/utf8_to_utf32/utf8_to_utf32.h
 /* begin file src/scalar/utf8_to_utf32/utf8_to_utf32.h */
 #ifndef SIMDUTF_UTF8_TO_UTF32_H
 #define SIMDUTF_UTF8_TO_UTF32_H
@@ -11626,9 +11626,9 @@ SIMDUTF_DISABLE_UNDESIRED_WARNINGS
 
 
 #if SIMDUTF_IMPLEMENTATION_ARM64
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=arm64/implementation.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=arm64/implementation.cpp
 /* begin file src/arm64/implementation.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/arm64/begin.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/arm64/begin.h
 /* begin file src/simdutf/arm64/begin.h */
 // redefining SIMDUTF_IMPLEMENTATION to "arm64"
 // #define SIMDUTF_IMPLEMENTATION arm64
@@ -11664,7 +11664,7 @@ simdutf_really_inline simd8<bool> must_b
     return is_third_byte ^ is_fourth_byte;
 }
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=arm64/arm_detect_encodings.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=arm64/arm_detect_encodings.cpp
 /* begin file src/arm64/arm_detect_encodings.cpp */
 template<class checker>
 // len is known to be a multiple of 2 when this is called
@@ -11872,7 +11872,7 @@ int arm_detect_encodings(const char * bu
 }
 /* end file src/arm64/arm_detect_encodings.cpp */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=arm64/arm_validate_utf16.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=arm64/arm_validate_utf16.cpp
 /* begin file src/arm64/arm_validate_utf16.cpp */
 template <endianness big_endian>
 const char16_t* arm_validate_utf16(const char16_t* input, size_t size) {
@@ -12022,7 +12022,7 @@ const result arm_validate_utf16_with_err
     return result(error_code::SUCCESS, input - start);
 }
 /* end file src/arm64/arm_validate_utf16.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=arm64/arm_validate_utf32le.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=arm64/arm_validate_utf32le.cpp
 /* begin file src/arm64/arm_validate_utf32le.cpp */
 
 const char32_t* arm_validate_utf32le(const char32_t* input, size_t size) {
@@ -12087,7 +12087,7 @@ const result arm_validate_utf32le_with_e
 }
 /* end file src/arm64/arm_validate_utf32le.cpp */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=arm64/arm_convert_utf8_to_utf16.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=arm64/arm_convert_utf8_to_utf16.cpp
 /* begin file src/arm64/arm_convert_utf8_to_utf16.cpp */
 // Convert up to 12 bytes from utf8 to utf16 using a mask indicating the
 // end of the code points. Only the least significant 12 bits of the mask
@@ -12259,7 +12259,7 @@ size_t convert_masked_utf8_to_utf16(cons
   return consumed;
 }
 /* end file src/arm64/arm_convert_utf8_to_utf16.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=arm64/arm_convert_utf8_to_utf32.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=arm64/arm_convert_utf8_to_utf32.cpp
 /* begin file src/arm64/arm_convert_utf8_to_utf32.cpp */
 // Convert up to 12 bytes from utf8 to utf32 using a mask indicating the
 // end of the code points. Only the least significant 12 bits of the mask
@@ -12396,7 +12396,7 @@ size_t convert_masked_utf8_to_utf32(cons
 }
 /* end file src/arm64/arm_convert_utf8_to_utf32.cpp */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=arm64/arm_convert_utf16_to_utf8.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=arm64/arm_convert_utf16_to_utf8.cpp
 /* begin file src/arm64/arm_convert_utf16_to_utf8.cpp */
 /*
     The vectorized algorithm works on single SSE register i.e., it
@@ -12976,7 +12976,7 @@ std::pair<result, char*> arm_convert_utf
   return std::make_pair(result(error_code::SUCCESS, buf - start), reinterpret_cast<char*>(utf8_output));
 }
 /* end file src/arm64/arm_convert_utf16_to_utf8.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=arm64/arm_convert_utf16_to_utf32.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=arm64/arm_convert_utf16_to_utf32.cpp
 /* begin file src/arm64/arm_convert_utf16_to_utf32.cpp */
 /*
     The vectorized algorithm works on single SSE register i.e., it
@@ -13153,7 +13153,7 @@ std::pair<result, char32_t*> arm_convert
 }
 /* end file src/arm64/arm_convert_utf16_to_utf32.cpp */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=arm64/arm_convert_utf32_to_utf8.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=arm64/arm_convert_utf32_to_utf8.cpp
 /* begin file src/arm64/arm_convert_utf32_to_utf8.cpp */
 std::pair<const char32_t*, char*> arm_convert_utf32_to_utf8(const char32_t* buf, size_t len, char* utf8_out) {
   uint8_t * utf8_output = reinterpret_cast<uint8_t*>(utf8_out);
@@ -13626,7 +13626,7 @@ std::pair<result, char*> arm_convert_utf
   return std::make_pair(result(error_code::SUCCESS, buf - start), reinterpret_cast<char*>(utf8_output));
 }
 /* end file src/arm64/arm_convert_utf32_to_utf8.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=arm64/arm_convert_utf32_to_utf16.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=arm64/arm_convert_utf32_to_utf16.cpp
 /* begin file src/arm64/arm_convert_utf32_to_utf16.cpp */
 template <endianness big_endian>
 std::pair<const char32_t*, char16_t*> arm_convert_utf32_to_utf16(const char32_t* buf, size_t len, char16_t* utf16_out) {
@@ -13759,7 +13759,7 @@ std::pair<result, char16_t*> arm_convert
 } // unnamed namespace
 } // namespace arm64
 } // namespace simdutf
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/buf_block_reader.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/buf_block_reader.h
 /* begin file src/generic/buf_block_reader.h */
 namespace simdutf {
 namespace arm64 {
@@ -13854,7 +13854,7 @@ simdutf_really_inline void buf_block_rea
 } // namespace arm64
 } // namespace simdutf
 /* end file src/generic/buf_block_reader.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_validation/utf8_lookup4_algorithm.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_validation/utf8_lookup4_algorithm.h
 /* begin file src/generic/utf8_validation/utf8_lookup4_algorithm.h */
 namespace simdutf {
 namespace arm64 {
@@ -14043,7 +14043,7 @@ using utf8_validation::utf8_checker;
 } // namespace arm64
 } // namespace simdutf
 /* end file src/generic/utf8_validation/utf8_lookup4_algorithm.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_validation/utf8_validator.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_validation/utf8_validator.h
 /* begin file src/generic/utf8_validation/utf8_validator.h */
 namespace simdutf {
 namespace arm64 {
@@ -14170,7 +14170,7 @@ result generic_validate_ascii_with_error
 } // namespace simdutf
 /* end file src/generic/utf8_validation/utf8_validator.h */
 // transcoding from UTF-8 to UTF-16
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_to_utf16/valid_utf8_to_utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_to_utf16/valid_utf8_to_utf16.h
 /* begin file src/generic/utf8_to_utf16/valid_utf8_to_utf16.h */
 
 
@@ -14245,7 +14245,7 @@ simdutf_warn_unused size_t convert_valid
 } // namespace arm64
 } // namespace simdutf
 /* end file src/generic/utf8_to_utf16/valid_utf8_to_utf16.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_to_utf16/utf8_to_utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_to_utf16/utf8_to_utf16.h
 /* begin file src/generic/utf8_to_utf16/utf8_to_utf16.h */
 
 
@@ -14529,7 +14529,7 @@ using namespace simd;
 } // namespace simdutf
 /* end file src/generic/utf8_to_utf16/utf8_to_utf16.h */
 // transcoding from UTF-8 to UTF-32
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_to_utf32/valid_utf8_to_utf32.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_to_utf32/valid_utf8_to_utf32.h
 /* begin file src/generic/utf8_to_utf32/valid_utf8_to_utf32.h */
 
 namespace simdutf {
@@ -14575,7 +14575,7 @@ simdutf_warn_unused size_t convert_valid
 } // namespace arm64
 } // namespace simdutf
 /* end file src/generic/utf8_to_utf32/valid_utf8_to_utf32.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_to_utf32/utf8_to_utf32.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_to_utf32/utf8_to_utf32.h
 /* begin file src/generic/utf8_to_utf32/utf8_to_utf32.h */
 
 
@@ -14852,7 +14852,7 @@ using namespace simd;
 } // namespace simdutf
 /* end file src/generic/utf8_to_utf32/utf8_to_utf32.h */
 // other functions
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8.h
 /* begin file src/generic/utf8.h */
 
 namespace simdutf {
@@ -14899,7 +14899,7 @@ simdutf_really_inline size_t utf32_lengt
 } // namespace arm64
 } // namespace simdutf
 /* end file src/generic/utf8.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf16.h
 /* begin file src/generic/utf16.h */
 namespace simdutf {
 namespace arm64 {
@@ -15434,15 +15434,15 @@ simdutf_warn_unused size_t implementatio
 } // namespace arm64
 } // namespace simdutf
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/arm64/end.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/arm64/end.h
 /* begin file src/simdutf/arm64/end.h */
 /* end file src/simdutf/arm64/end.h */
 /* end file src/arm64/implementation.cpp */
 #endif
 #if SIMDUTF_IMPLEMENTATION_FALLBACK
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=fallback/implementation.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=fallback/implementation.cpp
 /* begin file src/fallback/implementation.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/fallback/begin.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/fallback/begin.h
 /* begin file src/simdutf/fallback/begin.h */
 // redefining SIMDUTF_IMPLEMENTATION to "fallback"
 // #define SIMDUTF_IMPLEMENTATION fallback
@@ -15686,17 +15686,17 @@ simdutf_warn_unused size_t implementatio
 } // namespace fallback
 } // namespace simdutf
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/fallback/end.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/fallback/end.h
 /* begin file src/simdutf/fallback/end.h */
 /* end file src/simdutf/fallback/end.h */
 /* end file src/fallback/implementation.cpp */
 #endif
 #if SIMDUTF_IMPLEMENTATION_ICELAKE
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=icelake/implementation.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=icelake/implementation.cpp
 /* begin file src/icelake/implementation.cpp */
 
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/icelake/begin.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/icelake/begin.h
 /* begin file src/simdutf/icelake/begin.h */
 // redefining SIMDUTF_IMPLEMENTATION to "icelake"
 // #define SIMDUTF_IMPLEMENTATION icelake
@@ -15717,7 +15717,7 @@ namespace {
 #ifndef SIMDUTF_ICELAKE_H
 #error "icelake.h must be included"
 #endif
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=icelake/icelake_utf8_common.inl.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=icelake/icelake_utf8_common.inl.cpp
 /* begin file src/icelake/icelake_utf8_common.inl.cpp */
 // Common procedures for both validating and non-validating conversions from UTF-8.
 enum block_processing_mode { SIMDUTF_FULL, SIMDUTF_TAIL};
@@ -16382,7 +16382,7 @@ simdutf_really_inline __m512i expand_utf
     return expanded_utf8_to_utf32(char_class, input);
 }
 /* end file src/icelake/icelake_utf8_common.inl.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=icelake/icelake_macros.inl.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=icelake/icelake_macros.inl.cpp
 /* begin file src/icelake/icelake_macros.inl.cpp */
 
 /*
@@ -16518,7 +16518,7 @@ simdutf_really_inline __m512i expand_utf
                 }                                                                         \
         }
 /* end file src/icelake/icelake_macros.inl.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=icelake/icelake_from_valid_utf8.inl.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=icelake/icelake_from_valid_utf8.inl.cpp
 /* begin file src/icelake/icelake_from_valid_utf8.inl.cpp */
 // file included directly
 
@@ -16657,7 +16657,7 @@ std::pair<const char*, OUTPUT*> valid_ut
 
 using utf8_to_utf16_result = std::pair<const char*, char16_t*>;
 /* end file src/icelake/icelake_from_valid_utf8.inl.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=icelake/icelake_utf8_validation.inl.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=icelake/icelake_utf8_validation.inl.cpp
 /* begin file src/icelake/icelake_utf8_validation.inl.cpp */
 // file included directly
 
@@ -16787,7 +16787,7 @@ simdutf_really_inline __m512i check_spec
 
   }; // struct avx512_utf8_checker
 /* end file src/icelake/icelake_utf8_validation.inl.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=icelake/icelake_from_utf8.inl.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=icelake/icelake_from_utf8.inl.cpp
 /* begin file src/icelake/icelake_from_utf8.inl.cpp */
 // file included directly
 
@@ -17090,7 +17090,7 @@ std::tuple<const char*, OUTPUT*, bool> v
     return {ptr, output, true};
 }
 /* end file src/icelake/icelake_from_utf8.inl.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=icelake/icelake_convert_utf16_to_utf32.inl.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=icelake/icelake_convert_utf16_to_utf32.inl.cpp
 /* begin file src/icelake/icelake_convert_utf16_to_utf32.inl.cpp */
 // file included directly
 
@@ -17202,7 +17202,7 @@ std::tuple<const char16_t*, char32_t*, b
   return std::make_tuple(buf+carry, utf32_output, true);
 }
 /* end file src/icelake/icelake_convert_utf16_to_utf32.inl.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=icelake/icelake_convert_utf32_to_utf8.inl.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=icelake/icelake_convert_utf32_to_utf8.inl.cpp
 /* begin file src/icelake/icelake_convert_utf32_to_utf8.inl.cpp */
 // file included directly
 
@@ -17688,7 +17688,7 @@ std::pair<result, char*> avx512_convert_
   return std::make_pair(result(error_code::SUCCESS, buf - start), utf8_output);
 }
 /* end file src/icelake/icelake_convert_utf32_to_utf8.inl.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=icelake/icelake_convert_utf32_to_utf16.inl.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=icelake/icelake_convert_utf32_to_utf16.inl.cpp
 /* begin file src/icelake/icelake_convert_utf32_to_utf16.inl.cpp */
 // file included directly
 
@@ -17823,7 +17823,7 @@ std::pair<result, char16_t*> avx512_conv
   return std::make_pair(result(error_code::SUCCESS, buf - start), utf16_output);
 }
 /* end file src/icelake/icelake_convert_utf32_to_utf16.inl.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=icelake/icelake_ascii_validation.inl.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=icelake/icelake_ascii_validation.inl.cpp
 /* begin file src/icelake/icelake_ascii_validation.inl.cpp */
 // file included directly
 
@@ -17842,7 +17842,7 @@ bool validate_ascii(const char* buf, siz
   return (_mm512_test_epi8_mask(running_or, running_or) == 0);
 }
 /* end file src/icelake/icelake_ascii_validation.inl.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=icelake/icelake_utf32_validation.inl.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=icelake/icelake_utf32_validation.inl.cpp
 /* begin file src/icelake/icelake_utf32_validation.inl.cpp */
 // file included directly
 
@@ -17874,7 +17874,7 @@ const char32_t* validate_utf32(const cha
     return buf;
 }
 /* end file src/icelake/icelake_utf32_validation.inl.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=icelake/icelake_convert_utf16_to_utf8.inl.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=icelake/icelake_convert_utf16_to_utf8.inl.cpp
 /* begin file src/icelake/icelake_convert_utf16_to_utf8.inl.cpp */
 // file included directly
 
@@ -19186,7 +19186,7 @@ simdutf_warn_unused size_t implementatio
 } // namespace icelake
 } // namespace simdutf
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/icelake/end.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/icelake/end.h
 /* begin file src/simdutf/icelake/end.h */
 #if SIMDUTF_CAN_ALWAYS_RUN_ICELAKE
 // nothing needed.
@@ -19202,10 +19202,10 @@ SIMDUTF_POP_DISABLE_WARNINGS
 /* end file src/icelake/implementation.cpp */
 #endif
 #if SIMDUTF_IMPLEMENTATION_HASWELL
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=haswell/implementation.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=haswell/implementation.cpp
 /* begin file src/haswell/implementation.cpp */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/haswell/begin.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/haswell/begin.h
 /* begin file src/simdutf/haswell/begin.h */
 // redefining SIMDUTF_IMPLEMENTATION to "haswell"
 // #define SIMDUTF_IMPLEMENTATION haswell
@@ -19248,7 +19248,7 @@ simdutf_really_inline simd8<bool> must_b
   return simd8<int8_t>(is_third_byte | is_fourth_byte) > int8_t(0);
 }
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=haswell/avx2_detect_encodings.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=haswell/avx2_detect_encodings.cpp
 /* begin file src/haswell/avx2_detect_encodings.cpp */
 template<class checker>
 // len is known to be a multiple of 2 when this is called
@@ -19438,7 +19438,7 @@ int avx2_detect_encodings(const char * b
 }
 /* end file src/haswell/avx2_detect_encodings.cpp */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=haswell/avx2_validate_utf16.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=haswell/avx2_validate_utf16.cpp
 /* begin file src/haswell/avx2_validate_utf16.cpp */
 /*
     In UTF-16 words in range 0xD800 to 0xDFFF have special meaning.
@@ -19639,7 +19639,7 @@ const result avx2_validate_utf16_with_er
     return result(error_code::SUCCESS, input - start);
 }
 /* end file src/haswell/avx2_validate_utf16.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=haswell/avx2_validate_utf32le.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=haswell/avx2_validate_utf32le.cpp
 /* begin file src/haswell/avx2_validate_utf32le.cpp */
 /* Returns:
    - pointer to the last unprocessed character (a scalar fallback should check the rest);
@@ -19705,7 +19705,7 @@ const result avx2_validate_utf32le_with_
 }
 /* end file src/haswell/avx2_validate_utf32le.cpp */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=haswell/avx2_convert_utf8_to_utf16.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=haswell/avx2_convert_utf8_to_utf16.cpp
 /* begin file src/haswell/avx2_convert_utf8_to_utf16.cpp */
 // depends on "tables/utf8_to_utf16_tables.h"
 
@@ -19873,7 +19873,7 @@ size_t convert_masked_utf8_to_utf16(cons
   return consumed;
 }
 /* end file src/haswell/avx2_convert_utf8_to_utf16.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=haswell/avx2_convert_utf8_to_utf32.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=haswell/avx2_convert_utf8_to_utf32.cpp
 /* begin file src/haswell/avx2_convert_utf8_to_utf32.cpp */
 // depends on "tables/utf8_to_utf16_tables.h"
 
@@ -20001,7 +20001,7 @@ size_t convert_masked_utf8_to_utf32(cons
 }
 /* end file src/haswell/avx2_convert_utf8_to_utf32.cpp */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=haswell/avx2_convert_utf16_to_utf8.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=haswell/avx2_convert_utf16_to_utf8.cpp
 /* begin file src/haswell/avx2_convert_utf16_to_utf8.cpp */
 /*
     The vectorized algorithm works on single SSE register i.e., it
@@ -20534,7 +20534,7 @@ std::pair<result, char*> avx2_convert_ut
   return std::make_pair(result(error_code::SUCCESS, buf - start), utf8_output);
 }
 /* end file src/haswell/avx2_convert_utf16_to_utf8.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=haswell/avx2_convert_utf16_to_utf32.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=haswell/avx2_convert_utf16_to_utf32.cpp
 /* begin file src/haswell/avx2_convert_utf16_to_utf32.cpp */
 /*
     The vectorized algorithm works on single SSE register i.e., it
@@ -20719,7 +20719,7 @@ std::pair<result, char32_t*> avx2_conver
 }
 /* end file src/haswell/avx2_convert_utf16_to_utf32.cpp */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=haswell/avx2_convert_utf32_to_utf8.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=haswell/avx2_convert_utf32_to_utf8.cpp
 /* begin file src/haswell/avx2_convert_utf32_to_utf8.cpp */
 std::pair<const char32_t*, char*> avx2_convert_utf32_to_utf8(const char32_t* buf, size_t len, char* utf8_output) {
   const char32_t* end = buf + len;
@@ -21202,7 +21202,7 @@ std::pair<result, char*> avx2_convert_ut
   return std::make_pair(result(error_code::SUCCESS, buf - start), utf8_output);
 }
 /* end file src/haswell/avx2_convert_utf32_to_utf8.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=haswell/avx2_convert_utf32_to_utf16.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=haswell/avx2_convert_utf32_to_utf16.cpp
 /* begin file src/haswell/avx2_convert_utf32_to_utf16.cpp */
 template <endianness big_endian>
 std::pair<const char32_t*, char16_t*> avx2_convert_utf32_to_utf16(const char32_t* buf, size_t len, char16_t* utf16_output) {
@@ -21338,7 +21338,7 @@ std::pair<result, char16_t*> avx2_conver
 } // namespace haswell
 } // namespace simdutf
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/buf_block_reader.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/buf_block_reader.h
 /* begin file src/generic/buf_block_reader.h */
 namespace simdutf {
 namespace haswell {
@@ -21433,7 +21433,7 @@ simdutf_really_inline void buf_block_rea
 } // namespace haswell
 } // namespace simdutf
 /* end file src/generic/buf_block_reader.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_validation/utf8_lookup4_algorithm.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_validation/utf8_lookup4_algorithm.h
 /* begin file src/generic/utf8_validation/utf8_lookup4_algorithm.h */
 namespace simdutf {
 namespace haswell {
@@ -21622,7 +21622,7 @@ using utf8_validation::utf8_checker;
 } // namespace haswell
 } // namespace simdutf
 /* end file src/generic/utf8_validation/utf8_lookup4_algorithm.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_validation/utf8_validator.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_validation/utf8_validator.h
 /* begin file src/generic/utf8_validation/utf8_validator.h */
 namespace simdutf {
 namespace haswell {
@@ -21749,7 +21749,7 @@ result generic_validate_ascii_with_error
 } // namespace simdutf
 /* end file src/generic/utf8_validation/utf8_validator.h */
 // transcoding from UTF-8 to UTF-16
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_to_utf16/valid_utf8_to_utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_to_utf16/valid_utf8_to_utf16.h
 /* begin file src/generic/utf8_to_utf16/valid_utf8_to_utf16.h */
 
 
@@ -21824,7 +21824,7 @@ simdutf_warn_unused size_t convert_valid
 } // namespace haswell
 } // namespace simdutf
 /* end file src/generic/utf8_to_utf16/valid_utf8_to_utf16.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_to_utf16/utf8_to_utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_to_utf16/utf8_to_utf16.h
 /* begin file src/generic/utf8_to_utf16/utf8_to_utf16.h */
 
 
@@ -22108,7 +22108,7 @@ using namespace simd;
 } // namespace simdutf
 /* end file src/generic/utf8_to_utf16/utf8_to_utf16.h */
 // transcoding from UTF-8 to UTF-32
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_to_utf32/valid_utf8_to_utf32.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_to_utf32/valid_utf8_to_utf32.h
 /* begin file src/generic/utf8_to_utf32/valid_utf8_to_utf32.h */
 
 namespace simdutf {
@@ -22154,7 +22154,7 @@ simdutf_warn_unused size_t convert_valid
 } // namespace haswell
 } // namespace simdutf
 /* end file src/generic/utf8_to_utf32/valid_utf8_to_utf32.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_to_utf32/utf8_to_utf32.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_to_utf32/utf8_to_utf32.h
 /* begin file src/generic/utf8_to_utf32/utf8_to_utf32.h */
 
 
@@ -22431,7 +22431,7 @@ using namespace simd;
 } // namespace simdutf
 /* end file src/generic/utf8_to_utf32/utf8_to_utf32.h */
 // other functions
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8.h
 /* begin file src/generic/utf8.h */
 
 namespace simdutf {
@@ -22478,7 +22478,7 @@ simdutf_really_inline size_t utf32_lengt
 } // namespace haswell
 } // namespace simdutf
 /* end file src/generic/utf8.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf16.h
 /* begin file src/generic/utf16.h */
 namespace simdutf {
 namespace haswell {
@@ -23006,7 +23006,7 @@ simdutf_warn_unused size_t implementatio
 } // namespace haswell
 } // namespace simdutf
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/haswell/end.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/haswell/end.h
 /* begin file src/simdutf/haswell/end.h */
 #if SIMDUTF_CAN_ALWAYS_RUN_HASWELL
 // nothing needed.
@@ -23022,14 +23022,14 @@ SIMDUTF_POP_DISABLE_WARNINGS
 /* end file src/haswell/implementation.cpp */
 #endif
 #if SIMDUTF_IMPLEMENTATION_PPC64
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=ppc64/implementation.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=ppc64/implementation.cpp
 /* begin file src/ppc64/implementation.cpp */
 
 
 
 
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/ppc64/begin.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/ppc64/begin.h
 /* begin file src/simdutf/ppc64/begin.h */
 // redefining SIMDUTF_IMPLEMENTATION to "ppc64"
 // #define SIMDUTF_IMPLEMENTATION ppc64
@@ -23067,7 +23067,7 @@ simdutf_really_inline simd8<bool> must_b
 } // namespace ppc64
 } // namespace simdutf
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/buf_block_reader.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/buf_block_reader.h
 /* begin file src/generic/buf_block_reader.h */
 namespace simdutf {
 namespace ppc64 {
@@ -23162,7 +23162,7 @@ simdutf_really_inline void buf_block_rea
 } // namespace ppc64
 } // namespace simdutf
 /* end file src/generic/buf_block_reader.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_validation/utf8_lookup4_algorithm.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_validation/utf8_lookup4_algorithm.h
 /* begin file src/generic/utf8_validation/utf8_lookup4_algorithm.h */
 namespace simdutf {
 namespace ppc64 {
@@ -23351,7 +23351,7 @@ using utf8_validation::utf8_checker;
 } // namespace ppc64
 } // namespace simdutf
 /* end file src/generic/utf8_validation/utf8_lookup4_algorithm.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_validation/utf8_validator.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_validation/utf8_validator.h
 /* begin file src/generic/utf8_validation/utf8_validator.h */
 namespace simdutf {
 namespace ppc64 {
@@ -23478,7 +23478,7 @@ result generic_validate_ascii_with_error
 } // namespace simdutf
 /* end file src/generic/utf8_validation/utf8_validator.h */
 // transcoding from UTF-8 to UTF-16
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_to_utf16/valid_utf8_to_utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_to_utf16/valid_utf8_to_utf16.h
 /* begin file src/generic/utf8_to_utf16/valid_utf8_to_utf16.h */
 
 
@@ -23553,7 +23553,7 @@ simdutf_warn_unused size_t convert_valid
 } // namespace ppc64
 } // namespace simdutf
 /* end file src/generic/utf8_to_utf16/valid_utf8_to_utf16.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_to_utf16/utf8_to_utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_to_utf16/utf8_to_utf16.h
 /* begin file src/generic/utf8_to_utf16/utf8_to_utf16.h */
 
 
@@ -23837,7 +23837,7 @@ using namespace simd;
 } // namespace simdutf
 /* end file src/generic/utf8_to_utf16/utf8_to_utf16.h */
 // transcoding from UTF-8 to UTF-32
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_to_utf32/valid_utf8_to_utf32.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_to_utf32/valid_utf8_to_utf32.h
 /* begin file src/generic/utf8_to_utf32/valid_utf8_to_utf32.h */
 
 namespace simdutf {
@@ -23883,7 +23883,7 @@ simdutf_warn_unused size_t convert_valid
 } // namespace ppc64
 } // namespace simdutf
 /* end file src/generic/utf8_to_utf32/valid_utf8_to_utf32.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_to_utf32/utf8_to_utf32.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_to_utf32/utf8_to_utf32.h
 /* begin file src/generic/utf8_to_utf32/utf8_to_utf32.h */
 
 
@@ -24160,7 +24160,7 @@ using namespace simd;
 } // namespace simdutf
 /* end file src/generic/utf8_to_utf32/utf8_to_utf32.h */
 // other functions
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8.h
 /* begin file src/generic/utf8.h */
 
 namespace simdutf {
@@ -24207,7 +24207,7 @@ simdutf_really_inline size_t utf32_lengt
 } // namespace ppc64
 } // namespace simdutf
 /* end file src/generic/utf8.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf16.h
 /* begin file src/generic/utf16.h */
 namespace simdutf {
 namespace ppc64 {
@@ -24506,15 +24506,15 @@ simdutf_warn_unused size_t implementatio
 } // namespace ppc64
 } // namespace simdutf
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/ppc64/end.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/ppc64/end.h
 /* begin file src/simdutf/ppc64/end.h */
 /* end file src/simdutf/ppc64/end.h */
 /* end file src/ppc64/implementation.cpp */
 #endif
 #if SIMDUTF_IMPLEMENTATION_WESTMERE
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=westmere/implementation.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=westmere/implementation.cpp
 /* begin file src/westmere/implementation.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/westmere/begin.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/westmere/begin.h
 /* begin file src/simdutf/westmere/begin.h */
 // redefining SIMDUTF_IMPLEMENTATION to "westmere"
 // #define SIMDUTF_IMPLEMENTATION westmere
@@ -24552,7 +24552,7 @@ simdutf_really_inline simd8<bool> must_b
   return simd8<int8_t>(is_third_byte | is_fourth_byte) > int8_t(0);
 }
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=westmere/sse_detect_encodings.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=westmere/sse_detect_encodings.cpp
 /* begin file src/westmere/sse_detect_encodings.cpp */
 template<class checker>
 // len is known to be a multiple of 2 when this is called
@@ -24762,7 +24762,7 @@ int sse_detect_encodings(const char * bu
 }
 /* end file src/westmere/sse_detect_encodings.cpp */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=westmere/sse_validate_utf16.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=westmere/sse_validate_utf16.cpp
 /* begin file src/westmere/sse_validate_utf16.cpp */
 /*
     In UTF-16 words in range 0xD800 to 0xDFFF have special meaning.
@@ -24962,7 +24962,7 @@ const result sse_validate_utf16_with_err
     return result(error_code::SUCCESS, input - start);
 }
 /* end file src/westmere/sse_validate_utf16.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=westmere/sse_validate_utf32le.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=westmere/sse_validate_utf32le.cpp
 /* begin file src/westmere/sse_validate_utf32le.cpp */
 /* Returns:
    - pointer to the last unprocessed character (a scalar fallback should check the rest);
@@ -25028,7 +25028,7 @@ const result sse_validate_utf32le_with_e
 }
 /* end file src/westmere/sse_validate_utf32le.cpp */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=westmere/sse_convert_utf8_to_utf16.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=westmere/sse_convert_utf8_to_utf16.cpp
 /* begin file src/westmere/sse_convert_utf8_to_utf16.cpp */
 // depends on "tables/utf8_to_utf16_tables.h"
 
@@ -25198,7 +25198,7 @@ size_t convert_masked_utf8_to_utf16(cons
   return consumed;
 }
 /* end file src/westmere/sse_convert_utf8_to_utf16.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=westmere/sse_convert_utf8_to_utf32.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=westmere/sse_convert_utf8_to_utf32.cpp
 /* begin file src/westmere/sse_convert_utf8_to_utf32.cpp */
 // depends on "tables/utf8_to_utf16_tables.h"
 
@@ -25330,7 +25330,7 @@ size_t convert_masked_utf8_to_utf32(cons
 }
 /* end file src/westmere/sse_convert_utf8_to_utf32.cpp */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=westmere/sse_convert_utf16_to_utf8.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=westmere/sse_convert_utf16_to_utf8.cpp
 /* begin file src/westmere/sse_convert_utf16_to_utf8.cpp */
 /*
     The vectorized algorithm works on single SSE register i.e., it
@@ -25858,7 +25858,7 @@ std::pair<result, char*> sse_convert_utf
   return std::make_pair(result(error_code::SUCCESS, buf - start), utf8_output);
 }
 /* end file src/westmere/sse_convert_utf16_to_utf8.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=westmere/sse_convert_utf16_to_utf32.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=westmere/sse_convert_utf16_to_utf32.cpp
 /* begin file src/westmere/sse_convert_utf16_to_utf32.cpp */
 /*
     The vectorized algorithm works on single SSE register i.e., it
@@ -26042,7 +26042,7 @@ std::pair<result, char32_t*> sse_convert
 }
 /* end file src/westmere/sse_convert_utf16_to_utf32.cpp */
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=westmere/sse_convert_utf32_to_utf8.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=westmere/sse_convert_utf32_to_utf8.cpp
 /* begin file src/westmere/sse_convert_utf32_to_utf8.cpp */
 std::pair<const char32_t*, char*> sse_convert_utf32_to_utf8(const char32_t* buf, size_t len, char* utf8_output) {
 
@@ -26529,7 +26529,7 @@ std::pair<result, char*> sse_convert_utf
   return std::make_pair(result(error_code::SUCCESS, buf - start), utf8_output);
 }
 /* end file src/westmere/sse_convert_utf32_to_utf8.cpp */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=westmere/sse_convert_utf32_to_utf16.cpp
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=westmere/sse_convert_utf32_to_utf16.cpp
 /* begin file src/westmere/sse_convert_utf32_to_utf16.cpp */
 template <endianness big_endian>
 std::pair<const char32_t*, char16_t*> sse_convert_utf32_to_utf16(const char32_t* buf, size_t len, char16_t* utf16_output) {
@@ -26668,7 +26668,7 @@ std::pair<result, char16_t*> sse_convert
 } // namespace westmere
 } // namespace simdutf
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/buf_block_reader.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/buf_block_reader.h
 /* begin file src/generic/buf_block_reader.h */
 namespace simdutf {
 namespace westmere {
@@ -26763,7 +26763,7 @@ simdutf_really_inline void buf_block_rea
 } // namespace westmere
 } // namespace simdutf
 /* end file src/generic/buf_block_reader.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_validation/utf8_lookup4_algorithm.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_validation/utf8_lookup4_algorithm.h
 /* begin file src/generic/utf8_validation/utf8_lookup4_algorithm.h */
 namespace simdutf {
 namespace westmere {
@@ -26952,7 +26952,7 @@ using utf8_validation::utf8_checker;
 } // namespace westmere
 } // namespace simdutf
 /* end file src/generic/utf8_validation/utf8_lookup4_algorithm.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_validation/utf8_validator.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_validation/utf8_validator.h
 /* begin file src/generic/utf8_validation/utf8_validator.h */
 namespace simdutf {
 namespace westmere {
@@ -27079,7 +27079,7 @@ result generic_validate_ascii_with_error
 } // namespace simdutf
 /* end file src/generic/utf8_validation/utf8_validator.h */
 // transcoding from UTF-8 to UTF-16
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_to_utf16/valid_utf8_to_utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_to_utf16/valid_utf8_to_utf16.h
 /* begin file src/generic/utf8_to_utf16/valid_utf8_to_utf16.h */
 
 
@@ -27154,7 +27154,7 @@ simdutf_warn_unused size_t convert_valid
 } // namespace westmere
 } // namespace simdutf
 /* end file src/generic/utf8_to_utf16/valid_utf8_to_utf16.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_to_utf16/utf8_to_utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_to_utf16/utf8_to_utf16.h
 /* begin file src/generic/utf8_to_utf16/utf8_to_utf16.h */
 
 
@@ -27438,7 +27438,7 @@ using namespace simd;
 } // namespace simdutf
 /* end file src/generic/utf8_to_utf16/utf8_to_utf16.h */
 // transcoding from UTF-8 to UTF-32
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_to_utf32/valid_utf8_to_utf32.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_to_utf32/valid_utf8_to_utf32.h
 /* begin file src/generic/utf8_to_utf32/valid_utf8_to_utf32.h */
 
 namespace simdutf {
@@ -27484,7 +27484,7 @@ simdutf_warn_unused size_t convert_valid
 } // namespace westmere
 } // namespace simdutf
 /* end file src/generic/utf8_to_utf32/valid_utf8_to_utf32.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8_to_utf32/utf8_to_utf32.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8_to_utf32/utf8_to_utf32.h
 /* begin file src/generic/utf8_to_utf32/utf8_to_utf32.h */
 
 
@@ -27761,7 +27761,7 @@ using namespace simd;
 } // namespace simdutf
 /* end file src/generic/utf8_to_utf32/utf8_to_utf32.h */
 // other functions
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf8.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf8.h
 /* begin file src/generic/utf8.h */
 
 namespace simdutf {
@@ -27808,7 +27808,7 @@ simdutf_really_inline size_t utf32_lengt
 } // namespace westmere
 } // namespace simdutf
 /* end file src/generic/utf8.h */
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=generic/utf16.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=generic/utf16.h
 /* begin file src/generic/utf16.h */
 namespace simdutf {
 namespace westmere {
@@ -28340,7 +28340,7 @@ simdutf_warn_unused size_t implementatio
 } // namespace westmere
 } // namespace simdutf
 
-// dofile: invoked with prepath=/Users/dlemire/CVS/github/simdutf/src, filename=simdutf/westmere/end.h
+// dofile: invoked with prepath=/root/s/simdutf/src, filename=simdutf/westmere/end.h
 /* begin file src/simdutf/westmere/end.h */
 #if SIMDUTF_CAN_ALWAYS_RUN_WESTMERE
 // nothing needed.
