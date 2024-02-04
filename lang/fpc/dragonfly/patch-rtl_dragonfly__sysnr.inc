--- rtl/dragonfly//sysnr.inc.orig	2014-12-07 20:35:05 UTC
+++ rtl/dragonfly//sysnr.inc
@@ -341,3 +341,8 @@ const
  syscall_nr_linkat                      = 531;
  syscall_nr_eaccess                     = 532;
  syscall_nr_lpathconf                   = 533;
+ syscall_nr_procctl                     = 536;
+ syscall_nr_chflagsat                   = 537;
+ syscall_nr_pipe2                       = 538;
+ 
+
