--- gdb/i386-bsd-nat.c.orig	2018-09-05 07:27:13 UTC
+++ gdb/i386-bsd-nat.c
@@ -284,6 +284,8 @@ _initialize_i386bsd_nat (void)
 #define SC_REG_OFFSET i386nbsd_sc_reg_offset
 #elif defined (OpenBSD)
 #define SC_REG_OFFSET i386obsd_sc_reg_offset
+#elif defined (DragonFly)
+#define SC_REG_OFFSET i386dfly_sc_reg_offset
 #endif
 
 #ifdef SC_REG_OFFSET
