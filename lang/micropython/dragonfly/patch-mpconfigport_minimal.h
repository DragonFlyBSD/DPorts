--- mpconfigport_minimal.h.orig	2015-11-23 23:27:33.000000000 +0200
+++ mpconfigport_minimal.h
@@ -127,7 +127,7 @@ typedef const void *machine_const_ptr_t;
     mp_obj_t keyboard_interrupt_obj;
 
 // We need to provide a declaration/definition of alloca()
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdlib.h>
 #else
 #include <alloca.h>
