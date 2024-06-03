diff --git third_party/blink/renderer/platform/wtf/stack_util.cc third_party/blink/renderer/platform/wtf/stack_util.cc
index 47be45345fa..d9f43ba155d 100644
--- src/3rdparty/chromium/third_party/blink/renderer/platform/wtf/stack_util.cc
+++ src/3rdparty/chromium/third_party/blink/renderer/platform/wtf/stack_util.cc
@@ -35,14 +35,14 @@ size_t GetUnderestimatedStackSize() {
 // correctly for the main thread.
 
 #elif defined(__GLIBC__) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FREEBSD) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || defined(OS_DRAGONFLY)
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
@@ -56,7 +56,7 @@ size_t GetUnderestimatedStackSize() {
     pthread_attr_destroy(&attr);
     return size;
   }
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   pthread_attr_destroy(&attr);
 #endif
 
@@ -105,10 +105,10 @@ size_t GetUnderestimatedStackSize() {
 
 void* GetStackStart() {
 #if defined(__GLIBC__) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FREEBSD) || \
-    BUILDFLAG(IS_FUCHSIA)
+  BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_DRAGONFLY)
   pthread_attr_t attr;
   int error;
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   pthread_attr_init(&attr);
   error = pthread_attr_get_np(pthread_self(), &attr);
 #else
@@ -122,7 +122,7 @@ void* GetStackStart() {
     pthread_attr_destroy(&attr);
     return reinterpret_cast<uint8_t*>(base) + size;
   }
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   pthread_attr_destroy(&attr);
 #endif
 #if defined(__GLIBC__)
