--- generic/itcl_methods.c.orig	2011-07-15 18:30:52 UTC
+++ generic/itcl_methods.c
@@ -1145,7 +1145,7 @@ Itcl_CreateArg(name, init)
     nameLen = strlen(name);
 
     localPtr = (CompiledLocal*)ckalloc(
-        (unsigned)(sizeof(CompiledLocal)-sizeof(localPtr->name) + nameLen+1)
+        TclOffset(CompiledLocal, name) + nameLen+1
     );
 
     localPtr->nextPtr = NULL;
