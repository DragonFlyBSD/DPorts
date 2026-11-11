--- luabridge.cc.orig
+++ luabridge.cc
@@ -3,7 +3,7 @@
 #include "sol/sol.hpp"
 #include <fmt/chrono.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <limits.h>
 
