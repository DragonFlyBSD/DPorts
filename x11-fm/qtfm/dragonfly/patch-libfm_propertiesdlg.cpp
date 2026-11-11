--- libfm/propertiesdlg.cpp.orig
+++ libfm/propertiesdlg.cpp
@@ -29,7 +29,7 @@
 #include "propertiesdlg.h"
 #include "icondlg.h"
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
 #include <sys/mount.h>
 #else
 #include <sys/vfs.h>
