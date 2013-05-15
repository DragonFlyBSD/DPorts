--- gdb/i386bsd-nat.c.orig	2005-12-17 22:34:01.000000000 +0000
+++ gdb/i386bsd-nat.c
@@ -350,6 +350,8 @@ _initialize_i386bsd_nat (void)
 #define SC_REG_OFFSET i386nbsd_sc_reg_offset
 #elif defined (OpenBSD)
 #define SC_REG_OFFSET i386obsd_sc_reg_offset
+#elif defined (DragonFly)
+#define SC_REG_OFFSET i386dfly_sc_reg_offset
 #endif
 
 #ifdef SC_REG_OFFSET
