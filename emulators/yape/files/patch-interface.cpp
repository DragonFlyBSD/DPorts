
$FreeBSD: head/emulators/yape/files/patch-interface.cpp 340725 2014-01-22 17:40:44Z mat $

--- interface.cpp.orig
+++ interface.cpp
@@ -10,7 +10,7 @@
 	(c) 2000, 2001 Attila Grósz
 */
 
-#include "SDL/SDL.h"
+#include "SDL.h"
 #include "tedmem.h"
 #include "interface.h"
 #include "archdep.h"
