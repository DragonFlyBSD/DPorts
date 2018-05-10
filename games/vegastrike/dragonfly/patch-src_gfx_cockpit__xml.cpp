--- src/gfx/cockpit_xml.cpp.intermediate	2018-03-02 18:59:12.000000000 +0000
+++ src/gfx/cockpit_xml.cpp
@@ -315,7 +315,7 @@ void GameCockpit::beginElement( const st
         for (counter = 0; counter < 4; ++counter)
             if (!replaced[counter]) {
                 delete Pit[counter];
-                Pit[counter] = false;
+                Pit[counter] = NULL;
             }
         break;
     case UnitImages< void >::SHIELD4:
