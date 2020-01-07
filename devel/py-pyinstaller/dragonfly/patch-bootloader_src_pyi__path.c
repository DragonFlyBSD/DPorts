--- bootloader/src/pyi_path.c.orig	2019-07-09 19:14:04 UTC
+++ bootloader/src/pyi_path.c
@@ -293,7 +293,7 @@ pyi_path_executable(char *execfile, cons
      */
     #if defined(__linux__)
     result = readlink("/proc/self/exe", execfile, PATH_MAX);  /* Linux */
-    #elif defined(__FreeBSD__)
+    #elif defined(__FreeBSD__) || defined(__DragonFly__)
     result = readlink("/proc/curproc/file", execfile, PATH_MAX);  /* FreeBSD */
     #elif defined(__sun)
     result = readlink("/proc/self/path/a.out", execfile, PATH_MAX);  /* Solaris */
