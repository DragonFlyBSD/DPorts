--- gdb/i386-bsd-nat.c.orig	2013-05-17 18:49:06.543945000 +0000
+++ gdb/i386-bsd-nat.c
@@ -353,6 +353,8 @@ _initialize_i386bsd_nat (void)
 #define SC_REG_OFFSET i386nbsd_sc_reg_offset
 #elif defined (OpenBSD)
 #define SC_REG_OFFSET i386obsd_sc_reg_offset
+#elif defined (DragonFly)
+#define SC_REG_OFFSET i386dfly_sc_reg_offset
 #endif
 
 #ifdef SC_REG_OFFSET
