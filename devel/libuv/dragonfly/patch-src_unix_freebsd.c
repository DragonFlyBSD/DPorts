--- src/unix/freebsd.c.orig	2016-11-16 20:03:50.000000000 +0200
+++ src/unix/freebsd.c
@@ -75,7 +75,8 @@ uint64_t uv__hrtime(uv_clocktype_t type)
 
 
 #ifdef __DragonFly__
-int uv_exepath(char* buffer, size_t* size) {
+/* deprecated long ago, use KERN_PROC_PATHNAME sysctl */
+int uv_exepath_procfs(char* buffer, size_t* size) {
   char abspath[PATH_MAX * 2 + 1];
   ssize_t abspath_size;
 
@@ -97,7 +98,8 @@ int uv_exepath(char* buffer, size_t* siz
 
   return 0;
 }
-#else
+#endif
+
 int uv_exepath(char* buffer, size_t* size) {
   char abspath[PATH_MAX * 2 + 1];
   int mib[4];
@@ -127,7 +129,6 @@ int uv_exepath(char* buffer, size_t* siz
 
   return 0;
 }
-#endif
 
 uint64_t uv_get_free_memory(void) {
   int freecount;
