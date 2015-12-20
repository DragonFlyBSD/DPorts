--- Platoon.h.intermediate	2015-12-18 14:32:16.000000000 +0200
+++ Platoon.h
@@ -2,6 +2,7 @@
 #define Platoon_H
 #include "robouser.h"
 #include <list>
+#include <cstring>
 
 /* FIXME: 'reasonable' upper bound on number of users CPU can handle */
 #define Platoon_MAXUSERS (1 << 16)
