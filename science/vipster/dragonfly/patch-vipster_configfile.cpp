--- vipster/configfile.cpp.orig	2020-12-22 10:44:42 UTC
+++ vipster/configfile.cpp
@@ -52,7 +52,7 @@ const Plugin* openPlugin(fs::path name)
 }
 
 fs::path Vipster::getConfigDir(){
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
     auto tmp = std::getenv("XDG_CONFIG_HOME");
     return fs::path{tmp == nullptr ? std::string{std::getenv("HOME")}+"/.config" : tmp}/"vipster";
 #elif defined(_WIN32)
