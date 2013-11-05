--- mozilla/media/webrtc/trunk/webrtc/system_wrappers/source/spreadsortlib/spreadsort.hpp.intermediate	2013-10-16 21:31:39.000000000 +0000
+++ mozilla/media/webrtc/trunk/webrtc/system_wrappers/source/spreadsortlib/spreadsort.hpp
@@ -21,6 +21,10 @@ Scott McMurray
 #include "constants.hpp"
 #include <cstring>
 
+#ifdef __DragonFly__
+#  define getchar boost_getchar
+#endif
+
 #ifdef __FreeBSD__
 # include <osreldate.h>
 # if __FreeBSD_version < 900506
