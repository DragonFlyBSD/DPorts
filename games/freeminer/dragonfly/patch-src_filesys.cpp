--- src/filesys.cpp.orig	2014-11-24 19:24:31.000000000 +0200
+++ src/filesys.cpp
@@ -27,7 +27,7 @@ along with Freeminer.  If not, see <http
 #include <string.h>
 #include <errno.h>
 #include <fstream>
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/time.h>
 #endif
 #include "log.h"
