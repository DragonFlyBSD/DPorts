--- chrome/browser/web_applications/os_integration/os_integration_test_override.cc.orig	2023-03-09 06:31:50 UTC
+++ chrome/browser/web_applications/os_integration/os_integration_test_override.cc
@@ -147,7 +147,7 @@ bool OsIntegrationTestOverride::IsRunOnOsLoginEnabled(
     Profile* profile,
     const AppId& app_id,
     const std::string& app_name) {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   std::string shortcut_filename =
       "chrome-" + app_id + "-" + profile->GetBaseName().value() + ".desktop";
   return base::PathExists(startup().Append(shortcut_filename));
@@ -217,7 +217,7 @@ base::FilePath OsIntegrationTestOverride::GetShortcutP
       app_installed_profiles.end()) {
     return shortcut_path;
   }
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   std::string shortcut_filename =
       "chrome-" + app_id + "-" + profile->GetBaseName().value() + ".desktop";
   base::FilePath shortcut_path = shortcut_dir.Append(shortcut_filename);
@@ -242,7 +242,7 @@ bool OsIntegrationTestOverride::IsShortcutCreated(Prof
   base::FilePath app_shortcut_path =
       GetShortcutPath(profile, chrome_apps_folder(), app_id, app_name);
   return base::PathExists(app_shortcut_path);
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   base::FilePath desktop_shortcut_path =
       GetShortcutPath(profile, desktop(), app_id, app_name);
   return base::PathExists(desktop_shortcut_path);
@@ -270,7 +270,7 @@ bool OsIntegrationTestOverride::SimulateDeleteShortcut
       GetShortcutPath(profile, chrome_apps_folder(), app_id, app_name);
   DCHECK(base::PathExists(app_folder_shortcut_path));
   return base::DeletePathRecursively(app_folder_shortcut_path);
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   base::FilePath desktop_shortcut_path =
       GetShortcutPath(profile, desktop(), app_id, app_name);
   LOG(INFO) << desktop_shortcut_path;
@@ -287,7 +287,7 @@ bool OsIntegrationTestOverride::ForceDeleteAllShortcut
   return DeleteDesktopDirOnWin() && DeleteApplicationMenuDirOnWin();
 #elif BUILDFLAG(IS_MAC)
   return DeleteChromeAppsDir();
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return DeleteDesktopDirOnLinux();
 #else
   NOTREACHED() << "Not implemented on ChromeOS/Fuchsia ";
@@ -327,7 +327,7 @@ void OsIntegrationTestOverride::EnableOrDisablePathOnL
   startup_enabled_[file_path] = enable_on_login;
 }
 
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 bool OsIntegrationTestOverride::DeleteDesktopDirOnLinux() {
   if (desktop_.IsValid()) {
     return desktop_.Delete();
@@ -360,7 +360,7 @@ OsIntegrationTestOverride::OsIntegrationTestOverride(
 #elif BUILDFLAG(IS_MAC)
     bool success = chrome_apps_folder_.CreateUniqueTempDirUnderPath(base_path);
     DCHECK(success);
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     bool success = desktop_.CreateUniqueTempDirUnderPath(base_path);
     DCHECK(success);
     success = startup_.CreateUniqueTempDirUnderPath(base_path);
@@ -379,7 +379,7 @@ OsIntegrationTestOverride::OsIntegrationTestOverride(
 #elif BUILDFLAG(IS_MAC)
     bool success = chrome_apps_folder_.CreateUniqueTempDir();
     DCHECK(success);
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     bool success = desktop_.CreateUniqueTempDir();
     DCHECK(success);
     success = startup_.CreateUniqueTempDir();
@@ -387,7 +387,7 @@ OsIntegrationTestOverride::OsIntegrationTestOverride(
 #endif
   }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   auto callback =
       base::BindRepeating([](base::FilePath filename, std::string xdg_command,
                              std::string file_contents) {
@@ -421,7 +421,7 @@ OsIntegrationTestOverride::~OsIntegrationTestOverride(
       }
     }
   }
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Reset the file handling callback.
   SetUpdateMimeInfoDatabaseOnLinuxCallbackForTesting(
       UpdateMimeInfoDatabaseOnLinuxCallback());
