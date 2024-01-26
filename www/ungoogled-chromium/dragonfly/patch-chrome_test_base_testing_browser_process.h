diff --git chrome/test/base/testing_browser_process.h chrome/test/base/testing_browser_process.h
index 445052fd977..b18cae3347e 100644
--- chrome/test/base/testing_browser_process.h
+++ chrome/test/base/testing_browser_process.h
@@ -141,7 +141,6 @@ class TestingBrowserProcess : public BrowserProcess {
 // complete.
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
   void StartAutoupdateTimer() override {}
-#endif
 
   component_updater::ComponentUpdateService* component_updater() override;
   MediaFileSystemRegistry* media_file_system_registry() override;
