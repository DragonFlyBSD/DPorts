--- libchula/buffer.c.orig	2014-07-10 00:59:50.000000000 +0300
+++ libchula/buffer.c
@@ -191,6 +191,8 @@ chula_buffer_fake (chula_buffer_t *buf,
     buf->size = len + 1;
 }
 
+/* explicitly disabled on DragonFly */
+#ifndef __DragonFly__
 ret_t
 chula_buffer_import (chula_buffer_t *buf, char *str, uint32_t len)
 {
@@ -210,6 +212,7 @@ chula_buffer_import (chula_buffer_t *buf
     buf->size = s;
     return ret_ok;
 }
+#endif
 
 
 ret_t
