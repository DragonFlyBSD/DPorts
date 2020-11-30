--- lib/logger.c.orig	2020-08-28 03:04:35 UTC
+++ lib/logger.c
@@ -22,6 +22,7 @@
 #include "grn_ctx_impl.h"
 
 #include <stdio.h>
+#include <stdint.h>
 #include <string.h>
 #include <sys/stat.h>
 
@@ -545,7 +546,7 @@ grn_logger_putv(grn_ctx *ctx,
         }
 #ifdef HAVE_PTHREAD_H
         grn_snprintf(lbuf_current, lbuf_rest_size, lbuf_rest_size,
-                     "%s%08x", prefix, (uint32_t)pthread_self());
+                     "%s%jx", prefix, (uintmax_t)pthread_self());
 #elif defined(WIN32) /* HAVE_PTHREAD_H */
         grn_snprintf(lbuf_current, lbuf_rest_size, lbuf_rest_size,
                      "%s%08ld", prefix, GetCurrentThreadId());
