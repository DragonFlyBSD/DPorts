--- src/plugins_3rdparty/ball/src/include/BALL/MATHS/common.h.orig	2014-02-07 16:52:32.000000000 +0000
+++ src/plugins_3rdparty/ball/src/include/BALL/MATHS/common.h
@@ -180,7 +180,7 @@ namespace BALL
 			#ifdef BALL_COMPILER_MSVC
 				return (_isnan(t) != 0);
 			#else
-				return (isnan(t) != 0);
+				return (std::isnan(t) != 0);
 			#endif
 		}
 
