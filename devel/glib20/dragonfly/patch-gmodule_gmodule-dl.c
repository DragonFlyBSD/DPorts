--- gmodule/gmodule-dl.c.orig	Mon Aug 26 10:15:22 2024
+++ gmodule/gmodule-dl.c	Wed Apr
@@ -167,7 +167,7 @@ _g_module_self (void)
    * NULL is given, dlsym returns an appropriate pointer.
    */
   lock_dlerror ();
-#if defined(__BIONIC__) || defined(__NetBSD__) || defined(__FreeBSD__)
+#if defined(__BIONIC__) || defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
   handle = RTLD_DEFAULT;
 #else
   handle = dlopen (NULL, RTLD_GLOBAL | RTLD_LAZY);
@@ -182,7 +182,7 @@ _g_module_self (void)
 static void
 _g_module_close (gpointer handle)
 {
-#if defined(__BIONIC__) || defined(__NetBSD__) || defined(__FreeBSD__)
+#if defined(__BIONIC__) || defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
   if (handle != RTLD_DEFAULT)
 #endif
     {
