--- src/storage.cpp.orig	2019-12-19 14:40:45 UTC
+++ src/storage.cpp
@@ -56,7 +56,7 @@ POSSIBILITY OF SUCH DAMAGE.
 #include <sys/statfs.h>
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 // for statfs()
 #include <sys/param.h>
 #include <sys/mount.h>
