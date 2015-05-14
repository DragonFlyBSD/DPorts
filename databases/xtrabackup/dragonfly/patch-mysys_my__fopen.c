--- mysys/my_fopen.c.orig	2014-10-29 08:24:20 UTC
+++ mysys/my_fopen.c
@@ -18,7 +18,7 @@
 #include <errno.h>
 #include "mysys_err.h"
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) && !defined(__DragonFly__)
 extern int getosreldate(void);
 #endif
 
@@ -143,7 +143,7 @@ static FILE *my_win_freopen(const char *
   return stream;
 }
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
 
 /* No close operation hook. */
 
@@ -212,7 +212,7 @@ FILE *my_freopen(const char *path, const
 
 #if defined(_WIN32)
   result= my_win_freopen(path, mode, stream);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
   /*
     XXX: Once the fix is ported to the stable releases, this should
          be dependent upon the specific FreeBSD versions. Check at:
