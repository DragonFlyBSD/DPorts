--- simgear/misc/gzcontainerfile.cxx.orig	2013-09-16 17:56:31.000000000 +0000
+++ simgear/misc/gzcontainerfile.cxx
@@ -43,6 +43,7 @@
 #  include <simgear_config.h>
 #endif
 
+#include <stdlib.h>
 #include "gzcontainerfile.hxx"
 
 #include <simgear/props/props_io.hxx>
