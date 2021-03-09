--- tools/libime_migrate_fcitx4_table.cpp.orig	2020-12-30 05:59:13 UTC
+++ tools/libime_migrate_fcitx4_table.cpp
@@ -18,7 +18,7 @@
 #include <istream>
 #include <sstream>
 
-#if __GNUC__ <= 7
+#if __GNUC__ <= 8
 #include <boost/filesystem.hpp>
 #else
 #include <filesystem>
@@ -88,7 +88,7 @@ struct MigrationCommonOption {
             if (useXdgPath) {
                 return stringutils::joinPath("table", path);
             } else {
-#if __GNUC__ <= 7
+#if __GNUC__ <= 8
                 return boost::filesystem::absolute(path).string();
 #else
                 return std::filesystem::absolute(path);
