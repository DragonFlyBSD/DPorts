--- src/3rdparty/chromium/third_party/blink/renderer/platform/wtf/stack_util.cc.orig	2026-10-23 12:00:00 UTC
+++ src/3rdparty/chromium/third_party/blink/renderer/platform/wtf/stack_util.cc
@@ -44,14 +44,15 @@ size_t GetUnderestimatedStackSize() {
 // correctly for the main thread.
 
 #elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_FUCHSIA) || \
+    BUILDFLAG(IS_DRAGONFLY)
   // pthread_getattr_np() can fail if the thread is not invoked by
   // pthread_create() (e.g., the main thread of blink_unittests).
   // If so, a conservative size estimate is returned.
 
   pthread_attr_t attr;
   int error;
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   pthread_attr_init(&attr);
   error = pthread_attr_get_np(pthread_self(), &attr);
 #else
@@ -65,7 +66,7 @@ size_t GetUnderestimatedStackSize() {
     pthread_attr_destroy(&attr);
     return size;
   }
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   pthread_attr_destroy(&attr);
 #endif
 
@@ -119,10 +120,10 @@ void* GetStackStartImpl() {
 
 void* GetStackStartImpl() {
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || \
-    BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_DRAGONFLY)
   pthread_attr_t attr;
   int error;
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   pthread_attr_init(&attr);
   error = pthread_attr_get_np(pthread_self(), &attr);
 #else
@@ -136,7 +137,7 @@ void* GetStackStartImpl() {
     pthread_attr_destroy(&attr);
     return reinterpret_cast<uint8_t*>(base) + size;
   }
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   pthread_attr_destroy(&attr);
 #endif
 #if defined(__GLIBC__)
