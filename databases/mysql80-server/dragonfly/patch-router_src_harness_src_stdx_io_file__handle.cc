XXX sysctl(CTL_KERN, KERN_PROC, KERN_PROC_FILEDESC, getpid)

--- router/src/harness/src/stdx/io/file_handle.cc.orig	2020-06-16 16:31:03 UTC
+++ router/src/harness/src/stdx/io/file_handle.cc
@@ -63,7 +63,9 @@ namespace stdx {
 namespace io {
 
 constexpr const file_handle::native_handle_type file_handle::invalid_handle;
+#ifndef __DragonFly__
 constexpr const flag::value_type flag::unlink_on_first_close;
+#endif
 
 static std::error_code last_posix_error_code() {
   return {errno, std::generic_category()};
@@ -149,6 +151,7 @@ stdx::expected<stat_type, std::error_cod
 
 }  // namespace impl
 
+#ifndef __DragonFly__
 stdx::expected<file_handle::path_type, std::error_code>
 file_handle::current_path() const noexcept {
   if (handle_ == invalid_handle) {
@@ -278,7 +281,9 @@ file_handle::current_path() const noexce
 #error unsupported OS
 #endif
 }
+#endif
 
+#ifndef __DragonFly__
 stdx::expected<void, std::error_code> file_handle::unlink() {
   // unlink works on the filenames, but we have a filehandle
   auto res = current_path();
@@ -286,12 +291,15 @@ stdx::expected<void, std::error_code> fi
 
   return impl::unlink(res.value().c_str());
 }
+#endif
 
 stdx::expected<void, std::error_code> file_handle::close() noexcept {
   if (handle_ != invalid_handle) {
+#ifndef __DragonFly__
     if (flags_ & flag::unlink_on_first_close) {
       unlink();
     }
+#endif
     auto close_res = impl::close(handle_);
 
     if (!close_res) {
