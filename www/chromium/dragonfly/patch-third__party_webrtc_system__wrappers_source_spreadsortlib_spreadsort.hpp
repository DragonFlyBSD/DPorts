--- third_party/webrtc/system_wrappers/source/spreadsortlib/spreadsort.hpp.orig	2014-09-09 23:47:56.000000000 +0000
+++ third_party/webrtc/system_wrappers/source/spreadsortlib/spreadsort.hpp
@@ -21,6 +21,10 @@ Scott McMurray
 #include <vector>
 #include "webrtc/system_wrappers/source/spreadsortlib/constants.hpp"
 
+#ifdef __DragonFly__
+#  define getchar boost_getchar
+#endif
+
 namespace boost {
   namespace detail {
   	//This only works on unsigned data types
