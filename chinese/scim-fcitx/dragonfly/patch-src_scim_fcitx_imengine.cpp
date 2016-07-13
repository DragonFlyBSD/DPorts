--- src/scim_fcitx_imengine.cpp.orig	2005-05-20 17:41:12.000000000 +0300
+++ src/scim_fcitx_imengine.cpp
@@ -39,6 +39,7 @@
 #include "scim_fcitx_imengine.h"
 #include "main.h"
 #include "ime.h"
+#include <cstring>
 
 #define scim_module_init fcitx_LTX_scim_module_init
 #define scim_module_exit fcitx_LTX_scim_module_exit
