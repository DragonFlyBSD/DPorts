--- src/dlload.c.orig	2016-09-20 05:54:21.000000000 +0300
+++ src/dlload.c
@@ -197,7 +197,7 @@ static void *jl_load_dynamic_library_(co
             goto done;
     }
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
     // check map of versioned libs from "libX" to full soname "libX.so.ver"
     handle = jl_dlopen_soname(modname, strlen(modname), flags);
     if (handle)
