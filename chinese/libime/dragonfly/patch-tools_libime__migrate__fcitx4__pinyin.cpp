--- tools/libime_migrate_fcitx4_pinyin.cpp.orig	2020-12-30 05:59:13 UTC
+++ tools/libime_migrate_fcitx4_pinyin.cpp
@@ -20,7 +20,7 @@
 #include <string_view>
 #include <unordered_map>
 
-#if __GNUC__ <= 7
+#if __GNUC__ <= 8
 #include <boost/filesystem.hpp>
 #else
 #include <filesystem>
@@ -349,7 +349,7 @@ int main(int argc, char *argv[]) {
             if (dictFile[0] == '/') {
                 outputDictFile = dictFile;
             } else {
-#if __GNUC__ <= 7
+#if __GNUC__ <= 8
                 outputDictFile = boost::filesystem::absolute(dictFile).string();
 #else
                 outputDictFile = std::filesystem::absolute(dictFile);
@@ -375,7 +375,7 @@ int main(int argc, char *argv[]) {
             if (historyFile[0] == '/') {
                 outputHistoryFile = historyFile;
             } else {
-#if __GNUC__ <= 7
+#if __GNUC__ <= 8
                 outputHistoryFile =
                     boost::filesystem::absolute(historyFile).string();
 #else
