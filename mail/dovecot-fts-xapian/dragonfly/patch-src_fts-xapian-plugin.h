--- src/fts-xapian-plugin.h.orig
+++ src/fts-xapian-plugin.h
@@ -22,7 +22,7 @@
 #include "settings.h"
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__APPLE__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
