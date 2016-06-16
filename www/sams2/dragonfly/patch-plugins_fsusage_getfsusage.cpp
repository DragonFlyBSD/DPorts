--- plugins/fsusage/getfsusage.cpp.orig	2009-11-05 09:44:56.000000000 +0200
+++ plugins/fsusage/getfsusage.cpp
@@ -16,6 +16,10 @@ using namespace std;
 #include <string.h>
 #include <limits.h>
 
+#ifdef __DragonFly__
+#include <machine/int_limits.h>
+#endif
+
 #if HAVE_SYS_MOUNT_H
 #include <sys/mount.h>
 #endif
