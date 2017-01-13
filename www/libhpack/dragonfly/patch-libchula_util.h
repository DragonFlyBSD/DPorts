--- libchula/util.h.orig	2014-07-10 00:59:50.000000000 +0300
+++ libchula/util.h
@@ -74,7 +74,10 @@ ret_t   chula_atoi           (const char
 ret_t   chula_atol           (const char *str, long *ret_value);
 ret_t   chula_atob           (const char *str, bool *ret_value);
 int     chula_string_is_ipv6 (chula_buffer_t *ip);
+/* explicitly disabled on DragonFly */
+#ifndef __DragonFly__
 ret_t   chula_malloc_size    (const void *ptr, size_t *size);
+#endif
 
 /* Files and Directories
  */
