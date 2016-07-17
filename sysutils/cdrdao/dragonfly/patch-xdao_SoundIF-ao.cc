--- xdao/SoundIF-ao.cc.intermediate	2016-07-13 13:00:41 UTC
+++ xdao/SoundIF-ao.cc
@@ -22,6 +22,7 @@
 #include "SoundIF.h"
 #include "Sample.h"
 #include "util.h"
+#include <cstring> // for memset
 
 class SoundIFImpl
 {
