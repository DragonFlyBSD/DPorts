--- libchula/util.c.orig	2014-07-10 00:59:50.000000000 +0300
+++ libchula/util.c
@@ -2034,6 +2034,8 @@ chula_tmp_dir_copy (chula_buffer_t *buff
 }
 
 
+/* explicitly disabled on DragonFly */
+#ifndef __DragonFly__
 ret_t
 chula_malloc_size (const void *ptr, size_t *size)
 {
@@ -2050,3 +2052,4 @@ chula_malloc_size (const void *ptr, size
 #endif
     return ret_error;
 }
+#endif
