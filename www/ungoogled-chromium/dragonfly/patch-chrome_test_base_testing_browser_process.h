diff --git chrome/test/base/testing_browser_process.h chrome/test/base/testing_browser_process.h
index 421746232447..65848b7dc7a4 100644
--- chrome/test/base/testing_browser_process.h
+++ chrome/test/base/testing_browser_process.h
@@ -147,7 +147,6 @@ class TestingBrowserProcess : public BrowserProcess {
 // complete.
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
   void StartAutoupdateTimer() override {}
-#endif
 
   component_updater::ComponentUpdateService* component_updater() override;
   MediaFileSystemRegistry* media_file_system_registry() override;
