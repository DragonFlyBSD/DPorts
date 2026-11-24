--- src/platform/xdg/desktopentryparser.cpp.orig
+++ src/platform/xdg/desktopentryparser.cpp
@@ -7,7 +7,7 @@
 using namespace albert::detail;
 using namespace std;
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #    include <libintl.h>
 #    define dgettext(package, str) gettext(str)
 #endif
