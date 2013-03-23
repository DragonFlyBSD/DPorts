--- libslab/application-tile.c.orig	2008-12-19 23:42:06.000000000 +0000
+++ libslab/application-tile.c
@@ -22,7 +22,7 @@
 
 #include <string.h>
 #include <glib/gi18n.h>
-#include <glib/gfileutils.h>
+#include <glib.h>
 #include <glib/gstdio.h>
 #include <gconf/gconf-client.h>
 #include <unistd.h>
