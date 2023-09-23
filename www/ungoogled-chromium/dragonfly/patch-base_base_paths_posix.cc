diff --git base/base_paths_posix.cc base/base_paths_posix.cc
index 2a819e1eff1..8b93531348c 100644
--- base/base_paths_posix.cc
+++ base/base_paths_posix.cc
@@ -51,7 +51,7 @@ bool PathProviderPosix(int key, FilePath* result) {
       }
       *result = bin_dir;
       return true;
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
       int name[] = { CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1 };
       char bin_dir[PATH_MAX + 1];
       size_t length = sizeof(bin_dir);
