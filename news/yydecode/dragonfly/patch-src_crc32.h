--- src/crc32.h.orig	2002-09-26 16:39:18.000000000 +0200
+++ src/crc32.h
@@ -1,6 +1,8 @@
 #ifndef _CRC32_H
 #define _CRC32_H 1
 
+#include "config.h"
+
 #ifndef HAVE_U_INT32_T
 # ifdef HAVE_UINT32_T
    typedef uint32_t u_int32_t;
