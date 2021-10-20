--- src/memcache_binary_protocol.c.orig	2021-01-21 18:50:21.118445000 +0100
+++ src/memcache_binary_protocol.c	2021-01-21 18:51:22.258794000 +0100
@@ -36,6 +36,15 @@
 #include "memcache_pool.h"
 #include "ext/standard/php_smart_string.h"
 
+#ifdef __DragonFly__
+#include <sys/endian.h>
+#ifndef __BYTE_ORDER
+#define __BYTE_ORDER   _BYTE_ORDER
+#define __LITTLE_ENDIAN        _LITTLE_ENDIAN
+#define __BIG_ENDIAN   _BIG_ENDIAN
+#endif
+#endif
+
 #ifdef htonll
 #undef htonll
 #endif
@@ -49,9 +58,14 @@
 # define ntohll(x) (x)
 # define htonll(x) (x)
 #elif __BYTE_ORDER == __LITTLE_ENDIAN
+#ifdef __DragonFly__
+# define ntohll(x) bswap64(x)
+# define htonll(x) bswap64(x)
+#else
 # include <byteswap.h>
 # define ntohll(x) bswap_64(x)
 # define htonll(x) bswap_64(x)
+#endif
 #else
 # error "Could not determine byte order: __BYTE_ORDER uncorrectly defined"
 #endif
