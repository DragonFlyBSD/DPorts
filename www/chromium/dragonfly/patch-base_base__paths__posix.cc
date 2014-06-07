--- base/base_paths_posix.cc.orig	2013-07-04 03:39:56.000000000 +0000
+++ base/base_paths_posix.cc
@@ -43,6 +43,11 @@ bool PathProviderPosix(int key, FilePath
       *result = bin_dir;
       return true;
 #elif defined(OS_FREEBSD)
+#  ifdef __DragonFly__
+      // There is currently no way to get the executable path on DragonFly
+      *result = FilePath("/usr/local/bin/chrome");
+      return true;
+#  else
       int name[] = { CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1 };
       char bin_dir[PATH_MAX + 1];
       size_t length = sizeof(bin_dir);
@@ -55,6 +60,7 @@ bool PathProviderPosix(int key, FilePath
       }
       *result = FilePath(FilePath::StringType(bin_dir, length - 1));
       return true;
+#  endif
 #elif defined(OS_SOLARIS)
       char bin_dir[PATH_MAX + 1];
       if (realpath(getexecname(), bin_dir) == NULL) {
