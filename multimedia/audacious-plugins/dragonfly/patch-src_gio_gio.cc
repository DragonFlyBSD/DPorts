--- src/gio/gio.cc.orig	2015-12-29 02:29:53 UTC
+++ src/gio/gio.cc
@@ -29,6 +29,10 @@
 #include <libaudcore/plugin.h>
 #include <libaudcore/runtime.h>
 
+#undef getc
+#undef feof
+#undef ungetc
+
 static const char gio_about[] =
  N_("GIO Plugin for Audacious\n"
     "Copyright 2009-2012 John Lindgren");
