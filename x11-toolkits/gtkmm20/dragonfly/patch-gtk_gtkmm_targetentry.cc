--- gtk/gtkmm/targetentry.cc.orig	2013-05-29 12:19:40.000000000 +0000
+++ gtk/gtkmm/targetentry.cc
@@ -21,6 +21,7 @@
  */
 
 #include <gtkmm/targetentry.h>
+#include <cstring>
 
 namespace Gtk
 {
