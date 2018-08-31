--- src/devices/cpu/mips/mips3.cpp.orig	2018-07-24 19:45:05 UTC
+++ src/devices/cpu/mips/mips3.cpp
@@ -8,6 +8,7 @@
 
 ***************************************************************************/
 
+#include <cmath>
 #include "emu.h"
 #include "debugger.h"
 #include "mips3.h"
