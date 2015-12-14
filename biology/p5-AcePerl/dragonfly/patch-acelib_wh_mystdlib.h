--- acelib/wh/mystdlib.h.bak	2015-12-11 20:19:21.000000000 +0200
+++ acelib/wh/mystdlib.h
@@ -162,7 +162,7 @@ char *DosToPosix(char *path) ; /* define
 
 #if defined(POSIX) || defined(LINUX) || defined(SOLARIS) || defined(SGI) || \
 	defined(HP) || defined(WIN32) || defined(INTEL_SOLARIS) || \
-	defined(FREEBSD)
+	defined(FREEBSD) || defined(DRAGONFLY)
 
 #ifdef WIN32
 #include <mbctype.h>
