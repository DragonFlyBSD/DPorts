--- src/gio/gio.cc.orig	2015-11-07 23:04:08 UTC
+++ src/gio/gio.cc
@@ -29,6 +29,9 @@
 #include <libaudcore/plugin.h>
 #include <libaudcore/runtime.h>
 
+#undef getc
+#undef feof
+#undef ungetc
 
 static const char gio_about[] =
  N_("GIO Plugin for Audacious\n"
