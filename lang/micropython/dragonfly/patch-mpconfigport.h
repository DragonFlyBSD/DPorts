--- mpconfigport.h.orig	2015-11-23 23:27:33.000000000 +0200
+++ mpconfigport.h
@@ -228,7 +228,7 @@ extern const struct _mp_obj_fun_builtin_
     void *mmap_region_head; \
 
 // We need to provide a declaration/definition of alloca()
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdlib.h>
 #else
 #include <alloca.h>
