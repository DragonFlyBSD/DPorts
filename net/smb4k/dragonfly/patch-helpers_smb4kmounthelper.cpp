--- helpers/smb4kmounthelper.cpp.orig	2026-11-05 10:49:24 UTC
+++ helpers/smb4kmounthelper.cpp
@@ -26,6 +26,11 @@
 #include <fcntl.h>
 #include <sys/stat.h>
 
+// DragonFly has no O_PATH.
+#ifndef O_PATH
+#define O_PATH 0
+#endif
+
 using namespace Smb4KGlobal;
 
 KAUTH_HELPER_MAIN("org.kde.smb4k.mounthelper", Smb4KMountHelper);
