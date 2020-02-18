--- src/storage/io_config.cpp.orig	2019-01-30 23:35:51 UTC
+++ src/storage/io_config.cpp
@@ -15,7 +15,12 @@ bool IOConfig::IsValid() const
     bool success = true;
     for (auto &fileName : required_input_files)
     {
+#ifdef __DragonFly__
+        boost::filesystem::path zpath = base_path.string() + fileName.string();
+        if (!boost::filesystem::is_regular_file(zpath))
+#else
         if (!boost::filesystem::is_regular_file({base_path.string() + fileName.string()}))
+#endif
         {
             util::Log(logWARNING) << "Missing/Broken File: " << base_path.string()
                                   << fileName.string();
