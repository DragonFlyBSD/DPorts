--- gdb/amd64-tdep.h.orig	2023-05-27 09:46:46 UTC
+++ gdb/amd64-tdep.h
@@ -144,4 +144,9 @@ extern int amd64nbsd_r_reg_offset[];
 /* Variables exported from amd64-obsd-tdep.c.  */
 extern int amd64obsd_r_reg_offset[];
 
+/* Variables exported from amd64-dfly-tdep.c.  */
+extern CORE_ADDR amd64dfly_sigtramp_start_addr;
+extern CORE_ADDR amd64dfly_sigtramp_end_addr;
+extern int amd64dfly_sc_reg_offset[];
+
 #endif /* amd64-tdep.h */
