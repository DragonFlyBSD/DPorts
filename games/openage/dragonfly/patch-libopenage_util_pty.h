--- libopenage/util/pty.h.orig
+++ libopenage/util/pty.h
@@ -4,7 +4,7 @@
 
 #ifdef __APPLE__
 	#include <util.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 	#include <libutil.h>
 	#include <sys/ioctl.h>
 	#include <sys/types.h>
