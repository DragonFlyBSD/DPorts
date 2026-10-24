--- gmodule/gmodule-dl.c.orig	2026-02-20 00:00:00 UTC
+++ gmodule/gmodule-dl.c
@@ -167,7 +167,7 @@ _g_module_self (void)
    * NULL is given, dlsym returns an appropriate pointer.
    */
   lock_dlerror ();
-#if defined(__ANDROID__) || defined(__NetBSD__)
+#if defined(__ANDROID__) || defined(__NetBSD__) || defined(__DragonFly__)
   handle = RTLD_DEFAULT;
 #else
   handle = dlopen (NULL, RTLD_GLOBAL | RTLD_LAZY);
@@ -182,7 +182,7 @@ _g_module_close (gpointer handle)
 static void
 _g_module_close (gpointer handle)
 {
-#if defined(__ANDROID__) || defined(__NetBSD__)
+#if defined(__ANDROID__) || defined(__NetBSD__) || defined(__DragonFly__)
   if (handle != RTLD_DEFAULT)
 #endif
     {
