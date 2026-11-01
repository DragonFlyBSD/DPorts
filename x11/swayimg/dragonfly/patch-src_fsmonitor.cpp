--- src/fsmonitor.cpp.orig
+++ src/fsmonitor.cpp
@@ -131,7 +131,7 @@
     // compose full path
     std::filesystem::path path = it->second;
     if (event->len) {
-        path /= event->name;
+        path /= static_cast<const char*>(event->name);
     }
 
     // send app event
