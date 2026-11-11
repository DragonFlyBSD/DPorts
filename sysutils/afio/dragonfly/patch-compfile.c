--- compfile.c.orig
+++ compfile.c
@@ -224,7 +224,7 @@
  * version;
  */
 
-#if ( defined(sun) && defined(__svr4__) ) || defined(__FreeBSD__)
+#if ( defined(sun) && defined(__svr4__) ) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <dirent.h>
 #else
 #include <sys/dir.h>
