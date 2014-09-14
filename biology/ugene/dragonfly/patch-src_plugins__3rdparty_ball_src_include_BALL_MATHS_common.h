--- src/plugins_3rdparty/ball/src/include/BALL/MATHS/common.h.orig	2014-09-13 18:15:15 UTC
+++ src/plugins_3rdparty/ball/src/include/BALL/MATHS/common.h
@@ -175,7 +175,7 @@ namespace BALL
                 #ifdef BALL_OS_WINDOWS
                     return (_isnan(t) != 0);
                 #else
-                    return (isnan(t) != 0);
+                    return (std::isnan(t) != 0);
                 #endif
             #endif
         }
