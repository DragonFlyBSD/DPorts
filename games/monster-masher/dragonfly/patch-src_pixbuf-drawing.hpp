--- src/pixbuf-drawing.hpp.orig	2007-01-06 16:16:30.000000000 +0000
+++ src/pixbuf-drawing.hpp
@@ -24,7 +24,7 @@
 #include <iterator>
 
 #include <gdkmm/pixbuf.h>
-#include <glib/gtypes.h>
+#include <glib.h>
 
 // scale pixbuf alpha values by scale / 256 (where scale <= 256)
 void scale_alpha(const Glib::RefPtr<Gdk::Pixbuf> &pixbuf, int scale);
