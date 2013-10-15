
$FreeBSD: emulators/yape/files/patch-interface.cpp 300896 2012-07-14 13:54:48Z beat $

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
