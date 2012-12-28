--- dbg_mlc.c.intermediate	2012-12-28 16:16:35.000000000 +0100
+++ dbg_mlc.c	2012-12-28 16:17:05.000000000 +0100
@@ -456,7 +456,7 @@
     GC_register_displacement((word)sizeof(oh) + offset);
 }
 
-#if defined(__FreeBSD__)
+#if defined(__DragonFly__) || defined(__FreeBSD__)
 #include <dlfcn.h>
 static void GC_caller_func_offset(ad, symp, offp)
 const GC_word ad;
