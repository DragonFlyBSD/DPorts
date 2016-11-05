On DragonFly 4.7 __weak_reference() macro requires that symbol should already be
defined/visible when creating weak ref (prevents dangling references).
If dangling weak refs are a must, the __weak_reference_asm() should be used.

--- util.c.intermediate	2016-11-05 08:37:16.000000000 +0200
+++ util.c
@@ -1675,7 +1675,7 @@ xregerror(int errcode, const regex_t* pr
 
 #ifndef __linux__
 // XXX For GCC 4.4 or older
-__weak_reference(my_unreachable, __builtin_unreachable);
 void my_unreachable() { abort(); }
+__weak_reference(my_unreachable, __builtin_unreachable);
 #endif
 
