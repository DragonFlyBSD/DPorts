--- server/seat.cpp.orig	2021-11-30 10:32:36 UTC
+++ server/seat.cpp
@@ -34,6 +34,11 @@ License along with this library.  If not
 #define WL_SEAT_NAME_SINCE_VERSION 2
 #endif
 
+#ifndef WL_SEAT_ERROR_MISSING_CAPABILITY
+// actually enum but will do
+#define WL_SEAT_ERROR_MISSING_CAPABILITY 0
+#endif
+
 namespace Wrapland::Server
 {
 
