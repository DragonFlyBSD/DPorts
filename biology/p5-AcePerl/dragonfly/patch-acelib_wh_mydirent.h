--- acelib/wh/mydirent.h.bak	2015-12-11 20:19:21.000000000 +0200
+++ acelib/wh/mydirent.h
@@ -55,7 +55,7 @@
 extern char *getwd(char *pathname) ;
 #endif /* HP || SOLARIS || WIN32 */
 
-#if defined (POSIX) || defined(SUN) || defined(SUNSVR4) || defined(SOLARIS) || defined(DEC) || defined(ALPHA) || defined(SGI) || defined(LINUX) || defined(HP) || defined (INTEL_SOLARIS) || defined (FREEBSD)
+#if defined (POSIX) || defined(SUN) || defined(SUNSVR4) || defined(SOLARIS) || defined(DEC) || defined(ALPHA) || defined(SGI) || defined(LINUX) || defined(HP) || defined (INTEL_SOLARIS) || defined (FREEBSD) || defined(DRAGONFLY)
 #include <dirent.h>
   typedef struct dirent MYDIRENT ;
 #endif
