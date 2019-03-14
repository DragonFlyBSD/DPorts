--- libi3/get_exe_path.c.orig	2014-06-15 17:12:43.000000000 +0000
+++ libi3/get_exe_path.c
@@ -20,11 +20,12 @@ char *get_exe_path(const char *argv0) {
     char *destpath = smalloc(destpath_size);
     char *tmp = smalloc(tmp_size);
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__linux__) || defined(__DragonFly__) \
+ || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
 /* Linux and Debian/kFreeBSD provide /proc/self/exe */
 #if defined(__linux__) || defined(__FreeBSD_kernel__)
     const char *exepath = "/proc/self/exe";
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     const char *exepath = "/proc/curproc/file";
 #endif
     ssize_t linksize;
