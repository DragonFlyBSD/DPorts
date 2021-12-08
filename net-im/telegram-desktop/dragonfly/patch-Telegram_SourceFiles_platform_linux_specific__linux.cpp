--- Telegram/SourceFiles/platform/linux/specific_linux.cpp.intermediate	2021-12-03 12:33:32 UTC
+++ Telegram/SourceFiles/platform/linux/specific_linux.cpp
@@ -48,7 +48,6 @@ https://github.com/telegramdesktop/tdesk
 #include <gio/gio.h>
 #include <glibmm.h>
 #include <giomm.h>
-#include <malloc_np.h>
 
 #include <sys/stat.h>
 #include <sys/types.h>
@@ -728,7 +727,7 @@ namespace Platform {
 
 void start() {
 	auto backgroundThread = true;
-	mallctl("background_thread", nullptr, nullptr, &backgroundThread, sizeof(bool));
+//	mallctl("background_thread", nullptr, nullptr, &backgroundThread, sizeof(bool));
 
 	LOG(("Launcher filename: %1").arg(QGuiApplication::desktopFileName()));
 
