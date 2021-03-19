--- extlib/tlx/tlx/math/bswap.hpp.intermediate	2021-03-19 08:37:52.000000000 +0000
+++ extlib/tlx/tlx/math/bswap.hpp
@@ -19,7 +19,7 @@
 #include <cstdlib>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #endif
 
@@ -39,7 +39,7 @@ static inline uint16_t bswap16_generic(c
 #if defined(__GNUC__) || defined(__clang__)
 
 //! bswap16 - gcc/clang intrinsic
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 static inline uint16_t bswap16(const uint16_t& v) {
     return __builtin_bswap16(v);
 }
@@ -73,7 +73,7 @@ static inline uint32_t bswap32_generic(c
 #if defined(__GNUC__) || defined(__clang__)
 
 //! bswap32 - gcc/clang intrinsic
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 static inline uint32_t bswap32(const uint32_t& v) {
     return __builtin_bswap32(v);
 }
@@ -113,7 +113,7 @@ static inline uint64_t bswap64_generic(c
 #if defined(__GNUC__) || defined(__clang__)
 
 //! bswap64 - gcc/clang intrinsic
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 static inline uint64_t bswap64(const uint64_t& v) {
     return __builtin_bswap64(v);
 }
