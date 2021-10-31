--- gdb/i386-tdep.h.orig	2021-10-29 19:54:52.227305000 +0200
+++ gdb/i386-tdep.h	2021-10-29 19:56:13.315464000 +0200
@@ -472,12 +472,11 @@
 /* Functions and variables exported from i386-bsd-tdep.c.  */
 
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
 extern int i386obsd_sc_reg_offset[];
 extern int i386bsd_sc_reg_offset[];
 
