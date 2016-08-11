Current DragonFly has identical behaviour to FreeBSD and return full path.

--- node_build/dependencies/libuv/src/unix/freebsd.c.orig	2016-06-15 00:58:54.000000000 +0300
+++ node_build/dependencies/libuv/src/unix/freebsd.c
@@ -81,17 +81,10 @@ int uv_exepath(char* buffer, size_t* siz
   if (buffer == NULL || size == NULL)
     return -EINVAL;
 
-#ifdef __DragonFly__
-  mib[0] = CTL_KERN;
-  mib[1] = KERN_PROC;
-  mib[2] = KERN_PROC_ARGS;
-  mib[3] = getpid();
-#else
   mib[0] = CTL_KERN;
   mib[1] = KERN_PROC;
   mib[2] = KERN_PROC_PATHNAME;
   mib[3] = -1;
-#endif
 
   cb = *size;
   if (sysctl(mib, 4, buffer, &cb, NULL, 0))
