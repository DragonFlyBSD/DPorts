--- src/3rdparty/chromium/base/base_paths_posix.cc.orig	Thu Nov  6 18:50:45 2025
+++ src/3rdparty/chromium/base/base_paths_posix.cc	Thu Nov
@@ -52,7 +52,7 @@ bool PathProviderPosix(int key, FilePath* result) {
       }
       *result = bin_dir;
       return true;
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
       absl::optional<std::string> bin_dir = StringSysctl({ CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1 });
       if (!bin_dir.has_value() || bin_dir.value().length() <= 1) {
         NOTREACHED() << "Unable to resolve path.";
