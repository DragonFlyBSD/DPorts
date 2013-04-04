--- src/core/k9tools.cpp.orig	2009-12-06 10:13:36.000000000 +0000
+++ src/core/k9tools.cpp
@@ -13,7 +13,7 @@
 #include "k9common.h"
 #include <QDir>
 #include <QComboBox>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/mount.h>
 #else
 #include <sys/vfs.h>
