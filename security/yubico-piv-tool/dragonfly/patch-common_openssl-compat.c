--- common/openssl-compat.c.orig	2020-06-08 09:47:15 UTC
+++ common/openssl-compat.c
@@ -193,6 +193,7 @@ static inline int constant_time_select_i
 static inline void err_clear_last_constant_time(int clear) {
 }
 
+#ifndef __DragonFly__
 static inline void freezero(void *p, size_t s) {
     memset(p, 0, s);
     free(p);
@@ -223,6 +224,7 @@ static int timingsafe_memcmp(const void
 
     return (res);
 }
+#endif
 
 static inline void RSAerror(int err) {
 }
