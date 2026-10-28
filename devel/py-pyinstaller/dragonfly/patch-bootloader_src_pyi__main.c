--- bootloader/src/pyi_main.c.orig
+++ bootloader/src/pyi_main.c
@@ -1371,7 +1371,7 @@
      * resolution. */
 #if defined(__linux__) || defined(__CYGWIN__) || defined(__NetBSD__)
     const char *proc_path = "/proc/self/exe";
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     const char *proc_path = "/proc/curproc/file";
 #elif defined(__sun)
     const char *proc_path = "/proc/self/path/a.out";
