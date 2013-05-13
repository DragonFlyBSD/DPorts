--- solenv/gbuild/Module.mk.orig	2013-05-02 15:55:29.000000000 +0000
+++ solenv/gbuild/Module.mk
@@ -139,7 +139,7 @@ gb_Module_DEVINSTALLHINT=
 debugrun :| build
 endif
 
-all : build unitcheck
+all : build
 	$(info $(gb_Module_BUILDHINT))
 
 build : 
