--- generic/itcl_cmds.c.orig	2011-07-15 18:30:52 UTC
+++ generic/itcl_cmds.c
@@ -866,7 +866,7 @@ Itcl_ProtectionCmd(clientData, interp, o
     int objc;                /* number of arguments */
     Tcl_Obj *CONST objv[];   /* argument objects */
 {
-    int pLevel = (int)clientData;
+    int pLevel = (int)(size_t)clientData;
 
     int result;
     int oldLevel;
