--- dragonflybsd/Platform.c.orig	2018-04-10 13:42:59 UTC
+++ dragonflybsd/Platform.c
@@ -204,7 +204,21 @@ void Platform_setTasksValues(Meter* this
 }
 
 char* Platform_getProcessEnv(pid_t pid) {
-   // TODO
-   (void)pid;	// prevent unused warning
-   return NULL;
+   char *env = NULL, **fenv = NULL, *ptr = NULL;
+   size_t size = 0;
+
+   fenv = DragonFlyBSDGet_env(pid);
+
+   if (fenv) {
+      ptr = fenv[0];
+      while (ptr && *ptr) {
+         size += strlen(ptr) + 1;
+         ptr += strlen(ptr) + 1;
+      }
+      env = xMalloc(size+2);
+      memcpy(env, fenv[0], size);
+      env[size] = 0;
+      env[size+1] = 0;
+   }
+   return env;
 }
