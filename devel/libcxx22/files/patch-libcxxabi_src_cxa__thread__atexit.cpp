--- libcxxabi/src/cxa_thread_atexit.cpp.orig	2026-09-19 15:55:19 UTC
+++ libcxxabi/src/cxa_thread_atexit.cpp
@@ -106,7 +106,7 @@
 
 #endif // HAVE___CXA_THREAD_ATEXIT_IMPL
 
-#if defined(__linux__) || defined(__Fuchsia__)
+#if defined(__linux__) || defined(__Fuchsia__) || defined(__DragonFly__)
 extern "C" {
 
   _LIBCXXABI_FUNC_VIS int __cxa_thread_atexit(Dtor dtor, void* obj, void* dso_symbol) throw() {
@@ -142,5 +142,5 @@
 #endif // HAVE___CXA_THREAD_ATEXIT_IMPL
   }
 } // extern "C"
-#endif // defined(__linux__) || defined(__Fuchsia__)
+#endif // defined(__linux__) || defined(__Fuchsia__) || defined(__DragonFly__)
 } // namespace __cxxabiv1
