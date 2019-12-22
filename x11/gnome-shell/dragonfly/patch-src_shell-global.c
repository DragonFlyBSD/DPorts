--- src/shell-global.c.orig	2018-07-18 21:01:37 UTC
+++ src/shell-global.c
@@ -40,7 +40,7 @@
 #include <malloc.h>
 #endif
 
-#if defined __OpenBSD__ || defined __FreeBSD__
+#if defined __OpenBSD__ || defined __FreeBSD__ || defined __DragonFly__
 #include <sys/sysctl.h>
 #endif
 
@@ -1124,7 +1124,7 @@ shell_global_reexec_self (ShellGlobal *g
   }
 
   g_ptr_array_add (arr, NULL);
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
   char *buf;
   char *buf_p;
   char *buf_end;
@@ -1166,7 +1166,7 @@ shell_global_reexec_self (ShellGlobal *g
   execvp (arr->pdata[0], (char**)arr->pdata);
   g_warning ("failed to reexec: %s", g_strerror (errno));
   g_ptr_array_free (arr, TRUE);
-#if defined __linux__ || defined __FreeBSD__
+#if defined __linux__ || defined __FreeBSD__ || defined __DragonFly__
   g_free (buf);
 #elif defined __OpenBSD__
   g_free (args);
