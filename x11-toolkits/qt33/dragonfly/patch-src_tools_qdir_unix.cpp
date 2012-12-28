--- src/tools/qdir_unix.cpp.orig	2007-02-02 15:01:05.000000000 +0100
+++ src/tools/qdir_unix.cpp	2012-12-28 00:00:14.000000000 +0100
@@ -53,6 +53,9 @@
 #include <limits.h>
 #include <errno.h>
 
+#ifndef MAXNAMLEN
+#define MAXNAMLEN NAME_MAX
+#endif
 
 void QDir::slashify( QString& )
 {
