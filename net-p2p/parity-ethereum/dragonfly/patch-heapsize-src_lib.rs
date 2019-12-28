The malloc_usable_size() is not safe when used with custom allocators.

--- ../heapsize-c07ffe843acb9da570682e290a48540741afdce1/src/lib.rs.orig	2019-01-29 09:18:07 UTC
+++ ../heapsize-c07ffe843acb9da570682e290a48540741afdce1/src/lib.rs
@@ -42,7 +42,7 @@ pub unsafe fn heap_size_of<T>(ptr: *cons
     }
 }
 
-#[cfg(not(any(target_os = "windows",target_os = "macos")))]
+#[cfg(not(any(target_os = "windows",target_os = "macos",target_os = "dragonfly")))]
 unsafe fn heap_size_of_impl(ptr: *const c_void) -> usize {
     // The C prototype is `je_malloc_usable_size(JEMALLOC_USABLE_SIZE_CONST void *ptr)`. On some
     // platforms `JEMALLOC_USABLE_SIZE_CONST` is `const` and on some it is empty. But in practice
@@ -55,6 +55,11 @@ unsafe fn heap_size_of_impl(ptr: *const
     malloc_usable_size(ptr)
 }
 
+#[cfg(target_os = "dragonfly")]
+unsafe fn heap_size_of_impl(mut ptr: *const c_void) -> usize {
+	0
+}
+
 #[cfg(target_os = "macos")]
 unsafe fn heap_size_of_impl(mut ptr: *const c_void) -> usize {
 	jemallocator::usable_size(ptr)
