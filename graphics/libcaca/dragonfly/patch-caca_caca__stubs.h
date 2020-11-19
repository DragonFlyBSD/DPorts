--- caca/caca_stubs.h.orig	2012-12-28 17:44:42 UTC
+++ caca/caca_stubs.h
@@ -46,7 +46,7 @@ static inline int geterrno(void) { retur
 static inline uint16_t hton16(uint16_t x)
 {
     /* This is compile-time optimised with at least -O1 or -Os */
-#if defined HAVE_ENDIAN_H
+#if defined HAVE_ENDIAN_H && defined(__BYTE_ORDER)
     if(__BYTE_ORDER == __BIG_ENDIAN)
 #else
     uint32_t const dummy = 0x12345678;
@@ -60,7 +60,7 @@ static inline uint16_t hton16(uint16_t x
 static inline uint32_t hton32(uint32_t x)
 {
     /* This is compile-time optimised with at least -O1 or -Os */
-#if defined HAVE_ENDIAN_H
+#if defined HAVE_ENDIAN_H && defined(__BYTE_ORDER)
     if(__BYTE_ORDER == __BIG_ENDIAN)
 #else
     uint32_t const dummy = 0x12345678;
