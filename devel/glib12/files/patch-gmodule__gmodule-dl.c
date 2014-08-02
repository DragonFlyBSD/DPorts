
$FreeBSD: head/devel/glib12/files/patch-gmodule__gmodule-dl.c 363362 2014-07-29 17:12:47Z adamw $

--- gmodule/gmodule-dl.c	2001/12/12 04:39:42	1.1
+++ gmodule/gmodule-dl.c	2001/12/12 04:41:05
@@ -100,6 +100,7 @@
 static gpointer
 _g_module_self (void)
 {
+#ifndef __FreeBSD__
   gpointer handle;
   
   /* to query symbols from the program itself, special link options
@@ -111,6 +112,9 @@
     g_module_set_error (fetch_dlerror ());
   
   return handle;
+#else
+  return RTLD_DEFAULT;
+#endif
 }
 
 static void
