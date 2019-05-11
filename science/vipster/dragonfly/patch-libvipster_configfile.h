--- libvipster/configfile.h.intermediate	2019-05-11 08:37:45.000000000 +0000
+++ libvipster/configfile.h
@@ -27,7 +27,7 @@ bool saveConfig();
 #ifdef __EMSCRIPTEN__
 const std::string user_path{}; // not used
 const std::string user_config{}; // not used
-#elif __linux__ || defined(__FreeBSD__)
+#elif __linux__ || defined(__FreeBSD__) || defined(__DragonFly__)
 const std::string user_path = [](){
         auto tmp = std::getenv("XDG_CONFIG_HOME");
         return tmp == nullptr ? std::string{std::getenv("HOME")}+"/.config" : tmp;
