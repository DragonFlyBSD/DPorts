--- src/qtwebkit-renderer.cpp.orig	2018-09-02 22:04:19 UTC
+++ src/qtwebkit-renderer.cpp
@@ -19,7 +19,7 @@ along with this program.  If not, see <h
 #include <unistd.h>
 #include <sys/inotify.h>
 #include <sys/mman.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/stat.h>
 #endif
 #ifdef __linux__
