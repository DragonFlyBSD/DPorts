--- src/parser_common.c.orig
+++ src/parser_common.c
@@ -13,7 +13,7 @@
  */
 
 #define _GNU_SOURCE
-#if !defined (__FreeBSD__) /* hides asprintf */
+#if !defined (__FreeBSD__) && !defined (__DragonFly__) /* hides asprintf */
 # define _POSIX_C_SOURCE 200809L /* strdup, strndup */
 #endif
 
