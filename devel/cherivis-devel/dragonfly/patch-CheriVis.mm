--- CheriVis.mm.orig	2016-02-10 17:10:37.000000000 +0200
+++ CheriVis.mm
@@ -9,6 +9,7 @@
 #include <regex>
 #include <thread>
 #include <atomic>
+#include <cstdio> // for snprintf
 
 using std::shared_ptr;
 using namespace cheri;
@@ -21,7 +22,7 @@ using cheri::streamtrace::register_set;
 NSString *CVCallGraphSelectionChangedNotification = @"_CVCallGraphSelectionChangedNotification";
 NSString *kCVCallGraphSelectedAddressRange = @"kCVCallGraphSelectedAddressRange";
 
-#ifdef  __linux__
+#if defined(__linux__) || defined(__DragonFly__)
 #define snprintf_l(str, size, loc, fmt, ...) snprintf(str, size, fmt, __VA_ARGS__)
 #endif
 
