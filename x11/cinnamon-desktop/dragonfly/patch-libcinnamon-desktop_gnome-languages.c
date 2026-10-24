--- libcinnamon-desktop/gnome-languages.c.orig	2026-10-23 00:00:00 UTC
+++ libcinnamon-desktop/gnome-languages.c
@@ -31,6 +31,11 @@
 #include <langinfo.h>
 #include <sys/stat.h>
 
+/* DragonFly has d_type but not FreeBSD's DTTOIF() */
+#ifndef DTTOIF
+#define DTTOIF(dirtype)	((dirtype) << 12)
+#endif
+
 #include <glib.h>
 #include <glib/gi18n-lib.h>
 #include <glib/gstdio.h>
