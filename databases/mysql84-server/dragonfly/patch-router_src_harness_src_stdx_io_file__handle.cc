--- router/src/harness/src/stdx/io/file_handle.cc.orig	2026-06-30 16:11:51 UTC
+++ router/src/harness/src/stdx/io/file_handle.cc
@@ -166,7 +166,11 @@ file_handle::current_path() const noexcept {
     return stdx::unexpected(make_error_code(std::errc::bad_file_descriptor));
   }
 
-#if defined(__linux__) || defined(__sun)
+#if defined(__DragonFly__)
+  // no /proc fd symlinks or sysctl filedesc walk usable here,
+  // report the fd as not found
+  return stdx::unexpected(make_error_code(std::errc::bad_file_descriptor));
+#elif defined(__linux__) || defined(__sun)
   const std::string in =
 #if defined(__linux__)
       // /proc/self/fd/<id> is a symlink to the actual file
