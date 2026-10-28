--- src/misc/configuration.cxx.orig
+++ src/misc/configuration.cxx
@@ -59,7 +59,7 @@
 #include <map>
 #include <sstream>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 #  include <glob.h>
 
