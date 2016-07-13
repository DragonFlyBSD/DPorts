--- src/ime.cpp.orig	2005-05-21 18:21:48.000000000 +0300
+++ src/ime.cpp
@@ -3,6 +3,7 @@
 #define Uses_SCIM_CONFIG_BASE
 #define Uses_SCIM_CONFIG_PATH
 #include <ctype.h>
+#include <cstring>
 
 #include <scim.h>
 #include "scim_fcitx_imengine.h"
