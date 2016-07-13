--- src/writers/clist.cc.orig	2003-01-06 09:27:14.000000000 +0200
+++ src/writers/clist.cc
@@ -20,6 +20,7 @@
 
 #include "clist.hh"
 #include "../strsep.h"
+#include <cstring>
 
 static Gtk_CList Gtk_CList(false);
 
