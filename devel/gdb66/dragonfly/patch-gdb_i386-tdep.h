--- gdb/i386-tdep.h.orig	2006-01-21 20:59:50.000000000 +0000
+++ gdb/i386-tdep.h
@@ -202,12 +202,11 @@ extern void i386_svr4_init_abi (struct g
 /* Functions and variables exported from i386bsd-tdep.c.  */
 
 extern void i386bsd_init_abi (struct gdbarch_info, struct gdbarch *);
-extern CORE_ADDR i386fbsd_sigtramp_start_addr;
-extern CORE_ADDR i386fbsd_sigtramp_end_addr;
+extern CORE_ADDR i386dfly_sigtramp_start_addr;
+extern CORE_ADDR i386dfly_sigtramp_end_addr;
 extern CORE_ADDR i386obsd_sigtramp_start_addr;
 extern CORE_ADDR i386obsd_sigtramp_end_addr;
-extern int i386fbsd4_sc_reg_offset[];
-extern int i386fbsd_sc_reg_offset[];
+extern int i386dfly_sc_reg_offset[];
 extern int i386nbsd_sc_reg_offset[];
 extern int i386obsd_sc_reg_offset[];
 extern int i386bsd_sc_reg_offset[];
