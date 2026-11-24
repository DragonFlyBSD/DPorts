--- src/Wt/WDocRootDataInfo.C.orig
+++ src/Wt/WDocRootDataInfo.C
@@ -6,11 +6,11 @@

 #include "Wt/WDocRootDataInfo.h"

+#include "Wt/cpp17/filesystem.hpp"
+
 #include "Wt/WApplication.h"
 #include "Wt/WException.h"

-#include <boost/filesystem/path.hpp>
-
 namespace Wt {

 WDocRootDataInfo::WDocRootDataInfo(const std::string& path)
@@ -25,8 +25,8 @@
 std::string WDocRootDataInfo::filePath() const
 {
   if (hasFilePath()) {
-    boost::filesystem::path path = boost::filesystem::path(relPath_);
-    path = boost::filesystem::path(WApplication::instance()->docRoot()) / path;
+    cpp17::filesystem::path path = cpp17::filesystem::path(relPath_);
+    path = cpp17::filesystem::path(WApplication::instance()->docRoot()) / path;
     return path.string();
   }
   return WAbstractDataInfo::filePath();
