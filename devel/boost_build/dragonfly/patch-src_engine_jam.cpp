--- src/engine/jam.cpp.orig	2020-12-29 17:36:17 UTC
+++ src/engine/jam.cpp
@@ -737,7 +737,7 @@ char * executable_path( char const * arg
     const char * execname = getexecname();
     return execname ? strdup( execname ) : NULL;
 }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/sysctl.h>
 char * executable_path( char const * argv0 )
 {
