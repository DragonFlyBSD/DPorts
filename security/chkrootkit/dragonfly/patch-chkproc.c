--- chkproc.c.orig
+++ chkproc.c
@@ -58,7 +58,7 @@
 		Thanks to DS Store
 */
 
-#if !defined(__linux__) && !defined(__FreeBSD__) && !defined(__sun)
+#if !defined(__linux__) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__sun)
 int main (){ return 0; }
 #else
 #include <stdio.h>
@@ -329,7 +329,7 @@
 	    j = readlink ("./exe", path, sizeof(path));
 	    path[(j < sizeof(path)) ? j : sizeof(path) - 1] = 0;
 	    printf ("EXE %5d: %s\n", i, path);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 	    j = readlink ("./file", path, sizeof(path));
 	    path[(j < sizeof(path)) ? j : sizeof(path) - 1] = 0;
 	    printf ("FILE %5d: %s\n", i, path);
@@ -350,7 +350,7 @@
          }
 #endif
       }
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
       else
       {
          errno = 0;
