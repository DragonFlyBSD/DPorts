--- rtl/fpmake.inc.orig	2009-07-17 14:05:19.000000000 +0000
+++ rtl/fpmake.inc
@@ -2,7 +2,7 @@
 Const
   GraphDir = 'inc/graph/';
   SysUtilsDir = 'objpas/sysutils/';
-  Unixes = [darwin,freebsd,linux,netbsd,openbsd];
+  Unixes = [darwin,dragonfly,freebsd,linux,netbsd,openbsd];
 
 
 Function CurrentOS : String;
