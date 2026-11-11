--- src/system/Icons.cpp.orig
+++ src/system/Icons.cpp
@@ -23,6 +23,14 @@
 using namespace Hyprutils::String;
 using namespace Hyprutils::Utils;
 
+// libstdc++ before GCC 15 has no std::formatter for ranges.
+static std::string joinPaths(const std::vector<std::string>& paths) {
+    std::string s;
+    for (const auto& p : paths)
+        s += (s.empty() ? "" : ", ") + p;
+    return s;
+}
+
 static std::optional<std::string> readFileAsString(const std::string& path) {
     std::error_code ec;
 
@@ -120,7 +128,7 @@
             // try to find it
             auto themeDir = getThemeDir(iconTheme);
             if (themeDir && !themeDir->empty()) {
-                g_logger->log(HT_LOG_TRACE, "CSystemIconFactory: Found {} as default fallback", themeDir.value());
+                g_logger->log(HT_LOG_TRACE, "CSystemIconFactory: Found {} as default fallback", joinPaths(themeDir.value()));
                 return themeDir;
             }
 
@@ -240,7 +248,7 @@
 
             auto inheritTheme = getThemeDir(trim(std::string{inheritName}));
             if (inheritTheme) {
-                g_logger->log(HT_LOG_TRACE, "CSystemIconFactory: parsing inherited theme {}", *inheritTheme);
+                g_logger->log(HT_LOG_TRACE, "CSystemIconFactory: parsing inherited theme {}", joinPaths(*inheritTheme));
                 parseThemes(*inheritTheme);
             } else
                 g_logger->log(HT_LOG_WARNING, "CSystemIconFactory: inherited theme {} not found", std::string{inheritName});
