XXX sysctl(CTL_KERN, KERN_PROC, KERN_PROC_FILEDESC, getpid)

--- router/src/harness/include/mysql/harness/stdx/io/file_handle.h.orig	2020-06-16 16:31:03 UTC
+++ router/src/harness/include/mysql/harness/stdx/io/file_handle.h
@@ -74,7 +74,9 @@ class flag {
   using value_type = uint64_t;
 
   static constexpr value_type none{0};
+#ifndef __DragonFly__
   static constexpr value_type unlink_on_first_close{1 << 0};
+#endif
 
   constexpr flag(value_type v) : value_{v} {}
 
@@ -142,7 +144,9 @@ class file_handle {
       const path_handle &base, mode _mode = mode::write,
       caching _caching = caching::temporary, flag flags = flag::none) noexcept;
 
+#ifndef __DragonFly__
   stdx::expected<void, std::error_code> unlink();
+#endif
 
   stdx::expected<void, std::error_code> close() noexcept;
 
@@ -159,7 +163,9 @@ class file_handle {
   ino_t st_ino() const noexcept { return inode_; }
 
   // get path of the current file_handle
+#ifndef __DragonFly__
   stdx::expected<path_type, std::error_code> current_path() const noexcept;
+#endif
 
  private:
   native_handle_type handle_{invalid_handle};
