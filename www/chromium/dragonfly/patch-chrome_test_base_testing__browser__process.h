diff --git chrome/test/base/testing_browser_process.h chrome/test/base/testing_browser_process.h
index 384bb169d423..d7723ba6599a 100644
--- chrome/test/base/testing_browser_process.h
+++ chrome/test/base/testing_browser_process.h
@@ -142,7 +142,6 @@ class TestingBrowserProcess : public BrowserProcess {
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX)
   void StartAutoupdateTimer() override {}
-#endif
 
   component_updater::ComponentUpdateService* component_updater() override;
   MediaFileSystemRegistry* media_file_system_registry() override;
