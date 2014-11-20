--- gmodule/gmodule-dl.c.orig	2014-11-19 17:55:03.653329000 +0100
+++ gmodule/gmodule-dl.c	2014-11-19 17:56:34.063455000 +0100
@@ -105,7 +105,7 @@
 static gpointer
 _g_module_self (void)
 {
-#ifndef __FreeBSD__
+#if ! defined(__FreeBSD__) && ! defined(__DragonFly__)
   gpointer handle;
   
   /* to query symbols from the program itself, special link options
