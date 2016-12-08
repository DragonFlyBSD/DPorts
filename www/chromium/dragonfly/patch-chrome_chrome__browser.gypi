--- chrome/chrome_browser.gypi.orig	2016-11-10 22:02:11.000000000 +0200
+++ chrome/chrome_browser.gypi
@@ -1212,25 +1212,25 @@
     'chrome_browser_non_mac_desktop_sources': [
       'browser/renderer_context_menu/spelling_options_submenu_observer.cc',
       'browser/renderer_context_menu/spelling_options_submenu_observer.h',
-    ],
-    # Desktop linux, doesn't count ChromeOS.
-    'chrome_browser_linux_desktop_sources': [
+      'browser/icon_loader_auralinux.cc',
       'browser/first_run/upgrade_util.cc',
       'browser/first_run/upgrade_util_linux.cc',
       'browser/first_run/upgrade_util_linux.h',
-      'browser/fullscreen_aurax11.cc',
-      'browser/icon_loader_auralinux.cc',
-      'browser/media/window_icon_util_x11.cc',
-      'browser/password_manager/native_backend_kwallet_x.cc',
-      'browser/password_manager/native_backend_kwallet_x.h',
       'browser/platform_util_linux.cc',
+      'browser/speech/tts_linux.cc',
       'browser/shell_integration_linux.cc',
       'browser/shell_integration_linux.h',
-      'browser/speech/tts_linux.cc',
       'browser/themes/theme_service_aurax11.cc',
       'browser/themes/theme_service_aurax11.h',
       'browser/web_applications/web_app_linux.cc',
     ],
+    # Desktop linux, doesn't count ChromeOS.
+    'chrome_browser_linux_desktop_sources': [
+      'browser/fullscreen_aurax11.cc',
+      'browser/media/window_icon_util_x11.cc',
+      'browser/password_manager/native_backend_kwallet_x.cc',
+      'browser/password_manager/native_backend_kwallet_x.h',
+    ],
     'chrome_browser_mac_sources': [
       'browser/media/window_icon_util_mac.mm',
       'browser/password_manager/password_manager_util_mac.h',
