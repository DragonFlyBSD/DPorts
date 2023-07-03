--- router/src/harness/src/stdx/io/file_handle.cc.orig	2022-12-16 15:34:44 UTC
+++ router/src/harness/src/stdx/io/file_handle.cc
@@ -166,7 +166,10 @@ file_handle::current_path() const noexce
         make_error_code(std::errc::bad_file_descriptor));
   }
 
-#if defined(__linux__) || defined(__sun)
+#if defined(__DragonFly__)
+  // fd wasn't found
+  return stdx::make_unexpected(make_error_code(std::errc::bad_file_descriptor));
+#elif defined(__linux__) || defined(__sun)
   const std::string in =
 #if defined(__linux__)
       // /proc/self/fd/<id> is a symlink to the actual file
