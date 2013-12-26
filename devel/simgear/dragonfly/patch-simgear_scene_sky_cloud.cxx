--- simgear/scene/sky/cloud.cxx.orig	2013-09-16 17:56:31.000000000 +0000
+++ simgear/scene/sky/cloud.cxx
@@ -27,7 +27,7 @@
 
 #include <sstream>
 
-#include <math.h>
+#include <cmath>
 
 #include <simgear/structure/OSGVersion.hxx>
 #include <osg/AlphaFunc>
@@ -736,7 +736,7 @@ bool SGCloudLayer::reposition( const SGV
             // this happens, lets just use the last known good course.
             // This is a hack, and it would probably be better to make
             // calc_gc_course_dist() more robust.
-            if ( isnan(course) ) {
+            if ( std::isnan(course) ) {
                 course = last_course;
             } else {
                 last_course = course;
