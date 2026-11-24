--- src/Gui/GuiApplicationNativeEventAware.cpp.orig
+++ src/Gui/GuiApplicationNativeEventAware.cpp
@@ -32,7 +32,7 @@
 
 
 #if defined(_USE_3DCONNEXION_SDK) || defined(SPNAV_FOUND)
-# if defined(Q_OS_LINUX) || defined(Q_OS_FREEBSD)
+# if defined(Q_OS_LINUX) || defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
 #  if defined(SPNAV_USE_X11)
 #   include "3Dconnexion/GuiNativeEventLinuxX11.h"
 #  else
