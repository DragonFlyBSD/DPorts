diff --git base/base_paths_posix.cc base/base_paths_posix.cc
index b943bd8331f..c4595dca77d 100644
--- base/base_paths_posix.cc
+++ base/base_paths_posix.cc
@@ -52,7 +52,7 @@ bool PathProviderPosix(int key, FilePath* result) {
       }
       *result = bin_dir;
       return true;
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
       absl::optional<std::string> bin_dir = StringSysctl({ CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1 });
       if (!bin_dir.has_value() || bin_dir.value().length() <= 1) {
         NOTREACHED() << "Unable to resolve path.";
