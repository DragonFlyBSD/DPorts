--- src/Version/include/OpenLoco/Version.hpp.intermediate	2026-09-18 18:47:20 UTC
+++ src/Version/include/OpenLoco/Version.hpp
@@ -44,6 +44,8 @@
     #define OPENLOCO_PLATFORM "macOS"
 #elif defined(__FreeBSD__)
     #define OPENLOCO_PLATFORM "FreeBSD"
+#elif defined(__DragonFly__)
+    #define OPENLOCO_PLATFORM "DragonFly"
 #elif defined(__NetBSD__)
     #define OPENLOCO_PLATFORM "NetBSD"
 #elif defined(__OpenBSD__)
