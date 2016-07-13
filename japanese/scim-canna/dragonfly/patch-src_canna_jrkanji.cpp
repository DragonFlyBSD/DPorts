--- src/canna_jrkanji.cpp.orig	2006-02-02 05:04:11.000000000 +0200
+++ src/canna_jrkanji.cpp
@@ -24,6 +24,8 @@
   #include <config.h>
 #endif
 
+#include <cstring>
+
 #include "canna_jrkanji.h"
 #include "scim_canna_imengine.h"
 #include "scim_canna_imengine_factory.h"
