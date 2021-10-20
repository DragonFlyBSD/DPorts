--- src/md5.c.orig	2010-01-13 01:16:46 UTC
+++ src/md5.c
@@ -126,7 +126,7 @@ void _zz_md5_fini(uint8_t *digest, struc
 static void swapwords(uint32_t *buf, unsigned words)
 {
     /* XXX: no need to swap words on little endian machines */
-#if defined HAVE_ENDIAN_H
+#if defined HAVE_ENDIAN_H && defined(__BYTE_ORDER)
     if(__BYTE_ORDER == __LITTLE_ENDIAN)
         return;
 #else
