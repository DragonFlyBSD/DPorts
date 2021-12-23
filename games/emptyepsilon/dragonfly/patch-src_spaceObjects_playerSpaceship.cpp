--- src/spaceObjects/playerSpaceship.cpp.orig	2021-06-23 12:12:02 UTC
+++ src/spaceObjects/playerSpaceship.cpp
@@ -7,6 +7,7 @@
 #include "preferenceManager.h"
 
 #include "scriptInterface.h"
+#include <cmath> // for std::fabs()
 
 // PlayerSpaceship are ships controlled by a player crew.
 REGISTER_SCRIPT_SUBCLASS(PlayerSpaceship, SpaceShip)
