--- src/folder.c.orig	2018-12-02 10:58:48 UTC
+++ src/folder.c
@@ -50,7 +50,7 @@ static int get_exec_path (char *exec_pat
 
   const size_t len = strlen (exec_path);
 
-  #elif defined (__FreeBSD__)
+  #elif defined (__FreeBSD__) || defined(__DragonFly__)
 
   #include <sys/sysctl.h>
 
