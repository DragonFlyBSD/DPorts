On DragonFly 4.7 __weak_reference() macro requires that symbol should already be
defined/visible when creating weak ref (prevents dangling references).
If dangling weak refs are a must, the __weak_reference_asm() should be used.

--- libf2c/MAIN.c.intermediate	2016-11-03 09:08:42.000000000 +0200
+++ libf2c/MAIN.c
@@ -9,10 +9,10 @@
 #include <stdlib.h>
 #include <sys/cdefs.h>
 
-__weak_reference(missing_MAIN__,MAIN__);
-
 void missing_MAIN__ (void)
 {
     fprintf(stderr, "The Fortran main program is missing.\n");
     abort();
 }
+
+__weak_reference(missing_MAIN__,MAIN__);
