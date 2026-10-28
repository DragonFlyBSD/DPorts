--- src/parser_common.c.orig	2026-10-26 01:47:15 UTC
+++ src/parser_common.c
@@ -13,7 +13,9 @@
  */
 
 #define _GNU_SOURCE
-#define _POSIX_C_SOURCE 200809L /* strdup, strndup */
+#if !defined (__DragonFly__) /* hides realpath */
+# define _POSIX_C_SOURCE 200809L /* strdup, strndup */
+#endif
 
 #ifdef __APPLE__
 #define _DARWIN_C_SOURCE /* F_GETPATH */
