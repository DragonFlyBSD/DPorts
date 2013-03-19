--- src/storage.cpp.orig	2013-01-06 06:42:36.000000000 +0000
+++ src/storage.cpp
@@ -90,7 +90,7 @@ POSSIBILITY OF SUCH DAMAGE.
 #include <sys/statfs.h>
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 // for statfs()
 #include <sys/param.h>
 #include <sys/mount.h>
