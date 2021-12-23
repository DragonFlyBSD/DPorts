--- src/screenComponents/selfDestructIndicator.cpp.orig	2021-06-23 12:12:02 UTC
+++ src/screenComponents/selfDestructIndicator.cpp
@@ -4,6 +4,7 @@
 
 #include "gui/gui2_panel.h"
 #include "gui/gui2_label.h"
+#include <cmath> // for std::nearbyint
 
 GuiSelfDestructIndicator::GuiSelfDestructIndicator(GuiContainer* owner)
 : GuiElement(owner, "SELF_DESTRUCT_INDICATOR")
