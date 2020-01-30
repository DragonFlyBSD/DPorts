--- libvipster/configfile.h.orig	2019-10-07 17:05:30 UTC
+++ libvipster/configfile.h
@@ -30,7 +30,7 @@ using ConfigState = std::tuple<PeriodicT
 ConfigState readConfig();
 void saveConfig(const ConfigState &);
 
-#if __linux__ || defined(__FreeBSD__)
+#if __linux__ || defined(__FreeBSD__) || defined(__DragonFly__)
 const std::string user_path = [](){
         auto tmp = std::getenv("XDG_CONFIG_HOME");
         return tmp == nullptr ? std::string{std::getenv("HOME")}+"/.config" : tmp;
