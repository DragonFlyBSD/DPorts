--- glib/glibmm/propertyproxy_base.cc.orig	2013-05-29 12:04:23.000000000 +0000
+++ glib/glibmm/propertyproxy_base.cc
@@ -24,6 +24,7 @@
 #include <glibmm/signalproxy_connectionnode.h>
 #include <glibmm/object.h>
 #include <glibmm/private/object_p.h>
+#include <cstring>
 
 namespace Glib
 {
