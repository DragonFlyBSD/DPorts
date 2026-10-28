--- bootloader/src/pyi_security.c.orig
+++ bootloader/src/pyi_security.c
@@ -173,7 +173,7 @@
 
 #if defined(__linux__) || defined(__CYGWIN__) || defined(__NetBSD__)
     const char *proc_path_fmt = "/proc/%d/exe";
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     const char *proc_path_fmt = "/proc/%d/file";
 #elif defined(__sun)
     const char *proc_path_fmt = "/proc/%d/path/a.out";
