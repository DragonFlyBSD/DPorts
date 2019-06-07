--- src/plugins/grass/qtermwidget/kpty.cpp.orig	2019-04-19 12:00:05 UTC
+++ src/plugins/grass/qtermwidget/kpty.cpp
@@ -28,7 +28,11 @@
 
 
 #if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
+#ifdef __DragonFly__
+#define HAVE_LOGINX
+#else
 #define HAVE_UTEMPTER
+#endif
 #define HAVE_UTMPX
 #define HAVE_LOGIN
 #define HAVE_LIBUTIL_H
@@ -71,6 +75,10 @@
 #include <unistd.h>
 #include <grp.h>
 
+#ifdef __DragonFly__
+#include <limits.h>  // for PATH_MAX
+#endif
+
 #if defined(HAVE_PTY_H)
 # include <pty.h>
 #endif
