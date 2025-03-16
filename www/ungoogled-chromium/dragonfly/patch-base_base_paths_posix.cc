diff --git base/base_paths_posix.cc base/base_paths_posix.cc
index 54cb09377597..93907e334f07 100644
--- base/base_paths_posix.cc
+++ base/base_paths_posix.cc
@@ -53,7 +53,7 @@ bool PathProviderPosix(int key, FilePath* result) {
       }
       *result = bin_dir;
       return true;
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
       std::optional<std::string> bin_dir = StringSysctl({ CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1 });
       if (!bin_dir.has_value() || bin_dir.value().length() <= 1) {
         NOTREACHED_IN_MIGRATION() << "Unable to resolve path.";
