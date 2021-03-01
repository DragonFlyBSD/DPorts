Upstream patch from binutils-2.34

--- libctf/ctf-endian.h.orig	2019-09-09 13:19:45 UTC
+++ libctf/ctf-endian.h
@@ -24,10 +24,10 @@
 #include <stdint.h>
 #include "swap.h"
 
-#ifndef HAVE_ENDIAN_H
+#if !defined (HAVE_ENDIAN_H) || !defined (htole64)
 #ifndef WORDS_BIGENDIAN
-# define htole64(x) bswap_identity_64 ((x))
-# define le64toh(x) bswap_identity_64 ((x))
+# define htole64(x) (x)
+# define le64toh(x) (x)
 #else
 # define htole64(x) bswap_64 ((x))
 # define le64toh(x) bswap_64 ((x))
