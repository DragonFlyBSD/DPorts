--- libchula/buffer.h.orig	2014-07-10 00:59:50.000000000 +0300
+++ libchula/buffer.h
@@ -47,6 +47,10 @@
 #include <limits.h>
 #include <stdint.h>
 
+#ifdef __DragonFly__
+#include <netinet/in.h> // for htons() and htonl()
+#endif
+
 typedef struct {
 	uint8_t  *buf;        /**< Memory chunk           */
 	uint32_t  size;       /**< Total amount of memory */
@@ -72,7 +76,10 @@ ret_t chula_buffer_free
 ret_t chula_buffer_init                 (chula_buffer_t  *buf);
 ret_t chula_buffer_mrproper             (chula_buffer_t  *buf);
 void  chula_buffer_fake                 (chula_buffer_t  *buf, const char *str, uint32_t len);
+/* explicitly disabled on DragonFly */
+#ifndef __DragonFly__
 ret_t chula_buffer_import               (chula_buffer_t  *buf, char *str, uint32_t len);
+#endif
 
 void  chula_buffer_clean                (chula_buffer_t  *buf);
 ret_t chula_buffer_dup                  (chula_buffer_t  *buf, chula_buffer_t **dup);
