--- gdb/amd64-tdep.h.orig	2017-06-04 15:51:26 UTC
+++ gdb/amd64-tdep.h
@@ -138,8 +138,8 @@ extern int amd64nbsd_r_reg_offset[];
 extern int amd64obsd_r_reg_offset[];
 
 /* Variables exported from amd64-fbsd-tdep.c.  */
-extern CORE_ADDR amd64fbsd_sigtramp_start_addr;
-extern CORE_ADDR amd64fbsd_sigtramp_end_addr;
-extern int amd64fbsd_sc_reg_offset[];
+extern CORE_ADDR amd64dfly_sigtramp_start_addr;
+extern CORE_ADDR amd64dfly_sigtramp_end_addr;
+extern int amd64dfly_sc_reg_offset[];
 
 #endif /* amd64-tdep.h */
